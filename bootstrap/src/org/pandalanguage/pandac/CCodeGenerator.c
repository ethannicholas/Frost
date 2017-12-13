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
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/UInt32.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn119)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn134)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn169)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn175)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn181)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn211)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn217)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn223)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn308)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn314)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn320)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn349)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn371)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn377)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn383)(panda$collections$Iterator*);
typedef void (*$fn391)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn428)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn434)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn470)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn514)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn519)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn540)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn548)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn560)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn566)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn619)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn667)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn701)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn704)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn713)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn719)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn725)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn754)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn781)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn787)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn793)(panda$collections$Iterator*);
typedef void (*$fn801)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn881)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn887)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn893)(panda$collections$Iterator*);
typedef void (*$fn901)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn919)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn975)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn993)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1052)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1062)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1075)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1101)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1114)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1137)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1142)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1155)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1203)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1220)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1271)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1278)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1295)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1308)(panda$collections$CollectionView*);
typedef void (*$fn1329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1572)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1579)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1590)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1594)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1600)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1606)(panda$collections$Iterator*);
typedef void (*$fn1614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1617)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1847)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1887)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1891)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1916)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1921)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1927)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1933)(panda$collections$Iterator*);
typedef void (*$fn1938)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1945)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1947)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn1954)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1956)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn1961)(panda$collections$CollectionView*);
typedef void (*$fn1970)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2086)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2091)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2097)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2103)(panda$collections$Iterator*);
typedef void (*$fn2107)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2128)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2167)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2270)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2275)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2279)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2285)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2291)(panda$collections$Iterator*);
typedef void (*$fn2293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2294)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2297)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2316)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2319)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2323)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2326)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2362)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2369)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2387)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2413)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2465)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2479)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2510)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2526)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2537)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2550)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2556)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2561)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2597)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2604)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2648)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2660)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2670)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2720)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2764)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2780)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2794)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2810)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2858)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2888)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2903)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2919)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2933)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2947)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2961)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2987)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2993)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3016)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3027)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3030)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3040)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3049)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3066)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3072)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3078)(panda$collections$Iterator*);
typedef void (*$fn3122)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3136)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3138)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3176)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3296)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3305)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3310)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3316)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3322)(panda$collections$Iterator*);
typedef void (*$fn3335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3338)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3350)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3356)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3362)(panda$collections$Iterator*);
typedef void (*$fn3365)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3417)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3419)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3421)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3425)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3427)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3429)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3433)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3434)(panda$core$Object*);

