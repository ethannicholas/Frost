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

org$pandalanguage$pandac$CCodeGenerator$class_type org$pandalanguage$pandac$CCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$CCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim, org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$CCodeGenerator$finish} };

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
typedef void (*$fn1922)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1927)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1933)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1939)(panda$collections$Iterator*);
typedef void (*$fn1944)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1951)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1953)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn1960)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1962)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn1967)(panda$collections$CollectionView*);
typedef void (*$fn1976)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2096)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2107)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2116)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2121)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2130)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2135)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2162)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2167)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2173)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2179)(panda$collections$Iterator*);
typedef void (*$fn2183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2232)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2346)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2351)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2355)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2361)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2367)(panda$collections$Iterator*);
typedef void (*$fn2369)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2395)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2402)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2438)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2445)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2463)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2477)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2541)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2555)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2586)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2613)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2626)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2632)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2637)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2673)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2680)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2712)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2724)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2746)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2796)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2840)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2856)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2870)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2886)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2903)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2918)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2964)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2979)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2995)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3037)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3063)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3092)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3106)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3116)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3125)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3142)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3148)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3154)(panda$collections$Iterator*);
typedef void (*$fn3198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3212)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3259)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3281)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3323)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3334)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3349)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3372)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3381)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3386)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3392)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3398)(panda$collections$Iterator*);
typedef void (*$fn3411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3414)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3426)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3432)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3438)(panda$collections$Iterator*);
typedef void (*$fn3441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3443)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3446)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3485)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3495)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3497)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3505)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3507)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3510)(panda$core$Object*);

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
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x30", 2, 14895, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, 13952, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, 1235826788284487941, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, 2026475985823268269, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, 19613, NULL };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, 6478845392102031335, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, 1381611, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x4E\x55\x4C\x4C\x20\x7D\x3B", 9, 1573656756204980508, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, 223586327, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, 151084256719941, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 21225314024, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 15878335074876521, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, 14324797439511602, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1369399, NULL };
static panda$core$String $s2025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, 15878335074876521, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, 14295074875294774, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, -1580277911967745419, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, 1369399, NULL };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, 14281, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, 6429304196845160675, NULL };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, 185298716, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 146, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 134, NULL };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 227, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 224, NULL };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 2213733, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, 230519193382140, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 198772404, NULL };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 192, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, -3960675068764064938, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 214439158056679, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, 21242756259, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, -4756656308298712568, NULL };
static panda$core$String $s2322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, 142345674, NULL };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 14475, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1604554669253151784, NULL };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, 2134398342781, NULL };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, -4218233432064096881, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x69\x6E\x2E\x76\x61\x6C\x75\x65\x3B", 11, -3956212002962864875, NULL };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1369417, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x61\x78\x2E\x76\x61\x6C\x75\x65\x3B", 11, -4041768404061004273, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, -5967430147646080757, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 137648286, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1362825, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1361310, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 157293860332647, NULL };
static panda$core$String $s2591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 12, -550717230962542041, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 11, 2239307386318546122, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20\x31\x3B", 12, -4476855678279854640, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, -7661850693661404164, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, 3588086193908855763, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, 13903220581, NULL };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, 1369417, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, 5794120589201096528, NULL };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, -1565217378717073995, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, -5967430147646080757, NULL };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, -8202984937925645851, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1602004586451577454, NULL };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1602004586433346952, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 218, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 216, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, 20823526461, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, 13904243334, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 224750149, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, 137648286, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, 1362825, NULL };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 137668688, NULL };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1363027, NULL };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, 1361310, NULL };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, 157293860332647, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, 137668688, NULL };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, 1363027, NULL };
static panda$core$String $s2956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s2974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, 1604554669253061197, NULL };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, 13904537533, NULL };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s3004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, 137665772, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, 151083018380647, NULL };
static panda$core$String $s3018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, 8803749402400825266, NULL };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, -3960675068826801088, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s3035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, 21541863813, NULL };
static panda$core$String $s3058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, 213285780, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, 9006187778996341030, NULL };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, 1197661341919403142, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, 14808, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1362926, NULL };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, 229300545255605, NULL };
static panda$core$String $s3210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, 229300545255632, NULL };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, 21343879774, NULL };
static panda$core$String $s3257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, 160, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4E\x44\x41\x5F\x41\x53\x53\x45\x52\x54\x28", 13, 1703954053821868674, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, 23285560238056031, NULL };
static panda$core$String $s3279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, 1604554669253151784, NULL };
static panda$core$String $s3317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, 20913202745, NULL };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 159, NULL };
static panda$core$String $s3333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x3B", 6, 2103477946177, NULL };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6C\x74\x3A", 8, 21658216358330300, NULL };
static panda$core$String $s3348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 143, NULL };
static panda$core$String $s3363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 149, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, 13959559259, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, 1368140, NULL };
static panda$core$String $s3409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 14677, NULL };
static panda$core$String $s3413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1451897, NULL };
static panda$core$String $s3445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, 14946, NULL };
static panda$core$String $s3457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, -9085029162737573691, NULL };
static panda$core$String $s3461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, 14382547864528555, NULL };
static panda$core$String $s3469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, 137359729, NULL };
static panda$core$String $s3472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, 581419489117905124, NULL };
static panda$core$String $s3474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s3477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, 6121584528548524069, NULL };
static panda$core$String $s3482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, 14401, NULL };
static panda$core$String $s3486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, -9137501668294411695, NULL };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 139, NULL };
static panda$core$String $s3490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, -3925411815915941145, NULL };
static panda$core$String $s3494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, 7577815125550662002, NULL };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, -6041374821165614789, NULL };
static panda$core$String $s3498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 226, NULL };

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
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_real, panda$io$OutputStream* p_out) {
    panda$core$String* result1900;
    panda$core$Char8 $tmp1902;
    panda$core$String* $tmp1901 = panda$core$Real64$convert$R$panda$core$String(((panda$core$Real64$wrapper*) p_real->payload)->value);
    result1900 = $tmp1901;
    panda$core$Char8$init$panda$core$UInt8(&$tmp1902, ((panda$core$UInt8) { 46 }));
    panda$core$Bit $tmp1903 = panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(result1900, $tmp1902);
    if ($tmp1903.value) {
    {
        return result1900;
    }
    }
    panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1900, &$s1904);
    return $tmp1905;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s1906;
    }
    }
    return &$s1907;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1908 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp1908;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1910;
    panda$collections$Iterator* raw$Iter1923;
    panda$core$Char8 raw1936;
    panda$core$UInt8 c1941;
    panda$core$Int64 $tmp1909 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp1909;
    panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1911, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, &$s1913);
    result1910 = $tmp1914;
    org$pandalanguage$pandac$Type* $tmp1915 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1915);
    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1916, result1910);
    panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, &$s1918);
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1919, &$s1920);
    (($fn1922) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp1921);
    {
        panda$collections$ListView* $tmp1924 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp1925 = ((panda$collections$Iterable*) $tmp1924)->$class->itable;
        while ($tmp1925->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1925 = $tmp1925->next;
        }
        $fn1927 $tmp1926 = $tmp1925->methods[0];
        panda$collections$Iterator* $tmp1928 = $tmp1926(((panda$collections$Iterable*) $tmp1924));
        raw$Iter1923 = $tmp1928;
        $l1929:;
        ITable* $tmp1931 = raw$Iter1923->$class->itable;
        while ($tmp1931->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1931 = $tmp1931->next;
        }
        $fn1933 $tmp1932 = $tmp1931->methods[0];
        panda$core$Bit $tmp1934 = $tmp1932(raw$Iter1923);
        panda$core$Bit $tmp1935 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1934);
        if (!$tmp1935.value) goto $l1930;
        {
            ITable* $tmp1937 = raw$Iter1923->$class->itable;
            while ($tmp1937->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1937 = $tmp1937->next;
            }
            $fn1939 $tmp1938 = $tmp1937->methods[1];
            panda$core$Object* $tmp1940 = $tmp1938(raw$Iter1923);
            raw1936 = ((panda$core$Char8$wrapper*) $tmp1940)->value;
            panda$core$UInt8 $tmp1942 = panda$core$Char8$convert$R$panda$core$UInt8(raw1936);
            c1941 = $tmp1942;
            (($fn1944) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s1943);
            panda$collections$ListView* $tmp1946 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1945);
            panda$core$UInt32 $tmp1947 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c1941, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1948 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1947);
            ITable* $tmp1949 = $tmp1946->$class->itable;
            while ($tmp1949->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1949 = $tmp1949->next;
            }
            $fn1951 $tmp1950 = $tmp1949->methods[0];
            panda$core$Object* $tmp1952 = $tmp1950($tmp1946, $tmp1948);
            (($fn1953) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1952)->value)));
            panda$collections$ListView* $tmp1955 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1954);
            panda$core$UInt32 $tmp1956 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c1941, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1957 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1956);
            ITable* $tmp1958 = $tmp1955->$class->itable;
            while ($tmp1958->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1958 = $tmp1958->next;
            }
            $fn1960 $tmp1959 = $tmp1958->methods[0];
            panda$core$Object* $tmp1961 = $tmp1959($tmp1955, $tmp1957);
            (($fn1962) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1961)->value)));
        }
        goto $l1929;
        $l1930:;
    }
    panda$collections$ListView* $tmp1964 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp1965 = ((panda$collections$CollectionView*) $tmp1964)->$class->itable;
    while ($tmp1965->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1965 = $tmp1965->next;
    }
    $fn1967 $tmp1966 = $tmp1965->methods[0];
    panda$core$Int64 $tmp1968 = $tmp1966(((panda$collections$CollectionView*) $tmp1964));
    panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1963, ((panda$core$Object*) wrap_panda$core$Int64($tmp1968)));
    panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1969, &$s1970);
    panda$core$Int64 $tmp1972 = panda$core$String$hash$R$panda$core$Int64(p_s);
    panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1971, ((panda$core$Object*) wrap_panda$core$Int64($tmp1972)));
    panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1973, &$s1974);
    (($fn1976) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp1975);
    panda$core$String* $tmp1978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1977, result1910);
    panda$core$String* $tmp1980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1978, &$s1979);
    return $tmp1980;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s1981;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1983 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp1984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1982, $tmp1983);
    panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1984, &$s1985);
    return $tmp1986;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value1990;
    org$pandalanguage$pandac$ClassDecl* cl1993;
    panda$core$String* bit1996;
    panda$core$Bit $tmp1987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp1987.value);
    panda$core$Int64 $tmp1988 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1988, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1989.value);
    panda$core$Object* $tmp1991 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1992 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1991), p_out);
    value1990 = $tmp1992;
    panda$core$Object* $tmp1994 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1995 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1994)->type);
    cl1993 = $tmp1995;
    panda$core$Bit $tmp1997 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1993);
    if ($tmp1997.value) {
    {
        panda$core$Object* $tmp1998 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1999 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1998)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1999.value) {
        {
            bit1996 = &$s2000;
        }
        }
        else {
        {
            panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2001, value1990);
            panda$core$String* $tmp2004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2002, &$s2003);
            bit1996 = $tmp2004;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2005 = panda$core$String$convert$R$panda$core$String(value1990);
        panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, &$s2006);
        bit1996 = $tmp2007;
    }
    }
    panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2008, bit1996);
    panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, &$s2010);
    return $tmp2011;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2015;
    org$pandalanguage$pandac$ClassDecl* cl2018;
    panda$core$String* bit2021;
    panda$core$Bit $tmp2012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp2012.value);
    panda$core$Int64 $tmp2013 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2013, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2014.value);
    panda$core$Object* $tmp2016 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2017 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2016), p_out);
    value2015 = $tmp2017;
    panda$core$Object* $tmp2019 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2020 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2019)->type);
    cl2018 = $tmp2020;
    panda$core$Bit $tmp2022 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2018);
    if ($tmp2022.value) {
    {
        panda$core$Object* $tmp2023 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2024 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2023)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2024.value) {
        {
            bit2021 = &$s2025;
        }
        }
        else {
        {
            panda$core$String* $tmp2026 = panda$core$String$convert$R$panda$core$String(value2015);
            panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, &$s2027);
            bit2021 = $tmp2028;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2029 = panda$core$String$convert$R$panda$core$String(value2015);
        panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2029, &$s2030);
        bit2021 = $tmp2031;
    }
    }
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2032, bit2021);
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, &$s2034);
    return $tmp2035;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2037;
    panda$core$Bit $tmp2036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2036.value);
    panda$core$Object* $tmp2038 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2039 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2038));
    cl2037 = $tmp2039;
    PANDA_ASSERT(((panda$core$Bit) { cl2037 != NULL }).value);
    panda$core$Bit $tmp2040 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2037);
    if ($tmp2040.value) {
    {
        panda$core$String* $tmp2042 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2041, $tmp2042);
        panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2043, &$s2044);
        return $tmp2045;
    }
    }
    else {
    {
        return &$s2046;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2050;
    panda$core$String* result2053;
    panda$core$Bit $tmp2047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2047.value);
    panda$core$Int64 $tmp2048 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2048, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2049.value);
    panda$core$Object* $tmp2051 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2052 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2051), p_out);
    base2050 = $tmp2052;
    panda$core$String* $tmp2054 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2053 = $tmp2054;
    panda$core$Int64 $tmp2055 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2055.value) {
        case 52:
        {
            panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2056, base2050);
            panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2057, &$s2058);
            return $tmp2059;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2060, base2050);
            panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, &$s2062);
            return $tmp2063;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2064, base2050);
            panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
            return $tmp2067;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_t, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2077;
    panda$core$String* trueLabel2080;
    panda$core$String* falseLabel2082;
    panda$core$String* merge2084;
    panda$core$String* result2086;
    panda$core$Bit $tmp2068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->kind, ((panda$core$Int64) { 1044 }));
    PANDA_ASSERT($tmp2068.value);
    panda$core$Int64 $tmp2069 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->children);
    panda$core$Bit $tmp2070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2069, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2070.value);
    panda$core$Object* $tmp2071 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2072 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2073 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2071)->type, $tmp2072);
    PANDA_ASSERT($tmp2073.value);
    panda$core$Object* $tmp2074 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2075 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$Bit $tmp2076 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2074)->type, ((org$pandalanguage$pandac$IRNode*) $tmp2075)->type);
    PANDA_ASSERT($tmp2076.value);
    panda$core$Object* $tmp2078 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2079 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2078), p_out);
    test2077 = $tmp2079;
    panda$core$String* $tmp2081 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel2080 = $tmp2081;
    panda$core$String* $tmp2083 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel2082 = $tmp2083;
    panda$core$String* $tmp2085 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    merge2084 = $tmp2085;
    panda$core$String* $tmp2087 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2086 = $tmp2087;
    panda$core$Object* $tmp2088 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2089 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2088)->type);
    panda$core$String* $tmp2090 = panda$core$String$convert$R$panda$core$String($tmp2089);
    panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, &$s2091);
    panda$core$String* $tmp2093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, result2086);
    panda$core$String* $tmp2095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2093, &$s2094);
    (($fn2096) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2095);
    panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2097, test2077);
    panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2098, &$s2099);
    panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2100, trueLabel2080);
    panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2101, &$s2102);
    panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2103, falseLabel2082);
    panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2104, &$s2105);
    (($fn2107) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2106);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel2080, p_out);
    panda$core$String* $tmp2108 = panda$core$String$convert$R$panda$core$String(result2086);
    panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2108, &$s2109);
    panda$core$Object* $tmp2111 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2112 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2111), p_out);
    panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2110, $tmp2112);
    panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2113, &$s2114);
    (($fn2116) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2115);
    panda$core$String* $tmp2118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2117, merge2084);
    panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2118, &$s2119);
    (($fn2121) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2120);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel2082, p_out);
    panda$core$String* $tmp2122 = panda$core$String$convert$R$panda$core$String(result2086);
    panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2123);
    panda$core$Object* $tmp2125 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->children, ((panda$core$Int64) { 2 }));
    panda$core$String* $tmp2126 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2125), p_out);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, $tmp2126);
    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2127, &$s2128);
    (($fn2130) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2129);
    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2131, merge2084);
    panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, &$s2133);
    (($fn2135) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2134);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, merge2084, p_out);
    return result2086;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2149;
    panda$core$String* result2152;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2136 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2136;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2137 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2137;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2138 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2138;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2139 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2139;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2140 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2140;
        }
        break;
        case 1045:
        {
            panda$core$String* $tmp2141 = org$pandalanguage$pandac$CCodeGenerator$getRealReference$org$pandalanguage$pandac$IRNode$panda$io$OutputStream$R$panda$core$String(self, p_expr, ((panda$io$OutputStream*) p_out));
            return $tmp2141;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2142 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2142;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2143 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2143;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2144 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2144;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2145 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2145;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2146 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2146;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2147 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2147;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2148 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2148;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2150 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2151 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2150), p_out);
            value2149 = $tmp2151;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2149));
            return value2149;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp2153 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2152 = ((panda$core$String*) $tmp2153);
            PANDA_ASSERT(((panda$core$Bit) { result2152 != NULL }).value);
            return result2152;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2154 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2154;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2155 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2155;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2156 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2156;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2157 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2157;
        }
        break;
        case 1044:
        {
            panda$core$String* $tmp2158 = org$pandalanguage$pandac$CCodeGenerator$getTernaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2158;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2159 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2159;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2164;
    org$pandalanguage$pandac$IRNode* s2176;
    panda$core$Bit $tmp2160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2160.value);
    (($fn2162) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2161);
    panda$core$Int64 $tmp2163 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2163;
    {
        ITable* $tmp2165 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2165->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2165 = $tmp2165->next;
        }
        $fn2167 $tmp2166 = $tmp2165->methods[0];
        panda$collections$Iterator* $tmp2168 = $tmp2166(((panda$collections$Iterable*) p_block->children));
        s$Iter2164 = $tmp2168;
        $l2169:;
        ITable* $tmp2171 = s$Iter2164->$class->itable;
        while ($tmp2171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2171 = $tmp2171->next;
        }
        $fn2173 $tmp2172 = $tmp2171->methods[0];
        panda$core$Bit $tmp2174 = $tmp2172(s$Iter2164);
        panda$core$Bit $tmp2175 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2174);
        if (!$tmp2175.value) goto $l2170;
        {
            ITable* $tmp2177 = s$Iter2164->$class->itable;
            while ($tmp2177->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2177 = $tmp2177->next;
            }
            $fn2179 $tmp2178 = $tmp2177->methods[1];
            panda$core$Object* $tmp2180 = $tmp2178(s$Iter2164);
            s2176 = ((org$pandalanguage$pandac$IRNode*) $tmp2180);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2176, p_out);
        }
        goto $l2169;
        $l2170:;
    }
    panda$core$Int64 $tmp2181 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2181;
    (($fn2183) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2182);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2184;
    panda$core$String* $match$1320_92185;
    panda$core$String* ptr2190;
    panda$core$String* arg2193;
    panda$core$String* base2213;
    panda$core$String* index2216;
    panda$core$String* value2219;
    m2184 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1320_92185 = ((org$pandalanguage$pandac$Symbol*) m2184->value)->name;
        panda$core$Bit $tmp2187 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1320_92185, &$s2186);
        if ($tmp2187.value) {
        {
            panda$core$Int64 $tmp2188 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2188, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2189.value);
            panda$core$Object* $tmp2191 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2192 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2191), p_out);
            ptr2190 = $tmp2192;
            panda$core$Object* $tmp2194 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2195 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2194));
            panda$core$String* $tmp2196 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2195, p_out);
            arg2193 = $tmp2196;
            panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2197, arg2193);
            panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, &$s2199);
            panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2200, ptr2190);
            panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, &$s2202);
            (($fn2204) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2203);
        }
        }
        else {
        panda$core$Bit $tmp2206 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1320_92185, &$s2205);
        if ($tmp2206.value) {
        {
            panda$core$Int64 $tmp2207 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2207, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2208.value);
            panda$core$Object* $tmp2209 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2210 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2209));
            panda$core$Int64 $tmp2211 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2210->type->subtypes);
            panda$core$Bit $tmp2212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2211, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2212.value);
            panda$core$Object* $tmp2214 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2215 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2214), p_out);
            base2213 = $tmp2215;
            panda$core$Object* $tmp2217 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2218 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2217), p_out);
            index2216 = $tmp2218;
            panda$core$Object* $tmp2220 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2221 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2220));
            panda$core$String* $tmp2222 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2221, p_out);
            value2219 = $tmp2222;
            panda$core$String* $tmp2223 = panda$core$String$convert$R$panda$core$String(base2213);
            panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2223, &$s2224);
            panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2225, index2216);
            panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, &$s2227);
            panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2228, value2219);
            panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, &$s2230);
            (($fn2232) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2231);
        }
        }
        else {
        panda$core$Bit $tmp2234 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1320_92185, &$s2233);
        if ($tmp2234.value) {
        {
            panda$core$Int64 $tmp2235 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2235, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2236.value);
            panda$core$Object* $tmp2238 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2239 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2238), p_out);
            panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2237, $tmp2239);
            panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, &$s2241);
            (($fn2243) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2242);
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
    org$pandalanguage$pandac$MethodDecl* m2245;
    org$pandalanguage$pandac$Type* actualMethodType2249;
    panda$core$String* actualResultType2250;
    panda$core$Bit isSuper2251;
    panda$collections$Array* args2271;
    panda$core$Int64 offset2274;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2279;
    panda$core$String* arg2294;
    panda$core$String* refTarget2315;
    panda$core$String* methodRef2319;
    panda$core$String* separator2321;
    panda$core$String* indirectVar2325;
    panda$core$String* resultType2328;
    panda$collections$Iterator* a$Iter2352;
    panda$core$String* a2364;
    panda$core$Bit $tmp2244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2244.value);
    m2245 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2247 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2245->owner)->name, &$s2246);
    if ($tmp2247.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2248 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2245->owner);
    if ($tmp2248.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2245);
    }
    }
    panda$core$Int64 $tmp2253 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2254 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2253, ((panda$core$Int64) { 1 }));
    bool $tmp2252 = $tmp2254.value;
    if (!$tmp2252) goto $l2255;
    panda$core$Object* $tmp2256 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2256)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2252 = $tmp2257.value;
    $l2255:;
    panda$core$Bit $tmp2258 = { $tmp2252 };
    isSuper2251 = $tmp2258;
    panda$core$Bit $tmp2260 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2251);
    bool $tmp2259 = $tmp2260.value;
    if (!$tmp2259) goto $l2261;
    panda$core$Bit $tmp2262 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2245);
    $tmp2259 = $tmp2262.value;
    $l2261:;
    panda$core$Bit $tmp2263 = { $tmp2259 };
    if ($tmp2263.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2264 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2245);
        actualMethodType2249 = $tmp2264;
        panda$core$Int64 $tmp2265 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2249->subtypes);
        panda$core$Int64 $tmp2266 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2265, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2267 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2249->subtypes, $tmp2266);
        panda$core$String* $tmp2268 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2267));
        actualResultType2250 = $tmp2268;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2269 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2245);
        actualMethodType2249 = $tmp2269;
        panda$core$String* $tmp2270 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2250 = $tmp2270;
    }
    }
    panda$collections$Array* $tmp2272 = (panda$collections$Array*) malloc(40);
    $tmp2272->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2272->refCount.value = 1;
    panda$collections$Array$init($tmp2272);
    args2271 = $tmp2272;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2271, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2275 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2276 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2249->subtypes);
    panda$core$Int64 $tmp2277 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2275, $tmp2276);
    panda$core$Int64 $tmp2278 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2277, ((panda$core$Int64) { 1 }));
    offset2274 = $tmp2278;
    panda$core$Int64 $tmp2280 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2279, ((panda$core$Int64) { 0 }), $tmp2280, ((panda$core$Bit) { false }));
    int64_t $tmp2282 = $tmp2279.min.value;
    panda$core$Int64 i2281 = { $tmp2282 };
    int64_t $tmp2284 = $tmp2279.max.value;
    bool $tmp2285 = $tmp2279.inclusive.value;
    if ($tmp2285) goto $l2292; else goto $l2293;
    $l2292:;
    if ($tmp2282 <= $tmp2284) goto $l2286; else goto $l2288;
    $l2293:;
    if ($tmp2282 < $tmp2284) goto $l2286; else goto $l2288;
    $l2286:;
    {
        panda$core$Object* $tmp2295 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2281);
        panda$core$String* $tmp2296 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2295), p_out);
        arg2294 = $tmp2296;
        panda$core$Bit $tmp2298 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2281, offset2274);
        bool $tmp2297 = $tmp2298.value;
        if (!$tmp2297) goto $l2299;
        panda$core$Int64 $tmp2300 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2281, offset2274);
        panda$core$Object* $tmp2301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2249->subtypes, $tmp2300);
        panda$core$Object* $tmp2302 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2281);
        panda$core$Bit $tmp2303 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2301), ((org$pandalanguage$pandac$IRNode*) $tmp2302)->type);
        $tmp2297 = $tmp2303.value;
        $l2299:;
        panda$core$Bit $tmp2304 = { $tmp2297 };
        if ($tmp2304.value) {
        {
            panda$core$Object* $tmp2305 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_call->children, i2281);
            panda$core$Int64 $tmp2306 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2281, offset2274);
            panda$core$Object* $tmp2307 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2249->subtypes, $tmp2306);
            panda$core$String* $tmp2308 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2294, ((org$pandalanguage$pandac$IRNode*) $tmp2305)->type, ((org$pandalanguage$pandac$Type*) $tmp2307), p_out);
            arg2294 = $tmp2308;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2271, ((panda$core$Object*) arg2294));
    }
    $l2289:;
    int64_t $tmp2310 = $tmp2284 - i2281.value;
    if ($tmp2285) goto $l2311; else goto $l2312;
    $l2311:;
    if ($tmp2310 >= 1) goto $l2309; else goto $l2288;
    $l2312:;
    if ($tmp2310 > 1) goto $l2309; else goto $l2288;
    $l2309:;
    i2281.value += 1;
    goto $l2286;
    $l2288:;
    panda$core$Int64 $tmp2316 = panda$collections$Array$get_count$R$panda$core$Int64(args2271);
    panda$core$Bit $tmp2317 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2316, ((panda$core$Int64) { 0 }));
    if ($tmp2317.value) {
    {
        panda$core$Object* $tmp2318 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2271, ((panda$core$Int64) { 0 }));
        refTarget2315 = ((panda$core$String*) $tmp2318);
    }
    }
    else {
    {
        refTarget2315 = NULL;
    }
    }
    panda$core$String* $tmp2320 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2315, m2245, isSuper2251, p_out);
    methodRef2319 = $tmp2320;
    separator2321 = &$s2322;
    panda$core$Bit $tmp2323 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2245);
    if ($tmp2323.value) {
    {
        panda$core$Int64 $tmp2324 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2324;
        panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2326, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2325 = $tmp2327;
        panda$core$String* $tmp2329 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2328 = $tmp2329;
        panda$core$String* $tmp2330 = panda$core$String$convert$R$panda$core$String(resultType2328);
        panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2331);
        panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, indirectVar2325);
        panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2333, &$s2334);
        (($fn2336) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2335);
        panda$core$String* $tmp2337 = panda$core$String$convert$R$panda$core$String(methodRef2319);
        panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, &$s2338);
        panda$core$String* $tmp2340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, resultType2328);
        panda$core$String* $tmp2342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2340, &$s2341);
        panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2342, indirectVar2325);
        panda$core$String* $tmp2345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2343, &$s2344);
        (($fn2346) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2345);
        separator2321 = &$s2347;
    }
    }
    else {
    {
        panda$core$String* $tmp2348 = panda$core$String$convert$R$panda$core$String(methodRef2319);
        panda$core$String* $tmp2350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2348, &$s2349);
        (($fn2351) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2350);
    }
    }
    {
        ITable* $tmp2353 = ((panda$collections$Iterable*) args2271)->$class->itable;
        while ($tmp2353->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2353 = $tmp2353->next;
        }
        $fn2355 $tmp2354 = $tmp2353->methods[0];
        panda$collections$Iterator* $tmp2356 = $tmp2354(((panda$collections$Iterable*) args2271));
        a$Iter2352 = $tmp2356;
        $l2357:;
        ITable* $tmp2359 = a$Iter2352->$class->itable;
        while ($tmp2359->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2359 = $tmp2359->next;
        }
        $fn2361 $tmp2360 = $tmp2359->methods[0];
        panda$core$Bit $tmp2362 = $tmp2360(a$Iter2352);
        panda$core$Bit $tmp2363 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2362);
        if (!$tmp2363.value) goto $l2358;
        {
            ITable* $tmp2365 = a$Iter2352->$class->itable;
            while ($tmp2365->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2365 = $tmp2365->next;
            }
            $fn2367 $tmp2366 = $tmp2365->methods[1];
            panda$core$Object* $tmp2368 = $tmp2366(a$Iter2352);
            a2364 = ((panda$core$String*) $tmp2368);
            (($fn2369) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2321);
            (($fn2370) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2364);
            separator2321 = &$s2371;
        }
        goto $l2357;
        $l2358:;
    }
    (($fn2373) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2372);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2385;
    panda$core$Bit $tmp2374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2374.value);
    panda$core$Int64 $tmp2376 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2376, ((panda$core$Int64) { 2 }));
    bool $tmp2375 = $tmp2377.value;
    if ($tmp2375) goto $l2378;
    panda$core$Int64 $tmp2379 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2379, ((panda$core$Int64) { 3 }));
    $tmp2375 = $tmp2380.value;
    $l2378:;
    panda$core$Bit $tmp2381 = { $tmp2375 };
    PANDA_ASSERT($tmp2381.value);
    panda$core$Object* $tmp2382 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2383 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2384 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2382)->type, $tmp2383);
    PANDA_ASSERT($tmp2384.value);
    panda$core$Object* $tmp2386 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2387 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2386), p_out);
    test2385 = $tmp2387;
    panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2388, test2385);
    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, &$s2390);
    (($fn2392) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2391);
    panda$core$Object* $tmp2393 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2393), p_out);
    (($fn2395) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2394);
    panda$core$Int64 $tmp2396 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2396, ((panda$core$Int64) { 3 }));
    if ($tmp2397.value) {
    {
        (($fn2399) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2398);
        panda$core$Object* $tmp2400 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2400), p_out);
        (($fn2402) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2401);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2406;
    panda$core$String* range2417;
    org$pandalanguage$pandac$IRNode* block2420;
    org$pandalanguage$pandac$Type* t2422;
    panda$core$String* llt2425;
    panda$core$String* indexType2427;
    org$pandalanguage$pandac$ClassDecl* cl2433;
    org$pandalanguage$pandac$FieldDecl* field2441;
    panda$core$String* numberType2447;
    panda$core$String* index2450;
    panda$core$String* start2452;
    panda$core$String* indexValuePtr2464;
    panda$core$String* end2478;
    panda$core$String* inclusive2490;
    panda$core$String* loopStart2500;
    panda$core$String* loopBody2502;
    panda$core$String* loopEnd2504;
    panda$core$String* loopTest2506;
    panda$core$String* forwardEntry2510;
    panda$core$String* backwardEntry2512;
    panda$core$String* signPrefix2514;
    panda$core$String* forwardEntryInclusive2526;
    panda$core$String* forwardEntryExclusive2528;
    panda$core$String* loopInc2570;
    panda$core$String* forwardDelta2572;
    panda$core$String* forwardInclusiveLabel2587;
    panda$core$String* forwardExclusiveLabel2589;
    panda$core$String* forwardExclusiveTest2614;
    panda$core$String* inc2627;
    panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2403.value);
    panda$core$Int64 $tmp2404 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2404, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2405.value);
    panda$core$Object* $tmp2407 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2406 = ((org$pandalanguage$pandac$IRNode*) $tmp2407);
    panda$core$Object* $tmp2408 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2408)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2409.value);
    panda$core$Object* $tmp2410 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2411 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2410)->type->subtypes);
    panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2411, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2412.value);
    panda$core$Object* $tmp2413 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2413)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2416 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2414))->name, &$s2415);
    PANDA_ASSERT($tmp2416.value);
    panda$core$Object* $tmp2418 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2419 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2418), p_out);
    range2417 = $tmp2419;
    panda$core$Object* $tmp2421 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2420 = ((org$pandalanguage$pandac$IRNode*) $tmp2421);
    panda$core$Object* $tmp2423 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2424 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2423)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2422 = ((org$pandalanguage$pandac$Type*) $tmp2424);
    panda$core$String* $tmp2426 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2422);
    llt2425 = $tmp2426;
    panda$core$Bit $tmp2428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2422->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2428.value) {
    {
        panda$core$Int64 $tmp2429 = panda$collections$Array$get_count$R$panda$core$Int64(t2422->subtypes);
        panda$core$Bit $tmp2430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2429, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2430.value);
        panda$core$Object* $tmp2431 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2422->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2432 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2431));
        indexType2427 = $tmp2432;
    }
    }
    else {
    {
        indexType2427 = llt2425;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2434 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2422);
    cl2433 = $tmp2434;
    PANDA_ASSERT(((panda$core$Bit) { cl2433 != NULL }).value);
    panda$collections$ListView* $tmp2435 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2433);
    ITable* $tmp2436 = ((panda$collections$CollectionView*) $tmp2435)->$class->itable;
    while ($tmp2436->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2436 = $tmp2436->next;
    }
    $fn2438 $tmp2437 = $tmp2436->methods[0];
    panda$core$Int64 $tmp2439 = $tmp2437(((panda$collections$CollectionView*) $tmp2435));
    panda$core$Bit $tmp2440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2439, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2440.value);
    panda$collections$ListView* $tmp2442 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2433);
    ITable* $tmp2443 = $tmp2442->$class->itable;
    while ($tmp2443->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2443 = $tmp2443->next;
    }
    $fn2445 $tmp2444 = $tmp2443->methods[0];
    panda$core$Object* $tmp2446 = $tmp2444($tmp2442, ((panda$core$Int64) { 0 }));
    field2441 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2446);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2441);
    panda$core$String* $tmp2448 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2441->type);
    numberType2447 = $tmp2448;
    panda$core$Bit $tmp2449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2406->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2449.value);
    panda$core$String* $tmp2451 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2406->payload));
    index2450 = $tmp2451;
    panda$core$String* $tmp2453 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2452 = $tmp2453;
    panda$core$String* $tmp2454 = panda$core$String$convert$R$panda$core$String(numberType2447);
    panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2454, &$s2455);
    panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2456, start2452);
    panda$core$String* $tmp2459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2457, &$s2458);
    panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2459, range2417);
    panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, &$s2461);
    (($fn2463) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2462);
    panda$core$String* $tmp2465 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2464 = $tmp2465;
    org$pandalanguage$pandac$Type* $tmp2466 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2433);
    panda$core$String* $tmp2467 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2466);
    panda$core$String* $tmp2468 = panda$core$String$convert$R$panda$core$String($tmp2467);
    panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2468, &$s2469);
    panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, index2450);
    panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2471, &$s2472);
    panda$core$String* $tmp2474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, start2452);
    panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2474, &$s2475);
    (($fn2477) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2476);
    panda$core$String* $tmp2479 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2478 = $tmp2479;
    panda$core$String* $tmp2480 = panda$core$String$convert$R$panda$core$String(numberType2447);
    panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2480, &$s2481);
    panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, end2478);
    panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2483, &$s2484);
    panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, range2417);
    panda$core$String* $tmp2488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2486, &$s2487);
    (($fn2489) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2488);
    panda$core$String* $tmp2491 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2490 = $tmp2491;
    panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2492, inclusive2490);
    panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2493, &$s2494);
    panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, range2417);
    panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, &$s2497);
    (($fn2499) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2498);
    panda$core$String* $tmp2501 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2500 = $tmp2501;
    panda$core$String* $tmp2503 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2502 = $tmp2503;
    panda$core$String* $tmp2505 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2504 = $tmp2505;
    panda$core$String* $tmp2507 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2506 = $tmp2507;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2508 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2508->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2508->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2508, ((panda$core$String*) p_f->payload), loopEnd2504, loopTest2506);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2508));
    panda$core$String* $tmp2511 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2510 = $tmp2511;
    panda$core$String* $tmp2513 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2512 = $tmp2513;
    panda$core$Bit $tmp2516 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2422)->name, &$s2515);
    if ($tmp2516.value) {
    {
        signPrefix2514 = &$s2517;
    }
    }
    else {
    {
        panda$core$Bit $tmp2520 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2422)->name, &$s2519);
        bool $tmp2518 = $tmp2520.value;
        if ($tmp2518) goto $l2521;
        panda$core$Bit $tmp2523 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2422)->name, &$s2522);
        $tmp2518 = $tmp2523.value;
        $l2521:;
        panda$core$Bit $tmp2524 = { $tmp2518 };
        PANDA_ASSERT($tmp2524.value);
        signPrefix2514 = &$s2525;
    }
    }
    panda$core$String* $tmp2527 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2526 = $tmp2527;
    panda$core$String* $tmp2529 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2528 = $tmp2529;
    panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2530, inclusive2490);
    panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
    panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, forwardEntryInclusive2526);
    panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2535);
    panda$core$String* $tmp2537 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2528);
    panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
    panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, $tmp2539);
    (($fn2541) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2540);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2526, p_out);
    panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2542, start2452);
    panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, &$s2544);
    panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2545, end2478);
    panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2547);
    panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2548, loopStart2500);
    panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, &$s2550);
    panda$core$String* $tmp2552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, loopEnd2504);
    panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, &$s2553);
    (($fn2555) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2554);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2528, p_out);
    panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2556, start2452);
    panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, &$s2558);
    panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, end2478);
    panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, &$s2561);
    panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, loopStart2500);
    panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, &$s2564);
    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, loopEnd2504);
    panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, &$s2567);
    (($fn2569) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2568);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2500, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2420, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2506, p_out);
    panda$core$String* $tmp2571 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2570 = $tmp2571;
    panda$core$String* $tmp2573 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2572 = $tmp2573;
    panda$core$String* $tmp2574 = panda$core$String$convert$R$panda$core$String(numberType2447);
    panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2574, &$s2575);
    panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, forwardDelta2572);
    panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, &$s2578);
    panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, end2478);
    panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2581);
    panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, index2450);
    panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2584);
    (($fn2586) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2585);
    panda$core$String* $tmp2588 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2587 = $tmp2588;
    panda$core$String* $tmp2590 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2589 = $tmp2590;
    panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2591, inclusive2490);
    panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2592, &$s2593);
    panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, forwardInclusiveLabel2587);
    panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2595, &$s2596);
    panda$core$String* $tmp2598 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2589);
    panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2598, &$s2599);
    panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, $tmp2600);
    (($fn2602) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2601);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2587, p_out);
    panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2603, forwardDelta2572);
    panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, &$s2605);
    panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, loopInc2570);
    panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2607, &$s2608);
    panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, loopEnd2504);
    panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2610, &$s2611);
    (($fn2613) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2612);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2589, p_out);
    panda$core$String* $tmp2615 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2614 = $tmp2615;
    panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2616, forwardDelta2572);
    panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, &$s2618);
    panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, loopInc2570);
    panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2620, &$s2621);
    panda$core$String* $tmp2623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, loopEnd2504);
    panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2623, &$s2624);
    (($fn2626) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2625);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2570, p_out);
    panda$core$String* $tmp2628 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2627 = $tmp2628;
    panda$core$String* $tmp2629 = panda$core$String$convert$R$panda$core$String(index2450);
    panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, &$s2630);
    (($fn2632) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2631);
    panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2633, loopStart2500);
    panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, &$s2635);
    (($fn2637) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2636);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2504, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2641;
    panda$core$String* range2652;
    org$pandalanguage$pandac$IRNode* block2655;
    org$pandalanguage$pandac$Type* t2657;
    panda$core$String* llt2660;
    panda$core$String* indexType2662;
    org$pandalanguage$pandac$ClassDecl* cl2668;
    org$pandalanguage$pandac$FieldDecl* field2676;
    panda$core$String* numberType2682;
    panda$core$String* index2685;
    panda$core$String* start2687;
    panda$core$String* indexValuePtr2699;
    panda$core$String* end2713;
    panda$core$String* step2725;
    panda$core$String* inclusive2737;
    panda$core$String* loopStart2747;
    panda$core$String* loopBody2749;
    panda$core$String* loopEnd2751;
    panda$core$String* loopTest2753;
    panda$core$String* forwardEntry2757;
    panda$core$String* backwardEntry2759;
    panda$core$String* signPrefix2761;
    panda$core$String* direction2773;
    panda$core$String* forwardEntryInclusive2797;
    panda$core$String* forwardEntryExclusive2799;
    panda$core$String* backwardEntryInclusive2841;
    panda$core$String* backwardEntryExclusive2843;
    panda$core$String* backwardEntryExclusiveTest2871;
    panda$core$String* loopInc2887;
    panda$core$String* forwardLabel2889;
    panda$core$String* backwardLabel2891;
    panda$core$String* forwardDelta2904;
    panda$core$String* forwardInclusiveLabel2919;
    panda$core$String* forwardExclusiveLabel2921;
    panda$core$String* forwardExclusiveTest2949;
    panda$core$String* backwardDelta2965;
    panda$core$String* backwardInclusiveLabel2980;
    panda$core$String* backwardExclusiveLabel2982;
    panda$core$String* inc3024;
    panda$core$Bit $tmp2638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2638.value);
    panda$core$Int64 $tmp2639 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2639, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2640.value);
    panda$core$Object* $tmp2642 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2641 = ((org$pandalanguage$pandac$IRNode*) $tmp2642);
    panda$core$Object* $tmp2643 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2643)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2644.value);
    panda$core$Object* $tmp2645 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2646 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2645)->type->subtypes);
    panda$core$Bit $tmp2647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2646, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2647.value);
    panda$core$Object* $tmp2648 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2648)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2651 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2649))->name, &$s2650);
    PANDA_ASSERT($tmp2651.value);
    panda$core$Object* $tmp2653 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2654 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2653), p_out);
    range2652 = $tmp2654;
    panda$core$Object* $tmp2656 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2655 = ((org$pandalanguage$pandac$IRNode*) $tmp2656);
    panda$core$Object* $tmp2658 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2659 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2658)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2657 = ((org$pandalanguage$pandac$Type*) $tmp2659);
    panda$core$String* $tmp2661 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2657);
    llt2660 = $tmp2661;
    panda$core$Bit $tmp2663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2657->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2663.value) {
    {
        panda$core$Int64 $tmp2664 = panda$collections$Array$get_count$R$panda$core$Int64(t2657->subtypes);
        panda$core$Bit $tmp2665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2664, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2665.value);
        panda$core$Object* $tmp2666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2657->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2667 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2666));
        indexType2662 = $tmp2667;
    }
    }
    else {
    {
        indexType2662 = llt2660;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2669 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2657);
    cl2668 = $tmp2669;
    PANDA_ASSERT(((panda$core$Bit) { cl2668 != NULL }).value);
    panda$collections$ListView* $tmp2670 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2668);
    ITable* $tmp2671 = ((panda$collections$CollectionView*) $tmp2670)->$class->itable;
    while ($tmp2671->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2671 = $tmp2671->next;
    }
    $fn2673 $tmp2672 = $tmp2671->methods[0];
    panda$core$Int64 $tmp2674 = $tmp2672(((panda$collections$CollectionView*) $tmp2670));
    panda$core$Bit $tmp2675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2674, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2675.value);
    panda$collections$ListView* $tmp2677 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2668);
    ITable* $tmp2678 = $tmp2677->$class->itable;
    while ($tmp2678->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2678 = $tmp2678->next;
    }
    $fn2680 $tmp2679 = $tmp2678->methods[0];
    panda$core$Object* $tmp2681 = $tmp2679($tmp2677, ((panda$core$Int64) { 0 }));
    field2676 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2681);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2676);
    panda$core$String* $tmp2683 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2676->type);
    numberType2682 = $tmp2683;
    panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2641->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2684.value);
    panda$core$String* $tmp2686 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2641->payload));
    index2685 = $tmp2686;
    panda$core$String* $tmp2688 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2687 = $tmp2688;
    panda$core$String* $tmp2689 = panda$core$String$convert$R$panda$core$String(numberType2682);
    panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, &$s2690);
    panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, start2687);
    panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2692, &$s2693);
    panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, range2652);
    panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
    (($fn2698) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2697);
    panda$core$String* $tmp2700 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2699 = $tmp2700;
    org$pandalanguage$pandac$Type* $tmp2701 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2668);
    panda$core$String* $tmp2702 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2701);
    panda$core$String* $tmp2703 = panda$core$String$convert$R$panda$core$String($tmp2702);
    panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, &$s2704);
    panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, index2685);
    panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, &$s2707);
    panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, start2687);
    panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, &$s2710);
    (($fn2712) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2711);
    panda$core$String* $tmp2714 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2713 = $tmp2714;
    panda$core$String* $tmp2715 = panda$core$String$convert$R$panda$core$String(numberType2682);
    panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, &$s2716);
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, end2713);
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, range2652);
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, &$s2722);
    (($fn2724) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2723);
    panda$core$String* $tmp2726 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2725 = $tmp2726;
    panda$core$String* $tmp2727 = panda$core$String$convert$R$panda$core$String(numberType2682);
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, &$s2728);
    panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, step2725);
    panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2731);
    panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, range2652);
    panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
    (($fn2736) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2735);
    panda$core$String* $tmp2738 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2737 = $tmp2738;
    panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2739, inclusive2737);
    panda$core$String* $tmp2742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, &$s2741);
    panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2742, range2652);
    panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2743, &$s2744);
    (($fn2746) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2745);
    panda$core$String* $tmp2748 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2747 = $tmp2748;
    panda$core$String* $tmp2750 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2749 = $tmp2750;
    panda$core$String* $tmp2752 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2751 = $tmp2752;
    panda$core$String* $tmp2754 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2753 = $tmp2754;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2755 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2755->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2755->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2755, ((panda$core$String*) p_f->payload), loopEnd2751, loopTest2753);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2755));
    panda$core$String* $tmp2758 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2757 = $tmp2758;
    panda$core$String* $tmp2760 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2759 = $tmp2760;
    panda$core$Bit $tmp2763 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2657)->name, &$s2762);
    if ($tmp2763.value) {
    {
        signPrefix2761 = &$s2764;
    }
    }
    else {
    {
        panda$core$Bit $tmp2767 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2657)->name, &$s2766);
        bool $tmp2765 = $tmp2767.value;
        if ($tmp2765) goto $l2768;
        panda$core$Bit $tmp2770 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2657)->name, &$s2769);
        $tmp2765 = $tmp2770.value;
        $l2768:;
        panda$core$Bit $tmp2771 = { $tmp2765 };
        PANDA_ASSERT($tmp2771.value);
        signPrefix2761 = &$s2772;
    }
    }
    panda$core$Bit $tmp2775 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2761, &$s2774);
    if ($tmp2775.value) {
    {
        panda$core$String* $tmp2776 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2773 = $tmp2776;
        panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2777, direction2773);
        panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
        panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, step2725);
        panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2782);
        (($fn2784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2783);
    }
    }
    else {
    {
        direction2773 = &$s2785;
    }
    }
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2786, direction2773);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, &$s2788);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, forwardEntry2757);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, &$s2791);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, backwardEntry2759);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
    (($fn2796) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2795);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2757, p_out);
    panda$core$String* $tmp2798 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2797 = $tmp2798;
    panda$core$String* $tmp2800 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2799 = $tmp2800;
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2801, inclusive2737);
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2802, &$s2803);
    panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, forwardEntryInclusive2797);
    panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, &$s2806);
    panda$core$String* $tmp2808 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2799);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, $tmp2810);
    (($fn2812) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2811);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2797, p_out);
    panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2813, start2687);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, &$s2815);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, end2713);
    panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2818);
    panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, loopStart2747);
    panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, &$s2821);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, loopEnd2751);
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, &$s2824);
    (($fn2826) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2825);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2799, p_out);
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2827, start2687);
    panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, &$s2829);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, end2713);
    panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, &$s2832);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, loopStart2747);
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, &$s2835);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, loopEnd2751);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, &$s2838);
    (($fn2840) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2839);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2759, p_out);
    panda$core$String* $tmp2842 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2841 = $tmp2842;
    panda$core$String* $tmp2844 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2843 = $tmp2844;
    panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2845, inclusive2737);
    panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2846, &$s2847);
    panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2848, backwardEntryInclusive2841);
    panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, &$s2850);
    panda$core$String* $tmp2852 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive2843);
    panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, &$s2853);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, $tmp2854);
    (($fn2856) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2855);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2841, p_out);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2857, start2687);
    panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2859);
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, end2713);
    panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2862);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2863, loopStart2747);
    panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, &$s2865);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, loopEnd2751);
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2868);
    (($fn2870) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2869);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2843, p_out);
    panda$core$String* $tmp2872 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2871 = $tmp2872;
    panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2873, start2687);
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2874, &$s2875);
    panda$core$String* $tmp2877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2876, end2713);
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2877, &$s2878);
    panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, loopStart2747);
    panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, &$s2881);
    panda$core$String* $tmp2883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, loopEnd2751);
    panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2883, &$s2884);
    (($fn2886) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2885);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2747, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2655, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2753, p_out);
    panda$core$String* $tmp2888 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2887 = $tmp2888;
    panda$core$String* $tmp2890 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2889 = $tmp2890;
    panda$core$String* $tmp2892 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2891 = $tmp2892;
    panda$core$String* $tmp2894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2893, direction2773);
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2894, &$s2895);
    panda$core$String* $tmp2897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, forwardLabel2889);
    panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2897, &$s2898);
    panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2899, backwardLabel2891);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, &$s2901);
    (($fn2903) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2902);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2889, p_out);
    panda$core$String* $tmp2905 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2904 = $tmp2905;
    panda$core$String* $tmp2906 = panda$core$String$convert$R$panda$core$String(numberType2682);
    panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2906, &$s2907);
    panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, forwardDelta2904);
    panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2909, &$s2910);
    panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2911, end2713);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2912, &$s2913);
    panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, index2685);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, &$s2916);
    (($fn2918) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2917);
    panda$core$String* $tmp2920 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2919 = $tmp2920;
    panda$core$String* $tmp2922 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2921 = $tmp2922;
    panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2923, inclusive2737);
    panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, &$s2925);
    panda$core$String* $tmp2927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, forwardInclusiveLabel2919);
    panda$core$String* $tmp2929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, &$s2928);
    panda$core$String* $tmp2930 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2921);
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, &$s2931);
    panda$core$String* $tmp2933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2929, $tmp2932);
    (($fn2934) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2933);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2919, p_out);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2935, forwardDelta2904);
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, &$s2937);
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, step2725);
    panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, &$s2940);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2941, loopInc2887);
    panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, &$s2943);
    panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, loopEnd2751);
    panda$core$String* $tmp2947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, &$s2946);
    (($fn2948) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2947);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2921, p_out);
    panda$core$String* $tmp2950 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2949 = $tmp2950;
    panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2951, forwardDelta2904);
    panda$core$String* $tmp2954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, &$s2953);
    panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2954, step2725);
    panda$core$String* $tmp2957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2955, &$s2956);
    panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2957, loopInc2887);
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, &$s2959);
    panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, loopEnd2751);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2961, &$s2962);
    (($fn2964) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2963);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2891, p_out);
    panda$core$String* $tmp2966 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2965 = $tmp2966;
    panda$core$String* $tmp2967 = panda$core$String$convert$R$panda$core$String(numberType2682);
    panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2967, &$s2968);
    panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2969, backwardDelta2965);
    panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2970, &$s2971);
    panda$core$String* $tmp2973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, index2685);
    panda$core$String* $tmp2975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2973, &$s2974);
    panda$core$String* $tmp2976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2975, end2713);
    panda$core$String* $tmp2978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, &$s2977);
    (($fn2979) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2978);
    panda$core$String* $tmp2981 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2980 = $tmp2981;
    panda$core$String* $tmp2983 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2982 = $tmp2983;
    panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2984, inclusive2737);
    panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2985, &$s2986);
    panda$core$String* $tmp2988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, backwardInclusiveLabel2980);
    panda$core$String* $tmp2990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2988, &$s2989);
    panda$core$String* $tmp2991 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel2982);
    panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, &$s2992);
    panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2990, $tmp2993);
    (($fn2995) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2994);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2980, p_out);
    panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2996, backwardDelta2965);
    panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, &$s2998);
    panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2999, step2725);
    panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, &$s3001);
    panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, loopInc2887);
    panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, &$s3004);
    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, loopEnd2751);
    panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3006, &$s3007);
    (($fn3009) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3008);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2982, p_out);
    panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3010, backwardDelta2965);
    panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, &$s3012);
    panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, step2725);
    panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3014, &$s3015);
    panda$core$String* $tmp3017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, loopInc2887);
    panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3017, &$s3018);
    panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3019, loopEnd2751);
    panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, &$s3021);
    (($fn3023) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3022);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2887, p_out);
    panda$core$String* $tmp3025 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc3024 = $tmp3025;
    panda$core$String* $tmp3026 = panda$core$String$convert$R$panda$core$String(index2685);
    panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, &$s3027);
    panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, step2725);
    panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3029, &$s3030);
    (($fn3032) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3031);
    panda$core$String* $tmp3034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3033, loopStart2747);
    panda$core$String* $tmp3036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3034, &$s3035);
    (($fn3037) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3036);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2751, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp3038 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3039 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3038)->type);
    if ($tmp3039.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp3040 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp3041 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3040)->type);
    if ($tmp3041.value) {
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
    panda$core$String* loopStart3048;
    panda$core$String* loopEnd3050;
    panda$core$Bit $tmp3042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp3042.value);
    panda$core$Int64 $tmp3043 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp3044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3043, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3044.value);
    panda$core$Object* $tmp3045 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp3046 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3047 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3045)->type, $tmp3046);
    PANDA_ASSERT($tmp3047.value);
    panda$core$String* $tmp3049 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3048 = $tmp3049;
    panda$core$String* $tmp3051 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3050 = $tmp3051;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3052 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3052->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3052->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3052, ((panda$core$String*) p_w->payload), loopEnd3050, loopStart3048);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3052));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3048, p_out);
    panda$core$Object* $tmp3055 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3056 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3055), p_out);
    panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3054, $tmp3056);
    panda$core$String* $tmp3059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3057, &$s3058);
    panda$core$String* $tmp3060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3059, loopEnd3050);
    panda$core$String* $tmp3062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3060, &$s3061);
    (($fn3063) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3062);
    panda$core$Object* $tmp3064 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3064), p_out);
    panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3065, loopStart3048);
    panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, &$s3067);
    (($fn3069) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3068);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3050, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3076;
    panda$core$String* loopEnd3078;
    panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp3070.value);
    panda$core$Int64 $tmp3071 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp3072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3071, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3072.value);
    panda$core$Object* $tmp3073 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp3074 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3075 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3073)->type, $tmp3074);
    PANDA_ASSERT($tmp3075.value);
    panda$core$String* $tmp3077 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3076 = $tmp3077;
    panda$core$String* $tmp3079 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3078 = $tmp3079;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3080 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3080->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3080->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3080, ((panda$core$String*) p_d->payload), loopEnd3078, loopStart3076);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3080));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3076, p_out);
    panda$core$Object* $tmp3082 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3082), p_out);
    panda$core$Object* $tmp3084 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3085 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3084), p_out);
    panda$core$String* $tmp3086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3083, $tmp3085);
    panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3086, &$s3087);
    panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, loopStart3076);
    panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, &$s3090);
    (($fn3092) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3091);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3078, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3096;
    panda$core$String* loopEnd3098;
    panda$core$Bit $tmp3093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3093.value);
    panda$core$Int64 $tmp3094 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3094, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3095.value);
    panda$core$String* $tmp3097 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3096 = $tmp3097;
    panda$core$String* $tmp3099 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3098 = $tmp3099;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3100 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3100->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3100->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3100, ((panda$core$String*) p_l->payload), loopEnd3098, loopStart3096);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3100));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3096, p_out);
    (($fn3103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3102);
    panda$core$Object* $tmp3104 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3104), p_out);
    (($fn3106) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3105);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3098, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3107;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3107 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3108 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3107->type);
            panda$core$String* $tmp3109 = panda$core$String$convert$R$panda$core$String($tmp3108);
            panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, &$s3110);
            panda$core$String* $tmp3112 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3107);
            panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, $tmp3112);
            panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, &$s3114);
            (($fn3116) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3115);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3117 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3107);
                panda$core$String* $tmp3118 = panda$core$String$convert$R$panda$core$String($tmp3117);
                panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, &$s3119);
                panda$core$String* $tmp3121 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3120, $tmp3121);
                panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, &$s3123);
                (($fn3125) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3124);
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
    panda$collections$Iterator* decl$Iter3139;
    org$pandalanguage$pandac$IRNode* decl3151;
    panda$core$Bit $tmp3129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3128 = $tmp3129.value;
    if ($tmp3128) goto $l3130;
    panda$core$Bit $tmp3131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3128 = $tmp3131.value;
    $l3130:;
    panda$core$Bit $tmp3132 = { $tmp3128 };
    bool $tmp3127 = $tmp3132.value;
    if ($tmp3127) goto $l3133;
    panda$core$Bit $tmp3134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3127 = $tmp3134.value;
    $l3133:;
    panda$core$Bit $tmp3135 = { $tmp3127 };
    bool $tmp3126 = $tmp3135.value;
    if ($tmp3126) goto $l3136;
    panda$core$Bit $tmp3137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3126 = $tmp3137.value;
    $l3136:;
    panda$core$Bit $tmp3138 = { $tmp3126 };
    PANDA_ASSERT($tmp3138.value);
    {
        ITable* $tmp3140 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3140->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3140 = $tmp3140->next;
        }
        $fn3142 $tmp3141 = $tmp3140->methods[0];
        panda$collections$Iterator* $tmp3143 = $tmp3141(((panda$collections$Iterable*) p_v->children));
        decl$Iter3139 = $tmp3143;
        $l3144:;
        ITable* $tmp3146 = decl$Iter3139->$class->itable;
        while ($tmp3146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3146 = $tmp3146->next;
        }
        $fn3148 $tmp3147 = $tmp3146->methods[0];
        panda$core$Bit $tmp3149 = $tmp3147(decl$Iter3139);
        panda$core$Bit $tmp3150 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3149);
        if (!$tmp3150.value) goto $l3145;
        {
            ITable* $tmp3152 = decl$Iter3139->$class->itable;
            while ($tmp3152->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3152 = $tmp3152->next;
            }
            $fn3154 $tmp3153 = $tmp3152->methods[1];
            panda$core$Object* $tmp3155 = $tmp3153(decl$Iter3139);
            decl3151 = ((org$pandalanguage$pandac$IRNode*) $tmp3155);
            panda$core$Bit $tmp3156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3151->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3156.value);
            panda$core$Int64 $tmp3157 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(decl3151->children);
            panda$core$Bit $tmp3158 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3157, ((panda$core$Int64) { 1 }));
            if ($tmp3158.value) {
            {
                panda$core$Object* $tmp3159 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3151->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3160 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3151->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3159), ((org$pandalanguage$pandac$IRNode*) $tmp3160), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3161 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(decl3151->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3161), NULL, p_out);
            }
            }
        }
        goto $l3144;
        $l3145:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3165;
    panda$core$String* result3174;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3162 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3163 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3162, p_out);
            return $tmp3163;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3164 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3164;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3166 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3167 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3166), p_out);
            base3165 = $tmp3167;
            panda$core$String* $tmp3168 = panda$core$String$convert$R$panda$core$String(base3165);
            panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, &$s3169);
            panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, &$s3172);
            return $tmp3173;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3175 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3176 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3175), p_out);
            result3174 = $tmp3176;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result3174));
            return result3174;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3180;
    panda$core$String* value3183;
    panda$core$String* t3184;
    panda$core$Int64 op3187;
    panda$core$String* right3189;
    panda$core$Bit $tmp3177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3177.value);
    panda$core$Int64 $tmp3178 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3178, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3179.value);
    panda$core$Object* $tmp3181 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3182 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3181), p_out);
    lvalue3180 = $tmp3182;
    panda$core$Object* $tmp3185 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3186 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3185)->type);
    t3184 = $tmp3186;
    op3187 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3187, ((panda$core$Int64) { 73 }));
    if ($tmp3188.value) {
    {
        panda$core$Object* $tmp3190 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3191 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3190), p_out);
        right3189 = $tmp3191;
        value3183 = right3189;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3192 = panda$core$String$convert$R$panda$core$String(lvalue3180);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, &$s3193);
    panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, value3183);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
    (($fn3198) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3197);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    bool $tmp3199 = ((panda$core$Bit) { p_r->children != NULL }).value;
    if (!$tmp3199) goto $l3200;
    panda$core$Int64 $tmp3201 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3202 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp3201, ((panda$core$Int64) { 0 }));
    $tmp3199 = $tmp3202.value;
    $l3200:;
    panda$core$Bit $tmp3203 = { $tmp3199 };
    if ($tmp3203.value) {
    {
        panda$core$Int64 $tmp3204 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3204, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3205.value);
        panda$core$Object* $tmp3207 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3208 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3207), p_out);
        panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3206, $tmp3208);
        panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, &$s3210);
        (($fn3212) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3211);
    }
    }
    else {
    {
        (($fn3214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3213);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3218;
    panda$core$Int64 $tmp3215 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3216 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3215, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3216.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3217 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3217);
    }
    }
    panda$core$Int64 $tmp3219 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3218, ((panda$core$Int64) { 0 }), $tmp3219, ((panda$core$Bit) { false }));
    int64_t $tmp3221 = $tmp3218.min.value;
    panda$core$Int64 i3220 = { $tmp3221 };
    int64_t $tmp3223 = $tmp3218.max.value;
    bool $tmp3224 = $tmp3218.inclusive.value;
    if ($tmp3224) goto $l3231; else goto $l3232;
    $l3231:;
    if ($tmp3221 <= $tmp3223) goto $l3225; else goto $l3227;
    $l3232:;
    if ($tmp3221 < $tmp3223) goto $l3225; else goto $l3227;
    $l3225:;
    {
        panda$core$Object* $tmp3233 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3220);
        panda$core$Bit $tmp3237;
        if (((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3233)->loopLabel != NULL }).value) goto $l3234; else goto $l3235;
        $l3234:;
        panda$core$Bit $tmp3238 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3233)->loopLabel, p_name);
        $tmp3237 = $tmp3238;
        goto $l3236;
        $l3235:;
        $tmp3237 = ((panda$core$Bit) { false });
        goto $l3236;
        $l3236:;
        if ($tmp3237.value) {
        {
            panda$core$Object* $tmp3239 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3220);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3239);
        }
        }
    }
    $l3228:;
    int64_t $tmp3241 = $tmp3223 - i3220.value;
    if ($tmp3224) goto $l3242; else goto $l3243;
    $l3242:;
    if ($tmp3241 >= 1) goto $l3240; else goto $l3227;
    $l3243:;
    if ($tmp3241 > 1) goto $l3240; else goto $l3227;
    $l3240:;
    i3220.value += 1;
    goto $l3225;
    $l3227:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3246;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3247 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3246 = $tmp3247;
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3248, desc3246->breakLabel);
    panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, &$s3250);
    (($fn3252) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3251);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3253;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3254 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3253 = $tmp3254;
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3255, desc3253->continueLabel);
    panda$core$String* $tmp3258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, &$s3257);
    (($fn3259) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3258);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3260.value);
    panda$core$Int64 $tmp3262 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3262, ((panda$core$Int64) { 1 }));
    bool $tmp3261 = $tmp3263.value;
    if ($tmp3261) goto $l3264;
    panda$core$Int64 $tmp3265 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3265, ((panda$core$Int64) { 2 }));
    $tmp3261 = $tmp3266.value;
    $l3264:;
    panda$core$Bit $tmp3267 = { $tmp3261 };
    PANDA_ASSERT($tmp3267.value);
    panda$core$Object* $tmp3269 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3270 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3269), p_out);
    panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3268, $tmp3270);
    panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3271, &$s3272);
    (($fn3274) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3273);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3283;
    org$pandalanguage$pandac$IRNode* w3298;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3301;
    panda$core$Object* $tmp3276 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3277 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3276), p_out);
    panda$core$String* $tmp3278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3275, $tmp3277);
    panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3278, &$s3279);
    (($fn3281) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3280);
    panda$core$Int64 $tmp3282 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3282;
    panda$core$Int64 $tmp3284 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3283, ((panda$core$Int64) { 1 }), $tmp3284, ((panda$core$Bit) { false }));
    int64_t $tmp3286 = $tmp3283.min.value;
    panda$core$Int64 i3285 = { $tmp3286 };
    int64_t $tmp3288 = $tmp3283.max.value;
    bool $tmp3289 = $tmp3283.inclusive.value;
    if ($tmp3289) goto $l3296; else goto $l3297;
    $l3296:;
    if ($tmp3286 <= $tmp3288) goto $l3290; else goto $l3292;
    $l3297:;
    if ($tmp3286 < $tmp3288) goto $l3290; else goto $l3292;
    $l3290:;
    {
        panda$core$Object* $tmp3299 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_m->children, i3285);
        w3298 = ((org$pandalanguage$pandac$IRNode*) $tmp3299);
        panda$core$Bit $tmp3300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3298->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3300.value) {
        {
            panda$core$Int64 $tmp3302 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3298->children);
            panda$core$Int64 $tmp3303 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3302, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3301, ((panda$core$Int64) { 0 }), $tmp3303, ((panda$core$Bit) { false }));
            int64_t $tmp3305 = $tmp3301.min.value;
            panda$core$Int64 j3304 = { $tmp3305 };
            int64_t $tmp3307 = $tmp3301.max.value;
            bool $tmp3308 = $tmp3301.inclusive.value;
            if ($tmp3308) goto $l3315; else goto $l3316;
            $l3315:;
            if ($tmp3305 <= $tmp3307) goto $l3309; else goto $l3311;
            $l3316:;
            if ($tmp3305 < $tmp3307) goto $l3309; else goto $l3311;
            $l3309:;
            {
                panda$core$Object* $tmp3318 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3298->children, j3304);
                panda$core$UInt64 $tmp3319 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3318));
                panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3317, ((panda$core$Object*) wrap_panda$core$UInt64($tmp3319)));
                panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3320, &$s3321);
                (($fn3323) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3322);
            }
            $l3312:;
            int64_t $tmp3325 = $tmp3307 - j3304.value;
            if ($tmp3308) goto $l3326; else goto $l3327;
            $l3326:;
            if ($tmp3325 >= 1) goto $l3324; else goto $l3311;
            $l3327:;
            if ($tmp3325 > 1) goto $l3324; else goto $l3311;
            $l3324:;
            j3304.value += 1;
            goto $l3309;
            $l3311:;
            panda$core$Int64 $tmp3330 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3298->children);
            panda$core$Int64 $tmp3331 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3330, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3332 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3298->children, $tmp3331);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3332), p_out);
            (($fn3334) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3333);
        }
        }
        else {
        {
            panda$core$Bit $tmp3335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3298->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3335.value);
            panda$core$Int64 $tmp3336 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(w3298->children);
            panda$core$Bit $tmp3337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3336, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3337.value);
            (($fn3339) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3338);
            panda$core$Object* $tmp3340 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(w3298->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3340), p_out);
        }
        }
    }
    $l3293:;
    int64_t $tmp3342 = $tmp3288 - i3285.value;
    if ($tmp3289) goto $l3343; else goto $l3344;
    $l3343:;
    if ($tmp3342 >= 1) goto $l3341; else goto $l3292;
    $l3344:;
    if ($tmp3342 > 1) goto $l3341; else goto $l3292;
    $l3341:;
    i3285.value += 1;
    goto $l3290;
    $l3292:;
    panda$core$Int64 $tmp3347 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3347;
    (($fn3349) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3348);
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
    panda$core$String* result3350;
    org$pandalanguage$pandac$Type* $tmp3351 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3352 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3351);
    result3350 = $tmp3352;
    panda$core$Bit $tmp3354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3353 = $tmp3354.value;
    if (!$tmp3353) goto $l3355;
    panda$core$Bit $tmp3357 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3350, &$s3356);
    panda$core$Bit $tmp3358 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3357);
    $tmp3353 = $tmp3358.value;
    $l3355:;
    panda$core$Bit $tmp3359 = { $tmp3353 };
    if ($tmp3359.value) {
    {
        panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3350, &$s3360);
        return $tmp3361;
    }
    }
    return result3350;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3373;
    panda$collections$Iterator* p$Iter3383;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3395;
    panda$io$MemoryOutputStream* bodyBuffer3417;
    panda$io$IndentedOutputStream* indentedBody3420;
    panda$collections$Iterator* s$Iter3423;
    org$pandalanguage$pandac$IRNode* s3435;
    panda$core$Object* $tmp3362 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3362)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3363;
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3364 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3365 = panda$core$String$convert$R$panda$core$String($tmp3364);
    panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, &$s3366);
    panda$core$String* $tmp3368 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3367, $tmp3368);
    panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3369, &$s3370);
    (($fn3372) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3371);
    separator3373 = &$s3374;
    panda$core$Bit $tmp3375 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3375);
    if ($tmp3376.value) {
    {
        panda$core$String* $tmp3377 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3378 = panda$core$String$convert$R$panda$core$String($tmp3377);
        panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3379);
        (($fn3381) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3380);
        separator3373 = &$s3382;
    }
    }
    {
        ITable* $tmp3384 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3384->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3384 = $tmp3384->next;
        }
        $fn3386 $tmp3385 = $tmp3384->methods[0];
        panda$collections$Iterator* $tmp3387 = $tmp3385(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3383 = $tmp3387;
        $l3388:;
        ITable* $tmp3390 = p$Iter3383->$class->itable;
        while ($tmp3390->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3390 = $tmp3390->next;
        }
        $fn3392 $tmp3391 = $tmp3390->methods[0];
        panda$core$Bit $tmp3393 = $tmp3391(p$Iter3383);
        panda$core$Bit $tmp3394 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3393);
        if (!$tmp3394.value) goto $l3389;
        {
            ITable* $tmp3396 = p$Iter3383->$class->itable;
            while ($tmp3396->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3396 = $tmp3396->next;
            }
            $fn3398 $tmp3397 = $tmp3396->methods[1];
            panda$core$Object* $tmp3399 = $tmp3397(p$Iter3383);
            p3395 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3399);
            panda$core$String* $tmp3400 = panda$core$String$convert$R$panda$core$String(separator3373);
            panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, &$s3401);
            panda$core$String* $tmp3403 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3395->type);
            panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3402, $tmp3403);
            panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3404, &$s3405);
            panda$core$String* $tmp3407 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3395->name);
            panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3406, $tmp3407);
            panda$core$String* $tmp3410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3408, &$s3409);
            (($fn3411) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3410);
            separator3373 = &$s3412;
        }
        goto $l3388;
        $l3389:;
    }
    (($fn3414) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3413);
    panda$core$Int64 $tmp3415 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3415;
    panda$core$Bit $tmp3416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3416.value);
    panda$io$MemoryOutputStream* $tmp3418 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3418->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3418->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3418);
    bodyBuffer3417 = $tmp3418;
    panda$io$IndentedOutputStream* $tmp3421 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3421->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3421->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3421, ((panda$io$OutputStream*) bodyBuffer3417));
    indentedBody3420 = $tmp3421;
    {
        ITable* $tmp3424 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3424->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3424 = $tmp3424->next;
        }
        $fn3426 $tmp3425 = $tmp3424->methods[0];
        panda$collections$Iterator* $tmp3427 = $tmp3425(((panda$collections$Iterable*) p_body->children));
        s$Iter3423 = $tmp3427;
        $l3428:;
        ITable* $tmp3430 = s$Iter3423->$class->itable;
        while ($tmp3430->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3430 = $tmp3430->next;
        }
        $fn3432 $tmp3431 = $tmp3430->methods[0];
        panda$core$Bit $tmp3433 = $tmp3431(s$Iter3423);
        panda$core$Bit $tmp3434 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3433);
        if (!$tmp3434.value) goto $l3429;
        {
            ITable* $tmp3436 = s$Iter3423->$class->itable;
            while ($tmp3436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3436 = $tmp3436->next;
            }
            $fn3438 $tmp3437 = $tmp3436->methods[1];
            panda$core$Object* $tmp3439 = $tmp3437(s$Iter3423);
            s3435 = ((org$pandalanguage$pandac$IRNode*) $tmp3439);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3435, indentedBody3420);
        }
        goto $l3428;
        $l3429:;
    }
    panda$core$String* $tmp3440 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3441) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3440);
    panda$core$String* $tmp3442 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3417);
    (($fn3443) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3442);
    panda$core$Int64 $tmp3444 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3444;
    (($fn3446) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3445);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3447;
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
    panda$io$File* $tmp3449 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3448);
    path3447 = $tmp3449;
    panda$io$File* $tmp3450 = panda$io$File$parent$R$panda$io$File$Q(path3447);
    panda$io$File$createDirectories($tmp3450);
    panda$io$IndentedOutputStream* $tmp3451 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3451->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3451->refCount.value = 1;
    panda$io$OutputStream* $tmp3453 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3447);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3451, $tmp3453);
    self->out = $tmp3451;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3454 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3454.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3455 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3456 = panda$core$String$convert$R$panda$core$String($tmp3455);
        panda$core$String* $tmp3458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3456, &$s3457);
        panda$core$String* $tmp3459 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3458, $tmp3459);
        panda$core$String* $tmp3462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3460, &$s3461);
        panda$core$String* $tmp3463 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3464 = panda$core$String$convert$R$panda$core$String($tmp3463);
        panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3464, &$s3465);
        panda$core$String* $tmp3467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3462, $tmp3466);
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
    panda$core$String* $tmp3500 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3501) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3500);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3502 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3503) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3502);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3504 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3505) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3504);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3506 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3507) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3506);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3508 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3509) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3508);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3510) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

