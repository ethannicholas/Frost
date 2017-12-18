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
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Real64.h"
#include "panda/core/Panda.h"
#include "panda/core/Formattable.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$CCodeGenerator$OpClass, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

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
typedef void (*$fn1151)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1169)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1216)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1233)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1282)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1285)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1292)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1309)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1322)(panda$collections$CollectionView*);
typedef void (*$fn1344)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1484)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1596)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1607)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1611)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1623)(panda$collections$Iterator*);
typedef void (*$fn1631)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1634)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1664)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1670)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1686)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1696)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1700)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1711)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1718)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1721)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1916)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1957)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1961)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1993)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1998)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2004)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2010)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2018)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn2025)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2030)(panda$collections$CollectionView*);
typedef void (*$fn2041)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2172)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2181)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2186)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2229)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2234)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2240)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2246)(panda$collections$Iterator*);
typedef void (*$fn2250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2271)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2310)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2404)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2414)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2419)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2423)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2429)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2435)(panda$collections$Iterator*);
typedef void (*$fn2437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2460)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2470)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2506)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2513)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2531)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2545)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2567)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2609)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2623)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2637)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2654)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2670)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2681)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2694)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2700)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2705)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2744)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2751)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2769)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2783)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2795)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2803)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2810)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2822)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2832)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2870)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2912)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2926)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2972)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2989)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3004)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3034)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3065)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3081)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3109)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3149)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3155)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3189)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3211)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3228)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3234)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3240)(panda$collections$Iterator*);
typedef void (*$fn3285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3301)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3346)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3361)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3427)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3460)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3469)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3474)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3480)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3486)(panda$collections$Iterator*);
typedef void (*$fn3499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3502)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3514)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3520)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3526)(panda$collections$Iterator*);
typedef void (*$fn3529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3531)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3534)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3544)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3546)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3548)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3550)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3552)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3553)(panda$core$Object*);

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
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6d\x61\x6c\x6c\x6f\x63\x28", 9, 1541204091645718446, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6c\x6c\x6f\x63\x28", 10, 8088200864683738024, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x29\x20\x7b", 11, -2797487400017398975, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x6c\x6c\x6f\x63\x28", 7, 223950062312973, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x63\x6c\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 27, 7283889564528102738, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x20\x3d\x20\x31\x3b", 15, -7616502316629902533, NULL };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20", 10, -5658520382000078270, NULL };
static panda$core$String $s1705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x4e\x55\x4c\x4c\x3b", 8, 14324497440495800, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x6c\x6c\x6f\x63\x28", 7, 223950062312973, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s1959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x2e\x76\x61\x6c\x75\x65\x20\x3d\x20\x31\x3b", 21, 5666803292027080506, NULL };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20\x32\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 70, 2026475985823268269, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 21242756259, NULL };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s3533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };

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
        if ($tmp113 >= 1) goto $l112; else goto $l103;
        $l115:;
        if ($tmp113 > 1) goto $l112; else goto $l103;
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
    if ($tmp290 >= 1) goto $l289; else goto $l280;
    $l292:;
    if ($tmp290 > 1) goto $l289; else goto $l280;
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
    if ($tmp469 >= 1) goto $l468; else goto $l449;
    $l471:;
    if ($tmp469 > 1) goto $l468; else goto $l449;
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
    if ($tmp509 >= 1) goto $l508; else goto $l490;
    $l511:;
    if ($tmp509 > 1) goto $l508; else goto $l490;
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
    if ($tmp548 >= 1) goto $l547; else goto $l535;
    $l550:;
    if ($tmp548 > 1) goto $l547; else goto $l535;
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
    if ($tmp701 >= 1) goto $l700; else goto $l688;
    $l703:;
    if ($tmp701 > 1) goto $l700; else goto $l688;
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
            if ($tmp1014 >= 1) goto $l1013; else goto $l991;
            $l1016:;
            if ($tmp1014 > 1) goto $l1013; else goto $l991;
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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1129;
    panda$core$Bit logical1130;
    panda$core$String* result1148;
    logical1130 = ((panda$core$Bit) { false });
    switch (p_op.value) {
        case 51:
        {
            cOp1129 = &$s1131;
        }
        break;
        case 52:
        {
            cOp1129 = &$s1132;
        }
        break;
        case 53:
        {
            cOp1129 = &$s1133;
        }
        break;
        case 55:
        {
            cOp1129 = &$s1134;
        }
        break;
        case 54:
        {
            cOp1129 = &$s1135;
        }
        break;
        case 56:
        {
            cOp1129 = &$s1136;
        }
        break;
        case 72:
        {
            cOp1129 = &$s1137;
        }
        break;
        case 1:
        {
            cOp1129 = &$s1138;
        }
        break;
        case 67:
        {
            cOp1129 = &$s1139;
        }
        break;
        case 69:
        {
            cOp1129 = &$s1140;
        }
        break;
        case 70:
        case 71:
        {
            cOp1129 = &$s1141;
        }
        break;
        case 58:
        {
            cOp1129 = &$s1142;
            logical1130 = ((panda$core$Bit) { true });
        }
        break;
        case 59:
        {
            cOp1129 = &$s1143;
            logical1130 = ((panda$core$Bit) { true });
        }
        break;
        case 63:
        {
            cOp1129 = &$s1144;
            logical1130 = ((panda$core$Bit) { true });
        }
        break;
        case 62:
        {
            cOp1129 = &$s1145;
            logical1130 = ((panda$core$Bit) { true });
        }
        break;
        case 65:
        {
            cOp1129 = &$s1146;
            logical1130 = ((panda$core$Bit) { true });
        }
        break;
        case 64:
        {
            logical1130 = ((panda$core$Bit) { true });
            cOp1129 = &$s1147;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$String* $tmp1149 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1148 = $tmp1149;
    if (logical1130.value) {
    {
        (($fn1151) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1150);
    }
    }
    else {
    {
        panda$core$String* $tmp1152 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1153 = panda$core$String$convert$R$panda$core$String($tmp1152);
        panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1153, &$s1154);
        (($fn1156) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1155);
    }
    }
    panda$core$String* $tmp1157 = panda$core$String$convert$R$panda$core$String(result1148);
    panda$core$String* $tmp1159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1157, &$s1158);
    panda$core$String* $tmp1160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1159, p_leftRef);
    panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1160, &$s1161);
    panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1162, cOp1129);
    panda$core$String* $tmp1165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, &$s1164);
    panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1165, p_rightRef);
    panda$core$String* $tmp1168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1166, &$s1167);
    (($fn1169) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1168);
    return result1148;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1170;
    panda$core$String* rightRef1172;
    panda$core$String* $tmp1171 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1170 = $tmp1171;
    panda$core$String* $tmp1173 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1172 = $tmp1173;
    panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1174, leftRef1170);
    panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1176);
    panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1177, rightRef1172);
    panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1178, &$s1179);
    return $tmp1180;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1181;
    panda$core$String* rightRef1183;
    panda$core$String* $tmp1182 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1181 = $tmp1182;
    panda$core$String* $tmp1184 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1183 = $tmp1184;
    panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1185, leftRef1181);
    panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1186, &$s1187);
    panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1188, rightRef1183);
    panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1189, &$s1190);
    return $tmp1191;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1197;
    panda$core$String* rightRef1199;
    panda$core$Bit $tmp1192 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1192.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1193 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1193;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1194 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1194;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1195 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1195;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1196 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1196;
        }
        break;
        default:
        {
            panda$core$String* $tmp1198 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1197 = $tmp1198;
            panda$core$String* $tmp1200 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1199 = $tmp1200;
            panda$core$String* $tmp1201 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left->type, leftRef1197, p_op, rightRef1199, p_out);
            return $tmp1201;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1202.value);
    panda$core$Int64 $tmp1203 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1203, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1204.value);
    panda$core$Object* $tmp1205 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1206 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1207 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1205), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1206), p_out);
    return $tmp1207;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1208;
    panda$core$Int64 index1210;
    panda$collections$ListView* vtable1211;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1213;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1209 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1208 = $tmp1209;
    index1210 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1212 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1211 = $tmp1212;
    ITable* $tmp1214 = ((panda$collections$CollectionView*) vtable1211)->$class->itable;
    while ($tmp1214->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1214 = $tmp1214->next;
    }
    $fn1216 $tmp1215 = $tmp1214->methods[0];
    panda$core$Int64 $tmp1217 = $tmp1215(((panda$collections$CollectionView*) vtable1211));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1213, ((panda$core$Int64) { 0 }), $tmp1217, ((panda$core$Bit) { false }));
    int64_t $tmp1219 = $tmp1213.min.value;
    panda$core$Int64 i1218 = { $tmp1219 };
    int64_t $tmp1221 = $tmp1213.max.value;
    bool $tmp1222 = $tmp1213.inclusive.value;
    if ($tmp1222) goto $l1229; else goto $l1230;
    $l1229:;
    if ($tmp1219 <= $tmp1221) goto $l1223; else goto $l1225;
    $l1230:;
    if ($tmp1219 < $tmp1221) goto $l1223; else goto $l1225;
    $l1223:;
    {
        ITable* $tmp1231 = vtable1211->$class->itable;
        while ($tmp1231->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1231 = $tmp1231->next;
        }
        $fn1233 $tmp1232 = $tmp1231->methods[0];
        panda$core$Object* $tmp1234 = $tmp1232(vtable1211, i1218);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1234)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1210 = i1218;
            goto $l1225;
        }
        }
    }
    $l1226:;
    int64_t $tmp1236 = $tmp1221 - i1218.value;
    if ($tmp1222) goto $l1237; else goto $l1238;
    $l1237:;
    if ($tmp1236 >= 1) goto $l1235; else goto $l1225;
    $l1238:;
    if ($tmp1236 > 1) goto $l1235; else goto $l1225;
    $l1235:;
    i1218.value += 1;
    goto $l1223;
    $l1225:;
    panda$core$Bit $tmp1241 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1210, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1241.value);
    org$pandalanguage$pandac$Type* $tmp1243 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1244 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1243);
    panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1242, $tmp1244);
    panda$core$String* $tmp1247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1245, &$s1246);
    panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1247, p_target);
    panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1248, &$s1249);
    panda$core$Int64$wrapper* $tmp1251;
    $tmp1251 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1251->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1251->refCount = 1;
    $tmp1251->value = index1210;
    panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1250, ((panda$core$Object*) $tmp1251));
    panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1252, &$s1253);
    return $tmp1254;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1255;
    panda$core$String* itable1257;
    panda$core$Int64 index1286;
    panda$collections$ListView* vtable1287;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1289;
    panda$core$String* result1326;
    panda$core$String* methodType1328;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1256 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1255 = $tmp1256;
    panda$core$String* $tmp1258 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1257 = $tmp1258;
    panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1259, itable1257);
    panda$core$String* $tmp1262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1260, &$s1261);
    panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1262, p_target);
    panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1263, &$s1264);
    (($fn1266) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1265);
    panda$core$String* $tmp1268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1267, itable1257);
    panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1268, &$s1269);
    panda$core$String* $tmp1271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1270, cc1255->name);
    panda$core$String* $tmp1273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1271, &$s1272);
    (($fn1274) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1273);
    panda$core$Int64 $tmp1275 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1275;
    panda$core$String* $tmp1276 = panda$core$String$convert$R$panda$core$String(itable1257);
    panda$core$String* $tmp1278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1276, &$s1277);
    panda$core$String* $tmp1279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1278, itable1257);
    panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1279, &$s1280);
    (($fn1282) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1281);
    panda$core$Int64 $tmp1283 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1283;
    (($fn1285) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1284);
    index1286 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1288 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1287 = $tmp1288;
    ITable* $tmp1290 = ((panda$collections$CollectionView*) vtable1287)->$class->itable;
    while ($tmp1290->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1290 = $tmp1290->next;
    }
    $fn1292 $tmp1291 = $tmp1290->methods[0];
    panda$core$Int64 $tmp1293 = $tmp1291(((panda$collections$CollectionView*) vtable1287));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1289, ((panda$core$Int64) { 0 }), $tmp1293, ((panda$core$Bit) { false }));
    int64_t $tmp1295 = $tmp1289.min.value;
    panda$core$Int64 i1294 = { $tmp1295 };
    int64_t $tmp1297 = $tmp1289.max.value;
    bool $tmp1298 = $tmp1289.inclusive.value;
    if ($tmp1298) goto $l1305; else goto $l1306;
    $l1305:;
    if ($tmp1295 <= $tmp1297) goto $l1299; else goto $l1301;
    $l1306:;
    if ($tmp1295 < $tmp1297) goto $l1299; else goto $l1301;
    $l1299:;
    {
        ITable* $tmp1307 = vtable1287->$class->itable;
        while ($tmp1307->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1307 = $tmp1307->next;
        }
        $fn1309 $tmp1308 = $tmp1307->methods[0];
        panda$core$Object* $tmp1310 = $tmp1308(vtable1287, i1294);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1310)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1286 = i1294;
            goto $l1301;
        }
        }
    }
    $l1302:;
    int64_t $tmp1312 = $tmp1297 - i1294.value;
    if ($tmp1298) goto $l1313; else goto $l1314;
    $l1313:;
    if ($tmp1312 >= 1) goto $l1311; else goto $l1301;
    $l1314:;
    if ($tmp1312 > 1) goto $l1311; else goto $l1301;
    $l1311:;
    i1294.value += 1;
    goto $l1299;
    $l1301:;
    org$pandalanguage$pandac$Type* $tmp1317 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1318 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1317);
    panda$collections$ListView* $tmp1319 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1318);
    ITable* $tmp1320 = ((panda$collections$CollectionView*) $tmp1319)->$class->itable;
    while ($tmp1320->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1320 = $tmp1320->next;
    }
    $fn1322 $tmp1321 = $tmp1320->methods[0];
    panda$core$Int64 $tmp1323 = $tmp1321(((panda$collections$CollectionView*) $tmp1319));
    panda$core$Int64 $tmp1324 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1286, $tmp1323);
    index1286 = $tmp1324;
    panda$core$Bit $tmp1325 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1286, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1325.value);
    panda$core$String* $tmp1327 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1326 = $tmp1327;
    org$pandalanguage$pandac$Type* $tmp1329 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1330 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1329);
    methodType1328 = $tmp1330;
    panda$core$String* $tmp1331 = panda$core$String$convert$R$panda$core$String(methodType1328);
    panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, &$s1332);
    panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1333, result1326);
    panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1334, &$s1335);
    panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1336, itable1257);
    panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1337, &$s1338);
    panda$core$Int64$wrapper* $tmp1340;
    $tmp1340 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1340->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1340->refCount = 1;
    $tmp1340->value = index1286;
    panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1339, ((panda$core$Object*) $tmp1340));
    panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1341, &$s1342);
    (($fn1344) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1343);
    return result1326;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1346 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1345 = $tmp1346.value;
    if (!$tmp1345) goto $l1347;
    panda$core$Bit $tmp1348 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1345 = $tmp1348.value;
    $l1347:;
    panda$core$Bit $tmp1349 = { $tmp1345 };
    if ($tmp1349.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1350.value) {
        {
            panda$core$String* $tmp1351 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1351;
        }
        }
        else {
        {
            panda$core$String* $tmp1352 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1352;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1353 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1353.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1354 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1354;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1355;
    panda$core$String* $match$853_91356;
    panda$core$String* count1361;
    panda$core$Int64 elementSize1367;
    panda$core$String* ptr1387;
    panda$core$String* ptr1398;
    panda$core$String* index1401;
    panda$core$String* ptr1414;
    panda$core$String* count1417;
    panda$core$Int64 elementSize1423;
    panda$core$String* ptr1446;
    panda$core$String* offset1449;
    m1355 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$853_91356 = ((org$pandalanguage$pandac$Symbol*) m1355->value)->name;
        panda$core$Bit $tmp1358 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$853_91356, &$s1357);
        if ($tmp1358.value) {
        {
            panda$core$Int64 $tmp1359 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1359, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1360.value);
            panda$core$Object* $tmp1362 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1363 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1362), p_out);
            count1361 = $tmp1363;
            org$pandalanguage$pandac$Type* $tmp1364 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1355);
            panda$core$Int64 $tmp1365 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1364->subtypes);
            panda$core$Bit $tmp1366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1365, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1366.value);
            org$pandalanguage$pandac$Type* $tmp1368 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1355);
            panda$core$Object* $tmp1369 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1368->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1370 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1369));
            elementSize1367 = $tmp1370;
            panda$core$String* $tmp1372 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1371, $tmp1372);
            panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1373, &$s1374);
            panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1375, count1361);
            panda$core$String* $tmp1378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1376, &$s1377);
            panda$core$Int64$wrapper* $tmp1379;
            $tmp1379 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1379->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1379->refCount = 1;
            $tmp1379->value = elementSize1367;
            panda$core$String* $tmp1380 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1378, ((panda$core$Object*) $tmp1379));
            panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1380, &$s1381);
            return $tmp1382;
        }
        }
        else {
        panda$core$Bit $tmp1384 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$853_91356, &$s1383);
        if ($tmp1384.value) {
        {
            panda$core$Int64 $tmp1385 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1385, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1386.value);
            panda$core$Object* $tmp1388 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1389 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1388), p_out);
            ptr1387 = $tmp1389;
            panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1390, ptr1387);
            panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, &$s1392);
            return $tmp1393;
        }
        }
        else {
        panda$core$Bit $tmp1395 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$853_91356, &$s1394);
        if ($tmp1395.value) {
        {
            panda$core$Int64 $tmp1396 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1396, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1397.value);
            panda$core$Object* $tmp1399 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1400 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1399), p_out);
            ptr1398 = $tmp1400;
            panda$core$Object* $tmp1402 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1403 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1402), p_out);
            index1401 = $tmp1403;
            panda$core$String* $tmp1404 = panda$core$String$convert$R$panda$core$String(ptr1398);
            panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1404, &$s1405);
            panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1406, index1401);
            panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1407, &$s1408);
            return $tmp1409;
        }
        }
        else {
        panda$core$Bit $tmp1411 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$853_91356, &$s1410);
        if ($tmp1411.value) {
        {
            panda$core$Int64 $tmp1412 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1412, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1413.value);
            panda$core$Object* $tmp1415 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1416 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1415), p_out);
            ptr1414 = $tmp1416;
            panda$core$Object* $tmp1418 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1419 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1418), p_out);
            count1417 = $tmp1419;
            org$pandalanguage$pandac$Type* $tmp1420 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1355);
            panda$core$Int64 $tmp1421 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1420->subtypes);
            panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1421, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1422.value);
            org$pandalanguage$pandac$Type* $tmp1424 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1355);
            panda$core$Object* $tmp1425 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1424->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1426 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1425));
            elementSize1423 = $tmp1426;
            panda$core$String* $tmp1428 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1427, $tmp1428);
            panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, &$s1430);
            panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, ptr1414);
            panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1433);
            panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, count1417);
            panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, &$s1436);
            panda$core$Int64$wrapper* $tmp1438;
            $tmp1438 = (panda$core$Int64$wrapper*) malloc(24);
            $tmp1438->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
            $tmp1438->refCount = 1;
            $tmp1438->value = elementSize1423;
            panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1437, ((panda$core$Object*) $tmp1438));
            panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1439, &$s1440);
            return $tmp1441;
        }
        }
        else {
        panda$core$Bit $tmp1443 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$853_91356, &$s1442);
        if ($tmp1443.value) {
        {
            panda$core$Int64 $tmp1444 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1444, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1445.value);
            panda$core$Object* $tmp1447 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1448 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1447), p_out);
            ptr1446 = $tmp1448;
            panda$core$Object* $tmp1450 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1451 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1450), p_out);
            offset1449 = $tmp1451;
            panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1452, ptr1446);
            panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1454);
            panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1455, offset1449);
            panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1456, &$s1457);
            return $tmp1458;
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
    org$pandalanguage$pandac$MethodDecl* m1460;
    panda$core$String* bit1471;
    panda$core$String* result1475;
    panda$core$String* bit1489;
    panda$core$String* result1493;
    panda$collections$Array* args1503;
    org$pandalanguage$pandac$Type* actualMethodType1507;
    panda$core$String* actualResultType1508;
    panda$core$Bit isSuper1509;
    panda$core$Int64 offset1529;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1534;
    panda$core$String* arg1549;
    panda$core$String* target1570;
    panda$core$String* methodRef1574;
    panda$core$Bit indirect1576;
    panda$core$String* result1578;
    panda$core$String* separator1580;
    panda$core$String* indirectVar1582;
    panda$collections$Iterator* arg$Iter1608;
    panda$core$String* arg1620;
    panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1459.value);
    m1460 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1462 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1460->owner)->name, &$s1461);
    if ($tmp1462.value) {
    {
        panda$core$String* $tmp1463 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1463;
    }
    }
    panda$core$Bit $tmp1464 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1460->owner);
    if ($tmp1464.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1460);
    }
    }
    panda$core$Bit $tmp1466 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1460->owner)->name, &$s1465);
    if ($tmp1466.value) {
    {
        panda$core$Bit $tmp1468 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1460)->name, &$s1467);
        if ($tmp1468.value) {
        {
            panda$core$Int64 $tmp1469 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1469, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1470.value);
            panda$core$Object* $tmp1472 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1473 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1474 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1472), ((org$pandalanguage$pandac$IRNode*) $tmp1473), p_out);
            bit1471 = $tmp1474;
            panda$core$String* $tmp1476 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1475 = $tmp1476;
            panda$core$String* $tmp1478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1477, result1475);
            panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1478, &$s1479);
            panda$core$String* $tmp1481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, bit1471);
            panda$core$String* $tmp1483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1481, &$s1482);
            (($fn1484) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1483);
            return result1475;
        }
        }
        panda$core$Bit $tmp1486 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1460)->name, &$s1485);
        if ($tmp1486.value) {
        {
            panda$core$Int64 $tmp1487 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1487, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1488.value);
            panda$core$Object* $tmp1490 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1491 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1492 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1490), ((org$pandalanguage$pandac$IRNode*) $tmp1491), p_out);
            bit1489 = $tmp1492;
            panda$core$String* $tmp1494 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1493 = $tmp1494;
            panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1495, result1493);
            panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1496, &$s1497);
            panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1498, bit1489);
            panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1499, &$s1500);
            (($fn1502) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1501);
            return result1493;
        }
        }
    }
    }
    panda$collections$Array* $tmp1504 = (panda$collections$Array*) malloc(40);
    $tmp1504->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1504->refCount.value = 1;
    panda$core$Int64 $tmp1506 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1504, $tmp1506);
    args1503 = $tmp1504;
    panda$core$Int64 $tmp1511 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1512 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1511, ((panda$core$Int64) { 1 }));
    bool $tmp1510 = $tmp1512.value;
    if (!$tmp1510) goto $l1513;
    panda$core$Object* $tmp1514 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1515 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1514)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1510 = $tmp1515.value;
    $l1513:;
    panda$core$Bit $tmp1516 = { $tmp1510 };
    isSuper1509 = $tmp1516;
    panda$core$Bit $tmp1518 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1509);
    bool $tmp1517 = $tmp1518.value;
    if (!$tmp1517) goto $l1519;
    panda$core$Bit $tmp1520 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1460);
    $tmp1517 = $tmp1520.value;
    $l1519:;
    panda$core$Bit $tmp1521 = { $tmp1517 };
    if ($tmp1521.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1522 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1460);
        actualMethodType1507 = $tmp1522;
        panda$core$Int64 $tmp1523 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1507->subtypes);
        panda$core$Int64 $tmp1524 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1523, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1525 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1507->subtypes, $tmp1524);
        panda$core$String* $tmp1526 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1525));
        actualResultType1508 = $tmp1526;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1527 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1460);
        actualMethodType1507 = $tmp1527;
        panda$core$String* $tmp1528 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1508 = $tmp1528;
    }
    }
    panda$core$Int64 $tmp1530 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1531 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1507->subtypes);
    panda$core$Int64 $tmp1532 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1530, $tmp1531);
    panda$core$Int64 $tmp1533 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1532, ((panda$core$Int64) { 1 }));
    offset1529 = $tmp1533;
    panda$core$Int64 $tmp1535 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1534, ((panda$core$Int64) { 0 }), $tmp1535, ((panda$core$Bit) { false }));
    int64_t $tmp1537 = $tmp1534.min.value;
    panda$core$Int64 i1536 = { $tmp1537 };
    int64_t $tmp1539 = $tmp1534.max.value;
    bool $tmp1540 = $tmp1534.inclusive.value;
    if ($tmp1540) goto $l1547; else goto $l1548;
    $l1547:;
    if ($tmp1537 <= $tmp1539) goto $l1541; else goto $l1543;
    $l1548:;
    if ($tmp1537 < $tmp1539) goto $l1541; else goto $l1543;
    $l1541:;
    {
        panda$core$Object* $tmp1550 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1536);
        panda$core$String* $tmp1551 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1550), p_out);
        arg1549 = $tmp1551;
        panda$core$Bit $tmp1553 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1536, offset1529);
        bool $tmp1552 = $tmp1553.value;
        if (!$tmp1552) goto $l1554;
        panda$core$Int64 $tmp1555 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1536, offset1529);
        panda$core$Object* $tmp1556 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1507->subtypes, $tmp1555);
        panda$core$Object* $tmp1557 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1536);
        panda$core$Bit $tmp1558 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1556), ((org$pandalanguage$pandac$IRNode*) $tmp1557)->type);
        $tmp1552 = $tmp1558.value;
        $l1554:;
        panda$core$Bit $tmp1559 = { $tmp1552 };
        if ($tmp1559.value) {
        {
            panda$core$Object* $tmp1560 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1536);
            panda$core$Int64 $tmp1561 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1536, offset1529);
            panda$core$Object* $tmp1562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1507->subtypes, $tmp1561);
            panda$core$String* $tmp1563 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1549, ((org$pandalanguage$pandac$IRNode*) $tmp1560)->type, ((org$pandalanguage$pandac$Type*) $tmp1562), p_out);
            arg1549 = $tmp1563;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1503, ((panda$core$Object*) arg1549));
    }
    $l1544:;
    int64_t $tmp1565 = $tmp1539 - i1536.value;
    if ($tmp1540) goto $l1566; else goto $l1567;
    $l1566:;
    if ($tmp1565 >= 1) goto $l1564; else goto $l1543;
    $l1567:;
    if ($tmp1565 > 1) goto $l1564; else goto $l1543;
    $l1564:;
    i1536.value += 1;
    goto $l1541;
    $l1543:;
    panda$core$Int64 $tmp1571 = panda$collections$Array$get_count$R$panda$core$Int64(args1503);
    panda$core$Bit $tmp1572 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1571, ((panda$core$Int64) { 0 }));
    if ($tmp1572.value) {
    {
        panda$core$Object* $tmp1573 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1503, ((panda$core$Int64) { 0 }));
        target1570 = ((panda$core$String*) $tmp1573);
    }
    }
    else {
    {
        target1570 = NULL;
    }
    }
    panda$core$String* $tmp1575 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1570, m1460, isSuper1509, p_out);
    methodRef1574 = $tmp1575;
    panda$core$Bit $tmp1577 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1460);
    indirect1576 = $tmp1577;
    panda$core$String* $tmp1579 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1578 = $tmp1579;
    separator1580 = &$s1581;
    if (indirect1576.value) {
    {
        panda$core$String* $tmp1583 = panda$core$String$convert$R$panda$core$String(actualResultType1508);
        panda$core$String* $tmp1585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1583, &$s1584);
        panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1585, result1578);
        panda$core$String* $tmp1588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1586, &$s1587);
        (($fn1589) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1588);
        panda$core$String* $tmp1590 = panda$core$String$convert$R$panda$core$String(methodRef1574);
        panda$core$String* $tmp1592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1590, &$s1591);
        panda$core$String* $tmp1593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1592, result1578);
        panda$core$String* $tmp1595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1593, &$s1594);
        (($fn1596) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1595);
        separator1580 = &$s1597;
    }
    }
    else {
    {
        panda$core$String* $tmp1598 = panda$core$String$convert$R$panda$core$String(actualResultType1508);
        panda$core$String* $tmp1600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1598, &$s1599);
        panda$core$String* $tmp1601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1600, result1578);
        panda$core$String* $tmp1603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1601, &$s1602);
        panda$core$String* $tmp1604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, methodRef1574);
        panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1604, &$s1605);
        (($fn1607) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1606);
    }
    }
    {
        ITable* $tmp1609 = ((panda$collections$Iterable*) args1503)->$class->itable;
        while ($tmp1609->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1609 = $tmp1609->next;
        }
        $fn1611 $tmp1610 = $tmp1609->methods[0];
        panda$collections$Iterator* $tmp1612 = $tmp1610(((panda$collections$Iterable*) args1503));
        arg$Iter1608 = $tmp1612;
        $l1613:;
        ITable* $tmp1615 = arg$Iter1608->$class->itable;
        while ($tmp1615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1615 = $tmp1615->next;
        }
        $fn1617 $tmp1616 = $tmp1615->methods[0];
        panda$core$Bit $tmp1618 = $tmp1616(arg$Iter1608);
        panda$core$Bit $tmp1619 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1618);
        if (!$tmp1619.value) goto $l1614;
        {
            ITable* $tmp1621 = arg$Iter1608->$class->itable;
            while ($tmp1621->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1621 = $tmp1621->next;
            }
            $fn1623 $tmp1622 = $tmp1621->methods[1];
            panda$core$Object* $tmp1624 = $tmp1622(arg$Iter1608);
            arg1620 = ((panda$core$String*) $tmp1624);
            panda$core$String* $tmp1625 = panda$core$String$convert$R$panda$core$String(separator1580);
            panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1625, &$s1626);
            panda$core$String* $tmp1628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1627, arg1620);
            panda$core$String* $tmp1630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1628, &$s1629);
            (($fn1631) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1630);
            separator1580 = &$s1632;
        }
        goto $l1613;
        $l1614:;
    }
    (($fn1634) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1633);
    panda$core$String* $tmp1635 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1636 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1635, actualResultType1508);
    if ($tmp1636.value) {
    {
        panda$core$Int64 $tmp1637 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1507->subtypes);
        panda$core$Int64 $tmp1638 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1637, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1507->subtypes, $tmp1638);
        panda$core$String* $tmp1640 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1578, ((org$pandalanguage$pandac$Type*) $tmp1639), p_call->type, p_out);
        return $tmp1640;
    }
    }
    return result1578;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1642;
    panda$core$String* nonNullValue1645;
    panda$core$String* wrapped1655;
    panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1641.value) {
    {
        panda$core$Object* $tmp1643 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1644 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1643), p_out);
        unwrapped1642 = $tmp1644;
        panda$core$Object* $tmp1646 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1647 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1642, ((org$pandalanguage$pandac$Type*) $tmp1646), p_dstType, p_out);
        nonNullValue1645 = $tmp1647;
        panda$core$String* $tmp1649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1648, p_value);
        panda$core$String* $tmp1651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1649, &$s1650);
        panda$core$String* $tmp1652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1651, nonNullValue1645);
        panda$core$String* $tmp1654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1652, &$s1653);
        return $tmp1654;
    }
    }
    panda$core$String* $tmp1656 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    wrapped1655 = $tmp1656;
    panda$core$String* $tmp1657 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1658 = panda$core$String$convert$R$panda$core$String($tmp1657);
    panda$core$String* $tmp1660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1658, &$s1659);
    panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1660, wrapped1655);
    panda$core$String* $tmp1663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1661, &$s1662);
    (($fn1664) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1663);
    panda$core$Bit $tmp1665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1665.value) {
    {
        panda$core$String* $tmp1667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1666, p_value);
        panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1667, &$s1668);
        (($fn1670) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1669);
        panda$core$Int64 $tmp1671 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1671;
    }
    }
    panda$core$String* $tmp1672 = panda$core$String$convert$R$panda$core$String(wrapped1655);
    panda$core$String* $tmp1674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1672, &$s1673);
    panda$core$String* $tmp1675 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1674, $tmp1675);
    panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, &$s1677);
    panda$core$Int64 $tmp1680 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_srcType);
    panda$core$Int64$wrapper* $tmp1681;
    $tmp1681 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1681->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1681->refCount = 1;
    $tmp1681->value = $tmp1680;
    panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1679, ((panda$core$Object*) $tmp1681));
    panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1682, &$s1683);
    panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1678, $tmp1684);
    (($fn1686) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1685);
    panda$core$String* $tmp1687 = panda$core$String$convert$R$panda$core$String(wrapped1655);
    panda$core$String* $tmp1689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1687, &$s1688);
    panda$core$String* $tmp1691 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_srcType)->name);
    panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1690, $tmp1691);
    panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1692, &$s1693);
    panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1689, $tmp1694);
    (($fn1696) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1695);
    panda$core$String* $tmp1697 = panda$core$String$convert$R$panda$core$String(wrapped1655);
    panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1697, &$s1698);
    (($fn1700) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1699);
    panda$core$String* $tmp1701 = panda$core$String$convert$R$panda$core$String(wrapped1655);
    panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1701, &$s1702);
    panda$core$String* $tmp1704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, p_value);
    panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1704, &$s1705);
    (($fn1707) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1706);
    panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1708.value) {
    {
        panda$core$Int64 $tmp1709 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1709;
        (($fn1711) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1710);
        (($fn1713) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1712);
        panda$core$Int64 $tmp1714 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1714;
        panda$core$String* $tmp1715 = panda$core$String$convert$R$panda$core$String(wrapped1655);
        panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1715, &$s1716);
        (($fn1718) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1717);
        panda$core$Int64 $tmp1719 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
        p_out->level = $tmp1719;
        (($fn1721) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1720);
    }
    }
    panda$core$String* $tmp1723 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1722, $tmp1723);
    panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1724, &$s1725);
    panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, wrapped1655);
    panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, &$s1728);
    return $tmp1729;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1733;
    org$pandalanguage$pandac$ClassDecl* cl1736;
    panda$core$String* base1739;
    panda$core$Bit $tmp1730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1730.value);
    panda$core$Int64 $tmp1731 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1731, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1732.value);
    field1733 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1734 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1733->annotations);
    if ($tmp1734.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1733->value != NULL }).value);
        panda$core$String* $tmp1735 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1733->value, p_out);
        return $tmp1735;
    }
    }
    panda$core$Object* $tmp1737 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1738 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1737)->type);
    cl1736 = $tmp1738;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1736);
    panda$core$Object* $tmp1740 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1741 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1740), p_out);
    base1739 = $tmp1741;
    PANDA_ASSERT(((panda$core$Bit) { cl1736 != NULL }).value);
    panda$core$Bit $tmp1742 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1736);
    if ($tmp1742.value) {
    {
        panda$core$String* $tmp1743 = panda$core$String$convert$R$panda$core$String(base1739);
        panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1743, &$s1744);
        panda$core$String* $tmp1746 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1733)->name);
        panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1745, $tmp1746);
        panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, &$s1748);
        return $tmp1749;
    }
    }
    panda$core$String* $tmp1750 = panda$core$String$convert$R$panda$core$String(base1739);
    panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1750, &$s1751);
    panda$core$String* $tmp1753 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1733)->name);
    panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, $tmp1753);
    panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1755);
    return $tmp1756;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1757;
    panda$core$String* wrapped1767;
    panda$core$String* nonNullValue1770;
    panda$core$String* $tmp1759 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1758, $tmp1759);
    panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1760, &$s1761);
    panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1762, p_value);
    panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1763, &$s1764);
    result1757 = $tmp1765;
    panda$core$Bit $tmp1766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1766.value) {
    {
        panda$core$Object* $tmp1768 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1769 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1768), p_out);
        wrapped1767 = $tmp1769;
        panda$core$Object* $tmp1771 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1772 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1767, ((org$pandalanguage$pandac$Type*) $tmp1771), p_dstType, p_out);
        nonNullValue1770 = $tmp1772;
        panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1773, p_value);
        panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1774, &$s1775);
        panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1776, nonNullValue1770);
        panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1777, &$s1778);
        panda$core$String* $tmp1780 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, $tmp1780);
        panda$core$String* $tmp1783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1781, &$s1782);
        return $tmp1783;
    }
    }
    return result1757;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1785 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1784, $tmp1785);
    panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, &$s1787);
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, p_value);
    panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1789, &$s1790);
    return $tmp1791;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1793 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1792, $tmp1793);
    panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1794, &$s1795);
    panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1796, p_value);
    panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1797, &$s1798);
    return $tmp1799;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1800;
    org$pandalanguage$pandac$ClassDecl* srcClass1811;
    org$pandalanguage$pandac$ClassDecl* targetClass1813;
    panda$core$String* srcType1852;
    panda$core$String* dstType1854;
    panda$core$Bit $tmp1801 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1801.value) {
    {
        panda$core$Bit $tmp1802 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1802.value);
        panda$core$String* $tmp1804 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1803, $tmp1804);
        panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1805, &$s1806);
        panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1807, p_value);
        panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1808, &$s1809);
        return $tmp1810;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1812 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1811 = $tmp1812;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1811 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1814 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1813 = $tmp1814;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1813 != NULL }).value);
        panda$core$Bit $tmp1816 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1811);
        bool $tmp1815 = $tmp1816.value;
        if (!$tmp1815) goto $l1817;
        panda$core$Bit $tmp1818 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1813);
        panda$core$Bit $tmp1819 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1818);
        $tmp1815 = $tmp1819.value;
        $l1817:;
        panda$core$Bit $tmp1820 = { $tmp1815 };
        if ($tmp1820.value) {
        {
            panda$core$String* $tmp1821 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1821;
        }
        }
        else {
        panda$core$Bit $tmp1823 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1811);
        panda$core$Bit $tmp1824 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1823);
        bool $tmp1822 = $tmp1824.value;
        if (!$tmp1822) goto $l1825;
        panda$core$Bit $tmp1826 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1813);
        $tmp1822 = $tmp1826.value;
        $l1825:;
        panda$core$Bit $tmp1827 = { $tmp1822 };
        if ($tmp1827.value) {
        {
            panda$core$String* $tmp1828 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1828;
        }
        }
        else {
        panda$core$Bit $tmp1831 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1811);
        bool $tmp1830 = $tmp1831.value;
        if (!$tmp1830) goto $l1832;
        panda$core$Bit $tmp1833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1830 = $tmp1833.value;
        $l1832:;
        panda$core$Bit $tmp1834 = { $tmp1830 };
        bool $tmp1829 = $tmp1834.value;
        if (!$tmp1829) goto $l1835;
        panda$core$Object* $tmp1836 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1837 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1836), p_src);
        $tmp1829 = $tmp1837.value;
        $l1835:;
        panda$core$Bit $tmp1838 = { $tmp1829 };
        if ($tmp1838.value) {
        {
            panda$core$String* $tmp1839 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1839;
        }
        }
        else {
        panda$core$Bit $tmp1842 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1813);
        bool $tmp1841 = $tmp1842.value;
        if (!$tmp1841) goto $l1843;
        panda$core$Bit $tmp1844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1841 = $tmp1844.value;
        $l1843:;
        panda$core$Bit $tmp1845 = { $tmp1841 };
        bool $tmp1840 = $tmp1845.value;
        if (!$tmp1840) goto $l1846;
        panda$core$Object* $tmp1847 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1848 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1847), p_target);
        $tmp1840 = $tmp1848.value;
        $l1846:;
        panda$core$Bit $tmp1849 = { $tmp1840 };
        if ($tmp1849.value) {
        {
            panda$core$String* $tmp1850 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1850;
        }
        }
        }
        }
        }
        op1800 = &$s1851;
    }
    }
    panda$core$String* $tmp1853 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1852 = $tmp1853;
    panda$core$String* $tmp1855 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1854 = $tmp1855;
    panda$core$Bit $tmp1856 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1852, dstType1854);
    if ($tmp1856.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1857, dstType1854);
    panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1859);
    panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, p_value);
    panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
    return $tmp1863;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1867;
    panda$core$Bit $tmp1864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1864.value);
    panda$core$Int64 $tmp1865 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1865, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1866.value);
    panda$core$Object* $tmp1868 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1869 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1868), p_out);
    base1867 = $tmp1869;
    panda$core$Object* $tmp1870 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1871 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1867, ((org$pandalanguage$pandac$IRNode*) $tmp1870)->type, p_cast->type, p_out);
    return $tmp1871;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1875;
    panda$core$String* t1877;
    panda$core$String* value1890;
    panda$core$String* tmp1904;
    panda$core$String* result1922;
    panda$core$String* classPtr1943;
    panda$core$String* className1945;
    panda$core$Bit $tmp1872 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1872.value);
    panda$core$Int64 $tmp1873 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1874 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1873, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1874.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1876 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1875 = $tmp1876;
    PANDA_ASSERT(((panda$core$Bit) { cl1875 != NULL }).value);
    panda$core$String* $tmp1878 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1877 = $tmp1878;
    panda$core$Bit $tmp1880 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1879 = $tmp1880.value;
    if ($tmp1879) goto $l1881;
    org$pandalanguage$pandac$Type* $tmp1882 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1883 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1882);
    $tmp1879 = $tmp1883.value;
    $l1881:;
    panda$core$Bit $tmp1884 = { $tmp1879 };
    if ($tmp1884.value) {
    {
        panda$core$Int64 $tmp1885 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1885, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1886.value);
        panda$core$Object* $tmp1887 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1888 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1887)->children);
        panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1888, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1889.value);
        panda$core$Object* $tmp1891 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1892 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp1891)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1893 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1892), p_out);
        value1890 = $tmp1893;
        panda$core$String* $tmp1895 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1894, $tmp1895);
        panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1896, &$s1897);
        panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1898, value1890);
        panda$core$String* $tmp1901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1899, &$s1900);
        return $tmp1901;
    }
    }
    panda$core$Bit $tmp1902 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1875);
    if ($tmp1902.value) {
    {
        panda$core$Int64 $tmp1903 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1903;
        panda$core$Int64$wrapper* $tmp1906;
        $tmp1906 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp1906->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp1906->refCount = 1;
        $tmp1906->value = self->varCount;
        panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1905, ((panda$core$Object*) $tmp1906));
        panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1907, &$s1908);
        tmp1904 = $tmp1909;
        panda$core$String* $tmp1910 = panda$core$String$convert$R$panda$core$String(t1877);
        panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, &$s1911);
        panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, tmp1904);
        panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, &$s1914);
        (($fn1916) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1915);
        panda$core$Object* $tmp1917 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1918, tmp1904);
        panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1919, &$s1920);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1917), $tmp1921, p_out);
        return tmp1904;
    }
    }
    panda$core$String* $tmp1923 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1922 = $tmp1923;
    panda$core$String* $tmp1924 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1925 = panda$core$String$convert$R$panda$core$String($tmp1924);
    panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, &$s1926);
    panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, result1922);
    panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1928, &$s1929);
    panda$core$String* $tmp1931 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, $tmp1931);
    panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1932, &$s1933);
    panda$core$Int64 $tmp1936 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$Int64$wrapper* $tmp1937;
    $tmp1937 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1937->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1937->refCount = 1;
    $tmp1937->value = $tmp1936;
    panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1935, ((panda$core$Object*) $tmp1937));
    panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1938, &$s1939);
    panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1934, $tmp1940);
    (($fn1942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1941);
    panda$core$String* $tmp1944 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr1943 = $tmp1944;
    panda$core$Bit $tmp1946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp1946.value) {
    {
        panda$core$Object* $tmp1947 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1948 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1947));
        className1945 = $tmp1948;
    }
    }
    else {
    {
        panda$core$String* $tmp1949 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className1945 = $tmp1949;
    }
    }
    panda$core$String* $tmp1950 = panda$core$String$convert$R$panda$core$String(result1922);
    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, &$s1951);
    panda$core$String* $tmp1953 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1875)->name);
    panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, $tmp1953);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, &$s1955);
    (($fn1957) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1956);
    panda$core$String* $tmp1958 = panda$core$String$convert$R$panda$core$String(result1922);
    panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1958, &$s1959);
    (($fn1961) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1960);
    panda$core$Object* $tmp1962 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1963 = panda$core$String$convert$R$panda$core$String(result1922);
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1963, &$s1964);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1962), $tmp1965, p_out);
    return result1922;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1966 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp1966;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1968 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1967, $tmp1968);
    return $tmp1969;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result1970;
    panda$core$Char8 $tmp1972;
    panda$core$String* $tmp1971 = panda$core$Real64$convert$R$panda$core$String(((panda$core$Real64$wrapper*) p_real->payload)->value);
    result1970 = $tmp1971;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1972, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp1973 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result1970, $tmp1972);
    if ($tmp1973.value) {
    {
        return result1970;
    }
    }
    panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1970, &$s1974);
    return $tmp1975;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s1976;
    }
    }
    return &$s1977;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1978 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp1978;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1980;
    panda$collections$Iterator* c$Iter1994;
    panda$core$Char8 c2007;
    panda$core$Int64 $tmp1979 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp1979;
    panda$core$Int64$wrapper* $tmp1982;
    $tmp1982 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp1982->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp1982->refCount = 1;
    $tmp1982->value = self->varCount;
    panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1981, ((panda$core$Object*) $tmp1982));
    panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, &$s1984);
    result1980 = $tmp1985;
    org$pandalanguage$pandac$Type* $tmp1986 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1986);
    panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1987, result1980);
    panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1988, &$s1989);
    panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1990, &$s1991);
    (($fn1993) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp1992);
    {
        panda$collections$ListView* $tmp1995 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp1996 = ((panda$collections$Iterable*) $tmp1995)->$class->itable;
        while ($tmp1996->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1996 = $tmp1996->next;
        }
        $fn1998 $tmp1997 = $tmp1996->methods[0];
        panda$collections$Iterator* $tmp1999 = $tmp1997(((panda$collections$Iterable*) $tmp1995));
        c$Iter1994 = $tmp1999;
        $l2000:;
        ITable* $tmp2002 = c$Iter1994->$class->itable;
        while ($tmp2002->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2002 = $tmp2002->next;
        }
        $fn2004 $tmp2003 = $tmp2002->methods[0];
        panda$core$Bit $tmp2005 = $tmp2003(c$Iter1994);
        panda$core$Bit $tmp2006 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2005);
        if (!$tmp2006.value) goto $l2001;
        {
            ITable* $tmp2008 = c$Iter1994->$class->itable;
            while ($tmp2008->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2008 = $tmp2008->next;
            }
            $fn2010 $tmp2009 = $tmp2008->methods[1];
            panda$core$Object* $tmp2011 = $tmp2009(c$Iter1994);
            c2007 = ((panda$core$Char8$wrapper*) $tmp2011)->value;
            panda$core$UInt8 $tmp2013 = panda$core$Char8$convert$R$panda$core$UInt8(c2007);
            panda$core$UInt8$wrapper* $tmp2014;
            $tmp2014 = (panda$core$UInt8$wrapper*) malloc(13);
            $tmp2014->cl = (panda$core$Class*) &panda$core$UInt8$wrapperclass;
            $tmp2014->refCount = 1;
            $tmp2014->value = $tmp2013;
            ITable* $tmp2016 = ((panda$core$Formattable*) $tmp2014)->$class->itable;
            while ($tmp2016->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp2016 = $tmp2016->next;
            }
            $fn2018 $tmp2017 = $tmp2016->methods[0];
            panda$core$String* $tmp2019 = $tmp2017(((panda$core$Formattable*) $tmp2014), &$s2015);
            panda$core$String* $tmp2021 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp2019, &$s2020);
            panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2012, $tmp2021);
            panda$core$String* $tmp2024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2022, &$s2023);
            (($fn2025) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp2024);
        }
        goto $l2000;
        $l2001:;
    }
    panda$collections$ListView* $tmp2027 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp2028 = ((panda$collections$CollectionView*) $tmp2027)->$class->itable;
    while ($tmp2028->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2028 = $tmp2028->next;
    }
    $fn2030 $tmp2029 = $tmp2028->methods[0];
    panda$core$Int64 $tmp2031 = $tmp2029(((panda$collections$CollectionView*) $tmp2027));
    panda$core$Int64$wrapper* $tmp2032;
    $tmp2032 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2032->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2032->refCount = 1;
    $tmp2032->value = $tmp2031;
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2026, ((panda$core$Object*) $tmp2032));
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, &$s2034);
    panda$core$Int64 $tmp2036 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$Int64$wrapper* $tmp2037;
    $tmp2037 = (panda$core$Int64$wrapper*) malloc(24);
    $tmp2037->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
    $tmp2037->refCount = 1;
    $tmp2037->value = $tmp2036;
    panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2035, ((panda$core$Object*) $tmp2037));
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, &$s2039);
    (($fn2041) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp2040);
    panda$core$String* $tmp2043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2042, result1980);
    panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2043, &$s2044);
    return $tmp2045;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s2046;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2048 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2047, $tmp2048);
    panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, &$s2050);
    return $tmp2051;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2055;
    org$pandalanguage$pandac$ClassDecl* cl2058;
    panda$core$String* bit2061;
    panda$core$Bit $tmp2052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp2052.value);
    panda$core$Int64 $tmp2053 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2053, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2054.value);
    panda$core$Object* $tmp2056 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2057 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2056), p_out);
    value2055 = $tmp2057;
    panda$core$Object* $tmp2059 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2060 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2059)->type);
    cl2058 = $tmp2060;
    panda$core$Bit $tmp2062 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2058);
    if ($tmp2062.value) {
    {
        panda$core$Object* $tmp2063 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2064 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2063)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2064.value) {
        {
            bit2061 = &$s2065;
        }
        }
        else {
        {
            panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2066, value2055);
            panda$core$String* $tmp2069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, &$s2068);
            bit2061 = $tmp2069;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2070 = panda$core$String$convert$R$panda$core$String(value2055);
        panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, &$s2071);
        bit2061 = $tmp2072;
    }
    }
    panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2073, bit2061);
    panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, &$s2075);
    return $tmp2076;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2080;
    org$pandalanguage$pandac$ClassDecl* cl2083;
    panda$core$String* bit2086;
    panda$core$Bit $tmp2077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2077.value);
    panda$core$Int64 $tmp2078 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2078, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2079.value);
    panda$core$Object* $tmp2081 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2082 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2081), p_out);
    value2080 = $tmp2082;
    panda$core$Object* $tmp2084 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2085 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2084)->type);
    cl2083 = $tmp2085;
    panda$core$Bit $tmp2087 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2083);
    if ($tmp2087.value) {
    {
        panda$core$Object* $tmp2088 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2089 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2088)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2089.value) {
        {
            bit2086 = &$s2090;
        }
        }
        else {
        {
            panda$core$String* $tmp2091 = panda$core$String$convert$R$panda$core$String(value2080);
            panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, &$s2092);
            bit2086 = $tmp2093;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2094 = panda$core$String$convert$R$panda$core$String(value2080);
        panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2094, &$s2095);
        bit2086 = $tmp2096;
    }
    }
    panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2097, bit2086);
    panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2098, &$s2099);
    return $tmp2100;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2102;
    panda$core$Bit $tmp2101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2101.value);
    panda$core$Object* $tmp2103 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2104 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2103));
    cl2102 = $tmp2104;
    PANDA_ASSERT(((panda$core$Bit) { cl2102 != NULL }).value);
    panda$core$Bit $tmp2105 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2102);
    if ($tmp2105.value) {
    {
        panda$core$String* $tmp2107 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2106, $tmp2107);
        panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2108, &$s2109);
        return $tmp2110;
    }
    }
    else {
    {
        return &$s2111;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2115;
    panda$core$String* result2118;
    panda$core$Bit $tmp2112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2112.value);
    panda$core$Int64 $tmp2113 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2113, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2114.value);
    panda$core$Object* $tmp2116 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2117 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2116), p_out);
    base2115 = $tmp2117;
    panda$core$String* $tmp2119 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2118 = $tmp2119;
    panda$core$Int64 $tmp2120 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2120.value) {
        case 52:
        {
            panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2121, base2115);
            panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
            return $tmp2124;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2125, base2115);
            panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2126, &$s2127);
            return $tmp2128;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2129, base2115);
            panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
            return $tmp2132;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2142;
    panda$core$String* trueLabel2145;
    panda$core$String* falseLabel2147;
    panda$core$String* merge2149;
    panda$core$String* result2151;
    panda$core$Bit $tmp2133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->kind, ((panda$core$Int64) { 1044 }));
    PANDA_ASSERT($tmp2133.value);
    panda$core$Int64 $tmp2134 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
    panda$core$Bit $tmp2135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2134, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2135.value);
    panda$core$Object* $tmp2136 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2137 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2138 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2136)->type, $tmp2137);
    PANDA_ASSERT($tmp2138.value);
    panda$core$Object* $tmp2139 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2140 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2141 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2139)->type, ((org$pandalanguage$pandac$IRNode*) $tmp2140)->type);
    PANDA_ASSERT($tmp2141.value);
    panda$core$Object* $tmp2143 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2144 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2143), p_out);
    test2142 = $tmp2144;
    panda$core$String* $tmp2146 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2145 = $tmp2146;
    panda$core$String* $tmp2148 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2147 = $tmp2148;
    panda$core$String* $tmp2150 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2149 = $tmp2150;
    panda$core$String* $tmp2152 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2151 = $tmp2152;
    panda$core$Object* $tmp2153 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2154 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2153)->type);
    panda$core$String* $tmp2155 = panda$core$String$convert$R$panda$core$String($tmp2154);
    panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, &$s2156);
    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, result2151);
    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2158, &$s2159);
    (($fn2161) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2160);
    panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2162, test2142);
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, &$s2164);
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, trueLabel2145);
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2167);
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2168, falseLabel2147);
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
    (($fn2172) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2171);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2145, p_out);
    panda$core$String* $tmp2173 = panda$core$String$convert$R$panda$core$String(result2151);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
    panda$core$Object* $tmp2176 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2177 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2176), p_out);
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, $tmp2177);
    panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, &$s2179);
    (($fn2181) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2180);
    panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2182, merge2149);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, &$s2184);
    (($fn2186) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2185);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2147, p_out);
    panda$core$String* $tmp2187 = panda$core$String$convert$R$panda$core$String(result2151);
    panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2188);
    panda$core$Object* $tmp2190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp2191 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2190), p_out);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, $tmp2191);
    panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, &$s2193);
    (($fn2195) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2194);
    panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2196, merge2149);
    panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2198);
    (($fn2200) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2199);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2149, p_out);
    return result2151;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2214;
    panda$core$String* result2218;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2201 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2201;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2202 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2202;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2203 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2203;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2204 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2204;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2205 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2205;
        }
        break;
        case 1045:
        {
            panda$core$String* $tmp2206 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, ((panda$io$OutputStream*) p_out));
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
            panda$core$Object* $tmp2215 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2216 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2215), p_out);
            value2214 = $tmp2216;
            panda$core$UInt64$wrapper* $tmp2217;
            $tmp2217 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp2217->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp2217->refCount = 1;
            $tmp2217->value = ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp2217), ((panda$core$Object*) value2214));
            return value2214;
        }
        break;
        case 1028:
        {
            panda$core$UInt64$wrapper* $tmp2219;
            $tmp2219 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp2219->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp2219->refCount = 1;
            $tmp2219->value = ((panda$core$UInt64$wrapper*) p_expr->payload)->value;
            panda$core$Object* $tmp2220 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) $tmp2219));
            result2218 = ((panda$core$String*) $tmp2220);
            PANDA_ASSERT(((panda$core$Bit) { result2218 != NULL }).value);
            return result2218;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2221 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2221;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2222 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2222;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2223 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2223;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2224 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2224;
        }
        break;
        case 1044:
        {
            panda$core$String* $tmp2225 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2225;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2226 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2226;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2231;
    org$pandalanguage$pandac$IRNode* s2243;
    panda$core$Bit $tmp2227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2227.value);
    (($fn2229) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2228);
    panda$core$Int64 $tmp2230 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2230;
    {
        ITable* $tmp2232 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2232->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2232 = $tmp2232->next;
        }
        $fn2234 $tmp2233 = $tmp2232->methods[0];
        panda$collections$Iterator* $tmp2235 = $tmp2233(((panda$collections$Iterable*) p_block->children));
        s$Iter2231 = $tmp2235;
        $l2236:;
        ITable* $tmp2238 = s$Iter2231->$class->itable;
        while ($tmp2238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2238 = $tmp2238->next;
        }
        $fn2240 $tmp2239 = $tmp2238->methods[0];
        panda$core$Bit $tmp2241 = $tmp2239(s$Iter2231);
        panda$core$Bit $tmp2242 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2241);
        if (!$tmp2242.value) goto $l2237;
        {
            ITable* $tmp2244 = s$Iter2231->$class->itable;
            while ($tmp2244->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2244 = $tmp2244->next;
            }
            $fn2246 $tmp2245 = $tmp2244->methods[1];
            panda$core$Object* $tmp2247 = $tmp2245(s$Iter2231);
            s2243 = ((org$pandalanguage$pandac$IRNode*) $tmp2247);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2243, p_out);
        }
        goto $l2236;
        $l2237:;
    }
    panda$core$Int64 $tmp2248 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2248;
    (($fn2250) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2249);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2251;
    panda$core$String* $match$1324_92252;
    panda$core$String* ptr2257;
    panda$core$String* arg2260;
    panda$core$String* base2280;
    panda$core$String* index2283;
    panda$core$String* value2286;
    m2251 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1324_92252 = ((org$pandalanguage$pandac$Symbol*) m2251->value)->name;
        panda$core$Bit $tmp2254 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1324_92252, &$s2253);
        if ($tmp2254.value) {
        {
            panda$core$Int64 $tmp2255 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2255, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2256.value);
            panda$core$Object* $tmp2258 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2259 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2258), p_out);
            ptr2257 = $tmp2259;
            panda$core$Object* $tmp2261 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2262 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2261));
            panda$core$String* $tmp2263 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2262, p_out);
            arg2260 = $tmp2263;
            panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2264, arg2260);
            panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, &$s2266);
            panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, ptr2257);
            panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, &$s2269);
            (($fn2271) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2270);
        }
        }
        else {
        panda$core$Bit $tmp2273 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1324_92252, &$s2272);
        if ($tmp2273.value) {
        {
            panda$core$Int64 $tmp2274 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2274, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2275.value);
            panda$core$Object* $tmp2276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2277 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2276));
            panda$core$Int64 $tmp2278 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2277->type->subtypes);
            panda$core$Bit $tmp2279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2278, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2279.value);
            panda$core$Object* $tmp2281 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2282 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2281), p_out);
            base2280 = $tmp2282;
            panda$core$Object* $tmp2284 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2285 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2284), p_out);
            index2283 = $tmp2285;
            panda$core$Object* $tmp2287 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2288 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2287));
            panda$core$String* $tmp2289 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2288, p_out);
            value2286 = $tmp2289;
            panda$core$String* $tmp2290 = panda$core$String$convert$R$panda$core$String(base2280);
            panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, &$s2291);
            panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, index2283);
            panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
            panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, value2286);
            panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2296, &$s2297);
            (($fn2299) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2298);
        }
        }
        else {
        panda$core$Bit $tmp2301 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1324_92252, &$s2300);
        if ($tmp2301.value) {
        {
            panda$core$Int64 $tmp2302 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2302, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2303.value);
            panda$core$Object* $tmp2305 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2306 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2305), p_out);
            panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2304, $tmp2306);
            panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2307, &$s2308);
            (($fn2310) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2309);
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
    org$pandalanguage$pandac$MethodDecl* m2312;
    org$pandalanguage$pandac$Type* actualMethodType2316;
    panda$core$String* actualResultType2317;
    panda$core$Bit isSuper2318;
    panda$collections$Array* args2338;
    panda$core$Int64 offset2341;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2346;
    panda$core$String* arg2361;
    panda$core$String* refTarget2382;
    panda$core$String* methodRef2386;
    panda$core$String* separator2388;
    panda$core$String* indirectVar2392;
    panda$core$String* resultType2396;
    panda$collections$Iterator* a$Iter2420;
    panda$core$String* a2432;
    panda$core$Bit $tmp2311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2311.value);
    m2312 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2314 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2312->owner)->name, &$s2313);
    if ($tmp2314.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2315 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2312->owner);
    if ($tmp2315.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2312);
    }
    }
    panda$core$Int64 $tmp2320 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2321 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2320, ((panda$core$Int64) { 1 }));
    bool $tmp2319 = $tmp2321.value;
    if (!$tmp2319) goto $l2322;
    panda$core$Object* $tmp2323 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2323)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2319 = $tmp2324.value;
    $l2322:;
    panda$core$Bit $tmp2325 = { $tmp2319 };
    isSuper2318 = $tmp2325;
    panda$core$Bit $tmp2327 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2318);
    bool $tmp2326 = $tmp2327.value;
    if (!$tmp2326) goto $l2328;
    panda$core$Bit $tmp2329 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2312);
    $tmp2326 = $tmp2329.value;
    $l2328:;
    panda$core$Bit $tmp2330 = { $tmp2326 };
    if ($tmp2330.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2331 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2312);
        actualMethodType2316 = $tmp2331;
        panda$core$Int64 $tmp2332 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2316->subtypes);
        panda$core$Int64 $tmp2333 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2332, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2334 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2316->subtypes, $tmp2333);
        panda$core$String* $tmp2335 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2334));
        actualResultType2317 = $tmp2335;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2336 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2312);
        actualMethodType2316 = $tmp2336;
        panda$core$String* $tmp2337 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2317 = $tmp2337;
    }
    }
    panda$collections$Array* $tmp2339 = (panda$collections$Array*) malloc(40);
    $tmp2339->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2339->refCount.value = 1;
    panda$collections$Array$init($tmp2339);
    args2338 = $tmp2339;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2338, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2342 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2343 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2316->subtypes);
    panda$core$Int64 $tmp2344 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2342, $tmp2343);
    panda$core$Int64 $tmp2345 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2344, ((panda$core$Int64) { 1 }));
    offset2341 = $tmp2345;
    panda$core$Int64 $tmp2347 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2346, ((panda$core$Int64) { 0 }), $tmp2347, ((panda$core$Bit) { false }));
    int64_t $tmp2349 = $tmp2346.min.value;
    panda$core$Int64 i2348 = { $tmp2349 };
    int64_t $tmp2351 = $tmp2346.max.value;
    bool $tmp2352 = $tmp2346.inclusive.value;
    if ($tmp2352) goto $l2359; else goto $l2360;
    $l2359:;
    if ($tmp2349 <= $tmp2351) goto $l2353; else goto $l2355;
    $l2360:;
    if ($tmp2349 < $tmp2351) goto $l2353; else goto $l2355;
    $l2353:;
    {
        panda$core$Object* $tmp2362 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2348);
        panda$core$String* $tmp2363 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2362), p_out);
        arg2361 = $tmp2363;
        panda$core$Bit $tmp2365 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2348, offset2341);
        bool $tmp2364 = $tmp2365.value;
        if (!$tmp2364) goto $l2366;
        panda$core$Int64 $tmp2367 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2348, offset2341);
        panda$core$Object* $tmp2368 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2316->subtypes, $tmp2367);
        panda$core$Object* $tmp2369 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2348);
        panda$core$Bit $tmp2370 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2368), ((org$pandalanguage$pandac$IRNode*) $tmp2369)->type);
        $tmp2364 = $tmp2370.value;
        $l2366:;
        panda$core$Bit $tmp2371 = { $tmp2364 };
        if ($tmp2371.value) {
        {
            panda$core$Object* $tmp2372 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2348);
            panda$core$Int64 $tmp2373 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2348, offset2341);
            panda$core$Object* $tmp2374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2316->subtypes, $tmp2373);
            panda$core$String* $tmp2375 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2361, ((org$pandalanguage$pandac$IRNode*) $tmp2372)->type, ((org$pandalanguage$pandac$Type*) $tmp2374), p_out);
            arg2361 = $tmp2375;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2338, ((panda$core$Object*) arg2361));
    }
    $l2356:;
    int64_t $tmp2377 = $tmp2351 - i2348.value;
    if ($tmp2352) goto $l2378; else goto $l2379;
    $l2378:;
    if ($tmp2377 >= 1) goto $l2376; else goto $l2355;
    $l2379:;
    if ($tmp2377 > 1) goto $l2376; else goto $l2355;
    $l2376:;
    i2348.value += 1;
    goto $l2353;
    $l2355:;
    panda$core$Int64 $tmp2383 = panda$collections$Array$get_count$R$panda$core$Int64(args2338);
    panda$core$Bit $tmp2384 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2383, ((panda$core$Int64) { 0 }));
    if ($tmp2384.value) {
    {
        panda$core$Object* $tmp2385 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2338, ((panda$core$Int64) { 0 }));
        refTarget2382 = ((panda$core$String*) $tmp2385);
    }
    }
    else {
    {
        refTarget2382 = NULL;
    }
    }
    panda$core$String* $tmp2387 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2382, m2312, isSuper2318, p_out);
    methodRef2386 = $tmp2387;
    separator2388 = &$s2389;
    panda$core$Bit $tmp2390 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2312);
    if ($tmp2390.value) {
    {
        panda$core$Int64 $tmp2391 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2391;
        panda$core$Int64$wrapper* $tmp2394;
        $tmp2394 = (panda$core$Int64$wrapper*) malloc(24);
        $tmp2394->cl = (panda$core$Class*) &panda$core$Int64$wrapperclass;
        $tmp2394->refCount = 1;
        $tmp2394->value = self->varCount;
        panda$core$String* $tmp2395 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2393, ((panda$core$Object*) $tmp2394));
        indirectVar2392 = $tmp2395;
        panda$core$String* $tmp2397 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2396 = $tmp2397;
        panda$core$String* $tmp2398 = panda$core$String$convert$R$panda$core$String(resultType2396);
        panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, &$s2399);
        panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2400, indirectVar2392);
        panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2401, &$s2402);
        (($fn2404) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2403);
        panda$core$String* $tmp2405 = panda$core$String$convert$R$panda$core$String(methodRef2386);
        panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, &$s2406);
        panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, resultType2396);
        panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, &$s2409);
        panda$core$String* $tmp2411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2410, indirectVar2392);
        panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2411, &$s2412);
        (($fn2414) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2413);
        separator2388 = &$s2415;
    }
    }
    else {
    {
        panda$core$String* $tmp2416 = panda$core$String$convert$R$panda$core$String(methodRef2386);
        panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, &$s2417);
        (($fn2419) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2418);
    }
    }
    {
        ITable* $tmp2421 = ((panda$collections$Iterable*) args2338)->$class->itable;
        while ($tmp2421->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2421 = $tmp2421->next;
        }
        $fn2423 $tmp2422 = $tmp2421->methods[0];
        panda$collections$Iterator* $tmp2424 = $tmp2422(((panda$collections$Iterable*) args2338));
        a$Iter2420 = $tmp2424;
        $l2425:;
        ITable* $tmp2427 = a$Iter2420->$class->itable;
        while ($tmp2427->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2427 = $tmp2427->next;
        }
        $fn2429 $tmp2428 = $tmp2427->methods[0];
        panda$core$Bit $tmp2430 = $tmp2428(a$Iter2420);
        panda$core$Bit $tmp2431 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2430);
        if (!$tmp2431.value) goto $l2426;
        {
            ITable* $tmp2433 = a$Iter2420->$class->itable;
            while ($tmp2433->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2433 = $tmp2433->next;
            }
            $fn2435 $tmp2434 = $tmp2433->methods[1];
            panda$core$Object* $tmp2436 = $tmp2434(a$Iter2420);
            a2432 = ((panda$core$String*) $tmp2436);
            (($fn2437) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2388);
            (($fn2438) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2432);
            separator2388 = &$s2439;
        }
        goto $l2425;
        $l2426:;
    }
    (($fn2441) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2440);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2453;
    panda$core$Bit $tmp2442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2442.value);
    panda$core$Int64 $tmp2444 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2444, ((panda$core$Int64) { 2 }));
    bool $tmp2443 = $tmp2445.value;
    if ($tmp2443) goto $l2446;
    panda$core$Int64 $tmp2447 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2447, ((panda$core$Int64) { 3 }));
    $tmp2443 = $tmp2448.value;
    $l2446:;
    panda$core$Bit $tmp2449 = { $tmp2443 };
    PANDA_ASSERT($tmp2449.value);
    panda$core$Object* $tmp2450 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2451 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2452 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2450)->type, $tmp2451);
    PANDA_ASSERT($tmp2452.value);
    panda$core$Object* $tmp2454 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2455 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2454), p_out);
    test2453 = $tmp2455;
    panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2456, test2453);
    panda$core$String* $tmp2459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2457, &$s2458);
    (($fn2460) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2459);
    panda$core$Object* $tmp2461 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2461), p_out);
    (($fn2463) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2462);
    panda$core$Int64 $tmp2464 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2464, ((panda$core$Int64) { 3 }));
    if ($tmp2465.value) {
    {
        (($fn2467) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2466);
        panda$core$Object* $tmp2468 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2468), p_out);
        (($fn2470) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2469);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2474;
    panda$core$String* range2485;
    org$pandalanguage$pandac$IRNode* block2488;
    org$pandalanguage$pandac$Type* t2490;
    panda$core$String* llt2493;
    panda$core$String* indexType2495;
    org$pandalanguage$pandac$ClassDecl* cl2501;
    org$pandalanguage$pandac$FieldDecl* field2509;
    panda$core$String* numberType2515;
    panda$core$String* index2518;
    panda$core$String* start2520;
    panda$core$String* indexValuePtr2532;
    panda$core$String* end2546;
    panda$core$String* inclusive2558;
    panda$core$String* loopStart2568;
    panda$core$String* loopBody2570;
    panda$core$String* loopEnd2572;
    panda$core$String* loopTest2574;
    panda$core$String* forwardEntry2578;
    panda$core$String* backwardEntry2580;
    panda$core$String* signPrefix2582;
    panda$core$String* forwardEntryInclusive2594;
    panda$core$String* forwardEntryExclusive2596;
    panda$core$String* loopInc2638;
    panda$core$String* forwardDelta2640;
    panda$core$String* forwardInclusiveLabel2655;
    panda$core$String* forwardExclusiveLabel2657;
    panda$core$String* forwardExclusiveTest2682;
    panda$core$String* inc2695;
    panda$core$Bit $tmp2471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2471.value);
    panda$core$Int64 $tmp2472 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2472, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2473.value);
    panda$core$Object* $tmp2475 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2474 = ((org$pandalanguage$pandac$IRNode*) $tmp2475);
    panda$core$Object* $tmp2476 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2476)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2477.value);
    panda$core$Object* $tmp2478 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2479 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2478)->type->subtypes);
    panda$core$Bit $tmp2480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2479, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2480.value);
    panda$core$Object* $tmp2481 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2481)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2484 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2482))->name, &$s2483);
    PANDA_ASSERT($tmp2484.value);
    panda$core$Object* $tmp2486 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2487 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2486), p_out);
    range2485 = $tmp2487;
    panda$core$Object* $tmp2489 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2488 = ((org$pandalanguage$pandac$IRNode*) $tmp2489);
    panda$core$Object* $tmp2491 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2491)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2490 = ((org$pandalanguage$pandac$Type*) $tmp2492);
    panda$core$String* $tmp2494 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2490);
    llt2493 = $tmp2494;
    panda$core$Bit $tmp2496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2490->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2496.value) {
    {
        panda$core$Int64 $tmp2497 = panda$collections$Array$get_count$R$panda$core$Int64(t2490->subtypes);
        panda$core$Bit $tmp2498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2497, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2498.value);
        panda$core$Object* $tmp2499 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2490->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2500 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2499));
        indexType2495 = $tmp2500;
    }
    }
    else {
    {
        indexType2495 = llt2493;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2502 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2490);
    cl2501 = $tmp2502;
    PANDA_ASSERT(((panda$core$Bit) { cl2501 != NULL }).value);
    panda$collections$ListView* $tmp2503 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2501);
    ITable* $tmp2504 = ((panda$collections$CollectionView*) $tmp2503)->$class->itable;
    while ($tmp2504->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2504 = $tmp2504->next;
    }
    $fn2506 $tmp2505 = $tmp2504->methods[0];
    panda$core$Int64 $tmp2507 = $tmp2505(((panda$collections$CollectionView*) $tmp2503));
    panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2507, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2508.value);
    panda$collections$ListView* $tmp2510 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2501);
    ITable* $tmp2511 = $tmp2510->$class->itable;
    while ($tmp2511->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2511 = $tmp2511->next;
    }
    $fn2513 $tmp2512 = $tmp2511->methods[0];
    panda$core$Object* $tmp2514 = $tmp2512($tmp2510, ((panda$core$Int64) { 0 }));
    field2509 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2514);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2509);
    panda$core$String* $tmp2516 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2509->type);
    numberType2515 = $tmp2516;
    panda$core$Bit $tmp2517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2474->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2517.value);
    panda$core$String* $tmp2519 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2474->payload));
    index2518 = $tmp2519;
    panda$core$String* $tmp2521 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2520 = $tmp2521;
    panda$core$String* $tmp2522 = panda$core$String$convert$R$panda$core$String(numberType2515);
    panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2522, &$s2523);
    panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2524, start2520);
    panda$core$String* $tmp2527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, &$s2526);
    panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2527, range2485);
    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2529);
    (($fn2531) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2530);
    panda$core$String* $tmp2533 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2532 = $tmp2533;
    org$pandalanguage$pandac$Type* $tmp2534 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2501);
    panda$core$String* $tmp2535 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2534);
    panda$core$String* $tmp2536 = panda$core$String$convert$R$panda$core$String($tmp2535);
    panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, &$s2537);
    panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, index2518);
    panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2539, &$s2540);
    panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, start2520);
    panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, &$s2543);
    (($fn2545) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2544);
    panda$core$String* $tmp2547 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2546 = $tmp2547;
    panda$core$String* $tmp2548 = panda$core$String$convert$R$panda$core$String(numberType2515);
    panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, &$s2549);
    panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, end2546);
    panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, &$s2552);
    panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, range2485);
    panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, &$s2555);
    (($fn2557) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2556);
    panda$core$String* $tmp2559 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2558 = $tmp2559;
    panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2560, inclusive2558);
    panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, &$s2562);
    panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, range2485);
    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, &$s2565);
    (($fn2567) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2566);
    panda$core$String* $tmp2569 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2568 = $tmp2569;
    panda$core$String* $tmp2571 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2570 = $tmp2571;
    panda$core$String* $tmp2573 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2572 = $tmp2573;
    panda$core$String* $tmp2575 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2574 = $tmp2575;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2576 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2576->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2576->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2576, ((panda$core$String*) p_f->payload), loopEnd2572, loopTest2574);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2576));
    panda$core$String* $tmp2579 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2578 = $tmp2579;
    panda$core$String* $tmp2581 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2580 = $tmp2581;
    panda$core$Bit $tmp2584 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2490)->name, &$s2583);
    if ($tmp2584.value) {
    {
        signPrefix2582 = &$s2585;
    }
    }
    else {
    {
        panda$core$Bit $tmp2588 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2490)->name, &$s2587);
        bool $tmp2586 = $tmp2588.value;
        if ($tmp2586) goto $l2589;
        panda$core$Bit $tmp2591 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2490)->name, &$s2590);
        $tmp2586 = $tmp2591.value;
        $l2589:;
        panda$core$Bit $tmp2592 = { $tmp2586 };
        PANDA_ASSERT($tmp2592.value);
        signPrefix2582 = &$s2593;
    }
    }
    panda$core$String* $tmp2595 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2594 = $tmp2595;
    panda$core$String* $tmp2597 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2596 = $tmp2597;
    panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2598, inclusive2558);
    panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, &$s2600);
    panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, forwardEntryInclusive2594);
    panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
    panda$core$String* $tmp2605 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2596);
    panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2605, &$s2606);
    panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, $tmp2607);
    (($fn2609) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2608);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2594, p_out);
    panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2610, start2520);
    panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2612);
    panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, end2546);
    panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, &$s2615);
    panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2616, loopStart2568);
    panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, &$s2618);
    panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, loopEnd2572);
    panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2620, &$s2621);
    (($fn2623) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2622);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2596, p_out);
    panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2624, start2520);
    panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2625, &$s2626);
    panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, end2546);
    panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2628, &$s2629);
    panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2630, loopStart2568);
    panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2631, &$s2632);
    panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, loopEnd2572);
    panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, &$s2635);
    (($fn2637) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2636);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2568, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2488, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2574, p_out);
    panda$core$String* $tmp2639 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2638 = $tmp2639;
    panda$core$String* $tmp2641 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2640 = $tmp2641;
    panda$core$String* $tmp2642 = panda$core$String$convert$R$panda$core$String(numberType2515);
    panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
    panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, forwardDelta2640);
    panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, &$s2646);
    panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2647, end2546);
    panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, &$s2649);
    panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, index2518);
    panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, &$s2652);
    (($fn2654) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2653);
    panda$core$String* $tmp2656 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2655 = $tmp2656;
    panda$core$String* $tmp2658 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2657 = $tmp2658;
    panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2659, inclusive2558);
    panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
    panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2662, forwardInclusiveLabel2655);
    panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, &$s2664);
    panda$core$String* $tmp2666 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2657);
    panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, &$s2667);
    panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2665, $tmp2668);
    (($fn2670) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2669);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2655, p_out);
    panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2671, forwardDelta2640);
    panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2673);
    panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, loopInc2638);
    panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2675, &$s2676);
    panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, loopEnd2572);
    panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2678, &$s2679);
    (($fn2681) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2680);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2657, p_out);
    panda$core$String* $tmp2683 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2682 = $tmp2683;
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2684, forwardDelta2640);
    panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
    panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, loopInc2638);
    panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, &$s2689);
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, loopEnd2572);
    panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, &$s2692);
    (($fn2694) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2693);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2638, p_out);
    panda$core$String* $tmp2696 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2695 = $tmp2696;
    panda$core$String* $tmp2697 = panda$core$String$convert$R$panda$core$String(index2518);
    panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2698);
    (($fn2700) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2699);
    panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2701, loopStart2568);
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, &$s2703);
    (($fn2705) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2704);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2572, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2709;
    panda$core$String* range2720;
    org$pandalanguage$pandac$IRNode* block2723;
    org$pandalanguage$pandac$Type* t2725;
    org$pandalanguage$pandac$Type* stepType2728;
    panda$core$String* llt2731;
    panda$core$String* indexType2733;
    org$pandalanguage$pandac$ClassDecl* cl2739;
    org$pandalanguage$pandac$FieldDecl* field2747;
    panda$core$String* numberType2753;
    panda$core$String* index2756;
    panda$core$String* start2758;
    panda$core$String* indexValuePtr2770;
    panda$core$String* end2784;
    panda$core$String* step2796;
    org$pandalanguage$pandac$ClassDecl* stepCl2798;
    org$pandalanguage$pandac$FieldDecl* stepField2806;
    panda$core$String* inclusive2823;
    panda$core$String* loopStart2833;
    panda$core$String* loopBody2835;
    panda$core$String* loopEnd2837;
    panda$core$String* loopTest2839;
    panda$core$String* forwardEntry2843;
    panda$core$String* backwardEntry2845;
    panda$core$String* signPrefix2847;
    panda$core$String* direction2859;
    panda$core$String* forwardEntryInclusive2883;
    panda$core$String* forwardEntryExclusive2885;
    panda$core$String* backwardEntryInclusive2927;
    panda$core$String* backwardEntryExclusive2929;
    panda$core$String* backwardEntryExclusiveTest2957;
    panda$core$String* loopInc2973;
    panda$core$String* forwardLabel2975;
    panda$core$String* backwardLabel2977;
    panda$core$String* forwardDelta2990;
    panda$core$String* forwardInclusiveLabel3005;
    panda$core$String* forwardExclusiveLabel3007;
    panda$core$String* forwardExclusiveTest3035;
    panda$core$String* backwardDelta3051;
    panda$core$String* backwardInclusiveLabel3066;
    panda$core$String* backwardExclusiveLabel3068;
    panda$core$String* inc3110;
    panda$core$Bit $tmp2706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2706.value);
    panda$core$Int64 $tmp2707 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2707, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2708.value);
    panda$core$Object* $tmp2710 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2709 = ((org$pandalanguage$pandac$IRNode*) $tmp2710);
    panda$core$Object* $tmp2711 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2711)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2712.value);
    panda$core$Object* $tmp2713 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2714 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2713)->type->subtypes);
    panda$core$Bit $tmp2715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2714, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2715.value);
    panda$core$Object* $tmp2716 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2717 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2716)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2719 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2717))->name, &$s2718);
    PANDA_ASSERT($tmp2719.value);
    panda$core$Object* $tmp2721 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2722 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2721), p_out);
    range2720 = $tmp2722;
    panda$core$Object* $tmp2724 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2723 = ((org$pandalanguage$pandac$IRNode*) $tmp2724);
    panda$core$Object* $tmp2726 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2726)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2725 = ((org$pandalanguage$pandac$Type*) $tmp2727);
    panda$core$Object* $tmp2729 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2730 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2729)->type->subtypes, ((panda$core$Int64) { 2 }));
    stepType2728 = ((org$pandalanguage$pandac$Type*) $tmp2730);
    panda$core$String* $tmp2732 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2725);
    llt2731 = $tmp2732;
    panda$core$Bit $tmp2734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2725->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2734.value) {
    {
        panda$core$Int64 $tmp2735 = panda$collections$Array$get_count$R$panda$core$Int64(t2725->subtypes);
        panda$core$Bit $tmp2736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2735, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2736.value);
        panda$core$Object* $tmp2737 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2725->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2738 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2737));
        indexType2733 = $tmp2738;
    }
    }
    else {
    {
        indexType2733 = llt2731;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2740 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2725);
    cl2739 = $tmp2740;
    PANDA_ASSERT(((panda$core$Bit) { cl2739 != NULL }).value);
    panda$collections$ListView* $tmp2741 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2739);
    ITable* $tmp2742 = ((panda$collections$CollectionView*) $tmp2741)->$class->itable;
    while ($tmp2742->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2742 = $tmp2742->next;
    }
    $fn2744 $tmp2743 = $tmp2742->methods[0];
    panda$core$Int64 $tmp2745 = $tmp2743(((panda$collections$CollectionView*) $tmp2741));
    panda$core$Bit $tmp2746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2745, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2746.value);
    panda$collections$ListView* $tmp2748 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2739);
    ITable* $tmp2749 = $tmp2748->$class->itable;
    while ($tmp2749->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2749 = $tmp2749->next;
    }
    $fn2751 $tmp2750 = $tmp2749->methods[0];
    panda$core$Object* $tmp2752 = $tmp2750($tmp2748, ((panda$core$Int64) { 0 }));
    field2747 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2752);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2747);
    panda$core$String* $tmp2754 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2747->type);
    numberType2753 = $tmp2754;
    panda$core$Bit $tmp2755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2709->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2755.value);
    panda$core$String* $tmp2757 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2709->payload));
    index2756 = $tmp2757;
    panda$core$String* $tmp2759 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2758 = $tmp2759;
    panda$core$String* $tmp2760 = panda$core$String$convert$R$panda$core$String(numberType2753);
    panda$core$String* $tmp2762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, &$s2761);
    panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2762, start2758);
    panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2764);
    panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, range2720);
    panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, &$s2767);
    (($fn2769) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2768);
    panda$core$String* $tmp2771 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2770 = $tmp2771;
    org$pandalanguage$pandac$Type* $tmp2772 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2739);
    panda$core$String* $tmp2773 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2772);
    panda$core$String* $tmp2774 = panda$core$String$convert$R$panda$core$String($tmp2773);
    panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2774, &$s2775);
    panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, index2756);
    panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2778);
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, start2758);
    panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, &$s2781);
    (($fn2783) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2782);
    panda$core$String* $tmp2785 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2784 = $tmp2785;
    panda$core$String* $tmp2786 = panda$core$String$convert$R$panda$core$String(numberType2753);
    panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, &$s2787);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, end2784);
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2790);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, range2720);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2793);
    (($fn2795) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2794);
    panda$core$String* $tmp2797 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2796 = $tmp2797;
    org$pandalanguage$pandac$ClassDecl* $tmp2799 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, stepType2728);
    stepCl2798 = $tmp2799;
    PANDA_ASSERT(((panda$core$Bit) { stepCl2798 != NULL }).value);
    panda$collections$ListView* $tmp2800 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2798);
    ITable* $tmp2801 = ((panda$collections$CollectionView*) $tmp2800)->$class->itable;
    while ($tmp2801->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2801 = $tmp2801->next;
    }
    $fn2803 $tmp2802 = $tmp2801->methods[0];
    panda$core$Int64 $tmp2804 = $tmp2802(((panda$collections$CollectionView*) $tmp2800));
    panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2804, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2805.value);
    panda$collections$ListView* $tmp2807 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, stepCl2798);
    ITable* $tmp2808 = $tmp2807->$class->itable;
    while ($tmp2808->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2808 = $tmp2808->next;
    }
    $fn2810 $tmp2809 = $tmp2808->methods[0];
    panda$core$Object* $tmp2811 = $tmp2809($tmp2807, ((panda$core$Int64) { 0 }));
    stepField2806 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2811);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, stepField2806);
    panda$core$String* $tmp2812 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, stepField2806->type);
    panda$core$String* $tmp2813 = panda$core$String$convert$R$panda$core$String($tmp2812);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, &$s2814);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, step2796);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, &$s2817);
    panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, range2720);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, &$s2820);
    (($fn2822) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2821);
    panda$core$String* $tmp2824 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2823 = $tmp2824;
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2825, inclusive2823);
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, &$s2827);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, range2720);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, &$s2830);
    (($fn2832) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2831);
    panda$core$String* $tmp2834 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2833 = $tmp2834;
    panda$core$String* $tmp2836 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2835 = $tmp2836;
    panda$core$String* $tmp2838 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2837 = $tmp2838;
    panda$core$String* $tmp2840 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2839 = $tmp2840;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2841 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2841->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2841->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2841, ((panda$core$String*) p_f->payload), loopEnd2837, loopTest2839);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2841));
    panda$core$String* $tmp2844 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2843 = $tmp2844;
    panda$core$String* $tmp2846 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2845 = $tmp2846;
    panda$core$Bit $tmp2849 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2728)->name, &$s2848);
    if ($tmp2849.value) {
    {
        signPrefix2847 = &$s2850;
    }
    }
    else {
    {
        panda$core$Bit $tmp2853 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2728)->name, &$s2852);
        bool $tmp2851 = $tmp2853.value;
        if ($tmp2851) goto $l2854;
        panda$core$Bit $tmp2856 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) stepType2728)->name, &$s2855);
        $tmp2851 = $tmp2856.value;
        $l2854:;
        panda$core$Bit $tmp2857 = { $tmp2851 };
        PANDA_ASSERT($tmp2857.value);
        signPrefix2847 = &$s2858;
    }
    }
    panda$core$Bit $tmp2861 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2847, &$s2860);
    if ($tmp2861.value) {
    {
        panda$core$String* $tmp2862 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2859 = $tmp2862;
        panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2863, direction2859);
        panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, &$s2865);
        panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, step2796);
        panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2868);
        (($fn2870) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2869);
    }
    }
    else {
    {
        direction2859 = &$s2871;
    }
    }
    panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2872, direction2859);
    panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2873, &$s2874);
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2875, forwardEntry2843);
    panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, &$s2877);
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, backwardEntry2845);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, &$s2880);
    (($fn2882) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2881);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2843, p_out);
    panda$core$String* $tmp2884 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2883 = $tmp2884;
    panda$core$String* $tmp2886 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2885 = $tmp2886;
    panda$core$String* $tmp2888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2887, inclusive2823);
    panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2888, &$s2889);
    panda$core$String* $tmp2891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, forwardEntryInclusive2883);
    panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2891, &$s2892);
    panda$core$String* $tmp2894 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2885);
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2894, &$s2895);
    panda$core$String* $tmp2897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2893, $tmp2896);
    (($fn2898) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2897);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2883, p_out);
    panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2899, start2758);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, &$s2901);
    panda$core$String* $tmp2903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, end2784);
    panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2903, &$s2904);
    panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, loopStart2833);
    panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2906, &$s2907);
    panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, loopEnd2837);
    panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2909, &$s2910);
    (($fn2912) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2911);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2885, p_out);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2913, start2758);
    panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, &$s2915);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2916, end2784);
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, &$s2918);
    panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, loopStart2833);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, &$s2921);
    panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, loopEnd2837);
    panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, &$s2924);
    (($fn2926) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2925);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2845, p_out);
    panda$core$String* $tmp2928 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2927 = $tmp2928;
    panda$core$String* $tmp2930 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2929 = $tmp2930;
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2931, inclusive2823);
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, &$s2933);
    panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, backwardEntryInclusive2927);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
    panda$core$String* $tmp2938 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive2929);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, &$s2939);
    panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, $tmp2940);
    (($fn2942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2941);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2927, p_out);
    panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2943, start2758);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, &$s2945);
    panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, end2784);
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2947, &$s2948);
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, loopStart2833);
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, loopEnd2837);
    panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, &$s2954);
    (($fn2956) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2955);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2929, p_out);
    panda$core$String* $tmp2958 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2957 = $tmp2958;
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2959, start2758);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, end2784);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2964);
    panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, loopStart2833);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
    panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, loopEnd2837);
    panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2969, &$s2970);
    (($fn2972) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2971);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2833, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2723, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2839, p_out);
    panda$core$String* $tmp2974 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2973 = $tmp2974;
    panda$core$String* $tmp2976 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2975 = $tmp2976;
    panda$core$String* $tmp2978 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2977 = $tmp2978;
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2979, direction2859);
    panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, &$s2981);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, forwardLabel2975);
    panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, &$s2984);
    panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2985, backwardLabel2977);
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, &$s2987);
    (($fn2989) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2988);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2975, p_out);
    panda$core$String* $tmp2991 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2990 = $tmp2991;
    panda$core$String* $tmp2992 = panda$core$String$convert$R$panda$core$String(numberType2753);
    panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, &$s2993);
    panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, forwardDelta2990);
    panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, &$s2996);
    panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, end2784);
    panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, &$s2999);
    panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, index2756);
    panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, &$s3002);
    (($fn3004) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3003);
    panda$core$String* $tmp3006 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel3005 = $tmp3006;
    panda$core$String* $tmp3008 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel3007 = $tmp3008;
    panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3009, inclusive2823);
    panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, &$s3011);
    panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, forwardInclusiveLabel3005);
    panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
    panda$core$String* $tmp3016 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel3007);
    panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, $tmp3018);
    (($fn3020) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3019);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel3005, p_out);
    panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3021, forwardDelta2990);
    panda$core$String* $tmp3024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3022, &$s3023);
    panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3024, step2796);
    panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, &$s3026);
    panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, loopInc2973);
    panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, &$s3029);
    panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3030, loopEnd2837);
    panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3031, &$s3032);
    (($fn3034) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3033);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel3007, p_out);
    panda$core$String* $tmp3036 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest3035 = $tmp3036;
    panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3037, forwardDelta2990);
    panda$core$String* $tmp3040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3038, &$s3039);
    panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3040, step2796);
    panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
    panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, loopInc2973);
    panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
    panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, loopEnd2837);
    panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3047, &$s3048);
    (($fn3050) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3049);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2977, p_out);
    panda$core$String* $tmp3052 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta3051 = $tmp3052;
    panda$core$String* $tmp3053 = panda$core$String$convert$R$panda$core$String(numberType2753);
    panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3053, &$s3054);
    panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, backwardDelta3051);
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
    panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, index2756);
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3060);
    panda$core$String* $tmp3062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3061, end2784);
    panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3062, &$s3063);
    (($fn3065) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3064);
    panda$core$String* $tmp3067 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel3066 = $tmp3067;
    panda$core$String* $tmp3069 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel3068 = $tmp3069;
    panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3070, inclusive2823);
    panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, &$s3072);
    panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3073, backwardInclusiveLabel3066);
    panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3074, &$s3075);
    panda$core$String* $tmp3077 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel3068);
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, &$s3078);
    panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, $tmp3079);
    (($fn3081) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3080);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel3066, p_out);
    panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3082, backwardDelta3051);
    panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, &$s3084);
    panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, step2796);
    panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, &$s3087);
    panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, loopInc2973);
    panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, &$s3090);
    panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3091, loopEnd2837);
    panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
    (($fn3095) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3094);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel3068, p_out);
    panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3096, backwardDelta3051);
    panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3098);
    panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, step2796);
    panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, &$s3101);
    panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3102, loopInc2973);
    panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3103, &$s3104);
    panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3105, loopEnd2837);
    panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, &$s3107);
    (($fn3109) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3108);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2973, p_out);
    panda$core$String* $tmp3111 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3110 = $tmp3111;
    panda$core$String* $tmp3112 = panda$core$String$convert$R$panda$core$String(index2756);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, &$s3113);
    panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3114, step2796);
    panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, &$s3116);
    (($fn3118) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3117);
    panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3119, loopStart2833);
    panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, &$s3121);
    (($fn3123) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3122);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2837, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp3124 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3125 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3124)->type);
    if ($tmp3125.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp3126 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3127 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3126)->type);
    if ($tmp3127.value) {
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
    panda$core$String* loopStart3134;
    panda$core$String* loopEnd3136;
    panda$core$Bit $tmp3128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp3128.value);
    panda$core$Int64 $tmp3129 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3129, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3130.value);
    panda$core$Object* $tmp3131 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3132 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3133 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3131)->type, $tmp3132);
    PANDA_ASSERT($tmp3133.value);
    panda$core$String* $tmp3135 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3134 = $tmp3135;
    panda$core$String* $tmp3137 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3136 = $tmp3137;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3138 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3138->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3138->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3138, ((panda$core$String*) p_w->payload), loopEnd3136, loopStart3134);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3138));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3134, p_out);
    panda$core$Object* $tmp3141 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3142 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3141), p_out);
    panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3140, $tmp3142);
    panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, &$s3144);
    panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, loopEnd3136);
    panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3146, &$s3147);
    (($fn3149) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3148);
    panda$core$Object* $tmp3150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3150), p_out);
    panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3151, loopStart3134);
    panda$core$String* $tmp3154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3152, &$s3153);
    (($fn3155) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3154);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3136, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3162;
    panda$core$String* loopEnd3164;
    panda$core$Bit $tmp3156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp3156.value);
    panda$core$Int64 $tmp3157 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3157, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3158.value);
    panda$core$Object* $tmp3159 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3160 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3161 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3159)->type, $tmp3160);
    PANDA_ASSERT($tmp3161.value);
    panda$core$String* $tmp3163 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3162 = $tmp3163;
    panda$core$String* $tmp3165 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3164 = $tmp3165;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3166 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3166->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3166->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3166, ((panda$core$String*) p_d->payload), loopEnd3164, loopStart3162);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3166));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3162, p_out);
    panda$core$Object* $tmp3168 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3168), p_out);
    panda$core$Object* $tmp3170 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3171 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3170), p_out);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3169, $tmp3171);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, &$s3173);
    panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, loopStart3162);
    panda$core$String* $tmp3177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3175, &$s3176);
    (($fn3178) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3177);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3164, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3182;
    panda$core$String* loopEnd3184;
    panda$core$Bit $tmp3179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3179.value);
    panda$core$Int64 $tmp3180 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3180, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3181.value);
    panda$core$String* $tmp3183 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3182 = $tmp3183;
    panda$core$String* $tmp3185 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3184 = $tmp3185;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3186 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3186->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3186->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3186, ((panda$core$String*) p_l->payload), loopEnd3184, loopStart3182);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3186));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3182, p_out);
    (($fn3189) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3188);
    panda$core$Object* $tmp3190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3190), p_out);
    (($fn3192) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3191);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3184, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3193;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3193 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3194 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3193->type);
            panda$core$String* $tmp3195 = panda$core$String$convert$R$panda$core$String($tmp3194);
            panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
            panda$core$String* $tmp3198 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3193);
            panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, $tmp3198);
            panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, &$s3200);
            (($fn3202) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3201);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3203 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3193);
                panda$core$String* $tmp3204 = panda$core$String$convert$R$panda$core$String($tmp3203);
                panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
                panda$core$String* $tmp3207 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, $tmp3207);
                panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
                (($fn3211) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3210);
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
    panda$collections$Iterator* decl$Iter3225;
    org$pandalanguage$pandac$IRNode* decl3237;
    panda$core$Bit $tmp3215 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3214 = $tmp3215.value;
    if ($tmp3214) goto $l3216;
    panda$core$Bit $tmp3217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3214 = $tmp3217.value;
    $l3216:;
    panda$core$Bit $tmp3218 = { $tmp3214 };
    bool $tmp3213 = $tmp3218.value;
    if ($tmp3213) goto $l3219;
    panda$core$Bit $tmp3220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3213 = $tmp3220.value;
    $l3219:;
    panda$core$Bit $tmp3221 = { $tmp3213 };
    bool $tmp3212 = $tmp3221.value;
    if ($tmp3212) goto $l3222;
    panda$core$Bit $tmp3223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3212 = $tmp3223.value;
    $l3222:;
    panda$core$Bit $tmp3224 = { $tmp3212 };
    PANDA_ASSERT($tmp3224.value);
    {
        ITable* $tmp3226 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3226->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3226 = $tmp3226->next;
        }
        $fn3228 $tmp3227 = $tmp3226->methods[0];
        panda$collections$Iterator* $tmp3229 = $tmp3227(((panda$collections$Iterable*) p_v->children));
        decl$Iter3225 = $tmp3229;
        $l3230:;
        ITable* $tmp3232 = decl$Iter3225->$class->itable;
        while ($tmp3232->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3232 = $tmp3232->next;
        }
        $fn3234 $tmp3233 = $tmp3232->methods[0];
        panda$core$Bit $tmp3235 = $tmp3233(decl$Iter3225);
        panda$core$Bit $tmp3236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3235);
        if (!$tmp3236.value) goto $l3231;
        {
            ITable* $tmp3238 = decl$Iter3225->$class->itable;
            while ($tmp3238->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3238 = $tmp3238->next;
            }
            $fn3240 $tmp3239 = $tmp3238->methods[1];
            panda$core$Object* $tmp3241 = $tmp3239(decl$Iter3225);
            decl3237 = ((org$pandalanguage$pandac$IRNode*) $tmp3241);
            panda$core$Bit $tmp3242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3237->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3242.value);
            panda$core$Int64 $tmp3243 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl3237->children);
            panda$core$Bit $tmp3244 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3243, ((panda$core$Int64) { 1 }));
            if ($tmp3244.value) {
            {
                panda$core$Object* $tmp3245 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3237->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3246 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3237->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3245), ((org$pandalanguage$pandac$IRNode*) $tmp3246), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3247 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3237->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3247), NULL, p_out);
            }
            }
        }
        goto $l3230;
        $l3231:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3251;
    panda$core$String* result3260;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3248 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3249 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3248, p_out);
            return $tmp3249;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3250 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3250;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3252 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3253 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3252), p_out);
            base3251 = $tmp3253;
            panda$core$String* $tmp3254 = panda$core$String$convert$R$panda$core$String(base3251);
            panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3254, &$s3255);
            panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, &$s3258);
            return $tmp3259;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3261 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3262 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3261), p_out);
            result3260 = $tmp3262;
            panda$core$UInt64$wrapper* $tmp3263;
            $tmp3263 = (panda$core$UInt64$wrapper*) malloc(24);
            $tmp3263->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
            $tmp3263->refCount = 1;
            $tmp3263->value = ((panda$core$UInt64$wrapper*) p_lvalue->payload)->value;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) $tmp3263), ((panda$core$Object*) result3260));
            return result3260;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3267;
    panda$core$String* value3270;
    panda$core$String* t3271;
    panda$core$Int64 op3274;
    panda$core$String* right3276;
    panda$core$Bit $tmp3264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3264.value);
    panda$core$Int64 $tmp3265 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3265, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3266.value);
    panda$core$Object* $tmp3268 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3269 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3268), p_out);
    lvalue3267 = $tmp3269;
    panda$core$Object* $tmp3272 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3273 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3272)->type);
    t3271 = $tmp3273;
    op3274 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3274, ((panda$core$Int64) { 73 }));
    if ($tmp3275.value) {
    {
        panda$core$Object* $tmp3277 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3278 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3277), p_out);
        right3276 = $tmp3278;
        value3270 = right3276;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3279 = panda$core$String$convert$R$panda$core$String(lvalue3267);
    panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, &$s3280);
    panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, value3270);
    panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, &$s3283);
    (($fn3285) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3284);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    bool $tmp3286 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3286) goto $l3287;
    panda$core$Int64 $tmp3288 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3289 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3288, ((panda$core$Int64) { 0 }));
    $tmp3286 = $tmp3289.value;
    $l3287:;
    panda$core$Bit $tmp3290 = { $tmp3286 };
    if ($tmp3290.value) {
    {
        panda$core$Int64 $tmp3291 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3291, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3292.value);
        panda$core$Object* $tmp3294 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3295 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3294), p_out);
        panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3293, $tmp3295);
        panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
        (($fn3299) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3298);
    }
    }
    else {
    {
        (($fn3301) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3300);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3305;
    panda$core$Int64 $tmp3302 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3303 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3302, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3303.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3304 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3304);
    }
    }
    panda$core$Int64 $tmp3306 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3305, ((panda$core$Int64) { 0 }), $tmp3306, ((panda$core$Bit) { false }));
    int64_t $tmp3308 = $tmp3305.min.value;
    panda$core$Int64 i3307 = { $tmp3308 };
    int64_t $tmp3310 = $tmp3305.max.value;
    bool $tmp3311 = $tmp3305.inclusive.value;
    if ($tmp3311) goto $l3318; else goto $l3319;
    $l3318:;
    if ($tmp3308 <= $tmp3310) goto $l3312; else goto $l3314;
    $l3319:;
    if ($tmp3308 < $tmp3310) goto $l3312; else goto $l3314;
    $l3312:;
    {
        panda$core$Object* $tmp3320 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3307);
        panda$core$Bit $tmp3324;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3320)->loopLabel != NULL }).value) goto $l3321; else goto $l3322;
        $l3321:;
        panda$core$Bit $tmp3325 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3320)->loopLabel, p_name);
        $tmp3324 = $tmp3325;
        goto $l3323;
        $l3322:;
        $tmp3324 = ((panda$core$Bit) { false });
        goto $l3323;
        $l3323:;
        if ($tmp3324.value) {
        {
            panda$core$Object* $tmp3326 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3307);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3326);
        }
        }
    }
    $l3315:;
    int64_t $tmp3328 = $tmp3310 - i3307.value;
    if ($tmp3311) goto $l3329; else goto $l3330;
    $l3329:;
    if ($tmp3328 >= 1) goto $l3327; else goto $l3314;
    $l3330:;
    if ($tmp3328 > 1) goto $l3327; else goto $l3314;
    $l3327:;
    i3307.value += 1;
    goto $l3312;
    $l3314:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3333;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3334 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3333 = $tmp3334;
    panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3335, desc3333->breakLabel);
    panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3336, &$s3337);
    (($fn3339) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3338);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3340;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3341 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3340 = $tmp3341;
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3342, desc3340->continueLabel);
    panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, &$s3344);
    (($fn3346) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3345);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3347.value);
    panda$core$Int64 $tmp3349 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3349, ((panda$core$Int64) { 1 }));
    bool $tmp3348 = $tmp3350.value;
    if ($tmp3348) goto $l3351;
    panda$core$Int64 $tmp3352 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3352, ((panda$core$Int64) { 2 }));
    $tmp3348 = $tmp3353.value;
    $l3351:;
    panda$core$Bit $tmp3354 = { $tmp3348 };
    PANDA_ASSERT($tmp3354.value);
    panda$core$Object* $tmp3356 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3357 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3356), p_out);
    panda$core$String* $tmp3358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3355, $tmp3357);
    panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3358, &$s3359);
    (($fn3361) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3360);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3370;
    org$pandalanguage$pandac$IRNode* w3385;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3388;
    panda$core$Object* $tmp3363 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3364 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3363), p_out);
    panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3362, $tmp3364);
    panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, &$s3366);
    (($fn3368) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3367);
    panda$core$Int64 $tmp3369 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3369;
    panda$core$Int64 $tmp3371 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3370, ((panda$core$Int64) { 1 }), $tmp3371, ((panda$core$Bit) { false }));
    int64_t $tmp3373 = $tmp3370.min.value;
    panda$core$Int64 i3372 = { $tmp3373 };
    int64_t $tmp3375 = $tmp3370.max.value;
    bool $tmp3376 = $tmp3370.inclusive.value;
    if ($tmp3376) goto $l3383; else goto $l3384;
    $l3383:;
    if ($tmp3373 <= $tmp3375) goto $l3377; else goto $l3379;
    $l3384:;
    if ($tmp3373 < $tmp3375) goto $l3377; else goto $l3379;
    $l3377:;
    {
        panda$core$Object* $tmp3386 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3372);
        w3385 = ((org$pandalanguage$pandac$IRNode*) $tmp3386);
        panda$core$Bit $tmp3387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3385->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3387.value) {
        {
            panda$core$Int64 $tmp3389 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3385->children);
            panda$core$Int64 $tmp3390 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3389, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3388, ((panda$core$Int64) { 0 }), $tmp3390, ((panda$core$Bit) { false }));
            int64_t $tmp3392 = $tmp3388.min.value;
            panda$core$Int64 j3391 = { $tmp3392 };
            int64_t $tmp3394 = $tmp3388.max.value;
            bool $tmp3395 = $tmp3388.inclusive.value;
            if ($tmp3395) goto $l3402; else goto $l3403;
            $l3402:;
            if ($tmp3392 <= $tmp3394) goto $l3396; else goto $l3398;
            $l3403:;
            if ($tmp3392 < $tmp3394) goto $l3396; else goto $l3398;
            $l3396:;
            {
                panda$core$Object* $tmp3405 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3385->children, j3391);
                panda$core$UInt64 $tmp3406 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3405));
                panda$core$UInt64$wrapper* $tmp3407;
                $tmp3407 = (panda$core$UInt64$wrapper*) malloc(24);
                $tmp3407->cl = (panda$core$Class*) &panda$core$UInt64$wrapperclass;
                $tmp3407->refCount = 1;
                $tmp3407->value = $tmp3406;
                panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3404, ((panda$core$Object*) $tmp3407));
                panda$core$String* $tmp3410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3408, &$s3409);
                (($fn3411) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3410);
            }
            $l3399:;
            int64_t $tmp3413 = $tmp3394 - j3391.value;
            if ($tmp3395) goto $l3414; else goto $l3415;
            $l3414:;
            if ($tmp3413 >= 1) goto $l3412; else goto $l3398;
            $l3415:;
            if ($tmp3413 > 1) goto $l3412; else goto $l3398;
            $l3412:;
            j3391.value += 1;
            goto $l3396;
            $l3398:;
            panda$core$Int64 $tmp3418 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3385->children);
            panda$core$Int64 $tmp3419 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3418, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3420 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3385->children, $tmp3419);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3420), p_out);
            (($fn3422) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3421);
        }
        }
        else {
        {
            panda$core$Bit $tmp3423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3385->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3423.value);
            panda$core$Int64 $tmp3424 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3385->children);
            panda$core$Bit $tmp3425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3424, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3425.value);
            (($fn3427) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3426);
            panda$core$Object* $tmp3428 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3385->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3428), p_out);
        }
        }
    }
    $l3380:;
    int64_t $tmp3430 = $tmp3375 - i3372.value;
    if ($tmp3376) goto $l3431; else goto $l3432;
    $l3431:;
    if ($tmp3430 >= 1) goto $l3429; else goto $l3379;
    $l3432:;
    if ($tmp3430 > 1) goto $l3429; else goto $l3379;
    $l3429:;
    i3372.value += 1;
    goto $l3377;
    $l3379:;
    panda$core$Int64 $tmp3435 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3435;
    (($fn3437) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3436);
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
    panda$core$String* result3438;
    org$pandalanguage$pandac$Type* $tmp3439 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3440 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3439);
    result3438 = $tmp3440;
    panda$core$Bit $tmp3442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind->$rawValue, ((panda$core$Int64) { 2 }));
    bool $tmp3441 = $tmp3442.value;
    if (!$tmp3441) goto $l3443;
    panda$core$Bit $tmp3445 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3438, &$s3444);
    panda$core$Bit $tmp3446 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3445);
    $tmp3441 = $tmp3446.value;
    $l3443:;
    panda$core$Bit $tmp3447 = { $tmp3441 };
    if ($tmp3447.value) {
    {
        panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3438, &$s3448);
        return $tmp3449;
    }
    }
    return result3438;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3461;
    panda$collections$Iterator* p$Iter3471;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3483;
    panda$io$MemoryOutputStream* bodyBuffer3505;
    panda$io$IndentedOutputStream* indentedBody3508;
    panda$collections$Iterator* s$Iter3511;
    org$pandalanguage$pandac$IRNode* s3523;
    panda$core$Object* $tmp3450 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3450)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3451;
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3452 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3453 = panda$core$String$convert$R$panda$core$String($tmp3452);
    panda$core$String* $tmp3455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3453, &$s3454);
    panda$core$String* $tmp3456 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3455, $tmp3456);
    panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3457, &$s3458);
    (($fn3460) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3459);
    separator3461 = &$s3462;
    panda$core$Bit $tmp3463 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3464 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3463);
    if ($tmp3464.value) {
    {
        panda$core$String* $tmp3465 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3466 = panda$core$String$convert$R$panda$core$String($tmp3465);
        panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3467);
        (($fn3469) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3468);
        separator3461 = &$s3470;
    }
    }
    {
        ITable* $tmp3472 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3472->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3472 = $tmp3472->next;
        }
        $fn3474 $tmp3473 = $tmp3472->methods[0];
        panda$collections$Iterator* $tmp3475 = $tmp3473(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3471 = $tmp3475;
        $l3476:;
        ITable* $tmp3478 = p$Iter3471->$class->itable;
        while ($tmp3478->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3478 = $tmp3478->next;
        }
        $fn3480 $tmp3479 = $tmp3478->methods[0];
        panda$core$Bit $tmp3481 = $tmp3479(p$Iter3471);
        panda$core$Bit $tmp3482 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3481);
        if (!$tmp3482.value) goto $l3477;
        {
            ITable* $tmp3484 = p$Iter3471->$class->itable;
            while ($tmp3484->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3484 = $tmp3484->next;
            }
            $fn3486 $tmp3485 = $tmp3484->methods[1];
            panda$core$Object* $tmp3487 = $tmp3485(p$Iter3471);
            p3483 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3487);
            panda$core$String* $tmp3488 = panda$core$String$convert$R$panda$core$String(separator3461);
            panda$core$String* $tmp3490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3488, &$s3489);
            panda$core$String* $tmp3491 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3483->type);
            panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3490, $tmp3491);
            panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3492, &$s3493);
            panda$core$String* $tmp3495 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3483->name);
            panda$core$String* $tmp3496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3494, $tmp3495);
            panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3496, &$s3497);
            (($fn3499) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3498);
            separator3461 = &$s3500;
        }
        goto $l3476;
        $l3477:;
    }
    (($fn3502) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3501);
    panda$core$Int64 $tmp3503 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3503;
    panda$core$Bit $tmp3504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3504.value);
    panda$io$MemoryOutputStream* $tmp3506 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3506->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3506->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3506);
    bodyBuffer3505 = $tmp3506;
    panda$io$IndentedOutputStream* $tmp3509 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3509->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3509->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3509, ((panda$io$OutputStream*) bodyBuffer3505));
    indentedBody3508 = $tmp3509;
    {
        ITable* $tmp3512 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3512->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3512 = $tmp3512->next;
        }
        $fn3514 $tmp3513 = $tmp3512->methods[0];
        panda$collections$Iterator* $tmp3515 = $tmp3513(((panda$collections$Iterable*) p_body->children));
        s$Iter3511 = $tmp3515;
        $l3516:;
        ITable* $tmp3518 = s$Iter3511->$class->itable;
        while ($tmp3518->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3518 = $tmp3518->next;
        }
        $fn3520 $tmp3519 = $tmp3518->methods[0];
        panda$core$Bit $tmp3521 = $tmp3519(s$Iter3511);
        panda$core$Bit $tmp3522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3521);
        if (!$tmp3522.value) goto $l3517;
        {
            ITable* $tmp3524 = s$Iter3511->$class->itable;
            while ($tmp3524->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3524 = $tmp3524->next;
            }
            $fn3526 $tmp3525 = $tmp3524->methods[1];
            panda$core$Object* $tmp3527 = $tmp3525(s$Iter3511);
            s3523 = ((org$pandalanguage$pandac$IRNode*) $tmp3527);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3523, indentedBody3508);
        }
        goto $l3516;
        $l3517:;
    }
    panda$core$String* $tmp3528 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3529) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3528);
    panda$core$String* $tmp3530 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3505);
    (($fn3531) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3530);
    panda$core$Int64 $tmp3532 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3532;
    (($fn3534) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3533);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3535;
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
    panda$io$File* $tmp3537 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3536);
    path3535 = $tmp3537;
    panda$io$File* $tmp3538 = panda$io$File$parent$R$panda$io$File$Q(path3535);
    panda$io$File$createDirectories($tmp3538);
    panda$io$IndentedOutputStream* $tmp3539 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3539->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3539->refCount.value = 1;
    panda$io$OutputStream* $tmp3541 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3535);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3539, $tmp3541);
    self->out = $tmp3539;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3542 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3542.value) {
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
    panda$core$String* $tmp3543 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3544) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3543);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3545 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3546) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3545);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3547 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3548) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3547);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3549 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3550) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3549);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3551 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3552) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3551);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3553) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

