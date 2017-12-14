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
#include "panda/core/UInt32.h"
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
typedef void (*$fn1943)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1950)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1952)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn1959)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1961)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn1966)(panda$collections$CollectionView*);
typedef void (*$fn1975)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2106)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2115)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2161)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2166)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2172)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2178)(panda$collections$Iterator*);
typedef void (*$fn2182)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2203)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2242)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2350)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2354)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2360)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2366)(panda$collections$Iterator*);
typedef void (*$fn2368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2369)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2391)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2398)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2401)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2437)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2444)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2476)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2498)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2540)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2554)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2585)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2601)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2631)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2636)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2672)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2679)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2697)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2711)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2735)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2783)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2795)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2811)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2825)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2839)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2855)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2869)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2885)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2902)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2917)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2933)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2947)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2978)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2994)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3008)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3031)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3036)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3062)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3102)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3105)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3115)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3124)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3141)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3153)(panda$collections$Iterator*);
typedef void (*$fn3197)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3213)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3251)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3333)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3348)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3380)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3385)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3391)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3397)(panda$collections$Iterator*);
typedef void (*$fn3410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3413)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3425)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3431)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3437)(panda$collections$Iterator*);
typedef void (*$fn3440)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3442)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3445)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3484)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3492)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3494)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3496)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3498)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3500)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3504)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3506)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3508)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3509)(panda$core$Object*);

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
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, -5723231573477557210, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, 19635, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, 18745352609287436, NULL };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, -5723245373239515055, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, 234638522232510, NULL };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, 318867264039102424, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, 155645120159214, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, -5659480974997351189, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, 19653, NULL };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 20716344924, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, 1541204091645718446, NULL };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 2091321, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, 14283, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 19485, NULL };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, 157293860332681, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 229298558774239, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, 8088200864683738024, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, 1604554669253060894, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 2238861741248, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, 1361108, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, -8202984937925717763, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1369417, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 225, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, 9111895932257667285, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1369417, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, 14279, NULL };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, 151084686244311, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, 14383, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, -2797487400017487744, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, 14321312880043979, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 147, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 14808, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, 15272754413107790, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, 7728168270859090233, NULL };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, 137624963, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, 3502995608209124108, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 146641629, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, 1573697403055851823, NULL };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, 157293860332629, NULL };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, 21448182697504497, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, 146641629, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1369399, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 142345674, NULL };
static panda$core$String $s1838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, 137655566, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, 14374, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, 223950062312973, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, -2435628749655888173, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, 146480100229230, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, 5666803292027080506, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x30", 2, 14895, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, 2026475985823268269, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, 19613, NULL };
static panda$core$String $s1944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, 1381611, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x4E\x55\x4C\x4C\x20\x7D\x3B", 9, 1573656756204980508, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 223586327, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 15878335074876521, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, 14324797439511602, NULL };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1369399, NULL };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 15878335074876521, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, 14295074875294774, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1369399, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 185298716, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s2185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 21242756259, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 142345674, NULL };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1604554669253151784, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, 2134398342781, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x69\x6E\x2E\x76\x61\x6C\x75\x65\x3B", 11, -3956212002962864875, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1369417, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x61\x78\x2E\x76\x61\x6C\x75\x65\x3B", 11, -4041768404061004273, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, -5967430147646080757, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 137648286, NULL };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1362825, NULL };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1361310, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 157293860332647, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20\x31\x3B", 12, -4476855678279854640, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, 3588086193908855763, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1369417, NULL };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, 5794120589201096528, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, -1565217378717073995, NULL };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, -5967430147646080757, NULL };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, 13904243334, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 137648286, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1362825, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 137668688, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1363027, NULL };
static panda$core$String $s2877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1361310, NULL };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 157293860332647, NULL };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 137668688, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1363027, NULL };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, 13904537533, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, 137665772, NULL };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s3066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, 1197661341919403142, NULL };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 14808, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 229300545255605, NULL };
static panda$core$String $s3209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, 229300545255632, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4E\x44\x41\x5F\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1604554669253151784, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x3B", 6, 2103477946177, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6C\x74\x3A", 8, 21658216358330300, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 13959559259, NULL };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1368140, NULL };
static panda$core$String $s3408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s3447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, 14946, NULL };
static panda$core$String $s3456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, -9085029162737573691, NULL };
static panda$core$String $s3460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, 14382547864528555, NULL };
static panda$core$String $s3468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, 137359729, NULL };
static panda$core$String $s3471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, 581419489117905124, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, 6121584528548524069, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s3485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, -9137501668294411695, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, -3925411815915941145, NULL };
static panda$core$String $s3493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, 7577815125550662002, NULL };
static panda$core$String $s3495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, -6041374821165614789, NULL };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
    panda$collections$Iterator* raw$Iter1922;
    panda$core$Char8 raw1935;
    panda$core$UInt8 c1940;
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
        raw$Iter1922 = $tmp1927;
        $l1928:;
        ITable* $tmp1930 = raw$Iter1922->$class->itable;
        while ($tmp1930->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1930 = $tmp1930->next;
        }
        $fn1932 $tmp1931 = $tmp1930->methods[0];
        panda$core$Bit $tmp1933 = $tmp1931(raw$Iter1922);
        panda$core$Bit $tmp1934 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1933);
        if (!$tmp1934.value) goto $l1929;
        {
            ITable* $tmp1936 = raw$Iter1922->$class->itable;
            while ($tmp1936->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1936 = $tmp1936->next;
            }
            $fn1938 $tmp1937 = $tmp1936->methods[1];
            panda$core$Object* $tmp1939 = $tmp1937(raw$Iter1922);
            raw1935 = ((panda$core$Char8$wrapper*) $tmp1939)->value;
            panda$core$UInt8 $tmp1941 = panda$core$Char8$convert$R$panda$core$UInt8(raw1935);
            c1940 = $tmp1941;
            (($fn1943) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s1942);
            panda$collections$ListView* $tmp1945 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1944);
            panda$core$UInt32 $tmp1946 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c1940, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1947 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1946);
            ITable* $tmp1948 = $tmp1945->$class->itable;
            while ($tmp1948->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1948 = $tmp1948->next;
            }
            $fn1950 $tmp1949 = $tmp1948->methods[0];
            panda$core$Object* $tmp1951 = $tmp1949($tmp1945, $tmp1947);
            (($fn1952) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1951)->value)));
            panda$collections$ListView* $tmp1954 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1953);
            panda$core$UInt32 $tmp1955 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c1940, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1956 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1955);
            ITable* $tmp1957 = $tmp1954->$class->itable;
            while ($tmp1957->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1957 = $tmp1957->next;
            }
            $fn1959 $tmp1958 = $tmp1957->methods[0];
            panda$core$Object* $tmp1960 = $tmp1958($tmp1954, $tmp1956);
            (($fn1961) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1960)->value)));
        }
        goto $l1928;
        $l1929:;
    }
    panda$collections$ListView* $tmp1963 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp1964 = ((panda$collections$CollectionView*) $tmp1963)->$class->itable;
    while ($tmp1964->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1964 = $tmp1964->next;
    }
    $fn1966 $tmp1965 = $tmp1964->methods[0];
    panda$core$Int64 $tmp1967 = $tmp1965(((panda$collections$CollectionView*) $tmp1963));
    panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1962, ((panda$core$Object*) wrap_panda$core$Int64($tmp1967)));
    panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1968, &$s1969);
    panda$core$Int64 $tmp1971 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp1972 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1970, ((panda$core$Object*) wrap_panda$core$Int64($tmp1971)));
    panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1972, &$s1973);
    (($fn1975) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp1974);
    panda$core$String* $tmp1977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1976, result1909);
    panda$core$String* $tmp1979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1977, &$s1978);
    return $tmp1979;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s1980;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1982 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1981, $tmp1982);
    panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, &$s1984);
    return $tmp1985;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value1989;
    org$pandalanguage$pandac$ClassDecl* cl1992;
    panda$core$String* bit1995;
    panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp1986.value);
    panda$core$Int64 $tmp1987 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp1988 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1987, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1988.value);
    panda$core$Object* $tmp1990 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1991 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1990), p_out);
    value1989 = $tmp1991;
    panda$core$Object* $tmp1993 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1994 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1993)->type);
    cl1992 = $tmp1994;
    panda$core$Bit $tmp1996 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1992);
    if ($tmp1996.value) {
    {
        panda$core$Object* $tmp1997 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1998 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1997)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1998.value) {
        {
            bit1995 = &$s1999;
        }
        }
        else {
        {
            panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2000, value1989);
            panda$core$String* $tmp2003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2001, &$s2002);
            bit1995 = $tmp2003;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2004 = panda$core$String$convert$R$panda$core$String(value1989);
        panda$core$String* $tmp2006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2004, &$s2005);
        bit1995 = $tmp2006;
    }
    }
    panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2007, bit1995);
    panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2009);
    return $tmp2010;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2014;
    org$pandalanguage$pandac$ClassDecl* cl2017;
    panda$core$String* bit2020;
    panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2011.value);
    panda$core$Int64 $tmp2012 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2012, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2013.value);
    panda$core$Object* $tmp2015 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2016 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2015), p_out);
    value2014 = $tmp2016;
    panda$core$Object* $tmp2018 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2019 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2018)->type);
    cl2017 = $tmp2019;
    panda$core$Bit $tmp2021 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2017);
    if ($tmp2021.value) {
    {
        panda$core$Object* $tmp2022 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2023 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2022)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2023.value) {
        {
            bit2020 = &$s2024;
        }
        }
        else {
        {
            panda$core$String* $tmp2025 = panda$core$String$convert$R$panda$core$String(value2014);
            panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, &$s2026);
            bit2020 = $tmp2027;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2028 = panda$core$String$convert$R$panda$core$String(value2014);
        panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, &$s2029);
        bit2020 = $tmp2030;
    }
    }
    panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2031, bit2020);
    panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, &$s2033);
    return $tmp2034;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2036;
    panda$core$Bit $tmp2035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2035.value);
    panda$core$Object* $tmp2037 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2038 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2037));
    cl2036 = $tmp2038;
    PANDA_ASSERT(((panda$core$Bit) { cl2036 != NULL }).value);
    panda$core$Bit $tmp2039 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2036);
    if ($tmp2039.value) {
    {
        panda$core$String* $tmp2041 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2040, $tmp2041);
        panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2042, &$s2043);
        return $tmp2044;
    }
    }
    else {
    {
        return &$s2045;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2049;
    panda$core$String* result2052;
    panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2046.value);
    panda$core$Int64 $tmp2047 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2047, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2048.value);
    panda$core$Object* $tmp2050 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2051 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2050), p_out);
    base2049 = $tmp2051;
    panda$core$String* $tmp2053 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2052 = $tmp2053;
    panda$core$Int64 $tmp2054 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2054.value) {
        case 52:
        {
            panda$core$String* $tmp2056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2055, base2049);
            panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2056, &$s2057);
            return $tmp2058;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2059, base2049);
            panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, &$s2061);
            return $tmp2062;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2063, base2049);
            panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, &$s2065);
            return $tmp2066;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2076;
    panda$core$String* trueLabel2079;
    panda$core$String* falseLabel2081;
    panda$core$String* merge2083;
    panda$core$String* result2085;
    panda$core$Bit $tmp2067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->kind, ((panda$core$Int64) { 1044 }));
    PANDA_ASSERT($tmp2067.value);
    panda$core$Int64 $tmp2068 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
    panda$core$Bit $tmp2069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2068, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2069.value);
    panda$core$Object* $tmp2070 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2071 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2072 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2070)->type, $tmp2071);
    PANDA_ASSERT($tmp2072.value);
    panda$core$Object* $tmp2073 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2074 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2075 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2073)->type, ((org$pandalanguage$pandac$IRNode*) $tmp2074)->type);
    PANDA_ASSERT($tmp2075.value);
    panda$core$Object* $tmp2077 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2078 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2077), p_out);
    test2076 = $tmp2078;
    panda$core$String* $tmp2080 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2079 = $tmp2080;
    panda$core$String* $tmp2082 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2081 = $tmp2082;
    panda$core$String* $tmp2084 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2083 = $tmp2084;
    panda$core$String* $tmp2086 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2085 = $tmp2086;
    panda$core$Object* $tmp2087 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2088 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2087)->type);
    panda$core$String* $tmp2089 = panda$core$String$convert$R$panda$core$String($tmp2088);
    panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, &$s2090);
    panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, result2085);
    panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, &$s2093);
    (($fn2095) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2094);
    panda$core$String* $tmp2097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2096, test2076);
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2097, &$s2098);
    panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, trueLabel2079);
    panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2100, &$s2101);
    panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, falseLabel2081);
    panda$core$String* $tmp2105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, &$s2104);
    (($fn2106) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2105);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2079, p_out);
    panda$core$String* $tmp2107 = panda$core$String$convert$R$panda$core$String(result2085);
    panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2107, &$s2108);
    panda$core$Object* $tmp2110 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2111 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2110), p_out);
    panda$core$String* $tmp2112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2109, $tmp2111);
    panda$core$String* $tmp2114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2112, &$s2113);
    (($fn2115) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2114);
    panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2116, merge2083);
    panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, &$s2118);
    (($fn2120) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2119);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2081, p_out);
    panda$core$String* $tmp2121 = panda$core$String$convert$R$panda$core$String(result2085);
    panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, &$s2122);
    panda$core$Object* $tmp2124 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp2125 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2124), p_out);
    panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2123, $tmp2125);
    panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2126, &$s2127);
    (($fn2129) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2128);
    panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2130, merge2083);
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2131, &$s2132);
    (($fn2134) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2133);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2083, p_out);
    return result2085;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2148;
    panda$core$String* result2151;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2135 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2135;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2136 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2136;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2137 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2137;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2138 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2138;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2139 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2139;
        }
        break;
        case 1045:
        {
            panda$core$String* $tmp2140 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, ((panda$io$OutputStream*) p_out));
            return $tmp2140;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2141 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2141;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2142 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2142;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2143 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2143;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2144 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2144;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2145 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2145;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2146 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2146;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2147 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2147;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2149 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2150 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2149), p_out);
            value2148 = $tmp2150;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2148));
            return value2148;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp2152 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2151 = ((panda$core$String*) $tmp2152);
            PANDA_ASSERT(((panda$core$Bit) { result2151 != NULL }).value);
            return result2151;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2153 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2153;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2154 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2154;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2155 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2155;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2156 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2156;
        }
        break;
        case 1044:
        {
            panda$core$String* $tmp2157 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2157;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2158 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2158;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2163;
    org$pandalanguage$pandac$IRNode* s2175;
    panda$core$Bit $tmp2159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2159.value);
    (($fn2161) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2160);
    panda$core$Int64 $tmp2162 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2162;
    {
        ITable* $tmp2164 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2164->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2164 = $tmp2164->next;
        }
        $fn2166 $tmp2165 = $tmp2164->methods[0];
        panda$collections$Iterator* $tmp2167 = $tmp2165(((panda$collections$Iterable*) p_block->children));
        s$Iter2163 = $tmp2167;
        $l2168:;
        ITable* $tmp2170 = s$Iter2163->$class->itable;
        while ($tmp2170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2170 = $tmp2170->next;
        }
        $fn2172 $tmp2171 = $tmp2170->methods[0];
        panda$core$Bit $tmp2173 = $tmp2171(s$Iter2163);
        panda$core$Bit $tmp2174 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2173);
        if (!$tmp2174.value) goto $l2169;
        {
            ITable* $tmp2176 = s$Iter2163->$class->itable;
            while ($tmp2176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2176 = $tmp2176->next;
            }
            $fn2178 $tmp2177 = $tmp2176->methods[1];
            panda$core$Object* $tmp2179 = $tmp2177(s$Iter2163);
            s2175 = ((org$pandalanguage$pandac$IRNode*) $tmp2179);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2175, p_out);
        }
        goto $l2168;
        $l2169:;
    }
    panda$core$Int64 $tmp2180 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2180;
    (($fn2182) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2181);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2183;
    panda$core$String* $match$1320_92184;
    panda$core$String* ptr2189;
    panda$core$String* arg2192;
    panda$core$String* base2212;
    panda$core$String* index2215;
    panda$core$String* value2218;
    m2183 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1320_92184 = ((org$pandalanguage$pandac$Symbol*) m2183->value)->name;
        panda$core$Bit $tmp2186 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1320_92184, &$s2185);
        if ($tmp2186.value) {
        {
            panda$core$Int64 $tmp2187 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2187, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2188.value);
            panda$core$Object* $tmp2190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2191 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2190), p_out);
            ptr2189 = $tmp2191;
            panda$core$Object* $tmp2193 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2194 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2193));
            panda$core$String* $tmp2195 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2194, p_out);
            arg2192 = $tmp2195;
            panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2196, arg2192);
            panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2198);
            panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, ptr2189);
            panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2200, &$s2201);
            (($fn2203) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2202);
        }
        }
        else {
        panda$core$Bit $tmp2205 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1320_92184, &$s2204);
        if ($tmp2205.value) {
        {
            panda$core$Int64 $tmp2206 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2206, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2207.value);
            panda$core$Object* $tmp2208 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2209 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2208));
            panda$core$Int64 $tmp2210 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2209->type->subtypes);
            panda$core$Bit $tmp2211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2210, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2211.value);
            panda$core$Object* $tmp2213 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2214 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2213), p_out);
            base2212 = $tmp2214;
            panda$core$Object* $tmp2216 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2217 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2216), p_out);
            index2215 = $tmp2217;
            panda$core$Object* $tmp2219 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2220 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2219));
            panda$core$String* $tmp2221 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2220, p_out);
            value2218 = $tmp2221;
            panda$core$String* $tmp2222 = panda$core$String$convert$R$panda$core$String(base2212);
            panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, &$s2223);
            panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2224, index2215);
            panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2225, &$s2226);
            panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, value2218);
            panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2228, &$s2229);
            (($fn2231) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2230);
        }
        }
        else {
        panda$core$Bit $tmp2233 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1320_92184, &$s2232);
        if ($tmp2233.value) {
        {
            panda$core$Int64 $tmp2234 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2234, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2235.value);
            panda$core$Object* $tmp2237 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2238 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2237), p_out);
            panda$core$String* $tmp2239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2236, $tmp2238);
            panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, &$s2240);
            (($fn2242) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2241);
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
    org$pandalanguage$pandac$MethodDecl* m2244;
    org$pandalanguage$pandac$Type* actualMethodType2248;
    panda$core$String* actualResultType2249;
    panda$core$Bit isSuper2250;
    panda$collections$Array* args2270;
    panda$core$Int64 offset2273;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2278;
    panda$core$String* arg2293;
    panda$core$String* refTarget2314;
    panda$core$String* methodRef2318;
    panda$core$String* separator2320;
    panda$core$String* indirectVar2324;
    panda$core$String* resultType2327;
    panda$collections$Iterator* a$Iter2351;
    panda$core$String* a2363;
    panda$core$Bit $tmp2243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2243.value);
    m2244 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2246 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2244->owner)->name, &$s2245);
    if ($tmp2246.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2247 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2244->owner);
    if ($tmp2247.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2244);
    }
    }
    panda$core$Int64 $tmp2252 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2253 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2252, ((panda$core$Int64) { 1 }));
    bool $tmp2251 = $tmp2253.value;
    if (!$tmp2251) goto $l2254;
    panda$core$Object* $tmp2255 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2255)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2251 = $tmp2256.value;
    $l2254:;
    panda$core$Bit $tmp2257 = { $tmp2251 };
    isSuper2250 = $tmp2257;
    panda$core$Bit $tmp2259 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2250);
    bool $tmp2258 = $tmp2259.value;
    if (!$tmp2258) goto $l2260;
    panda$core$Bit $tmp2261 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2244);
    $tmp2258 = $tmp2261.value;
    $l2260:;
    panda$core$Bit $tmp2262 = { $tmp2258 };
    if ($tmp2262.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2263 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2244);
        actualMethodType2248 = $tmp2263;
        panda$core$Int64 $tmp2264 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2248->subtypes);
        panda$core$Int64 $tmp2265 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2264, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2266 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2248->subtypes, $tmp2265);
        panda$core$String* $tmp2267 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2266));
        actualResultType2249 = $tmp2267;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2268 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2244);
        actualMethodType2248 = $tmp2268;
        panda$core$String* $tmp2269 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2249 = $tmp2269;
    }
    }
    panda$collections$Array* $tmp2271 = (panda$collections$Array*) malloc(40);
    $tmp2271->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2271->refCount.value = 1;
    panda$collections$Array$init($tmp2271);
    args2270 = $tmp2271;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2270, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2274 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2275 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2248->subtypes);
    panda$core$Int64 $tmp2276 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2274, $tmp2275);
    panda$core$Int64 $tmp2277 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2276, ((panda$core$Int64) { 1 }));
    offset2273 = $tmp2277;
    panda$core$Int64 $tmp2279 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2278, ((panda$core$Int64) { 0 }), $tmp2279, ((panda$core$Bit) { false }));
    int64_t $tmp2281 = $tmp2278.min.value;
    panda$core$Int64 i2280 = { $tmp2281 };
    int64_t $tmp2283 = $tmp2278.max.value;
    bool $tmp2284 = $tmp2278.inclusive.value;
    if ($tmp2284) goto $l2291; else goto $l2292;
    $l2291:;
    if ($tmp2281 <= $tmp2283) goto $l2285; else goto $l2287;
    $l2292:;
    if ($tmp2281 < $tmp2283) goto $l2285; else goto $l2287;
    $l2285:;
    {
        panda$core$Object* $tmp2294 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2280);
        panda$core$String* $tmp2295 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2294), p_out);
        arg2293 = $tmp2295;
        panda$core$Bit $tmp2297 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2280, offset2273);
        bool $tmp2296 = $tmp2297.value;
        if (!$tmp2296) goto $l2298;
        panda$core$Int64 $tmp2299 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2280, offset2273);
        panda$core$Object* $tmp2300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2248->subtypes, $tmp2299);
        panda$core$Object* $tmp2301 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2280);
        panda$core$Bit $tmp2302 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2300), ((org$pandalanguage$pandac$IRNode*) $tmp2301)->type);
        $tmp2296 = $tmp2302.value;
        $l2298:;
        panda$core$Bit $tmp2303 = { $tmp2296 };
        if ($tmp2303.value) {
        {
            panda$core$Object* $tmp2304 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2280);
            panda$core$Int64 $tmp2305 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2280, offset2273);
            panda$core$Object* $tmp2306 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2248->subtypes, $tmp2305);
            panda$core$String* $tmp2307 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2293, ((org$pandalanguage$pandac$IRNode*) $tmp2304)->type, ((org$pandalanguage$pandac$Type*) $tmp2306), p_out);
            arg2293 = $tmp2307;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2270, ((panda$core$Object*) arg2293));
    }
    $l2288:;
    int64_t $tmp2309 = $tmp2283 - i2280.value;
    if ($tmp2284) goto $l2310; else goto $l2311;
    $l2310:;
    if ($tmp2309 >= 1) goto $l2308; else goto $l2287;
    $l2311:;
    if ($tmp2309 > 1) goto $l2308; else goto $l2287;
    $l2308:;
    i2280.value += 1;
    goto $l2285;
    $l2287:;
    panda$core$Int64 $tmp2315 = panda$collections$Array$get_count$R$panda$core$Int64(args2270);
    panda$core$Bit $tmp2316 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2315, ((panda$core$Int64) { 0 }));
    if ($tmp2316.value) {
    {
        panda$core$Object* $tmp2317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2270, ((panda$core$Int64) { 0 }));
        refTarget2314 = ((panda$core$String*) $tmp2317);
    }
    }
    else {
    {
        refTarget2314 = NULL;
    }
    }
    panda$core$String* $tmp2319 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2314, m2244, isSuper2250, p_out);
    methodRef2318 = $tmp2319;
    separator2320 = &$s2321;
    panda$core$Bit $tmp2322 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2244);
    if ($tmp2322.value) {
    {
        panda$core$Int64 $tmp2323 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2323;
        panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2325, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2324 = $tmp2326;
        panda$core$String* $tmp2328 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2327 = $tmp2328;
        panda$core$String* $tmp2329 = panda$core$String$convert$R$panda$core$String(resultType2327);
        panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, &$s2330);
        panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2331, indirectVar2324);
        panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, &$s2333);
        (($fn2335) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2334);
        panda$core$String* $tmp2336 = panda$core$String$convert$R$panda$core$String(methodRef2318);
        panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2336, &$s2337);
        panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, resultType2327);
        panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2340);
        panda$core$String* $tmp2342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, indirectVar2324);
        panda$core$String* $tmp2344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2342, &$s2343);
        (($fn2345) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2344);
        separator2320 = &$s2346;
    }
    }
    else {
    {
        panda$core$String* $tmp2347 = panda$core$String$convert$R$panda$core$String(methodRef2318);
        panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2347, &$s2348);
        (($fn2350) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2349);
    }
    }
    {
        ITable* $tmp2352 = ((panda$collections$Iterable*) args2270)->$class->itable;
        while ($tmp2352->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2352 = $tmp2352->next;
        }
        $fn2354 $tmp2353 = $tmp2352->methods[0];
        panda$collections$Iterator* $tmp2355 = $tmp2353(((panda$collections$Iterable*) args2270));
        a$Iter2351 = $tmp2355;
        $l2356:;
        ITable* $tmp2358 = a$Iter2351->$class->itable;
        while ($tmp2358->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2358 = $tmp2358->next;
        }
        $fn2360 $tmp2359 = $tmp2358->methods[0];
        panda$core$Bit $tmp2361 = $tmp2359(a$Iter2351);
        panda$core$Bit $tmp2362 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2361);
        if (!$tmp2362.value) goto $l2357;
        {
            ITable* $tmp2364 = a$Iter2351->$class->itable;
            while ($tmp2364->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2364 = $tmp2364->next;
            }
            $fn2366 $tmp2365 = $tmp2364->methods[1];
            panda$core$Object* $tmp2367 = $tmp2365(a$Iter2351);
            a2363 = ((panda$core$String*) $tmp2367);
            (($fn2368) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2320);
            (($fn2369) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2363);
            separator2320 = &$s2370;
        }
        goto $l2356;
        $l2357:;
    }
    (($fn2372) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2371);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2384;
    panda$core$Bit $tmp2373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2373.value);
    panda$core$Int64 $tmp2375 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2375, ((panda$core$Int64) { 2 }));
    bool $tmp2374 = $tmp2376.value;
    if ($tmp2374) goto $l2377;
    panda$core$Int64 $tmp2378 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2378, ((panda$core$Int64) { 3 }));
    $tmp2374 = $tmp2379.value;
    $l2377:;
    panda$core$Bit $tmp2380 = { $tmp2374 };
    PANDA_ASSERT($tmp2380.value);
    panda$core$Object* $tmp2381 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2382 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2383 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2381)->type, $tmp2382);
    PANDA_ASSERT($tmp2383.value);
    panda$core$Object* $tmp2385 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2386 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2385), p_out);
    test2384 = $tmp2386;
    panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2387, test2384);
    panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, &$s2389);
    (($fn2391) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2390);
    panda$core$Object* $tmp2392 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2392), p_out);
    (($fn2394) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2393);
    panda$core$Int64 $tmp2395 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2395, ((panda$core$Int64) { 3 }));
    if ($tmp2396.value) {
    {
        (($fn2398) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2397);
        panda$core$Object* $tmp2399 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2399), p_out);
        (($fn2401) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2400);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2405;
    panda$core$String* range2416;
    org$pandalanguage$pandac$IRNode* block2419;
    org$pandalanguage$pandac$Type* t2421;
    panda$core$String* llt2424;
    panda$core$String* indexType2426;
    org$pandalanguage$pandac$ClassDecl* cl2432;
    org$pandalanguage$pandac$FieldDecl* field2440;
    panda$core$String* numberType2446;
    panda$core$String* index2449;
    panda$core$String* start2451;
    panda$core$String* indexValuePtr2463;
    panda$core$String* end2477;
    panda$core$String* inclusive2489;
    panda$core$String* loopStart2499;
    panda$core$String* loopBody2501;
    panda$core$String* loopEnd2503;
    panda$core$String* loopTest2505;
    panda$core$String* forwardEntry2509;
    panda$core$String* backwardEntry2511;
    panda$core$String* signPrefix2513;
    panda$core$String* forwardEntryInclusive2525;
    panda$core$String* forwardEntryExclusive2527;
    panda$core$String* loopInc2569;
    panda$core$String* forwardDelta2571;
    panda$core$String* forwardInclusiveLabel2586;
    panda$core$String* forwardExclusiveLabel2588;
    panda$core$String* forwardExclusiveTest2613;
    panda$core$String* inc2626;
    panda$core$Bit $tmp2402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2402.value);
    panda$core$Int64 $tmp2403 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2403, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2404.value);
    panda$core$Object* $tmp2406 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2405 = ((org$pandalanguage$pandac$IRNode*) $tmp2406);
    panda$core$Object* $tmp2407 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2407)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2408.value);
    panda$core$Object* $tmp2409 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2410 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2409)->type->subtypes);
    panda$core$Bit $tmp2411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2410, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2411.value);
    panda$core$Object* $tmp2412 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2413 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2412)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2415 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2413))->name, &$s2414);
    PANDA_ASSERT($tmp2415.value);
    panda$core$Object* $tmp2417 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2418 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2417), p_out);
    range2416 = $tmp2418;
    panda$core$Object* $tmp2420 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2419 = ((org$pandalanguage$pandac$IRNode*) $tmp2420);
    panda$core$Object* $tmp2422 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2423 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2422)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2421 = ((org$pandalanguage$pandac$Type*) $tmp2423);
    panda$core$String* $tmp2425 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2421);
    llt2424 = $tmp2425;
    panda$core$Bit $tmp2427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2421->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2427.value) {
    {
        panda$core$Int64 $tmp2428 = panda$collections$Array$get_count$R$panda$core$Int64(t2421->subtypes);
        panda$core$Bit $tmp2429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2428, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2429.value);
        panda$core$Object* $tmp2430 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2421->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2431 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2430));
        indexType2426 = $tmp2431;
    }
    }
    else {
    {
        indexType2426 = llt2424;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2433 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2421);
    cl2432 = $tmp2433;
    PANDA_ASSERT(((panda$core$Bit) { cl2432 != NULL }).value);
    panda$collections$ListView* $tmp2434 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2432);
    ITable* $tmp2435 = ((panda$collections$CollectionView*) $tmp2434)->$class->itable;
    while ($tmp2435->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2435 = $tmp2435->next;
    }
    $fn2437 $tmp2436 = $tmp2435->methods[0];
    panda$core$Int64 $tmp2438 = $tmp2436(((panda$collections$CollectionView*) $tmp2434));
    panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2438, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2439.value);
    panda$collections$ListView* $tmp2441 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2432);
    ITable* $tmp2442 = $tmp2441->$class->itable;
    while ($tmp2442->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2442 = $tmp2442->next;
    }
    $fn2444 $tmp2443 = $tmp2442->methods[0];
    panda$core$Object* $tmp2445 = $tmp2443($tmp2441, ((panda$core$Int64) { 0 }));
    field2440 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2445);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2440);
    panda$core$String* $tmp2447 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2440->type);
    numberType2446 = $tmp2447;
    panda$core$Bit $tmp2448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2405->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2448.value);
    panda$core$String* $tmp2450 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2405->payload));
    index2449 = $tmp2450;
    panda$core$String* $tmp2452 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2451 = $tmp2452;
    panda$core$String* $tmp2453 = panda$core$String$convert$R$panda$core$String(numberType2446);
    panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2453, &$s2454);
    panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, start2451);
    panda$core$String* $tmp2458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2456, &$s2457);
    panda$core$String* $tmp2459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2458, range2416);
    panda$core$String* $tmp2461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2459, &$s2460);
    (($fn2462) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2461);
    panda$core$String* $tmp2464 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2463 = $tmp2464;
    org$pandalanguage$pandac$Type* $tmp2465 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2432);
    panda$core$String* $tmp2466 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2465);
    panda$core$String* $tmp2467 = panda$core$String$convert$R$panda$core$String($tmp2466);
    panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
    panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, index2449);
    panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2471);
    panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, start2451);
    panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, &$s2474);
    (($fn2476) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2475);
    panda$core$String* $tmp2478 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2477 = $tmp2478;
    panda$core$String* $tmp2479 = panda$core$String$convert$R$panda$core$String(numberType2446);
    panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, &$s2480);
    panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, end2477);
    panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, &$s2483);
    panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2484, range2416);
    panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, &$s2486);
    (($fn2488) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2487);
    panda$core$String* $tmp2490 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2489 = $tmp2490;
    panda$core$String* $tmp2492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2491, inclusive2489);
    panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2492, &$s2493);
    panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2494, range2416);
    panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, &$s2496);
    (($fn2498) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2497);
    panda$core$String* $tmp2500 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2499 = $tmp2500;
    panda$core$String* $tmp2502 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2501 = $tmp2502;
    panda$core$String* $tmp2504 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2503 = $tmp2504;
    panda$core$String* $tmp2506 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2505 = $tmp2506;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2507 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2507->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2507->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2507, ((panda$core$String*) p_f->payload), loopEnd2503, loopTest2505);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2507));
    panda$core$String* $tmp2510 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2509 = $tmp2510;
    panda$core$String* $tmp2512 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2511 = $tmp2512;
    panda$core$Bit $tmp2515 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2421)->name, &$s2514);
    if ($tmp2515.value) {
    {
        signPrefix2513 = &$s2516;
    }
    }
    else {
    {
        panda$core$Bit $tmp2519 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2421)->name, &$s2518);
        bool $tmp2517 = $tmp2519.value;
        if ($tmp2517) goto $l2520;
        panda$core$Bit $tmp2522 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2421)->name, &$s2521);
        $tmp2517 = $tmp2522.value;
        $l2520:;
        panda$core$Bit $tmp2523 = { $tmp2517 };
        PANDA_ASSERT($tmp2523.value);
        signPrefix2513 = &$s2524;
    }
    }
    panda$core$String* $tmp2526 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2525 = $tmp2526;
    panda$core$String* $tmp2528 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2527 = $tmp2528;
    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2529, inclusive2489);
    panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, &$s2531);
    panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2532, forwardEntryInclusive2525);
    panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, &$s2534);
    panda$core$String* $tmp2536 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2527);
    panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, &$s2537);
    panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2535, $tmp2538);
    (($fn2540) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2539);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2525, p_out);
    panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2541, start2451);
    panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2542, &$s2543);
    panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, end2477);
    panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, &$s2546);
    panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, loopStart2499);
    panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, &$s2549);
    panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, loopEnd2503);
    panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, &$s2552);
    (($fn2554) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2553);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2527, p_out);
    panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2555, start2451);
    panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, &$s2557);
    panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, end2477);
    panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, &$s2560);
    panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, loopStart2499);
    panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, &$s2563);
    panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, loopEnd2503);
    panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, &$s2566);
    (($fn2568) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2567);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2499, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2419, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2505, p_out);
    panda$core$String* $tmp2570 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2569 = $tmp2570;
    panda$core$String* $tmp2572 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2571 = $tmp2572;
    panda$core$String* $tmp2573 = panda$core$String$convert$R$panda$core$String(numberType2446);
    panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, &$s2574);
    panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, forwardDelta2571);
    panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, &$s2577);
    panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, end2477);
    panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, &$s2580);
    panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2581, index2449);
    panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
    (($fn2585) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2584);
    panda$core$String* $tmp2587 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2586 = $tmp2587;
    panda$core$String* $tmp2589 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2588 = $tmp2589;
    panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2590, inclusive2489);
    panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
    panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, forwardInclusiveLabel2586);
    panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
    panda$core$String* $tmp2597 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2588);
    panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
    panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, $tmp2599);
    (($fn2601) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2600);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2586, p_out);
    panda$core$String* $tmp2603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2602, forwardDelta2571);
    panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2603, &$s2604);
    panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2605, loopInc2569);
    panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, &$s2607);
    panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, loopEnd2503);
    panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2610);
    (($fn2612) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2611);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2588, p_out);
    panda$core$String* $tmp2614 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2613 = $tmp2614;
    panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2615, forwardDelta2571);
    panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2616, &$s2617);
    panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2618, loopInc2569);
    panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2620);
    panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, loopEnd2503);
    panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, &$s2623);
    (($fn2625) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2624);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2569, p_out);
    panda$core$String* $tmp2627 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2626 = $tmp2627;
    panda$core$String* $tmp2628 = panda$core$String$convert$R$panda$core$String(index2449);
    panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2628, &$s2629);
    (($fn2631) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2630);
    panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2632, loopStart2499);
    panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, &$s2634);
    (($fn2636) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2635);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2503, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2640;
    panda$core$String* range2651;
    org$pandalanguage$pandac$IRNode* block2654;
    org$pandalanguage$pandac$Type* t2656;
    panda$core$String* llt2659;
    panda$core$String* indexType2661;
    org$pandalanguage$pandac$ClassDecl* cl2667;
    org$pandalanguage$pandac$FieldDecl* field2675;
    panda$core$String* numberType2681;
    panda$core$String* index2684;
    panda$core$String* start2686;
    panda$core$String* indexValuePtr2698;
    panda$core$String* end2712;
    panda$core$String* step2724;
    panda$core$String* inclusive2736;
    panda$core$String* loopStart2746;
    panda$core$String* loopBody2748;
    panda$core$String* loopEnd2750;
    panda$core$String* loopTest2752;
    panda$core$String* forwardEntry2756;
    panda$core$String* backwardEntry2758;
    panda$core$String* signPrefix2760;
    panda$core$String* direction2772;
    panda$core$String* forwardEntryInclusive2796;
    panda$core$String* forwardEntryExclusive2798;
    panda$core$String* backwardEntryInclusive2840;
    panda$core$String* backwardEntryExclusive2842;
    panda$core$String* backwardEntryExclusiveTest2870;
    panda$core$String* loopInc2886;
    panda$core$String* forwardLabel2888;
    panda$core$String* backwardLabel2890;
    panda$core$String* forwardDelta2903;
    panda$core$String* forwardInclusiveLabel2918;
    panda$core$String* forwardExclusiveLabel2920;
    panda$core$String* forwardExclusiveTest2948;
    panda$core$String* backwardDelta2964;
    panda$core$String* backwardInclusiveLabel2979;
    panda$core$String* backwardExclusiveLabel2981;
    panda$core$String* inc3023;
    panda$core$Bit $tmp2637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2637.value);
    panda$core$Int64 $tmp2638 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2638, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2639.value);
    panda$core$Object* $tmp2641 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2640 = ((org$pandalanguage$pandac$IRNode*) $tmp2641);
    panda$core$Object* $tmp2642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2642)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2643.value);
    panda$core$Object* $tmp2644 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2645 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2644)->type->subtypes);
    panda$core$Bit $tmp2646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2645, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2646.value);
    panda$core$Object* $tmp2647 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2648 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2647)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2650 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2648))->name, &$s2649);
    PANDA_ASSERT($tmp2650.value);
    panda$core$Object* $tmp2652 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2653 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2652), p_out);
    range2651 = $tmp2653;
    panda$core$Object* $tmp2655 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2654 = ((org$pandalanguage$pandac$IRNode*) $tmp2655);
    panda$core$Object* $tmp2657 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2657)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2656 = ((org$pandalanguage$pandac$Type*) $tmp2658);
    panda$core$String* $tmp2660 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2656);
    llt2659 = $tmp2660;
    panda$core$Bit $tmp2662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2656->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2662.value) {
    {
        panda$core$Int64 $tmp2663 = panda$collections$Array$get_count$R$panda$core$Int64(t2656->subtypes);
        panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2663, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2664.value);
        panda$core$Object* $tmp2665 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2656->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2666 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2665));
        indexType2661 = $tmp2666;
    }
    }
    else {
    {
        indexType2661 = llt2659;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2668 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2656);
    cl2667 = $tmp2668;
    PANDA_ASSERT(((panda$core$Bit) { cl2667 != NULL }).value);
    panda$collections$ListView* $tmp2669 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2667);
    ITable* $tmp2670 = ((panda$collections$CollectionView*) $tmp2669)->$class->itable;
    while ($tmp2670->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2670 = $tmp2670->next;
    }
    $fn2672 $tmp2671 = $tmp2670->methods[0];
    panda$core$Int64 $tmp2673 = $tmp2671(((panda$collections$CollectionView*) $tmp2669));
    panda$core$Bit $tmp2674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2673, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2674.value);
    panda$collections$ListView* $tmp2676 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2667);
    ITable* $tmp2677 = $tmp2676->$class->itable;
    while ($tmp2677->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2677 = $tmp2677->next;
    }
    $fn2679 $tmp2678 = $tmp2677->methods[0];
    panda$core$Object* $tmp2680 = $tmp2678($tmp2676, ((panda$core$Int64) { 0 }));
    field2675 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2680);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2675);
    panda$core$String* $tmp2682 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2675->type);
    numberType2681 = $tmp2682;
    panda$core$Bit $tmp2683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2640->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2683.value);
    panda$core$String* $tmp2685 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2640->payload));
    index2684 = $tmp2685;
    panda$core$String* $tmp2687 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2686 = $tmp2687;
    panda$core$String* $tmp2688 = panda$core$String$convert$R$panda$core$String(numberType2681);
    panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, &$s2689);
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, start2686);
    panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, &$s2692);
    panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, range2651);
    panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, &$s2695);
    (($fn2697) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2696);
    panda$core$String* $tmp2699 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2698 = $tmp2699;
    org$pandalanguage$pandac$Type* $tmp2700 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2667);
    panda$core$String* $tmp2701 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2700);
    panda$core$String* $tmp2702 = panda$core$String$convert$R$panda$core$String($tmp2701);
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, &$s2703);
    panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, index2684);
    panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, &$s2706);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, start2686);
    panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, &$s2709);
    (($fn2711) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2710);
    panda$core$String* $tmp2713 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2712 = $tmp2713;
    panda$core$String* $tmp2714 = panda$core$String$convert$R$panda$core$String(numberType2681);
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, &$s2715);
    panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, end2712);
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, &$s2718);
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, range2651);
    panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, &$s2721);
    (($fn2723) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2722);
    panda$core$String* $tmp2725 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2724 = $tmp2725;
    panda$core$String* $tmp2726 = panda$core$String$convert$R$panda$core$String(numberType2681);
    panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, step2724);
    panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, &$s2730);
    panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, range2651);
    panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, &$s2733);
    (($fn2735) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2734);
    panda$core$String* $tmp2737 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2736 = $tmp2737;
    panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2738, inclusive2736);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
    panda$core$String* $tmp2742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, range2651);
    panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2742, &$s2743);
    (($fn2745) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2744);
    panda$core$String* $tmp2747 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2746 = $tmp2747;
    panda$core$String* $tmp2749 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2748 = $tmp2749;
    panda$core$String* $tmp2751 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2750 = $tmp2751;
    panda$core$String* $tmp2753 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2752 = $tmp2753;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2754 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2754->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2754->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2754, ((panda$core$String*) p_f->payload), loopEnd2750, loopTest2752);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2754));
    panda$core$String* $tmp2757 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2756 = $tmp2757;
    panda$core$String* $tmp2759 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2758 = $tmp2759;
    panda$core$Bit $tmp2762 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2656)->name, &$s2761);
    if ($tmp2762.value) {
    {
        signPrefix2760 = &$s2763;
    }
    }
    else {
    {
        panda$core$Bit $tmp2766 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2656)->name, &$s2765);
        bool $tmp2764 = $tmp2766.value;
        if ($tmp2764) goto $l2767;
        panda$core$Bit $tmp2769 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2656)->name, &$s2768);
        $tmp2764 = $tmp2769.value;
        $l2767:;
        panda$core$Bit $tmp2770 = { $tmp2764 };
        PANDA_ASSERT($tmp2770.value);
        signPrefix2760 = &$s2771;
    }
    }
    panda$core$Bit $tmp2774 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2760, &$s2773);
    if ($tmp2774.value) {
    {
        panda$core$String* $tmp2775 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2772 = $tmp2775;
        panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2776, direction2772);
        panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2778);
        panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, step2724);
        panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, &$s2781);
        (($fn2783) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2782);
    }
    }
    else {
    {
        direction2772 = &$s2784;
    }
    }
    panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2785, direction2772);
    panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, &$s2787);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, forwardEntry2756);
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, &$s2790);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, backwardEntry2758);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, &$s2793);
    (($fn2795) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2794);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2756, p_out);
    panda$core$String* $tmp2797 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2796 = $tmp2797;
    panda$core$String* $tmp2799 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2798 = $tmp2799;
    panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2800, inclusive2736);
    panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, &$s2802);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2803, forwardEntryInclusive2796);
    panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2805);
    panda$core$String* $tmp2807 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2798);
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, $tmp2809);
    (($fn2811) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2810);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2796, p_out);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2812, start2686);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, &$s2814);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, end2712);
    panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, &$s2817);
    panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2818, loopStart2746);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, &$s2820);
    panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, loopEnd2750);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, &$s2823);
    (($fn2825) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2824);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2798, p_out);
    panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2826, start2686);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, &$s2828);
    panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, end2712);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, &$s2831);
    panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, loopStart2746);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, &$s2834);
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, loopEnd2750);
    panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2837);
    (($fn2839) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2838);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2758, p_out);
    panda$core$String* $tmp2841 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2840 = $tmp2841;
    panda$core$String* $tmp2843 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2842 = $tmp2843;
    panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2844, inclusive2736);
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2845, &$s2846);
    panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, backwardEntryInclusive2840);
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2848, &$s2849);
    panda$core$String* $tmp2851 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive2842);
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, &$s2852);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, $tmp2853);
    (($fn2855) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2854);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2840, p_out);
    panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2856, start2686);
    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, &$s2858);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2859, end2712);
    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, &$s2861);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, loopStart2746);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, &$s2864);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, loopEnd2750);
    panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, &$s2867);
    (($fn2869) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2868);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2842, p_out);
    panda$core$String* $tmp2871 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2870 = $tmp2871;
    panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2872, start2686);
    panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2873, &$s2874);
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2875, end2712);
    panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, &$s2877);
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, loopStart2746);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, &$s2880);
    panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2881, loopEnd2750);
    panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, &$s2883);
    (($fn2885) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2884);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2746, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2654, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2752, p_out);
    panda$core$String* $tmp2887 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2886 = $tmp2887;
    panda$core$String* $tmp2889 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2888 = $tmp2889;
    panda$core$String* $tmp2891 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2890 = $tmp2891;
    panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2892, direction2772);
    panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2893, &$s2894);
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2895, forwardLabel2888);
    panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
    panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2898, backwardLabel2890);
    panda$core$String* $tmp2901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, &$s2900);
    (($fn2902) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2901);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2888, p_out);
    panda$core$String* $tmp2904 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2903 = $tmp2904;
    panda$core$String* $tmp2905 = panda$core$String$convert$R$panda$core$String(numberType2681);
    panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, &$s2906);
    panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2907, forwardDelta2903);
    panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, &$s2909);
    panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2910, end2712);
    panda$core$String* $tmp2913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2911, &$s2912);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2913, index2684);
    panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, &$s2915);
    (($fn2917) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2916);
    panda$core$String* $tmp2919 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2918 = $tmp2919;
    panda$core$String* $tmp2921 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2920 = $tmp2921;
    panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2922, inclusive2736);
    panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, &$s2924);
    panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2925, forwardInclusiveLabel2918);
    panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, &$s2927);
    panda$core$String* $tmp2929 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2920);
    panda$core$String* $tmp2931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2929, &$s2930);
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, $tmp2931);
    (($fn2933) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2932);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2918, p_out);
    panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2934, forwardDelta2903);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, &$s2936);
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, step2724);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, &$s2939);
    panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, loopInc2886);
    panda$core$String* $tmp2943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2941, &$s2942);
    panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, loopEnd2750);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, &$s2945);
    (($fn2947) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2946);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2920, p_out);
    panda$core$String* $tmp2949 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2948 = $tmp2949;
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2950, forwardDelta2903);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, &$s2952);
    panda$core$String* $tmp2954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, step2724);
    panda$core$String* $tmp2956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2954, &$s2955);
    panda$core$String* $tmp2957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, loopInc2886);
    panda$core$String* $tmp2959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2957, &$s2958);
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, loopEnd2750);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
    (($fn2963) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2962);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2890, p_out);
    panda$core$String* $tmp2965 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2964 = $tmp2965;
    panda$core$String* $tmp2966 = panda$core$String$convert$R$panda$core$String(numberType2681);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
    panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, backwardDelta2964);
    panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2969, &$s2970);
    panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2971, index2684);
    panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, &$s2973);
    panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, end2712);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, &$s2976);
    (($fn2978) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2977);
    panda$core$String* $tmp2980 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2979 = $tmp2980;
    panda$core$String* $tmp2982 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2981 = $tmp2982;
    panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2983, inclusive2736);
    panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, &$s2985);
    panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2986, backwardInclusiveLabel2979);
    panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, &$s2988);
    panda$core$String* $tmp2990 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel2981);
    panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, &$s2991);
    panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, $tmp2992);
    (($fn2994) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2993);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2979, p_out);
    panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2995, backwardDelta2964);
    panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, &$s2997);
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, step2724);
    panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2999, &$s3000);
    panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, loopInc2886);
    panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3003);
    panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3004, loopEnd2750);
    panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, &$s3006);
    (($fn3008) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3007);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2981, p_out);
    panda$core$String* $tmp3010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3009, backwardDelta2964);
    panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3010, &$s3011);
    panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, step2724);
    panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
    panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, loopInc2886);
    panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, loopEnd2750);
    panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, &$s3020);
    (($fn3022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3021);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2886, p_out);
    panda$core$String* $tmp3024 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3023 = $tmp3024;
    panda$core$String* $tmp3025 = panda$core$String$convert$R$panda$core$String(index2684);
    panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, &$s3026);
    panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, step2724);
    panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, &$s3029);
    (($fn3031) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3030);
    panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3032, loopStart2746);
    panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, &$s3034);
    (($fn3036) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3035);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2750, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp3037 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3038 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3037)->type);
    if ($tmp3038.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp3039 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3040 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3039)->type);
    if ($tmp3040.value) {
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
    panda$core$String* loopStart3047;
    panda$core$String* loopEnd3049;
    panda$core$Bit $tmp3041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp3041.value);
    panda$core$Int64 $tmp3042 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3042, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3043.value);
    panda$core$Object* $tmp3044 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3045 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3046 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3044)->type, $tmp3045);
    PANDA_ASSERT($tmp3046.value);
    panda$core$String* $tmp3048 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3047 = $tmp3048;
    panda$core$String* $tmp3050 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3049 = $tmp3050;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3051 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3051->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3051->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3051, ((panda$core$String*) p_w->payload), loopEnd3049, loopStart3047);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3051));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3047, p_out);
    panda$core$Object* $tmp3054 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3055 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3054), p_out);
    panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3053, $tmp3055);
    panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
    panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, loopEnd3049);
    panda$core$String* $tmp3061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, &$s3060);
    (($fn3062) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3061);
    panda$core$Object* $tmp3063 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3063), p_out);
    panda$core$String* $tmp3065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3064, loopStart3047);
    panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3065, &$s3066);
    (($fn3068) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3067);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3049, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3075;
    panda$core$String* loopEnd3077;
    panda$core$Bit $tmp3069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp3069.value);
    panda$core$Int64 $tmp3070 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3070, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3071.value);
    panda$core$Object* $tmp3072 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3073 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3074 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3072)->type, $tmp3073);
    PANDA_ASSERT($tmp3074.value);
    panda$core$String* $tmp3076 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3075 = $tmp3076;
    panda$core$String* $tmp3078 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3077 = $tmp3078;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3079 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3079->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3079->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3079, ((panda$core$String*) p_d->payload), loopEnd3077, loopStart3075);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3079));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3075, p_out);
    panda$core$Object* $tmp3081 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3081), p_out);
    panda$core$Object* $tmp3083 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3084 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3083), p_out);
    panda$core$String* $tmp3085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3082, $tmp3084);
    panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, &$s3086);
    panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3087, loopStart3075);
    panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, &$s3089);
    (($fn3091) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3090);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3077, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3095;
    panda$core$String* loopEnd3097;
    panda$core$Bit $tmp3092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3092.value);
    panda$core$Int64 $tmp3093 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3093, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3094.value);
    panda$core$String* $tmp3096 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3095 = $tmp3096;
    panda$core$String* $tmp3098 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3097 = $tmp3098;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3099 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3099->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3099->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3099, ((panda$core$String*) p_l->payload), loopEnd3097, loopStart3095);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3099));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3095, p_out);
    (($fn3102) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3101);
    panda$core$Object* $tmp3103 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3103), p_out);
    (($fn3105) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3104);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3097, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3106;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3106 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3107 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3106->type);
            panda$core$String* $tmp3108 = panda$core$String$convert$R$panda$core$String($tmp3107);
            panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3108, &$s3109);
            panda$core$String* $tmp3111 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3106);
            panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, $tmp3111);
            panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, &$s3113);
            (($fn3115) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3114);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3116 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3106);
                panda$core$String* $tmp3117 = panda$core$String$convert$R$panda$core$String($tmp3116);
                panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, &$s3118);
                panda$core$String* $tmp3120 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, $tmp3120);
                panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
                (($fn3124) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3123);
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
    panda$collections$Iterator* decl$Iter3138;
    org$pandalanguage$pandac$IRNode* decl3150;
    panda$core$Bit $tmp3128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3127 = $tmp3128.value;
    if ($tmp3127) goto $l3129;
    panda$core$Bit $tmp3130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3127 = $tmp3130.value;
    $l3129:;
    panda$core$Bit $tmp3131 = { $tmp3127 };
    bool $tmp3126 = $tmp3131.value;
    if ($tmp3126) goto $l3132;
    panda$core$Bit $tmp3133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3126 = $tmp3133.value;
    $l3132:;
    panda$core$Bit $tmp3134 = { $tmp3126 };
    bool $tmp3125 = $tmp3134.value;
    if ($tmp3125) goto $l3135;
    panda$core$Bit $tmp3136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3125 = $tmp3136.value;
    $l3135:;
    panda$core$Bit $tmp3137 = { $tmp3125 };
    PANDA_ASSERT($tmp3137.value);
    {
        ITable* $tmp3139 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3139->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3139 = $tmp3139->next;
        }
        $fn3141 $tmp3140 = $tmp3139->methods[0];
        panda$collections$Iterator* $tmp3142 = $tmp3140(((panda$collections$Iterable*) p_v->children));
        decl$Iter3138 = $tmp3142;
        $l3143:;
        ITable* $tmp3145 = decl$Iter3138->$class->itable;
        while ($tmp3145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3145 = $tmp3145->next;
        }
        $fn3147 $tmp3146 = $tmp3145->methods[0];
        panda$core$Bit $tmp3148 = $tmp3146(decl$Iter3138);
        panda$core$Bit $tmp3149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3148);
        if (!$tmp3149.value) goto $l3144;
        {
            ITable* $tmp3151 = decl$Iter3138->$class->itable;
            while ($tmp3151->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3151 = $tmp3151->next;
            }
            $fn3153 $tmp3152 = $tmp3151->methods[1];
            panda$core$Object* $tmp3154 = $tmp3152(decl$Iter3138);
            decl3150 = ((org$pandalanguage$pandac$IRNode*) $tmp3154);
            panda$core$Bit $tmp3155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3150->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3155.value);
            panda$core$Int64 $tmp3156 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl3150->children);
            panda$core$Bit $tmp3157 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3156, ((panda$core$Int64) { 1 }));
            if ($tmp3157.value) {
            {
                panda$core$Object* $tmp3158 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3150->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3159 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3150->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3158), ((org$pandalanguage$pandac$IRNode*) $tmp3159), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3160 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3150->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3160), NULL, p_out);
            }
            }
        }
        goto $l3143;
        $l3144:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3164;
    panda$core$String* result3173;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3161 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3162 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3161, p_out);
            return $tmp3162;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3163 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3163;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3165 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3166 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3165), p_out);
            base3164 = $tmp3166;
            panda$core$String* $tmp3167 = panda$core$String$convert$R$panda$core$String(base3164);
            panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3167, &$s3168);
            panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, &$s3171);
            return $tmp3172;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3174 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3175 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3174), p_out);
            result3173 = $tmp3175;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result3173));
            return result3173;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3179;
    panda$core$String* value3182;
    panda$core$String* t3183;
    panda$core$Int64 op3186;
    panda$core$String* right3188;
    panda$core$Bit $tmp3176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3176.value);
    panda$core$Int64 $tmp3177 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3177, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3178.value);
    panda$core$Object* $tmp3180 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3181 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3180), p_out);
    lvalue3179 = $tmp3181;
    panda$core$Object* $tmp3184 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3185 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3184)->type);
    t3183 = $tmp3185;
    op3186 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3186, ((panda$core$Int64) { 73 }));
    if ($tmp3187.value) {
    {
        panda$core$Object* $tmp3189 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3190 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3189), p_out);
        right3188 = $tmp3190;
        value3182 = right3188;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3191 = panda$core$String$convert$R$panda$core$String(lvalue3179);
    panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, value3182);
    panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, &$s3195);
    (($fn3197) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3196);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    bool $tmp3198 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3198) goto $l3199;
    panda$core$Int64 $tmp3200 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3201 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3200, ((panda$core$Int64) { 0 }));
    $tmp3198 = $tmp3201.value;
    $l3199:;
    panda$core$Bit $tmp3202 = { $tmp3198 };
    if ($tmp3202.value) {
    {
        panda$core$Int64 $tmp3203 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3203, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3204.value);
        panda$core$Object* $tmp3206 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3207 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3206), p_out);
        panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3205, $tmp3207);
        panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, &$s3209);
        (($fn3211) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3210);
    }
    }
    else {
    {
        (($fn3213) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3212);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3217;
    panda$core$Int64 $tmp3214 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3215 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3214, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3215.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3216 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3216);
    }
    }
    panda$core$Int64 $tmp3218 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3217, ((panda$core$Int64) { 0 }), $tmp3218, ((panda$core$Bit) { false }));
    int64_t $tmp3220 = $tmp3217.min.value;
    panda$core$Int64 i3219 = { $tmp3220 };
    int64_t $tmp3222 = $tmp3217.max.value;
    bool $tmp3223 = $tmp3217.inclusive.value;
    if ($tmp3223) goto $l3230; else goto $l3231;
    $l3230:;
    if ($tmp3220 <= $tmp3222) goto $l3224; else goto $l3226;
    $l3231:;
    if ($tmp3220 < $tmp3222) goto $l3224; else goto $l3226;
    $l3224:;
    {
        panda$core$Object* $tmp3232 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3219);
        panda$core$Bit $tmp3236;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3232)->loopLabel != NULL }).value) goto $l3233; else goto $l3234;
        $l3233:;
        panda$core$Bit $tmp3237 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3232)->loopLabel, p_name);
        $tmp3236 = $tmp3237;
        goto $l3235;
        $l3234:;
        $tmp3236 = ((panda$core$Bit) { false });
        goto $l3235;
        $l3235:;
        if ($tmp3236.value) {
        {
            panda$core$Object* $tmp3238 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3219);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3238);
        }
        }
    }
    $l3227:;
    int64_t $tmp3240 = $tmp3222 - i3219.value;
    if ($tmp3223) goto $l3241; else goto $l3242;
    $l3241:;
    if ($tmp3240 >= 1) goto $l3239; else goto $l3226;
    $l3242:;
    if ($tmp3240 > 1) goto $l3239; else goto $l3226;
    $l3239:;
    i3219.value += 1;
    goto $l3224;
    $l3226:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3245;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3246 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3245 = $tmp3246;
    panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3247, desc3245->breakLabel);
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, &$s3249);
    (($fn3251) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3250);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3252;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3253 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3252 = $tmp3253;
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3254, desc3252->continueLabel);
    panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3255, &$s3256);
    (($fn3258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3257);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3259.value);
    panda$core$Int64 $tmp3261 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3261, ((panda$core$Int64) { 1 }));
    bool $tmp3260 = $tmp3262.value;
    if ($tmp3260) goto $l3263;
    panda$core$Int64 $tmp3264 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3264, ((panda$core$Int64) { 2 }));
    $tmp3260 = $tmp3265.value;
    $l3263:;
    panda$core$Bit $tmp3266 = { $tmp3260 };
    PANDA_ASSERT($tmp3266.value);
    panda$core$Object* $tmp3268 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3269 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3268), p_out);
    panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3267, $tmp3269);
    panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, &$s3271);
    (($fn3273) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3272);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3282;
    org$pandalanguage$pandac$IRNode* w3297;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3300;
    panda$core$Object* $tmp3275 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3276 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3275), p_out);
    panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3274, $tmp3276);
    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3277, &$s3278);
    (($fn3280) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3279);
    panda$core$Int64 $tmp3281 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3281;
    panda$core$Int64 $tmp3283 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3282, ((panda$core$Int64) { 1 }), $tmp3283, ((panda$core$Bit) { false }));
    int64_t $tmp3285 = $tmp3282.min.value;
    panda$core$Int64 i3284 = { $tmp3285 };
    int64_t $tmp3287 = $tmp3282.max.value;
    bool $tmp3288 = $tmp3282.inclusive.value;
    if ($tmp3288) goto $l3295; else goto $l3296;
    $l3295:;
    if ($tmp3285 <= $tmp3287) goto $l3289; else goto $l3291;
    $l3296:;
    if ($tmp3285 < $tmp3287) goto $l3289; else goto $l3291;
    $l3289:;
    {
        panda$core$Object* $tmp3298 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3284);
        w3297 = ((org$pandalanguage$pandac$IRNode*) $tmp3298);
        panda$core$Bit $tmp3299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3297->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3299.value) {
        {
            panda$core$Int64 $tmp3301 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3297->children);
            panda$core$Int64 $tmp3302 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3301, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3300, ((panda$core$Int64) { 0 }), $tmp3302, ((panda$core$Bit) { false }));
            int64_t $tmp3304 = $tmp3300.min.value;
            panda$core$Int64 j3303 = { $tmp3304 };
            int64_t $tmp3306 = $tmp3300.max.value;
            bool $tmp3307 = $tmp3300.inclusive.value;
            if ($tmp3307) goto $l3314; else goto $l3315;
            $l3314:;
            if ($tmp3304 <= $tmp3306) goto $l3308; else goto $l3310;
            $l3315:;
            if ($tmp3304 < $tmp3306) goto $l3308; else goto $l3310;
            $l3308:;
            {
                panda$core$Object* $tmp3317 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3297->children, j3303);
                panda$core$UInt64 $tmp3318 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3317));
                panda$core$String* $tmp3319 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3316, ((panda$core$Object*) wrap_panda$core$UInt64($tmp3318)));
                panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3319, &$s3320);
                (($fn3322) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3321);
            }
            $l3311:;
            int64_t $tmp3324 = $tmp3306 - j3303.value;
            if ($tmp3307) goto $l3325; else goto $l3326;
            $l3325:;
            if ($tmp3324 >= 1) goto $l3323; else goto $l3310;
            $l3326:;
            if ($tmp3324 > 1) goto $l3323; else goto $l3310;
            $l3323:;
            j3303.value += 1;
            goto $l3308;
            $l3310:;
            panda$core$Int64 $tmp3329 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3297->children);
            panda$core$Int64 $tmp3330 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3329, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3331 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3297->children, $tmp3330);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3331), p_out);
            (($fn3333) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3332);
        }
        }
        else {
        {
            panda$core$Bit $tmp3334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3297->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3334.value);
            panda$core$Int64 $tmp3335 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3297->children);
            panda$core$Bit $tmp3336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3335, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3336.value);
            (($fn3338) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3337);
            panda$core$Object* $tmp3339 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3297->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3339), p_out);
        }
        }
    }
    $l3292:;
    int64_t $tmp3341 = $tmp3287 - i3284.value;
    if ($tmp3288) goto $l3342; else goto $l3343;
    $l3342:;
    if ($tmp3341 >= 1) goto $l3340; else goto $l3291;
    $l3343:;
    if ($tmp3341 > 1) goto $l3340; else goto $l3291;
    $l3340:;
    i3284.value += 1;
    goto $l3289;
    $l3291:;
    panda$core$Int64 $tmp3346 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3346;
    (($fn3348) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3347);
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
    panda$core$String* result3349;
    org$pandalanguage$pandac$Type* $tmp3350 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3351 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3350);
    result3349 = $tmp3351;
    panda$core$Bit $tmp3353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3352 = $tmp3353.value;
    if (!$tmp3352) goto $l3354;
    panda$core$Bit $tmp3356 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3349, &$s3355);
    panda$core$Bit $tmp3357 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3356);
    $tmp3352 = $tmp3357.value;
    $l3354:;
    panda$core$Bit $tmp3358 = { $tmp3352 };
    if ($tmp3358.value) {
    {
        panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3349, &$s3359);
        return $tmp3360;
    }
    }
    return result3349;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3372;
    panda$collections$Iterator* p$Iter3382;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3394;
    panda$io$MemoryOutputStream* bodyBuffer3416;
    panda$io$IndentedOutputStream* indentedBody3419;
    panda$collections$Iterator* s$Iter3422;
    org$pandalanguage$pandac$IRNode* s3434;
    panda$core$Object* $tmp3361 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3361)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3362;
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3363 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3364 = panda$core$String$convert$R$panda$core$String($tmp3363);
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, &$s3365);
    panda$core$String* $tmp3367 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, $tmp3367);
    panda$core$String* $tmp3370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3368, &$s3369);
    (($fn3371) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3370);
    separator3372 = &$s3373;
    panda$core$Bit $tmp3374 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3375 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3374);
    if ($tmp3375.value) {
    {
        panda$core$String* $tmp3376 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3377 = panda$core$String$convert$R$panda$core$String($tmp3376);
        panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3377, &$s3378);
        (($fn3380) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3379);
        separator3372 = &$s3381;
    }
    }
    {
        ITable* $tmp3383 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3383->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3383 = $tmp3383->next;
        }
        $fn3385 $tmp3384 = $tmp3383->methods[0];
        panda$collections$Iterator* $tmp3386 = $tmp3384(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3382 = $tmp3386;
        $l3387:;
        ITable* $tmp3389 = p$Iter3382->$class->itable;
        while ($tmp3389->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3389 = $tmp3389->next;
        }
        $fn3391 $tmp3390 = $tmp3389->methods[0];
        panda$core$Bit $tmp3392 = $tmp3390(p$Iter3382);
        panda$core$Bit $tmp3393 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3392);
        if (!$tmp3393.value) goto $l3388;
        {
            ITable* $tmp3395 = p$Iter3382->$class->itable;
            while ($tmp3395->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3395 = $tmp3395->next;
            }
            $fn3397 $tmp3396 = $tmp3395->methods[1];
            panda$core$Object* $tmp3398 = $tmp3396(p$Iter3382);
            p3394 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3398);
            panda$core$String* $tmp3399 = panda$core$String$convert$R$panda$core$String(separator3372);
            panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, &$s3400);
            panda$core$String* $tmp3402 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3394->type);
            panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, $tmp3402);
            panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, &$s3404);
            panda$core$String* $tmp3406 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3394->name);
            panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, $tmp3406);
            panda$core$String* $tmp3409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3407, &$s3408);
            (($fn3410) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3409);
            separator3372 = &$s3411;
        }
        goto $l3387;
        $l3388:;
    }
    (($fn3413) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3412);
    panda$core$Int64 $tmp3414 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3414;
    panda$core$Bit $tmp3415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3415.value);
    panda$io$MemoryOutputStream* $tmp3417 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3417->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3417->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3417);
    bodyBuffer3416 = $tmp3417;
    panda$io$IndentedOutputStream* $tmp3420 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3420->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3420->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3420, ((panda$io$OutputStream*) bodyBuffer3416));
    indentedBody3419 = $tmp3420;
    {
        ITable* $tmp3423 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3423->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3423 = $tmp3423->next;
        }
        $fn3425 $tmp3424 = $tmp3423->methods[0];
        panda$collections$Iterator* $tmp3426 = $tmp3424(((panda$collections$Iterable*) p_body->children));
        s$Iter3422 = $tmp3426;
        $l3427:;
        ITable* $tmp3429 = s$Iter3422->$class->itable;
        while ($tmp3429->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3429 = $tmp3429->next;
        }
        $fn3431 $tmp3430 = $tmp3429->methods[0];
        panda$core$Bit $tmp3432 = $tmp3430(s$Iter3422);
        panda$core$Bit $tmp3433 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3432);
        if (!$tmp3433.value) goto $l3428;
        {
            ITable* $tmp3435 = s$Iter3422->$class->itable;
            while ($tmp3435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3435 = $tmp3435->next;
            }
            $fn3437 $tmp3436 = $tmp3435->methods[1];
            panda$core$Object* $tmp3438 = $tmp3436(s$Iter3422);
            s3434 = ((org$pandalanguage$pandac$IRNode*) $tmp3438);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3434, indentedBody3419);
        }
        goto $l3427;
        $l3428:;
    }
    panda$core$String* $tmp3439 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3440) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3439);
    panda$core$String* $tmp3441 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3416);
    (($fn3442) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3441);
    panda$core$Int64 $tmp3443 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3443;
    (($fn3445) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3444);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3446;
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
    panda$io$File* $tmp3448 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3447);
    path3446 = $tmp3448;
    panda$io$File* $tmp3449 = panda$io$File$parent$R$panda$io$File$Q(path3446);
    panda$io$File$createDirectories($tmp3449);
    panda$io$IndentedOutputStream* $tmp3450 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3450->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3450->refCount.value = 1;
    panda$io$OutputStream* $tmp3452 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3446);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3450, $tmp3452);
    self->out = $tmp3450;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3453 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3453.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3454 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3455 = panda$core$String$convert$R$panda$core$String($tmp3454);
        panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3455, &$s3456);
        panda$core$String* $tmp3458 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3457, $tmp3458);
        panda$core$String* $tmp3461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3459, &$s3460);
        panda$core$String* $tmp3462 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3463 = panda$core$String$convert$R$panda$core$String($tmp3462);
        panda$core$String* $tmp3465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, &$s3464);
        panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3461, $tmp3465);
        (($fn3467) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3466);
        panda$core$String* $tmp3469 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3468, $tmp3469);
        panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3470, &$s3471);
        panda$core$String* $tmp3474 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3473, $tmp3474);
        panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3475, &$s3476);
        org$pandalanguage$pandac$Type* $tmp3478 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$Int64 $tmp3479 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3478);
        panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3477, ((panda$core$Object*) wrap_panda$core$Int64($tmp3479)));
        panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3480, &$s3481);
        panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3472, $tmp3482);
        (($fn3484) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3483);
        panda$core$String* $tmp3487 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3486, $tmp3487);
        panda$core$String* $tmp3490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3488, &$s3489);
        panda$core$String* $tmp3491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3485, $tmp3490);
        (($fn3492) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3491);
        (($fn3494) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3493);
        (($fn3496) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3495);
        (($fn3498) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3497);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3499 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3500) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3499);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3501 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3502) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3501);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3503 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3504) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3503);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3505 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3506) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3505);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3507 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3508) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3507);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3509) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

