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
#include "panda/core/Real64.h"
#include "panda/core/Panda.h"
#include "panda/core/Formattable.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/CCodeGenerator/LoopDescriptor.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

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
typedef panda$core$Int64 (*$fn1202)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1219)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1251)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1270)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1277)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1294)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1307)(panda$collections$CollectionView*);
typedef void (*$fn1328)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1466)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1484)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1571)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1578)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1589)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1593)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1599)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1605)(panda$collections$Iterator*);
typedef void (*$fn1613)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1846)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1871)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1886)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1890)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1921)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1926)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1932)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1938)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1945)(panda$core$Formattable*, panda$core$String*);
typedef void (*$fn1952)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1957)(panda$collections$CollectionView*);
typedef void (*$fn1966)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2086)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2097)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2106)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2111)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2125)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2152)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2157)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2163)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2169)(panda$collections$Iterator*);
typedef void (*$fn2173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2194)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2222)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2326)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2341)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2345)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2351)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2357)(panda$collections$Iterator*);
typedef void (*$fn2359)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2360)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2363)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2382)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2385)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2389)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2392)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2428)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2435)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2453)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2479)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2531)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2545)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2559)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2576)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2603)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2627)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2663)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2670)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2688)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2702)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2726)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2786)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2802)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2816)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2830)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2846)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2876)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2893)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2924)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2969)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2985)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2999)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3013)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3027)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3053)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3059)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3082)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3093)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3096)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3106)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3115)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3132)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3144)(panda$collections$Iterator*);
typedef void (*$fn3188)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3242)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3264)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3271)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3324)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3329)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3362)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3371)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3376)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3382)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3388)(panda$collections$Iterator*);
typedef void (*$fn3401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3404)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3416)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3422)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3428)(panda$collections$Iterator*);
typedef void (*$fn3431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3433)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3458)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3483)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3487)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3491)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3495)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3497)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3500)(panda$core$Object*);