static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x68", 2, 14951, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6E\x63\x6C\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x66\x6E", 3, 1407949, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28\x2A", 3, 1360815, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 142345674, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, 13945, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3B", 2, 16118, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 185298716, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5F", 2, 13932, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x6E\x65\x78\x74\x3B\x20", 19, -82469649542869656, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, -4109167993310357436, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 20248844642, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 149732532, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 185298716, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 23551901352, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 14375831170, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 13959559259, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 14384, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 10, -868402795326672399, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66", 5, 14792042467, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 229300545255605, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6C\x74", 6, 2270301397372, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, -5595348649711353309, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1496394141948660748, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 13959559259, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 229300545255605, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 185298716, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9, 1496394141948660801, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, -4109167993310357436, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, 20248844642, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 149732532, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 185298716, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 23551901352, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 171978245881277, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 185298716, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 15122232102, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 149732532, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 185298716, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, 23551901352, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 171978245881277, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, 15122232102, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, 149732532, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B", 4, 233187142, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5F", 2, 21608, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 144, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 148, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 16321, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 16525, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 195, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, 16423, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 13595, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 163, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 161, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 16524, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 16322, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4, 137658487, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1369399, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4, 137372859, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1369399, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, -5723231573477557210, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, 19635, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, -5723245373239515055, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, 155645120159214, NULL };
static panda$core$String $s1270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, -5659480974997351189, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, 19653, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 20716344924, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, 1541204091645718446, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, 14283, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, 157293860332681, NULL };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 229298558774239, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, 8088200864683738024, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, 1361108, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1369417, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1369417, NULL };
static panda$core$String $s1564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, 151084686244311, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 14808, NULL };
static panda$core$String $s1687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 146641629, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 146641629, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1369399, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 142345674, NULL };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, 223950062312973, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 146480100229230, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, 5666803292027080506, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s1914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, 2026475985823268269, NULL };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, 19613, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, 1381611, NULL };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x4E\x55\x4C\x4C\x20\x7D\x3B", 9, 1573656756204980508, NULL };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 223586327, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 15878335074876521, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, 14324797439511602, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1369399, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 15878335074876521, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, 14295074875294774, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1369399, NULL };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 185298716, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 21242756259, NULL };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 142345674, NULL };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1604554669253151784, NULL };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, 2134398342781, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x69\x6E\x2E\x76\x61\x6C\x75\x65\x3B", 11, -3956212002962864875, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1369417, NULL };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x61\x78\x2E\x76\x61\x6C\x75\x65\x3B", 11, -4041768404061004273, NULL };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, -5967430147646080757, NULL };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 137648286, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1362825, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1361310, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 157293860332647, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20\x31\x3B", 12, -4476855678279854640, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, 3588086193908855763, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1369417, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, 5794120589201096528, NULL };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, -1565217378717073995, NULL };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, -5967430147646080757, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, 13904243334, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 137648286, NULL };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1362825, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 137668688, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1363027, NULL };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1361310, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 157293860332647, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 137668688, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1363027, NULL };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, 13904537533, NULL };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, 137665772, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, 1197661341919403142, NULL };
static panda$core$String $s3029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 14808, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 229300545255605, NULL };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, 229300545255632, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s3181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4E\x44\x41\x5F\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1604554669253151784, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x3B", 6, 2103477946177, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6C\x74\x3A", 8, 21658216358330300, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s3287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 13959559259, NULL };
static panda$core$String $s3306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1368140, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, 14946, NULL };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, -9085029162737573691, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, 14382547864528555, NULL };
static panda$core$String $s3393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, 137359729, NULL };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, 581419489117905124, NULL };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, 6121584528548524069, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, -9137501668294411695, NULL };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, -3925411815915941145, NULL };
static panda$core$String $s3418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, 7577815125550662002, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, -6041374821165614789, NULL };
static panda$core$String $s3422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
        panda$core$MutableString* $tmp81 = (panda$core$MutableString*) malloc(48);
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
    panda$core$String* $tmp131 = panda$core$String$convert$R$panda$core$String(p_label);
    panda$core$String* $tmp133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp131, &$s132);
    (($fn134) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp133);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            bool $tmp135 = ((panda$core$Bit) { p_stmt->children == NULL }).value;
            if ($tmp135) goto $l136;
            panda$core$Int64 $tmp137 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp137, ((panda$core$Int64) { 0 }));
            $tmp135 = $tmp138.value;
            $l136:;
            panda$core$Bit $tmp139 = { $tmp135 };
            if ($tmp139.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp140 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp141 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp140, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp142 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, $tmp141);
            panda$core$Bit $tmp143 = org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp142));
            return $tmp143;
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
    org$pandalanguage$pandac$ClassDecl* cl155;
    panda$core$Int64 result164;
    panda$collections$Iterator* f$Iter165;
    org$pandalanguage$pandac$FieldDecl* f178;
    panda$core$Int64 size184;
    panda$core$Int64 align186;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp144 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp144.value) {
    {
        panda$core$Bit $tmp146 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s145);
        if ($tmp146.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp148 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s147);
        if ($tmp148.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp150 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s149);
        if ($tmp150.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp152 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s151);
        PANDA_ASSERT($tmp152.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp153 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp154 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp153);
    if ($tmp154.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp156 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl155 = $tmp156;
    PANDA_ASSERT(((panda$core$Bit) { cl155 != NULL }).value);
    panda$core$Bit $tmp158 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl155);
    panda$core$Bit $tmp159 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp158);
    bool $tmp157 = $tmp159.value;
    if ($tmp157) goto $l160;
    panda$core$Bit $tmp162 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl155)->name, &$s161);
    $tmp157 = $tmp162.value;
    $l160:;
    panda$core$Bit $tmp163 = { $tmp157 };
    if ($tmp163.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result164 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp166 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl155);
        ITable* $tmp167 = ((panda$collections$Iterable*) $tmp166)->$class->itable;
        while ($tmp167->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp167 = $tmp167->next;
        }
        $fn169 $tmp168 = $tmp167->methods[0];
        panda$collections$Iterator* $tmp170 = $tmp168(((panda$collections$Iterable*) $tmp166));
        f$Iter165 = $tmp170;
        $l171:;
        ITable* $tmp173 = f$Iter165->$class->itable;
        while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp173 = $tmp173->next;
        }
        $fn175 $tmp174 = $tmp173->methods[0];
        panda$core$Bit $tmp176 = $tmp174(f$Iter165);
        panda$core$Bit $tmp177 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp176);
        if (!$tmp177.value) goto $l172;
        {
            ITable* $tmp179 = f$Iter165->$class->itable;
            while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp179 = $tmp179->next;
            }
            $fn181 $tmp180 = $tmp179->methods[1];
            panda$core$Object* $tmp182 = $tmp180(f$Iter165);
            f178 = ((org$pandalanguage$pandac$FieldDecl*) $tmp182);
            panda$core$Bit $tmp183 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f178->annotations);
            if ($tmp183.value) {
            {
                goto $l171;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f178);
            panda$core$Int64 $tmp185 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f178->type);
            size184 = $tmp185;
            panda$core$Int64 $tmp187 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result164, size184);
            align186 = $tmp187;
            panda$core$Bit $tmp188 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align186, ((panda$core$Int64) { 0 }));
            if ($tmp188.value) {
            {
                panda$core$Int64 $tmp189 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size184, align186);
                panda$core$Int64 $tmp190 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result164, $tmp189);
                result164 = $tmp190;
            }
            }
            panda$core$Int64 $tmp191 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result164, size184);
            panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp191, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp192.value);
            panda$core$Int64 $tmp193 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result164, size184);
            result164 = $tmp193;
        }
        goto $l171;
        $l172:;
    }
    panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp194.value) {
    {
        panda$core$Int64 $tmp195 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result164, ((panda$core$Int64) { 1 }));
        result164 = $tmp195;
    }
    }
    return result164;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp196 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp197 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp196, ((panda$core$Int64) { 8 }));
    return $tmp197;
}
panda$core$Int64 org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl198;
    panda$core$Int64 result204;
    panda$collections$Iterator* f$Iter207;
    org$pandalanguage$pandac$FieldDecl* f220;
    panda$core$Int64 size225;
    panda$core$Int64 align227;
    org$pandalanguage$pandac$ClassDecl* $tmp199 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl198 = $tmp199;
    bool $tmp200 = ((panda$core$Bit) { cl198 != NULL }).value;
    if (!$tmp200) goto $l201;
    panda$core$Bit $tmp202 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl198);
    $tmp200 = $tmp202.value;
    $l201:;
    panda$core$Bit $tmp203 = { $tmp200 };
    PANDA_ASSERT($tmp203.value);
    org$pandalanguage$pandac$Type* $tmp205 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp206 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp205);
    result204 = $tmp206;
    {
        panda$collections$ListView* $tmp208 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl198);
        ITable* $tmp209 = ((panda$collections$Iterable*) $tmp208)->$class->itable;
        while ($tmp209->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp209 = $tmp209->next;
        }
        $fn211 $tmp210 = $tmp209->methods[0];
        panda$collections$Iterator* $tmp212 = $tmp210(((panda$collections$Iterable*) $tmp208));
        f$Iter207 = $tmp212;
        $l213:;
        ITable* $tmp215 = f$Iter207->$class->itable;
        while ($tmp215->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp215 = $tmp215->next;
        }
        $fn217 $tmp216 = $tmp215->methods[0];
        panda$core$Bit $tmp218 = $tmp216(f$Iter207);
        panda$core$Bit $tmp219 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp218);
        if (!$tmp219.value) goto $l214;
        {
            ITable* $tmp221 = f$Iter207->$class->itable;
            while ($tmp221->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp221 = $tmp221->next;
            }
            $fn223 $tmp222 = $tmp221->methods[1];
            panda$core$Object* $tmp224 = $tmp222(f$Iter207);
            f220 = ((org$pandalanguage$pandac$FieldDecl*) $tmp224);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f220);
            panda$core$Int64 $tmp226 = org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f220->type);
            size225 = $tmp226;
            panda$core$Int64 $tmp228 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result204, size225);
            align227 = $tmp228;
            panda$core$Bit $tmp229 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align227, ((panda$core$Int64) { 0 }));
            if ($tmp229.value) {
            {
                panda$core$Int64 $tmp230 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size225, align227);
                panda$core$Int64 $tmp231 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result204, $tmp230);
                result204 = $tmp231;
            }
            }
            panda$core$Int64 $tmp232 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result204, size225);
            panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp232, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp233.value);
            panda$core$Int64 $tmp234 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result204, size225);
            result204 = $tmp234;
        }
        goto $l213;
        $l214:;
    }
    panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp235.value) {
    {
        panda$core$Int64 $tmp236 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result204, ((panda$core$Int64) { 1 }));
        result204 = $tmp236;
    }
    }
    return result204;
}
void org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp237 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp237.value) {
    {
        return;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp238 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    return $tmp238;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp239.value) {
    {
        panda$core$Object* $tmp240 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp241 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp240));
        return $tmp241;
    }
    }
    panda$core$String* $tmp242 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp243 = panda$core$String$convert$R$panda$core$String($tmp242);
    panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s244);
    return $tmp245;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp246 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp246, &$s247);
    return $tmp248;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType249;
    panda$core$MutableString* result251;
    panda$core$Char8 $tmp258;
    panda$core$Char8 $tmp266;
    panda$core$Range$LTpanda$core$Int64$GT $tmp267;
    org$pandalanguage$pandac$Type* $tmp250 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType249 = $tmp250;
    panda$core$MutableString* $tmp252 = (panda$core$MutableString*) malloc(48);
    $tmp252->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp252->refCount.value = 1;
    panda$core$MutableString$init($tmp252);
    result251 = $tmp252;
    panda$core$Int64 $tmp254 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType249->subtypes);
    panda$core$Int64 $tmp255 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp254, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp256 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType249->subtypes, $tmp255);
    panda$core$String* $tmp257 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp256));
    panda$core$MutableString$append$panda$core$String(result251, $tmp257);
    panda$core$Char8$init$panda$core$UInt8(&$tmp258, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(result251, $tmp258);
    panda$core$Bit $tmp259 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp259.value);
    panda$core$String* $tmp260 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp261 = panda$core$String$convert$R$panda$core$String($tmp260);
    panda$core$String* $tmp263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp261, &$s262);
    panda$core$MutableString$append$panda$core$String(result251, $tmp263);
    panda$core$Bit $tmp264 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp264.value) {
    {
        panda$core$MutableString$append$panda$core$String(result251, &$s265);
    }
    }
    panda$core$Char8$init$panda$core$UInt8(&$tmp266, ((panda$core$UInt8) { 42 }));
    panda$core$MutableString$append$panda$core$Char8(result251, $tmp266);
    panda$core$Int64 $tmp268 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType249->subtypes);
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
        panda$core$MutableString$append$panda$core$String(result251, &$s283);
        panda$core$Object* $tmp284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType249->subtypes, i270);
        panda$core$String* $tmp285 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp284));
        panda$core$MutableString$append$panda$core$String(result251, $tmp285);
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
    panda$core$MutableString$append$panda$core$String(result251, &$s292);
    panda$core$String* $tmp293 = panda$core$MutableString$finish$R$panda$core$String(result251);
    return $tmp293;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp294.value);
    panda$core$Object* $tmp295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp296 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp295));
    panda$core$String* $tmp297 = panda$core$String$convert$R$panda$core$String($tmp296);
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
    panda$core$MutableString* result337;
    panda$core$String* separator366;
    panda$collections$Iterator* m$Iter368;
    org$pandalanguage$pandac$MethodDecl* m380;
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
            panda$core$String* $tmp329 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp330 = panda$core$String$convert$R$panda$core$String($tmp329);
            panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s331);
            panda$core$String* $tmp333 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf322)->name);
            panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, $tmp333);
            panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s335);
            name328 = $tmp336;
            panda$core$MutableString* $tmp338 = (panda$core$MutableString*) malloc(48);
            $tmp338->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp338->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp341 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp342 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp341);
            panda$core$String* $tmp343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s340, $tmp342);
            panda$core$String* $tmp345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s344);
            ITable* $tmp347 = ((panda$collections$CollectionView*) methods326)->$class->itable;
            while ($tmp347->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp347 = $tmp347->next;
            }
            $fn349 $tmp348 = $tmp347->methods[0];
            panda$core$Int64 $tmp350 = $tmp348(((panda$collections$CollectionView*) methods326));
            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s346, ((panda$core$Object*) wrap_panda$core$Int64($tmp350)));
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s352);
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, name328);
            panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s355);
            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, $tmp356);
            panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s358, intfCC324->name);
            panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s360);
            panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, previous303);
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp362, &$s363);
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp357, $tmp364);
            panda$core$MutableString$init$panda$core$String($tmp338, $tmp365);
            result337 = $tmp338;
            separator366 = &$s367;
            {
                ITable* $tmp369 = ((panda$collections$Iterable*) methods326)->$class->itable;
                while ($tmp369->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp369 = $tmp369->next;
                }
                $fn371 $tmp370 = $tmp369->methods[0];
                panda$collections$Iterator* $tmp372 = $tmp370(((panda$collections$Iterable*) methods326));
                m$Iter368 = $tmp372;
                $l373:;
                ITable* $tmp375 = m$Iter368->$class->itable;
                while ($tmp375->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp375 = $tmp375->next;
                }
                $fn377 $tmp376 = $tmp375->methods[0];
                panda$core$Bit $tmp378 = $tmp376(m$Iter368);
                panda$core$Bit $tmp379 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp378);
                if (!$tmp379.value) goto $l374;
                {
                    ITable* $tmp381 = m$Iter368->$class->itable;
                    while ($tmp381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp381 = $tmp381->next;
                    }
                    $fn383 $tmp382 = $tmp381->methods[1];
                    panda$core$Object* $tmp384 = $tmp382(m$Iter368);
                    m380 = ((org$pandalanguage$pandac$MethodDecl*) $tmp384);
                    panda$core$MutableString$append$panda$core$String(result337, separator366);
                    separator366 = &$s385;
                    panda$core$Bit $tmp386 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m380->annotations);
                    if ($tmp386.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result337, &$s387);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp388 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m380);
                        panda$core$MutableString$append$panda$core$String(result337, $tmp388);
                    }
                    }
                }
                goto $l373;
                $l374:;
            }
            panda$core$MutableString$append$panda$core$String(result337, &$s389);
            panda$core$String* $tmp390 = panda$core$MutableString$finish$R$panda$core$String(result337);
            (($fn391) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp390);
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
    panda$core$String* self_t429;
    panda$core$Char8 $tmp435;
    panda$core$Range$LTpanda$core$Int64$GT $tmp436;
    panda$core$String* pType451;
    panda$collections$Array* casts473;
    panda$core$Range$LTpanda$core$Int64$GT $tmp476;
    panda$core$String* p491;
    panda$core$Range$LTpanda$core$Int64$GT $tmp520;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result561;
    panda$io$MemoryOutputStream* $tmp397 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp397->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp397->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp397);
    outBuffer396 = $tmp397;
    panda$io$IndentedOutputStream* $tmp400 = (panda$io$IndentedOutputStream*) malloc(56);
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
    panda$core$MutableString* $tmp419 = (panda$core$MutableString*) malloc(48);
    $tmp419->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp419->refCount.value = 1;
    panda$core$String* $tmp421 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType410);
    panda$core$MutableString$init$panda$core$String($tmp419, $tmp421);
    resultType418 = $tmp419;
    panda$core$String* $tmp422 = panda$core$MutableString$convert$R$panda$core$String(resultType418);
    panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s423);
    panda$core$String* $tmp425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, resultName414);
    panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp425, &$s426);
    (($fn428) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp427);
    panda$core$String* $tmp430 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t429 = $tmp430;
    panda$core$String* $tmp431 = panda$core$String$convert$R$panda$core$String(self_t429);
    panda$core$String* $tmp433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp431, &$s432);
    (($fn434) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp433);
    panda$core$Char8$init$panda$core$UInt8(&$tmp435, ((panda$core$UInt8) { 40 }));
    panda$core$MutableString$append$panda$core$Char8(resultType418, $tmp435);
    panda$core$MutableString$append$panda$core$String(resultType418, self_t429);
    panda$core$Int64 $tmp437 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp436, ((panda$core$Int64) { 0 }), $tmp437, ((panda$core$Bit) { false }));
    int64_t $tmp439 = $tmp436.min.value;
    panda$core$Int64 i438 = { $tmp439 };
    int64_t $tmp441 = $tmp436.max.value;
    bool $tmp442 = $tmp436.inclusive.value;
    if ($tmp442) goto $l449; else goto $l450;
    $l449:;
    if ($tmp439 <= $tmp441) goto $l443; else goto $l445;
    $l450:;
    if ($tmp439 < $tmp441) goto $l443; else goto $l445;
    $l443:;
    {
        panda$core$Object* $tmp452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i438);
        panda$core$String* $tmp453 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp452));
        pType451 = $tmp453;
        panda$core$MutableString$append$panda$core$String(resultType418, &$s454);
        panda$core$MutableString$append$panda$core$String(resultType418, pType451);
        panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s455, pType451);
        panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp456, &$s457);
        panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp458, ((panda$core$Object*) wrap_panda$core$Int64(i438)));
        panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp459, &$s460);
        (($fn462) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp461);
    }
    $l446:;
    int64_t $tmp464 = $tmp441 - i438.value;
    if ($tmp442) goto $l465; else goto $l466;
    $l465:;
    if ($tmp464 >= 1) goto $l463; else goto $l445;
    $l466:;
    if ($tmp464 > 1) goto $l463; else goto $l445;
    $l463:;
    i438.value += 1;
    goto $l443;
    $l445:;
    (($fn470) ((panda$io$OutputStream*) out399)->$class->vtable[19])(((panda$io$OutputStream*) out399), &$s469);
    panda$core$Int64 $tmp471 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out399->level, ((panda$core$Int64) { 1 }));
    out399->level = $tmp471;
    panda$core$MutableString$append$panda$core$String(resultType418, &$s472);
    panda$collections$Array* $tmp474 = (panda$collections$Array*) malloc(40);
    $tmp474->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp474->refCount.value = 1;
    panda$collections$Array$init($tmp474);
    casts473 = $tmp474;
    panda$core$Int64 $tmp477 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp476, ((panda$core$Int64) { 0 }), $tmp477, ((panda$core$Bit) { false }));
    int64_t $tmp479 = $tmp476.min.value;
    panda$core$Int64 i478 = { $tmp479 };
    int64_t $tmp481 = $tmp476.max.value;
    bool $tmp482 = $tmp476.inclusive.value;
    if ($tmp482) goto $l489; else goto $l490;
    $l489:;
    if ($tmp479 <= $tmp481) goto $l483; else goto $l485;
    $l490:;
    if ($tmp479 < $tmp481) goto $l483; else goto $l485;
    $l483:;
    {
        panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s492, ((panda$core$Object*) wrap_panda$core$Int64(i478)));
        panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, &$s494);
        p491 = $tmp495;
        panda$core$Object* $tmp496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i478);
        panda$core$Object* $tmp497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i478);
        panda$core$Bit $tmp498 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp496)->type, ((org$pandalanguage$pandac$Type*) $tmp497));
        if ($tmp498.value) {
        {
            panda$core$Object* $tmp499 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i478);
            panda$core$Object* $tmp500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i478);
            panda$core$String* $tmp501 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p491, ((org$pandalanguage$pandac$Type*) $tmp499), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp500)->type, out399);
            panda$collections$Array$add$panda$collections$Array$T(casts473, ((panda$core$Object*) $tmp501));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts473, ((panda$core$Object*) p491));
        }
        }
    }
    $l486:;
    int64_t $tmp503 = $tmp481 - i478.value;
    if ($tmp482) goto $l504; else goto $l505;
    $l504:;
    if ($tmp503 >= 1) goto $l502; else goto $l485;
    $l505:;
    if ($tmp503 > 1) goto $l502; else goto $l485;
    $l502:;
    i478.value += 1;
    goto $l483;
    $l485:;
    org$pandalanguage$pandac$Type* $tmp508 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp509 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp508);
    if ($tmp509.value) {
    {
        panda$core$String* $tmp510 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp511 = panda$core$String$convert$R$panda$core$String($tmp510);
        panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, &$s512);
        (($fn514) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp513);
    }
    }
    panda$core$String* $tmp515 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp516 = panda$core$String$convert$R$panda$core$String($tmp515);
    panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp516, &$s517);
    (($fn519) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp518);
    panda$core$Int64 $tmp521 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp520, ((panda$core$Int64) { 0 }), $tmp521, ((panda$core$Bit) { false }));
    int64_t $tmp523 = $tmp520.min.value;
    panda$core$Int64 i522 = { $tmp523 };
    int64_t $tmp525 = $tmp520.max.value;
    bool $tmp526 = $tmp520.inclusive.value;
    if ($tmp526) goto $l533; else goto $l534;
    $l533:;
    if ($tmp523 <= $tmp525) goto $l527; else goto $l529;
    $l534:;
    if ($tmp523 < $tmp525) goto $l527; else goto $l529;
    $l527:;
    {
        panda$core$Object* $tmp536 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts473, i522);
        panda$core$String* $tmp537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s535, ((panda$core$String*) $tmp536));
        panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp537, &$s538);
        (($fn540) ((panda$io$OutputStream*) out399)->$class->vtable[16])(((panda$io$OutputStream*) out399), $tmp539);
    }
    $l530:;
    int64_t $tmp542 = $tmp525 - i522.value;
    if ($tmp526) goto $l543; else goto $l544;
    $l543:;
    if ($tmp542 >= 1) goto $l541; else goto $l529;
    $l544:;
    if ($tmp542 > 1) goto $l541; else goto $l529;
    $l541:;
    i522.value += 1;
    goto $l527;
    $l529:;
    (($fn548) ((panda$io$OutputStream*) out399)->$class->vtable[19])(((panda$io$OutputStream*) out399), &$s547);
    org$pandalanguage$pandac$Type* $tmp549 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp550 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp549);
    if ($tmp550.value) {
    {
        panda$core$String* $tmp553 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s552, p_raw->returnType, effectiveReturnType410, out399);
        panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s551, $tmp553);
        panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, &$s555);
        (($fn557) ((panda$io$OutputStream*) out399)->$class->vtable[19])(((panda$io$OutputStream*) out399), $tmp556);
    }
    }
    panda$core$Int64 $tmp558 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out399->level, ((panda$core$Int64) { 1 }));
    out399->level = $tmp558;
    (($fn560) ((panda$io$OutputStream*) out399)->$class->vtable[19])(((panda$io$OutputStream*) out399), &$s559);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp562 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp562->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp562->refCount.value = 1;
    panda$core$String* $tmp564 = panda$core$MutableString$finish$R$panda$core$String(resultType418);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp562, resultName414, $tmp564);
    result561 = $tmp562;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result561));
    panda$core$String* $tmp565 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer396);
    (($fn566) p_rawOut->$class->vtable[16])(p_rawOut, $tmp565);
    return result561;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod568;
    panda$core$String* result569;
    panda$core$String* selfType574;
    org$pandalanguage$pandac$Type* actualMethodType590;
    org$pandalanguage$pandac$Type* inheritedMethodType592;
    panda$core$Range$LTpanda$core$Int64$GT $tmp594;
    panda$collections$Array* parameters629;
    panda$core$Range$LTpanda$core$Int64$GT $tmp632;
    panda$collections$Array* children657;
    org$pandalanguage$pandac$Position $tmp662;
    panda$core$Range$LTpanda$core$Int64$GT $tmp673;
    panda$core$Bit $tmp567 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp567.value);
    oldMethod568 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp570 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp571 = panda$core$String$convert$R$panda$core$String($tmp570);
    panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp571, &$s572);
    result569 = $tmp573;
    panda$core$String* $tmp575 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp576 = panda$core$String$convert$R$panda$core$String($tmp575);
    panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, &$s577);
    selfType574 = $tmp578;
    panda$core$String* $tmp579 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp580 = panda$core$String$convert$R$panda$core$String($tmp579);
    panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s581);
    panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, result569);
    panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s584);
    panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, selfType574);
    panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp586, &$s587);
    (($fn589) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp588);
    org$pandalanguage$pandac$Type* $tmp591 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType590 = $tmp591;
    org$pandalanguage$pandac$Type* $tmp593 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType592 = $tmp593;
    panda$core$Int64 $tmp595 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp594, ((panda$core$Int64) { 0 }), $tmp595, ((panda$core$Bit) { false }));
    int64_t $tmp597 = $tmp594.min.value;
    panda$core$Int64 i596 = { $tmp597 };
    int64_t $tmp599 = $tmp594.max.value;
    bool $tmp600 = $tmp594.inclusive.value;
    if ($tmp600) goto $l607; else goto $l608;
    $l607:;
    if ($tmp597 <= $tmp599) goto $l601; else goto $l603;
    $l608:;
    if ($tmp597 < $tmp599) goto $l601; else goto $l603;
    $l601:;
    {
        panda$core$Object* $tmp610 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType592->subtypes, i596);
        panda$core$String* $tmp611 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp610));
        panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s609, $tmp611);
        panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp612, &$s613);
        panda$core$Object* $tmp615 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i596);
        panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp614, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp615)->name);
        panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp616, &$s617);
        (($fn619) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp618);
    }
    $l604:;
    int64_t $tmp621 = $tmp599 - i596.value;
    if ($tmp600) goto $l622; else goto $l623;
    $l622:;
    if ($tmp621 >= 1) goto $l620; else goto $l603;
    $l623:;
    if ($tmp621 > 1) goto $l620; else goto $l603;
    $l620:;
    i596.value += 1;
    goto $l601;
    $l603:;
    (($fn627) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s626);
    panda$core$Int64 $tmp628 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp628;
    panda$collections$Array* $tmp630 = (panda$collections$Array*) malloc(40);
    $tmp630->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp630->refCount.value = 1;
    panda$collections$Array$init($tmp630);
    parameters629 = $tmp630;
    panda$core$Int64 $tmp633 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp632, ((panda$core$Int64) { 0 }), $tmp633, ((panda$core$Bit) { false }));
    int64_t $tmp635 = $tmp632.min.value;
    panda$core$Int64 i634 = { $tmp635 };
    int64_t $tmp637 = $tmp632.max.value;
    bool $tmp638 = $tmp632.inclusive.value;
    if ($tmp638) goto $l645; else goto $l646;
    $l645:;
    if ($tmp635 <= $tmp637) goto $l639; else goto $l641;
    $l646:;
    if ($tmp635 < $tmp637) goto $l639; else goto $l641;
    $l639:;
    {
        panda$core$Object* $tmp647 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i634);
        panda$core$Object* $tmp648 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType592->subtypes, i634);
        panda$core$Object* $tmp649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType590->subtypes, i634);
        panda$core$String* $tmp650 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp647)->name, ((org$pandalanguage$pandac$Type*) $tmp648), ((org$pandalanguage$pandac$Type*) $tmp649), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters629, ((panda$core$Object*) $tmp650));
    }
    $l642:;
    int64_t $tmp652 = $tmp637 - i634.value;
    if ($tmp638) goto $l653; else goto $l654;
    $l653:;
    if ($tmp652 >= 1) goto $l651; else goto $l641;
    $l654:;
    if ($tmp652 > 1) goto $l651; else goto $l641;
    $l651:;
    i634.value += 1;
    goto $l639;
    $l641:;
    panda$collections$Array* $tmp658 = (panda$collections$Array*) malloc(40);
    $tmp658->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp658->refCount.value = 1;
    panda$collections$Array$init($tmp658);
    children657 = $tmp658;
    org$pandalanguage$pandac$IRNode* $tmp660 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp660->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp660->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp662);
    org$pandalanguage$pandac$Type* $tmp663 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp660, ((panda$core$Int64) { 1025 }), $tmp662, $tmp663);
    panda$collections$Array$add$panda$collections$Array$T(children657, ((panda$core$Object*) $tmp660));
    org$pandalanguage$pandac$Type* $tmp664 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp665 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp664);
    if ($tmp665.value) {
    {
        (($fn667) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s666);
    }
    }
    panda$core$String* $tmp668 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp669 = panda$core$String$convert$R$panda$core$String($tmp668);
    panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp669, &$s670);
    (($fn672) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp671);
    panda$core$Int64 $tmp674 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp673, ((panda$core$Int64) { 0 }), $tmp674, ((panda$core$Bit) { false }));
    int64_t $tmp676 = $tmp673.min.value;
    panda$core$Int64 i675 = { $tmp676 };
    int64_t $tmp678 = $tmp673.max.value;
    bool $tmp679 = $tmp673.inclusive.value;
    if ($tmp679) goto $l686; else goto $l687;
    $l686:;
    if ($tmp676 <= $tmp678) goto $l680; else goto $l682;
    $l687:;
    if ($tmp676 < $tmp678) goto $l680; else goto $l682;
    $l680:;
    {
        panda$core$Object* $tmp689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters629, i675);
        panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s688, ((panda$core$String*) $tmp689));
        panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp690, &$s691);
        (($fn693) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp692);
    }
    $l683:;
    int64_t $tmp695 = $tmp678 - i675.value;
    if ($tmp679) goto $l696; else goto $l697;
    $l696:;
    if ($tmp695 >= 1) goto $l694; else goto $l682;
    $l697:;
    if ($tmp695 > 1) goto $l694; else goto $l682;
    $l694:;
    i675.value += 1;
    goto $l680;
    $l682:;
    (($fn701) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s700);
    panda$core$Int64 $tmp702 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp702;
    (($fn704) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s703);
    self->currentMethod = oldMethod568;
    return result569;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces705;
    panda$core$String* previous708;
    panda$collections$Iterator* intfType$Iter710;
    org$pandalanguage$pandac$Type* intfType722;
    org$pandalanguage$pandac$ClassDecl* intf727;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC729;
    panda$collections$ListView* methods731;
    panda$core$String* name733;
    panda$core$MutableString* result742;
    panda$core$String* separator776;
    panda$collections$Iterator* m$Iter778;
    org$pandalanguage$pandac$MethodDecl* m790;
    org$pandalanguage$pandac$Type* $tmp706 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp707 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp706);
    interfaces705 = $tmp707;
    previous708 = &$s709;
    {
        ITable* $tmp711 = ((panda$collections$Iterable*) interfaces705)->$class->itable;
        while ($tmp711->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp711 = $tmp711->next;
        }
        $fn713 $tmp712 = $tmp711->methods[0];
        panda$collections$Iterator* $tmp714 = $tmp712(((panda$collections$Iterable*) interfaces705));
        intfType$Iter710 = $tmp714;
        $l715:;
        ITable* $tmp717 = intfType$Iter710->$class->itable;
        while ($tmp717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp717 = $tmp717->next;
        }
        $fn719 $tmp718 = $tmp717->methods[0];
        panda$core$Bit $tmp720 = $tmp718(intfType$Iter710);
        panda$core$Bit $tmp721 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp720);
        if (!$tmp721.value) goto $l716;
        {
            ITable* $tmp723 = intfType$Iter710->$class->itable;
            while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp723 = $tmp723->next;
            }
            $fn725 $tmp724 = $tmp723->methods[1];
            panda$core$Object* $tmp726 = $tmp724(intfType$Iter710);
            intfType722 = ((org$pandalanguage$pandac$Type*) $tmp726);
            org$pandalanguage$pandac$ClassDecl* $tmp728 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType722);
            intf727 = $tmp728;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp730 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf727);
            intfCC729 = $tmp730;
            panda$collections$ListView* $tmp732 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType722);
            methods731 = $tmp732;
            panda$core$String* $tmp734 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp735 = panda$core$String$convert$R$panda$core$String($tmp734);
            panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp735, &$s736);
            panda$core$String* $tmp738 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf727)->name);
            panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp737, $tmp738);
            panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, &$s740);
            name733 = $tmp741;
            panda$core$MutableString* $tmp743 = (panda$core$MutableString*) malloc(48);
            $tmp743->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp743->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp746 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp747 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp746);
            panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s745, $tmp747);
            panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp748, &$s749);
            ITable* $tmp752 = ((panda$collections$CollectionView*) methods731)->$class->itable;
            while ($tmp752->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp752 = $tmp752->next;
            }
            $fn754 $tmp753 = $tmp752->methods[0];
            panda$core$Int64 $tmp755 = $tmp753(((panda$collections$CollectionView*) methods731));
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s751, ((panda$core$Object*) wrap_panda$core$Int64($tmp755)));
            panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, &$s757);
            panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp758, name733);
            panda$core$String* $tmp761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp759, &$s760);
            panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp750, $tmp761);
            org$pandalanguage$pandac$Type* $tmp764 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp765 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp764);
            panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s763, $tmp765);
            panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s767);
            panda$core$String* $tmp769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp768, intfCC729->name);
            panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp769, &$s770);
            panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, previous708);
            panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp772, &$s773);
            panda$core$String* $tmp775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp762, $tmp774);
            panda$core$MutableString$init$panda$core$String($tmp743, $tmp775);
            result742 = $tmp743;
            separator776 = &$s777;
            {
                ITable* $tmp779 = ((panda$collections$Iterable*) methods731)->$class->itable;
                while ($tmp779->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp779 = $tmp779->next;
                }
                $fn781 $tmp780 = $tmp779->methods[0];
                panda$collections$Iterator* $tmp782 = $tmp780(((panda$collections$Iterable*) methods731));
                m$Iter778 = $tmp782;
                $l783:;
                ITable* $tmp785 = m$Iter778->$class->itable;
                while ($tmp785->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp785 = $tmp785->next;
                }
                $fn787 $tmp786 = $tmp785->methods[0];
                panda$core$Bit $tmp788 = $tmp786(m$Iter778);
                panda$core$Bit $tmp789 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp788);
                if (!$tmp789.value) goto $l784;
                {
                    ITable* $tmp791 = m$Iter778->$class->itable;
                    while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp791 = $tmp791->next;
                    }
                    $fn793 $tmp792 = $tmp791->methods[1];
                    panda$core$Object* $tmp794 = $tmp792(m$Iter778);
                    m790 = ((org$pandalanguage$pandac$MethodDecl*) $tmp794);
                    panda$core$MutableString$append$panda$core$String(result742, separator776);
                    separator776 = &$s795;
                    panda$core$Bit $tmp796 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m790->annotations);
                    if ($tmp796.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result742, &$s797);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp798 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m790, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result742, $tmp798);
                    }
                    }
                }
                goto $l783;
                $l784:;
            }
            panda$core$MutableString$append$panda$core$String(result742, &$s799);
            panda$core$String* $tmp800 = panda$core$MutableString$finish$R$panda$core$String(result742);
            (($fn801) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp800);
            panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s802, name733);
            panda$core$String* $tmp805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp803, &$s804);
            previous708 = $tmp805;
        }
        goto $l715;
        $l716:;
    }
    return previous708;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp806 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp806;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result808;
    org$pandalanguage$pandac$Type* declared809;
    org$pandalanguage$pandac$Type* inherited812;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim815;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp807 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp807.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp810 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp811 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp810);
    declared809 = $tmp811;
    org$pandalanguage$pandac$Type* $tmp813 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited812 = $tmp813;
    panda$core$Bit $tmp814 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared809, inherited812);
    if ($tmp814.value) {
    {
        org$pandalanguage$pandac$Type* $tmp816 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp817 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp816, ((panda$io$OutputStream*) self->shims));
        shim815 = $tmp817;
        result808 = shim815->name;
    }
    }
    else {
    {
        panda$core$String* $tmp818 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result808 = $tmp818;
    }
    }
    return result808;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result819;
    panda$core$String* type821;
    panda$collections$ListView* vtable832;
    panda$core$String* superPtr842;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC843;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant851;
    panda$core$MutableString* code855;
    panda$core$String* separator876;
    panda$collections$Iterator* m$Iter878;
    org$pandalanguage$pandac$MethodDecl* m890;
    panda$core$Object* $tmp820 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result819 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp820);
    if (((panda$core$Bit) { result819 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        panda$core$Bit $tmp822 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp822.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp823 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp823->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp823->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp825 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp826 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp825)->name);
            panda$core$String* $tmp827 = panda$core$String$convert$R$panda$core$String($tmp826);
            panda$core$String* $tmp829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp827, &$s828);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp823, $tmp829, &$s830);
            result819 = $tmp823;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result819));
            panda$core$Object* $tmp831 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp831);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp833 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable832 = $tmp833;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp834 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp834->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp834->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp836 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp837 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp836)->name);
        panda$core$String* $tmp838 = panda$core$String$convert$R$panda$core$String($tmp837);
        panda$core$String* $tmp840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp838, &$s839);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp834, $tmp840, &$s841);
        result819 = $tmp834;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result819));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp844 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp845 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp844);
            superCC843 = $tmp845;
            panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s846, superCC843->name);
            panda$core$String* $tmp849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, &$s848);
            superPtr842 = $tmp849;
        }
        }
        else {
        {
            superPtr842 = &$s850;
        }
        }
        org$pandalanguage$pandac$Type* $tmp852 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp853 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp852);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp854 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp853);
        clConstant851 = $tmp854;
        panda$core$MutableString* $tmp856 = (panda$core$MutableString*) malloc(48);
        $tmp856->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp856->refCount.value = 1;
        panda$core$String* $tmp858 = panda$core$String$convert$R$panda$core$String(result819->name);
        panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, &$s859);
        panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, result819->name);
        panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp861, &$s862);
        panda$core$String* $tmp865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s864, clConstant851->name);
        panda$core$String* $tmp867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp865, &$s866);
        panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, superPtr842);
        panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp868, &$s869);
        panda$core$String* $tmp871 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp870, $tmp871);
        panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp872, &$s873);
        panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp863, $tmp874);
        panda$core$MutableString$init$panda$core$String($tmp856, $tmp875);
        code855 = $tmp856;
        separator876 = &$s877;
        {
            ITable* $tmp879 = ((panda$collections$Iterable*) vtable832)->$class->itable;
            while ($tmp879->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp879 = $tmp879->next;
            }
            $fn881 $tmp880 = $tmp879->methods[0];
            panda$collections$Iterator* $tmp882 = $tmp880(((panda$collections$Iterable*) vtable832));
            m$Iter878 = $tmp882;
            $l883:;
            ITable* $tmp885 = m$Iter878->$class->itable;
            while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp885 = $tmp885->next;
            }
            $fn887 $tmp886 = $tmp885->methods[0];
            panda$core$Bit $tmp888 = $tmp886(m$Iter878);
            panda$core$Bit $tmp889 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp888);
            if (!$tmp889.value) goto $l884;
            {
                ITable* $tmp891 = m$Iter878->$class->itable;
                while ($tmp891->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp891 = $tmp891->next;
                }
                $fn893 $tmp892 = $tmp891->methods[1];
                panda$core$Object* $tmp894 = $tmp892(m$Iter878);
                m890 = ((org$pandalanguage$pandac$MethodDecl*) $tmp894);
                panda$core$MutableString$append$panda$core$String(code855, separator876);
                panda$core$Bit $tmp895 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m890->annotations);
                if ($tmp895.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code855, &$s896);
                }
                }
                else {
                {
                    panda$core$String* $tmp897 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m890);
                    panda$core$MutableString$append$panda$core$String(code855, $tmp897);
                }
                }
                separator876 = &$s898;
            }
            goto $l883;
            $l884:;
        }
        panda$core$MutableString$append$panda$core$String(code855, &$s899);
        panda$core$String* $tmp900 = panda$core$MutableString$finish$R$panda$core$String(code855);
        (($fn901) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp900);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result819;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name902;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result907;
    panda$core$String* type911;
    org$pandalanguage$pandac$ClassDecl* value922;
    panda$collections$ListView* valueVTable925;
    panda$collections$ListView* vtable934;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC936;
    panda$core$String* superCast939;
    panda$core$String* itable944;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant946;
    panda$core$MutableString* code950;
    panda$core$String* separator970;
    panda$core$Range$LTpanda$core$Int64$GT $tmp972;
    org$pandalanguage$pandac$MethodDecl* m990;
    panda$core$String* methodName995;
    panda$core$String* $tmp903 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp904 = panda$core$String$convert$R$panda$core$String($tmp903);
    panda$core$String* $tmp906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp904, &$s905);
    name902 = $tmp906;
    panda$core$Object* $tmp908 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name902));
    result907 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp908);
    if (((panda$core$Bit) { result907 == NULL }).value) {
    {
        panda$core$Bit $tmp909 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp909.value) {
        {
            org$pandalanguage$pandac$Type* $tmp910 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp910);
            type911 = &$s912;
            panda$core$String* $tmp913 = panda$core$String$convert$R$panda$core$String(name902);
            panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp913, &$s914);
            panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp915, type911);
            panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp916, &$s917);
            (($fn919) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp918);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp920 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp920->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp920->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp920, name902, type911);
            result907 = $tmp920;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp923 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp924 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp923);
            value922 = $tmp924;
            panda$collections$ListView* $tmp926 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value922);
            valueVTable925 = $tmp926;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp927 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp927->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp927->refCount.value = 1;
            panda$core$String* $tmp929 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp930 = panda$core$String$convert$R$panda$core$String($tmp929);
            panda$core$String* $tmp932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp930, &$s931);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp927, $tmp932, &$s933);
            result907 = $tmp927;
            panda$collections$ListView* $tmp935 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable934 = $tmp935;
            org$pandalanguage$pandac$ClassDecl* $tmp937 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp938 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp937);
            superCC936 = $tmp938;
            panda$core$String* $tmp941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s940, superCC936->name);
            panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp941, &$s942);
            superCast939 = $tmp943;
            panda$core$String* $tmp945 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable944 = $tmp945;
            org$pandalanguage$pandac$Type* $tmp947 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp948 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp947);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp949 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp948);
            clConstant946 = $tmp949;
            panda$core$MutableString* $tmp951 = (panda$core$MutableString*) malloc(48);
            $tmp951->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp951->refCount.value = 1;
            panda$core$String* $tmp953 = panda$core$String$convert$R$panda$core$String(result907->name);
            panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, &$s954);
            panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, result907->name);
            panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp956, &$s957);
            panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s959, clConstant946->name);
            panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, &$s961);
            panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, superCast939);
            panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, &$s964);
            panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp965, itable944);
            panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp966, &$s967);
            panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp958, $tmp968);
            panda$core$MutableString$init$panda$core$String($tmp951, $tmp969);
            code950 = $tmp951;
            separator970 = &$s971;
            ITable* $tmp973 = ((panda$collections$CollectionView*) valueVTable925)->$class->itable;
            while ($tmp973->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp973 = $tmp973->next;
            }
            $fn975 $tmp974 = $tmp973->methods[0];
            panda$core$Int64 $tmp976 = $tmp974(((panda$collections$CollectionView*) valueVTable925));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp972, ((panda$core$Int64) { 0 }), $tmp976, ((panda$core$Bit) { false }));
            int64_t $tmp978 = $tmp972.min.value;
            panda$core$Int64 i977 = { $tmp978 };
            int64_t $tmp980 = $tmp972.max.value;
            bool $tmp981 = $tmp972.inclusive.value;
            if ($tmp981) goto $l988; else goto $l989;
            $l988:;
            if ($tmp978 <= $tmp980) goto $l982; else goto $l984;
            $l989:;
            if ($tmp978 < $tmp980) goto $l982; else goto $l984;
            $l982:;
            {
                ITable* $tmp991 = vtable934->$class->itable;
                while ($tmp991->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp991 = $tmp991->next;
                }
                $fn993 $tmp992 = $tmp991->methods[0];
                panda$core$Object* $tmp994 = $tmp992(vtable934, i977);
                m990 = ((org$pandalanguage$pandac$MethodDecl*) $tmp994);
                if (((panda$core$Bit) { ((panda$core$Object*) m990->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp996 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m990, self->wrapperShims);
                    methodName995 = $tmp996;
                }
                }
                else {
                {
                    panda$core$String* $tmp997 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m990);
                    methodName995 = $tmp997;
                    panda$core$Bit $tmp998 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m990->owner);
                    if ($tmp998.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m990);
                    }
                    }
                }
                }
                panda$core$String* $tmp999 = panda$core$String$convert$R$panda$core$String(separator970);
                panda$core$String* $tmp1001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp999, &$s1000);
                panda$core$String* $tmp1002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1001, methodName995);
                panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1002, &$s1003);
                panda$core$MutableString$append$panda$core$String(code950, $tmp1004);
                separator970 = &$s1005;
            }
            $l985:;
            int64_t $tmp1007 = $tmp980 - i977.value;
            if ($tmp981) goto $l1008; else goto $l1009;
            $l1008:;
            if ($tmp1007 >= 1) goto $l1006; else goto $l984;
            $l1009:;
            if ($tmp1007 > 1) goto $l1006; else goto $l984;
            $l1006:;
            i977.value += 1;
            goto $l982;
            $l984:;
            panda$core$MutableString$append$panda$core$String(code950, &$s1012);
            panda$core$String* $tmp1013 = panda$core$MutableString$finish$R$panda$core$String(code950);
            (($fn1014) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1013);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name902), ((panda$core$Object*) result907));
    }
    }
    return result907;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1020;
    panda$core$Bit $tmp1015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1015.value) {
    {
        panda$core$String* $tmp1017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1016, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1017, &$s1018);
        return $tmp1019;
    }
    }
    panda$core$Object* $tmp1021 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1020 = ((panda$core$String*) $tmp1021);
    if (((panda$core$Bit) { result1020 == NULL }).value) {
    {
        panda$core$Int64 $tmp1022 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1022;
        panda$core$String* $tmp1023 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1023, &$s1024);
        panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1025, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1026, &$s1027);
        result1020 = $tmp1028;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1020));
    }
    }
    return result1020;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1029 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1029.value);
    panda$core$String* $tmp1030 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1031 = panda$core$String$convert$R$panda$core$String($tmp1030);
    panda$core$String* $tmp1033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1031, &$s1032);
    panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1033, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1034, &$s1035);
    return $tmp1036;
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
    panda$core$String* result1037;
    panda$core$String* leftRef1039;
    panda$core$String* falseLabel1053;
    panda$core$String* rightRef1063;
    panda$core$String* $tmp1038 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1037 = $tmp1038;
    panda$core$String* $tmp1040 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1039 = $tmp1040;
    org$pandalanguage$pandac$Type* $tmp1041 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1042 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1041);
    if ($tmp1042.value) {
    {
        panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1039, &$s1043);
        leftRef1039 = $tmp1044;
    }
    }
    panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1045, result1037);
    panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1047);
    panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, leftRef1039);
    panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, &$s1050);
    (($fn1052) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1051);
    panda$core$String* $tmp1054 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1053 = $tmp1054;
    panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1055, result1037);
    panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1056, &$s1057);
    panda$core$String* $tmp1059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1058, falseLabel1053);
    panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1059, &$s1060);
    (($fn1062) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1061);
    panda$core$String* $tmp1064 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1063 = $tmp1064;
    org$pandalanguage$pandac$Type* $tmp1065 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1066 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1065);
    if ($tmp1066.value) {
    {
        panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1063, &$s1067);
        rightRef1063 = $tmp1068;
    }
    }
    panda$core$String* $tmp1069 = panda$core$String$convert$R$panda$core$String(result1037);
    panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1069, &$s1070);
    panda$core$String* $tmp1072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, rightRef1063);
    panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1072, &$s1073);
    (($fn1075) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1074);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1053, p_out);
    return result1037;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1076;
    panda$core$String* leftRef1078;
    panda$core$String* trueLabel1092;
    panda$core$String* rightRef1102;
    panda$core$String* $tmp1077 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1076 = $tmp1077;
    panda$core$String* $tmp1079 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1078 = $tmp1079;
    org$pandalanguage$pandac$Type* $tmp1080 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1081 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1080);
    if ($tmp1081.value) {
    {
        panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1078, &$s1082);
        leftRef1078 = $tmp1083;
    }
    }
    panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1084, result1076);
    panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1085, &$s1086);
    panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1087, leftRef1078);
    panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, &$s1089);
    (($fn1091) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1090);
    panda$core$String* $tmp1093 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1092 = $tmp1093;
    panda$core$String* $tmp1095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1094, result1076);
    panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1095, &$s1096);
    panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1097, trueLabel1092);
    panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1099);
    (($fn1101) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1100);
    panda$core$String* $tmp1103 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1102 = $tmp1103;
    org$pandalanguage$pandac$Type* $tmp1104 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1105 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1104);
    if ($tmp1105.value) {
    {
        panda$core$String* $tmp1107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1102, &$s1106);
        rightRef1102 = $tmp1107;
    }
    }
    panda$core$String* $tmp1108 = panda$core$String$convert$R$panda$core$String(result1076);
    panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1108, &$s1109);
    panda$core$String* $tmp1111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1110, rightRef1102);
    panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1111, &$s1112);
    (($fn1114) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1113);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1092, p_out);
    return result1076;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Int64 p_cl, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1115;
    panda$core$Bit logical1116;
    panda$core$String* result1134;
    logical1116 = ((panda$core$Bit) { false });
    switch (p_op.value) {
        case 51:
        {
            cOp1115 = &$s1117;
        }
        break;
        case 52:
        {
            cOp1115 = &$s1118;
        }
        break;
        case 53:
        {
            cOp1115 = &$s1119;
        }
        break;
        case 55:
        {
            cOp1115 = &$s1120;
        }
        break;
        case 54:
        {
            cOp1115 = &$s1121;
        }
        break;
        case 56:
        {
            cOp1115 = &$s1122;
        }
        break;
        case 72:
        {
            cOp1115 = &$s1123;
        }
        break;
        case 1:
        {
            cOp1115 = &$s1124;
        }
        break;
        case 67:
        {
            cOp1115 = &$s1125;
        }
        break;
        case 69:
        {
            cOp1115 = &$s1126;
        }
        break;
        case 70:
        case 71:
        {
            cOp1115 = &$s1127;
        }
        break;
        case 58:
        {
            cOp1115 = &$s1128;
            logical1116 = ((panda$core$Bit) { true });
        }
        break;
        case 59:
        {
            cOp1115 = &$s1129;
            logical1116 = ((panda$core$Bit) { true });
        }
        break;
        case 63:
        {
            cOp1115 = &$s1130;
            logical1116 = ((panda$core$Bit) { true });
        }
        break;
        case 62:
        {
            cOp1115 = &$s1131;
            logical1116 = ((panda$core$Bit) { true });
        }
        break;
        case 65:
        {
            cOp1115 = &$s1132;
            logical1116 = ((panda$core$Bit) { true });
        }
        break;
        case 64:
        {
            logical1116 = ((panda$core$Bit) { true });
            cOp1115 = &$s1133;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$String* $tmp1135 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1134 = $tmp1135;
    if (logical1116.value) {
    {
        (($fn1137) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1136);
    }
    }
    else {
    {
        panda$core$String* $tmp1138 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1139 = panda$core$String$convert$R$panda$core$String($tmp1138);
        panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1139, &$s1140);
        (($fn1142) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1141);
    }
    }
    panda$core$String* $tmp1143 = panda$core$String$convert$R$panda$core$String(result1134);
    panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1143, &$s1144);
    panda$core$String* $tmp1146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, p_leftRef);
    panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1146, &$s1147);
    panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, cOp1115);
    panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1149, &$s1150);
    panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1151, p_rightRef);
    panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, &$s1153);
    (($fn1155) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1154);
    return result1134;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1156;
    panda$core$String* rightRef1158;
    panda$core$String* $tmp1157 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1156 = $tmp1157;
    panda$core$String* $tmp1159 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1158 = $tmp1159;
    panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1160, leftRef1156);
    panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1161, &$s1162);
    panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, rightRef1158);
    panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1164, &$s1165);
    return $tmp1166;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1167;
    panda$core$String* rightRef1169;
    panda$core$String* $tmp1168 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1167 = $tmp1168;
    panda$core$String* $tmp1170 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1169 = $tmp1170;
    panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1171, leftRef1167);
    panda$core$String* $tmp1174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1172, &$s1173);
    panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1174, rightRef1169);
    panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1176);
    return $tmp1177;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1183;
    panda$core$String* rightRef1185;
    panda$core$Bit $tmp1178 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1178.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1179 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1179;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1180 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1180;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1181 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1181;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1182 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1182;
        }
        break;
        default:
        {
            panda$core$String* $tmp1184 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1183 = $tmp1184;
            panda$core$String* $tmp1186 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1185 = $tmp1186;
            panda$core$Int64 $tmp1187 = org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1188 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1187, p_left->type, leftRef1183, p_op, rightRef1185, p_out);
            return $tmp1188;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1189.value);
    panda$core$Int64 $tmp1190 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1190, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1191.value);
    panda$core$Object* $tmp1192 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1194 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1192), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1193), p_out);
    return $tmp1194;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1195;
    panda$core$Int64 index1197;
    panda$collections$ListView* vtable1198;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1200;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1196 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1195 = $tmp1196;
    index1197 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1199 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1198 = $tmp1199;
    ITable* $tmp1201 = ((panda$collections$CollectionView*) vtable1198)->$class->itable;
    while ($tmp1201->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1201 = $tmp1201->next;
    }
    $fn1203 $tmp1202 = $tmp1201->methods[0];
    panda$core$Int64 $tmp1204 = $tmp1202(((panda$collections$CollectionView*) vtable1198));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1200, ((panda$core$Int64) { 0 }), $tmp1204, ((panda$core$Bit) { false }));
    int64_t $tmp1206 = $tmp1200.min.value;
    panda$core$Int64 i1205 = { $tmp1206 };
    int64_t $tmp1208 = $tmp1200.max.value;
    bool $tmp1209 = $tmp1200.inclusive.value;
    if ($tmp1209) goto $l1216; else goto $l1217;
    $l1216:;
    if ($tmp1206 <= $tmp1208) goto $l1210; else goto $l1212;
    $l1217:;
    if ($tmp1206 < $tmp1208) goto $l1210; else goto $l1212;
    $l1210:;
    {
        ITable* $tmp1218 = vtable1198->$class->itable;
        while ($tmp1218->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1218 = $tmp1218->next;
        }
        $fn1220 $tmp1219 = $tmp1218->methods[0];
        panda$core$Object* $tmp1221 = $tmp1219(vtable1198, i1205);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1221)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1197 = i1205;
            goto $l1212;
        }
        }
    }
    $l1213:;
    int64_t $tmp1223 = $tmp1208 - i1205.value;
    if ($tmp1209) goto $l1224; else goto $l1225;
    $l1224:;
    if ($tmp1223 >= 1) goto $l1222; else goto $l1212;
    $l1225:;
    if ($tmp1223 > 1) goto $l1222; else goto $l1212;
    $l1222:;
    i1205.value += 1;
    goto $l1210;
    $l1212:;
    panda$core$Bit $tmp1228 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1197, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1228.value);
    org$pandalanguage$pandac$Type* $tmp1230 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1231 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1230);
    panda$core$String* $tmp1232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1229, $tmp1231);
    panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1232, &$s1233);
    panda$core$String* $tmp1235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1234, p_target);
    panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1235, &$s1236);
    panda$core$String* $tmp1238 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1237, ((panda$core$Object*) wrap_panda$core$Int64(index1197)));
    panda$core$String* $tmp1240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1238, &$s1239);
    return $tmp1240;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1241;
    panda$core$String* itable1243;
    panda$core$Int64 index1272;
    panda$collections$ListView* vtable1273;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1275;
    panda$core$String* result1312;
    panda$core$String* methodType1314;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1242 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1241 = $tmp1242;
    panda$core$String* $tmp1244 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1243 = $tmp1244;
    panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1245, itable1243);
    panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1246, &$s1247);
    panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1248, p_target);
    panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1249, &$s1250);
    (($fn1252) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1251);
    panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1253, itable1243);
    panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1254, &$s1255);
    panda$core$String* $tmp1257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, cc1241->name);
    panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1257, &$s1258);
    (($fn1260) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1259);
    panda$core$Int64 $tmp1261 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1261;
    panda$core$String* $tmp1262 = panda$core$String$convert$R$panda$core$String(itable1243);
    panda$core$String* $tmp1264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1262, &$s1263);
    panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1264, itable1243);
    panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1265, &$s1266);
    (($fn1268) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1267);
    panda$core$Int64 $tmp1269 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1269;
    (($fn1271) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1270);
    index1272 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1274 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1273 = $tmp1274;
    ITable* $tmp1276 = ((panda$collections$CollectionView*) vtable1273)->$class->itable;
    while ($tmp1276->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1276 = $tmp1276->next;
    }
    $fn1278 $tmp1277 = $tmp1276->methods[0];
    panda$core$Int64 $tmp1279 = $tmp1277(((panda$collections$CollectionView*) vtable1273));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1275, ((panda$core$Int64) { 0 }), $tmp1279, ((panda$core$Bit) { false }));
    int64_t $tmp1281 = $tmp1275.min.value;
    panda$core$Int64 i1280 = { $tmp1281 };
    int64_t $tmp1283 = $tmp1275.max.value;
    bool $tmp1284 = $tmp1275.inclusive.value;
    if ($tmp1284) goto $l1291; else goto $l1292;
    $l1291:;
    if ($tmp1281 <= $tmp1283) goto $l1285; else goto $l1287;
    $l1292:;
    if ($tmp1281 < $tmp1283) goto $l1285; else goto $l1287;
    $l1285:;
    {
        ITable* $tmp1293 = vtable1273->$class->itable;
        while ($tmp1293->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1293 = $tmp1293->next;
        }
        $fn1295 $tmp1294 = $tmp1293->methods[0];
        panda$core$Object* $tmp1296 = $tmp1294(vtable1273, i1280);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1296)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1272 = i1280;
            goto $l1287;
        }
        }
    }
    $l1288:;
    int64_t $tmp1298 = $tmp1283 - i1280.value;
    if ($tmp1284) goto $l1299; else goto $l1300;
    $l1299:;
    if ($tmp1298 >= 1) goto $l1297; else goto $l1287;
    $l1300:;
    if ($tmp1298 > 1) goto $l1297; else goto $l1287;
    $l1297:;
    i1280.value += 1;
    goto $l1285;
    $l1287:;
    org$pandalanguage$pandac$Type* $tmp1303 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1304 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1303);
    panda$collections$ListView* $tmp1305 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1304);
    ITable* $tmp1306 = ((panda$collections$CollectionView*) $tmp1305)->$class->itable;
    while ($tmp1306->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1306 = $tmp1306->next;
    }
    $fn1308 $tmp1307 = $tmp1306->methods[0];
    panda$core$Int64 $tmp1309 = $tmp1307(((panda$collections$CollectionView*) $tmp1305));
    panda$core$Int64 $tmp1310 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1272, $tmp1309);
    index1272 = $tmp1310;
    panda$core$Bit $tmp1311 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1272, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1311.value);
    panda$core$String* $tmp1313 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1312 = $tmp1313;
    org$pandalanguage$pandac$Type* $tmp1315 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1316 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1315);
    methodType1314 = $tmp1316;
    panda$core$String* $tmp1317 = panda$core$String$convert$R$panda$core$String(methodType1314);
    panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1317, &$s1318);
    panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1319, result1312);
    panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, &$s1321);
    panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1322, itable1243);
    panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1324);
    panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1325, ((panda$core$Object*) wrap_panda$core$Int64(index1272)));
    panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1326, &$s1327);
    (($fn1329) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1328);
    return result1312;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1331 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1330 = $tmp1331.value;
    if (!$tmp1330) goto $l1332;
    panda$core$Bit $tmp1333 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1330 = $tmp1333.value;
    $l1332:;
    panda$core$Bit $tmp1334 = { $tmp1330 };
    if ($tmp1334.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1335.value) {
        {
            panda$core$String* $tmp1336 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1336;
        }
        }
        else {
        {
            panda$core$String* $tmp1337 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1337;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1338 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1338.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1339 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1339;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1340;
    panda$core$String* $match$862_91341;
    panda$core$String* count1346;
    panda$core$Int64 elementSize1352;
    panda$core$String* ptr1371;
    panda$core$String* ptr1382;
    panda$core$String* index1385;
    panda$core$String* ptr1398;
    panda$core$String* count1401;
    panda$core$Int64 elementSize1407;
    panda$core$String* ptr1429;
    panda$core$String* offset1432;
    m1340 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$862_91341 = ((org$pandalanguage$pandac$Symbol*) m1340->value)->name;
        panda$core$Bit $tmp1343 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91341, &$s1342);
        if ($tmp1343.value) {
        {
            panda$core$Int64 $tmp1344 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1344, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1345.value);
            panda$core$Object* $tmp1347 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1348 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1347), p_out);
            count1346 = $tmp1348;
            org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1340);
            panda$core$Int64 $tmp1350 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1349->subtypes);
            panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1350, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1351.value);
            org$pandalanguage$pandac$Type* $tmp1353 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1340);
            panda$core$Object* $tmp1354 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1353->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1355 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1354));
            elementSize1352 = $tmp1355;
            panda$core$String* $tmp1357 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1356, $tmp1357);
            panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, &$s1359);
            panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, count1346);
            panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1361, &$s1362);
            panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1363, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1352)));
            panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, &$s1365);
            return $tmp1366;
        }
        }
        else {
        panda$core$Bit $tmp1368 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91341, &$s1367);
        if ($tmp1368.value) {
        {
            panda$core$Int64 $tmp1369 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1369, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1370.value);
            panda$core$Object* $tmp1372 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1373 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1372), p_out);
            ptr1371 = $tmp1373;
            panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1374, ptr1371);
            panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1375, &$s1376);
            return $tmp1377;
        }
        }
        else {
        panda$core$Bit $tmp1379 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91341, &$s1378);
        if ($tmp1379.value) {
        {
            panda$core$Int64 $tmp1380 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1380, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1381.value);
            panda$core$Object* $tmp1383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1384 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1383), p_out);
            ptr1382 = $tmp1384;
            panda$core$Object* $tmp1386 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1387 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1386), p_out);
            index1385 = $tmp1387;
            panda$core$String* $tmp1388 = panda$core$String$convert$R$panda$core$String(ptr1382);
            panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, &$s1389);
            panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1390, index1385);
            panda$core$String* $tmp1393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, &$s1392);
            return $tmp1393;
        }
        }
        else {
        panda$core$Bit $tmp1395 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91341, &$s1394);
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
            count1401 = $tmp1403;
            org$pandalanguage$pandac$Type* $tmp1404 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1340);
            panda$core$Int64 $tmp1405 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1404->subtypes);
            panda$core$Bit $tmp1406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1405, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1406.value);
            org$pandalanguage$pandac$Type* $tmp1408 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1340);
            panda$core$Object* $tmp1409 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1408->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1410 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1409));
            elementSize1407 = $tmp1410;
            panda$core$String* $tmp1412 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1411, $tmp1412);
            panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1413, &$s1414);
            panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1415, ptr1398);
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1417);
            panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, count1401);
            panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1420);
            panda$core$String* $tmp1422 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1421, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1407)));
            panda$core$String* $tmp1424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1422, &$s1423);
            return $tmp1424;
        }
        }
        else {
        panda$core$Bit $tmp1426 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91341, &$s1425);
        if ($tmp1426.value) {
        {
            panda$core$Int64 $tmp1427 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1427, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1428.value);
            panda$core$Object* $tmp1430 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1431 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1430), p_out);
            ptr1429 = $tmp1431;
            panda$core$Object* $tmp1433 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1434 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1433), p_out);
            offset1432 = $tmp1434;
            panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1435, ptr1429);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1437);
            panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1438, offset1432);
            panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1439, &$s1440);
            return $tmp1441;
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
    org$pandalanguage$pandac$MethodDecl* m1443;
    panda$core$String* bit1454;
    panda$core$String* result1458;
    panda$core$String* bit1472;
    panda$core$String* result1476;
    panda$collections$Array* args1486;
    org$pandalanguage$pandac$Type* actualMethodType1490;
    panda$core$String* actualResultType1491;
    panda$core$Bit isSuper1492;
    panda$core$Int64 offset1512;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1517;
    panda$core$String* arg1532;
    panda$core$String* target1553;
    panda$core$String* methodRef1557;
    panda$core$Bit indirect1559;
    panda$core$String* result1561;
    panda$core$String* separator1563;
    panda$core$String* indirectVar1565;
    panda$collections$Iterator* arg$Iter1591;
    panda$core$String* arg1603;
    panda$core$Bit $tmp1442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1442.value);
    m1443 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1445 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1443->owner)->name, &$s1444);
    if ($tmp1445.value) {
    {
        panda$core$String* $tmp1446 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1446;
    }
    }
    panda$core$Bit $tmp1447 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1443->owner);
    if ($tmp1447.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1443);
    }
    }
    panda$core$Bit $tmp1449 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1443->owner)->name, &$s1448);
    if ($tmp1449.value) {
    {
        panda$core$Bit $tmp1451 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1443)->name, &$s1450);
        if ($tmp1451.value) {
        {
            panda$core$Int64 $tmp1452 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1452, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1453.value);
            panda$core$Object* $tmp1455 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1456 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1457 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1455), ((org$pandalanguage$pandac$IRNode*) $tmp1456), p_out);
            bit1454 = $tmp1457;
            panda$core$String* $tmp1459 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1458 = $tmp1459;
            panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1460, result1458);
            panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, &$s1462);
            panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, bit1454);
            panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1464, &$s1465);
            (($fn1467) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1466);
            return result1458;
        }
        }
        panda$core$Bit $tmp1469 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1443)->name, &$s1468);
        if ($tmp1469.value) {
        {
            panda$core$Int64 $tmp1470 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1470, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1471.value);
            panda$core$Object* $tmp1473 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1474 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1475 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1473), ((org$pandalanguage$pandac$IRNode*) $tmp1474), p_out);
            bit1472 = $tmp1475;
            panda$core$String* $tmp1477 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1476 = $tmp1477;
            panda$core$String* $tmp1479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1478, result1476);
            panda$core$String* $tmp1481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1479, &$s1480);
            panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1481, bit1472);
            panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, &$s1483);
            (($fn1485) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1484);
            return result1476;
        }
        }
    }
    }
    panda$collections$Array* $tmp1487 = (panda$collections$Array*) malloc(40);
    $tmp1487->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1487->refCount.value = 1;
    panda$core$Int64 $tmp1489 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1487, $tmp1489);
    args1486 = $tmp1487;
    panda$core$Int64 $tmp1494 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1495 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1494, ((panda$core$Int64) { 1 }));
    bool $tmp1493 = $tmp1495.value;
    if (!$tmp1493) goto $l1496;
    panda$core$Object* $tmp1497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1497)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1493 = $tmp1498.value;
    $l1496:;
    panda$core$Bit $tmp1499 = { $tmp1493 };
    isSuper1492 = $tmp1499;
    panda$core$Bit $tmp1501 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1492);
    bool $tmp1500 = $tmp1501.value;
    if (!$tmp1500) goto $l1502;
    panda$core$Bit $tmp1503 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1443);
    $tmp1500 = $tmp1503.value;
    $l1502:;
    panda$core$Bit $tmp1504 = { $tmp1500 };
    if ($tmp1504.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1505 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1443);
        actualMethodType1490 = $tmp1505;
        panda$core$Int64 $tmp1506 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1490->subtypes);
        panda$core$Int64 $tmp1507 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1506, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1490->subtypes, $tmp1507);
        panda$core$String* $tmp1509 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1508));
        actualResultType1491 = $tmp1509;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1510 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1443);
        actualMethodType1490 = $tmp1510;
        panda$core$String* $tmp1511 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1491 = $tmp1511;
    }
    }
    panda$core$Int64 $tmp1513 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1514 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1490->subtypes);
    panda$core$Int64 $tmp1515 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1513, $tmp1514);
    panda$core$Int64 $tmp1516 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1515, ((panda$core$Int64) { 1 }));
    offset1512 = $tmp1516;
    panda$core$Int64 $tmp1518 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1517, ((panda$core$Int64) { 0 }), $tmp1518, ((panda$core$Bit) { false }));
    int64_t $tmp1520 = $tmp1517.min.value;
    panda$core$Int64 i1519 = { $tmp1520 };
    int64_t $tmp1522 = $tmp1517.max.value;
    bool $tmp1523 = $tmp1517.inclusive.value;
    if ($tmp1523) goto $l1530; else goto $l1531;
    $l1530:;
    if ($tmp1520 <= $tmp1522) goto $l1524; else goto $l1526;
    $l1531:;
    if ($tmp1520 < $tmp1522) goto $l1524; else goto $l1526;
    $l1524:;
    {
        panda$core$Object* $tmp1533 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1519);
        panda$core$String* $tmp1534 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1533), p_out);
        arg1532 = $tmp1534;
        panda$core$Bit $tmp1536 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1519, offset1512);
        bool $tmp1535 = $tmp1536.value;
        if (!$tmp1535) goto $l1537;
        panda$core$Int64 $tmp1538 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1519, offset1512);
        panda$core$Object* $tmp1539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1490->subtypes, $tmp1538);
        panda$core$Object* $tmp1540 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1519);
        panda$core$Bit $tmp1541 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1539), ((org$pandalanguage$pandac$IRNode*) $tmp1540)->type);
        $tmp1535 = $tmp1541.value;
        $l1537:;
        panda$core$Bit $tmp1542 = { $tmp1535 };
        if ($tmp1542.value) {
        {
            panda$core$Object* $tmp1543 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1519);
            panda$core$Int64 $tmp1544 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1519, offset1512);
            panda$core$Object* $tmp1545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1490->subtypes, $tmp1544);
            panda$core$String* $tmp1546 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1532, ((org$pandalanguage$pandac$IRNode*) $tmp1543)->type, ((org$pandalanguage$pandac$Type*) $tmp1545), p_out);
            arg1532 = $tmp1546;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1486, ((panda$core$Object*) arg1532));
    }
    $l1527:;
    int64_t $tmp1548 = $tmp1522 - i1519.value;
    if ($tmp1523) goto $l1549; else goto $l1550;
    $l1549:;
    if ($tmp1548 >= 1) goto $l1547; else goto $l1526;
    $l1550:;
    if ($tmp1548 > 1) goto $l1547; else goto $l1526;
    $l1547:;
    i1519.value += 1;
    goto $l1524;
    $l1526:;
    panda$core$Int64 $tmp1554 = panda$collections$Array$get_count$R$panda$core$Int64(args1486);
    panda$core$Bit $tmp1555 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1554, ((panda$core$Int64) { 0 }));
    if ($tmp1555.value) {
    {
        panda$core$Object* $tmp1556 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1486, ((panda$core$Int64) { 0 }));
        target1553 = ((panda$core$String*) $tmp1556);
    }
    }
    else {
    {
        target1553 = NULL;
    }
    }
    panda$core$String* $tmp1558 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1553, m1443, isSuper1492, p_out);
    methodRef1557 = $tmp1558;
    panda$core$Bit $tmp1560 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1443);
    indirect1559 = $tmp1560;
    panda$core$String* $tmp1562 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1561 = $tmp1562;
    separator1563 = &$s1564;
    if (indirect1559.value) {
    {
        panda$core$String* $tmp1566 = panda$core$String$convert$R$panda$core$String(actualResultType1491);
        panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1566, &$s1567);
        panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1568, result1561);
        panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, &$s1570);
        (($fn1572) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1571);
        panda$core$String* $tmp1573 = panda$core$String$convert$R$panda$core$String(methodRef1557);
        panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1573, &$s1574);
        panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1575, result1561);
        panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1576, &$s1577);
        (($fn1579) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1578);
        separator1563 = &$s1580;
    }
    }
    else {
    {
        panda$core$String* $tmp1581 = panda$core$String$convert$R$panda$core$String(actualResultType1491);
        panda$core$String* $tmp1583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1581, &$s1582);
        panda$core$String* $tmp1584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1583, result1561);
        panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1584, &$s1585);
        panda$core$String* $tmp1587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1586, methodRef1557);
        panda$core$String* $tmp1589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1587, &$s1588);
        (($fn1590) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1589);
    }
    }
    {
        ITable* $tmp1592 = ((panda$collections$Iterable*) args1486)->$class->itable;
        while ($tmp1592->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1592 = $tmp1592->next;
        }
        $fn1594 $tmp1593 = $tmp1592->methods[0];
        panda$collections$Iterator* $tmp1595 = $tmp1593(((panda$collections$Iterable*) args1486));
        arg$Iter1591 = $tmp1595;
        $l1596:;
        ITable* $tmp1598 = arg$Iter1591->$class->itable;
        while ($tmp1598->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1598 = $tmp1598->next;
        }
        $fn1600 $tmp1599 = $tmp1598->methods[0];
        panda$core$Bit $tmp1601 = $tmp1599(arg$Iter1591);
        panda$core$Bit $tmp1602 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1601);
        if (!$tmp1602.value) goto $l1597;
        {
            ITable* $tmp1604 = arg$Iter1591->$class->itable;
            while ($tmp1604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1604 = $tmp1604->next;
            }
            $fn1606 $tmp1605 = $tmp1604->methods[1];
            panda$core$Object* $tmp1607 = $tmp1605(arg$Iter1591);
            arg1603 = ((panda$core$String*) $tmp1607);
            panda$core$String* $tmp1608 = panda$core$String$convert$R$panda$core$String(separator1563);
            panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1608, &$s1609);
            panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1610, arg1603);
            panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1611, &$s1612);
            (($fn1614) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1613);
            separator1563 = &$s1615;
        }
        goto $l1596;
        $l1597:;
    }
    (($fn1617) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1616);
    panda$core$String* $tmp1618 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1619 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1618, actualResultType1491);
    if ($tmp1619.value) {
    {
        panda$core$Int64 $tmp1620 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1490->subtypes);
        panda$core$Int64 $tmp1621 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1620, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1622 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1490->subtypes, $tmp1621);
        panda$core$String* $tmp1623 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1561, ((org$pandalanguage$pandac$Type*) $tmp1622), p_call->type, p_out);
        return $tmp1623;
    }
    }
    return result1561;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1625;
    panda$core$String* nonNullValue1628;
    panda$core$String* wrapped1638;
    panda$core$Bit $tmp1624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1624.value) {
    {
        panda$core$Object* $tmp1626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1627 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1626), p_out);
        unwrapped1625 = $tmp1627;
        panda$core$Object* $tmp1629 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1630 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1625, ((org$pandalanguage$pandac$Type*) $tmp1629), p_dstType, p_out);
        nonNullValue1628 = $tmp1630;
        panda$core$String* $tmp1632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1631, p_value);
        panda$core$String* $tmp1634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1632, &$s1633);
        panda$core$String* $tmp1635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1634, nonNullValue1628);
        panda$core$String* $tmp1637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1635, &$s1636);
        return $tmp1637;
    }
    }
    panda$core$String* $tmp1640 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1639, $tmp1640);
    panda$core$String* $tmp1643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1641, &$s1642);
    org$pandalanguage$pandac$ClassDecl* $tmp1644 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    panda$core$String* $tmp1645 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1644)->name);
    panda$core$String* $tmp1646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1643, $tmp1645);
    panda$core$String* $tmp1648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1646, &$s1647);
    panda$core$String* $tmp1650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1649, p_value);
    panda$core$String* $tmp1652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1650, &$s1651);
    panda$core$String* $tmp1653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1648, $tmp1652);
    wrapped1638 = $tmp1653;
    panda$core$Bit $tmp1654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1654.value) {
    {
        panda$core$String* $tmp1656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1655, p_value);
        panda$core$String* $tmp1658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1656, &$s1657);
        panda$core$String* $tmp1659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1658, wrapped1638);
        panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1659, &$s1660);
        return $tmp1661;
    }
    }
    return wrapped1638;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1665;
    org$pandalanguage$pandac$ClassDecl* cl1668;
    panda$core$String* base1671;
    panda$core$Bit $tmp1662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1662.value);
    panda$core$Int64 $tmp1663 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1663, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1664.value);
    field1665 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1666 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1665->annotations);
    if ($tmp1666.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1665->value != NULL }).value);
        panda$core$String* $tmp1667 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1665->value, p_out);
        return $tmp1667;
    }
    }
    panda$core$Object* $tmp1669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1670 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1669)->type);
    cl1668 = $tmp1670;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1668);
    panda$core$Object* $tmp1672 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1673 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1672), p_out);
    base1671 = $tmp1673;
    PANDA_ASSERT(((panda$core$Bit) { cl1668 != NULL }).value);
    panda$core$Bit $tmp1674 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1668);
    if ($tmp1674.value) {
    {
        panda$core$String* $tmp1675 = panda$core$String$convert$R$panda$core$String(base1671);
        panda$core$String* $tmp1677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1675, &$s1676);
        panda$core$String* $tmp1678 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1665)->name);
        panda$core$String* $tmp1679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1677, $tmp1678);
        panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1679, &$s1680);
        return $tmp1681;
    }
    }
    panda$core$String* $tmp1682 = panda$core$String$convert$R$panda$core$String(base1671);
    panda$core$String* $tmp1684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1682, &$s1683);
    panda$core$String* $tmp1685 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1665)->name);
    panda$core$String* $tmp1686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1684, $tmp1685);
    panda$core$String* $tmp1688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1686, &$s1687);
    return $tmp1688;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1689;
    panda$core$String* wrapped1699;
    panda$core$String* nonNullValue1702;
    panda$core$String* $tmp1691 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1690, $tmp1691);
    panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1692, &$s1693);
    panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1694, p_value);
    panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1695, &$s1696);
    result1689 = $tmp1697;
    panda$core$Bit $tmp1698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1698.value) {
    {
        panda$core$Object* $tmp1700 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1701 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1700), p_out);
        wrapped1699 = $tmp1701;
        panda$core$Object* $tmp1703 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1704 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1699, ((org$pandalanguage$pandac$Type*) $tmp1703), p_dstType, p_out);
        nonNullValue1702 = $tmp1704;
        panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1705, p_value);
        panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
        panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, nonNullValue1702);
        panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1710);
        panda$core$String* $tmp1712 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, $tmp1712);
        panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1713, &$s1714);
        return $tmp1715;
    }
    }
    return result1689;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1717 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1716, $tmp1717);
    panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1718, &$s1719);
    panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, p_value);
    panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, &$s1722);
    return $tmp1723;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1725 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1724, $tmp1725);
    panda$core$String* $tmp1728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, &$s1727);
    panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, p_value);
    panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, &$s1730);
    return $tmp1731;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1732;
    org$pandalanguage$pandac$ClassDecl* srcClass1743;
    org$pandalanguage$pandac$ClassDecl* targetClass1745;
    panda$core$String* srcType1784;
    panda$core$String* dstType1786;
    panda$core$Bit $tmp1733 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1733.value) {
    {
        panda$core$Bit $tmp1734 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1734.value);
        panda$core$String* $tmp1736 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1735, $tmp1736);
        panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, &$s1738);
        panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, p_value);
        panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1740, &$s1741);
        return $tmp1742;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1744 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1743 = $tmp1744;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1743 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1746 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1745 = $tmp1746;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1745 != NULL }).value);
        panda$core$Bit $tmp1748 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1743);
        bool $tmp1747 = $tmp1748.value;
        if (!$tmp1747) goto $l1749;
        panda$core$Bit $tmp1750 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1745);
        panda$core$Bit $tmp1751 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1750);
        $tmp1747 = $tmp1751.value;
        $l1749:;
        panda$core$Bit $tmp1752 = { $tmp1747 };
        if ($tmp1752.value) {
        {
            panda$core$String* $tmp1753 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1753;
        }
        }
        else {
        panda$core$Bit $tmp1755 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1743);
        panda$core$Bit $tmp1756 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1755);
        bool $tmp1754 = $tmp1756.value;
        if (!$tmp1754) goto $l1757;
        panda$core$Bit $tmp1758 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1745);
        $tmp1754 = $tmp1758.value;
        $l1757:;
        panda$core$Bit $tmp1759 = { $tmp1754 };
        if ($tmp1759.value) {
        {
            panda$core$String* $tmp1760 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1760;
        }
        }
        else {
        panda$core$Bit $tmp1763 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1743);
        bool $tmp1762 = $tmp1763.value;
        if (!$tmp1762) goto $l1764;
        panda$core$Bit $tmp1765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1762 = $tmp1765.value;
        $l1764:;
        panda$core$Bit $tmp1766 = { $tmp1762 };
        bool $tmp1761 = $tmp1766.value;
        if (!$tmp1761) goto $l1767;
        panda$core$Object* $tmp1768 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1769 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1768), p_src);
        $tmp1761 = $tmp1769.value;
        $l1767:;
        panda$core$Bit $tmp1770 = { $tmp1761 };
        if ($tmp1770.value) {
        {
            panda$core$String* $tmp1771 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1771;
        }
        }
        else {
        panda$core$Bit $tmp1774 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1745);
        bool $tmp1773 = $tmp1774.value;
        if (!$tmp1773) goto $l1775;
        panda$core$Bit $tmp1776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1773 = $tmp1776.value;
        $l1775:;
        panda$core$Bit $tmp1777 = { $tmp1773 };
        bool $tmp1772 = $tmp1777.value;
        if (!$tmp1772) goto $l1778;
        panda$core$Object* $tmp1779 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1780 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1779), p_target);
        $tmp1772 = $tmp1780.value;
        $l1778:;
        panda$core$Bit $tmp1781 = { $tmp1772 };
        if ($tmp1781.value) {
        {
            panda$core$String* $tmp1782 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1782;
        }
        }
        }
        }
        }
        op1732 = &$s1783;
    }
    }
    panda$core$String* $tmp1785 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1784 = $tmp1785;
    panda$core$String* $tmp1787 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1786 = $tmp1787;
    panda$core$Bit $tmp1788 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1784, dstType1786);
    if ($tmp1788.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1789, dstType1786);
    panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1790, &$s1791);
    panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1792, p_value);
    panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1793, &$s1794);
    return $tmp1795;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1799;
    panda$core$Bit $tmp1796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1796.value);
    panda$core$Int64 $tmp1797 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1797, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1798.value);
    panda$core$Object* $tmp1800 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1801 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1800), p_out);
    base1799 = $tmp1801;
    panda$core$Object* $tmp1802 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1803 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1799, ((org$pandalanguage$pandac$IRNode*) $tmp1802)->type, p_cast->type, p_out);
    return $tmp1803;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1807;
    panda$core$String* t1809;
    panda$core$String* value1822;
    panda$core$String* tmp1836;
    panda$core$String* result1853;
    panda$core$String* classPtr1873;
    panda$core$String* className1875;
    panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1804.value);
    panda$core$Int64 $tmp1805 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1806 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1805, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1806.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1808 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1807 = $tmp1808;
    PANDA_ASSERT(((panda$core$Bit) { cl1807 != NULL }).value);
    panda$core$String* $tmp1810 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1809 = $tmp1810;
    panda$core$Bit $tmp1812 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1811 = $tmp1812.value;
    if ($tmp1811) goto $l1813;
    org$pandalanguage$pandac$Type* $tmp1814 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1815 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1814);
    $tmp1811 = $tmp1815.value;
    $l1813:;
    panda$core$Bit $tmp1816 = { $tmp1811 };
    if ($tmp1816.value) {
    {
        panda$core$Int64 $tmp1817 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1817, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1818.value);
        panda$core$Object* $tmp1819 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1820 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1819)->children);
        panda$core$Bit $tmp1821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1820, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1821.value);
        panda$core$Object* $tmp1823 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1824 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp1823)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1825 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1824), p_out);
        value1822 = $tmp1825;
        panda$core$String* $tmp1827 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1826, $tmp1827);
        panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, &$s1829);
        panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, value1822);
        panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, &$s1832);
        return $tmp1833;
    }
    }
    panda$core$Bit $tmp1834 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1807);
    if ($tmp1834.value) {
    {
        panda$core$Int64 $tmp1835 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1835;
        panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1837, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1838, &$s1839);
        tmp1836 = $tmp1840;
        panda$core$String* $tmp1841 = panda$core$String$convert$R$panda$core$String(t1809);
        panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1841, &$s1842);
        panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, tmp1836);
        panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1844, &$s1845);
        (($fn1847) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1846);
        panda$core$Object* $tmp1848 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1849, tmp1836);
        panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1850, &$s1851);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1848), $tmp1852, p_out);
        return tmp1836;
    }
    }
    panda$core$String* $tmp1854 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1853 = $tmp1854;
    panda$core$String* $tmp1855 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1856 = panda$core$String$convert$R$panda$core$String($tmp1855);
    panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1857);
    panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, result1853);
    panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, &$s1860);
    panda$core$String* $tmp1862 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, $tmp1862);
    panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, &$s1864);
    panda$core$Int64 $tmp1867 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1866, ((panda$core$Object*) wrap_panda$core$Int64($tmp1867)));
    panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1868, &$s1869);
    panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, $tmp1870);
    (($fn1872) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1871);
    panda$core$String* $tmp1874 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr1873 = $tmp1874;
    panda$core$Bit $tmp1876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp1876.value) {
    {
        panda$core$Object* $tmp1877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1878 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1877));
        className1875 = $tmp1878;
    }
    }
    else {
    {
        panda$core$String* $tmp1879 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className1875 = $tmp1879;
    }
    }
    panda$core$String* $tmp1880 = panda$core$String$convert$R$panda$core$String(result1853);
    panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1880, &$s1881);
    panda$core$String* $tmp1883 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1807)->name);
    panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1882, $tmp1883);
    panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1884, &$s1885);
    (($fn1887) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1886);
    panda$core$String* $tmp1888 = panda$core$String$convert$R$panda$core$String(result1853);
    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, &$s1889);
    (($fn1891) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1890);
    panda$core$Object* $tmp1892 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1893 = panda$core$String$convert$R$panda$core$String(result1853);
    panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, &$s1894);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1892), $tmp1895, p_out);
    return result1853;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1896 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp1896;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1898 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1897, $tmp1898);
    return $tmp1899;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s1900;
    }
    }
    return &$s1901;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1902 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp1902;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1904;
    panda$collections$Iterator* raw$Iter1917;
    panda$core$Char8 raw1930;
    panda$core$UInt8 c1935;
    panda$core$Int64 $tmp1903 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp1903;
    panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1905, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1906, &$s1907);
    result1904 = $tmp1908;
    org$pandalanguage$pandac$Type* $tmp1909 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1909);
    panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1910, result1904);
    panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, &$s1912);
    panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, &$s1914);
    (($fn1916) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp1915);
    {
        panda$collections$ListView* $tmp1918 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp1919 = ((panda$collections$Iterable*) $tmp1918)->$class->itable;
        while ($tmp1919->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1919 = $tmp1919->next;
        }
        $fn1921 $tmp1920 = $tmp1919->methods[0];
        panda$collections$Iterator* $tmp1922 = $tmp1920(((panda$collections$Iterable*) $tmp1918));
        raw$Iter1917 = $tmp1922;
        $l1923:;
        ITable* $tmp1925 = raw$Iter1917->$class->itable;
        while ($tmp1925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1925 = $tmp1925->next;
        }
        $fn1927 $tmp1926 = $tmp1925->methods[0];
        panda$core$Bit $tmp1928 = $tmp1926(raw$Iter1917);
        panda$core$Bit $tmp1929 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1928);
        if (!$tmp1929.value) goto $l1924;
        {
            ITable* $tmp1931 = raw$Iter1917->$class->itable;
            while ($tmp1931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1931 = $tmp1931->next;
            }
            $fn1933 $tmp1932 = $tmp1931->methods[1];
            panda$core$Object* $tmp1934 = $tmp1932(raw$Iter1917);
            raw1930 = ((panda$core$Char8$wrapper*) $tmp1934)->value;
            panda$core$UInt8 $tmp1936 = panda$core$Char8$convert$R$panda$core$UInt8(raw1930);
            c1935 = $tmp1936;
            (($fn1938) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s1937);
            panda$collections$ListView* $tmp1940 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1939);
            panda$core$UInt32 $tmp1941 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c1935, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1942 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1941);
            ITable* $tmp1943 = $tmp1940->$class->itable;
            while ($tmp1943->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1943 = $tmp1943->next;
            }
            $fn1945 $tmp1944 = $tmp1943->methods[0];
            panda$core$Object* $tmp1946 = $tmp1944($tmp1940, $tmp1942);
            (($fn1947) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1946)->value)));
            panda$collections$ListView* $tmp1949 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1948);
            panda$core$UInt32 $tmp1950 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c1935, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1951 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1950);
            ITable* $tmp1952 = $tmp1949->$class->itable;
            while ($tmp1952->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1952 = $tmp1952->next;
            }
            $fn1954 $tmp1953 = $tmp1952->methods[0];
            panda$core$Object* $tmp1955 = $tmp1953($tmp1949, $tmp1951);
            (($fn1956) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1955)->value)));
        }
        goto $l1923;
        $l1924:;
    }
    panda$collections$ListView* $tmp1958 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp1959 = ((panda$collections$CollectionView*) $tmp1958)->$class->itable;
    while ($tmp1959->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1959 = $tmp1959->next;
    }
    $fn1961 $tmp1960 = $tmp1959->methods[0];
    panda$core$Int64 $tmp1962 = $tmp1960(((panda$collections$CollectionView*) $tmp1958));
    panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1957, ((panda$core$Object*) wrap_panda$core$Int64($tmp1962)));
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1963, &$s1964);
    panda$core$Int64 $tmp1966 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1965, ((panda$core$Object*) wrap_panda$core$Int64($tmp1966)));
    panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1967, &$s1968);
    (($fn1970) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp1969);
    panda$core$String* $tmp1972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1971, result1904);
    panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1972, &$s1973);
    return $tmp1974;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s1975;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1977 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1976, $tmp1977);
    panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1978, &$s1979);
    return $tmp1980;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value1984;
    org$pandalanguage$pandac$ClassDecl* cl1987;
    panda$core$String* bit1990;
    panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp1981.value);
    panda$core$Int64 $tmp1982 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp1983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1982, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1983.value);
    panda$core$Object* $tmp1985 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1986 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1985), p_out);
    value1984 = $tmp1986;
    panda$core$Object* $tmp1988 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1989 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1988)->type);
    cl1987 = $tmp1989;
    panda$core$Bit $tmp1991 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1987);
    if ($tmp1991.value) {
    {
        panda$core$Object* $tmp1992 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1993 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1992)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1993.value) {
        {
            bit1990 = &$s1994;
        }
        }
        else {
        {
            panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1995, value1984);
            panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, &$s1997);
            bit1990 = $tmp1998;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp1999 = panda$core$String$convert$R$panda$core$String(value1984);
        panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1999, &$s2000);
        bit1990 = $tmp2001;
    }
    }
    panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2002, bit1990);
    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2003, &$s2004);
    return $tmp2005;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2009;
    org$pandalanguage$pandac$ClassDecl* cl2012;
    panda$core$String* bit2015;
    panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2006.value);
    panda$core$Int64 $tmp2007 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2007, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2008.value);
    panda$core$Object* $tmp2010 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2011 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2010), p_out);
    value2009 = $tmp2011;
    panda$core$Object* $tmp2013 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2014 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2013)->type);
    cl2012 = $tmp2014;
    panda$core$Bit $tmp2016 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2012);
    if ($tmp2016.value) {
    {
        panda$core$Object* $tmp2017 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2018 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2017)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2018.value) {
        {
            bit2015 = &$s2019;
        }
        }
        else {
        {
            panda$core$String* $tmp2020 = panda$core$String$convert$R$panda$core$String(value2009);
            panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
            bit2015 = $tmp2022;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2023 = panda$core$String$convert$R$panda$core$String(value2009);
        panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
        bit2015 = $tmp2025;
    }
    }
    panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2026, bit2015);
    panda$core$String* $tmp2029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2027, &$s2028);
    return $tmp2029;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2031;
    panda$core$Bit $tmp2030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2030.value);
    panda$core$Object* $tmp2032 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2033 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2032));
    cl2031 = $tmp2033;
    PANDA_ASSERT(((panda$core$Bit) { cl2031 != NULL }).value);
    panda$core$Bit $tmp2034 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2031);
    if ($tmp2034.value) {
    {
        panda$core$String* $tmp2036 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2035, $tmp2036);
        panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2037, &$s2038);
        return $tmp2039;
    }
    }
    else {
    {
        return &$s2040;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2044;
    panda$core$String* result2047;
    panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2041.value);
    panda$core$Int64 $tmp2042 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2042, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2043.value);
    panda$core$Object* $tmp2045 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2046 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2045), p_out);
    base2044 = $tmp2046;
    panda$core$String* $tmp2048 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2047 = $tmp2048;
    panda$core$Int64 $tmp2049 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2049.value) {
        case 52:
        {
            panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2050, base2044);
            panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2051, &$s2052);
            return $tmp2053;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2054, base2044);
            panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, &$s2056);
            return $tmp2057;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2058, base2044);
            panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2059, &$s2060);
            return $tmp2061;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2074;
    panda$core$String* result2077;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2062 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2062;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2063 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2063;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2064 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2064;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2065 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2065;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2066 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2066;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2067 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2067;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2068 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2068;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2069 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2069;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2070 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2070;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2071 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2071;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2072 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2072;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2073 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2073;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2075 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2076 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2075), p_out);
            value2074 = $tmp2076;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2074));
            return value2074;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp2078 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2077 = ((panda$core$String*) $tmp2078);
            PANDA_ASSERT(((panda$core$Bit) { result2077 != NULL }).value);
            return result2077;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2079 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2079;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2080 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2080;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2081 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2081;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2082 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2082;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2083 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2083;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2088;
    org$pandalanguage$pandac$IRNode* s2100;
    panda$core$Bit $tmp2084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2084.value);
    (($fn2086) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2085);
    panda$core$Int64 $tmp2087 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2087;
    {
        ITable* $tmp2089 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2089->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2089 = $tmp2089->next;
        }
        $fn2091 $tmp2090 = $tmp2089->methods[0];
        panda$collections$Iterator* $tmp2092 = $tmp2090(((panda$collections$Iterable*) p_block->children));
        s$Iter2088 = $tmp2092;
        $l2093:;
        ITable* $tmp2095 = s$Iter2088->$class->itable;
        while ($tmp2095->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2095 = $tmp2095->next;
        }
        $fn2097 $tmp2096 = $tmp2095->methods[0];
        panda$core$Bit $tmp2098 = $tmp2096(s$Iter2088);
        panda$core$Bit $tmp2099 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2098);
        if (!$tmp2099.value) goto $l2094;
        {
            ITable* $tmp2101 = s$Iter2088->$class->itable;
            while ($tmp2101->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2101 = $tmp2101->next;
            }
            $fn2103 $tmp2102 = $tmp2101->methods[1];
            panda$core$Object* $tmp2104 = $tmp2102(s$Iter2088);
            s2100 = ((org$pandalanguage$pandac$IRNode*) $tmp2104);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2100, p_out);
        }
        goto $l2093;
        $l2094:;
    }
    panda$core$Int64 $tmp2105 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2105;
    (($fn2107) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2106);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2108;
    panda$core$String* $match$1286_92109;
    panda$core$String* ptr2114;
    panda$core$String* arg2117;
    panda$core$String* base2137;
    panda$core$String* index2140;
    panda$core$String* value2143;
    m2108 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1286_92109 = ((org$pandalanguage$pandac$Symbol*) m2108->value)->name;
        panda$core$Bit $tmp2111 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92109, &$s2110);
        if ($tmp2111.value) {
        {
            panda$core$Int64 $tmp2112 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2112, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2113.value);
            panda$core$Object* $tmp2115 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2116 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2115), p_out);
            ptr2114 = $tmp2116;
            panda$core$Object* $tmp2118 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2119 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2118));
            panda$core$String* $tmp2120 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2119, p_out);
            arg2117 = $tmp2120;
            panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2121, arg2117);
            panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
            panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, ptr2114);
            panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
            (($fn2128) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2127);
        }
        }
        else {
        panda$core$Bit $tmp2130 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92109, &$s2129);
        if ($tmp2130.value) {
        {
            panda$core$Int64 $tmp2131 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2131, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2132.value);
            panda$core$Object* $tmp2133 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2134 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2133));
            panda$core$Int64 $tmp2135 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2134->type->subtypes);
            panda$core$Bit $tmp2136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2135, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2136.value);
            panda$core$Object* $tmp2138 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2139 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2138), p_out);
            base2137 = $tmp2139;
            panda$core$Object* $tmp2141 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2142 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2141), p_out);
            index2140 = $tmp2142;
            panda$core$Object* $tmp2144 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2145 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2144));
            panda$core$String* $tmp2146 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2145, p_out);
            value2143 = $tmp2146;
            panda$core$String* $tmp2147 = panda$core$String$convert$R$panda$core$String(base2137);
            panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, &$s2148);
            panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, index2140);
            panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
            panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, value2143);
            panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
            (($fn2156) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2155);
        }
        }
        else {
        panda$core$Bit $tmp2158 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92109, &$s2157);
        if ($tmp2158.value) {
        {
            panda$core$Int64 $tmp2159 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2159, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2160.value);
            panda$core$Object* $tmp2162 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2163 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2162), p_out);
            panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2161, $tmp2163);
            panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, &$s2165);
            (($fn2167) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2166);
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
    org$pandalanguage$pandac$MethodDecl* m2169;
    org$pandalanguage$pandac$Type* actualMethodType2173;
    panda$core$String* actualResultType2174;
    panda$core$Bit isSuper2175;
    panda$collections$Array* args2195;
    panda$core$Int64 offset2198;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2203;
    panda$core$String* arg2218;
    panda$core$String* refTarget2239;
    panda$core$String* methodRef2243;
    panda$core$String* separator2245;
    panda$core$String* indirectVar2249;
    panda$core$String* resultType2252;
    panda$collections$Iterator* a$Iter2276;
    panda$core$String* a2288;
    panda$core$Bit $tmp2168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2168.value);
    m2169 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2171 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2169->owner)->name, &$s2170);
    if ($tmp2171.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2172 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2169->owner);
    if ($tmp2172.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2169);
    }
    }
    panda$core$Int64 $tmp2177 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2178 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2177, ((panda$core$Int64) { 1 }));
    bool $tmp2176 = $tmp2178.value;
    if (!$tmp2176) goto $l2179;
    panda$core$Object* $tmp2180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2180)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2176 = $tmp2181.value;
    $l2179:;
    panda$core$Bit $tmp2182 = { $tmp2176 };
    isSuper2175 = $tmp2182;
    panda$core$Bit $tmp2184 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2175);
    bool $tmp2183 = $tmp2184.value;
    if (!$tmp2183) goto $l2185;
    panda$core$Bit $tmp2186 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2169);
    $tmp2183 = $tmp2186.value;
    $l2185:;
    panda$core$Bit $tmp2187 = { $tmp2183 };
    if ($tmp2187.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2188 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2169);
        actualMethodType2173 = $tmp2188;
        panda$core$Int64 $tmp2189 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2173->subtypes);
        panda$core$Int64 $tmp2190 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2189, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2191 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2173->subtypes, $tmp2190);
        panda$core$String* $tmp2192 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2191));
        actualResultType2174 = $tmp2192;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2193 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2169);
        actualMethodType2173 = $tmp2193;
        panda$core$String* $tmp2194 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2174 = $tmp2194;
    }
    }
    panda$collections$Array* $tmp2196 = (panda$collections$Array*) malloc(40);
    $tmp2196->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2196->refCount.value = 1;
    panda$collections$Array$init($tmp2196);
    args2195 = $tmp2196;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2195, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2199 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2200 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2173->subtypes);
    panda$core$Int64 $tmp2201 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2199, $tmp2200);
    panda$core$Int64 $tmp2202 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2201, ((panda$core$Int64) { 1 }));
    offset2198 = $tmp2202;
    panda$core$Int64 $tmp2204 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2203, ((panda$core$Int64) { 0 }), $tmp2204, ((panda$core$Bit) { false }));
    int64_t $tmp2206 = $tmp2203.min.value;
    panda$core$Int64 i2205 = { $tmp2206 };
    int64_t $tmp2208 = $tmp2203.max.value;
    bool $tmp2209 = $tmp2203.inclusive.value;
    if ($tmp2209) goto $l2216; else goto $l2217;
    $l2216:;
    if ($tmp2206 <= $tmp2208) goto $l2210; else goto $l2212;
    $l2217:;
    if ($tmp2206 < $tmp2208) goto $l2210; else goto $l2212;
    $l2210:;
    {
        panda$core$Object* $tmp2219 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2205);
        panda$core$String* $tmp2220 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2219), p_out);
        arg2218 = $tmp2220;
        panda$core$Bit $tmp2222 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2205, offset2198);
        bool $tmp2221 = $tmp2222.value;
        if (!$tmp2221) goto $l2223;
        panda$core$Int64 $tmp2224 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2205, offset2198);
        panda$core$Object* $tmp2225 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2173->subtypes, $tmp2224);
        panda$core$Object* $tmp2226 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2205);
        panda$core$Bit $tmp2227 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2225), ((org$pandalanguage$pandac$IRNode*) $tmp2226)->type);
        $tmp2221 = $tmp2227.value;
        $l2223:;
        panda$core$Bit $tmp2228 = { $tmp2221 };
        if ($tmp2228.value) {
        {
            panda$core$Object* $tmp2229 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2205);
            panda$core$Int64 $tmp2230 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2205, offset2198);
            panda$core$Object* $tmp2231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2173->subtypes, $tmp2230);
            panda$core$String* $tmp2232 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2218, ((org$pandalanguage$pandac$IRNode*) $tmp2229)->type, ((org$pandalanguage$pandac$Type*) $tmp2231), p_out);
            arg2218 = $tmp2232;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2195, ((panda$core$Object*) arg2218));
    }
    $l2213:;
    int64_t $tmp2234 = $tmp2208 - i2205.value;
    if ($tmp2209) goto $l2235; else goto $l2236;
    $l2235:;
    if ($tmp2234 >= 1) goto $l2233; else goto $l2212;
    $l2236:;
    if ($tmp2234 > 1) goto $l2233; else goto $l2212;
    $l2233:;
    i2205.value += 1;
    goto $l2210;
    $l2212:;
    panda$core$Int64 $tmp2240 = panda$collections$Array$get_count$R$panda$core$Int64(args2195);
    panda$core$Bit $tmp2241 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2240, ((panda$core$Int64) { 0 }));
    if ($tmp2241.value) {
    {
        panda$core$Object* $tmp2242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2195, ((panda$core$Int64) { 0 }));
        refTarget2239 = ((panda$core$String*) $tmp2242);
    }
    }
    else {
    {
        refTarget2239 = NULL;
    }
    }
    panda$core$String* $tmp2244 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2239, m2169, isSuper2175, p_out);
    methodRef2243 = $tmp2244;
    separator2245 = &$s2246;
    panda$core$Bit $tmp2247 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2169);
    if ($tmp2247.value) {
    {
        panda$core$Int64 $tmp2248 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2248;
        panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2250, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2249 = $tmp2251;
        panda$core$String* $tmp2253 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2252 = $tmp2253;
        panda$core$String* $tmp2254 = panda$core$String$convert$R$panda$core$String(resultType2252);
        panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2254, &$s2255);
        panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, indirectVar2249);
        panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2257, &$s2258);
        (($fn2260) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2259);
        panda$core$String* $tmp2261 = panda$core$String$convert$R$panda$core$String(methodRef2243);
        panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, &$s2262);
        panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, resultType2252);
        panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2265);
        panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, indirectVar2249);
        panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2268);
        (($fn2270) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2269);
        separator2245 = &$s2271;
    }
    }
    else {
    {
        panda$core$String* $tmp2272 = panda$core$String$convert$R$panda$core$String(methodRef2243);
        panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, &$s2273);
        (($fn2275) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2274);
    }
    }
    {
        ITable* $tmp2277 = ((panda$collections$Iterable*) args2195)->$class->itable;
        while ($tmp2277->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2277 = $tmp2277->next;
        }
        $fn2279 $tmp2278 = $tmp2277->methods[0];
        panda$collections$Iterator* $tmp2280 = $tmp2278(((panda$collections$Iterable*) args2195));
        a$Iter2276 = $tmp2280;
        $l2281:;
        ITable* $tmp2283 = a$Iter2276->$class->itable;
        while ($tmp2283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2283 = $tmp2283->next;
        }
        $fn2285 $tmp2284 = $tmp2283->methods[0];
        panda$core$Bit $tmp2286 = $tmp2284(a$Iter2276);
        panda$core$Bit $tmp2287 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2286);
        if (!$tmp2287.value) goto $l2282;
        {
            ITable* $tmp2289 = a$Iter2276->$class->itable;
            while ($tmp2289->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2289 = $tmp2289->next;
            }
            $fn2291 $tmp2290 = $tmp2289->methods[1];
            panda$core$Object* $tmp2292 = $tmp2290(a$Iter2276);
            a2288 = ((panda$core$String*) $tmp2292);
            (($fn2293) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2245);
            (($fn2294) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2288);
            separator2245 = &$s2295;
        }
        goto $l2281;
        $l2282:;
    }
    (($fn2297) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2296);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2309;
    panda$core$Bit $tmp2298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2298.value);
    panda$core$Int64 $tmp2300 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2300, ((panda$core$Int64) { 2 }));
    bool $tmp2299 = $tmp2301.value;
    if ($tmp2299) goto $l2302;
    panda$core$Int64 $tmp2303 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2303, ((panda$core$Int64) { 3 }));
    $tmp2299 = $tmp2304.value;
    $l2302:;
    panda$core$Bit $tmp2305 = { $tmp2299 };
    PANDA_ASSERT($tmp2305.value);
    panda$core$Object* $tmp2306 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2307 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2308 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2306)->type, $tmp2307);
    PANDA_ASSERT($tmp2308.value);
    panda$core$Object* $tmp2310 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2311 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2310), p_out);
    test2309 = $tmp2311;
    panda$core$String* $tmp2313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2312, test2309);
    panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2313, &$s2314);
    (($fn2316) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2315);
    panda$core$Object* $tmp2317 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2317), p_out);
    (($fn2319) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2318);
    panda$core$Int64 $tmp2320 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2320, ((panda$core$Int64) { 3 }));
    if ($tmp2321.value) {
    {
        (($fn2323) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2322);
        panda$core$Object* $tmp2324 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2324), p_out);
        (($fn2326) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2325);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2330;
    panda$core$String* range2341;
    org$pandalanguage$pandac$IRNode* block2344;
    org$pandalanguage$pandac$Type* t2346;
    panda$core$String* llt2349;
    panda$core$String* indexType2351;
    org$pandalanguage$pandac$ClassDecl* cl2357;
    org$pandalanguage$pandac$FieldDecl* field2365;
    panda$core$String* numberType2371;
    panda$core$String* index2374;
    panda$core$String* start2376;
    panda$core$String* indexValuePtr2388;
    panda$core$String* end2402;
    panda$core$String* inclusive2414;
    panda$core$String* loopStart2424;
    panda$core$String* loopBody2426;
    panda$core$String* loopEnd2428;
    panda$core$String* loopTest2430;
    panda$core$String* forwardEntry2434;
    panda$core$String* backwardEntry2436;
    panda$core$String* signPrefix2438;
    panda$core$String* forwardEntryInclusive2450;
    panda$core$String* forwardEntryExclusive2452;
    panda$core$String* loopInc2494;
    panda$core$String* forwardDelta2496;
    panda$core$String* forwardInclusiveLabel2511;
    panda$core$String* forwardExclusiveLabel2513;
    panda$core$String* forwardExclusiveTest2538;
    panda$core$String* inc2551;
    panda$core$Bit $tmp2327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2327.value);
    panda$core$Int64 $tmp2328 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2328, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2329.value);
    panda$core$Object* $tmp2331 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2330 = ((org$pandalanguage$pandac$IRNode*) $tmp2331);
    panda$core$Object* $tmp2332 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2332)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2333.value);
    panda$core$Object* $tmp2334 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2335 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2334)->type->subtypes);
    panda$core$Bit $tmp2336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2335, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2336.value);
    panda$core$Object* $tmp2337 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2337)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2340 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2338))->name, &$s2339);
    PANDA_ASSERT($tmp2340.value);
    panda$core$Object* $tmp2342 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2343 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2342), p_out);
    range2341 = $tmp2343;
    panda$core$Object* $tmp2345 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2344 = ((org$pandalanguage$pandac$IRNode*) $tmp2345);
    panda$core$Object* $tmp2347 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2347)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2346 = ((org$pandalanguage$pandac$Type*) $tmp2348);
    panda$core$String* $tmp2350 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2346);
    llt2349 = $tmp2350;
    panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2346->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2352.value) {
    {
        panda$core$Int64 $tmp2353 = panda$collections$Array$get_count$R$panda$core$Int64(t2346->subtypes);
        panda$core$Bit $tmp2354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2353, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2354.value);
        panda$core$Object* $tmp2355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2346->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2356 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2355));
        indexType2351 = $tmp2356;
    }
    }
    else {
    {
        indexType2351 = llt2349;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2358 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2346);
    cl2357 = $tmp2358;
    PANDA_ASSERT(((panda$core$Bit) { cl2357 != NULL }).value);
    panda$collections$ListView* $tmp2359 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2357);
    ITable* $tmp2360 = ((panda$collections$CollectionView*) $tmp2359)->$class->itable;
    while ($tmp2360->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2360 = $tmp2360->next;
    }
    $fn2362 $tmp2361 = $tmp2360->methods[0];
    panda$core$Int64 $tmp2363 = $tmp2361(((panda$collections$CollectionView*) $tmp2359));
    panda$core$Bit $tmp2364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2363, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2364.value);
    panda$collections$ListView* $tmp2366 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2357);
    ITable* $tmp2367 = $tmp2366->$class->itable;
    while ($tmp2367->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2367 = $tmp2367->next;
    }
    $fn2369 $tmp2368 = $tmp2367->methods[0];
    panda$core$Object* $tmp2370 = $tmp2368($tmp2366, ((panda$core$Int64) { 0 }));
    field2365 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2370);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2365);
    panda$core$String* $tmp2372 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2365->type);
    numberType2371 = $tmp2372;
    panda$core$Bit $tmp2373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2330->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2373.value);
    panda$core$String* $tmp2375 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2330->payload));
    index2374 = $tmp2375;
    panda$core$String* $tmp2377 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2376 = $tmp2377;
    panda$core$String* $tmp2378 = panda$core$String$convert$R$panda$core$String(numberType2371);
    panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, &$s2379);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2380, start2376);
    panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2381, &$s2382);
    panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, range2341);
    panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2384, &$s2385);
    (($fn2387) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2386);
    panda$core$String* $tmp2389 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2388 = $tmp2389;
    org$pandalanguage$pandac$Type* $tmp2390 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2357);
    panda$core$String* $tmp2391 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2390);
    panda$core$String* $tmp2392 = panda$core$String$convert$R$panda$core$String($tmp2391);
    panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2392, &$s2393);
    panda$core$String* $tmp2395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2394, index2374);
    panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2395, &$s2396);
    panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, start2376);
    panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, &$s2399);
    (($fn2401) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2400);
    panda$core$String* $tmp2403 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2402 = $tmp2403;
    panda$core$String* $tmp2404 = panda$core$String$convert$R$panda$core$String(numberType2371);
    panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, &$s2405);
    panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, end2402);
    panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, &$s2408);
    panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2409, range2341);
    panda$core$String* $tmp2412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2410, &$s2411);
    (($fn2413) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2412);
    panda$core$String* $tmp2415 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2414 = $tmp2415;
    panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2416, inclusive2414);
    panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, &$s2418);
    panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, range2341);
    panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, &$s2421);
    (($fn2423) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2422);
    panda$core$String* $tmp2425 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2424 = $tmp2425;
    panda$core$String* $tmp2427 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2426 = $tmp2427;
    panda$core$String* $tmp2429 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2428 = $tmp2429;
    panda$core$String* $tmp2431 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2430 = $tmp2431;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2432 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2432->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2432->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2432, ((panda$core$String*) p_f->payload), loopEnd2428, loopTest2430);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2432));
    panda$core$String* $tmp2435 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2434 = $tmp2435;
    panda$core$String* $tmp2437 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2436 = $tmp2437;
    panda$core$Bit $tmp2440 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2346)->name, &$s2439);
    if ($tmp2440.value) {
    {
        signPrefix2438 = &$s2441;
    }
    }
    else {
    {
        panda$core$Bit $tmp2444 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2346)->name, &$s2443);
        bool $tmp2442 = $tmp2444.value;
        if ($tmp2442) goto $l2445;
        panda$core$Bit $tmp2447 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2346)->name, &$s2446);
        $tmp2442 = $tmp2447.value;
        $l2445:;
        panda$core$Bit $tmp2448 = { $tmp2442 };
        PANDA_ASSERT($tmp2448.value);
        signPrefix2438 = &$s2449;
    }
    }
    panda$core$String* $tmp2451 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2450 = $tmp2451;
    panda$core$String* $tmp2453 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2452 = $tmp2453;
    panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2454, inclusive2414);
    panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, &$s2456);
    panda$core$String* $tmp2458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2457, forwardEntryInclusive2450);
    panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2458, &$s2459);
    panda$core$String* $tmp2461 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2452);
    panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2461, &$s2462);
    panda$core$String* $tmp2464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, $tmp2463);
    (($fn2465) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2464);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2450, p_out);
    panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2466, start2376);
    panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
    panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, end2402);
    panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2471);
    panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, loopStart2424);
    panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, &$s2474);
    panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2475, loopEnd2428);
    panda$core$String* $tmp2478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2476, &$s2477);
    (($fn2479) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2478);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2452, p_out);
    panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2480, start2376);
    panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, &$s2482);
    panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2483, end2402);
    panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2484, &$s2485);
    panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2486, loopStart2424);
    panda$core$String* $tmp2489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2487, &$s2488);
    panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2489, loopEnd2428);
    panda$core$String* $tmp2492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2490, &$s2491);
    (($fn2493) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2492);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2424, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2344, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2430, p_out);
    panda$core$String* $tmp2495 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2494 = $tmp2495;
    panda$core$String* $tmp2497 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2496 = $tmp2497;
    panda$core$String* $tmp2498 = panda$core$String$convert$R$panda$core$String(numberType2371);
    panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2499);
    panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2500, forwardDelta2496);
    panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2501, &$s2502);
    panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2503, end2402);
    panda$core$String* $tmp2506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2504, &$s2505);
    panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2506, index2374);
    panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2507, &$s2508);
    (($fn2510) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2509);
    panda$core$String* $tmp2512 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2511 = $tmp2512;
    panda$core$String* $tmp2514 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2513 = $tmp2514;
    panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2515, inclusive2414);
    panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2516, &$s2517);
    panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2518, forwardInclusiveLabel2511);
    panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, &$s2520);
    panda$core$String* $tmp2522 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2513);
    panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2522, &$s2523);
    panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, $tmp2524);
    (($fn2526) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2525);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2511, p_out);
    panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2527, forwardDelta2496);
    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2529);
    panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, loopInc2494);
    panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
    panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, loopEnd2428);
    panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2535);
    (($fn2537) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2536);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2513, p_out);
    panda$core$String* $tmp2539 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2538 = $tmp2539;
    panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2540, forwardDelta2496);
    panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
    panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, loopInc2494);
    panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2545);
    panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, loopEnd2428);
    panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, &$s2548);
    (($fn2550) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2549);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2494, p_out);
    panda$core$String* $tmp2552 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2551 = $tmp2552;
    panda$core$String* $tmp2553 = panda$core$String$convert$R$panda$core$String(index2374);
    panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, &$s2554);
    (($fn2556) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2555);
    panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2557, loopStart2424);
    panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, &$s2559);
    (($fn2561) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2560);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2428, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2565;
    panda$core$String* range2576;
    org$pandalanguage$pandac$IRNode* block2579;
    org$pandalanguage$pandac$Type* t2581;
    panda$core$String* llt2584;
    panda$core$String* indexType2586;
    org$pandalanguage$pandac$ClassDecl* cl2592;
    org$pandalanguage$pandac$FieldDecl* field2600;
    panda$core$String* numberType2606;
    panda$core$String* index2609;
    panda$core$String* start2611;
    panda$core$String* indexValuePtr2623;
    panda$core$String* end2637;
    panda$core$String* step2649;
    panda$core$String* inclusive2661;
    panda$core$String* loopStart2671;
    panda$core$String* loopBody2673;
    panda$core$String* loopEnd2675;
    panda$core$String* loopTest2677;
    panda$core$String* forwardEntry2681;
    panda$core$String* backwardEntry2683;
    panda$core$String* signPrefix2685;
    panda$core$String* direction2697;
    panda$core$String* forwardEntryInclusive2721;
    panda$core$String* forwardEntryExclusive2723;
    panda$core$String* backwardEntryInclusive2765;
    panda$core$String* backwardEntryExclusive2767;
    panda$core$String* backwardEntryExclusiveTest2795;
    panda$core$String* loopInc2811;
    panda$core$String* forwardLabel2813;
    panda$core$String* backwardLabel2815;
    panda$core$String* forwardDelta2828;
    panda$core$String* forwardInclusiveLabel2843;
    panda$core$String* forwardExclusiveLabel2845;
    panda$core$String* forwardExclusiveTest2873;
    panda$core$String* backwardDelta2889;
    panda$core$String* backwardInclusiveLabel2904;
    panda$core$String* backwardExclusiveLabel2906;
    panda$core$String* inc2948;
    panda$core$Bit $tmp2562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2562.value);
    panda$core$Int64 $tmp2563 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2563, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2564.value);
    panda$core$Object* $tmp2566 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2565 = ((org$pandalanguage$pandac$IRNode*) $tmp2566);
    panda$core$Object* $tmp2567 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2567)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2568.value);
    panda$core$Object* $tmp2569 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2570 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2569)->type->subtypes);
    panda$core$Bit $tmp2571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2570, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2571.value);
    panda$core$Object* $tmp2572 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2573 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2572)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2575 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2573))->name, &$s2574);
    PANDA_ASSERT($tmp2575.value);
    panda$core$Object* $tmp2577 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2578 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2577), p_out);
    range2576 = $tmp2578;
    panda$core$Object* $tmp2580 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2579 = ((org$pandalanguage$pandac$IRNode*) $tmp2580);
    panda$core$Object* $tmp2582 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2583 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2582)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2581 = ((org$pandalanguage$pandac$Type*) $tmp2583);
    panda$core$String* $tmp2585 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2581);
    llt2584 = $tmp2585;
    panda$core$Bit $tmp2587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2581->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2587.value) {
    {
        panda$core$Int64 $tmp2588 = panda$collections$Array$get_count$R$panda$core$Int64(t2581->subtypes);
        panda$core$Bit $tmp2589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2588, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2589.value);
        panda$core$Object* $tmp2590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2581->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2591 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2590));
        indexType2586 = $tmp2591;
    }
    }
    else {
    {
        indexType2586 = llt2584;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2593 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2581);
    cl2592 = $tmp2593;
    PANDA_ASSERT(((panda$core$Bit) { cl2592 != NULL }).value);
    panda$collections$ListView* $tmp2594 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2592);
    ITable* $tmp2595 = ((panda$collections$CollectionView*) $tmp2594)->$class->itable;
    while ($tmp2595->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2595 = $tmp2595->next;
    }
    $fn2597 $tmp2596 = $tmp2595->methods[0];
    panda$core$Int64 $tmp2598 = $tmp2596(((panda$collections$CollectionView*) $tmp2594));
    panda$core$Bit $tmp2599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2598, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2599.value);
    panda$collections$ListView* $tmp2601 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2592);
    ITable* $tmp2602 = $tmp2601->$class->itable;
    while ($tmp2602->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2602 = $tmp2602->next;
    }
    $fn2604 $tmp2603 = $tmp2602->methods[0];
    panda$core$Object* $tmp2605 = $tmp2603($tmp2601, ((panda$core$Int64) { 0 }));
    field2600 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2605);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2600);
    panda$core$String* $tmp2607 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2600->type);
    numberType2606 = $tmp2607;
    panda$core$Bit $tmp2608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2565->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2608.value);
    panda$core$String* $tmp2610 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2565->payload));
    index2609 = $tmp2610;
    panda$core$String* $tmp2612 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2611 = $tmp2612;
    panda$core$String* $tmp2613 = panda$core$String$convert$R$panda$core$String(numberType2606);
    panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2614);
    panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, start2611);
    panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2616, &$s2617);
    panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2618, range2576);
    panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2620);
    (($fn2622) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2621);
    panda$core$String* $tmp2624 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2623 = $tmp2624;
    org$pandalanguage$pandac$Type* $tmp2625 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2592);
    panda$core$String* $tmp2626 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2625);
    panda$core$String* $tmp2627 = panda$core$String$convert$R$panda$core$String($tmp2626);
    panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2628);
    panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, index2609);
    panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2630, &$s2631);
    panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2632, start2611);
    panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, &$s2634);
    (($fn2636) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2635);
    panda$core$String* $tmp2638 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2637 = $tmp2638;
    panda$core$String* $tmp2639 = panda$core$String$convert$R$panda$core$String(numberType2606);
    panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, &$s2640);
    panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, end2637);
    panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
    panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, range2576);
    panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, &$s2646);
    (($fn2648) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2647);
    panda$core$String* $tmp2650 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2649 = $tmp2650;
    panda$core$String* $tmp2651 = panda$core$String$convert$R$panda$core$String(numberType2606);
    panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, &$s2652);
    panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, step2649);
    panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2655);
    panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, range2576);
    panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
    (($fn2660) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2659);
    panda$core$String* $tmp2662 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2661 = $tmp2662;
    panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2663, inclusive2661);
    panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
    panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, range2576);
    panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, &$s2668);
    (($fn2670) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2669);
    panda$core$String* $tmp2672 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2671 = $tmp2672;
    panda$core$String* $tmp2674 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2673 = $tmp2674;
    panda$core$String* $tmp2676 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2675 = $tmp2676;
    panda$core$String* $tmp2678 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2677 = $tmp2678;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2679 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2679->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2679->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2679, ((panda$core$String*) p_f->payload), loopEnd2675, loopTest2677);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2679));
    panda$core$String* $tmp2682 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2681 = $tmp2682;
    panda$core$String* $tmp2684 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2683 = $tmp2684;
    panda$core$Bit $tmp2687 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2581)->name, &$s2686);
    if ($tmp2687.value) {
    {
        signPrefix2685 = &$s2688;
    }
    }
    else {
    {
        panda$core$Bit $tmp2691 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2581)->name, &$s2690);
        bool $tmp2689 = $tmp2691.value;
        if ($tmp2689) goto $l2692;
        panda$core$Bit $tmp2694 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2581)->name, &$s2693);
        $tmp2689 = $tmp2694.value;
        $l2692:;
        panda$core$Bit $tmp2695 = { $tmp2689 };
        PANDA_ASSERT($tmp2695.value);
        signPrefix2685 = &$s2696;
    }
    }
    panda$core$Bit $tmp2699 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2685, &$s2698);
    if ($tmp2699.value) {
    {
        panda$core$String* $tmp2700 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2697 = $tmp2700;
        panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2701, direction2697);
        panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, &$s2703);
        panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, step2649);
        panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, &$s2706);
        (($fn2708) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2707);
    }
    }
    else {
    {
        direction2697 = &$s2709;
    }
    }
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2710, direction2697);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2712);
    panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, forwardEntry2681);
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, &$s2715);
    panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, backwardEntry2683);
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, &$s2718);
    (($fn2720) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2719);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2681, p_out);
    panda$core$String* $tmp2722 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2721 = $tmp2722;
    panda$core$String* $tmp2724 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2723 = $tmp2724;
    panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2725, inclusive2661);
    panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, forwardEntryInclusive2721);
    panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, &$s2730);
    panda$core$String* $tmp2732 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2723);
    panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, &$s2733);
    panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, $tmp2734);
    (($fn2736) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2735);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2721, p_out);
    panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2737, start2611);
    panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, &$s2739);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, end2637);
    panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, &$s2742);
    panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2743, loopStart2671);
    panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2744, &$s2745);
    panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2746, loopEnd2675);
    panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2747, &$s2748);
    (($fn2750) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2749);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2723, p_out);
    panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2751, start2611);
    panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, &$s2753);
    panda$core$String* $tmp2755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2754, end2637);
    panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2755, &$s2756);
    panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2757, loopStart2671);
    panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2758, &$s2759);
    panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, loopEnd2675);
    panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2761, &$s2762);
    (($fn2764) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2763);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2683, p_out);
    panda$core$String* $tmp2766 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2765 = $tmp2766;
    panda$core$String* $tmp2768 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2767 = $tmp2768;
    panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2769, inclusive2661);
    panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, &$s2771);
    panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2772, backwardEntryInclusive2765);
    panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, &$s2774);
    panda$core$String* $tmp2776 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive2767);
    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, &$s2777);
    panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, $tmp2778);
    (($fn2780) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2779);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2765, p_out);
    panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2781, start2611);
    panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, &$s2783);
    panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, end2637);
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, &$s2786);
    panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, loopStart2671);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, &$s2789);
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, loopEnd2675);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
    (($fn2794) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2793);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2767, p_out);
    panda$core$String* $tmp2796 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2795 = $tmp2796;
    panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2797, start2611);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, &$s2799);
    panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2800, end2637);
    panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, &$s2802);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2803, loopStart2671);
    panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2805);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, loopEnd2675);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
    (($fn2810) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2809);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2671, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2579, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2677, p_out);
    panda$core$String* $tmp2812 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2811 = $tmp2812;
    panda$core$String* $tmp2814 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2813 = $tmp2814;
    panda$core$String* $tmp2816 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2815 = $tmp2816;
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2817, direction2697);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2819);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, forwardLabel2813);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, backwardLabel2815);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
    (($fn2827) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2826);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2813, p_out);
    panda$core$String* $tmp2829 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2828 = $tmp2829;
    panda$core$String* $tmp2830 = panda$core$String$convert$R$panda$core$String(numberType2606);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, &$s2831);
    panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, forwardDelta2828);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, &$s2834);
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, end2637);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2837);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, index2609);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, &$s2840);
    (($fn2842) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2841);
    panda$core$String* $tmp2844 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2843 = $tmp2844;
    panda$core$String* $tmp2846 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2845 = $tmp2846;
    panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2847, inclusive2661);
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2848, &$s2849);
    panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, forwardInclusiveLabel2843);
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, &$s2852);
    panda$core$String* $tmp2854 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2845);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, &$s2855);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, $tmp2856);
    (($fn2858) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2857);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2843, p_out);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2859, forwardDelta2828);
    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, &$s2861);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, step2649);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, &$s2864);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, loopInc2811);
    panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, &$s2867);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2868, loopEnd2675);
    panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, &$s2870);
    (($fn2872) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2871);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2845, p_out);
    panda$core$String* $tmp2874 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2873 = $tmp2874;
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2875, forwardDelta2828);
    panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, &$s2877);
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, step2649);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, &$s2880);
    panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, loopInc2811);
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, &$s2883);
    panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, loopEnd2675);
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2885, &$s2886);
    (($fn2888) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2887);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2815, p_out);
    panda$core$String* $tmp2890 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2889 = $tmp2890;
    panda$core$String* $tmp2891 = panda$core$String$convert$R$panda$core$String(numberType2606);
    panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2891, &$s2892);
    panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2893, backwardDelta2889);
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2894, &$s2895);
    panda$core$String* $tmp2897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, index2609);
    panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2897, &$s2898);
    panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, end2637);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, &$s2901);
    (($fn2903) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2902);
    panda$core$String* $tmp2905 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2904 = $tmp2905;
    panda$core$String* $tmp2907 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2906 = $tmp2907;
    panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2908, inclusive2661);
    panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2909, &$s2910);
    panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2911, backwardInclusiveLabel2904);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, &$s2913);
    panda$core$String* $tmp2915 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel2906);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, &$s2916);
    panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, $tmp2917);
    (($fn2919) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2918);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2904, p_out);
    panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2920, backwardDelta2889);
    panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2921, &$s2922);
    panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, step2649);
    panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, &$s2925);
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, loopInc2811);
    panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, &$s2928);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2929, loopEnd2675);
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, &$s2931);
    (($fn2933) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2932);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2906, p_out);
    panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2934, backwardDelta2889);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, step2649);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, &$s2939);
    panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, loopInc2811);
    panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2941, &$s2942);
    panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, loopEnd2675);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, &$s2945);
    (($fn2947) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2946);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2811, p_out);
    panda$core$String* $tmp2949 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2948 = $tmp2949;
    panda$core$String* $tmp2950 = panda$core$String$convert$R$panda$core$String(index2609);
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, step2649);
    panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, &$s2954);
    (($fn2956) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2955);
    panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2957, loopStart2671);
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, &$s2959);
    (($fn2961) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2960);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2675, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp2962 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2963 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2962)->type);
    if ($tmp2963.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp2964 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2965 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2964)->type);
    if ($tmp2965.value) {
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
    panda$core$String* loopStart2972;
    panda$core$String* loopEnd2974;
    panda$core$Bit $tmp2966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp2966.value);
    panda$core$Int64 $tmp2967 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp2968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2967, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2968.value);
    panda$core$Object* $tmp2969 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2970 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2971 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2969)->type, $tmp2970);
    PANDA_ASSERT($tmp2971.value);
    panda$core$String* $tmp2973 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2972 = $tmp2973;
    panda$core$String* $tmp2975 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2974 = $tmp2975;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2976 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2976->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2976->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2976, ((panda$core$String*) p_w->payload), loopEnd2974, loopStart2972);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2976));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2972, p_out);
    panda$core$Object* $tmp2979 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2980 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2979), p_out);
    panda$core$String* $tmp2981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2978, $tmp2980);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
    panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, loopEnd2974);
    panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, &$s2985);
    (($fn2987) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2986);
    panda$core$Object* $tmp2988 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2988), p_out);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2989, loopStart2972);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, &$s2991);
    (($fn2993) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2992);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2974, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3000;
    panda$core$String* loopEnd3002;
    panda$core$Bit $tmp2994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp2994.value);
    panda$core$Int64 $tmp2995 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2995, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2996.value);
    panda$core$Object* $tmp2997 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp2998 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2999 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2997)->type, $tmp2998);
    PANDA_ASSERT($tmp2999.value);
    panda$core$String* $tmp3001 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3000 = $tmp3001;
    panda$core$String* $tmp3003 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3002 = $tmp3003;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3004 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3004->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3004->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3004, ((panda$core$String*) p_d->payload), loopEnd3002, loopStart3000);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3004));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3000, p_out);
    panda$core$Object* $tmp3006 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3006), p_out);
    panda$core$Object* $tmp3008 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3009 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3008), p_out);
    panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3007, $tmp3009);
    panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, &$s3011);
    panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, loopStart3000);
    panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
    (($fn3016) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3015);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3002, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3020;
    panda$core$String* loopEnd3022;
    panda$core$Bit $tmp3017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3017.value);
    panda$core$Int64 $tmp3018 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3018, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3019.value);
    panda$core$String* $tmp3021 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3020 = $tmp3021;
    panda$core$String* $tmp3023 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3022 = $tmp3023;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3024 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3024->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3024->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3024, ((panda$core$String*) p_l->payload), loopEnd3022, loopStart3020);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3024));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3020, p_out);
    (($fn3027) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3026);
    panda$core$Object* $tmp3028 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3028), p_out);
    (($fn3030) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3029);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3022, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3031;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3031 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3032 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3031->type);
            panda$core$String* $tmp3033 = panda$core$String$convert$R$panda$core$String($tmp3032);
            panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, &$s3034);
            panda$core$String* $tmp3036 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3031);
            panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, $tmp3036);
            panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3037, &$s3038);
            (($fn3040) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3039);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3041 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3031);
                panda$core$String* $tmp3042 = panda$core$String$convert$R$panda$core$String($tmp3041);
                panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3042, &$s3043);
                panda$core$String* $tmp3045 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, $tmp3045);
                panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3046, &$s3047);
                (($fn3049) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3048);
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
    panda$collections$Iterator* decl$Iter3063;
    org$pandalanguage$pandac$IRNode* decl3075;
    panda$core$Bit $tmp3053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3052 = $tmp3053.value;
    if ($tmp3052) goto $l3054;
    panda$core$Bit $tmp3055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3052 = $tmp3055.value;
    $l3054:;
    panda$core$Bit $tmp3056 = { $tmp3052 };
    bool $tmp3051 = $tmp3056.value;
    if ($tmp3051) goto $l3057;
    panda$core$Bit $tmp3058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3051 = $tmp3058.value;
    $l3057:;
    panda$core$Bit $tmp3059 = { $tmp3051 };
    bool $tmp3050 = $tmp3059.value;
    if ($tmp3050) goto $l3060;
    panda$core$Bit $tmp3061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3050 = $tmp3061.value;
    $l3060:;
    panda$core$Bit $tmp3062 = { $tmp3050 };
    PANDA_ASSERT($tmp3062.value);
    {
        ITable* $tmp3064 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3064->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3064 = $tmp3064->next;
        }
        $fn3066 $tmp3065 = $tmp3064->methods[0];
        panda$collections$Iterator* $tmp3067 = $tmp3065(((panda$collections$Iterable*) p_v->children));
        decl$Iter3063 = $tmp3067;
        $l3068:;
        ITable* $tmp3070 = decl$Iter3063->$class->itable;
        while ($tmp3070->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3070 = $tmp3070->next;
        }
        $fn3072 $tmp3071 = $tmp3070->methods[0];
        panda$core$Bit $tmp3073 = $tmp3071(decl$Iter3063);
        panda$core$Bit $tmp3074 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3073);
        if (!$tmp3074.value) goto $l3069;
        {
            ITable* $tmp3076 = decl$Iter3063->$class->itable;
            while ($tmp3076->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3076 = $tmp3076->next;
            }
            $fn3078 $tmp3077 = $tmp3076->methods[1];
            panda$core$Object* $tmp3079 = $tmp3077(decl$Iter3063);
            decl3075 = ((org$pandalanguage$pandac$IRNode*) $tmp3079);
            panda$core$Bit $tmp3080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3075->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3080.value);
            panda$core$Int64 $tmp3081 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl3075->children);
            panda$core$Bit $tmp3082 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3081, ((panda$core$Int64) { 1 }));
            if ($tmp3082.value) {
            {
                panda$core$Object* $tmp3083 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3075->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3084 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3075->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3083), ((org$pandalanguage$pandac$IRNode*) $tmp3084), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3085 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3075->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3085), NULL, p_out);
            }
            }
        }
        goto $l3068;
        $l3069:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3089;
    panda$core$String* result3098;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3086 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3087 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3086, p_out);
            return $tmp3087;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3088 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3088;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3090 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3091 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3090), p_out);
            base3089 = $tmp3091;
            panda$core$String* $tmp3092 = panda$core$String$convert$R$panda$core$String(base3089);
            panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
            panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, &$s3096);
            return $tmp3097;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3099 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3100 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3099), p_out);
            result3098 = $tmp3100;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result3098));
            return result3098;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3104;
    panda$core$String* value3107;
    panda$core$String* t3108;
    panda$core$Int64 op3111;
    panda$core$String* right3113;
    panda$core$Bit $tmp3101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3101.value);
    panda$core$Int64 $tmp3102 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3102, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3103.value);
    panda$core$Object* $tmp3105 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3106 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3105), p_out);
    lvalue3104 = $tmp3106;
    panda$core$Object* $tmp3109 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3110 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3109)->type);
    t3108 = $tmp3110;
    op3111 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3111, ((panda$core$Int64) { 73 }));
    if ($tmp3112.value) {
    {
        panda$core$Object* $tmp3114 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3115 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3114), p_out);
        right3113 = $tmp3115;
        value3107 = right3113;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3116 = panda$core$String$convert$R$panda$core$String(lvalue3104);
    panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3116, &$s3117);
    panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, value3107);
    panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, &$s3120);
    (($fn3122) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3121);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    bool $tmp3123 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3123) goto $l3124;
    panda$core$Int64 $tmp3125 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3126 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3125, ((panda$core$Int64) { 0 }));
    $tmp3123 = $tmp3126.value;
    $l3124:;
    panda$core$Bit $tmp3127 = { $tmp3123 };
    if ($tmp3127.value) {
    {
        panda$core$Int64 $tmp3128 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3128, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3129.value);
        panda$core$Object* $tmp3131 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3132 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3131), p_out);
        panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3130, $tmp3132);
        panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3133, &$s3134);
        (($fn3136) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3135);
    }
    }
    else {
    {
        (($fn3138) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3137);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3142;
    panda$core$Int64 $tmp3139 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3140 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3139, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3140.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3141 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3141);
    }
    }
    panda$core$Int64 $tmp3143 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3142, ((panda$core$Int64) { 0 }), $tmp3143, ((panda$core$Bit) { false }));
    int64_t $tmp3145 = $tmp3142.min.value;
    panda$core$Int64 i3144 = { $tmp3145 };
    int64_t $tmp3147 = $tmp3142.max.value;
    bool $tmp3148 = $tmp3142.inclusive.value;
    if ($tmp3148) goto $l3155; else goto $l3156;
    $l3155:;
    if ($tmp3145 <= $tmp3147) goto $l3149; else goto $l3151;
    $l3156:;
    if ($tmp3145 < $tmp3147) goto $l3149; else goto $l3151;
    $l3149:;
    {
        panda$core$Object* $tmp3158 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3144);
        bool $tmp3157 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3158)->loopLabel != NULL }).value;
        if (!$tmp3157) goto $l3159;
        panda$core$Object* $tmp3160 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3144);
        panda$core$Bit $tmp3161 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3160)->loopLabel, p_name);
        $tmp3157 = $tmp3161.value;
        $l3159:;
        panda$core$Bit $tmp3162 = { $tmp3157 };
        if ($tmp3162.value) {
        {
            panda$core$Object* $tmp3163 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3144);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3163);
        }
        }
    }
    $l3152:;
    int64_t $tmp3165 = $tmp3147 - i3144.value;
    if ($tmp3148) goto $l3166; else goto $l3167;
    $l3166:;
    if ($tmp3165 >= 1) goto $l3164; else goto $l3151;
    $l3167:;
    if ($tmp3165 > 1) goto $l3164; else goto $l3151;
    $l3164:;
    i3144.value += 1;
    goto $l3149;
    $l3151:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3170;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3171 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3170 = $tmp3171;
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3172, desc3170->breakLabel);
    panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, &$s3174);
    (($fn3176) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3175);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3177;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3178 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3177 = $tmp3178;
    panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3179, desc3177->continueLabel);
    panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3180, &$s3181);
    (($fn3183) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3182);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3184.value);
    panda$core$Int64 $tmp3186 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3186, ((panda$core$Int64) { 1 }));
    bool $tmp3185 = $tmp3187.value;
    if ($tmp3185) goto $l3188;
    panda$core$Int64 $tmp3189 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3189, ((panda$core$Int64) { 2 }));
    $tmp3185 = $tmp3190.value;
    $l3188:;
    panda$core$Bit $tmp3191 = { $tmp3185 };
    PANDA_ASSERT($tmp3191.value);
    panda$core$Object* $tmp3193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3194 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3193), p_out);
    panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3192, $tmp3194);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
    (($fn3198) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3197);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3207;
    org$pandalanguage$pandac$IRNode* w3222;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3225;
    panda$core$Object* $tmp3200 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3201 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3200), p_out);
    panda$core$String* $tmp3202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3199, $tmp3201);
    panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3202, &$s3203);
    (($fn3205) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3204);
    panda$core$Int64 $tmp3206 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3206;
    panda$core$Int64 $tmp3208 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3207, ((panda$core$Int64) { 1 }), $tmp3208, ((panda$core$Bit) { false }));
    int64_t $tmp3210 = $tmp3207.min.value;
    panda$core$Int64 i3209 = { $tmp3210 };
    int64_t $tmp3212 = $tmp3207.max.value;
    bool $tmp3213 = $tmp3207.inclusive.value;
    if ($tmp3213) goto $l3220; else goto $l3221;
    $l3220:;
    if ($tmp3210 <= $tmp3212) goto $l3214; else goto $l3216;
    $l3221:;
    if ($tmp3210 < $tmp3212) goto $l3214; else goto $l3216;
    $l3214:;
    {
        panda$core$Object* $tmp3223 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3209);
        w3222 = ((org$pandalanguage$pandac$IRNode*) $tmp3223);
        panda$core$Bit $tmp3224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3222->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3224.value) {
        {
            panda$core$Int64 $tmp3226 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3222->children);
            panda$core$Int64 $tmp3227 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3226, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3225, ((panda$core$Int64) { 0 }), $tmp3227, ((panda$core$Bit) { false }));
            int64_t $tmp3229 = $tmp3225.min.value;
            panda$core$Int64 j3228 = { $tmp3229 };
            int64_t $tmp3231 = $tmp3225.max.value;
            bool $tmp3232 = $tmp3225.inclusive.value;
            if ($tmp3232) goto $l3239; else goto $l3240;
            $l3239:;
            if ($tmp3229 <= $tmp3231) goto $l3233; else goto $l3235;
            $l3240:;
            if ($tmp3229 < $tmp3231) goto $l3233; else goto $l3235;
            $l3233:;
            {
                panda$core$Object* $tmp3242 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3222->children, j3228);
                panda$core$UInt64 $tmp3243 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3242));
                panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3241, ((panda$core$Object*) wrap_panda$core$UInt64($tmp3243)));
                panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, &$s3245);
                (($fn3247) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3246);
            }
            $l3236:;
            int64_t $tmp3249 = $tmp3231 - j3228.value;
            if ($tmp3232) goto $l3250; else goto $l3251;
            $l3250:;
            if ($tmp3249 >= 1) goto $l3248; else goto $l3235;
            $l3251:;
            if ($tmp3249 > 1) goto $l3248; else goto $l3235;
            $l3248:;
            j3228.value += 1;
            goto $l3233;
            $l3235:;
            panda$core$Int64 $tmp3254 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3222->children);
            panda$core$Int64 $tmp3255 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3254, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3256 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3222->children, $tmp3255);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3256), p_out);
            (($fn3258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3257);
        }
        }
        else {
        {
            panda$core$Bit $tmp3259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3222->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3259.value);
            panda$core$Int64 $tmp3260 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3222->children);
            panda$core$Bit $tmp3261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3260, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3261.value);
            (($fn3263) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3262);
            panda$core$Object* $tmp3264 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3222->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3264), p_out);
        }
        }
    }
    $l3217:;
    int64_t $tmp3266 = $tmp3212 - i3209.value;
    if ($tmp3213) goto $l3267; else goto $l3268;
    $l3267:;
    if ($tmp3266 >= 1) goto $l3265; else goto $l3216;
    $l3268:;
    if ($tmp3266 > 1) goto $l3265; else goto $l3216;
    $l3265:;
    i3209.value += 1;
    goto $l3214;
    $l3216:;
    panda$core$Int64 $tmp3271 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3271;
    (($fn3273) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3272);
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
    panda$core$String* result3274;
    org$pandalanguage$pandac$Type* $tmp3275 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3276 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3275);
    result3274 = $tmp3276;
    panda$core$Bit $tmp3278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3277 = $tmp3278.value;
    if (!$tmp3277) goto $l3279;
    panda$core$Bit $tmp3281 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3274, &$s3280);
    panda$core$Bit $tmp3282 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3281);
    $tmp3277 = $tmp3282.value;
    $l3279:;
    panda$core$Bit $tmp3283 = { $tmp3277 };
    if ($tmp3283.value) {
    {
        panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3274, &$s3284);
        return $tmp3285;
    }
    }
    return result3274;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3297;
    panda$collections$Iterator* p$Iter3307;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3319;
    panda$io$MemoryOutputStream* bodyBuffer3341;
    panda$io$IndentedOutputStream* indentedBody3344;
    panda$collections$Iterator* s$Iter3347;
    org$pandalanguage$pandac$IRNode* s3359;
    panda$core$Object* $tmp3286 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3286)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3287;
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3288 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3289 = panda$core$String$convert$R$panda$core$String($tmp3288);
    panda$core$String* $tmp3291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, &$s3290);
    panda$core$String* $tmp3292 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3291, $tmp3292);
    panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3293, &$s3294);
    (($fn3296) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3295);
    separator3297 = &$s3298;
    panda$core$Bit $tmp3299 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3299);
    if ($tmp3300.value) {
    {
        panda$core$String* $tmp3301 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3302 = panda$core$String$convert$R$panda$core$String($tmp3301);
        panda$core$String* $tmp3304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3302, &$s3303);
        (($fn3305) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3304);
        separator3297 = &$s3306;
    }
    }
    {
        ITable* $tmp3308 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3308->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3308 = $tmp3308->next;
        }
        $fn3310 $tmp3309 = $tmp3308->methods[0];
        panda$collections$Iterator* $tmp3311 = $tmp3309(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3307 = $tmp3311;
        $l3312:;
        ITable* $tmp3314 = p$Iter3307->$class->itable;
        while ($tmp3314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3314 = $tmp3314->next;
        }
        $fn3316 $tmp3315 = $tmp3314->methods[0];
        panda$core$Bit $tmp3317 = $tmp3315(p$Iter3307);
        panda$core$Bit $tmp3318 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3317);
        if (!$tmp3318.value) goto $l3313;
        {
            ITable* $tmp3320 = p$Iter3307->$class->itable;
            while ($tmp3320->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3320 = $tmp3320->next;
            }
            $fn3322 $tmp3321 = $tmp3320->methods[1];
            panda$core$Object* $tmp3323 = $tmp3321(p$Iter3307);
            p3319 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3323);
            panda$core$String* $tmp3324 = panda$core$String$convert$R$panda$core$String(separator3297);
            panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3324, &$s3325);
            panda$core$String* $tmp3327 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3319->type);
            panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, $tmp3327);
            panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, &$s3329);
            panda$core$String* $tmp3331 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3319->name);
            panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, $tmp3331);
            panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, &$s3333);
            (($fn3335) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3334);
            separator3297 = &$s3336;
        }
        goto $l3312;
        $l3313:;
    }
    (($fn3338) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3337);
    panda$core$Int64 $tmp3339 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3339;
    panda$core$Bit $tmp3340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3340.value);
    panda$io$MemoryOutputStream* $tmp3342 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3342->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3342->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3342);
    bodyBuffer3341 = $tmp3342;
    panda$io$IndentedOutputStream* $tmp3345 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3345->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3345->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3345, ((panda$io$OutputStream*) bodyBuffer3341));
    indentedBody3344 = $tmp3345;
    {
        ITable* $tmp3348 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3348->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3348 = $tmp3348->next;
        }
        $fn3350 $tmp3349 = $tmp3348->methods[0];
        panda$collections$Iterator* $tmp3351 = $tmp3349(((panda$collections$Iterable*) p_body->children));
        s$Iter3347 = $tmp3351;
        $l3352:;
        ITable* $tmp3354 = s$Iter3347->$class->itable;
        while ($tmp3354->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3354 = $tmp3354->next;
        }
        $fn3356 $tmp3355 = $tmp3354->methods[0];
        panda$core$Bit $tmp3357 = $tmp3355(s$Iter3347);
        panda$core$Bit $tmp3358 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3357);
        if (!$tmp3358.value) goto $l3353;
        {
            ITable* $tmp3360 = s$Iter3347->$class->itable;
            while ($tmp3360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3360 = $tmp3360->next;
            }
            $fn3362 $tmp3361 = $tmp3360->methods[1];
            panda$core$Object* $tmp3363 = $tmp3361(s$Iter3347);
            s3359 = ((org$pandalanguage$pandac$IRNode*) $tmp3363);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3359, indentedBody3344);
        }
        goto $l3352;
        $l3353:;
    }
    panda$core$String* $tmp3364 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3365) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3364);
    panda$core$String* $tmp3366 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3341);
    (($fn3367) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3366);
    panda$core$Int64 $tmp3368 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3368;
    (($fn3370) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3369);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3371;
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
    panda$io$File* $tmp3373 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3372);
    path3371 = $tmp3373;
    panda$io$File* $tmp3374 = panda$io$File$parent$R$panda$io$File$Q(path3371);
    panda$io$File$createDirectories($tmp3374);
    panda$io$IndentedOutputStream* $tmp3375 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3375->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3375->refCount.value = 1;
    panda$io$OutputStream* $tmp3377 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3371);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3375, $tmp3377);
    self->out = $tmp3375;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3378 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3378.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3379 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3380 = panda$core$String$convert$R$panda$core$String($tmp3379);
        panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, &$s3381);
        panda$core$String* $tmp3383 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, $tmp3383);
        panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, &$s3385);
        panda$core$String* $tmp3387 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3388 = panda$core$String$convert$R$panda$core$String($tmp3387);
        panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
        panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, $tmp3390);
        (($fn3392) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3391);
        panda$core$String* $tmp3394 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3393, $tmp3394);
        panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, &$s3396);
        panda$core$String* $tmp3399 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3398, $tmp3399);
        panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, &$s3401);
        org$pandalanguage$pandac$Type* $tmp3403 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$Int64 $tmp3404 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3403);
        panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3402, ((panda$core$Object*) wrap_panda$core$Int64($tmp3404)));
        panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, &$s3406);
        panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3397, $tmp3407);
        (($fn3409) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3408);
        panda$core$String* $tmp3412 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3411, $tmp3412);
        panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3414);
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3410, $tmp3415);
        (($fn3417) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3416);
        (($fn3419) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3418);
        (($fn3421) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3420);
        (($fn3423) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3422);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3424 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3425) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3424);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3426 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3427) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3426);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3428 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3429) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3428);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3430 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3431) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3430);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3432 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3433) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3432);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3434) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