static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x68", 2, 14951, NULL };
static panda$core$String $s61 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x23\x69\x6e\x63\x6c\x75\x64\x65\x20\x22", 10, 2316143763044225014, NULL };
static panda$core$String $s63 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22", 1, 135, NULL };
static panda$core$String $s76 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x66\x6e", 3, 1407949, NULL };
static panda$core$String $s78 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x79\x70\x65\x64\x65\x66\x20", 8, 23394968824372186, NULL };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28\x2a", 3, 1360815, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x28", 2, 14382, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6c", 2, 13945, NULL };
static panda$core$String $s129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a\x3b", 2, 16118, NULL };
static panda$core$String $s145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 157, NULL };
static panda$core$String $s147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 15204, NULL };
static panda$core$String $s149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 15402, NULL };
static panda$core$String $s151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 15707, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 14815783583650106, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6e\x75\x6c\x6c\x61\x62\x6c\x65", 9, 1495432519871594484, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5f", 2, 13932, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x6e\x65\x78\x74\x3b\x20", 19, -82469649542869656, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6d", 5, 14375831170, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, 13545, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2a", 2, 14384, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, 213, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 10, -868402795326672399, NULL };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6c\x66", 5, 14792042467, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6c\x74", 6, 2270301397372, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6d", 12, -5595348649711353309, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a", 9, 1496394141948660748, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6c\x66\x2d\x3e\x76\x61\x6c\x75\x65", 12, 3684417363826496863, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5f", 9, 1496394141948660801, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7b\x20", 9, 2351529507641854965, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6c\x3b\x20\x49\x54\x61\x62\x6c\x65\x2a\x20\x69\x74\x61\x62\x6c\x65\x3b\x20", 21, 7276812015398014858, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6f\x69\x64\x2a\x20\x6d\x65\x74\x68\x6f\x64\x73\x5b", 14, -4109167993310357436, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b\x20\x7d\x20", 5, 20248844642, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, 1451812, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6c\x65\x2a\x29\x20\x26", 11, -5354620855204952129, NULL };
static panda$core$String $s804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73", 6, 1450298022071, NULL };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b\x0a", 5, 23551901352, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73", 17, 2510732456916194353, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x65\x78\x74\x65\x72\x6e\x61\x6c\x20\x67\x6c\x6f\x62\x61\x6c\x20", 19, 7395979908803736066, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73", 13, 6718852662488489788, NULL };
static panda$core$String $s933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x65\x72\x72\x6f\x72\x3e", 7, 171978245881277, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5f\x74\x79\x70\x65\x20", 6, 2072176523878, NULL };
static panda$core$String $s957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 21, 2848984600002578045, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x31\x2c\x20", 5, 15122232102, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x7b\x20", 4, 149732532, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d\x20\x7d\x3b", 4, 233187142, NULL };
static panda$core$String $s1016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5f", 2, 21608, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 137, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65", 6, 1557364953788, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2b", 1, 144, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 138, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3c", 2, 16321, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3e", 2, 16525, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5e", 1, 195, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3d\x3d", 2, 16423, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3d", 2, 13595, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3e\x3d", 2, 16524, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3c\x3d", 2, 16322, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s1140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x3d\x20", 4, 137658487, NULL };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20", 4, 137372859, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x76\x74\x61\x62\x6c\x65\x5b", 17, -5723231573477557210, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x29", 2, 19635, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6c\x65\x2a\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x2d\x3e\x69\x74\x61\x62\x6c\x65\x3b", 17, -5723245373239515055, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x21\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x6e\x65\x78\x74\x3b", 7, 155645120159214, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x6d\x65\x74\x68\x6f\x64\x73\x5b", 10, -5659480974997351189, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5d\x3b", 2, 19653, NULL };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6c\x6c\x6f\x63", 5, 20716344924, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6d\x61\x6c\x6c\x6f\x63\x28", 9, 1541204091645718446, NULL };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2a", 2, 14283, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d", 2, 19485, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d", 7, 157293860332681, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6c\x6c\x6f\x63", 7, 229298558774239, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6c\x6c\x6f\x63\x28", 10, 8088200864683738024, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2a\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6f\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2b\x20", 3, 1361108, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7c", 1, 225, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5f", 7, 151084686244311, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3f\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x4e\x55\x4c\x4c\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2d\x3e\x76\x61\x6c\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c\x20\x3f\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3a\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x30\x20\x7d\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x74\x72\x75\x65\x20\x7d\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20", 4, 146641629, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6d\x61\x6c\x6c\x6f\x63\x28", 7, 223950062312973, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x24\x63\x6c\x61\x73\x73\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6c\x61\x73\x73\x3b", 7, 146480100229230, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e\x72\x65\x66\x43\x6f\x75\x6e\x74\x2e\x76\x61\x6c\x75\x65\x20\x3d\x20\x31\x3b", 21, 5666803292027080506, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x30", 2, 14895, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20\x26\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x53\x74\x72\x69\x6e\x67\x24\x63\x6c\x61\x73\x73\x2c\x20\x32\x2c\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x68\x61\x72\x38\x2a\x29\x20\x22", 70, 2026475985823268269, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5c\x78", 2, 19613, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78", 1, 221, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x3e\x32", 3, 1526261, NULL };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2c\x20", 3, 1381611, NULL };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20\x4e\x55\x4c\x4c\x20\x7d\x3b", 9, 1573656756204980508, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6c\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6c\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x3d\x20\x4e\x55\x4c\x4c", 8, 14324797439511602, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c", 8, 15878335074876521, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3d\x20\x4e\x55\x4c\x4c", 8, 14295074875294774, NULL };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x42\x69\x74\x29\x20\x7b\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x29", 3, 1369399, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b\x20\x2e\x6e\x6f\x6e\x6e\x75\x6c\x6c\x20\x3d\x20\x66\x61\x6c\x73\x65\x20\x7d\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4e\x55\x4c\x4c", 4, 185298716, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7e", 1, 227, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7b", 1, 224, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6f\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b\x5d\x3a\x3d", 4, 198772404, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x5d\x20\x3d\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6f\x79", 7, 214439158056679, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 21242756259, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x75\x6e\x73\x61\x66\x65\x2e\x50\x6f\x69\x6e\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6d\x70", 4, 142345674, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a\x20", 2, 14475, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6c\x73\x65\x20\x7b", 6, 2134398342781, NULL };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x52\x61\x6e\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6d\x69\x6e\x2e\x76\x61\x6c\x75\x65\x3b", 11, -3956212002962864875, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x6d\x61\x78\x2e\x76\x61\x6c\x75\x65\x3b", 11, -4041768404061004273, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x31\x29\x20\x67\x6f\x74\x6f\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20\x31\x3b", 12, -4476855678279854640, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6e\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73\x74\x61\x72\x74\x2e\x76\x61\x6c\x75\x65\x3b", 13, 3588086193908855763, NULL };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20\x7b\x20", 5, 13903220581, NULL };
static panda$core$String $s2700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7d\x3b", 3, 1369417, NULL };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x65\x6e\x64\x2e\x76\x61\x6c\x75\x65\x3b", 11, 5794120589201096528, NULL };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x73\x74\x65\x70\x2e\x76\x61\x6c\x75\x65\x3b", 12, -1565217378717073995, NULL };
static panda$core$String $s2729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x2e\x76\x61\x6c\x75\x65\x3b", 17, -5967430147646080757, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x55\x49\x6e\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6f\x6f\x6c\x20", 5, 20823526461, NULL };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x30\x3b", 5, 13904243334, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x3d\x20", 4, 137648286, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3c\x20", 3, 1362825, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2d\x20", 3, 1361310, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x3b", 7, 157293860332647, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20", 4, 137668688, NULL };
static panda$core$String $s2930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20", 3, 1363027, NULL };
static panda$core$String $s2946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2d\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x3d\x20\x2d", 5, 13904537533, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3e\x20\x2d", 4, 137665772, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6f\x74\x6f\x20", 7, 151083018380647, NULL };
static panda$core$String $s3008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b\x20\x65\x6c\x73\x65\x20\x67\x6f\x74\x6f\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x20\x2b\x3d\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x67\x6f\x74\x6f\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7b", 14, 1197661341919403142, NULL };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3d\x20", 3, 1362926, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x3b", 7, 229300545255632, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6f\x74\x6f\x20", 5, 21343879774, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4e\x44\x41\x5f\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x76\x61\x6c\x75\x65\x29\x20\x7b", 9, 1604554669253151784, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s3323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x3b", 6, 2103477946177, NULL };
static panda$core$String $s3328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6c\x74\x3a", 8, 21658216358330300, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2a", 1, 143, NULL };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66", 5, 13959559259, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5f", 3, 1368140, NULL };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s3403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7b", 3, 1451897, NULL };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s3438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2e\x63", 2, 14946, NULL };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a\x20\x77\x72\x61\x70\x5f", 15, -9085029162737573691, NULL };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6c\x66\x29\x20\x7b", 8, 14382547864528555, NULL };
static panda$core$String $s3459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, 137359729, NULL };
static panda$core$String $s3462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a\x20\x72\x65\x73\x75\x6c\x74\x20\x3d\x20", 19, 581419489117905124, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2a\x29\x20\x6d\x61\x6c\x6c\x6f\x63\x28", 18, 6121584528548524069, NULL };
static panda$core$String $s3472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3b", 2, 14401, NULL };
static panda$core$String $s3476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6c\x74\x2d\x3e\x63\x6c\x20\x3d\x20\x28\x70\x61\x6e\x64\x61\x24\x63\x6f\x72\x65\x24\x43\x6c\x61\x73\x73\x2a\x29\x20", 37, -9137501668294411695, NULL };
static panda$core$String $s3477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6c\x61\x73\x73\x3b", 14, -3925411815915941145, NULL };
static panda$core$String $s3484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6c\x74\x2d\x3e\x76\x61\x6c\x75\x65\x20\x3d\x20\x73\x65\x6c\x66\x3b", 25, 7577815125550662002, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6e\x20\x72\x65\x73\x75\x6c\x74\x3b", 18, -6041374821165614789, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7d", 1, 226, NULL };

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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
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
            panda$core$String* $tmp1187 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left->type, leftRef1183, p_op, rightRef1185, p_out);
            return $tmp1187;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1188.value);
    panda$core$Int64 $tmp1189 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1189, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1190.value);
    panda$core$Object* $tmp1191 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1192 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1193 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1191), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1192), p_out);
    return $tmp1193;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1194;
    panda$core$Int64 index1196;
    panda$collections$ListView* vtable1197;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1199;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1195 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1194 = $tmp1195;
    index1196 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1198 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1197 = $tmp1198;
    ITable* $tmp1200 = ((panda$collections$CollectionView*) vtable1197)->$class->itable;
    while ($tmp1200->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1200 = $tmp1200->next;
    }
    $fn1202 $tmp1201 = $tmp1200->methods[0];
    panda$core$Int64 $tmp1203 = $tmp1201(((panda$collections$CollectionView*) vtable1197));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1199, ((panda$core$Int64) { 0 }), $tmp1203, ((panda$core$Bit) { false }));
    int64_t $tmp1205 = $tmp1199.min.value;
    panda$core$Int64 i1204 = { $tmp1205 };
    int64_t $tmp1207 = $tmp1199.max.value;
    bool $tmp1208 = $tmp1199.inclusive.value;
    if ($tmp1208) goto $l1215; else goto $l1216;
    $l1215:;
    if ($tmp1205 <= $tmp1207) goto $l1209; else goto $l1211;
    $l1216:;
    if ($tmp1205 < $tmp1207) goto $l1209; else goto $l1211;
    $l1209:;
    {
        ITable* $tmp1217 = vtable1197->$class->itable;
        while ($tmp1217->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1217 = $tmp1217->next;
        }
        $fn1219 $tmp1218 = $tmp1217->methods[0];
        panda$core$Object* $tmp1220 = $tmp1218(vtable1197, i1204);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1220)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1196 = i1204;
            goto $l1211;
        }
        }
    }
    $l1212:;
    int64_t $tmp1222 = $tmp1207 - i1204.value;
    if ($tmp1208) goto $l1223; else goto $l1224;
    $l1223:;
    if ($tmp1222 >= 1) goto $l1221; else goto $l1211;
    $l1224:;
    if ($tmp1222 > 1) goto $l1221; else goto $l1211;
    $l1221:;
    i1204.value += 1;
    goto $l1209;
    $l1211:;
    panda$core$Bit $tmp1227 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1196, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1227.value);
    org$pandalanguage$pandac$Type* $tmp1229 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1230 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1229);
    panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1228, $tmp1230);
    panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1231, &$s1232);
    panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1233, p_target);
    panda$core$String* $tmp1236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1234, &$s1235);
    panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1236, ((panda$core$Object*) wrap_panda$core$Int64(index1196)));
    panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1237, &$s1238);
    return $tmp1239;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1240;
    panda$core$String* itable1242;
    panda$core$Int64 index1271;
    panda$collections$ListView* vtable1272;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1274;
    panda$core$String* result1311;
    panda$core$String* methodType1313;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1241 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1240 = $tmp1241;
    panda$core$String* $tmp1243 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1242 = $tmp1243;
    panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1244, itable1242);
    panda$core$String* $tmp1247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1245, &$s1246);
    panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1247, p_target);
    panda$core$String* $tmp1250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1248, &$s1249);
    (($fn1251) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1250);
    panda$core$String* $tmp1253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1252, itable1242);
    panda$core$String* $tmp1255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1253, &$s1254);
    panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1255, cc1240->name);
    panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, &$s1257);
    (($fn1259) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1258);
    panda$core$Int64 $tmp1260 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1260;
    panda$core$String* $tmp1261 = panda$core$String$convert$R$panda$core$String(itable1242);
    panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, &$s1262);
    panda$core$String* $tmp1264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1263, itable1242);
    panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1264, &$s1265);
    (($fn1267) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1266);
    panda$core$Int64 $tmp1268 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1268;
    (($fn1270) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1269);
    index1271 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1273 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1272 = $tmp1273;
    ITable* $tmp1275 = ((panda$collections$CollectionView*) vtable1272)->$class->itable;
    while ($tmp1275->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1275 = $tmp1275->next;
    }
    $fn1277 $tmp1276 = $tmp1275->methods[0];
    panda$core$Int64 $tmp1278 = $tmp1276(((panda$collections$CollectionView*) vtable1272));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1274, ((panda$core$Int64) { 0 }), $tmp1278, ((panda$core$Bit) { false }));
    int64_t $tmp1280 = $tmp1274.min.value;
    panda$core$Int64 i1279 = { $tmp1280 };
    int64_t $tmp1282 = $tmp1274.max.value;
    bool $tmp1283 = $tmp1274.inclusive.value;
    if ($tmp1283) goto $l1290; else goto $l1291;
    $l1290:;
    if ($tmp1280 <= $tmp1282) goto $l1284; else goto $l1286;
    $l1291:;
    if ($tmp1280 < $tmp1282) goto $l1284; else goto $l1286;
    $l1284:;
    {
        ITable* $tmp1292 = vtable1272->$class->itable;
        while ($tmp1292->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1292 = $tmp1292->next;
        }
        $fn1294 $tmp1293 = $tmp1292->methods[0];
        panda$core$Object* $tmp1295 = $tmp1293(vtable1272, i1279);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1295)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1271 = i1279;
            goto $l1286;
        }
        }
    }
    $l1287:;
    int64_t $tmp1297 = $tmp1282 - i1279.value;
    if ($tmp1283) goto $l1298; else goto $l1299;
    $l1298:;
    if ($tmp1297 >= 1) goto $l1296; else goto $l1286;
    $l1299:;
    if ($tmp1297 > 1) goto $l1296; else goto $l1286;
    $l1296:;
    i1279.value += 1;
    goto $l1284;
    $l1286:;
    org$pandalanguage$pandac$Type* $tmp1302 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1303 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1302);
    panda$collections$ListView* $tmp1304 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1303);
    ITable* $tmp1305 = ((panda$collections$CollectionView*) $tmp1304)->$class->itable;
    while ($tmp1305->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1305 = $tmp1305->next;
    }
    $fn1307 $tmp1306 = $tmp1305->methods[0];
    panda$core$Int64 $tmp1308 = $tmp1306(((panda$collections$CollectionView*) $tmp1304));
    panda$core$Int64 $tmp1309 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1271, $tmp1308);
    index1271 = $tmp1309;
    panda$core$Bit $tmp1310 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1271, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1310.value);
    panda$core$String* $tmp1312 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1311 = $tmp1312;
    org$pandalanguage$pandac$Type* $tmp1314 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1315 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1314);
    methodType1313 = $tmp1315;
    panda$core$String* $tmp1316 = panda$core$String$convert$R$panda$core$String(methodType1313);
    panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1316, &$s1317);
    panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1318, result1311);
    panda$core$String* $tmp1321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1319, &$s1320);
    panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1321, itable1242);
    panda$core$String* $tmp1324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1322, &$s1323);
    panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1324, ((panda$core$Object*) wrap_panda$core$Int64(index1271)));
    panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1325, &$s1326);
    (($fn1328) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1327);
    return result1311;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1330 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1329 = $tmp1330.value;
    if (!$tmp1329) goto $l1331;
    panda$core$Bit $tmp1332 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1329 = $tmp1332.value;
    $l1331:;
    panda$core$Bit $tmp1333 = { $tmp1329 };
    if ($tmp1333.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1334.value) {
        {
            panda$core$String* $tmp1335 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1335;
        }
        }
        else {
        {
            panda$core$String* $tmp1336 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1336;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1337 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1337.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1338 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1338;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1339;
    panda$core$String* $match$862_91340;
    panda$core$String* count1345;
    panda$core$Int64 elementSize1351;
    panda$core$String* ptr1370;
    panda$core$String* ptr1381;
    panda$core$String* index1384;
    panda$core$String* ptr1397;
    panda$core$String* count1400;
    panda$core$Int64 elementSize1406;
    panda$core$String* ptr1428;
    panda$core$String* offset1431;
    m1339 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$862_91340 = ((org$pandalanguage$pandac$Symbol*) m1339->value)->name;
        panda$core$Bit $tmp1342 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91340, &$s1341);
        if ($tmp1342.value) {
        {
            panda$core$Int64 $tmp1343 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1343, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1344.value);
            panda$core$Object* $tmp1346 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1347 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1346), p_out);
            count1345 = $tmp1347;
            org$pandalanguage$pandac$Type* $tmp1348 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1339);
            panda$core$Int64 $tmp1349 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1348->subtypes);
            panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1349, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1350.value);
            org$pandalanguage$pandac$Type* $tmp1352 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1339);
            panda$core$Object* $tmp1353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1352->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1354 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1353));
            elementSize1351 = $tmp1354;
            panda$core$String* $tmp1356 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1355, $tmp1356);
            panda$core$String* $tmp1359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1357, &$s1358);
            panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1359, count1345);
            panda$core$String* $tmp1362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, &$s1361);
            panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1362, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1351)));
            panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1363, &$s1364);
            return $tmp1365;
        }
        }
        else {
        panda$core$Bit $tmp1367 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91340, &$s1366);
        if ($tmp1367.value) {
        {
            panda$core$Int64 $tmp1368 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1368, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1369.value);
            panda$core$Object* $tmp1371 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1372 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1371), p_out);
            ptr1370 = $tmp1372;
            panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1373, ptr1370);
            panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1374, &$s1375);
            return $tmp1376;
        }
        }
        else {
        panda$core$Bit $tmp1378 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91340, &$s1377);
        if ($tmp1378.value) {
        {
            panda$core$Int64 $tmp1379 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1379, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1380.value);
            panda$core$Object* $tmp1382 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1383 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1382), p_out);
            ptr1381 = $tmp1383;
            panda$core$Object* $tmp1385 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1386 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1385), p_out);
            index1384 = $tmp1386;
            panda$core$String* $tmp1387 = panda$core$String$convert$R$panda$core$String(ptr1381);
            panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, &$s1388);
            panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, index1384);
            panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1390, &$s1391);
            return $tmp1392;
        }
        }
        else {
        panda$core$Bit $tmp1394 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91340, &$s1393);
        if ($tmp1394.value) {
        {
            panda$core$Int64 $tmp1395 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1395, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1396.value);
            panda$core$Object* $tmp1398 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1399 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1398), p_out);
            ptr1397 = $tmp1399;
            panda$core$Object* $tmp1401 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1402 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1401), p_out);
            count1400 = $tmp1402;
            org$pandalanguage$pandac$Type* $tmp1403 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1339);
            panda$core$Int64 $tmp1404 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1403->subtypes);
            panda$core$Bit $tmp1405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1404, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1405.value);
            org$pandalanguage$pandac$Type* $tmp1407 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1339);
            panda$core$Object* $tmp1408 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1407->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1409 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1408));
            elementSize1406 = $tmp1409;
            panda$core$String* $tmp1411 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1410, $tmp1411);
            panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, &$s1413);
            panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1414, ptr1397);
            panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1415, &$s1416);
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, count1400);
            panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1419);
            panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1420, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1406)));
            panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1422);
            return $tmp1423;
        }
        }
        else {
        panda$core$Bit $tmp1425 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91340, &$s1424);
        if ($tmp1425.value) {
        {
            panda$core$Int64 $tmp1426 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1426, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1427.value);
            panda$core$Object* $tmp1429 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1430 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1429), p_out);
            ptr1428 = $tmp1430;
            panda$core$Object* $tmp1432 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1433 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1432), p_out);
            offset1431 = $tmp1433;
            panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1434, ptr1428);
            panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, &$s1436);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1437, offset1431);
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1438, &$s1439);
            return $tmp1440;
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
    org$pandalanguage$pandac$MethodDecl* m1442;
    panda$core$String* bit1453;
    panda$core$String* result1457;
    panda$core$String* bit1471;
    panda$core$String* result1475;
    panda$collections$Array* args1485;
    org$pandalanguage$pandac$Type* actualMethodType1489;
    panda$core$String* actualResultType1490;
    panda$core$Bit isSuper1491;
    panda$core$Int64 offset1511;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1516;
    panda$core$String* arg1531;
    panda$core$String* target1552;
    panda$core$String* methodRef1556;
    panda$core$Bit indirect1558;
    panda$core$String* result1560;
    panda$core$String* separator1562;
    panda$core$String* indirectVar1564;
    panda$collections$Iterator* arg$Iter1590;
    panda$core$String* arg1602;
    panda$core$Bit $tmp1441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1441.value);
    m1442 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1444 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1442->owner)->name, &$s1443);
    if ($tmp1444.value) {
    {
        panda$core$String* $tmp1445 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1445;
    }
    }
    panda$core$Bit $tmp1446 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1442->owner);
    if ($tmp1446.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1442);
    }
    }
    panda$core$Bit $tmp1448 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1442->owner)->name, &$s1447);
    if ($tmp1448.value) {
    {
        panda$core$Bit $tmp1450 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1442)->name, &$s1449);
        if ($tmp1450.value) {
        {
            panda$core$Int64 $tmp1451 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1451, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1452.value);
            panda$core$Object* $tmp1454 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1455 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1456 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1454), ((org$pandalanguage$pandac$IRNode*) $tmp1455), p_out);
            bit1453 = $tmp1456;
            panda$core$String* $tmp1458 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1457 = $tmp1458;
            panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1459, result1457);
            panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, &$s1461);
            panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, bit1453);
            panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, &$s1464);
            (($fn1466) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1465);
            return result1457;
        }
        }
        panda$core$Bit $tmp1468 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1442)->name, &$s1467);
        if ($tmp1468.value) {
        {
            panda$core$Int64 $tmp1469 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1469, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1470.value);
            panda$core$Object* $tmp1472 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1473 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1474 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1472), ((org$pandalanguage$pandac$IRNode*) $tmp1473), p_out);
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
    }
    }
    panda$collections$Array* $tmp1486 = (panda$collections$Array*) malloc(40);
    $tmp1486->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1486->refCount.value = 1;
    panda$core$Int64 $tmp1488 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1486, $tmp1488);
    args1485 = $tmp1486;
    panda$core$Int64 $tmp1493 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1494 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1493, ((panda$core$Int64) { 1 }));
    bool $tmp1492 = $tmp1494.value;
    if (!$tmp1492) goto $l1495;
    panda$core$Object* $tmp1496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1496)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1492 = $tmp1497.value;
    $l1495:;
    panda$core$Bit $tmp1498 = { $tmp1492 };
    isSuper1491 = $tmp1498;
    panda$core$Bit $tmp1500 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1491);
    bool $tmp1499 = $tmp1500.value;
    if (!$tmp1499) goto $l1501;
    panda$core$Bit $tmp1502 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1442);
    $tmp1499 = $tmp1502.value;
    $l1501:;
    panda$core$Bit $tmp1503 = { $tmp1499 };
    if ($tmp1503.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1504 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1442);
        actualMethodType1489 = $tmp1504;
        panda$core$Int64 $tmp1505 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1489->subtypes);
        panda$core$Int64 $tmp1506 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1505, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1507 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1489->subtypes, $tmp1506);
        panda$core$String* $tmp1508 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1507));
        actualResultType1490 = $tmp1508;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1509 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1442);
        actualMethodType1489 = $tmp1509;
        panda$core$String* $tmp1510 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1490 = $tmp1510;
    }
    }
    panda$core$Int64 $tmp1512 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1513 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1489->subtypes);
    panda$core$Int64 $tmp1514 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1512, $tmp1513);
    panda$core$Int64 $tmp1515 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1514, ((panda$core$Int64) { 1 }));
    offset1511 = $tmp1515;
    panda$core$Int64 $tmp1517 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1516, ((panda$core$Int64) { 0 }), $tmp1517, ((panda$core$Bit) { false }));
    int64_t $tmp1519 = $tmp1516.min.value;
    panda$core$Int64 i1518 = { $tmp1519 };
    int64_t $tmp1521 = $tmp1516.max.value;
    bool $tmp1522 = $tmp1516.inclusive.value;
    if ($tmp1522) goto $l1529; else goto $l1530;
    $l1529:;
    if ($tmp1519 <= $tmp1521) goto $l1523; else goto $l1525;
    $l1530:;
    if ($tmp1519 < $tmp1521) goto $l1523; else goto $l1525;
    $l1523:;
    {
        panda$core$Object* $tmp1532 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1518);
        panda$core$String* $tmp1533 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1532), p_out);
        arg1531 = $tmp1533;
        panda$core$Bit $tmp1535 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1518, offset1511);
        bool $tmp1534 = $tmp1535.value;
        if (!$tmp1534) goto $l1536;
        panda$core$Int64 $tmp1537 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1518, offset1511);
        panda$core$Object* $tmp1538 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1489->subtypes, $tmp1537);
        panda$core$Object* $tmp1539 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1518);
        panda$core$Bit $tmp1540 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1538), ((org$pandalanguage$pandac$IRNode*) $tmp1539)->type);
        $tmp1534 = $tmp1540.value;
        $l1536:;
        panda$core$Bit $tmp1541 = { $tmp1534 };
        if ($tmp1541.value) {
        {
            panda$core$Object* $tmp1542 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i1518);
            panda$core$Int64 $tmp1543 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1518, offset1511);
            panda$core$Object* $tmp1544 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1489->subtypes, $tmp1543);
            panda$core$String* $tmp1545 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1531, ((org$pandalanguage$pandac$IRNode*) $tmp1542)->type, ((org$pandalanguage$pandac$Type*) $tmp1544), p_out);
            arg1531 = $tmp1545;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1485, ((panda$core$Object*) arg1531));
    }
    $l1526:;
    int64_t $tmp1547 = $tmp1521 - i1518.value;
    if ($tmp1522) goto $l1548; else goto $l1549;
    $l1548:;
    if ($tmp1547 >= 1) goto $l1546; else goto $l1525;
    $l1549:;
    if ($tmp1547 > 1) goto $l1546; else goto $l1525;
    $l1546:;
    i1518.value += 1;
    goto $l1523;
    $l1525:;
    panda$core$Int64 $tmp1553 = panda$collections$Array$get_count$R$panda$core$Int64(args1485);
    panda$core$Bit $tmp1554 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1553, ((panda$core$Int64) { 0 }));
    if ($tmp1554.value) {
    {
        panda$core$Object* $tmp1555 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1485, ((panda$core$Int64) { 0 }));
        target1552 = ((panda$core$String*) $tmp1555);
    }
    }
    else {
    {
        target1552 = NULL;
    }
    }
    panda$core$String* $tmp1557 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1552, m1442, isSuper1491, p_out);
    methodRef1556 = $tmp1557;
    panda$core$Bit $tmp1559 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1442);
    indirect1558 = $tmp1559;
    panda$core$String* $tmp1561 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1560 = $tmp1561;
    separator1562 = &$s1563;
    if (indirect1558.value) {
    {
        panda$core$String* $tmp1565 = panda$core$String$convert$R$panda$core$String(actualResultType1490);
        panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1565, &$s1566);
        panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1567, result1560);
        panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1568, &$s1569);
        (($fn1571) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1570);
        panda$core$String* $tmp1572 = panda$core$String$convert$R$panda$core$String(methodRef1556);
        panda$core$String* $tmp1574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, &$s1573);
        panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1574, result1560);
        panda$core$String* $tmp1577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1575, &$s1576);
        (($fn1578) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1577);
        separator1562 = &$s1579;
    }
    }
    else {
    {
        panda$core$String* $tmp1580 = panda$core$String$convert$R$panda$core$String(actualResultType1490);
        panda$core$String* $tmp1582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1580, &$s1581);
        panda$core$String* $tmp1583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1582, result1560);
        panda$core$String* $tmp1585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1583, &$s1584);
        panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1585, methodRef1556);
        panda$core$String* $tmp1588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1586, &$s1587);
        (($fn1589) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1588);
    }
    }
    {
        ITable* $tmp1591 = ((panda$collections$Iterable*) args1485)->$class->itable;
        while ($tmp1591->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1591 = $tmp1591->next;
        }
        $fn1593 $tmp1592 = $tmp1591->methods[0];
        panda$collections$Iterator* $tmp1594 = $tmp1592(((panda$collections$Iterable*) args1485));
        arg$Iter1590 = $tmp1594;
        $l1595:;
        ITable* $tmp1597 = arg$Iter1590->$class->itable;
        while ($tmp1597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1597 = $tmp1597->next;
        }
        $fn1599 $tmp1598 = $tmp1597->methods[0];
        panda$core$Bit $tmp1600 = $tmp1598(arg$Iter1590);
        panda$core$Bit $tmp1601 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1600);
        if (!$tmp1601.value) goto $l1596;
        {
            ITable* $tmp1603 = arg$Iter1590->$class->itable;
            while ($tmp1603->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1603 = $tmp1603->next;
            }
            $fn1605 $tmp1604 = $tmp1603->methods[1];
            panda$core$Object* $tmp1606 = $tmp1604(arg$Iter1590);
            arg1602 = ((panda$core$String*) $tmp1606);
            panda$core$String* $tmp1607 = panda$core$String$convert$R$panda$core$String(separator1562);
            panda$core$String* $tmp1609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1607, &$s1608);
            panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1609, arg1602);
            panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1610, &$s1611);
            (($fn1613) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1612);
            separator1562 = &$s1614;
        }
        goto $l1595;
        $l1596:;
    }
    (($fn1616) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1615);
    panda$core$String* $tmp1617 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1618 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1617, actualResultType1490);
    if ($tmp1618.value) {
    {
        panda$core$Int64 $tmp1619 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1489->subtypes);
        panda$core$Int64 $tmp1620 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1619, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1621 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1489->subtypes, $tmp1620);
        panda$core$String* $tmp1622 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1560, ((org$pandalanguage$pandac$Type*) $tmp1621), p_call->type, p_out);
        return $tmp1622;
    }
    }
    return result1560;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1624;
    panda$core$String* nonNullValue1627;
    panda$core$String* wrapped1637;
    panda$core$Bit $tmp1623 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1623.value) {
    {
        panda$core$Object* $tmp1625 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1626 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1625), p_out);
        unwrapped1624 = $tmp1626;
        panda$core$Object* $tmp1628 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1629 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1624, ((org$pandalanguage$pandac$Type*) $tmp1628), p_dstType, p_out);
        nonNullValue1627 = $tmp1629;
        panda$core$String* $tmp1631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1630, p_value);
        panda$core$String* $tmp1633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1631, &$s1632);
        panda$core$String* $tmp1634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, nonNullValue1627);
        panda$core$String* $tmp1636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1634, &$s1635);
        return $tmp1636;
    }
    }
    panda$core$String* $tmp1639 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1638, $tmp1639);
    panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1640, &$s1641);
    org$pandalanguage$pandac$ClassDecl* $tmp1643 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    panda$core$String* $tmp1644 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1643)->name);
    panda$core$String* $tmp1645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1642, $tmp1644);
    panda$core$String* $tmp1647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1645, &$s1646);
    panda$core$String* $tmp1649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1648, p_value);
    panda$core$String* $tmp1651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1649, &$s1650);
    panda$core$String* $tmp1652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1647, $tmp1651);
    wrapped1637 = $tmp1652;
    panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1653.value) {
    {
        panda$core$String* $tmp1655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1654, p_value);
        panda$core$String* $tmp1657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1655, &$s1656);
        panda$core$String* $tmp1658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1657, wrapped1637);
        panda$core$String* $tmp1660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1658, &$s1659);
        return $tmp1660;
    }
    }
    return wrapped1637;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1664;
    org$pandalanguage$pandac$ClassDecl* cl1667;
    panda$core$String* base1670;
    panda$core$Bit $tmp1661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1661.value);
    panda$core$Int64 $tmp1662 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1662, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1663.value);
    field1664 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1665 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1664->annotations);
    if ($tmp1665.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1664->value != NULL }).value);
        panda$core$String* $tmp1666 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1664->value, p_out);
        return $tmp1666;
    }
    }
    panda$core$Object* $tmp1668 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1669 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1668)->type);
    cl1667 = $tmp1669;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1667);
    panda$core$Object* $tmp1671 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1672 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1671), p_out);
    base1670 = $tmp1672;
    PANDA_ASSERT(((panda$core$Bit) { cl1667 != NULL }).value);
    panda$core$Bit $tmp1673 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1667);
    if ($tmp1673.value) {
    {
        panda$core$String* $tmp1674 = panda$core$String$convert$R$panda$core$String(base1670);
        panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1674, &$s1675);
        panda$core$String* $tmp1677 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1664)->name);
        panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, $tmp1677);
        panda$core$String* $tmp1680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1678, &$s1679);
        return $tmp1680;
    }
    }
    panda$core$String* $tmp1681 = panda$core$String$convert$R$panda$core$String(base1670);
    panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1681, &$s1682);
    panda$core$String* $tmp1684 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1664)->name);
    panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, $tmp1684);
    panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, &$s1686);
    return $tmp1687;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1688;
    panda$core$String* wrapped1698;
    panda$core$String* nonNullValue1701;
    panda$core$String* $tmp1690 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1689, $tmp1690);
    panda$core$String* $tmp1693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1691, &$s1692);
    panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1693, p_value);
    panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1694, &$s1695);
    result1688 = $tmp1696;
    panda$core$Bit $tmp1697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1697.value) {
    {
        panda$core$Object* $tmp1699 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1700 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1699), p_out);
        wrapped1698 = $tmp1700;
        panda$core$Object* $tmp1702 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1703 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1698, ((org$pandalanguage$pandac$Type*) $tmp1702), p_dstType, p_out);
        nonNullValue1701 = $tmp1703;
        panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1704, p_value);
        panda$core$String* $tmp1707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, &$s1706);
        panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1707, nonNullValue1701);
        panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1709);
        panda$core$String* $tmp1711 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1710, $tmp1711);
        panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1712, &$s1713);
        return $tmp1714;
    }
    }
    return result1688;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1716 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1715, $tmp1716);
    panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1717, &$s1718);
    panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1719, p_value);
    panda$core$String* $tmp1722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, &$s1721);
    return $tmp1722;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1724 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1723, $tmp1724);
    panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1725, &$s1726);
    panda$core$String* $tmp1728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, p_value);
    panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, &$s1729);
    return $tmp1730;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1731;
    org$pandalanguage$pandac$ClassDecl* srcClass1742;
    org$pandalanguage$pandac$ClassDecl* targetClass1744;
    panda$core$String* srcType1783;
    panda$core$String* dstType1785;
    panda$core$Bit $tmp1732 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1732.value) {
    {
        panda$core$Bit $tmp1733 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1733.value);
        panda$core$String* $tmp1735 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1734, $tmp1735);
        panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, &$s1737);
        panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1738, p_value);
        panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, &$s1740);
        return $tmp1741;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1743 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1742 = $tmp1743;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1742 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1745 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1744 = $tmp1745;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1744 != NULL }).value);
        panda$core$Bit $tmp1747 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1742);
        bool $tmp1746 = $tmp1747.value;
        if (!$tmp1746) goto $l1748;
        panda$core$Bit $tmp1749 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1744);
        panda$core$Bit $tmp1750 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1749);
        $tmp1746 = $tmp1750.value;
        $l1748:;
        panda$core$Bit $tmp1751 = { $tmp1746 };
        if ($tmp1751.value) {
        {
            panda$core$String* $tmp1752 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1752;
        }
        }
        else {
        panda$core$Bit $tmp1754 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1742);
        panda$core$Bit $tmp1755 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1754);
        bool $tmp1753 = $tmp1755.value;
        if (!$tmp1753) goto $l1756;
        panda$core$Bit $tmp1757 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1744);
        $tmp1753 = $tmp1757.value;
        $l1756:;
        panda$core$Bit $tmp1758 = { $tmp1753 };
        if ($tmp1758.value) {
        {
            panda$core$String* $tmp1759 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1759;
        }
        }
        else {
        panda$core$Bit $tmp1762 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1742);
        bool $tmp1761 = $tmp1762.value;
        if (!$tmp1761) goto $l1763;
        panda$core$Bit $tmp1764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1761 = $tmp1764.value;
        $l1763:;
        panda$core$Bit $tmp1765 = { $tmp1761 };
        bool $tmp1760 = $tmp1765.value;
        if (!$tmp1760) goto $l1766;
        panda$core$Object* $tmp1767 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1768 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1767), p_src);
        $tmp1760 = $tmp1768.value;
        $l1766:;
        panda$core$Bit $tmp1769 = { $tmp1760 };
        if ($tmp1769.value) {
        {
            panda$core$String* $tmp1770 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1770;
        }
        }
        else {
        panda$core$Bit $tmp1773 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1744);
        bool $tmp1772 = $tmp1773.value;
        if (!$tmp1772) goto $l1774;
        panda$core$Bit $tmp1775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1772 = $tmp1775.value;
        $l1774:;
        panda$core$Bit $tmp1776 = { $tmp1772 };
        bool $tmp1771 = $tmp1776.value;
        if (!$tmp1771) goto $l1777;
        panda$core$Object* $tmp1778 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1779 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1778), p_target);
        $tmp1771 = $tmp1779.value;
        $l1777:;
        panda$core$Bit $tmp1780 = { $tmp1771 };
        if ($tmp1780.value) {
        {
            panda$core$String* $tmp1781 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1781;
        }
        }
        }
        }
        }
        op1731 = &$s1782;
    }
    }
    panda$core$String* $tmp1784 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1783 = $tmp1784;
    panda$core$String* $tmp1786 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1785 = $tmp1786;
    panda$core$Bit $tmp1787 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1783, dstType1785);
    if ($tmp1787.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1788, dstType1785);
    panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1789, &$s1790);
    panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1791, p_value);
    panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1792, &$s1793);
    return $tmp1794;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1798;
    panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1795.value);
    panda$core$Int64 $tmp1796 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1796, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1797.value);
    panda$core$Object* $tmp1799 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1800 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1799), p_out);
    base1798 = $tmp1800;
    panda$core$Object* $tmp1801 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1802 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1798, ((org$pandalanguage$pandac$IRNode*) $tmp1801)->type, p_cast->type, p_out);
    return $tmp1802;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1806;
    panda$core$String* t1808;
    panda$core$String* value1821;
    panda$core$String* tmp1835;
    panda$core$String* result1852;
    panda$core$String* classPtr1872;
    panda$core$String* className1874;
    panda$core$Bit $tmp1803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1803.value);
    panda$core$Int64 $tmp1804 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1805 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1804, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1805.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1807 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1806 = $tmp1807;
    PANDA_ASSERT(((panda$core$Bit) { cl1806 != NULL }).value);
    panda$core$String* $tmp1809 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1808 = $tmp1809;
    panda$core$Bit $tmp1811 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1810 = $tmp1811.value;
    if ($tmp1810) goto $l1812;
    org$pandalanguage$pandac$Type* $tmp1813 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1814 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1813);
    $tmp1810 = $tmp1814.value;
    $l1812:;
    panda$core$Bit $tmp1815 = { $tmp1810 };
    if ($tmp1815.value) {
    {
        panda$core$Int64 $tmp1816 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1816, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1817.value);
        panda$core$Object* $tmp1818 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1819 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1818)->children);
        panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1819, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1820.value);
        panda$core$Object* $tmp1822 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1823 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp1822)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1824 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1823), p_out);
        value1821 = $tmp1824;
        panda$core$String* $tmp1826 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1825, $tmp1826);
        panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1827, &$s1828);
        panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, value1821);
        panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1831);
        return $tmp1832;
    }
    }
    panda$core$Bit $tmp1833 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1806);
    if ($tmp1833.value) {
    {
        panda$core$Int64 $tmp1834 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1834;
        panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1836, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1837, &$s1838);
        tmp1835 = $tmp1839;
        panda$core$String* $tmp1840 = panda$core$String$convert$R$panda$core$String(t1808);
        panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1840, &$s1841);
        panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, tmp1835);
        panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, &$s1844);
        (($fn1846) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1845);
        panda$core$Object* $tmp1847 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1848, tmp1835);
        panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1850);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1847), $tmp1851, p_out);
        return tmp1835;
    }
    }
    panda$core$String* $tmp1853 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1852 = $tmp1853;
    panda$core$String* $tmp1854 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1855 = panda$core$String$convert$R$panda$core$String($tmp1854);
    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1856);
    panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, result1852);
    panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1859);
    panda$core$String* $tmp1861 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, $tmp1861);
    panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1862, &$s1863);
    panda$core$Int64 $tmp1866 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1865, ((panda$core$Object*) wrap_panda$core$Int64($tmp1866)));
    panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, &$s1868);
    panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, $tmp1869);
    (($fn1871) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1870);
    panda$core$String* $tmp1873 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr1872 = $tmp1873;
    panda$core$Bit $tmp1875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp1875.value) {
    {
        panda$core$Object* $tmp1876 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1877 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1876));
        className1874 = $tmp1877;
    }
    }
    else {
    {
        panda$core$String* $tmp1878 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className1874 = $tmp1878;
    }
    }
    panda$core$String* $tmp1879 = panda$core$String$convert$R$panda$core$String(result1852);
    panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, &$s1880);
    panda$core$String* $tmp1882 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1806)->name);
    panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1881, $tmp1882);
    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1883, &$s1884);
    (($fn1886) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1885);
    panda$core$String* $tmp1887 = panda$core$String$convert$R$panda$core$String(result1852);
    panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, &$s1888);
    (($fn1890) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1889);
    panda$core$Object* $tmp1891 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1892 = panda$core$String$convert$R$panda$core$String(result1852);
    panda$core$String* $tmp1894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1892, &$s1893);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1891), $tmp1894, p_out);
    return result1852;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1895 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp1895;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1897 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1896, $tmp1897);
    return $tmp1898;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result1899;
    panda$core$Char8 $tmp1901;
    panda$core$String* $tmp1900 = panda$core$Real64$convert$R$panda$core$String(((panda$core$Real64$wrapper*) p_real->payload)->value);
    result1899 = $tmp1900;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1901, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp1902 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result1899, $tmp1901);
    if ($tmp1902.value) {
    {
        return result1899;
    }
    }
    panda$core$String* $tmp1904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1899, &$s1903);
    return $tmp1904;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s1905;
    }
    }
    return &$s1906;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1907 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp1907;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1909;
    panda$collections$Iterator* c$Iter1922;
    panda$core$Char8 c1935;
    panda$core$Int64 $tmp1908 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp1908;
    panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1910, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, &$s1912);
    result1909 = $tmp1913;
    org$pandalanguage$pandac$Type* $tmp1914 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1914);
    panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1915, result1909);
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, &$s1917);
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1918, &$s1919);
    (($fn1921) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp1920);
    {
        panda$collections$ListView* $tmp1923 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp1924 = ((panda$collections$Iterable*) $tmp1923)->$class->itable;
        while ($tmp1924->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1924 = $tmp1924->next;
        }
        $fn1926 $tmp1925 = $tmp1924->methods[0];
        panda$collections$Iterator* $tmp1927 = $tmp1925(((panda$collections$Iterable*) $tmp1923));
        c$Iter1922 = $tmp1927;
        $l1928:;
        ITable* $tmp1930 = c$Iter1922->$class->itable;
        while ($tmp1930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1930 = $tmp1930->next;
        }
        $fn1932 $tmp1931 = $tmp1930->methods[0];
        panda$core$Bit $tmp1933 = $tmp1931(c$Iter1922);
        panda$core$Bit $tmp1934 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1933);
        if (!$tmp1934.value) goto $l1929;
        {
            ITable* $tmp1936 = c$Iter1922->$class->itable;
            while ($tmp1936->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1936 = $tmp1936->next;
            }
            $fn1938 $tmp1937 = $tmp1936->methods[1];
            panda$core$Object* $tmp1939 = $tmp1937(c$Iter1922);
            c1935 = ((panda$core$Char8$wrapper*) $tmp1939)->value;
            panda$core$UInt8 $tmp1941 = panda$core$Char8$convert$R$panda$core$UInt8(c1935);
            ITable* $tmp1943 = ((panda$core$Formattable*) wrap_panda$core$UInt8($tmp1941))->$class->itable;
            while ($tmp1943->$class != (panda$core$Class*) &panda$core$Formattable$class) {
                $tmp1943 = $tmp1943->next;
            }
            $fn1945 $tmp1944 = $tmp1943->methods[0];
            panda$core$String* $tmp1946 = $tmp1944(((panda$core$Formattable*) wrap_panda$core$UInt8($tmp1941)), &$s1942);
            panda$core$String* $tmp1948 = panda$core$Panda$align$panda$core$String$panda$core$String$R$panda$core$String($tmp1946, &$s1947);
            panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1940, $tmp1948);
            panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1949, &$s1950);
            (($fn1952) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp1951);
        }
        goto $l1928;
        $l1929:;
    }
    panda$collections$ListView* $tmp1954 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp1955 = ((panda$collections$CollectionView*) $tmp1954)->$class->itable;
    while ($tmp1955->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1955 = $tmp1955->next;
    }
    $fn1957 $tmp1956 = $tmp1955->methods[0];
    panda$core$Int64 $tmp1958 = $tmp1956(((panda$collections$CollectionView*) $tmp1954));
    panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1953, ((panda$core$Object*) wrap_panda$core$Int64($tmp1958)));
    panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, &$s1960);
    panda$core$Int64 $tmp1962 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1961, ((panda$core$Object*) wrap_panda$core$Int64($tmp1962)));
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1963, &$s1964);
    (($fn1966) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp1965);
    panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1967, result1909);
    panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1968, &$s1969);
    return $tmp1970;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s1971;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1973 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1972, $tmp1973);
    panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1975);
    return $tmp1976;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value1980;
    org$pandalanguage$pandac$ClassDecl* cl1983;
    panda$core$String* bit1986;
    panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp1977.value);
    panda$core$Int64 $tmp1978 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1978, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1979.value);
    panda$core$Object* $tmp1981 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1982 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1981), p_out);
    value1980 = $tmp1982;
    panda$core$Object* $tmp1984 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1985 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1984)->type);
    cl1983 = $tmp1985;
    panda$core$Bit $tmp1987 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1983);
    if ($tmp1987.value) {
    {
        panda$core$Object* $tmp1988 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1989 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1988)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1989.value) {
        {
            bit1986 = &$s1990;
        }
        }
        else {
        {
            panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1991, value1980);
            panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1992, &$s1993);
            bit1986 = $tmp1994;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp1995 = panda$core$String$convert$R$panda$core$String(value1980);
        panda$core$String* $tmp1997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1995, &$s1996);
        bit1986 = $tmp1997;
    }
    }
    panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1998, bit1986);
    panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1999, &$s2000);
    return $tmp2001;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2005;
    org$pandalanguage$pandac$ClassDecl* cl2008;
    panda$core$String* bit2011;
    panda$core$Bit $tmp2002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2002.value);
    panda$core$Int64 $tmp2003 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2003, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2004.value);
    panda$core$Object* $tmp2006 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2007 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2006), p_out);
    value2005 = $tmp2007;
    panda$core$Object* $tmp2009 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2010 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2009)->type);
    cl2008 = $tmp2010;
    panda$core$Bit $tmp2012 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2008);
    if ($tmp2012.value) {
    {
        panda$core$Object* $tmp2013 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2014 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2013)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2014.value) {
        {
            bit2011 = &$s2015;
        }
        }
        else {
        {
            panda$core$String* $tmp2016 = panda$core$String$convert$R$panda$core$String(value2005);
            panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, &$s2017);
            bit2011 = $tmp2018;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2019 = panda$core$String$convert$R$panda$core$String(value2005);
        panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2019, &$s2020);
        bit2011 = $tmp2021;
    }
    }
    panda$core$String* $tmp2023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2022, bit2011);
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2023, &$s2024);
    return $tmp2025;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2027;
    panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2026.value);
    panda$core$Object* $tmp2028 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2029 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2028));
    cl2027 = $tmp2029;
    PANDA_ASSERT(((panda$core$Bit) { cl2027 != NULL }).value);
    panda$core$Bit $tmp2030 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2027);
    if ($tmp2030.value) {
    {
        panda$core$String* $tmp2032 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2031, $tmp2032);
        panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, &$s2034);
        return $tmp2035;
    }
    }
    else {
    {
        return &$s2036;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2040;
    panda$core$String* result2043;
    panda$core$Bit $tmp2037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2037.value);
    panda$core$Int64 $tmp2038 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2038, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2039.value);
    panda$core$Object* $tmp2041 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2042 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2041), p_out);
    base2040 = $tmp2042;
    panda$core$String* $tmp2044 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2043 = $tmp2044;
    panda$core$Int64 $tmp2045 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2045.value) {
        case 52:
        {
            panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2046, base2040);
            panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2048);
            return $tmp2049;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2050, base2040);
            panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2051, &$s2052);
            return $tmp2053;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2054, base2040);
            panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, &$s2056);
            return $tmp2057;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2067;
    panda$core$String* trueLabel2070;
    panda$core$String* falseLabel2072;
    panda$core$String* merge2074;
    panda$core$String* result2076;
    panda$core$Bit $tmp2058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->kind, ((panda$core$Int64) { 1044 }));
    PANDA_ASSERT($tmp2058.value);
    panda$core$Int64 $tmp2059 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
    panda$core$Bit $tmp2060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2059, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2060.value);
    panda$core$Object* $tmp2061 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2062 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2063 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2061)->type, $tmp2062);
    PANDA_ASSERT($tmp2063.value);
    panda$core$Object* $tmp2064 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2065 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2066 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2064)->type, ((org$pandalanguage$pandac$IRNode*) $tmp2065)->type);
    PANDA_ASSERT($tmp2066.value);
    panda$core$Object* $tmp2068 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2069 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2068), p_out);
    test2067 = $tmp2069;
    panda$core$String* $tmp2071 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2070 = $tmp2071;
    panda$core$String* $tmp2073 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2072 = $tmp2073;
    panda$core$String* $tmp2075 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2074 = $tmp2075;
    panda$core$String* $tmp2077 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2076 = $tmp2077;
    panda$core$Object* $tmp2078 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2079 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2078)->type);
    panda$core$String* $tmp2080 = panda$core$String$convert$R$panda$core$String($tmp2079);
    panda$core$String* $tmp2082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2080, &$s2081);
    panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2082, result2076);
    panda$core$String* $tmp2085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2083, &$s2084);
    (($fn2086) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2085);
    panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2087, test2067);
    panda$core$String* $tmp2090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2088, &$s2089);
    panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, trueLabel2070);
    panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, &$s2092);
    panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2093, falseLabel2072);
    panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2094, &$s2095);
    (($fn2097) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2096);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2070, p_out);
    panda$core$String* $tmp2098 = panda$core$String$convert$R$panda$core$String(result2076);
    panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2098, &$s2099);
    panda$core$Object* $tmp2101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2102 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2101), p_out);
    panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2100, $tmp2102);
    panda$core$String* $tmp2105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, &$s2104);
    (($fn2106) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2105);
    panda$core$String* $tmp2108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2107, merge2074);
    panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2108, &$s2109);
    (($fn2111) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2110);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2072, p_out);
    panda$core$String* $tmp2112 = panda$core$String$convert$R$panda$core$String(result2076);
    panda$core$String* $tmp2114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2112, &$s2113);
    panda$core$Object* $tmp2115 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp2116 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2115), p_out);
    panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2114, $tmp2116);
    panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, &$s2118);
    (($fn2120) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2119);
    panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2121, merge2074);
    panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
    (($fn2125) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2124);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2074, p_out);
    return result2076;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2139;
    panda$core$String* result2142;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2126 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2126;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2127 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2127;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2128 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2128;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2129 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2129;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2130 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2130;
        }
        break;
        case 1045:
        {
            panda$core$String* $tmp2131 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, ((panda$io$OutputStream*) p_out));
            return $tmp2131;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2132 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2132;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2133 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2133;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2134 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2134;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2135 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2135;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2136 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2136;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2137 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2137;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2138 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2138;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2140 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2141 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2140), p_out);
            value2139 = $tmp2141;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2139));
            return value2139;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp2143 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2142 = ((panda$core$String*) $tmp2143);
            PANDA_ASSERT(((panda$core$Bit) { result2142 != NULL }).value);
            return result2142;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2144 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2144;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2145 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2145;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2146 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2146;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2147 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2147;
        }
        break;
        case 1044:
        {
            panda$core$String* $tmp2148 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2148;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2149 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2149;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2154;
    org$pandalanguage$pandac$IRNode* s2166;
    panda$core$Bit $tmp2150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2150.value);
    (($fn2152) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2151);
    panda$core$Int64 $tmp2153 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2153;
    {
        ITable* $tmp2155 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2155->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2155 = $tmp2155->next;
        }
        $fn2157 $tmp2156 = $tmp2155->methods[0];
        panda$collections$Iterator* $tmp2158 = $tmp2156(((panda$collections$Iterable*) p_block->children));
        s$Iter2154 = $tmp2158;
        $l2159:;
        ITable* $tmp2161 = s$Iter2154->$class->itable;
        while ($tmp2161->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2161 = $tmp2161->next;
        }
        $fn2163 $tmp2162 = $tmp2161->methods[0];
        panda$core$Bit $tmp2164 = $tmp2162(s$Iter2154);
        panda$core$Bit $tmp2165 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2164);
        if (!$tmp2165.value) goto $l2160;
        {
            ITable* $tmp2167 = s$Iter2154->$class->itable;
            while ($tmp2167->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2167 = $tmp2167->next;
            }
            $fn2169 $tmp2168 = $tmp2167->methods[1];
            panda$core$Object* $tmp2170 = $tmp2168(s$Iter2154);
            s2166 = ((org$pandalanguage$pandac$IRNode*) $tmp2170);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2166, p_out);
        }
        goto $l2159;
        $l2160:;
    }
    panda$core$Int64 $tmp2171 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2171;
    (($fn2173) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2172);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2174;
    panda$core$String* $match$1317_92175;
    panda$core$String* ptr2180;
    panda$core$String* arg2183;
    panda$core$String* base2203;
    panda$core$String* index2206;
    panda$core$String* value2209;
    m2174 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1317_92175 = ((org$pandalanguage$pandac$Symbol*) m2174->value)->name;
        panda$core$Bit $tmp2177 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1317_92175, &$s2176);
        if ($tmp2177.value) {
        {
            panda$core$Int64 $tmp2178 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2178, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2179.value);
            panda$core$Object* $tmp2181 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2182 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2181), p_out);
            ptr2180 = $tmp2182;
            panda$core$Object* $tmp2184 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2185 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2184));
            panda$core$String* $tmp2186 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2185, p_out);
            arg2183 = $tmp2186;
            panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2187, arg2183);
            panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2188, &$s2189);
            panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, ptr2180);
            panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, &$s2192);
            (($fn2194) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2193);
        }
        }
        else {
        panda$core$Bit $tmp2196 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1317_92175, &$s2195);
        if ($tmp2196.value) {
        {
            panda$core$Int64 $tmp2197 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2197, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2198.value);
            panda$core$Object* $tmp2199 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2200 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2199));
            panda$core$Int64 $tmp2201 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2200->type->subtypes);
            panda$core$Bit $tmp2202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2201, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2202.value);
            panda$core$Object* $tmp2204 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2205 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2204), p_out);
            base2203 = $tmp2205;
            panda$core$Object* $tmp2207 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2208 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2207), p_out);
            index2206 = $tmp2208;
            panda$core$Object* $tmp2210 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2211 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2210));
            panda$core$String* $tmp2212 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2211, p_out);
            value2209 = $tmp2212;
            panda$core$String* $tmp2213 = panda$core$String$convert$R$panda$core$String(base2203);
            panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, &$s2214);
            panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2215, index2206);
            panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
            panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, value2209);
            panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, &$s2220);
            (($fn2222) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2221);
        }
        }
        else {
        panda$core$Bit $tmp2224 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1317_92175, &$s2223);
        if ($tmp2224.value) {
        {
            panda$core$Int64 $tmp2225 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2225, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2226.value);
            panda$core$Object* $tmp2228 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2229 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2228), p_out);
            panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2227, $tmp2229);
            panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2230, &$s2231);
            (($fn2233) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2232);
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
    org$pandalanguage$pandac$MethodDecl* m2235;
    org$pandalanguage$pandac$Type* actualMethodType2239;
    panda$core$String* actualResultType2240;
    panda$core$Bit isSuper2241;
    panda$collections$Array* args2261;
    panda$core$Int64 offset2264;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2269;
    panda$core$String* arg2284;
    panda$core$String* refTarget2305;
    panda$core$String* methodRef2309;
    panda$core$String* separator2311;
    panda$core$String* indirectVar2315;
    panda$core$String* resultType2318;
    panda$collections$Iterator* a$Iter2342;
    panda$core$String* a2354;
    panda$core$Bit $tmp2234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2234.value);
    m2235 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2237 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2235->owner)->name, &$s2236);
    if ($tmp2237.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2238 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2235->owner);
    if ($tmp2238.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2235);
    }
    }
    panda$core$Int64 $tmp2243 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2244 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2243, ((panda$core$Int64) { 1 }));
    bool $tmp2242 = $tmp2244.value;
    if (!$tmp2242) goto $l2245;
    panda$core$Object* $tmp2246 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2246)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2242 = $tmp2247.value;
    $l2245:;
    panda$core$Bit $tmp2248 = { $tmp2242 };
    isSuper2241 = $tmp2248;
    panda$core$Bit $tmp2250 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2241);
    bool $tmp2249 = $tmp2250.value;
    if (!$tmp2249) goto $l2251;
    panda$core$Bit $tmp2252 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2235);
    $tmp2249 = $tmp2252.value;
    $l2251:;
    panda$core$Bit $tmp2253 = { $tmp2249 };
    if ($tmp2253.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2254 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2235);
        actualMethodType2239 = $tmp2254;
        panda$core$Int64 $tmp2255 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2239->subtypes);
        panda$core$Int64 $tmp2256 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2255, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2257 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2239->subtypes, $tmp2256);
        panda$core$String* $tmp2258 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2257));
        actualResultType2240 = $tmp2258;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2259 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2235);
        actualMethodType2239 = $tmp2259;
        panda$core$String* $tmp2260 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2240 = $tmp2260;
    }
    }
    panda$collections$Array* $tmp2262 = (panda$collections$Array*) malloc(40);
    $tmp2262->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2262->refCount.value = 1;
    panda$collections$Array$init($tmp2262);
    args2261 = $tmp2262;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2261, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2265 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2266 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2239->subtypes);
    panda$core$Int64 $tmp2267 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2265, $tmp2266);
    panda$core$Int64 $tmp2268 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2267, ((panda$core$Int64) { 1 }));
    offset2264 = $tmp2268;
    panda$core$Int64 $tmp2270 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2269, ((panda$core$Int64) { 0 }), $tmp2270, ((panda$core$Bit) { false }));
    int64_t $tmp2272 = $tmp2269.min.value;
    panda$core$Int64 i2271 = { $tmp2272 };
    int64_t $tmp2274 = $tmp2269.max.value;
    bool $tmp2275 = $tmp2269.inclusive.value;
    if ($tmp2275) goto $l2282; else goto $l2283;
    $l2282:;
    if ($tmp2272 <= $tmp2274) goto $l2276; else goto $l2278;
    $l2283:;
    if ($tmp2272 < $tmp2274) goto $l2276; else goto $l2278;
    $l2276:;
    {
        panda$core$Object* $tmp2285 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2271);
        panda$core$String* $tmp2286 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2285), p_out);
        arg2284 = $tmp2286;
        panda$core$Bit $tmp2288 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2271, offset2264);
        bool $tmp2287 = $tmp2288.value;
        if (!$tmp2287) goto $l2289;
        panda$core$Int64 $tmp2290 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2271, offset2264);
        panda$core$Object* $tmp2291 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2239->subtypes, $tmp2290);
        panda$core$Object* $tmp2292 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2271);
        panda$core$Bit $tmp2293 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2291), ((org$pandalanguage$pandac$IRNode*) $tmp2292)->type);
        $tmp2287 = $tmp2293.value;
        $l2289:;
        panda$core$Bit $tmp2294 = { $tmp2287 };
        if ($tmp2294.value) {
        {
            panda$core$Object* $tmp2295 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2271);
            panda$core$Int64 $tmp2296 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2271, offset2264);
            panda$core$Object* $tmp2297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2239->subtypes, $tmp2296);
            panda$core$String* $tmp2298 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2284, ((org$pandalanguage$pandac$IRNode*) $tmp2295)->type, ((org$pandalanguage$pandac$Type*) $tmp2297), p_out);
            arg2284 = $tmp2298;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2261, ((panda$core$Object*) arg2284));
    }
    $l2279:;
    int64_t $tmp2300 = $tmp2274 - i2271.value;
    if ($tmp2275) goto $l2301; else goto $l2302;
    $l2301:;
    if ($tmp2300 >= 1) goto $l2299; else goto $l2278;
    $l2302:;
    if ($tmp2300 > 1) goto $l2299; else goto $l2278;
    $l2299:;
    i2271.value += 1;
    goto $l2276;
    $l2278:;
    panda$core$Int64 $tmp2306 = panda$collections$Array$get_count$R$panda$core$Int64(args2261);
    panda$core$Bit $tmp2307 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2306, ((panda$core$Int64) { 0 }));
    if ($tmp2307.value) {
    {
        panda$core$Object* $tmp2308 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2261, ((panda$core$Int64) { 0 }));
        refTarget2305 = ((panda$core$String*) $tmp2308);
    }
    }
    else {
    {
        refTarget2305 = NULL;
    }
    }
    panda$core$String* $tmp2310 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2305, m2235, isSuper2241, p_out);
    methodRef2309 = $tmp2310;
    separator2311 = &$s2312;
    panda$core$Bit $tmp2313 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2235);
    if ($tmp2313.value) {
    {
        panda$core$Int64 $tmp2314 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2314;
        panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2316, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2315 = $tmp2317;
        panda$core$String* $tmp2319 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2318 = $tmp2319;
        panda$core$String* $tmp2320 = panda$core$String$convert$R$panda$core$String(resultType2318);
        panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2320, &$s2321);
        panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, indirectVar2315);
        panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2323, &$s2324);
        (($fn2326) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2325);
        panda$core$String* $tmp2327 = panda$core$String$convert$R$panda$core$String(methodRef2309);
        panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, &$s2328);
        panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, resultType2318);
        panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2331);
        panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, indirectVar2315);
        panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2333, &$s2334);
        (($fn2336) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2335);
        separator2311 = &$s2337;
    }
    }
    else {
    {
        panda$core$String* $tmp2338 = panda$core$String$convert$R$panda$core$String(methodRef2309);
        panda$core$String* $tmp2340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, &$s2339);
        (($fn2341) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2340);
    }
    }
    {
        ITable* $tmp2343 = ((panda$collections$Iterable*) args2261)->$class->itable;
        while ($tmp2343->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2343 = $tmp2343->next;
        }
        $fn2345 $tmp2344 = $tmp2343->methods[0];
        panda$collections$Iterator* $tmp2346 = $tmp2344(((panda$collections$Iterable*) args2261));
        a$Iter2342 = $tmp2346;
        $l2347:;
        ITable* $tmp2349 = a$Iter2342->$class->itable;
        while ($tmp2349->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2349 = $tmp2349->next;
        }
        $fn2351 $tmp2350 = $tmp2349->methods[0];
        panda$core$Bit $tmp2352 = $tmp2350(a$Iter2342);
        panda$core$Bit $tmp2353 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2352);
        if (!$tmp2353.value) goto $l2348;
        {
            ITable* $tmp2355 = a$Iter2342->$class->itable;
            while ($tmp2355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2355 = $tmp2355->next;
            }
            $fn2357 $tmp2356 = $tmp2355->methods[1];
            panda$core$Object* $tmp2358 = $tmp2356(a$Iter2342);
            a2354 = ((panda$core$String*) $tmp2358);
            (($fn2359) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2311);
            (($fn2360) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2354);
            separator2311 = &$s2361;
        }
        goto $l2347;
        $l2348:;
    }
    (($fn2363) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2362);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2375;
    panda$core$Bit $tmp2364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2364.value);
    panda$core$Int64 $tmp2366 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2366, ((panda$core$Int64) { 2 }));
    bool $tmp2365 = $tmp2367.value;
    if ($tmp2365) goto $l2368;
    panda$core$Int64 $tmp2369 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2369, ((panda$core$Int64) { 3 }));
    $tmp2365 = $tmp2370.value;
    $l2368:;
    panda$core$Bit $tmp2371 = { $tmp2365 };
    PANDA_ASSERT($tmp2371.value);
    panda$core$Object* $tmp2372 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2373 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2374 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2372)->type, $tmp2373);
    PANDA_ASSERT($tmp2374.value);
    panda$core$Object* $tmp2376 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2377 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2376), p_out);
    test2375 = $tmp2377;
    panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2378, test2375);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2379, &$s2380);
    (($fn2382) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2381);
    panda$core$Object* $tmp2383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2383), p_out);
    (($fn2385) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2384);
    panda$core$Int64 $tmp2386 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2386, ((panda$core$Int64) { 3 }));
    if ($tmp2387.value) {
    {
        (($fn2389) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2388);
        panda$core$Object* $tmp2390 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2390), p_out);
        (($fn2392) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2391);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2396;
    panda$core$String* range2407;
    org$pandalanguage$pandac$IRNode* block2410;
    org$pandalanguage$pandac$Type* t2412;
    panda$core$String* llt2415;
    panda$core$String* indexType2417;
    org$pandalanguage$pandac$ClassDecl* cl2423;
    org$pandalanguage$pandac$FieldDecl* field2431;
    panda$core$String* numberType2437;
    panda$core$String* index2440;
    panda$core$String* start2442;
    panda$core$String* indexValuePtr2454;
    panda$core$String* end2468;
    panda$core$String* inclusive2480;
    panda$core$String* loopStart2490;
    panda$core$String* loopBody2492;
    panda$core$String* loopEnd2494;
    panda$core$String* loopTest2496;
    panda$core$String* forwardEntry2500;
    panda$core$String* backwardEntry2502;
    panda$core$String* signPrefix2504;
    panda$core$String* forwardEntryInclusive2516;
    panda$core$String* forwardEntryExclusive2518;
    panda$core$String* loopInc2560;
    panda$core$String* forwardDelta2562;
    panda$core$String* forwardInclusiveLabel2577;
    panda$core$String* forwardExclusiveLabel2579;
    panda$core$String* forwardExclusiveTest2604;
    panda$core$String* inc2617;
    panda$core$Bit $tmp2393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2393.value);
    panda$core$Int64 $tmp2394 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2394, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2395.value);
    panda$core$Object* $tmp2397 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2396 = ((org$pandalanguage$pandac$IRNode*) $tmp2397);
    panda$core$Object* $tmp2398 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2398)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2399.value);
    panda$core$Object* $tmp2400 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2401 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2400)->type->subtypes);
    panda$core$Bit $tmp2402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2401, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2402.value);
    panda$core$Object* $tmp2403 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2404 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2403)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2406 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2404))->name, &$s2405);
    PANDA_ASSERT($tmp2406.value);
    panda$core$Object* $tmp2408 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2409 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2408), p_out);
    range2407 = $tmp2409;
    panda$core$Object* $tmp2411 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2410 = ((org$pandalanguage$pandac$IRNode*) $tmp2411);
    panda$core$Object* $tmp2413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2413)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2412 = ((org$pandalanguage$pandac$Type*) $tmp2414);
    panda$core$String* $tmp2416 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2412);
    llt2415 = $tmp2416;
    panda$core$Bit $tmp2418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2412->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2418.value) {
    {
        panda$core$Int64 $tmp2419 = panda$collections$Array$get_count$R$panda$core$Int64(t2412->subtypes);
        panda$core$Bit $tmp2420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2419, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2420.value);
        panda$core$Object* $tmp2421 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2412->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2422 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2421));
        indexType2417 = $tmp2422;
    }
    }
    else {
    {
        indexType2417 = llt2415;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2424 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2412);
    cl2423 = $tmp2424;
    PANDA_ASSERT(((panda$core$Bit) { cl2423 != NULL }).value);
    panda$collections$ListView* $tmp2425 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2423);
    ITable* $tmp2426 = ((panda$collections$CollectionView*) $tmp2425)->$class->itable;
    while ($tmp2426->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2426 = $tmp2426->next;
    }
    $fn2428 $tmp2427 = $tmp2426->methods[0];
    panda$core$Int64 $tmp2429 = $tmp2427(((panda$collections$CollectionView*) $tmp2425));
    panda$core$Bit $tmp2430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2429, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2430.value);
    panda$collections$ListView* $tmp2432 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2423);
    ITable* $tmp2433 = $tmp2432->$class->itable;
    while ($tmp2433->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2433 = $tmp2433->next;
    }
    $fn2435 $tmp2434 = $tmp2433->methods[0];
    panda$core$Object* $tmp2436 = $tmp2434($tmp2432, ((panda$core$Int64) { 0 }));
    field2431 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2436);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2431);
    panda$core$String* $tmp2438 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2431->type);
    numberType2437 = $tmp2438;
    panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2396->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2439.value);
    panda$core$String* $tmp2441 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2396->payload));
    index2440 = $tmp2441;
    panda$core$String* $tmp2443 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2442 = $tmp2443;
    panda$core$String* $tmp2444 = panda$core$String$convert$R$panda$core$String(numberType2437);
    panda$core$String* $tmp2446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2444, &$s2445);
    panda$core$String* $tmp2447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2446, start2442);
    panda$core$String* $tmp2449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2447, &$s2448);
    panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2449, range2407);
    panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, &$s2451);
    (($fn2453) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2452);
    panda$core$String* $tmp2455 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2454 = $tmp2455;
    org$pandalanguage$pandac$Type* $tmp2456 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2423);
    panda$core$String* $tmp2457 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2456);
    panda$core$String* $tmp2458 = panda$core$String$convert$R$panda$core$String($tmp2457);
    panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2458, &$s2459);
    panda$core$String* $tmp2461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, index2440);
    panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2461, &$s2462);
    panda$core$String* $tmp2464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2463, start2442);
    panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2464, &$s2465);
    (($fn2467) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2466);
    panda$core$String* $tmp2469 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2468 = $tmp2469;
    panda$core$String* $tmp2470 = panda$core$String$convert$R$panda$core$String(numberType2437);
    panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2471);
    panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, end2468);
    panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, &$s2474);
    panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2475, range2407);
    panda$core$String* $tmp2478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2476, &$s2477);
    (($fn2479) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2478);
    panda$core$String* $tmp2481 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2480 = $tmp2481;
    panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2482, inclusive2480);
    panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2483, &$s2484);
    panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, range2407);
    panda$core$String* $tmp2488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2486, &$s2487);
    (($fn2489) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2488);
    panda$core$String* $tmp2491 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2490 = $tmp2491;
    panda$core$String* $tmp2493 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2492 = $tmp2493;
    panda$core$String* $tmp2495 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2494 = $tmp2495;
    panda$core$String* $tmp2497 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2496 = $tmp2497;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2498 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2498->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2498->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2498, ((panda$core$String*) p_f->payload), loopEnd2494, loopTest2496);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2498));
    panda$core$String* $tmp2501 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2500 = $tmp2501;
    panda$core$String* $tmp2503 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2502 = $tmp2503;
    panda$core$Bit $tmp2506 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2412)->name, &$s2505);
    if ($tmp2506.value) {
    {
        signPrefix2504 = &$s2507;
    }
    }
    else {
    {
        panda$core$Bit $tmp2510 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2412)->name, &$s2509);
        bool $tmp2508 = $tmp2510.value;
        if ($tmp2508) goto $l2511;
        panda$core$Bit $tmp2513 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2412)->name, &$s2512);
        $tmp2508 = $tmp2513.value;
        $l2511:;
        panda$core$Bit $tmp2514 = { $tmp2508 };
        PANDA_ASSERT($tmp2514.value);
        signPrefix2504 = &$s2515;
    }
    }
    panda$core$String* $tmp2517 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2516 = $tmp2517;
    panda$core$String* $tmp2519 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2518 = $tmp2519;
    panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2520, inclusive2480);
    panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, &$s2522);
    panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2523, forwardEntryInclusive2516);
    panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2524, &$s2525);
    panda$core$String* $tmp2527 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2518);
    panda$core$String* $tmp2529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2527, &$s2528);
    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2526, $tmp2529);
    (($fn2531) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2530);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2516, p_out);
    panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2532, start2442);
    panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, &$s2534);
    panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2535, end2468);
    panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, &$s2537);
    panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, loopStart2490);
    panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2539, &$s2540);
    panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, loopEnd2494);
    panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, &$s2543);
    (($fn2545) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2544);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2518, p_out);
    panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2546, start2442);
    panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, &$s2548);
    panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, end2468);
    panda$core$String* $tmp2552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, &$s2551);
    panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, loopStart2490);
    panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, &$s2554);
    panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, loopEnd2494);
    panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, &$s2557);
    (($fn2559) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2558);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2490, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2410, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2496, p_out);
    panda$core$String* $tmp2561 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2560 = $tmp2561;
    panda$core$String* $tmp2563 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2562 = $tmp2563;
    panda$core$String* $tmp2564 = panda$core$String$convert$R$panda$core$String(numberType2437);
    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, &$s2565);
    panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, forwardDelta2562);
    panda$core$String* $tmp2569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2567, &$s2568);
    panda$core$String* $tmp2570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2569, end2468);
    panda$core$String* $tmp2572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2570, &$s2571);
    panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2572, index2440);
    panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, &$s2574);
    (($fn2576) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2575);
    panda$core$String* $tmp2578 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2577 = $tmp2578;
    panda$core$String* $tmp2580 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2579 = $tmp2580;
    panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2581, inclusive2480);
    panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
    panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, forwardInclusiveLabel2577);
    panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
    panda$core$String* $tmp2588 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2579);
    panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
    panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, $tmp2590);
    (($fn2592) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2591);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2577, p_out);
    panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2593, forwardDelta2562);
    panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
    panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, loopInc2560);
    panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
    panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, loopEnd2494);
    panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, &$s2601);
    (($fn2603) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2602);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2579, p_out);
    panda$core$String* $tmp2605 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2604 = $tmp2605;
    panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2606, forwardDelta2562);
    panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2607, &$s2608);
    panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, loopInc2560);
    panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2610, &$s2611);
    panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, loopEnd2494);
    panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2614);
    (($fn2616) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2615);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2560, p_out);
    panda$core$String* $tmp2618 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2617 = $tmp2618;
    panda$core$String* $tmp2619 = panda$core$String$convert$R$panda$core$String(index2440);
    panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2620);
    (($fn2622) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2621);
    panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2623, loopStart2490);
    panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, &$s2625);
    (($fn2627) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2626);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2494, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2631;
    panda$core$String* range2642;
    org$pandalanguage$pandac$IRNode* block2645;
    org$pandalanguage$pandac$Type* t2647;
    panda$core$String* llt2650;
    panda$core$String* indexType2652;
    org$pandalanguage$pandac$ClassDecl* cl2658;
    org$pandalanguage$pandac$FieldDecl* field2666;
    panda$core$String* numberType2672;
    panda$core$String* index2675;
    panda$core$String* start2677;
    panda$core$String* indexValuePtr2689;
    panda$core$String* end2703;
    panda$core$String* step2715;
    panda$core$String* inclusive2727;
    panda$core$String* loopStart2737;
    panda$core$String* loopBody2739;
    panda$core$String* loopEnd2741;
    panda$core$String* loopTest2743;
    panda$core$String* forwardEntry2747;
    panda$core$String* backwardEntry2749;
    panda$core$String* signPrefix2751;
    panda$core$String* direction2763;
    panda$core$String* forwardEntryInclusive2787;
    panda$core$String* forwardEntryExclusive2789;
    panda$core$String* backwardEntryInclusive2831;
    panda$core$String* backwardEntryExclusive2833;
    panda$core$String* backwardEntryExclusiveTest2861;
    panda$core$String* loopInc2877;
    panda$core$String* forwardLabel2879;
    panda$core$String* backwardLabel2881;
    panda$core$String* forwardDelta2894;
    panda$core$String* forwardInclusiveLabel2909;
    panda$core$String* forwardExclusiveLabel2911;
    panda$core$String* forwardExclusiveTest2939;
    panda$core$String* backwardDelta2955;
    panda$core$String* backwardInclusiveLabel2970;
    panda$core$String* backwardExclusiveLabel2972;
    panda$core$String* inc3014;
    panda$core$Bit $tmp2628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2628.value);
    panda$core$Int64 $tmp2629 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2629, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2630.value);
    panda$core$Object* $tmp2632 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2631 = ((org$pandalanguage$pandac$IRNode*) $tmp2632);
    panda$core$Object* $tmp2633 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2633)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2634.value);
    panda$core$Object* $tmp2635 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2636 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2635)->type->subtypes);
    panda$core$Bit $tmp2637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2636, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2637.value);
    panda$core$Object* $tmp2638 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2638)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2641 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2639))->name, &$s2640);
    PANDA_ASSERT($tmp2641.value);
    panda$core$Object* $tmp2643 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2644 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2643), p_out);
    range2642 = $tmp2644;
    panda$core$Object* $tmp2646 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2645 = ((org$pandalanguage$pandac$IRNode*) $tmp2646);
    panda$core$Object* $tmp2648 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2648)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2647 = ((org$pandalanguage$pandac$Type*) $tmp2649);
    panda$core$String* $tmp2651 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2647);
    llt2650 = $tmp2651;
    panda$core$Bit $tmp2653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2647->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2653.value) {
    {
        panda$core$Int64 $tmp2654 = panda$collections$Array$get_count$R$panda$core$Int64(t2647->subtypes);
        panda$core$Bit $tmp2655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2654, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2655.value);
        panda$core$Object* $tmp2656 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2647->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2657 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2656));
        indexType2652 = $tmp2657;
    }
    }
    else {
    {
        indexType2652 = llt2650;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2659 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2647);
    cl2658 = $tmp2659;
    PANDA_ASSERT(((panda$core$Bit) { cl2658 != NULL }).value);
    panda$collections$ListView* $tmp2660 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2658);
    ITable* $tmp2661 = ((panda$collections$CollectionView*) $tmp2660)->$class->itable;
    while ($tmp2661->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2661 = $tmp2661->next;
    }
    $fn2663 $tmp2662 = $tmp2661->methods[0];
    panda$core$Int64 $tmp2664 = $tmp2662(((panda$collections$CollectionView*) $tmp2660));
    panda$core$Bit $tmp2665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2664, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2665.value);
    panda$collections$ListView* $tmp2667 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2658);
    ITable* $tmp2668 = $tmp2667->$class->itable;
    while ($tmp2668->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2668 = $tmp2668->next;
    }
    $fn2670 $tmp2669 = $tmp2668->methods[0];
    panda$core$Object* $tmp2671 = $tmp2669($tmp2667, ((panda$core$Int64) { 0 }));
    field2666 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2671);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2666);
    panda$core$String* $tmp2673 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2666->type);
    numberType2672 = $tmp2673;
    panda$core$Bit $tmp2674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2631->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2674.value);
    panda$core$String* $tmp2676 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2631->payload));
    index2675 = $tmp2676;
    panda$core$String* $tmp2678 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2677 = $tmp2678;
    panda$core$String* $tmp2679 = panda$core$String$convert$R$panda$core$String(numberType2672);
    panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, &$s2680);
    panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2681, start2677);
    panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2683);
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, range2642);
    panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
    (($fn2688) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2687);
    panda$core$String* $tmp2690 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2689 = $tmp2690;
    org$pandalanguage$pandac$Type* $tmp2691 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2658);
    panda$core$String* $tmp2692 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2691);
    panda$core$String* $tmp2693 = panda$core$String$convert$R$panda$core$String($tmp2692);
    panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, &$s2694);
    panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, index2675);
    panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, &$s2697);
    panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, start2677);
    panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2699, &$s2700);
    (($fn2702) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2701);
    panda$core$String* $tmp2704 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2703 = $tmp2704;
    panda$core$String* $tmp2705 = panda$core$String$convert$R$panda$core$String(numberType2672);
    panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, &$s2706);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, end2703);
    panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, &$s2709);
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, range2642);
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2712);
    (($fn2714) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2713);
    panda$core$String* $tmp2716 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2715 = $tmp2716;
    panda$core$String* $tmp2717 = panda$core$String$convert$R$panda$core$String(numberType2672);
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, &$s2718);
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, step2715);
    panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, &$s2721);
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, range2642);
    panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, &$s2724);
    (($fn2726) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2725);
    panda$core$String* $tmp2728 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2727 = $tmp2728;
    panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2729, inclusive2727);
    panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2731);
    panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, range2642);
    panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
    (($fn2736) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2735);
    panda$core$String* $tmp2738 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2737 = $tmp2738;
    panda$core$String* $tmp2740 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2739 = $tmp2740;
    panda$core$String* $tmp2742 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2741 = $tmp2742;
    panda$core$String* $tmp2744 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2743 = $tmp2744;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2745 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2745->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2745->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2745, ((panda$core$String*) p_f->payload), loopEnd2741, loopTest2743);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2745));
    panda$core$String* $tmp2748 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2747 = $tmp2748;
    panda$core$String* $tmp2750 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2749 = $tmp2750;
    panda$core$Bit $tmp2753 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2647)->name, &$s2752);
    if ($tmp2753.value) {
    {
        signPrefix2751 = &$s2754;
    }
    }
    else {
    {
        panda$core$Bit $tmp2757 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2647)->name, &$s2756);
        bool $tmp2755 = $tmp2757.value;
        if ($tmp2755) goto $l2758;
        panda$core$Bit $tmp2760 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2647)->name, &$s2759);
        $tmp2755 = $tmp2760.value;
        $l2758:;
        panda$core$Bit $tmp2761 = { $tmp2755 };
        PANDA_ASSERT($tmp2761.value);
        signPrefix2751 = &$s2762;
    }
    }
    panda$core$Bit $tmp2765 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2751, &$s2764);
    if ($tmp2765.value) {
    {
        panda$core$String* $tmp2766 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2763 = $tmp2766;
        panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2767, direction2763);
        panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, &$s2769);
        panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, step2715);
        panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, &$s2772);
        (($fn2774) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2773);
    }
    }
    else {
    {
        direction2763 = &$s2775;
    }
    }
    panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2776, direction2763);
    panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2778);
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, forwardEntry2747);
    panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, &$s2781);
    panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, backwardEntry2749);
    panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, &$s2784);
    (($fn2786) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2785);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2747, p_out);
    panda$core$String* $tmp2788 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2787 = $tmp2788;
    panda$core$String* $tmp2790 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2789 = $tmp2790;
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2791, inclusive2727);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2793);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, forwardEntryInclusive2787);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2796);
    panda$core$String* $tmp2798 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2789);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, &$s2799);
    panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, $tmp2800);
    (($fn2802) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2801);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2787, p_out);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2803, start2677);
    panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2805);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, end2703);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, loopStart2737);
    panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, &$s2811);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, loopEnd2741);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, &$s2814);
    (($fn2816) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2815);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2789, p_out);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2817, start2677);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, &$s2819);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, end2703);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, loopStart2737);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
    panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, loopEnd2741);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, &$s2828);
    (($fn2830) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2829);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2749, p_out);
    panda$core$String* $tmp2832 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2831 = $tmp2832;
    panda$core$String* $tmp2834 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2833 = $tmp2834;
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2835, inclusive2727);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2837);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, backwardEntryInclusive2831);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, &$s2840);
    panda$core$String* $tmp2842 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive2833);
    panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2842, &$s2843);
    panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, $tmp2844);
    (($fn2846) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2845);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2831, p_out);
    panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2847, start2677);
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2848, &$s2849);
    panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, end2703);
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, &$s2852);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, loopStart2737);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, &$s2855);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, loopEnd2741);
    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, &$s2858);
    (($fn2860) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2859);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2833, p_out);
    panda$core$String* $tmp2862 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2861 = $tmp2862;
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2863, start2677);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, &$s2865);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, end2703);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2868);
    panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, loopStart2737);
    panda$core$String* $tmp2872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2870, &$s2871);
    panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2872, loopEnd2741);
    panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2873, &$s2874);
    (($fn2876) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2875);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2737, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2645, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2743, p_out);
    panda$core$String* $tmp2878 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2877 = $tmp2878;
    panda$core$String* $tmp2880 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2879 = $tmp2880;
    panda$core$String* $tmp2882 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2881 = $tmp2882;
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2883, direction2763);
    panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, &$s2885);
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2886, forwardLabel2879);
    panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2888);
    panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, backwardLabel2881);
    panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, &$s2891);
    (($fn2893) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2892);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2879, p_out);
    panda$core$String* $tmp2895 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2894 = $tmp2895;
    panda$core$String* $tmp2896 = panda$core$String$convert$R$panda$core$String(numberType2672);
    panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
    panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2898, forwardDelta2894);
    panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, &$s2900);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2901, end2703);
    panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, &$s2903);
    panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, index2675);
    panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, &$s2906);
    (($fn2908) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2907);
    panda$core$String* $tmp2910 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2909 = $tmp2910;
    panda$core$String* $tmp2912 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2911 = $tmp2912;
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2913, inclusive2727);
    panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, &$s2915);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2916, forwardInclusiveLabel2909);
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, &$s2918);
    panda$core$String* $tmp2920 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2911);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, &$s2921);
    panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, $tmp2922);
    (($fn2924) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2923);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2909, p_out);
    panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2925, forwardDelta2894);
    panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, &$s2927);
    panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, step2715);
    panda$core$String* $tmp2931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2929, &$s2930);
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2931, loopInc2877);
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, &$s2933);
    panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, loopEnd2741);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
    (($fn2938) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2937);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2911, p_out);
    panda$core$String* $tmp2940 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2939 = $tmp2940;
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2941, forwardDelta2894);
    panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, &$s2943);
    panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, step2715);
    panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, &$s2946);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2947, loopInc2877);
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, &$s2949);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, loopEnd2741);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, &$s2952);
    (($fn2954) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2953);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2881, p_out);
    panda$core$String* $tmp2956 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2955 = $tmp2956;
    panda$core$String* $tmp2957 = panda$core$String$convert$R$panda$core$String(numberType2672);
    panda$core$String* $tmp2959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2957, &$s2958);
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, backwardDelta2955);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, index2675);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2964);
    panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, end2703);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
    (($fn2969) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2968);
    panda$core$String* $tmp2971 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2970 = $tmp2971;
    panda$core$String* $tmp2973 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2972 = $tmp2973;
    panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2974, inclusive2727);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, &$s2976);
    panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, backwardInclusiveLabel2970);
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2978, &$s2979);
    panda$core$String* $tmp2981 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel2972);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2981, &$s2982);
    panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, $tmp2983);
    (($fn2985) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2984);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2970, p_out);
    panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2986, backwardDelta2955);
    panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, &$s2988);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, step2715);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, &$s2991);
    panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, loopInc2877);
    panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, &$s2994);
    panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, loopEnd2741);
    panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, &$s2997);
    (($fn2999) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2998);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2972, p_out);
    panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3000, backwardDelta2955);
    panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, &$s3002);
    panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, step2715);
    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3004, &$s3005);
    panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3006, loopInc2877);
    panda$core$String* $tmp3009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3007, &$s3008);
    panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3009, loopEnd2741);
    panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, &$s3011);
    (($fn3013) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3012);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2877, p_out);
    panda$core$String* $tmp3015 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3014 = $tmp3015;
    panda$core$String* $tmp3016 = panda$core$String$convert$R$panda$core$String(index2675);
    panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, step2715);
    panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, &$s3020);
    (($fn3022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3021);
    panda$core$String* $tmp3024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3023, loopStart2737);
    panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3024, &$s3025);
    (($fn3027) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3026);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2741, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp3028 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3029 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3028)->type);
    if ($tmp3029.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp3030 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3031 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3030)->type);
    if ($tmp3031.value) {
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
    panda$core$String* loopStart3038;
    panda$core$String* loopEnd3040;
    panda$core$Bit $tmp3032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp3032.value);
    panda$core$Int64 $tmp3033 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3033, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3034.value);
    panda$core$Object* $tmp3035 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3036 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3037 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3035)->type, $tmp3036);
    PANDA_ASSERT($tmp3037.value);
    panda$core$String* $tmp3039 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3038 = $tmp3039;
    panda$core$String* $tmp3041 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3040 = $tmp3041;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3042 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3042->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3042->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3042, ((panda$core$String*) p_w->payload), loopEnd3040, loopStart3038);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3042));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3038, p_out);
    panda$core$Object* $tmp3045 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3046 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3045), p_out);
    panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3044, $tmp3046);
    panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3047, &$s3048);
    panda$core$String* $tmp3050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, loopEnd3040);
    panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3050, &$s3051);
    (($fn3053) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3052);
    panda$core$Object* $tmp3054 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3054), p_out);
    panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3055, loopStart3038);
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
    (($fn3059) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3058);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3040, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3066;
    panda$core$String* loopEnd3068;
    panda$core$Bit $tmp3060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp3060.value);
    panda$core$Int64 $tmp3061 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3061, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3062.value);
    panda$core$Object* $tmp3063 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3064 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3065 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3063)->type, $tmp3064);
    PANDA_ASSERT($tmp3065.value);
    panda$core$String* $tmp3067 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3066 = $tmp3067;
    panda$core$String* $tmp3069 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3068 = $tmp3069;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3070 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3070->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3070->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3070, ((panda$core$String*) p_d->payload), loopEnd3068, loopStart3066);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3070));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3066, p_out);
    panda$core$Object* $tmp3072 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3072), p_out);
    panda$core$Object* $tmp3074 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3075 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3074), p_out);
    panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3073, $tmp3075);
    panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3076, &$s3077);
    panda$core$String* $tmp3079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3078, loopStart3066);
    panda$core$String* $tmp3081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3079, &$s3080);
    (($fn3082) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3081);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3068, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3086;
    panda$core$String* loopEnd3088;
    panda$core$Bit $tmp3083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3083.value);
    panda$core$Int64 $tmp3084 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3084, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3085.value);
    panda$core$String* $tmp3087 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3086 = $tmp3087;
    panda$core$String* $tmp3089 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3088 = $tmp3089;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3090 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3090->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3090->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3090, ((panda$core$String*) p_l->payload), loopEnd3088, loopStart3086);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3090));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3086, p_out);
    (($fn3093) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3092);
    panda$core$Object* $tmp3094 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3094), p_out);
    (($fn3096) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3095);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3088, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3097;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3097 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3098 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3097->type);
            panda$core$String* $tmp3099 = panda$core$String$convert$R$panda$core$String($tmp3098);
            panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
            panda$core$String* $tmp3102 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3097);
            panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3101, $tmp3102);
            panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3103, &$s3104);
            (($fn3106) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3105);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3107 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3097);
                panda$core$String* $tmp3108 = panda$core$String$convert$R$panda$core$String($tmp3107);
                panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, &$s3109);
                panda$core$String* $tmp3111 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, $tmp3111);
                panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, &$s3113);
                (($fn3115) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3114);
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
    panda$collections$Iterator* decl$Iter3129;
    org$pandalanguage$pandac$IRNode* decl3141;
    panda$core$Bit $tmp3119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3118 = $tmp3119.value;
    if ($tmp3118) goto $l3120;
    panda$core$Bit $tmp3121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3118 = $tmp3121.value;
    $l3120:;
    panda$core$Bit $tmp3122 = { $tmp3118 };
    bool $tmp3117 = $tmp3122.value;
    if ($tmp3117) goto $l3123;
    panda$core$Bit $tmp3124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3117 = $tmp3124.value;
    $l3123:;
    panda$core$Bit $tmp3125 = { $tmp3117 };
    bool $tmp3116 = $tmp3125.value;
    if ($tmp3116) goto $l3126;
    panda$core$Bit $tmp3127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3116 = $tmp3127.value;
    $l3126:;
    panda$core$Bit $tmp3128 = { $tmp3116 };
    PANDA_ASSERT($tmp3128.value);
    {
        ITable* $tmp3130 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3130->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3130 = $tmp3130->next;
        }
        $fn3132 $tmp3131 = $tmp3130->methods[0];
        panda$collections$Iterator* $tmp3133 = $tmp3131(((panda$collections$Iterable*) p_v->children));
        decl$Iter3129 = $tmp3133;
        $l3134:;
        ITable* $tmp3136 = decl$Iter3129->$class->itable;
        while ($tmp3136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3136 = $tmp3136->next;
        }
        $fn3138 $tmp3137 = $tmp3136->methods[0];
        panda$core$Bit $tmp3139 = $tmp3137(decl$Iter3129);
        panda$core$Bit $tmp3140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3139);
        if (!$tmp3140.value) goto $l3135;
        {
            ITable* $tmp3142 = decl$Iter3129->$class->itable;
            while ($tmp3142->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3142 = $tmp3142->next;
            }
            $fn3144 $tmp3143 = $tmp3142->methods[1];
            panda$core$Object* $tmp3145 = $tmp3143(decl$Iter3129);
            decl3141 = ((org$pandalanguage$pandac$IRNode*) $tmp3145);
            panda$core$Bit $tmp3146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3141->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3146.value);
            panda$core$Int64 $tmp3147 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl3141->children);
            panda$core$Bit $tmp3148 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3147, ((panda$core$Int64) { 1 }));
            if ($tmp3148.value) {
            {
                panda$core$Object* $tmp3149 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3141->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3141->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3149), ((org$pandalanguage$pandac$IRNode*) $tmp3150), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3151 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3141->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3151), NULL, p_out);
            }
            }
        }
        goto $l3134;
        $l3135:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3155;
    panda$core$String* result3164;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3152 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3153 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3152, p_out);
            return $tmp3153;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3154 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3154;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3156 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3157 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3156), p_out);
            base3155 = $tmp3157;
            panda$core$String* $tmp3158 = panda$core$String$convert$R$panda$core$String(base3155);
            panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
            panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3162);
            return $tmp3163;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3165 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3166 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3165), p_out);
            result3164 = $tmp3166;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result3164));
            return result3164;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3170;
    panda$core$String* value3173;
    panda$core$String* t3174;
    panda$core$Int64 op3177;
    panda$core$String* right3179;
    panda$core$Bit $tmp3167 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3167.value);
    panda$core$Int64 $tmp3168 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3168, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3169.value);
    panda$core$Object* $tmp3171 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3172 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3171), p_out);
    lvalue3170 = $tmp3172;
    panda$core$Object* $tmp3175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3176 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3175)->type);
    t3174 = $tmp3176;
    op3177 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3177, ((panda$core$Int64) { 73 }));
    if ($tmp3178.value) {
    {
        panda$core$Object* $tmp3180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3181 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3180), p_out);
        right3179 = $tmp3181;
        value3173 = right3179;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3182 = panda$core$String$convert$R$panda$core$String(lvalue3170);
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, &$s3183);
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, value3173);
    panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, &$s3186);
    (($fn3188) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3187);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    bool $tmp3189 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3189) goto $l3190;
    panda$core$Int64 $tmp3191 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3192 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3191, ((panda$core$Int64) { 0 }));
    $tmp3189 = $tmp3192.value;
    $l3190:;
    panda$core$Bit $tmp3193 = { $tmp3189 };
    if ($tmp3193.value) {
    {
        panda$core$Int64 $tmp3194 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3194, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3195.value);
        panda$core$Object* $tmp3197 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3198 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3197), p_out);
        panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3196, $tmp3198);
        panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, &$s3200);
        (($fn3202) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3201);
    }
    }
    else {
    {
        (($fn3204) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3203);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3208;
    panda$core$Int64 $tmp3205 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3206 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3205, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3206.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3207 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3207);
    }
    }
    panda$core$Int64 $tmp3209 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3208, ((panda$core$Int64) { 0 }), $tmp3209, ((panda$core$Bit) { false }));
    int64_t $tmp3211 = $tmp3208.min.value;
    panda$core$Int64 i3210 = { $tmp3211 };
    int64_t $tmp3213 = $tmp3208.max.value;
    bool $tmp3214 = $tmp3208.inclusive.value;
    if ($tmp3214) goto $l3221; else goto $l3222;
    $l3221:;
    if ($tmp3211 <= $tmp3213) goto $l3215; else goto $l3217;
    $l3222:;
    if ($tmp3211 < $tmp3213) goto $l3215; else goto $l3217;
    $l3215:;
    {
        panda$core$Object* $tmp3223 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3210);
        panda$core$Bit $tmp3227;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3223)->loopLabel != NULL }).value) goto $l3224; else goto $l3225;
        $l3224:;
        panda$core$Bit $tmp3228 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3223)->loopLabel, p_name);
        $tmp3227 = $tmp3228;
        goto $l3226;
        $l3225:;
        $tmp3227 = ((panda$core$Bit) { false });
        goto $l3226;
        $l3226:;
        if ($tmp3227.value) {
        {
            panda$core$Object* $tmp3229 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3210);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3229);
        }
        }
    }
    $l3218:;
    int64_t $tmp3231 = $tmp3213 - i3210.value;
    if ($tmp3214) goto $l3232; else goto $l3233;
    $l3232:;
    if ($tmp3231 >= 1) goto $l3230; else goto $l3217;
    $l3233:;
    if ($tmp3231 > 1) goto $l3230; else goto $l3217;
    $l3230:;
    i3210.value += 1;
    goto $l3215;
    $l3217:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3236;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3237 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3236 = $tmp3237;
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3238, desc3236->breakLabel);
    panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, &$s3240);
    (($fn3242) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3241);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3243;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3244 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3243 = $tmp3244;
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3245, desc3243->continueLabel);
    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, &$s3247);
    (($fn3249) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3248);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3250.value);
    panda$core$Int64 $tmp3252 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3252, ((panda$core$Int64) { 1 }));
    bool $tmp3251 = $tmp3253.value;
    if ($tmp3251) goto $l3254;
    panda$core$Int64 $tmp3255 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3255, ((panda$core$Int64) { 2 }));
    $tmp3251 = $tmp3256.value;
    $l3254:;
    panda$core$Bit $tmp3257 = { $tmp3251 };
    PANDA_ASSERT($tmp3257.value);
    panda$core$Object* $tmp3259 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3260 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3259), p_out);
    panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3258, $tmp3260);
    panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, &$s3262);
    (($fn3264) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3263);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3273;
    org$pandalanguage$pandac$IRNode* w3288;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3291;
    panda$core$Object* $tmp3266 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3267 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3266), p_out);
    panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3265, $tmp3267);
    panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, &$s3269);
    (($fn3271) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3270);
    panda$core$Int64 $tmp3272 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3272;
    panda$core$Int64 $tmp3274 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3273, ((panda$core$Int64) { 1 }), $tmp3274, ((panda$core$Bit) { false }));
    int64_t $tmp3276 = $tmp3273.min.value;
    panda$core$Int64 i3275 = { $tmp3276 };
    int64_t $tmp3278 = $tmp3273.max.value;
    bool $tmp3279 = $tmp3273.inclusive.value;
    if ($tmp3279) goto $l3286; else goto $l3287;
    $l3286:;
    if ($tmp3276 <= $tmp3278) goto $l3280; else goto $l3282;
    $l3287:;
    if ($tmp3276 < $tmp3278) goto $l3280; else goto $l3282;
    $l3280:;
    {
        panda$core$Object* $tmp3289 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3275);
        w3288 = ((org$pandalanguage$pandac$IRNode*) $tmp3289);
        panda$core$Bit $tmp3290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3288->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3290.value) {
        {
            panda$core$Int64 $tmp3292 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3288->children);
            panda$core$Int64 $tmp3293 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3292, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3291, ((panda$core$Int64) { 0 }), $tmp3293, ((panda$core$Bit) { false }));
            int64_t $tmp3295 = $tmp3291.min.value;
            panda$core$Int64 j3294 = { $tmp3295 };
            int64_t $tmp3297 = $tmp3291.max.value;
            bool $tmp3298 = $tmp3291.inclusive.value;
            if ($tmp3298) goto $l3305; else goto $l3306;
            $l3305:;
            if ($tmp3295 <= $tmp3297) goto $l3299; else goto $l3301;
            $l3306:;
            if ($tmp3295 < $tmp3297) goto $l3299; else goto $l3301;
            $l3299:;
            {
                panda$core$Object* $tmp3308 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3288->children, j3294);
                panda$core$UInt64 $tmp3309 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3308));
                panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3307, ((panda$core$Object*) wrap_panda$core$UInt64($tmp3309)));
                panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, &$s3311);
                (($fn3313) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3312);
            }
            $l3302:;
            int64_t $tmp3315 = $tmp3297 - j3294.value;
            if ($tmp3298) goto $l3316; else goto $l3317;
            $l3316:;
            if ($tmp3315 >= 1) goto $l3314; else goto $l3301;
            $l3317:;
            if ($tmp3315 > 1) goto $l3314; else goto $l3301;
            $l3314:;
            j3294.value += 1;
            goto $l3299;
            $l3301:;
            panda$core$Int64 $tmp3320 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3288->children);
            panda$core$Int64 $tmp3321 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3320, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3322 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3288->children, $tmp3321);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3322), p_out);
            (($fn3324) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3323);
        }
        }
        else {
        {
            panda$core$Bit $tmp3325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3288->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3325.value);
            panda$core$Int64 $tmp3326 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3288->children);
            panda$core$Bit $tmp3327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3326, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3327.value);
            (($fn3329) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3328);
            panda$core$Object* $tmp3330 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3288->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3330), p_out);
        }
        }
    }
    $l3283:;
    int64_t $tmp3332 = $tmp3278 - i3275.value;
    if ($tmp3279) goto $l3333; else goto $l3334;
    $l3333:;
    if ($tmp3332 >= 1) goto $l3331; else goto $l3282;
    $l3334:;
    if ($tmp3332 > 1) goto $l3331; else goto $l3282;
    $l3331:;
    i3275.value += 1;
    goto $l3280;
    $l3282:;
    panda$core$Int64 $tmp3337 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3337;
    (($fn3339) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3338);
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
    panda$core$String* result3340;
    org$pandalanguage$pandac$Type* $tmp3341 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3342 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3341);
    result3340 = $tmp3342;
    panda$core$Bit $tmp3344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3343 = $tmp3344.value;
    if (!$tmp3343) goto $l3345;
    panda$core$Bit $tmp3347 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3340, &$s3346);
    panda$core$Bit $tmp3348 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3347);
    $tmp3343 = $tmp3348.value;
    $l3345:;
    panda$core$Bit $tmp3349 = { $tmp3343 };
    if ($tmp3349.value) {
    {
        panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3340, &$s3350);
        return $tmp3351;
    }
    }
    return result3340;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3363;
    panda$collections$Iterator* p$Iter3373;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3385;
    panda$io$MemoryOutputStream* bodyBuffer3407;
    panda$io$IndentedOutputStream* indentedBody3410;
    panda$collections$Iterator* s$Iter3413;
    org$pandalanguage$pandac$IRNode* s3425;
    panda$core$Object* $tmp3352 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3352)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3353;
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3354 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3355 = panda$core$String$convert$R$panda$core$String($tmp3354);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3355, &$s3356);
    panda$core$String* $tmp3358 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, $tmp3358);
    panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, &$s3360);
    (($fn3362) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3361);
    separator3363 = &$s3364;
    panda$core$Bit $tmp3365 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3366 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3365);
    if ($tmp3366.value) {
    {
        panda$core$String* $tmp3367 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3368 = panda$core$String$convert$R$panda$core$String($tmp3367);
        panda$core$String* $tmp3370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3368, &$s3369);
        (($fn3371) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3370);
        separator3363 = &$s3372;
    }
    }
    {
        ITable* $tmp3374 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3374->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3374 = $tmp3374->next;
        }
        $fn3376 $tmp3375 = $tmp3374->methods[0];
        panda$collections$Iterator* $tmp3377 = $tmp3375(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3373 = $tmp3377;
        $l3378:;
        ITable* $tmp3380 = p$Iter3373->$class->itable;
        while ($tmp3380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3380 = $tmp3380->next;
        }
        $fn3382 $tmp3381 = $tmp3380->methods[0];
        panda$core$Bit $tmp3383 = $tmp3381(p$Iter3373);
        panda$core$Bit $tmp3384 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3383);
        if (!$tmp3384.value) goto $l3379;
        {
            ITable* $tmp3386 = p$Iter3373->$class->itable;
            while ($tmp3386->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3386 = $tmp3386->next;
            }
            $fn3388 $tmp3387 = $tmp3386->methods[1];
            panda$core$Object* $tmp3389 = $tmp3387(p$Iter3373);
            p3385 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3389);
            panda$core$String* $tmp3390 = panda$core$String$convert$R$panda$core$String(separator3363);
            panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
            panda$core$String* $tmp3393 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3385->type);
            panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3392, $tmp3393);
            panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
            panda$core$String* $tmp3397 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3385->name);
            panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, $tmp3397);
            panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, &$s3399);
            (($fn3401) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3400);
            separator3363 = &$s3402;
        }
        goto $l3378;
        $l3379:;
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
    panda$io$IndentedOutputStream* $tmp3411 = (panda$io$IndentedOutputStream*) malloc(56);
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
    panda$core$String* $tmp3430 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3431) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3430);
    panda$core$String* $tmp3432 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3407);
    (($fn3433) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3432);
    panda$core$Int64 $tmp3434 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3434;
    (($fn3436) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3435);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3437;
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
    panda$io$File* $tmp3439 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3438);
    path3437 = $tmp3439;
    panda$io$File* $tmp3440 = panda$io$File$parent$R$panda$io$File$Q(path3437);
    panda$io$File$createDirectories($tmp3440);
    panda$io$IndentedOutputStream* $tmp3441 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3441->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3441->refCount.value = 1;
    panda$io$OutputStream* $tmp3443 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3437);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3441, $tmp3443);
    self->out = $tmp3441;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3444 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3444.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3445 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3446 = panda$core$String$convert$R$panda$core$String($tmp3445);
        panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3446, &$s3447);
        panda$core$String* $tmp3449 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3448, $tmp3449);
        panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3450, &$s3451);
        panda$core$String* $tmp3453 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3454 = panda$core$String$convert$R$panda$core$String($tmp3453);
        panda$core$String* $tmp3456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, &$s3455);
        panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, $tmp3456);
        (($fn3458) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3457);
        panda$core$String* $tmp3460 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3459, $tmp3460);
        panda$core$String* $tmp3463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3461, &$s3462);
        panda$core$String* $tmp3465 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3464, $tmp3465);
        panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3467);
        org$pandalanguage$pandac$Type* $tmp3469 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$Int64 $tmp3470 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3469);
        panda$core$String* $tmp3471 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3468, ((panda$core$Object*) wrap_panda$core$Int64($tmp3470)));
        panda$core$String* $tmp3473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3471, &$s3472);
        panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, $tmp3473);
        (($fn3475) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3474);
        panda$core$String* $tmp3478 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3477, $tmp3478);
        panda$core$String* $tmp3481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3479, &$s3480);
        panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3476, $tmp3481);
        (($fn3483) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3482);
        (($fn3485) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3484);
        (($fn3487) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3486);
        (($fn3489) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3488);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3490 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3491) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3490);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3492 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3493) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3492);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3494 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3495) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3494);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3496 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3497) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3496);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3498 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3499) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3498);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3500) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

