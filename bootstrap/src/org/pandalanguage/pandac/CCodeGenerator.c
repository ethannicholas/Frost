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
typedef void (*$fn134)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn166)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn172)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn178)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn208)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn214)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn220)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn305)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn317)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn346)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn368)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn374)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn380)(panda$collections$Iterator*);
typedef void (*$fn388)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn425)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn459)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn467)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn511)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn516)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn537)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn545)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn554)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn586)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn624)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn664)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn669)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn690)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn701)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn710)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn716)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn722)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn751)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn778)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn784)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn790)(panda$collections$Iterator*);
typedef void (*$fn798)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn878)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn884)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn890)(panda$collections$Iterator*);
typedef void (*$fn898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn916)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn972)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn990)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1049)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1059)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1072)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1088)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1098)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1111)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1139)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1152)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1200)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1217)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1257)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1265)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1268)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1275)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1292)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn1305)(panda$collections$CollectionView*);
typedef void (*$fn1326)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1464)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1482)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1576)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1587)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1591)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1597)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1603)(panda$collections$Iterator*);
typedef void (*$fn1611)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1869)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1888)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1913)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1918)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1924)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1930)(panda$collections$Iterator*);
typedef void (*$fn1935)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1942)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1944)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn1951)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1953)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Int64 (*$fn1958)(panda$collections$CollectionView*);
typedef void (*$fn1963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2079)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2084)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2090)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2096)(panda$collections$Iterator*);
typedef void (*$fn2100)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2121)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2149)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2160)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2253)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2268)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2272)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2278)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2284)(panda$collections$Iterator*);
typedef void (*$fn2286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2287)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2290)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2309)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2312)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2316)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2319)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2355)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2362)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2380)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2406)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2416)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2458)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2472)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2486)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2519)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2530)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2543)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2549)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2554)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2590)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2597)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2615)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2629)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2641)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2701)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2713)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2729)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2787)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2803)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2820)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2835)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2851)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2881)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2896)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2912)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2926)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2940)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2980)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2986)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3033)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3042)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3059)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3065)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3071)(panda$collections$Iterator*);
typedef void (*$fn3115)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3124)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3128)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3188)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3248)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3253)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3295)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3300)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3306)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3312)(panda$collections$Iterator*);
typedef void (*$fn3325)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3328)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3340)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3346)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3352)(panda$collections$Iterator*);
typedef void (*$fn3355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3357)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3360)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3382)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3413)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3415)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3417)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3419)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3421)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3423)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3424)(panda$core$Object*);

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
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A\x3B", 2, NULL };
static panda$core$String $s142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, NULL };
static panda$core$String $s146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, NULL };
static panda$core$String $s148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, NULL };
static panda$core$String $s158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x5F", 2, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x6E\x65\x78\x74\x3B\x20", 19, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, NULL };
static panda$core$String $s420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70", 2, NULL };
static panda$core$String $s457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70", 1, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 10, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x73\x75\x6C\x74", 6, NULL };
static panda$core$String $s552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x73\x65\x6C\x66\x2D\x3E\x76\x61\x6C\x75\x65", 12, NULL };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x5F", 9, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x72\x75\x63\x74\x20\x7B\x20", 9, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x63\x6C\x3B\x20\x49\x54\x61\x62\x6C\x65\x2A\x20\x69\x74\x61\x62\x6C\x65\x3B\x20", 21, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x2A\x20\x6D\x65\x74\x68\x6F\x64\x73\x5B", 14, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B\x20\x7D\x20", 5, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x26", 3, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x49\x54\x61\x62\x6C\x65\x2A\x29\x20\x26", 11, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B\x0A", 5, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5F\x74\x79\x70\x65\x20", 6, NULL };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 21, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20", 5, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x7B\x20", 4, NULL };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D\x20\x7D\x3B", 4, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x5F", 2, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s1057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s1096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65", 6, NULL };
static panda$core$String $s1106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D\x3D", 2, NULL };
static panda$core$String $s1126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s1133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s1137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20", 4, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20", 4, NULL };
static panda$core$String $s1173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x76\x74\x61\x62\x6C\x65\x5B", 17, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x29", 2, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x49\x54\x61\x62\x6C\x65\x2A\x20", 8, NULL };
static panda$core$String $s1244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x2D\x3E\x69\x74\x61\x62\x6C\x65\x3B", 17, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28", 7, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x21\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 33, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6E\x65\x78\x74\x3B", 7, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x6D\x65\x74\x68\x6F\x64\x73\x5B", 10, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x3B", 2, NULL };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 9, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, NULL };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x2A", 2, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D", 7, NULL };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x72\x65\x61\x6C\x6C\x6F\x63\x28", 10, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2A\x20", 9, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2B\x20", 3, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, NULL };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 15, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x26", 2, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x77\x72\x61\x70\x5F", 7, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x29", 2, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3F\x20", 11, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x4E\x55\x4C\x4C\x29", 8, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2D\x3E\x76\x61\x6C\x75\x65", 8, NULL };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C\x20\x3F\x20", 11, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3A\x20\x28", 4, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x30\x20\x7D\x29", 19, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, NULL };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x74\x72\x75\x65\x20\x7D\x29", 9, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29", 7, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x32", 8, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20", 4, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x28", 4, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20", 2, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x6C\x6C\x6F\x63\x28", 7, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x24\x63\x6C\x61\x73\x73\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26", 32, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73\x3B", 7, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E\x72\x65\x66\x43\x6F\x75\x6E\x74\x2E\x76\x61\x6C\x75\x65\x20\x3D\x20\x31\x3B", 21, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73", 2, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x61\x74\x69\x63\x20\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20", 25, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20\x26\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x63\x6C\x61\x73\x73\x2C\x20\x32\x2C\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x20\x22", 70, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5C\x78", 2, NULL };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, NULL };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30\x31\x32\x33\x34\x35\x36\x37\x38\x39\x41\x42\x43\x44\x45\x46", 16, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x22\x2C\x20", 3, NULL };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x4E\x55\x4C\x4C\x20\x7D\x3B", 9, NULL };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x6C\x66", 4, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x73\x65\x6C\x66\x29", 7, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x3D\x20\x4E\x55\x4C\x4C", 8, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x21\x3D\x20\x4E\x55\x4C\x4C", 8, NULL };
static panda$core$String $s2019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x29\x20\x7B\x20", 20, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x29", 3, NULL };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x28", 2, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B\x20\x2E\x6E\x6F\x6E\x6E\x75\x6C\x6C\x20\x3D\x20\x66\x61\x6C\x73\x65\x20\x7D\x29", 23, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4E\x55\x4C\x4C", 4, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s2099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x32\x20", 7, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x5D\x20\x3D\x20", 10, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x72\x65\x65\x28", 5, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x74\x6D\x70", 4, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, NULL };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x65\x6C\x73\x65\x20\x7B", 6, NULL };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x69\x6E\x2E\x76\x61\x6C\x75\x65\x3B", 11, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x6D\x61\x78\x2E\x76\x61\x6C\x75\x65\x3B", 11, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, NULL };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s2447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, NULL };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x31\x29\x20\x67\x6F\x74\x6F\x20", 11, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20\x31\x3B", 12, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x61\x72\x74\x2E\x76\x61\x6C\x75\x65\x3B", 13, NULL };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x7B\x20", 5, NULL };
static panda$core$String $s2627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x3B", 3, NULL };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x65\x6E\x64\x2E\x76\x61\x6C\x75\x65\x3B", 11, NULL };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x73\x74\x65\x70\x2E\x76\x61\x6C\x75\x65\x3B", 12, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x69\x6E\x63\x6C\x75\x73\x69\x76\x65\x2E\x76\x61\x6C\x75\x65\x3B", 17, NULL };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x6F\x6F\x6C\x20", 5, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x30\x3B", 5, NULL };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x3D\x20", 4, NULL };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3C\x20", 3, NULL };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x20", 3, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x3B", 7, NULL };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20", 4, NULL };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20", 3, NULL };
static panda$core$String $s2873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2D\x20", 9, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x3D\x20\x2D", 5, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3E\x20\x2D", 4, NULL };
static panda$core$String $s2932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x67\x6F\x74\x6F\x20", 7, NULL };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B\x20\x65\x6C\x73\x65\x20\x67\x6F\x74\x6F\x20", 12, NULL };
static panda$core$String $s2938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x20\x2B\x3D\x20", 10, NULL };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s2952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28\x21", 5, NULL };
static panda$core$String $s2975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, NULL };
static panda$core$String $s2978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s2982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x66\x20\x28", 4, NULL };
static panda$core$String $s3004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x67\x6F\x74\x6F\x20", 13, NULL };
static panda$core$String $s3007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x77\x68\x69\x6C\x65\x20\x28\x74\x72\x75\x65\x29\x20\x7B", 14, NULL };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D\x3E", 2, NULL };
static panda$core$String $s3089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x20", 7, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6E\x3B", 7, NULL };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x6F\x74\x6F\x20", 5, NULL };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3B", 1, NULL };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x50\x41\x4E\x44\x41\x5F\x41\x53\x53\x45\x52\x54\x28", 13, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20\x28", 8, NULL };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x76\x61\x6C\x75\x65\x29\x20\x7B", 9, NULL };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x73\x65\x20", 5, NULL };
static panda$core$String $s3235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x65\x61\x6B\x3B", 6, NULL };
static panda$core$String $s3252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x61\x75\x6C\x74\x3A", 8, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s3270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, NULL };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x70\x5F", 3, NULL };
static panda$core$String $s3323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s3359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E\x63", 2, NULL };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x77\x72\x61\x70\x5F", 15, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x73\x65\x6C\x66\x29\x20\x7B", 8, NULL };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20", 4, NULL };
static panda$core$String $s3386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x20\x72\x65\x73\x75\x6C\x74\x20\x3D\x20", 19, NULL };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A\x29\x20\x6D\x61\x6C\x6C\x6F\x63\x28", 18, NULL };
static panda$core$String $s3396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x3B", 2, NULL };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x63\x6C\x20\x3D\x20\x28\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x20", 37, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73\x3B", 14, NULL };
static panda$core$String $s3408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x73\x75\x6C\x74\x2D\x3E\x76\x61\x6C\x75\x65\x20\x3D\x20\x73\x65\x6C\x66\x3B", 25, NULL };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x72\x65\x74\x75\x72\x6E\x20\x72\x65\x73\x75\x6C\x74\x3B", 18, NULL };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };

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
    panda$core$String* $tmp131 = panda$core$String$convert$R$panda$core$String(p_label);
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
    panda$core$String* $tmp239 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp240 = panda$core$String$convert$R$panda$core$String($tmp239);
    panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp240, &$s241);
    return $tmp242;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp243 = org$pandalanguage$pandac$CCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s244);
    return $tmp245;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType246;
    panda$core$MutableString* result248;
    panda$core$Range$LTpanda$core$Int64$GT $tmp264;
    org$pandalanguage$pandac$Type* $tmp247 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType246 = $tmp247;
    panda$core$MutableString* $tmp249 = (panda$core$MutableString*) malloc(40);
    $tmp249->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp249->refCount.value = 1;
    panda$core$MutableString$init($tmp249);
    result248 = $tmp249;
    panda$core$Int64 $tmp251 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType246->subtypes);
    panda$core$Int64 $tmp252 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp251, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp253 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType246->subtypes, $tmp252);
    panda$core$String* $tmp254 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp253));
    panda$core$MutableString$append$panda$core$String(result248, $tmp254);
    panda$core$MutableString$append$panda$core$String(result248, &$s255);
    panda$core$Bit $tmp256 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp256.value);
    panda$core$String* $tmp257 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp258 = panda$core$String$convert$R$panda$core$String($tmp257);
    panda$core$String* $tmp260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp258, &$s259);
    panda$core$MutableString$append$panda$core$String(result248, $tmp260);
    panda$core$Bit $tmp261 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp261.value) {
    {
        panda$core$MutableString$append$panda$core$String(result248, &$s262);
    }
    }
    panda$core$MutableString$append$panda$core$String(result248, &$s263);
    panda$core$Int64 $tmp265 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType246->subtypes);
    panda$core$Int64 $tmp266 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp265, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp264, ((panda$core$Int64) { 0 }), $tmp266, ((panda$core$Bit) { false }));
    int64_t $tmp268 = $tmp264.min.value;
    panda$core$Int64 i267 = { $tmp268 };
    int64_t $tmp270 = $tmp264.max.value;
    bool $tmp271 = $tmp264.inclusive.value;
    if ($tmp271) goto $l278; else goto $l279;
    $l278:;
    if ($tmp268 <= $tmp270) goto $l272; else goto $l274;
    $l279:;
    if ($tmp268 < $tmp270) goto $l272; else goto $l274;
    $l272:;
    {
        panda$core$MutableString$append$panda$core$String(result248, &$s280);
        panda$core$Object* $tmp281 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType246->subtypes, i267);
        panda$core$String* $tmp282 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp281));
        panda$core$MutableString$append$panda$core$String(result248, $tmp282);
    }
    $l275:;
    int64_t $tmp284 = $tmp270 - i267.value;
    if ($tmp271) goto $l285; else goto $l286;
    $l285:;
    if ($tmp284 >= 1) goto $l283; else goto $l274;
    $l286:;
    if ($tmp284 > 1) goto $l283; else goto $l274;
    $l283:;
    i267.value += 1;
    goto $l272;
    $l274:;
    panda$core$MutableString$append$panda$core$String(result248, &$s289);
    panda$core$String* $tmp290 = panda$core$MutableString$finish$R$panda$core$String(result248);
    return $tmp290;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp291.value);
    panda$core$Object* $tmp292 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp293 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp292));
    panda$core$String* $tmp294 = panda$core$String$convert$R$panda$core$String($tmp293);
    panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp294, &$s295);
    return $tmp296;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces297;
    panda$core$String* previous300;
    panda$collections$Iterator* intfType$Iter302;
    org$pandalanguage$pandac$Type* intfType314;
    org$pandalanguage$pandac$ClassDecl* intf319;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC321;
    panda$collections$ListView* methods323;
    panda$core$String* name325;
    panda$core$MutableString* result334;
    panda$core$String* separator363;
    panda$collections$Iterator* m$Iter365;
    org$pandalanguage$pandac$MethodDecl* m377;
    org$pandalanguage$pandac$Type* $tmp298 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp299 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp298);
    interfaces297 = $tmp299;
    previous300 = &$s301;
    {
        ITable* $tmp303 = ((panda$collections$Iterable*) interfaces297)->$class->itable;
        while ($tmp303->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp303 = $tmp303->next;
        }
        $fn305 $tmp304 = $tmp303->methods[0];
        panda$collections$Iterator* $tmp306 = $tmp304(((panda$collections$Iterable*) interfaces297));
        intfType$Iter302 = $tmp306;
        $l307:;
        ITable* $tmp309 = intfType$Iter302->$class->itable;
        while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp309 = $tmp309->next;
        }
        $fn311 $tmp310 = $tmp309->methods[0];
        panda$core$Bit $tmp312 = $tmp310(intfType$Iter302);
        panda$core$Bit $tmp313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp312);
        if (!$tmp313.value) goto $l308;
        {
            ITable* $tmp315 = intfType$Iter302->$class->itable;
            while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp315 = $tmp315->next;
            }
            $fn317 $tmp316 = $tmp315->methods[1];
            panda$core$Object* $tmp318 = $tmp316(intfType$Iter302);
            intfType314 = ((org$pandalanguage$pandac$Type*) $tmp318);
            org$pandalanguage$pandac$ClassDecl* $tmp320 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType314);
            intf319 = $tmp320;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp322 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf319);
            intfCC321 = $tmp322;
            panda$collections$ListView* $tmp324 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType314);
            methods323 = $tmp324;
            panda$core$String* $tmp326 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp327 = panda$core$String$convert$R$panda$core$String($tmp326);
            panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp327, &$s328);
            panda$core$String* $tmp330 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf319)->name);
            panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, $tmp330);
            panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp331, &$s332);
            name325 = $tmp333;
            panda$core$MutableString* $tmp335 = (panda$core$MutableString*) malloc(40);
            $tmp335->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp335->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp338 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp339 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp338);
            panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s337, $tmp339);
            panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s341);
            ITable* $tmp344 = ((panda$collections$CollectionView*) methods323)->$class->itable;
            while ($tmp344->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp344 = $tmp344->next;
            }
            $fn346 $tmp345 = $tmp344->methods[0];
            panda$core$Int64 $tmp347 = $tmp345(((panda$collections$CollectionView*) methods323));
            panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s343, ((panda$core$Object*) wrap_panda$core$Int64($tmp347)));
            panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, &$s349);
            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, name325);
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s352);
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, $tmp353);
            panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s355, intfCC321->name);
            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp356, &$s357);
            panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp358, previous300);
            panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s360);
            panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, $tmp361);
            panda$core$MutableString$init$panda$core$String($tmp335, $tmp362);
            result334 = $tmp335;
            separator363 = &$s364;
            {
                ITable* $tmp366 = ((panda$collections$Iterable*) methods323)->$class->itable;
                while ($tmp366->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp366 = $tmp366->next;
                }
                $fn368 $tmp367 = $tmp366->methods[0];
                panda$collections$Iterator* $tmp369 = $tmp367(((panda$collections$Iterable*) methods323));
                m$Iter365 = $tmp369;
                $l370:;
                ITable* $tmp372 = m$Iter365->$class->itable;
                while ($tmp372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp372 = $tmp372->next;
                }
                $fn374 $tmp373 = $tmp372->methods[0];
                panda$core$Bit $tmp375 = $tmp373(m$Iter365);
                panda$core$Bit $tmp376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp375);
                if (!$tmp376.value) goto $l371;
                {
                    ITable* $tmp378 = m$Iter365->$class->itable;
                    while ($tmp378->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp378 = $tmp378->next;
                    }
                    $fn380 $tmp379 = $tmp378->methods[1];
                    panda$core$Object* $tmp381 = $tmp379(m$Iter365);
                    m377 = ((org$pandalanguage$pandac$MethodDecl*) $tmp381);
                    panda$core$MutableString$append$panda$core$String(result334, separator363);
                    separator363 = &$s382;
                    panda$core$Bit $tmp383 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m377->annotations);
                    if ($tmp383.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result334, &$s384);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp385 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m377);
                        panda$core$MutableString$append$panda$core$String(result334, $tmp385);
                    }
                    }
                }
                goto $l370;
                $l371:;
            }
            panda$core$MutableString$append$panda$core$String(result334, &$s386);
            panda$core$String* $tmp387 = panda$core$MutableString$finish$R$panda$core$String(result334);
            (($fn388) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp387);
            panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s389, name325);
            panda$core$String* $tmp392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp390, &$s391);
            previous300 = $tmp392;
        }
        goto $l307;
        $l308:;
    }
    return previous300;
}
org$pandalanguage$pandac$CCodeGenerator$MethodShim* org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer393;
    panda$io$IndentedOutputStream* out396;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* found399;
    org$pandalanguage$pandac$Type* effectiveReturnType407;
    panda$core$String* resultName411;
    panda$core$MutableString* resultType415;
    panda$core$String* self_t426;
    panda$core$Range$LTpanda$core$Int64$GT $tmp433;
    panda$core$String* pType448;
    panda$collections$Array* casts470;
    panda$core$Range$LTpanda$core$Int64$GT $tmp473;
    panda$core$String* p488;
    panda$core$Range$LTpanda$core$Int64$GT $tmp517;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* result558;
    panda$io$MemoryOutputStream* $tmp394 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp394->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp394->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp394);
    outBuffer393 = $tmp394;
    panda$io$IndentedOutputStream* $tmp397 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp397->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp397->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp397, ((panda$io$OutputStream*) outBuffer393));
    out396 = $tmp397;
    panda$core$Object* $tmp400 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found399 = ((org$pandalanguage$pandac$CCodeGenerator$MethodShim*) $tmp400);
    if (((panda$core$Bit) { found399 != NULL }).value) {
    {
        return found399;
    }
    }
    panda$core$Bit $tmp401 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp401.value);
    panda$core$Int64 $tmp402 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp403 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp404 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp403, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp402, $tmp404);
    PANDA_ASSERT($tmp405.value);
    panda$core$Bit $tmp406 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp406.value);
    panda$core$Int64 $tmp408 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp409 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp408, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp410 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp409);
    effectiveReturnType407 = ((org$pandalanguage$pandac$Type*) $tmp410);
    panda$core$String* $tmp412 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp412, &$s413);
    resultName411 = $tmp414;
    panda$core$MutableString* $tmp416 = (panda$core$MutableString*) malloc(40);
    $tmp416->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp416->refCount.value = 1;
    panda$core$String* $tmp418 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType407);
    panda$core$MutableString$init$panda$core$String($tmp416, $tmp418);
    resultType415 = $tmp416;
    panda$core$String* $tmp419 = panda$core$MutableString$convert$R$panda$core$String(resultType415);
    panda$core$String* $tmp421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp419, &$s420);
    panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp421, resultName411);
    panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp422, &$s423);
    (($fn425) ((panda$io$OutputStream*) out396)->$class->vtable[16])(((panda$io$OutputStream*) out396), $tmp424);
    panda$core$String* $tmp427 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t426 = $tmp427;
    panda$core$String* $tmp428 = panda$core$String$convert$R$panda$core$String(self_t426);
    panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s429);
    (($fn431) ((panda$io$OutputStream*) out396)->$class->vtable[16])(((panda$io$OutputStream*) out396), $tmp430);
    panda$core$MutableString$append$panda$core$String(resultType415, &$s432);
    panda$core$MutableString$append$panda$core$String(resultType415, self_t426);
    panda$core$Int64 $tmp434 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp433, ((panda$core$Int64) { 0 }), $tmp434, ((panda$core$Bit) { false }));
    int64_t $tmp436 = $tmp433.min.value;
    panda$core$Int64 i435 = { $tmp436 };
    int64_t $tmp438 = $tmp433.max.value;
    bool $tmp439 = $tmp433.inclusive.value;
    if ($tmp439) goto $l446; else goto $l447;
    $l446:;
    if ($tmp436 <= $tmp438) goto $l440; else goto $l442;
    $l447:;
    if ($tmp436 < $tmp438) goto $l440; else goto $l442;
    $l440:;
    {
        panda$core$Object* $tmp449 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i435);
        panda$core$String* $tmp450 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp449));
        pType448 = $tmp450;
        panda$core$MutableString$append$panda$core$String(resultType415, &$s451);
        panda$core$MutableString$append$panda$core$String(resultType415, pType448);
        panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s452, pType448);
        panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp453, &$s454);
        panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp455, ((panda$core$Object*) wrap_panda$core$Int64(i435)));
        panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp456, &$s457);
        (($fn459) ((panda$io$OutputStream*) out396)->$class->vtable[16])(((panda$io$OutputStream*) out396), $tmp458);
    }
    $l443:;
    int64_t $tmp461 = $tmp438 - i435.value;
    if ($tmp439) goto $l462; else goto $l463;
    $l462:;
    if ($tmp461 >= 1) goto $l460; else goto $l442;
    $l463:;
    if ($tmp461 > 1) goto $l460; else goto $l442;
    $l460:;
    i435.value += 1;
    goto $l440;
    $l442:;
    (($fn467) ((panda$io$OutputStream*) out396)->$class->vtable[19])(((panda$io$OutputStream*) out396), &$s466);
    panda$core$Int64 $tmp468 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(out396->level, ((panda$core$Int64) { 1 }));
    out396->level = $tmp468;
    panda$core$MutableString$append$panda$core$String(resultType415, &$s469);
    panda$collections$Array* $tmp471 = (panda$collections$Array*) malloc(40);
    $tmp471->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp471->refCount.value = 1;
    panda$collections$Array$init($tmp471);
    casts470 = $tmp471;
    panda$core$Int64 $tmp474 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp473, ((panda$core$Int64) { 0 }), $tmp474, ((panda$core$Bit) { false }));
    int64_t $tmp476 = $tmp473.min.value;
    panda$core$Int64 i475 = { $tmp476 };
    int64_t $tmp478 = $tmp473.max.value;
    bool $tmp479 = $tmp473.inclusive.value;
    if ($tmp479) goto $l486; else goto $l487;
    $l486:;
    if ($tmp476 <= $tmp478) goto $l480; else goto $l482;
    $l487:;
    if ($tmp476 < $tmp478) goto $l480; else goto $l482;
    $l480:;
    {
        panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s489, ((panda$core$Object*) wrap_panda$core$Int64(i475)));
        panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp490, &$s491);
        p488 = $tmp492;
        panda$core$Object* $tmp493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i475);
        panda$core$Object* $tmp494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i475);
        panda$core$Bit $tmp495 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp493)->type, ((org$pandalanguage$pandac$Type*) $tmp494));
        if ($tmp495.value) {
        {
            panda$core$Object* $tmp496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i475);
            panda$core$Object* $tmp497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i475);
            panda$core$String* $tmp498 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p488, ((org$pandalanguage$pandac$Type*) $tmp496), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp497)->type, out396);
            panda$collections$Array$add$panda$collections$Array$T(casts470, ((panda$core$Object*) $tmp498));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts470, ((panda$core$Object*) p488));
        }
        }
    }
    $l483:;
    int64_t $tmp500 = $tmp478 - i475.value;
    if ($tmp479) goto $l501; else goto $l502;
    $l501:;
    if ($tmp500 >= 1) goto $l499; else goto $l482;
    $l502:;
    if ($tmp500 > 1) goto $l499; else goto $l482;
    $l499:;
    i475.value += 1;
    goto $l480;
    $l482:;
    org$pandalanguage$pandac$Type* $tmp505 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp506 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp505);
    if ($tmp506.value) {
    {
        panda$core$String* $tmp507 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
        panda$core$String* $tmp508 = panda$core$String$convert$R$panda$core$String($tmp507);
        panda$core$String* $tmp510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, &$s509);
        (($fn511) ((panda$io$OutputStream*) out396)->$class->vtable[16])(((panda$io$OutputStream*) out396), $tmp510);
    }
    }
    panda$core$String* $tmp512 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp513 = panda$core$String$convert$R$panda$core$String($tmp512);
    panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp513, &$s514);
    (($fn516) ((panda$io$OutputStream*) out396)->$class->vtable[16])(((panda$io$OutputStream*) out396), $tmp515);
    panda$core$Int64 $tmp518 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp517, ((panda$core$Int64) { 0 }), $tmp518, ((panda$core$Bit) { false }));
    int64_t $tmp520 = $tmp517.min.value;
    panda$core$Int64 i519 = { $tmp520 };
    int64_t $tmp522 = $tmp517.max.value;
    bool $tmp523 = $tmp517.inclusive.value;
    if ($tmp523) goto $l530; else goto $l531;
    $l530:;
    if ($tmp520 <= $tmp522) goto $l524; else goto $l526;
    $l531:;
    if ($tmp520 < $tmp522) goto $l524; else goto $l526;
    $l524:;
    {
        panda$core$Object* $tmp533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts470, i519);
        panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s532, ((panda$core$String*) $tmp533));
        panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s535);
        (($fn537) ((panda$io$OutputStream*) out396)->$class->vtable[16])(((panda$io$OutputStream*) out396), $tmp536);
    }
    $l527:;
    int64_t $tmp539 = $tmp522 - i519.value;
    if ($tmp523) goto $l540; else goto $l541;
    $l540:;
    if ($tmp539 >= 1) goto $l538; else goto $l526;
    $l541:;
    if ($tmp539 > 1) goto $l538; else goto $l526;
    $l538:;
    i519.value += 1;
    goto $l524;
    $l526:;
    (($fn545) ((panda$io$OutputStream*) out396)->$class->vtable[19])(((panda$io$OutputStream*) out396), &$s544);
    org$pandalanguage$pandac$Type* $tmp546 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp547 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp546);
    if ($tmp547.value) {
    {
        panda$core$String* $tmp550 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, &$s549, p_raw->returnType, effectiveReturnType407, out396);
        panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s548, $tmp550);
        panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp551, &$s552);
        (($fn554) ((panda$io$OutputStream*) out396)->$class->vtable[19])(((panda$io$OutputStream*) out396), $tmp553);
    }
    }
    panda$core$Int64 $tmp555 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(out396->level, ((panda$core$Int64) { 1 }));
    out396->level = $tmp555;
    (($fn557) ((panda$io$OutputStream*) out396)->$class->vtable[19])(((panda$io$OutputStream*) out396), &$s556);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp559 = (org$pandalanguage$pandac$CCodeGenerator$MethodShim*) malloc(32);
    $tmp559->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$MethodShim$class;
    $tmp559->refCount.value = 1;
    panda$core$String* $tmp561 = panda$core$MutableString$finish$R$panda$core$String(resultType415);
    org$pandalanguage$pandac$CCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp559, resultName411, $tmp561);
    result558 = $tmp559;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result558));
    panda$core$String* $tmp562 = panda$io$MemoryOutputStream$finish$R$panda$core$String(outBuffer393);
    (($fn563) p_rawOut->$class->vtable[16])(p_rawOut, $tmp562);
    return result558;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* oldMethod565;
    panda$core$String* result566;
    panda$core$String* selfType571;
    org$pandalanguage$pandac$Type* actualMethodType587;
    org$pandalanguage$pandac$Type* inheritedMethodType589;
    panda$core$Range$LTpanda$core$Int64$GT $tmp591;
    panda$collections$Array* parameters626;
    panda$core$Range$LTpanda$core$Int64$GT $tmp629;
    panda$collections$Array* children654;
    org$pandalanguage$pandac$Position $tmp659;
    panda$core$Range$LTpanda$core$Int64$GT $tmp670;
    panda$core$Bit $tmp564 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp564.value);
    oldMethod565 = self->currentMethod;
    self->currentMethod = p_m;
    panda$core$String* $tmp567 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp568 = panda$core$String$convert$R$panda$core$String($tmp567);
    panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s569);
    result566 = $tmp570;
    panda$core$String* $tmp572 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp573 = panda$core$String$convert$R$panda$core$String($tmp572);
    panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s574);
    selfType571 = $tmp575;
    panda$core$String* $tmp576 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp577 = panda$core$String$convert$R$panda$core$String($tmp576);
    panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s578);
    panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, result566);
    panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s581);
    panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, selfType571);
    panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s584);
    (($fn586) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp585);
    org$pandalanguage$pandac$Type* $tmp588 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType587 = $tmp588;
    org$pandalanguage$pandac$Type* $tmp590 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType589 = $tmp590;
    panda$core$Int64 $tmp592 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp591, ((panda$core$Int64) { 0 }), $tmp592, ((panda$core$Bit) { false }));
    int64_t $tmp594 = $tmp591.min.value;
    panda$core$Int64 i593 = { $tmp594 };
    int64_t $tmp596 = $tmp591.max.value;
    bool $tmp597 = $tmp591.inclusive.value;
    if ($tmp597) goto $l604; else goto $l605;
    $l604:;
    if ($tmp594 <= $tmp596) goto $l598; else goto $l600;
    $l605:;
    if ($tmp594 < $tmp596) goto $l598; else goto $l600;
    $l598:;
    {
        panda$core$Object* $tmp607 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType589->subtypes, i593);
        panda$core$String* $tmp608 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp607));
        panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s606, $tmp608);
        panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp609, &$s610);
        panda$core$Object* $tmp612 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i593);
        panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp611, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp612)->name);
        panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp613, &$s614);
        (($fn616) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp615);
    }
    $l601:;
    int64_t $tmp618 = $tmp596 - i593.value;
    if ($tmp597) goto $l619; else goto $l620;
    $l619:;
    if ($tmp618 >= 1) goto $l617; else goto $l600;
    $l620:;
    if ($tmp618 > 1) goto $l617; else goto $l600;
    $l617:;
    i593.value += 1;
    goto $l598;
    $l600:;
    (($fn624) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s623);
    panda$core$Int64 $tmp625 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp625;
    panda$collections$Array* $tmp627 = (panda$collections$Array*) malloc(40);
    $tmp627->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp627->refCount.value = 1;
    panda$collections$Array$init($tmp627);
    parameters626 = $tmp627;
    panda$core$Int64 $tmp630 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp629, ((panda$core$Int64) { 0 }), $tmp630, ((panda$core$Bit) { false }));
    int64_t $tmp632 = $tmp629.min.value;
    panda$core$Int64 i631 = { $tmp632 };
    int64_t $tmp634 = $tmp629.max.value;
    bool $tmp635 = $tmp629.inclusive.value;
    if ($tmp635) goto $l642; else goto $l643;
    $l642:;
    if ($tmp632 <= $tmp634) goto $l636; else goto $l638;
    $l643:;
    if ($tmp632 < $tmp634) goto $l636; else goto $l638;
    $l636:;
    {
        panda$core$Object* $tmp644 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i631);
        panda$core$Object* $tmp645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType589->subtypes, i631);
        panda$core$Object* $tmp646 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType587->subtypes, i631);
        panda$core$String* $tmp647 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp644)->name, ((org$pandalanguage$pandac$Type*) $tmp645), ((org$pandalanguage$pandac$Type*) $tmp646), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters626, ((panda$core$Object*) $tmp647));
    }
    $l639:;
    int64_t $tmp649 = $tmp634 - i631.value;
    if ($tmp635) goto $l650; else goto $l651;
    $l650:;
    if ($tmp649 >= 1) goto $l648; else goto $l638;
    $l651:;
    if ($tmp649 > 1) goto $l648; else goto $l638;
    $l648:;
    i631.value += 1;
    goto $l636;
    $l638:;
    panda$collections$Array* $tmp655 = (panda$collections$Array*) malloc(40);
    $tmp655->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp655->refCount.value = 1;
    panda$collections$Array$init($tmp655);
    children654 = $tmp655;
    org$pandalanguage$pandac$IRNode* $tmp657 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp657->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp657->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp659);
    org$pandalanguage$pandac$Type* $tmp660 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp657, ((panda$core$Int64) { 1025 }), $tmp659, $tmp660);
    panda$collections$Array$add$panda$collections$Array$T(children654, ((panda$core$Object*) $tmp657));
    org$pandalanguage$pandac$Type* $tmp661 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp662 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp661);
    if ($tmp662.value) {
    {
        (($fn664) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s663);
    }
    }
    panda$core$String* $tmp665 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp666 = panda$core$String$convert$R$panda$core$String($tmp665);
    panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp666, &$s667);
    (($fn669) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp668);
    panda$core$Int64 $tmp671 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp670, ((panda$core$Int64) { 0 }), $tmp671, ((panda$core$Bit) { false }));
    int64_t $tmp673 = $tmp670.min.value;
    panda$core$Int64 i672 = { $tmp673 };
    int64_t $tmp675 = $tmp670.max.value;
    bool $tmp676 = $tmp670.inclusive.value;
    if ($tmp676) goto $l683; else goto $l684;
    $l683:;
    if ($tmp673 <= $tmp675) goto $l677; else goto $l679;
    $l684:;
    if ($tmp673 < $tmp675) goto $l677; else goto $l679;
    $l677:;
    {
        panda$core$Object* $tmp686 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters626, i672);
        panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s685, ((panda$core$String*) $tmp686));
        panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp687, &$s688);
        (($fn690) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp689);
    }
    $l680:;
    int64_t $tmp692 = $tmp675 - i672.value;
    if ($tmp676) goto $l693; else goto $l694;
    $l693:;
    if ($tmp692 >= 1) goto $l691; else goto $l679;
    $l694:;
    if ($tmp692 > 1) goto $l691; else goto $l679;
    $l691:;
    i672.value += 1;
    goto $l677;
    $l679:;
    (($fn698) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s697);
    panda$core$Int64 $tmp699 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp699;
    (($fn701) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s700);
    self->currentMethod = oldMethod565;
    return result566;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces702;
    panda$core$String* previous705;
    panda$collections$Iterator* intfType$Iter707;
    org$pandalanguage$pandac$Type* intfType719;
    org$pandalanguage$pandac$ClassDecl* intf724;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* intfCC726;
    panda$collections$ListView* methods728;
    panda$core$String* name730;
    panda$core$MutableString* result739;
    panda$core$String* separator773;
    panda$collections$Iterator* m$Iter775;
    org$pandalanguage$pandac$MethodDecl* m787;
    org$pandalanguage$pandac$Type* $tmp703 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp704 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp703);
    interfaces702 = $tmp704;
    previous705 = &$s706;
    {
        ITable* $tmp708 = ((panda$collections$Iterable*) interfaces702)->$class->itable;
        while ($tmp708->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp708 = $tmp708->next;
        }
        $fn710 $tmp709 = $tmp708->methods[0];
        panda$collections$Iterator* $tmp711 = $tmp709(((panda$collections$Iterable*) interfaces702));
        intfType$Iter707 = $tmp711;
        $l712:;
        ITable* $tmp714 = intfType$Iter707->$class->itable;
        while ($tmp714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp714 = $tmp714->next;
        }
        $fn716 $tmp715 = $tmp714->methods[0];
        panda$core$Bit $tmp717 = $tmp715(intfType$Iter707);
        panda$core$Bit $tmp718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp717);
        if (!$tmp718.value) goto $l713;
        {
            ITable* $tmp720 = intfType$Iter707->$class->itable;
            while ($tmp720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp720 = $tmp720->next;
            }
            $fn722 $tmp721 = $tmp720->methods[1];
            panda$core$Object* $tmp723 = $tmp721(intfType$Iter707);
            intfType719 = ((org$pandalanguage$pandac$Type*) $tmp723);
            org$pandalanguage$pandac$ClassDecl* $tmp725 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType719);
            intf724 = $tmp725;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp727 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, intf724);
            intfCC726 = $tmp727;
            panda$collections$ListView* $tmp729 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType719);
            methods728 = $tmp729;
            panda$core$String* $tmp731 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp732 = panda$core$String$convert$R$panda$core$String($tmp731);
            panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp732, &$s733);
            panda$core$String* $tmp735 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf724)->name);
            panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp734, $tmp735);
            panda$core$String* $tmp738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp736, &$s737);
            name730 = $tmp738;
            panda$core$MutableString* $tmp740 = (panda$core$MutableString*) malloc(40);
            $tmp740->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp740->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp743 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp744 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp743);
            panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s742, $tmp744);
            panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp745, &$s746);
            ITable* $tmp749 = ((panda$collections$CollectionView*) methods728)->$class->itable;
            while ($tmp749->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp749 = $tmp749->next;
            }
            $fn751 $tmp750 = $tmp749->methods[0];
            panda$core$Int64 $tmp752 = $tmp750(((panda$collections$CollectionView*) methods728));
            panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s748, ((panda$core$Object*) wrap_panda$core$Int64($tmp752)));
            panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp753, &$s754);
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp755, name730);
            panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, &$s757);
            panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp747, $tmp758);
            org$pandalanguage$pandac$Type* $tmp761 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp762 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp761);
            panda$core$String* $tmp763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s760, $tmp762);
            panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp763, &$s764);
            panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, intfCC726->name);
            panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s767);
            panda$core$String* $tmp769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp768, previous705);
            panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp769, &$s770);
            panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp759, $tmp771);
            panda$core$MutableString$init$panda$core$String($tmp740, $tmp772);
            result739 = $tmp740;
            separator773 = &$s774;
            {
                ITable* $tmp776 = ((panda$collections$Iterable*) methods728)->$class->itable;
                while ($tmp776->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp776 = $tmp776->next;
                }
                $fn778 $tmp777 = $tmp776->methods[0];
                panda$collections$Iterator* $tmp779 = $tmp777(((panda$collections$Iterable*) methods728));
                m$Iter775 = $tmp779;
                $l780:;
                ITable* $tmp782 = m$Iter775->$class->itable;
                while ($tmp782->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp782 = $tmp782->next;
                }
                $fn784 $tmp783 = $tmp782->methods[0];
                panda$core$Bit $tmp785 = $tmp783(m$Iter775);
                panda$core$Bit $tmp786 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp785);
                if (!$tmp786.value) goto $l781;
                {
                    ITable* $tmp788 = m$Iter775->$class->itable;
                    while ($tmp788->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp788 = $tmp788->next;
                    }
                    $fn790 $tmp789 = $tmp788->methods[1];
                    panda$core$Object* $tmp791 = $tmp789(m$Iter775);
                    m787 = ((org$pandalanguage$pandac$MethodDecl*) $tmp791);
                    panda$core$MutableString$append$panda$core$String(result739, separator773);
                    separator773 = &$s792;
                    panda$core$Bit $tmp793 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m787->annotations);
                    if ($tmp793.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result739, &$s794);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp795 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m787, self->wrapperShims);
                        panda$core$MutableString$append$panda$core$String(result739, $tmp795);
                    }
                    }
                }
                goto $l780;
                $l781:;
            }
            panda$core$MutableString$append$panda$core$String(result739, &$s796);
            panda$core$String* $tmp797 = panda$core$MutableString$finish$R$panda$core$String(result739);
            (($fn798) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp797);
            panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s799, name730);
            panda$core$String* $tmp802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp800, &$s801);
            previous705 = $tmp802;
        }
        goto $l712;
        $l713:;
    }
    return previous705;
}
panda$core$Bit org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit $tmp803 = org$pandalanguage$pandac$HCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self->hCodeGen, p_m);
    return $tmp803;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result805;
    org$pandalanguage$pandac$Type* declared806;
    org$pandalanguage$pandac$Type* inherited809;
    org$pandalanguage$pandac$CCodeGenerator$MethodShim* shim812;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    panda$core$Bit $tmp804 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
    if ($tmp804.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp807 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp808 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp807);
    declared806 = $tmp808;
    org$pandalanguage$pandac$Type* $tmp810 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited809 = $tmp810;
    panda$core$Bit $tmp811 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared806, inherited809);
    if ($tmp811.value) {
    {
        org$pandalanguage$pandac$Type* $tmp813 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$CCodeGenerator$MethodShim* $tmp814 = org$pandalanguage$pandac$CCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$CCodeGenerator$MethodShim(self, p_m, $tmp813, ((panda$io$OutputStream*) self->shims));
        shim812 = $tmp814;
        result805 = shim812->name;
    }
    }
    else {
    {
        panda$core$String* $tmp815 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        result805 = $tmp815;
    }
    }
    return result805;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result816;
    panda$core$String* type818;
    panda$collections$ListView* vtable829;
    panda$core$String* superPtr839;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC840;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant848;
    panda$core$MutableString* code852;
    panda$core$String* separator873;
    panda$collections$Iterator* m$Iter875;
    org$pandalanguage$pandac$MethodDecl* m887;
    panda$core$Object* $tmp817 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result816 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp817);
    if (((panda$core$Bit) { result816 == NULL }).value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_cl);
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        panda$core$Bit $tmp819 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp819.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp820 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp820->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp820->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp822 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp823 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp822)->name);
            panda$core$String* $tmp824 = panda$core$String$convert$R$panda$core$String($tmp823);
            panda$core$String* $tmp826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp824, &$s825);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp820, $tmp826, &$s827);
            result816 = $tmp820;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result816));
            panda$core$Object* $tmp828 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp828);
        }
        }
        panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) p_cl));
        panda$collections$ListView* $tmp830 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable829 = $tmp830;
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp831 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
        $tmp831->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
        $tmp831->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp833 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp834 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp833)->name);
        panda$core$String* $tmp835 = panda$core$String$convert$R$panda$core$String($tmp834);
        panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp835, &$s836);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp831, $tmp837, &$s838);
        result816 = $tmp831;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result816));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp841 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp842 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp841);
            superCC840 = $tmp842;
            panda$core$String* $tmp844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s843, superCC840->name);
            panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp844, &$s845);
            superPtr839 = $tmp846;
        }
        }
        else {
        {
            superPtr839 = &$s847;
        }
        }
        org$pandalanguage$pandac$Type* $tmp849 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp850 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp849);
        org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp851 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp850);
        clConstant848 = $tmp851;
        panda$core$MutableString* $tmp853 = (panda$core$MutableString*) malloc(40);
        $tmp853->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp853->refCount.value = 1;
        panda$core$String* $tmp855 = panda$core$String$convert$R$panda$core$String(result816->name);
        panda$core$String* $tmp857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp855, &$s856);
        panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp857, result816->name);
        panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, &$s859);
        panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s861, clConstant848->name);
        panda$core$String* $tmp864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp862, &$s863);
        panda$core$String* $tmp865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp864, superPtr839);
        panda$core$String* $tmp867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp865, &$s866);
        panda$core$String* $tmp868 = org$pandalanguage$pandac$CCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, $tmp868);
        panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp869, &$s870);
        panda$core$String* $tmp872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, $tmp871);
        panda$core$MutableString$init$panda$core$String($tmp853, $tmp872);
        code852 = $tmp853;
        separator873 = &$s874;
        {
            ITable* $tmp876 = ((panda$collections$Iterable*) vtable829)->$class->itable;
            while ($tmp876->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp876 = $tmp876->next;
            }
            $fn878 $tmp877 = $tmp876->methods[0];
            panda$collections$Iterator* $tmp879 = $tmp877(((panda$collections$Iterable*) vtable829));
            m$Iter875 = $tmp879;
            $l880:;
            ITable* $tmp882 = m$Iter875->$class->itable;
            while ($tmp882->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp882 = $tmp882->next;
            }
            $fn884 $tmp883 = $tmp882->methods[0];
            panda$core$Bit $tmp885 = $tmp883(m$Iter875);
            panda$core$Bit $tmp886 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp885);
            if (!$tmp886.value) goto $l881;
            {
                ITable* $tmp888 = m$Iter875->$class->itable;
                while ($tmp888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp888 = $tmp888->next;
                }
                $fn890 $tmp889 = $tmp888->methods[1];
                panda$core$Object* $tmp891 = $tmp889(m$Iter875);
                m887 = ((org$pandalanguage$pandac$MethodDecl*) $tmp891);
                panda$core$MutableString$append$panda$core$String(code852, separator873);
                panda$core$Bit $tmp892 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m887->annotations);
                if ($tmp892.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code852, &$s893);
                }
                }
                else {
                {
                    panda$core$String* $tmp894 = org$pandalanguage$pandac$CCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m887);
                    panda$core$MutableString$append$panda$core$String(code852, $tmp894);
                }
                }
                separator873 = &$s895;
            }
            goto $l880;
            $l881:;
        }
        panda$core$MutableString$append$panda$core$String(code852, &$s896);
        panda$core$String* $tmp897 = panda$core$MutableString$finish$R$panda$core$String(code852);
        (($fn898) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp897);
        panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    }
    }
    return result816;
}
org$pandalanguage$pandac$CCodeGenerator$ClassConstant* org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name899;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* result904;
    panda$core$String* type908;
    org$pandalanguage$pandac$ClassDecl* value919;
    panda$collections$ListView* valueVTable922;
    panda$collections$ListView* vtable931;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* superCC933;
    panda$core$String* superCast936;
    panda$core$String* itable941;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* clConstant943;
    panda$core$MutableString* code947;
    panda$core$String* separator967;
    panda$core$Range$LTpanda$core$Int64$GT $tmp969;
    org$pandalanguage$pandac$MethodDecl* m987;
    panda$core$String* methodName992;
    panda$core$String* $tmp900 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp901 = panda$core$String$convert$R$panda$core$String($tmp900);
    panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp901, &$s902);
    name899 = $tmp903;
    panda$core$Object* $tmp905 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name899));
    result904 = ((org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) $tmp905);
    if (((panda$core$Bit) { result904 == NULL }).value) {
    {
        panda$core$Bit $tmp906 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_cl);
        if ($tmp906.value) {
        {
            org$pandalanguage$pandac$Type* $tmp907 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp907);
            type908 = &$s909;
            panda$core$String* $tmp910 = panda$core$String$convert$R$panda$core$String(name899);
            panda$core$String* $tmp912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp910, &$s911);
            panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp912, type908);
            panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp913, &$s914);
            (($fn916) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp915);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp917 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp917->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp917->refCount.value = 1;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp917, name899, type908);
            result904 = $tmp917;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp920 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp921 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp920);
            value919 = $tmp921;
            panda$collections$ListView* $tmp923 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value919);
            valueVTable922 = $tmp923;
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp924 = (org$pandalanguage$pandac$CCodeGenerator$ClassConstant*) malloc(32);
            $tmp924->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$ClassConstant$class;
            $tmp924->refCount.value = 1;
            panda$core$String* $tmp926 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp927 = panda$core$String$convert$R$panda$core$String($tmp926);
            panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, &$s928);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp924, $tmp929, &$s930);
            result904 = $tmp924;
            panda$collections$ListView* $tmp932 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable931 = $tmp932;
            org$pandalanguage$pandac$ClassDecl* $tmp934 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp935 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp934);
            superCC933 = $tmp935;
            panda$core$String* $tmp938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s937, superCC933->name);
            panda$core$String* $tmp940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp938, &$s939);
            superCast936 = $tmp940;
            panda$core$String* $tmp942 = org$pandalanguage$pandac$CCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable941 = $tmp942;
            org$pandalanguage$pandac$Type* $tmp944 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp945 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp944);
            org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp946 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, $tmp945);
            clConstant943 = $tmp946;
            panda$core$MutableString* $tmp948 = (panda$core$MutableString*) malloc(40);
            $tmp948->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp948->refCount.value = 1;
            panda$core$String* $tmp950 = panda$core$String$convert$R$panda$core$String(result904->name);
            panda$core$String* $tmp952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp950, &$s951);
            panda$core$String* $tmp953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp952, result904->name);
            panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp953, &$s954);
            panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s956, clConstant943->name);
            panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, &$s958);
            panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp959, superCast936);
            panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, &$s961);
            panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, itable941);
            panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, &$s964);
            panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp955, $tmp965);
            panda$core$MutableString$init$panda$core$String($tmp948, $tmp966);
            code947 = $tmp948;
            separator967 = &$s968;
            ITable* $tmp970 = ((panda$collections$CollectionView*) valueVTable922)->$class->itable;
            while ($tmp970->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp970 = $tmp970->next;
            }
            $fn972 $tmp971 = $tmp970->methods[0];
            panda$core$Int64 $tmp973 = $tmp971(((panda$collections$CollectionView*) valueVTable922));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp969, ((panda$core$Int64) { 0 }), $tmp973, ((panda$core$Bit) { false }));
            int64_t $tmp975 = $tmp969.min.value;
            panda$core$Int64 i974 = { $tmp975 };
            int64_t $tmp977 = $tmp969.max.value;
            bool $tmp978 = $tmp969.inclusive.value;
            if ($tmp978) goto $l985; else goto $l986;
            $l985:;
            if ($tmp975 <= $tmp977) goto $l979; else goto $l981;
            $l986:;
            if ($tmp975 < $tmp977) goto $l979; else goto $l981;
            $l979:;
            {
                ITable* $tmp988 = vtable931->$class->itable;
                while ($tmp988->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp988 = $tmp988->next;
                }
                $fn990 $tmp989 = $tmp988->methods[0];
                panda$core$Object* $tmp991 = $tmp989(vtable931, i974);
                m987 = ((org$pandalanguage$pandac$MethodDecl*) $tmp991);
                if (((panda$core$Bit) { ((panda$core$Object*) m987->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp993 = org$pandalanguage$pandac$CCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m987, self->wrapperShims);
                    methodName992 = $tmp993;
                }
                }
                else {
                {
                    panda$core$String* $tmp994 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m987);
                    methodName992 = $tmp994;
                    panda$core$Bit $tmp995 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m987->owner);
                    if ($tmp995.value) {
                    {
                        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m987);
                    }
                    }
                }
                }
                panda$core$String* $tmp996 = panda$core$String$convert$R$panda$core$String(separator967);
                panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp996, &$s997);
                panda$core$String* $tmp999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp998, methodName992);
                panda$core$String* $tmp1001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp999, &$s1000);
                panda$core$MutableString$append$panda$core$String(code947, $tmp1001);
                separator967 = &$s1002;
            }
            $l982:;
            int64_t $tmp1004 = $tmp977 - i974.value;
            if ($tmp978) goto $l1005; else goto $l1006;
            $l1005:;
            if ($tmp1004 >= 1) goto $l1003; else goto $l981;
            $l1006:;
            if ($tmp1004 > 1) goto $l1003; else goto $l981;
            $l1003:;
            i974.value += 1;
            goto $l979;
            $l981:;
            panda$core$MutableString$append$panda$core$String(code947, &$s1009);
            panda$core$String* $tmp1010 = panda$core$MutableString$finish$R$panda$core$String(code947);
            (($fn1011) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1010);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name899), ((panda$core$Object*) result904));
    }
    }
    return result904;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$String* result1017;
    panda$core$Bit $tmp1012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1012.value) {
    {
        panda$core$String* $tmp1014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1013, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1014, &$s1015);
        return $tmp1016;
    }
    }
    panda$core$Object* $tmp1018 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1017 = ((panda$core$String*) $tmp1018);
    if (((panda$core$Bit) { result1017 == NULL }).value) {
    {
        panda$core$Int64 $tmp1019 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1019;
        panda$core$String* $tmp1020 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1020, &$s1021);
        panda$core$String* $tmp1023 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1022, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1023, &$s1024);
        result1017 = $tmp1025;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1017));
    }
    }
    return result1017;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1026 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1026.value);
    panda$core$String* $tmp1027 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1028 = panda$core$String$convert$R$panda$core$String($tmp1027);
    panda$core$String* $tmp1030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1028, &$s1029);
    panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1030, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1031, &$s1032);
    return $tmp1033;
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
    panda$core$String* result1034;
    panda$core$String* leftRef1036;
    panda$core$String* falseLabel1050;
    panda$core$String* rightRef1060;
    panda$core$String* $tmp1035 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1034 = $tmp1035;
    panda$core$String* $tmp1037 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1036 = $tmp1037;
    org$pandalanguage$pandac$Type* $tmp1038 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1039 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1038);
    if ($tmp1039.value) {
    {
        panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1036, &$s1040);
        leftRef1036 = $tmp1041;
    }
    }
    panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1042, result1034);
    panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, &$s1044);
    panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1045, leftRef1036);
    panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1047);
    (($fn1049) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1048);
    panda$core$String* $tmp1051 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    falseLabel1050 = $tmp1051;
    panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1052, result1034);
    panda$core$String* $tmp1055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1053, &$s1054);
    panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1055, falseLabel1050);
    panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1056, &$s1057);
    (($fn1059) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1058);
    panda$core$String* $tmp1061 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1060 = $tmp1061;
    org$pandalanguage$pandac$Type* $tmp1062 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1063 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1062);
    if ($tmp1063.value) {
    {
        panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1060, &$s1064);
        rightRef1060 = $tmp1065;
    }
    }
    panda$core$String* $tmp1066 = panda$core$String$convert$R$panda$core$String(result1034);
    panda$core$String* $tmp1068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1066, &$s1067);
    panda$core$String* $tmp1069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1068, rightRef1060);
    panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1069, &$s1070);
    (($fn1072) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1071);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, falseLabel1050, p_out);
    return result1034;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1073;
    panda$core$String* leftRef1075;
    panda$core$String* trueLabel1089;
    panda$core$String* rightRef1099;
    panda$core$String* $tmp1074 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1073 = $tmp1074;
    panda$core$String* $tmp1076 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1075 = $tmp1076;
    org$pandalanguage$pandac$Type* $tmp1077 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1078 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1077);
    if ($tmp1078.value) {
    {
        panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(leftRef1075, &$s1079);
        leftRef1075 = $tmp1080;
    }
    }
    panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1081, result1073);
    panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, &$s1083);
    panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1084, leftRef1075);
    panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1085, &$s1086);
    (($fn1088) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1087);
    panda$core$String* $tmp1090 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    trueLabel1089 = $tmp1090;
    panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1091, result1073);
    panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1092, &$s1093);
    panda$core$String* $tmp1095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1094, trueLabel1089);
    panda$core$String* $tmp1097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1095, &$s1096);
    (($fn1098) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1097);
    panda$core$String* $tmp1100 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1099 = $tmp1100;
    org$pandalanguage$pandac$Type* $tmp1101 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1102 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1101);
    if ($tmp1102.value) {
    {
        panda$core$String* $tmp1104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(rightRef1099, &$s1103);
        rightRef1099 = $tmp1104;
    }
    }
    panda$core$String* $tmp1105 = panda$core$String$convert$R$panda$core$String(result1073);
    panda$core$String* $tmp1107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1105, &$s1106);
    panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1107, rightRef1099);
    panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1108, &$s1109);
    (($fn1111) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1110);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, trueLabel1089, p_out);
    return result1073;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$Int64 p_cl, org$pandalanguage$pandac$Type* p_t, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* cOp1112;
    panda$core$Bit logical1113;
    panda$core$String* result1131;
    logical1113 = ((panda$core$Bit) { false });
    switch (p_op.value) {
        case 51:
        {
            cOp1112 = &$s1114;
        }
        break;
        case 52:
        {
            cOp1112 = &$s1115;
        }
        break;
        case 53:
        {
            cOp1112 = &$s1116;
        }
        break;
        case 55:
        {
            cOp1112 = &$s1117;
        }
        break;
        case 54:
        {
            cOp1112 = &$s1118;
        }
        break;
        case 56:
        {
            cOp1112 = &$s1119;
        }
        break;
        case 72:
        {
            cOp1112 = &$s1120;
        }
        break;
        case 1:
        {
            cOp1112 = &$s1121;
        }
        break;
        case 67:
        {
            cOp1112 = &$s1122;
        }
        break;
        case 69:
        {
            cOp1112 = &$s1123;
        }
        break;
        case 70:
        case 71:
        {
            cOp1112 = &$s1124;
        }
        break;
        case 58:
        {
            cOp1112 = &$s1125;
            logical1113 = ((panda$core$Bit) { true });
        }
        break;
        case 59:
        {
            cOp1112 = &$s1126;
            logical1113 = ((panda$core$Bit) { true });
        }
        break;
        case 63:
        {
            cOp1112 = &$s1127;
            logical1113 = ((panda$core$Bit) { true });
        }
        break;
        case 62:
        {
            cOp1112 = &$s1128;
            logical1113 = ((panda$core$Bit) { true });
        }
        break;
        case 65:
        {
            cOp1112 = &$s1129;
            logical1113 = ((panda$core$Bit) { true });
        }
        break;
        case 64:
        {
            logical1113 = ((panda$core$Bit) { true });
            cOp1112 = &$s1130;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
    panda$core$String* $tmp1132 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1131 = $tmp1132;
    if (logical1113.value) {
    {
        (($fn1134) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1133);
    }
    }
    else {
    {
        panda$core$String* $tmp1135 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
        panda$core$String* $tmp1136 = panda$core$String$convert$R$panda$core$String($tmp1135);
        panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1136, &$s1137);
        (($fn1139) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1138);
    }
    }
    panda$core$String* $tmp1140 = panda$core$String$convert$R$panda$core$String(result1131);
    panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1140, &$s1141);
    panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, p_leftRef);
    panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1143, &$s1144);
    panda$core$String* $tmp1146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, cOp1112);
    panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1146, &$s1147);
    panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, p_rightRef);
    panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1149, &$s1150);
    (($fn1152) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1151);
    return result1131;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1153;
    panda$core$String* rightRef1155;
    panda$core$String* $tmp1154 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1153 = $tmp1154;
    panda$core$String* $tmp1156 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1155 = $tmp1156;
    panda$core$String* $tmp1158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1157, leftRef1153);
    panda$core$String* $tmp1160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1158, &$s1159);
    panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1160, rightRef1155);
    panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1161, &$s1162);
    return $tmp1163;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1164;
    panda$core$String* rightRef1166;
    panda$core$String* $tmp1165 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1164 = $tmp1165;
    panda$core$String* $tmp1167 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1166 = $tmp1167;
    panda$core$String* $tmp1169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1168, leftRef1164);
    panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1169, &$s1170);
    panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1171, rightRef1166);
    panda$core$String* $tmp1174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1172, &$s1173);
    return $tmp1174;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1180;
    panda$core$String* rightRef1182;
    panda$core$Bit $tmp1175 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1175.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1176 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1176;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1177 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1177;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1178 = org$pandalanguage$pandac$CCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1178;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1179 = org$pandalanguage$pandac$CCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1179;
        }
        break;
        default:
        {
            panda$core$String* $tmp1181 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1180 = $tmp1181;
            panda$core$String* $tmp1183 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1182 = $tmp1183;
            panda$core$Int64 $tmp1184 = org$pandalanguage$pandac$CCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1185 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$panda$core$Int64$org$pandalanguage$pandac$Type$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1184, p_left->type, leftRef1180, p_op, rightRef1182, p_out);
            return $tmp1185;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1186.value);
    panda$core$Int64 $tmp1187 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1187, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1188.value);
    panda$core$Object* $tmp1189 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1191 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1189), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1190), p_out);
    return $tmp1191;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1192;
    panda$core$Int64 index1194;
    panda$collections$ListView* vtable1195;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1197;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1193 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1192 = $tmp1193;
    index1194 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1196 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1195 = $tmp1196;
    ITable* $tmp1198 = ((panda$collections$CollectionView*) vtable1195)->$class->itable;
    while ($tmp1198->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1198 = $tmp1198->next;
    }
    $fn1200 $tmp1199 = $tmp1198->methods[0];
    panda$core$Int64 $tmp1201 = $tmp1199(((panda$collections$CollectionView*) vtable1195));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1197, ((panda$core$Int64) { 0 }), $tmp1201, ((panda$core$Bit) { false }));
    int64_t $tmp1203 = $tmp1197.min.value;
    panda$core$Int64 i1202 = { $tmp1203 };
    int64_t $tmp1205 = $tmp1197.max.value;
    bool $tmp1206 = $tmp1197.inclusive.value;
    if ($tmp1206) goto $l1213; else goto $l1214;
    $l1213:;
    if ($tmp1203 <= $tmp1205) goto $l1207; else goto $l1209;
    $l1214:;
    if ($tmp1203 < $tmp1205) goto $l1207; else goto $l1209;
    $l1207:;
    {
        ITable* $tmp1215 = vtable1195->$class->itable;
        while ($tmp1215->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1215 = $tmp1215->next;
        }
        $fn1217 $tmp1216 = $tmp1215->methods[0];
        panda$core$Object* $tmp1218 = $tmp1216(vtable1195, i1202);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1218)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1194 = i1202;
            goto $l1209;
        }
        }
    }
    $l1210:;
    int64_t $tmp1220 = $tmp1205 - i1202.value;
    if ($tmp1206) goto $l1221; else goto $l1222;
    $l1221:;
    if ($tmp1220 >= 1) goto $l1219; else goto $l1209;
    $l1222:;
    if ($tmp1220 > 1) goto $l1219; else goto $l1209;
    $l1219:;
    i1202.value += 1;
    goto $l1207;
    $l1209:;
    panda$core$Bit $tmp1225 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1194, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1225.value);
    org$pandalanguage$pandac$Type* $tmp1227 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1228 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1227);
    panda$core$String* $tmp1229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1226, $tmp1228);
    panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1229, &$s1230);
    panda$core$String* $tmp1232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1231, p_target);
    panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1232, &$s1233);
    panda$core$String* $tmp1235 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1234, ((panda$core$Object*) wrap_panda$core$Int64(index1194)));
    panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1235, &$s1236);
    return $tmp1237;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* cc1238;
    panda$core$String* itable1240;
    panda$core$Int64 index1269;
    panda$collections$ListView* vtable1270;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1272;
    panda$core$String* result1309;
    panda$core$String* methodType1311;
    org$pandalanguage$pandac$CCodeGenerator$ClassConstant* $tmp1239 = org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_m->owner);
    cc1238 = $tmp1239;
    panda$core$String* $tmp1241 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    itable1240 = $tmp1241;
    panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1242, itable1240);
    panda$core$String* $tmp1245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1243, &$s1244);
    panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1245, p_target);
    panda$core$String* $tmp1248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1246, &$s1247);
    (($fn1249) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1248);
    panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1250, itable1240);
    panda$core$String* $tmp1253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1251, &$s1252);
    panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1253, cc1238->name);
    panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1254, &$s1255);
    (($fn1257) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1256);
    panda$core$Int64 $tmp1258 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1258;
    panda$core$String* $tmp1259 = panda$core$String$convert$R$panda$core$String(itable1240);
    panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1259, &$s1260);
    panda$core$String* $tmp1262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, itable1240);
    panda$core$String* $tmp1264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1262, &$s1263);
    (($fn1265) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1264);
    panda$core$Int64 $tmp1266 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1266;
    (($fn1268) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1267);
    index1269 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp1271 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1270 = $tmp1271;
    ITable* $tmp1273 = ((panda$collections$CollectionView*) vtable1270)->$class->itable;
    while ($tmp1273->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1273 = $tmp1273->next;
    }
    $fn1275 $tmp1274 = $tmp1273->methods[0];
    panda$core$Int64 $tmp1276 = $tmp1274(((panda$collections$CollectionView*) vtable1270));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1272, ((panda$core$Int64) { 0 }), $tmp1276, ((panda$core$Bit) { false }));
    int64_t $tmp1278 = $tmp1272.min.value;
    panda$core$Int64 i1277 = { $tmp1278 };
    int64_t $tmp1280 = $tmp1272.max.value;
    bool $tmp1281 = $tmp1272.inclusive.value;
    if ($tmp1281) goto $l1288; else goto $l1289;
    $l1288:;
    if ($tmp1278 <= $tmp1280) goto $l1282; else goto $l1284;
    $l1289:;
    if ($tmp1278 < $tmp1280) goto $l1282; else goto $l1284;
    $l1282:;
    {
        ITable* $tmp1290 = vtable1270->$class->itable;
        while ($tmp1290->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp1290 = $tmp1290->next;
        }
        $fn1292 $tmp1291 = $tmp1290->methods[0];
        panda$core$Object* $tmp1293 = $tmp1291(vtable1270, i1277);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp1293)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1269 = i1277;
            goto $l1284;
        }
        }
    }
    $l1285:;
    int64_t $tmp1295 = $tmp1280 - i1277.value;
    if ($tmp1281) goto $l1296; else goto $l1297;
    $l1296:;
    if ($tmp1295 >= 1) goto $l1294; else goto $l1284;
    $l1297:;
    if ($tmp1295 > 1) goto $l1294; else goto $l1284;
    $l1294:;
    i1277.value += 1;
    goto $l1282;
    $l1284:;
    org$pandalanguage$pandac$Type* $tmp1300 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp1301 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1300);
    panda$collections$ListView* $tmp1302 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp1301);
    ITable* $tmp1303 = ((panda$collections$CollectionView*) $tmp1302)->$class->itable;
    while ($tmp1303->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1303 = $tmp1303->next;
    }
    $fn1305 $tmp1304 = $tmp1303->methods[0];
    panda$core$Int64 $tmp1306 = $tmp1304(((panda$collections$CollectionView*) $tmp1302));
    panda$core$Int64 $tmp1307 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index1269, $tmp1306);
    index1269 = $tmp1307;
    panda$core$Bit $tmp1308 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1269, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp1308.value);
    panda$core$String* $tmp1310 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1309 = $tmp1310;
    org$pandalanguage$pandac$Type* $tmp1312 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp1313 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1312);
    methodType1311 = $tmp1313;
    panda$core$String* $tmp1314 = panda$core$String$convert$R$panda$core$String(methodType1311);
    panda$core$String* $tmp1316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1314, &$s1315);
    panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1316, result1309);
    panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1317, &$s1318);
    panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1319, itable1240);
    panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, &$s1321);
    panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1322, ((panda$core$Object*) wrap_panda$core$Int64(index1269)));
    panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1324);
    (($fn1326) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1325);
    return result1309;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1328 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp1327 = $tmp1328.value;
    if (!$tmp1327) goto $l1329;
    panda$core$Bit $tmp1330 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp1327 = $tmp1330.value;
    $l1329:;
    panda$core$Bit $tmp1331 = { $tmp1327 };
    if ($tmp1331.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp1332.value) {
        {
            panda$core$String* $tmp1333 = org$pandalanguage$pandac$CCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1333;
        }
        }
        else {
        {
            panda$core$String* $tmp1334 = org$pandalanguage$pandac$CCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp1334;
        }
        }
    }
    }
    else {
    {
        panda$core$Bit $tmp1335 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, p_m->owner);
        if ($tmp1335.value) {
        {
            org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp1336 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp1336;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m1337;
    panda$core$String* $match$862_91338;
    panda$core$String* count1343;
    panda$core$Int64 elementSize1349;
    panda$core$String* ptr1368;
    panda$core$String* ptr1379;
    panda$core$String* index1382;
    panda$core$String* ptr1395;
    panda$core$String* count1398;
    panda$core$Int64 elementSize1404;
    panda$core$String* ptr1426;
    panda$core$String* offset1429;
    m1337 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$862_91338 = ((org$pandalanguage$pandac$Symbol*) m1337->value)->name;
        panda$core$Bit $tmp1340 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91338, &$s1339);
        if ($tmp1340.value) {
        {
            panda$core$Int64 $tmp1341 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1341, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1342.value);
            panda$core$Object* $tmp1344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1345 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1344), p_out);
            count1343 = $tmp1345;
            org$pandalanguage$pandac$Type* $tmp1346 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1337);
            panda$core$Int64 $tmp1347 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1346->subtypes);
            panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1347, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1348.value);
            org$pandalanguage$pandac$Type* $tmp1350 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1337);
            panda$core$Object* $tmp1351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1350->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1352 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1351));
            elementSize1349 = $tmp1352;
            panda$core$String* $tmp1354 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1353, $tmp1354);
            panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1355, &$s1356);
            panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1357, count1343);
            panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, &$s1359);
            panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1360, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1349)));
            panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1361, &$s1362);
            return $tmp1363;
        }
        }
        else {
        panda$core$Bit $tmp1365 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91338, &$s1364);
        if ($tmp1365.value) {
        {
            panda$core$Int64 $tmp1366 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1366, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp1367.value);
            panda$core$Object* $tmp1369 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1370 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1369), p_out);
            ptr1368 = $tmp1370;
            panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1371, ptr1368);
            panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1372, &$s1373);
            return $tmp1374;
        }
        }
        else {
        panda$core$Bit $tmp1376 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91338, &$s1375);
        if ($tmp1376.value) {
        {
            panda$core$Int64 $tmp1377 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1377, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1378.value);
            panda$core$Object* $tmp1380 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1381 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1380), p_out);
            ptr1379 = $tmp1381;
            panda$core$Object* $tmp1383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1384 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1383), p_out);
            index1382 = $tmp1384;
            panda$core$String* $tmp1385 = panda$core$String$convert$R$panda$core$String(ptr1379);
            panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1385, &$s1386);
            panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1387, index1382);
            panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, &$s1389);
            return $tmp1390;
        }
        }
        else {
        panda$core$Bit $tmp1392 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91338, &$s1391);
        if ($tmp1392.value) {
        {
            panda$core$Int64 $tmp1393 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1393, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1394.value);
            panda$core$Object* $tmp1396 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1397 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1396), p_out);
            ptr1395 = $tmp1397;
            panda$core$Object* $tmp1399 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1400 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1399), p_out);
            count1398 = $tmp1400;
            org$pandalanguage$pandac$Type* $tmp1401 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1337);
            panda$core$Int64 $tmp1402 = panda$collections$Array$get_count$R$panda$core$Int64($tmp1401->subtypes);
            panda$core$Bit $tmp1403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1402, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1403.value);
            org$pandalanguage$pandac$Type* $tmp1405 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m1337);
            panda$core$Object* $tmp1406 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp1405->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp1407 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp1406));
            elementSize1404 = $tmp1407;
            panda$core$String* $tmp1409 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
            panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1408, $tmp1409);
            panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1411);
            panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, ptr1395);
            panda$core$String* $tmp1415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1413, &$s1414);
            panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1415, count1398);
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1417);
            panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1418, ((panda$core$Object*) wrap_panda$core$Int64(elementSize1404)));
            panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1420);
            return $tmp1421;
        }
        }
        else {
        panda$core$Bit $tmp1423 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$862_91338, &$s1422);
        if ($tmp1423.value) {
        {
            panda$core$Int64 $tmp1424 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1424, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1425.value);
            panda$core$Object* $tmp1427 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp1428 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1427), p_out);
            ptr1426 = $tmp1428;
            panda$core$Object* $tmp1430 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1431 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1430), p_out);
            offset1429 = $tmp1431;
            panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1432, ptr1426);
            panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, &$s1434);
            panda$core$String* $tmp1436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, offset1429);
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1436, &$s1437);
            return $tmp1438;
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
    org$pandalanguage$pandac$MethodDecl* m1440;
    panda$core$String* bit1451;
    panda$core$String* result1455;
    panda$core$String* bit1469;
    panda$core$String* result1473;
    panda$collections$Array* args1483;
    org$pandalanguage$pandac$Type* actualMethodType1487;
    panda$core$String* actualResultType1488;
    panda$core$Bit isSuper1489;
    panda$core$Int64 offset1509;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1514;
    panda$core$String* arg1529;
    panda$core$String* target1550;
    panda$core$String* methodRef1554;
    panda$core$Bit indirect1556;
    panda$core$String* result1558;
    panda$core$String* separator1560;
    panda$core$String* indirectVar1562;
    panda$collections$Iterator* arg$Iter1588;
    panda$core$String* arg1600;
    panda$core$Bit $tmp1439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp1439.value);
    m1440 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp1442 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1440->owner)->name, &$s1441);
    if ($tmp1442.value) {
    {
        panda$core$String* $tmp1443 = org$pandalanguage$pandac$CCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp1443;
    }
    }
    panda$core$Bit $tmp1444 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m1440->owner);
    if ($tmp1444.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1440);
    }
    }
    panda$core$Bit $tmp1446 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1440->owner)->name, &$s1445);
    if ($tmp1446.value) {
    {
        panda$core$Bit $tmp1448 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1440)->name, &$s1447);
        if ($tmp1448.value) {
        {
            panda$core$Int64 $tmp1449 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1449, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1450.value);
            panda$core$Object* $tmp1452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1453 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1454 = org$pandalanguage$pandac$CCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1452), ((org$pandalanguage$pandac$IRNode*) $tmp1453), p_out);
            bit1451 = $tmp1454;
            panda$core$String* $tmp1456 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1455 = $tmp1456;
            panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1457, result1455);
            panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1458, &$s1459);
            panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, bit1451);
            panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, &$s1462);
            (($fn1464) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1463);
            return result1455;
        }
        }
        panda$core$Bit $tmp1466 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m1440)->name, &$s1465);
        if ($tmp1466.value) {
        {
            panda$core$Int64 $tmp1467 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp1468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1467, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp1468.value);
            panda$core$Object* $tmp1470 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp1471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp1472 = org$pandalanguage$pandac$CCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1470), ((org$pandalanguage$pandac$IRNode*) $tmp1471), p_out);
            bit1469 = $tmp1472;
            panda$core$String* $tmp1474 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
            result1473 = $tmp1474;
            panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1475, result1473);
            panda$core$String* $tmp1478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1476, &$s1477);
            panda$core$String* $tmp1479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1478, bit1469);
            panda$core$String* $tmp1481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1479, &$s1480);
            (($fn1482) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1481);
            return result1473;
        }
        }
    }
    }
    panda$collections$Array* $tmp1484 = (panda$collections$Array*) malloc(40);
    $tmp1484->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1484->refCount.value = 1;
    panda$core$Int64 $tmp1486 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp1484, $tmp1486);
    args1483 = $tmp1484;
    panda$core$Int64 $tmp1491 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp1492 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1491, ((panda$core$Int64) { 1 }));
    bool $tmp1490 = $tmp1492.value;
    if (!$tmp1490) goto $l1493;
    panda$core$Object* $tmp1494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1494)->kind, ((panda$core$Int64) { 1024 }));
    $tmp1490 = $tmp1495.value;
    $l1493:;
    panda$core$Bit $tmp1496 = { $tmp1490 };
    isSuper1489 = $tmp1496;
    panda$core$Bit $tmp1498 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper1489);
    bool $tmp1497 = $tmp1498.value;
    if (!$tmp1497) goto $l1499;
    panda$core$Bit $tmp1500 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m1440);
    $tmp1497 = $tmp1500.value;
    $l1499:;
    panda$core$Bit $tmp1501 = { $tmp1497 };
    if ($tmp1501.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1502 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1440);
        actualMethodType1487 = $tmp1502;
        panda$core$Int64 $tmp1503 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1487->subtypes);
        panda$core$Int64 $tmp1504 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1503, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1505 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1487->subtypes, $tmp1504);
        panda$core$String* $tmp1506 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1505));
        actualResultType1488 = $tmp1506;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp1507 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m1440);
        actualMethodType1487 = $tmp1507;
        panda$core$String* $tmp1508 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType1488 = $tmp1508;
    }
    }
    panda$core$Int64 $tmp1510 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp1511 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1487->subtypes);
    panda$core$Int64 $tmp1512 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1510, $tmp1511);
    panda$core$Int64 $tmp1513 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp1512, ((panda$core$Int64) { 1 }));
    offset1509 = $tmp1513;
    panda$core$Int64 $tmp1515 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1514, ((panda$core$Int64) { 0 }), $tmp1515, ((panda$core$Bit) { false }));
    int64_t $tmp1517 = $tmp1514.min.value;
    panda$core$Int64 i1516 = { $tmp1517 };
    int64_t $tmp1519 = $tmp1514.max.value;
    bool $tmp1520 = $tmp1514.inclusive.value;
    if ($tmp1520) goto $l1527; else goto $l1528;
    $l1527:;
    if ($tmp1517 <= $tmp1519) goto $l1521; else goto $l1523;
    $l1528:;
    if ($tmp1517 < $tmp1519) goto $l1521; else goto $l1523;
    $l1521:;
    {
        panda$core$Object* $tmp1530 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1516);
        panda$core$String* $tmp1531 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1530), p_out);
        arg1529 = $tmp1531;
        panda$core$Bit $tmp1533 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i1516, offset1509);
        bool $tmp1532 = $tmp1533.value;
        if (!$tmp1532) goto $l1534;
        panda$core$Int64 $tmp1535 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1516, offset1509);
        panda$core$Object* $tmp1536 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1487->subtypes, $tmp1535);
        panda$core$Object* $tmp1537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1516);
        panda$core$Bit $tmp1538 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1536), ((org$pandalanguage$pandac$IRNode*) $tmp1537)->type);
        $tmp1532 = $tmp1538.value;
        $l1534:;
        panda$core$Bit $tmp1539 = { $tmp1532 };
        if ($tmp1539.value) {
        {
            panda$core$Object* $tmp1540 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i1516);
            panda$core$Int64 $tmp1541 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i1516, offset1509);
            panda$core$Object* $tmp1542 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1487->subtypes, $tmp1541);
            panda$core$String* $tmp1543 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg1529, ((org$pandalanguage$pandac$IRNode*) $tmp1540)->type, ((org$pandalanguage$pandac$Type*) $tmp1542), p_out);
            arg1529 = $tmp1543;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args1483, ((panda$core$Object*) arg1529));
    }
    $l1524:;
    int64_t $tmp1545 = $tmp1519 - i1516.value;
    if ($tmp1520) goto $l1546; else goto $l1547;
    $l1546:;
    if ($tmp1545 >= 1) goto $l1544; else goto $l1523;
    $l1547:;
    if ($tmp1545 > 1) goto $l1544; else goto $l1523;
    $l1544:;
    i1516.value += 1;
    goto $l1521;
    $l1523:;
    panda$core$Int64 $tmp1551 = panda$collections$Array$get_count$R$panda$core$Int64(args1483);
    panda$core$Bit $tmp1552 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1551, ((panda$core$Int64) { 0 }));
    if ($tmp1552.value) {
    {
        panda$core$Object* $tmp1553 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args1483, ((panda$core$Int64) { 0 }));
        target1550 = ((panda$core$String*) $tmp1553);
    }
    }
    else {
    {
        target1550 = NULL;
    }
    }
    panda$core$String* $tmp1555 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target1550, m1440, isSuper1489, p_out);
    methodRef1554 = $tmp1555;
    panda$core$Bit $tmp1557 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m1440);
    indirect1556 = $tmp1557;
    panda$core$String* $tmp1559 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1558 = $tmp1559;
    separator1560 = &$s1561;
    if (indirect1556.value) {
    {
        panda$core$String* $tmp1563 = panda$core$String$convert$R$panda$core$String(actualResultType1488);
        panda$core$String* $tmp1565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1563, &$s1564);
        panda$core$String* $tmp1566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1565, result1558);
        panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1566, &$s1567);
        (($fn1569) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1568);
        panda$core$String* $tmp1570 = panda$core$String$convert$R$panda$core$String(methodRef1554);
        panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, &$s1571);
        panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, result1558);
        panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1573, &$s1574);
        (($fn1576) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1575);
        separator1560 = &$s1577;
    }
    }
    else {
    {
        panda$core$String* $tmp1578 = panda$core$String$convert$R$panda$core$String(actualResultType1488);
        panda$core$String* $tmp1580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1578, &$s1579);
        panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1580, result1558);
        panda$core$String* $tmp1583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1581, &$s1582);
        panda$core$String* $tmp1584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1583, methodRef1554);
        panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1584, &$s1585);
        (($fn1587) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1586);
    }
    }
    {
        ITable* $tmp1589 = ((panda$collections$Iterable*) args1483)->$class->itable;
        while ($tmp1589->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1589 = $tmp1589->next;
        }
        $fn1591 $tmp1590 = $tmp1589->methods[0];
        panda$collections$Iterator* $tmp1592 = $tmp1590(((panda$collections$Iterable*) args1483));
        arg$Iter1588 = $tmp1592;
        $l1593:;
        ITable* $tmp1595 = arg$Iter1588->$class->itable;
        while ($tmp1595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1595 = $tmp1595->next;
        }
        $fn1597 $tmp1596 = $tmp1595->methods[0];
        panda$core$Bit $tmp1598 = $tmp1596(arg$Iter1588);
        panda$core$Bit $tmp1599 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1598);
        if (!$tmp1599.value) goto $l1594;
        {
            ITable* $tmp1601 = arg$Iter1588->$class->itable;
            while ($tmp1601->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1601 = $tmp1601->next;
            }
            $fn1603 $tmp1602 = $tmp1601->methods[1];
            panda$core$Object* $tmp1604 = $tmp1602(arg$Iter1588);
            arg1600 = ((panda$core$String*) $tmp1604);
            panda$core$String* $tmp1605 = panda$core$String$convert$R$panda$core$String(separator1560);
            panda$core$String* $tmp1607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1605, &$s1606);
            panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1607, arg1600);
            panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1608, &$s1609);
            (($fn1611) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1610);
            separator1560 = &$s1612;
        }
        goto $l1593;
        $l1594:;
    }
    (($fn1614) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1613);
    panda$core$String* $tmp1615 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp1616 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp1615, actualResultType1488);
    if ($tmp1616.value) {
    {
        panda$core$Int64 $tmp1617 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType1487->subtypes);
        panda$core$Int64 $tmp1618 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1617, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1619 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType1487->subtypes, $tmp1618);
        panda$core$String* $tmp1620 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result1558, ((org$pandalanguage$pandac$Type*) $tmp1619), p_call->type, p_out);
        return $tmp1620;
    }
    }
    return result1558;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* unwrapped1622;
    panda$core$String* nonNullValue1625;
    panda$core$String* wrapped1635;
    panda$core$Bit $tmp1621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1621.value) {
    {
        panda$core$Object* $tmp1623 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1624 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1623), p_out);
        unwrapped1622 = $tmp1624;
        panda$core$Object* $tmp1626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1627 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped1622, ((org$pandalanguage$pandac$Type*) $tmp1626), p_dstType, p_out);
        nonNullValue1625 = $tmp1627;
        panda$core$String* $tmp1629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1628, p_value);
        panda$core$String* $tmp1631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1629, &$s1630);
        panda$core$String* $tmp1632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1631, nonNullValue1625);
        panda$core$String* $tmp1634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1632, &$s1633);
        return $tmp1634;
    }
    }
    panda$core$String* $tmp1637 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1636, $tmp1637);
    panda$core$String* $tmp1640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1638, &$s1639);
    org$pandalanguage$pandac$ClassDecl* $tmp1641 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    panda$core$String* $tmp1642 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1641)->name);
    panda$core$String* $tmp1643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1640, $tmp1642);
    panda$core$String* $tmp1645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1643, &$s1644);
    panda$core$String* $tmp1647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1646, p_value);
    panda$core$String* $tmp1649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1647, &$s1648);
    panda$core$String* $tmp1650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1645, $tmp1649);
    wrapped1635 = $tmp1650;
    panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1651.value) {
    {
        panda$core$String* $tmp1653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1652, p_value);
        panda$core$String* $tmp1655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1653, &$s1654);
        panda$core$String* $tmp1656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1655, wrapped1635);
        panda$core$String* $tmp1658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1656, &$s1657);
        return $tmp1658;
    }
    }
    return wrapped1635;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field1662;
    org$pandalanguage$pandac$ClassDecl* cl1665;
    panda$core$String* base1668;
    panda$core$Bit $tmp1659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp1659.value);
    panda$core$Int64 $tmp1660 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp1661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1660, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1661.value);
    field1662 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$Bit $tmp1663 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field1662->annotations);
    if ($tmp1663.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field1662->value != NULL }).value);
        panda$core$String* $tmp1664 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field1662->value, p_out);
        return $tmp1664;
    }
    }
    panda$core$Object* $tmp1666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1667 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1666)->type);
    cl1665 = $tmp1667;
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, cl1665);
    panda$core$Object* $tmp1669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1670 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1669), p_out);
    base1668 = $tmp1670;
    PANDA_ASSERT(((panda$core$Bit) { cl1665 != NULL }).value);
    panda$core$Bit $tmp1671 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1665);
    if ($tmp1671.value) {
    {
        panda$core$String* $tmp1672 = panda$core$String$convert$R$panda$core$String(base1668);
        panda$core$String* $tmp1674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1672, &$s1673);
        panda$core$String* $tmp1675 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1662)->name);
        panda$core$String* $tmp1676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1674, $tmp1675);
        panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, &$s1677);
        return $tmp1678;
    }
    }
    panda$core$String* $tmp1679 = panda$core$String$convert$R$panda$core$String(base1668);
    panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1679, &$s1680);
    panda$core$String* $tmp1682 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) field1662)->name);
    panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1681, $tmp1682);
    panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, &$s1684);
    return $tmp1685;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1686;
    panda$core$String* wrapped1696;
    panda$core$String* nonNullValue1699;
    panda$core$String* $tmp1688 = org$pandalanguage$pandac$CCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1687, $tmp1688);
    panda$core$String* $tmp1691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1689, &$s1690);
    panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1691, p_value);
    panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1692, &$s1693);
    result1686 = $tmp1694;
    panda$core$Bit $tmp1695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp1695.value) {
    {
        panda$core$Object* $tmp1697 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1698 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp1697), p_out);
        wrapped1696 = $tmp1698;
        panda$core$Object* $tmp1700 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1701 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped1696, ((org$pandalanguage$pandac$Type*) $tmp1700), p_dstType, p_out);
        nonNullValue1699 = $tmp1701;
        panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1702, p_value);
        panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, &$s1704);
        panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, nonNullValue1699);
        panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
        panda$core$String* $tmp1709 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, $tmp1709);
        panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1710, &$s1711);
        return $tmp1712;
    }
    }
    return result1686;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1714 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1713, $tmp1714);
    panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1715, &$s1716);
    panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1717, p_value);
    panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1718, &$s1719);
    return $tmp1720;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1722 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1721, $tmp1722);
    panda$core$String* $tmp1725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1723, &$s1724);
    panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1725, p_value);
    panda$core$String* $tmp1728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, &$s1727);
    return $tmp1728;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op1729;
    org$pandalanguage$pandac$ClassDecl* srcClass1740;
    org$pandalanguage$pandac$ClassDecl* targetClass1742;
    panda$core$String* srcType1781;
    panda$core$String* dstType1783;
    panda$core$Bit $tmp1730 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp1730.value) {
    {
        panda$core$Bit $tmp1731 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp1731.value);
        panda$core$String* $tmp1733 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
        panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1732, $tmp1733);
        panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1734, &$s1735);
        panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1736, p_value);
        panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, &$s1738);
        return $tmp1739;
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp1741 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass1740 = $tmp1741;
        PANDA_ASSERT(((panda$core$Bit) { srcClass1740 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp1743 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass1742 = $tmp1743;
        PANDA_ASSERT(((panda$core$Bit) { targetClass1742 != NULL }).value);
        panda$core$Bit $tmp1745 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1740);
        bool $tmp1744 = $tmp1745.value;
        if (!$tmp1744) goto $l1746;
        panda$core$Bit $tmp1747 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1742);
        panda$core$Bit $tmp1748 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1747);
        $tmp1744 = $tmp1748.value;
        $l1746:;
        panda$core$Bit $tmp1749 = { $tmp1744 };
        if ($tmp1749.value) {
        {
            panda$core$String* $tmp1750 = org$pandalanguage$pandac$CCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1750;
        }
        }
        else {
        panda$core$Bit $tmp1752 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1740);
        panda$core$Bit $tmp1753 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1752);
        bool $tmp1751 = $tmp1753.value;
        if (!$tmp1751) goto $l1754;
        panda$core$Bit $tmp1755 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1742);
        $tmp1751 = $tmp1755.value;
        $l1754:;
        panda$core$Bit $tmp1756 = { $tmp1751 };
        if ($tmp1756.value) {
        {
            panda$core$String* $tmp1757 = org$pandalanguage$pandac$CCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1757;
        }
        }
        else {
        panda$core$Bit $tmp1760 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass1740);
        bool $tmp1759 = $tmp1760.value;
        if (!$tmp1759) goto $l1761;
        panda$core$Bit $tmp1762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1759 = $tmp1762.value;
        $l1761:;
        panda$core$Bit $tmp1763 = { $tmp1759 };
        bool $tmp1758 = $tmp1763.value;
        if (!$tmp1758) goto $l1764;
        panda$core$Object* $tmp1765 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1766 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1765), p_src);
        $tmp1758 = $tmp1766.value;
        $l1764:;
        panda$core$Bit $tmp1767 = { $tmp1758 };
        if ($tmp1767.value) {
        {
            panda$core$String* $tmp1768 = org$pandalanguage$pandac$CCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1768;
        }
        }
        else {
        panda$core$Bit $tmp1771 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass1742);
        bool $tmp1770 = $tmp1771.value;
        if (!$tmp1770) goto $l1772;
        panda$core$Bit $tmp1773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp1770 = $tmp1773.value;
        $l1772:;
        panda$core$Bit $tmp1774 = { $tmp1770 };
        bool $tmp1769 = $tmp1774.value;
        if (!$tmp1769) goto $l1775;
        panda$core$Object* $tmp1776 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1777 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp1776), p_target);
        $tmp1769 = $tmp1777.value;
        $l1775:;
        panda$core$Bit $tmp1778 = { $tmp1769 };
        if ($tmp1778.value) {
        {
            panda$core$String* $tmp1779 = org$pandalanguage$pandac$CCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp1779;
        }
        }
        }
        }
        }
        op1729 = &$s1780;
    }
    }
    panda$core$String* $tmp1782 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType1781 = $tmp1782;
    panda$core$String* $tmp1784 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType1783 = $tmp1784;
    panda$core$Bit $tmp1785 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType1781, dstType1783);
    if ($tmp1785.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1786, dstType1783);
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, &$s1788);
    panda$core$String* $tmp1790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1789, p_value);
    panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1790, &$s1791);
    return $tmp1792;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base1796;
    panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp1793.value);
    panda$core$Int64 $tmp1794 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1794, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1795.value);
    panda$core$Object* $tmp1797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1798 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1797), p_out);
    base1796 = $tmp1798;
    panda$core$Object* $tmp1799 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1800 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base1796, ((org$pandalanguage$pandac$IRNode*) $tmp1799)->type, p_cast->type, p_out);
    return $tmp1800;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl1804;
    panda$core$String* t1806;
    panda$core$String* value1819;
    panda$core$String* tmp1833;
    panda$core$String* result1850;
    panda$core$String* classPtr1870;
    panda$core$String* className1872;
    panda$core$Bit $tmp1801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp1801.value);
    panda$core$Int64 $tmp1802 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp1803 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp1802, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1803.value);
    org$pandalanguage$pandac$ClassDecl* $tmp1805 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl1804 = $tmp1805;
    PANDA_ASSERT(((panda$core$Bit) { cl1804 != NULL }).value);
    panda$core$String* $tmp1807 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t1806 = $tmp1807;
    panda$core$Bit $tmp1809 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    bool $tmp1808 = $tmp1809.value;
    if ($tmp1808) goto $l1810;
    org$pandalanguage$pandac$Type* $tmp1811 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1812 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp1811);
    $tmp1808 = $tmp1812.value;
    $l1810:;
    panda$core$Bit $tmp1813 = { $tmp1808 };
    if ($tmp1813.value) {
    {
        panda$core$Int64 $tmp1814 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp1815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1814, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1815.value);
        panda$core$Object* $tmp1816 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp1817 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp1816)->children);
        panda$core$Bit $tmp1818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1817, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp1818.value);
        panda$core$Object* $tmp1820 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp1821 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp1820)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1822 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1821), p_out);
        value1819 = $tmp1822;
        panda$core$String* $tmp1824 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1823, $tmp1824);
        panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1825, &$s1826);
        panda$core$String* $tmp1828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1827, value1819);
        panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1828, &$s1829);
        return $tmp1830;
    }
    }
    panda$core$Bit $tmp1831 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1804);
    if ($tmp1831.value) {
    {
        panda$core$Int64 $tmp1832 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp1832;
        panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1834, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, &$s1836);
        tmp1833 = $tmp1837;
        panda$core$String* $tmp1838 = panda$core$String$convert$R$panda$core$String(t1806);
        panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1838, &$s1839);
        panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1840, tmp1833);
        panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1841, &$s1842);
        (($fn1844) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp1843);
        panda$core$Object* $tmp1845 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1846, tmp1833);
        panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1847, &$s1848);
        org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1845), $tmp1849, p_out);
        return tmp1833;
    }
    }
    panda$core$String* $tmp1851 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result1850 = $tmp1851;
    panda$core$String* $tmp1852 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1853 = panda$core$String$convert$R$panda$core$String($tmp1852);
    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, &$s1854);
    panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, result1850);
    panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1857);
    panda$core$String* $tmp1859 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, $tmp1859);
    panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1861);
    panda$core$Int64 $tmp1864 = org$pandalanguage$pandac$CCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1863, ((panda$core$Object*) wrap_panda$core$Int64($tmp1864)));
    panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, &$s1866);
    panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1862, $tmp1867);
    (($fn1869) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1868);
    panda$core$String* $tmp1871 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr1870 = $tmp1871;
    panda$core$Bit $tmp1873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp1873.value) {
    {
        panda$core$Object* $tmp1874 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp1875 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1874));
        className1872 = $tmp1875;
    }
    }
    else {
    {
        panda$core$String* $tmp1876 = org$pandalanguage$pandac$CCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className1872 = $tmp1876;
    }
    }
    panda$core$String* $tmp1877 = panda$core$String$convert$R$panda$core$String(result1850);
    panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, &$s1878);
    panda$core$String* $tmp1880 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) cl1804)->name);
    panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, $tmp1880);
    panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1881, &$s1882);
    (($fn1884) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1883);
    panda$core$String* $tmp1885 = panda$core$String$convert$R$panda$core$String(result1850);
    panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1886);
    (($fn1888) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1887);
    panda$core$Object* $tmp1889 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1890 = panda$core$String$convert$R$panda$core$String(result1850);
    panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1890, &$s1891);
    org$pandalanguage$pandac$CCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp1889), $tmp1892, p_out);
    return result1850;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1893 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp1893;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1895 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1894, $tmp1895);
    return $tmp1896;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s1897;
    }
    }
    return &$s1898;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1899 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    return $tmp1899;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result1901;
    panda$collections$Iterator* raw$Iter1914;
    panda$core$Char8 raw1927;
    panda$core$UInt8 c1932;
    panda$core$Int64 $tmp1900 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp1900;
    panda$core$String* $tmp1903 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1902, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1903, &$s1904);
    result1901 = $tmp1905;
    org$pandalanguage$pandac$Type* $tmp1906 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1906);
    panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1907, result1901);
    panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, &$s1909);
    panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, &$s1911);
    (($fn1913) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp1912);
    {
        panda$collections$ListView* $tmp1915 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp1916 = ((panda$collections$Iterable*) $tmp1915)->$class->itable;
        while ($tmp1916->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1916 = $tmp1916->next;
        }
        $fn1918 $tmp1917 = $tmp1916->methods[0];
        panda$collections$Iterator* $tmp1919 = $tmp1917(((panda$collections$Iterable*) $tmp1915));
        raw$Iter1914 = $tmp1919;
        $l1920:;
        ITable* $tmp1922 = raw$Iter1914->$class->itable;
        while ($tmp1922->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1922 = $tmp1922->next;
        }
        $fn1924 $tmp1923 = $tmp1922->methods[0];
        panda$core$Bit $tmp1925 = $tmp1923(raw$Iter1914);
        panda$core$Bit $tmp1926 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1925);
        if (!$tmp1926.value) goto $l1921;
        {
            ITable* $tmp1928 = raw$Iter1914->$class->itable;
            while ($tmp1928->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1928 = $tmp1928->next;
            }
            $fn1930 $tmp1929 = $tmp1928->methods[1];
            panda$core$Object* $tmp1931 = $tmp1929(raw$Iter1914);
            raw1927 = ((panda$core$Char8$wrapper*) $tmp1931)->value;
            panda$core$UInt8 $tmp1933 = panda$core$Char8$convert$R$panda$core$UInt8(raw1927);
            c1932 = $tmp1933;
            (($fn1935) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), &$s1934);
            panda$collections$ListView* $tmp1937 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1936);
            panda$core$UInt32 $tmp1938 = panda$core$UInt8$$INTDIV$panda$core$UInt8$R$panda$core$UInt32(c1932, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1939 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1938);
            ITable* $tmp1940 = $tmp1937->$class->itable;
            while ($tmp1940->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1940 = $tmp1940->next;
            }
            $fn1942 $tmp1941 = $tmp1940->methods[0];
            panda$core$Object* $tmp1943 = $tmp1941($tmp1937, $tmp1939);
            (($fn1944) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1943)->value)));
            panda$collections$ListView* $tmp1946 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(&$s1945);
            panda$core$UInt32 $tmp1947 = panda$core$UInt8$$REM$panda$core$UInt8$R$panda$core$UInt32(c1932, ((panda$core$UInt8) { 16 }));
            panda$core$Int64 $tmp1948 = panda$core$UInt32$convert$R$panda$core$Int64($tmp1947);
            ITable* $tmp1949 = $tmp1946->$class->itable;
            while ($tmp1949->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1949 = $tmp1949->next;
            }
            $fn1951 $tmp1950 = $tmp1949->methods[0];
            panda$core$Object* $tmp1952 = $tmp1950($tmp1946, $tmp1948);
            (($fn1953) ((panda$io$OutputStream*) self->strings)->$class->vtable[15])(((panda$io$OutputStream*) self->strings), ((panda$core$Object*) wrap_panda$core$Char8(((panda$core$Char8$wrapper*) $tmp1952)->value)));
        }
        goto $l1920;
        $l1921:;
    }
    panda$collections$ListView* $tmp1955 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp1956 = ((panda$collections$CollectionView*) $tmp1955)->$class->itable;
    while ($tmp1956->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp1956 = $tmp1956->next;
    }
    $fn1958 $tmp1957 = $tmp1956->methods[0];
    panda$core$Int64 $tmp1959 = $tmp1957(((panda$collections$CollectionView*) $tmp1955));
    panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1954, ((panda$core$Object*) wrap_panda$core$Int64($tmp1959)));
    panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1960, &$s1961);
    (($fn1963) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp1962);
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1964, result1901);
    panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1965, &$s1966);
    return $tmp1967;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    return &$s1968;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp1970 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1969, $tmp1970);
    panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1971, &$s1972);
    return $tmp1973;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value1977;
    org$pandalanguage$pandac$ClassDecl* cl1980;
    panda$core$String* bit1983;
    panda$core$Bit $tmp1974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp1974.value);
    panda$core$Int64 $tmp1975 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp1976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1975, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp1976.value);
    panda$core$Object* $tmp1978 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp1979 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1978), p_out);
    value1977 = $tmp1979;
    panda$core$Object* $tmp1981 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp1982 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp1981)->type);
    cl1980 = $tmp1982;
    panda$core$Bit $tmp1984 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl1980);
    if ($tmp1984.value) {
    {
        panda$core$Object* $tmp1985 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp1986 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp1985)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp1986.value) {
        {
            bit1983 = &$s1987;
        }
        }
        else {
        {
            panda$core$String* $tmp1989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1988, value1977);
            panda$core$String* $tmp1991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1989, &$s1990);
            bit1983 = $tmp1991;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp1992 = panda$core$String$convert$R$panda$core$String(value1977);
        panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1992, &$s1993);
        bit1983 = $tmp1994;
    }
    }
    panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1995, bit1983);
    panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1996, &$s1997);
    return $tmp1998;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2002;
    org$pandalanguage$pandac$ClassDecl* cl2005;
    panda$core$String* bit2008;
    panda$core$Bit $tmp1999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp1999.value);
    panda$core$Int64 $tmp2000 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2000, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2001.value);
    panda$core$Object* $tmp2003 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2004 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2003), p_out);
    value2002 = $tmp2004;
    panda$core$Object* $tmp2006 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2007 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2006)->type);
    cl2005 = $tmp2007;
    panda$core$Bit $tmp2009 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2005);
    if ($tmp2009.value) {
    {
        panda$core$Object* $tmp2010 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp2011 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2010)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp2011.value) {
        {
            bit2008 = &$s2012;
        }
        }
        else {
        {
            panda$core$String* $tmp2013 = panda$core$String$convert$R$panda$core$String(value2002);
            panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, &$s2014);
            bit2008 = $tmp2015;
        }
        }
    }
    }
    else {
    {
        panda$core$String* $tmp2016 = panda$core$String$convert$R$panda$core$String(value2002);
        panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, &$s2017);
        bit2008 = $tmp2018;
    }
    }
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2019, bit2008);
    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
    return $tmp2022;
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl2024;
    panda$core$Bit $tmp2023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp2023.value);
    panda$core$Object* $tmp2025 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp2026 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp2025));
    cl2024 = $tmp2026;
    PANDA_ASSERT(((panda$core$Bit) { cl2024 != NULL }).value);
    panda$core$Bit $tmp2027 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl2024);
    if ($tmp2027.value) {
    {
        panda$core$String* $tmp2029 = org$pandalanguage$pandac$CCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
        panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2028, $tmp2029);
        panda$core$String* $tmp2032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2030, &$s2031);
        return $tmp2032;
    }
    }
    else {
    {
        return &$s2033;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base2037;
    panda$core$String* result2040;
    panda$core$Bit $tmp2034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp2034.value);
    panda$core$Int64 $tmp2035 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp2036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2035, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2036.value);
    panda$core$Object* $tmp2038 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2039 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2038), p_out);
    base2037 = $tmp2039;
    panda$core$String* $tmp2041 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    result2040 = $tmp2041;
    panda$core$Int64 $tmp2042 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp2042.value) {
        case 52:
        {
            panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2043, base2037);
            panda$core$String* $tmp2046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2044, &$s2045);
            return $tmp2046;
        }
        break;
        case 49:
        {
            panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2047, base2037);
            panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2048, &$s2049);
            return $tmp2050;
        }
        break;
        case 50:
        {
            panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2051, base2037);
            panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, &$s2053);
            return $tmp2054;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value2067;
    panda$core$String* result2070;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp2055 = org$pandalanguage$pandac$CCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2055;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp2056 = org$pandalanguage$pandac$CCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2056;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp2057 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2057;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp2058 = org$pandalanguage$pandac$CCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2058;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp2059 = org$pandalanguage$pandac$CCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2059;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp2060 = org$pandalanguage$pandac$CCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2060;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp2061 = org$pandalanguage$pandac$CCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2061;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp2062 = org$pandalanguage$pandac$CCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp2062;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp2063 = org$pandalanguage$pandac$CCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2063;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp2064 = org$pandalanguage$pandac$CCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp2064;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp2065 = org$pandalanguage$pandac$CCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2065;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp2066 = org$pandalanguage$pandac$CCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2066;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp2068 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2069 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2068), p_out);
            value2067 = $tmp2069;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value2067));
            return value2067;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp2071 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result2070 = ((panda$core$String*) $tmp2071);
            PANDA_ASSERT(((panda$core$Bit) { result2070 != NULL }).value);
            return result2070;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp2072 = org$pandalanguage$pandac$CCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2072;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp2073 = org$pandalanguage$pandac$CCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2073;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp2074 = org$pandalanguage$pandac$CCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2074;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp2075 = org$pandalanguage$pandac$CCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp2075;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp2076 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    return $tmp2076;
}
void org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter2081;
    org$pandalanguage$pandac$IRNode* s2093;
    panda$core$Bit $tmp2077 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp2077.value);
    (($fn2079) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2078);
    panda$core$Int64 $tmp2080 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2080;
    {
        ITable* $tmp2082 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp2082->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2082 = $tmp2082->next;
        }
        $fn2084 $tmp2083 = $tmp2082->methods[0];
        panda$collections$Iterator* $tmp2085 = $tmp2083(((panda$collections$Iterable*) p_block->children));
        s$Iter2081 = $tmp2085;
        $l2086:;
        ITable* $tmp2088 = s$Iter2081->$class->itable;
        while ($tmp2088->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2088 = $tmp2088->next;
        }
        $fn2090 $tmp2089 = $tmp2088->methods[0];
        panda$core$Bit $tmp2091 = $tmp2089(s$Iter2081);
        panda$core$Bit $tmp2092 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2091);
        if (!$tmp2092.value) goto $l2087;
        {
            ITable* $tmp2094 = s$Iter2081->$class->itable;
            while ($tmp2094->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2094 = $tmp2094->next;
            }
            $fn2096 $tmp2095 = $tmp2094->methods[1];
            panda$core$Object* $tmp2097 = $tmp2095(s$Iter2081);
            s2093 = ((org$pandalanguage$pandac$IRNode*) $tmp2097);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s2093, p_out);
        }
        goto $l2086;
        $l2087:;
    }
    panda$core$Int64 $tmp2098 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp2098;
    (($fn2100) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2099);
}
void org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2101;
    panda$core$String* $match$1286_92102;
    panda$core$String* ptr2107;
    panda$core$String* arg2110;
    panda$core$String* base2130;
    panda$core$String* index2133;
    panda$core$String* value2136;
    m2101 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1286_92102 = ((org$pandalanguage$pandac$Symbol*) m2101->value)->name;
        panda$core$Bit $tmp2104 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92102, &$s2103);
        if ($tmp2104.value) {
        {
            panda$core$Int64 $tmp2105 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2105, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2106.value);
            panda$core$Object* $tmp2108 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2109 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2108), p_out);
            ptr2107 = $tmp2109;
            panda$core$Object* $tmp2111 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp2112 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2111));
            panda$core$String* $tmp2113 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2112, p_out);
            arg2110 = $tmp2113;
            panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2114, arg2110);
            panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2116);
            panda$core$String* $tmp2118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, ptr2107);
            panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2118, &$s2119);
            (($fn2121) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2120);
        }
        }
        else {
        panda$core$Bit $tmp2123 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92102, &$s2122);
        if ($tmp2123.value) {
        {
            panda$core$Int64 $tmp2124 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2124, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp2125.value);
            panda$core$Object* $tmp2126 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp2127 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2126));
            panda$core$Int64 $tmp2128 = panda$collections$Array$get_count$R$panda$core$Int64($tmp2127->type->subtypes);
            panda$core$Bit $tmp2129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2128, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2129.value);
            panda$core$Object* $tmp2131 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2132 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2131), p_out);
            base2130 = $tmp2132;
            panda$core$Object* $tmp2134 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2135 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2134), p_out);
            index2133 = $tmp2135;
            panda$core$Object* $tmp2137 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp2138 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp2137));
            panda$core$String* $tmp2139 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2138, p_out);
            value2136 = $tmp2139;
            panda$core$String* $tmp2140 = panda$core$String$convert$R$panda$core$String(base2130);
            panda$core$String* $tmp2142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, &$s2141);
            panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2142, index2133);
            panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, &$s2144);
            panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, value2136);
            panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, &$s2147);
            (($fn2149) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2148);
        }
        }
        else {
        panda$core$Bit $tmp2151 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1286_92102, &$s2150);
        if ($tmp2151.value) {
        {
            panda$core$Int64 $tmp2152 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp2153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2152, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2153.value);
            panda$core$Object* $tmp2155 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2156 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2155), p_out);
            panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2154, $tmp2156);
            panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2158);
            (($fn2160) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2159);
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
    org$pandalanguage$pandac$MethodDecl* m2162;
    org$pandalanguage$pandac$Type* actualMethodType2166;
    panda$core$String* actualResultType2167;
    panda$core$Bit isSuper2168;
    panda$collections$Array* args2188;
    panda$core$Int64 offset2191;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2196;
    panda$core$String* arg2211;
    panda$core$String* refTarget2232;
    panda$core$String* methodRef2236;
    panda$core$String* separator2238;
    panda$core$String* indirectVar2242;
    panda$core$String* resultType2245;
    panda$collections$Iterator* a$Iter2269;
    panda$core$String* a2281;
    panda$core$Bit $tmp2161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2161.value);
    m2162 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2164 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2162->owner)->name, &$s2163);
    if ($tmp2164.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    panda$core$Bit $tmp2165 = org$pandalanguage$pandac$CCodeGenerator$isExternal$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self, m2162->owner);
    if ($tmp2165.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2162);
    }
    }
    panda$core$Int64 $tmp2170 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2171 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2170, ((panda$core$Int64) { 1 }));
    bool $tmp2169 = $tmp2171.value;
    if (!$tmp2169) goto $l2172;
    panda$core$Object* $tmp2173 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2173)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2169 = $tmp2174.value;
    $l2172:;
    panda$core$Bit $tmp2175 = { $tmp2169 };
    isSuper2168 = $tmp2175;
    panda$core$Bit $tmp2177 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2168);
    bool $tmp2176 = $tmp2177.value;
    if (!$tmp2176) goto $l2178;
    panda$core$Bit $tmp2179 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2162);
    $tmp2176 = $tmp2179.value;
    $l2178:;
    panda$core$Bit $tmp2180 = { $tmp2176 };
    if ($tmp2180.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2181 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2162);
        actualMethodType2166 = $tmp2181;
        panda$core$Int64 $tmp2182 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2166->subtypes);
        panda$core$Int64 $tmp2183 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2182, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2184 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2166->subtypes, $tmp2183);
        panda$core$String* $tmp2185 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2184));
        actualResultType2167 = $tmp2185;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2186 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2162);
        actualMethodType2166 = $tmp2186;
        panda$core$String* $tmp2187 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2167 = $tmp2187;
    }
    }
    panda$collections$Array* $tmp2189 = (panda$collections$Array*) malloc(40);
    $tmp2189->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2189->refCount.value = 1;
    panda$collections$Array$init($tmp2189);
    args2188 = $tmp2189;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args2188, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp2192 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2193 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2166->subtypes);
    panda$core$Int64 $tmp2194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2192, $tmp2193);
    panda$core$Int64 $tmp2195 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2194, ((panda$core$Int64) { 1 }));
    offset2191 = $tmp2195;
    panda$core$Int64 $tmp2197 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2196, ((panda$core$Int64) { 0 }), $tmp2197, ((panda$core$Bit) { false }));
    int64_t $tmp2199 = $tmp2196.min.value;
    panda$core$Int64 i2198 = { $tmp2199 };
    int64_t $tmp2201 = $tmp2196.max.value;
    bool $tmp2202 = $tmp2196.inclusive.value;
    if ($tmp2202) goto $l2209; else goto $l2210;
    $l2209:;
    if ($tmp2199 <= $tmp2201) goto $l2203; else goto $l2205;
    $l2210:;
    if ($tmp2199 < $tmp2201) goto $l2203; else goto $l2205;
    $l2203:;
    {
        panda$core$Object* $tmp2212 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2198);
        panda$core$String* $tmp2213 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2212), p_out);
        arg2211 = $tmp2213;
        panda$core$Bit $tmp2215 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2198, offset2191);
        bool $tmp2214 = $tmp2215.value;
        if (!$tmp2214) goto $l2216;
        panda$core$Int64 $tmp2217 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2198, offset2191);
        panda$core$Object* $tmp2218 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2166->subtypes, $tmp2217);
        panda$core$Object* $tmp2219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2198);
        panda$core$Bit $tmp2220 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2218), ((org$pandalanguage$pandac$IRNode*) $tmp2219)->type);
        $tmp2214 = $tmp2220.value;
        $l2216:;
        panda$core$Bit $tmp2221 = { $tmp2214 };
        if ($tmp2221.value) {
        {
            panda$core$Object* $tmp2222 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2198);
            panda$core$Int64 $tmp2223 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2198, offset2191);
            panda$core$Object* $tmp2224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2166->subtypes, $tmp2223);
            panda$core$String* $tmp2225 = org$pandalanguage$pandac$CCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2211, ((org$pandalanguage$pandac$IRNode*) $tmp2222)->type, ((org$pandalanguage$pandac$Type*) $tmp2224), p_out);
            arg2211 = $tmp2225;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2188, ((panda$core$Object*) arg2211));
    }
    $l2206:;
    int64_t $tmp2227 = $tmp2201 - i2198.value;
    if ($tmp2202) goto $l2228; else goto $l2229;
    $l2228:;
    if ($tmp2227 >= 1) goto $l2226; else goto $l2205;
    $l2229:;
    if ($tmp2227 > 1) goto $l2226; else goto $l2205;
    $l2226:;
    i2198.value += 1;
    goto $l2203;
    $l2205:;
    panda$core$Int64 $tmp2233 = panda$collections$Array$get_count$R$panda$core$Int64(args2188);
    panda$core$Bit $tmp2234 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2233, ((panda$core$Int64) { 0 }));
    if ($tmp2234.value) {
    {
        panda$core$Object* $tmp2235 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2188, ((panda$core$Int64) { 0 }));
        refTarget2232 = ((panda$core$String*) $tmp2235);
    }
    }
    else {
    {
        refTarget2232 = NULL;
    }
    }
    panda$core$String* $tmp2237 = org$pandalanguage$pandac$CCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget2232, m2162, isSuper2168, p_out);
    methodRef2236 = $tmp2237;
    separator2238 = &$s2239;
    panda$core$Bit $tmp2240 = org$pandalanguage$pandac$CCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2162);
    if ($tmp2240.value) {
    {
        panda$core$Int64 $tmp2241 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
        self->varCount = $tmp2241;
        panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2243, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
        indirectVar2242 = $tmp2244;
        panda$core$String* $tmp2246 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType2245 = $tmp2246;
        panda$core$String* $tmp2247 = panda$core$String$convert$R$panda$core$String(resultType2245);
        panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, &$s2248);
        panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, indirectVar2242);
        panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, &$s2251);
        (($fn2253) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp2252);
        panda$core$String* $tmp2254 = panda$core$String$convert$R$panda$core$String(methodRef2236);
        panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2254, &$s2255);
        panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, resultType2245);
        panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2257, &$s2258);
        panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2259, indirectVar2242);
        panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2260, &$s2261);
        (($fn2263) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2262);
        separator2238 = &$s2264;
    }
    }
    else {
    {
        panda$core$String* $tmp2265 = panda$core$String$convert$R$panda$core$String(methodRef2236);
        panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, &$s2266);
        (($fn2268) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2267);
    }
    }
    {
        ITable* $tmp2270 = ((panda$collections$Iterable*) args2188)->$class->itable;
        while ($tmp2270->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2270 = $tmp2270->next;
        }
        $fn2272 $tmp2271 = $tmp2270->methods[0];
        panda$collections$Iterator* $tmp2273 = $tmp2271(((panda$collections$Iterable*) args2188));
        a$Iter2269 = $tmp2273;
        $l2274:;
        ITable* $tmp2276 = a$Iter2269->$class->itable;
        while ($tmp2276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2276 = $tmp2276->next;
        }
        $fn2278 $tmp2277 = $tmp2276->methods[0];
        panda$core$Bit $tmp2279 = $tmp2277(a$Iter2269);
        panda$core$Bit $tmp2280 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2279);
        if (!$tmp2280.value) goto $l2275;
        {
            ITable* $tmp2282 = a$Iter2269->$class->itable;
            while ($tmp2282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2282 = $tmp2282->next;
            }
            $fn2284 $tmp2283 = $tmp2282->methods[1];
            panda$core$Object* $tmp2285 = $tmp2283(a$Iter2269);
            a2281 = ((panda$core$String*) $tmp2285);
            (($fn2286) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator2238);
            (($fn2287) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a2281);
            separator2238 = &$s2288;
        }
        goto $l2274;
        $l2275:;
    }
    (($fn2290) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2289);
}
void org$pandalanguage$pandac$CCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test2302;
    panda$core$Bit $tmp2291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp2291.value);
    panda$core$Int64 $tmp2293 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2293, ((panda$core$Int64) { 2 }));
    bool $tmp2292 = $tmp2294.value;
    if ($tmp2292) goto $l2295;
    panda$core$Int64 $tmp2296 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2296, ((panda$core$Int64) { 3 }));
    $tmp2292 = $tmp2297.value;
    $l2295:;
    panda$core$Bit $tmp2298 = { $tmp2292 };
    PANDA_ASSERT($tmp2298.value);
    panda$core$Object* $tmp2299 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2300 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2301 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2299)->type, $tmp2300);
    PANDA_ASSERT($tmp2301.value);
    panda$core$Object* $tmp2303 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2304 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2303), p_out);
    test2302 = $tmp2304;
    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2305, test2302);
    panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, &$s2307);
    (($fn2309) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2308);
    panda$core$Object* $tmp2310 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2310), p_out);
    (($fn2312) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2311);
    panda$core$Int64 $tmp2313 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2313, ((panda$core$Int64) { 3 }));
    if ($tmp2314.value) {
    {
        (($fn2316) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2315);
        panda$core$Object* $tmp2317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2317), p_out);
        (($fn2319) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2318);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2323;
    panda$core$String* range2334;
    org$pandalanguage$pandac$IRNode* block2337;
    org$pandalanguage$pandac$Type* t2339;
    panda$core$String* llt2342;
    panda$core$String* indexType2344;
    org$pandalanguage$pandac$ClassDecl* cl2350;
    org$pandalanguage$pandac$FieldDecl* field2358;
    panda$core$String* numberType2364;
    panda$core$String* index2367;
    panda$core$String* start2369;
    panda$core$String* indexValuePtr2381;
    panda$core$String* end2395;
    panda$core$String* inclusive2407;
    panda$core$String* loopStart2417;
    panda$core$String* loopBody2419;
    panda$core$String* loopEnd2421;
    panda$core$String* loopTest2423;
    panda$core$String* forwardEntry2427;
    panda$core$String* backwardEntry2429;
    panda$core$String* signPrefix2431;
    panda$core$String* forwardEntryInclusive2443;
    panda$core$String* forwardEntryExclusive2445;
    panda$core$String* loopInc2487;
    panda$core$String* forwardDelta2489;
    panda$core$String* forwardInclusiveLabel2504;
    panda$core$String* forwardExclusiveLabel2506;
    panda$core$String* forwardExclusiveTest2531;
    panda$core$String* inc2544;
    panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2320.value);
    panda$core$Int64 $tmp2321 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2321, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2322.value);
    panda$core$Object* $tmp2324 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2323 = ((org$pandalanguage$pandac$IRNode*) $tmp2324);
    panda$core$Object* $tmp2325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2325)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2326.value);
    panda$core$Object* $tmp2327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2328 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2327)->type->subtypes);
    panda$core$Bit $tmp2329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2328, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2329.value);
    panda$core$Object* $tmp2330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2330)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2333 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2331))->name, &$s2332);
    PANDA_ASSERT($tmp2333.value);
    panda$core$Object* $tmp2335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2336 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2335), p_out);
    range2334 = $tmp2336;
    panda$core$Object* $tmp2338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2337 = ((org$pandalanguage$pandac$IRNode*) $tmp2338);
    panda$core$Object* $tmp2340 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2340)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2339 = ((org$pandalanguage$pandac$Type*) $tmp2341);
    panda$core$String* $tmp2343 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2339);
    llt2342 = $tmp2343;
    panda$core$Bit $tmp2345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2339->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2345.value) {
    {
        panda$core$Int64 $tmp2346 = panda$collections$Array$get_count$R$panda$core$Int64(t2339->subtypes);
        panda$core$Bit $tmp2347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2346, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2347.value);
        panda$core$Object* $tmp2348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2339->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2349 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2348));
        indexType2344 = $tmp2349;
    }
    }
    else {
    {
        indexType2344 = llt2342;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2351 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2339);
    cl2350 = $tmp2351;
    PANDA_ASSERT(((panda$core$Bit) { cl2350 != NULL }).value);
    panda$collections$ListView* $tmp2352 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2350);
    ITable* $tmp2353 = ((panda$collections$CollectionView*) $tmp2352)->$class->itable;
    while ($tmp2353->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2353 = $tmp2353->next;
    }
    $fn2355 $tmp2354 = $tmp2353->methods[0];
    panda$core$Int64 $tmp2356 = $tmp2354(((panda$collections$CollectionView*) $tmp2352));
    panda$core$Bit $tmp2357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2356, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2357.value);
    panda$collections$ListView* $tmp2359 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2350);
    ITable* $tmp2360 = $tmp2359->$class->itable;
    while ($tmp2360->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2360 = $tmp2360->next;
    }
    $fn2362 $tmp2361 = $tmp2360->methods[0];
    panda$core$Object* $tmp2363 = $tmp2361($tmp2359, ((panda$core$Int64) { 0 }));
    field2358 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2363);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2358);
    panda$core$String* $tmp2365 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2358->type);
    numberType2364 = $tmp2365;
    panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2323->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2366.value);
    panda$core$String* $tmp2368 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2323->payload));
    index2367 = $tmp2368;
    panda$core$String* $tmp2370 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2369 = $tmp2370;
    panda$core$String* $tmp2371 = panda$core$String$convert$R$panda$core$String(numberType2364);
    panda$core$String* $tmp2373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2371, &$s2372);
    panda$core$String* $tmp2374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2373, start2369);
    panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2374, &$s2375);
    panda$core$String* $tmp2377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2376, range2334);
    panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2377, &$s2378);
    (($fn2380) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2379);
    panda$core$String* $tmp2382 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2381 = $tmp2382;
    org$pandalanguage$pandac$Type* $tmp2383 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2350);
    panda$core$String* $tmp2384 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2383);
    panda$core$String* $tmp2385 = panda$core$String$convert$R$panda$core$String($tmp2384);
    panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2385, &$s2386);
    panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2387, index2367);
    panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, &$s2389);
    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2390, start2369);
    panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, &$s2392);
    (($fn2394) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2393);
    panda$core$String* $tmp2396 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2395 = $tmp2396;
    panda$core$String* $tmp2397 = panda$core$String$convert$R$panda$core$String(numberType2364);
    panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, &$s2398);
    panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2399, end2395);
    panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2400, &$s2401);
    panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2402, range2334);
    panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2403, &$s2404);
    (($fn2406) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2405);
    panda$core$String* $tmp2408 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2407 = $tmp2408;
    panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2409, inclusive2407);
    panda$core$String* $tmp2412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2410, &$s2411);
    panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2412, range2334);
    panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2413, &$s2414);
    (($fn2416) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2415);
    panda$core$String* $tmp2418 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2417 = $tmp2418;
    panda$core$String* $tmp2420 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2419 = $tmp2420;
    panda$core$String* $tmp2422 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2421 = $tmp2422;
    panda$core$String* $tmp2424 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2423 = $tmp2424;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2425 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2425->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2425->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2425, ((panda$core$String*) p_f->payload), loopEnd2421, loopTest2423);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2425));
    panda$core$String* $tmp2428 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2427 = $tmp2428;
    panda$core$String* $tmp2430 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2429 = $tmp2430;
    panda$core$Bit $tmp2433 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2339)->name, &$s2432);
    if ($tmp2433.value) {
    {
        signPrefix2431 = &$s2434;
    }
    }
    else {
    {
        panda$core$Bit $tmp2437 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2339)->name, &$s2436);
        bool $tmp2435 = $tmp2437.value;
        if ($tmp2435) goto $l2438;
        panda$core$Bit $tmp2440 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2339)->name, &$s2439);
        $tmp2435 = $tmp2440.value;
        $l2438:;
        panda$core$Bit $tmp2441 = { $tmp2435 };
        PANDA_ASSERT($tmp2441.value);
        signPrefix2431 = &$s2442;
    }
    }
    panda$core$String* $tmp2444 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2443 = $tmp2444;
    panda$core$String* $tmp2446 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2445 = $tmp2446;
    panda$core$String* $tmp2448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2447, inclusive2407);
    panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, &$s2449);
    panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, forwardEntryInclusive2443);
    panda$core$String* $tmp2453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2451, &$s2452);
    panda$core$String* $tmp2454 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2445);
    panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2454, &$s2455);
    panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2453, $tmp2456);
    (($fn2458) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2457);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2443, p_out);
    panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2459, start2369);
    panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, &$s2461);
    panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2462, end2395);
    panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2463, &$s2464);
    panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2465, loopStart2417);
    panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, &$s2467);
    panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2468, loopEnd2421);
    panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, &$s2470);
    (($fn2472) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2471);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2445, p_out);
    panda$core$String* $tmp2474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2473, start2369);
    panda$core$String* $tmp2476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2474, &$s2475);
    panda$core$String* $tmp2477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2476, end2395);
    panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2477, &$s2478);
    panda$core$String* $tmp2480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, loopStart2417);
    panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2480, &$s2481);
    panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, loopEnd2421);
    panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2483, &$s2484);
    (($fn2486) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2485);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2417, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2337, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2423, p_out);
    panda$core$String* $tmp2488 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2487 = $tmp2488;
    panda$core$String* $tmp2490 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2489 = $tmp2490;
    panda$core$String* $tmp2491 = panda$core$String$convert$R$panda$core$String(numberType2364);
    panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2491, &$s2492);
    panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2493, forwardDelta2489);
    panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2494, &$s2495);
    panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, end2395);
    panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2497, &$s2498);
    panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2499, index2367);
    panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2500, &$s2501);
    (($fn2503) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2502);
    panda$core$String* $tmp2505 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2504 = $tmp2505;
    panda$core$String* $tmp2507 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2506 = $tmp2507;
    panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2508, inclusive2407);
    panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, &$s2510);
    panda$core$String* $tmp2512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2511, forwardInclusiveLabel2504);
    panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, &$s2513);
    panda$core$String* $tmp2515 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2506);
    panda$core$String* $tmp2517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, &$s2516);
    panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2514, $tmp2517);
    (($fn2519) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2518);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2504, p_out);
    panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2520, forwardDelta2489);
    panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, &$s2522);
    panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2523, loopInc2487);
    panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2524, &$s2525);
    panda$core$String* $tmp2527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2526, loopEnd2421);
    panda$core$String* $tmp2529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2527, &$s2528);
    (($fn2530) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2529);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2506, p_out);
    panda$core$String* $tmp2532 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2531 = $tmp2532;
    panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2533, forwardDelta2489);
    panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2535);
    panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, loopInc2487);
    panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
    panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2539, loopEnd2421);
    panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, &$s2541);
    (($fn2543) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2542);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2487, p_out);
    panda$core$String* $tmp2545 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2544 = $tmp2545;
    panda$core$String* $tmp2546 = panda$core$String$convert$R$panda$core$String(index2367);
    panda$core$String* $tmp2548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, &$s2547);
    (($fn2549) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2548);
    panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2550, loopStart2417);
    panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, &$s2552);
    (($fn2554) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2553);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2421, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target2558;
    panda$core$String* range2569;
    org$pandalanguage$pandac$IRNode* block2572;
    org$pandalanguage$pandac$Type* t2574;
    panda$core$String* llt2577;
    panda$core$String* indexType2579;
    org$pandalanguage$pandac$ClassDecl* cl2585;
    org$pandalanguage$pandac$FieldDecl* field2593;
    panda$core$String* numberType2599;
    panda$core$String* index2602;
    panda$core$String* start2604;
    panda$core$String* indexValuePtr2616;
    panda$core$String* end2630;
    panda$core$String* step2642;
    panda$core$String* inclusive2654;
    panda$core$String* loopStart2664;
    panda$core$String* loopBody2666;
    panda$core$String* loopEnd2668;
    panda$core$String* loopTest2670;
    panda$core$String* forwardEntry2674;
    panda$core$String* backwardEntry2676;
    panda$core$String* signPrefix2678;
    panda$core$String* direction2690;
    panda$core$String* forwardEntryInclusive2714;
    panda$core$String* forwardEntryExclusive2716;
    panda$core$String* backwardEntryInclusive2758;
    panda$core$String* backwardEntryExclusive2760;
    panda$core$String* backwardEntryExclusiveTest2788;
    panda$core$String* loopInc2804;
    panda$core$String* forwardLabel2806;
    panda$core$String* backwardLabel2808;
    panda$core$String* forwardDelta2821;
    panda$core$String* forwardInclusiveLabel2836;
    panda$core$String* forwardExclusiveLabel2838;
    panda$core$String* forwardExclusiveTest2866;
    panda$core$String* backwardDelta2882;
    panda$core$String* backwardInclusiveLabel2897;
    panda$core$String* backwardExclusiveLabel2899;
    panda$core$String* inc2941;
    panda$core$Bit $tmp2555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp2555.value);
    panda$core$Int64 $tmp2556 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp2557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2556, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2557.value);
    panda$core$Object* $tmp2559 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target2558 = ((org$pandalanguage$pandac$IRNode*) $tmp2559);
    panda$core$Object* $tmp2560 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2560)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp2561.value);
    panda$core$Object* $tmp2562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp2563 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp2562)->type->subtypes);
    panda$core$Bit $tmp2564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2563, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp2564.value);
    panda$core$Object* $tmp2565 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2565)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2568 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp2566))->name, &$s2567);
    PANDA_ASSERT($tmp2568.value);
    panda$core$Object* $tmp2570 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2571 = org$pandalanguage$pandac$CCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2570), p_out);
    range2569 = $tmp2571;
    panda$core$Object* $tmp2573 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block2572 = ((org$pandalanguage$pandac$IRNode*) $tmp2573);
    panda$core$Object* $tmp2575 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp2576 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2575)->type->subtypes, ((panda$core$Int64) { 1 }));
    t2574 = ((org$pandalanguage$pandac$Type*) $tmp2576);
    panda$core$String* $tmp2578 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t2574);
    llt2577 = $tmp2578;
    panda$core$Bit $tmp2580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t2574->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp2580.value) {
    {
        panda$core$Int64 $tmp2581 = panda$collections$Array$get_count$R$panda$core$Int64(t2574->subtypes);
        panda$core$Bit $tmp2582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2581, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp2582.value);
        panda$core$Object* $tmp2583 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t2574->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2584 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2583));
        indexType2579 = $tmp2584;
    }
    }
    else {
    {
        indexType2579 = llt2577;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp2586 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t2574);
    cl2585 = $tmp2586;
    PANDA_ASSERT(((panda$core$Bit) { cl2585 != NULL }).value);
    panda$collections$ListView* $tmp2587 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2585);
    ITable* $tmp2588 = ((panda$collections$CollectionView*) $tmp2587)->$class->itable;
    while ($tmp2588->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2588 = $tmp2588->next;
    }
    $fn2590 $tmp2589 = $tmp2588->methods[0];
    panda$core$Int64 $tmp2591 = $tmp2589(((panda$collections$CollectionView*) $tmp2587));
    panda$core$Bit $tmp2592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2591, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp2592.value);
    panda$collections$ListView* $tmp2594 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl2585);
    ITable* $tmp2595 = $tmp2594->$class->itable;
    while ($tmp2595->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp2595 = $tmp2595->next;
    }
    $fn2597 $tmp2596 = $tmp2595->methods[0];
    panda$core$Object* $tmp2598 = $tmp2596($tmp2594, ((panda$core$Int64) { 0 }));
    field2593 = ((org$pandalanguage$pandac$FieldDecl*) $tmp2598);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, field2593);
    panda$core$String* $tmp2600 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field2593->type);
    numberType2599 = $tmp2600;
    panda$core$Bit $tmp2601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target2558->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp2601.value);
    panda$core$String* $tmp2603 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target2558->payload));
    index2602 = $tmp2603;
    panda$core$String* $tmp2605 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    start2604 = $tmp2605;
    panda$core$String* $tmp2606 = panda$core$String$convert$R$panda$core$String(numberType2599);
    panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, &$s2607);
    panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, start2604);
    panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2610);
    panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, range2569);
    panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, &$s2613);
    (($fn2615) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2614);
    panda$core$String* $tmp2617 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr2616 = $tmp2617;
    org$pandalanguage$pandac$Type* $tmp2618 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl2585);
    panda$core$String* $tmp2619 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2618);
    panda$core$String* $tmp2620 = panda$core$String$convert$R$panda$core$String($tmp2619);
    panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2620, &$s2621);
    panda$core$String* $tmp2623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, index2602);
    panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2623, &$s2624);
    panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2625, start2604);
    panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2626, &$s2627);
    (($fn2629) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2628);
    panda$core$String* $tmp2631 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    end2630 = $tmp2631;
    panda$core$String* $tmp2632 = panda$core$String$convert$R$panda$core$String(numberType2599);
    panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2632, &$s2633);
    panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, end2630);
    panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2636);
    panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, range2569);
    panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2638, &$s2639);
    (($fn2641) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2640);
    panda$core$String* $tmp2643 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    step2642 = $tmp2643;
    panda$core$String* $tmp2644 = panda$core$String$convert$R$panda$core$String(numberType2599);
    panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, &$s2645);
    panda$core$String* $tmp2647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, step2642);
    panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2647, &$s2648);
    panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, range2569);
    panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, &$s2651);
    (($fn2653) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2652);
    panda$core$String* $tmp2655 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive2654 = $tmp2655;
    panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2656, inclusive2654);
    panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
    panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2659, range2569);
    panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2661);
    (($fn2663) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2662);
    panda$core$String* $tmp2665 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2664 = $tmp2665;
    panda$core$String* $tmp2667 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody2666 = $tmp2667;
    panda$core$String* $tmp2669 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2668 = $tmp2669;
    panda$core$String* $tmp2671 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest2670 = $tmp2671;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2672 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2672->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2672->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2672, ((panda$core$String*) p_f->payload), loopEnd2668, loopTest2670);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2672));
    panda$core$String* $tmp2675 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry2674 = $tmp2675;
    panda$core$String* $tmp2677 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry2676 = $tmp2677;
    panda$core$Bit $tmp2680 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2574)->name, &$s2679);
    if ($tmp2680.value) {
    {
        signPrefix2678 = &$s2681;
    }
    }
    else {
    {
        panda$core$Bit $tmp2684 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2574)->name, &$s2683);
        bool $tmp2682 = $tmp2684.value;
        if ($tmp2682) goto $l2685;
        panda$core$Bit $tmp2687 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t2574)->name, &$s2686);
        $tmp2682 = $tmp2687.value;
        $l2685:;
        panda$core$Bit $tmp2688 = { $tmp2682 };
        PANDA_ASSERT($tmp2688.value);
        signPrefix2678 = &$s2689;
    }
    }
    panda$core$Bit $tmp2692 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix2678, &$s2691);
    if ($tmp2692.value) {
    {
        panda$core$String* $tmp2693 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
        direction2690 = $tmp2693;
        panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2694, direction2690);
        panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
        panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, step2642);
        panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
        (($fn2701) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2700);
    }
    }
    else {
    {
        direction2690 = &$s2702;
    }
    }
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2703, direction2690);
    panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
    panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, forwardEntry2674);
    panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, &$s2708);
    panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, backwardEntry2676);
    panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, &$s2711);
    (($fn2713) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2712);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry2674, p_out);
    panda$core$String* $tmp2715 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive2714 = $tmp2715;
    panda$core$String* $tmp2717 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive2716 = $tmp2717;
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2718, inclusive2654);
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, &$s2720);
    panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, forwardEntryInclusive2714);
    panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, &$s2723);
    panda$core$String* $tmp2725 = panda$core$String$convert$R$panda$core$String(forwardEntryExclusive2716);
    panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, &$s2726);
    panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, $tmp2727);
    (($fn2729) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2728);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive2714, p_out);
    panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2730, start2604);
    panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, &$s2732);
    panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, end2630);
    panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, &$s2735);
    panda$core$String* $tmp2737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, loopStart2664);
    panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2737, &$s2738);
    panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, loopEnd2668);
    panda$core$String* $tmp2742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, &$s2741);
    (($fn2743) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2742);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive2716, p_out);
    panda$core$String* $tmp2745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2744, start2604);
    panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2745, &$s2746);
    panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2747, end2630);
    panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2748, &$s2749);
    panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, loopStart2664);
    panda$core$String* $tmp2753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, &$s2752);
    panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2753, loopEnd2668);
    panda$core$String* $tmp2756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2754, &$s2755);
    (($fn2757) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2756);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry2676, p_out);
    panda$core$String* $tmp2759 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive2758 = $tmp2759;
    panda$core$String* $tmp2761 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive2760 = $tmp2761;
    panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2762, inclusive2654);
    panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2764);
    panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, backwardEntryInclusive2758);
    panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, &$s2767);
    panda$core$String* $tmp2769 = panda$core$String$convert$R$panda$core$String(backwardEntryExclusive2760);
    panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2769, &$s2770);
    panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, $tmp2771);
    (($fn2773) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2772);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive2758, p_out);
    panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2774, start2604);
    panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, &$s2776);
    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, end2630);
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
    panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, loopStart2664);
    panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2782);
    panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, loopEnd2668);
    panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, &$s2785);
    (($fn2787) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2786);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive2760, p_out);
    panda$core$String* $tmp2789 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest2788 = $tmp2789;
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2790, start2604);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
    panda$core$String* $tmp2794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, end2630);
    panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2794, &$s2795);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, loopStart2664);
    panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, &$s2798);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, loopEnd2668);
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2800, &$s2801);
    (($fn2803) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2802);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2664, p_out);
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block2572, p_out);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest2670, p_out);
    panda$core$String* $tmp2805 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc2804 = $tmp2805;
    panda$core$String* $tmp2807 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel2806 = $tmp2807;
    panda$core$String* $tmp2809 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel2808 = $tmp2809;
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2810, direction2690);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, &$s2812);
    panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, forwardLabel2806);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, &$s2815);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, backwardLabel2808);
    panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2818);
    (($fn2820) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2819);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel2806, p_out);
    panda$core$String* $tmp2822 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta2821 = $tmp2822;
    panda$core$String* $tmp2823 = panda$core$String$convert$R$panda$core$String(numberType2599);
    panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, &$s2824);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, forwardDelta2821);
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, &$s2827);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, end2630);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, &$s2830);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, index2602);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
    (($fn2835) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2834);
    panda$core$String* $tmp2837 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel2836 = $tmp2837;
    panda$core$String* $tmp2839 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel2838 = $tmp2839;
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2840, inclusive2654);
    panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2842);
    panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2843, forwardInclusiveLabel2836);
    panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2844, &$s2845);
    panda$core$String* $tmp2847 = panda$core$String$convert$R$panda$core$String(forwardExclusiveLabel2838);
    panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2847, &$s2848);
    panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2846, $tmp2849);
    (($fn2851) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2850);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel2836, p_out);
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2852, forwardDelta2821);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, &$s2854);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, step2642);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, &$s2857);
    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, loopInc2804);
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2859, &$s2860);
    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, loopEnd2668);
    panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, &$s2863);
    (($fn2865) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2864);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel2838, p_out);
    panda$core$String* $tmp2867 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest2866 = $tmp2867;
    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2868, forwardDelta2821);
    panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2869, &$s2870);
    panda$core$String* $tmp2872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2871, step2642);
    panda$core$String* $tmp2874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2872, &$s2873);
    panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2874, loopInc2804);
    panda$core$String* $tmp2877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2875, &$s2876);
    panda$core$String* $tmp2878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2877, loopEnd2668);
    panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, &$s2879);
    (($fn2881) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2880);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel2808, p_out);
    panda$core$String* $tmp2883 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta2882 = $tmp2883;
    panda$core$String* $tmp2884 = panda$core$String$convert$R$panda$core$String(numberType2599);
    panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, &$s2885);
    panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2886, backwardDelta2882);
    panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2888);
    panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, index2602);
    panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, &$s2891);
    panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, end2630);
    panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2893, &$s2894);
    (($fn2896) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2895);
    panda$core$String* $tmp2898 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel2897 = $tmp2898;
    panda$core$String* $tmp2900 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel2899 = $tmp2900;
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2901, inclusive2654);
    panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, &$s2903);
    panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, backwardInclusiveLabel2897);
    panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, &$s2906);
    panda$core$String* $tmp2908 = panda$core$String$convert$R$panda$core$String(backwardExclusiveLabel2899);
    panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, &$s2909);
    panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2907, $tmp2910);
    (($fn2912) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2911);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel2897, p_out);
    panda$core$String* $tmp2914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2913, backwardDelta2882);
    panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2914, &$s2915);
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2916, step2642);
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, &$s2918);
    panda$core$String* $tmp2920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, loopInc2804);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2920, &$s2921);
    panda$core$String* $tmp2923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, loopEnd2668);
    panda$core$String* $tmp2925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2923, &$s2924);
    (($fn2926) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2925);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel2899, p_out);
    panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2927, backwardDelta2882);
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, &$s2929);
    panda$core$String* $tmp2931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, step2642);
    panda$core$String* $tmp2933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2931, &$s2932);
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2933, loopInc2804);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, &$s2935);
    panda$core$String* $tmp2937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, loopEnd2668);
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2937, &$s2938);
    (($fn2940) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2939);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc2804, p_out);
    panda$core$String* $tmp2942 = org$pandalanguage$pandac$CCodeGenerator$nextVar$R$panda$core$String(self);
    inc2941 = $tmp2942;
    panda$core$String* $tmp2943 = panda$core$String$convert$R$panda$core$String(index2602);
    panda$core$String* $tmp2945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2943, &$s2944);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2945, step2642);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
    (($fn2949) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2948);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2950, loopStart2664);
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, &$s2952);
    (($fn2954) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2953);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2668, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp2955 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2956 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2955)->type);
    if ($tmp2956.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp2957 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp2958 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2957)->type);
    if ($tmp2958.value) {
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
    panda$core$String* loopStart2965;
    panda$core$String* loopEnd2967;
    panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp2959.value);
    panda$core$Int64 $tmp2960 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp2961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2960, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2961.value);
    panda$core$Object* $tmp2962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp2963 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2964 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2962)->type, $tmp2963);
    PANDA_ASSERT($tmp2964.value);
    panda$core$String* $tmp2966 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2965 = $tmp2966;
    panda$core$String* $tmp2968 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2967 = $tmp2968;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2969 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2969->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2969->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2969, ((panda$core$String*) p_w->payload), loopEnd2967, loopStart2965);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2969));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2965, p_out);
    panda$core$Object* $tmp2972 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp2973 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2972), p_out);
    panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2971, $tmp2973);
    panda$core$String* $tmp2976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, &$s2975);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, loopEnd2967);
    panda$core$String* $tmp2979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, &$s2978);
    (($fn2980) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2979);
    panda$core$Object* $tmp2981 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2981), p_out);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2982, loopStart2965);
    panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, &$s2984);
    (($fn2986) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2985);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2967, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart2993;
    panda$core$String* loopEnd2995;
    panda$core$Bit $tmp2987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp2987.value);
    panda$core$Int64 $tmp2988 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp2989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2988, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2989.value);
    panda$core$Object* $tmp2990 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp2991 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2992 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2990)->type, $tmp2991);
    PANDA_ASSERT($tmp2992.value);
    panda$core$String* $tmp2994 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart2993 = $tmp2994;
    panda$core$String* $tmp2996 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd2995 = $tmp2996;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp2997 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp2997->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp2997->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp2997, ((panda$core$String*) p_d->payload), loopEnd2995, loopStart2993);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp2997));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart2993, p_out);
    panda$core$Object* $tmp2999 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp2999), p_out);
    panda$core$Object* $tmp3001 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp3002 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3001), p_out);
    panda$core$String* $tmp3003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3000, $tmp3002);
    panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3003, &$s3004);
    panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, loopStart2993);
    panda$core$String* $tmp3008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3006, &$s3007);
    (($fn3009) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3008);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd2995, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart3013;
    panda$core$String* loopEnd3015;
    panda$core$Bit $tmp3010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp3010.value);
    panda$core$Int64 $tmp3011 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp3012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3011, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3012.value);
    panda$core$String* $tmp3014 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart3013 = $tmp3014;
    panda$core$String* $tmp3016 = org$pandalanguage$pandac$CCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd3015 = $tmp3016;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3017 = (org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp3017->$class = (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$class;
    $tmp3017->refCount.value = 1;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp3017, ((panda$core$String*) p_l->payload), loopEnd3015, loopStart3013);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp3017));
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart3013, p_out);
    (($fn3020) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3019);
    panda$core$Object* $tmp3021 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3021), p_out);
    (($fn3023) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3022);
    org$pandalanguage$pandac$CCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd3015, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v3024;
    switch (p_target->kind.value) {
        case 1016:
        {
            v3024 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp3025 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v3024->type);
            panda$core$String* $tmp3026 = panda$core$String$convert$R$panda$core$String($tmp3025);
            panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, &$s3027);
            panda$core$String* $tmp3029 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3024);
            panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, $tmp3029);
            panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3030, &$s3031);
            (($fn3033) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3032);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp3034 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v3024);
                panda$core$String* $tmp3035 = panda$core$String$convert$R$panda$core$String($tmp3034);
                panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, &$s3036);
                panda$core$String* $tmp3038 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3037, $tmp3038);
                panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3039, &$s3040);
                (($fn3042) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3041);
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
    panda$collections$Iterator* decl$Iter3056;
    org$pandalanguage$pandac$IRNode* decl3068;
    panda$core$Bit $tmp3046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp3045 = $tmp3046.value;
    if ($tmp3045) goto $l3047;
    panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp3045 = $tmp3048.value;
    $l3047:;
    panda$core$Bit $tmp3049 = { $tmp3045 };
    bool $tmp3044 = $tmp3049.value;
    if ($tmp3044) goto $l3050;
    panda$core$Bit $tmp3051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp3044 = $tmp3051.value;
    $l3050:;
    panda$core$Bit $tmp3052 = { $tmp3044 };
    bool $tmp3043 = $tmp3052.value;
    if ($tmp3043) goto $l3053;
    panda$core$Bit $tmp3054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp3043 = $tmp3054.value;
    $l3053:;
    panda$core$Bit $tmp3055 = { $tmp3043 };
    PANDA_ASSERT($tmp3055.value);
    {
        ITable* $tmp3057 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp3057->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3057 = $tmp3057->next;
        }
        $fn3059 $tmp3058 = $tmp3057->methods[0];
        panda$collections$Iterator* $tmp3060 = $tmp3058(((panda$collections$Iterable*) p_v->children));
        decl$Iter3056 = $tmp3060;
        $l3061:;
        ITable* $tmp3063 = decl$Iter3056->$class->itable;
        while ($tmp3063->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3063 = $tmp3063->next;
        }
        $fn3065 $tmp3064 = $tmp3063->methods[0];
        panda$core$Bit $tmp3066 = $tmp3064(decl$Iter3056);
        panda$core$Bit $tmp3067 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3066);
        if (!$tmp3067.value) goto $l3062;
        {
            ITable* $tmp3069 = decl$Iter3056->$class->itable;
            while ($tmp3069->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3069 = $tmp3069->next;
            }
            $fn3071 $tmp3070 = $tmp3069->methods[1];
            panda$core$Object* $tmp3072 = $tmp3070(decl$Iter3056);
            decl3068 = ((org$pandalanguage$pandac$IRNode*) $tmp3072);
            panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl3068->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp3073.value);
            panda$core$Int64 $tmp3074 = panda$collections$Array$get_count$R$panda$core$Int64(decl3068->children);
            panda$core$Bit $tmp3075 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3074, ((panda$core$Int64) { 1 }));
            if ($tmp3075.value) {
            {
                panda$core$Object* $tmp3076 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3068->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp3077 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3068->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3076), ((org$pandalanguage$pandac$IRNode*) $tmp3077), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp3078 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl3068->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$CCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3078), NULL, p_out);
            }
            }
        }
        goto $l3061;
        $l3062:;
    }
}
panda$core$String* org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3082;
    panda$core$String* result3091;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp3079 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp3080 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp3079, p_out);
            return $tmp3080;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp3081 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp3081;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp3083 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3084 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3083), p_out);
            base3082 = $tmp3084;
            panda$core$String* $tmp3085 = panda$core$String$convert$R$panda$core$String(base3082);
            panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3085, &$s3086);
            panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3087, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name);
            panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, &$s3089);
            return $tmp3090;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp3092 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3093 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3092), p_out);
            result3091 = $tmp3093;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) result3091));
            return result3091;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue3097;
    panda$core$String* value3100;
    panda$core$String* t3101;
    panda$core$Int64 op3104;
    panda$core$String* right3106;
    panda$core$Bit $tmp3094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp3094.value);
    panda$core$Int64 $tmp3095 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3095, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp3096.value);
    panda$core$Object* $tmp3098 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3099 = org$pandalanguage$pandac$CCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3098), p_out);
    lvalue3097 = $tmp3099;
    panda$core$Object* $tmp3102 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3103 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3102)->type);
    t3101 = $tmp3103;
    op3104 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp3105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op3104, ((panda$core$Int64) { 73 }));
    if ($tmp3105.value) {
    {
        panda$core$Object* $tmp3107 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp3108 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3107), p_out);
        right3106 = $tmp3108;
        value3100 = right3106;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp3109 = panda$core$String$convert$R$panda$core$String(lvalue3097);
    panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, &$s3110);
    panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, value3100);
    panda$core$String* $tmp3114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, &$s3113);
    (($fn3115) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3114);
}
void org$pandalanguage$pandac$CCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3116 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp3117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3116, ((panda$core$Int64) { 1 }));
    if ($tmp3117.value) {
    {
        panda$core$Object* $tmp3119 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3120 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3119), p_out);
        panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3118, $tmp3120);
        panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
        (($fn3124) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3123);
    }
    }
    else {
    {
        panda$core$Int64 $tmp3125 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp3126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3125, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp3126.value);
        (($fn3128) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3127);
    }
    }
}
org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$CCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3132;
    panda$core$Int64 $tmp3129 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp3130 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3129, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp3130.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp3131 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3131);
    }
    }
    panda$core$Int64 $tmp3133 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3132, ((panda$core$Int64) { 0 }), $tmp3133, ((panda$core$Bit) { false }));
    int64_t $tmp3135 = $tmp3132.min.value;
    panda$core$Int64 i3134 = { $tmp3135 };
    int64_t $tmp3137 = $tmp3132.max.value;
    bool $tmp3138 = $tmp3132.inclusive.value;
    if ($tmp3138) goto $l3145; else goto $l3146;
    $l3145:;
    if ($tmp3135 <= $tmp3137) goto $l3139; else goto $l3141;
    $l3146:;
    if ($tmp3135 < $tmp3137) goto $l3139; else goto $l3141;
    $l3139:;
    {
        panda$core$Object* $tmp3148 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3134);
        bool $tmp3147 = ((panda$core$Bit) { ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3148)->loopLabel != NULL }).value;
        if (!$tmp3147) goto $l3149;
        panda$core$Object* $tmp3150 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3134);
        panda$core$Bit $tmp3151 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3150)->loopLabel, p_name);
        $tmp3147 = $tmp3151.value;
        $l3149:;
        panda$core$Bit $tmp3152 = { $tmp3147 };
        if ($tmp3152.value) {
        {
            panda$core$Object* $tmp3153 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i3134);
            return ((org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor*) $tmp3153);
        }
        }
    }
    $l3142:;
    int64_t $tmp3155 = $tmp3137 - i3134.value;
    if ($tmp3138) goto $l3156; else goto $l3157;
    $l3156:;
    if ($tmp3155 >= 1) goto $l3154; else goto $l3141;
    $l3157:;
    if ($tmp3155 > 1) goto $l3154; else goto $l3141;
    $l3154:;
    i3134.value += 1;
    goto $l3139;
    $l3141:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$CCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3160;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3161 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc3160 = $tmp3161;
    panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3162, desc3160->breakLabel);
    panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3164);
    (($fn3166) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3165);
}
void org$pandalanguage$pandac$CCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* desc3167;
    org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor* $tmp3168 = org$pandalanguage$pandac$CCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$CCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc3167 = $tmp3168;
    panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3169, desc3167->continueLabel);
    panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, &$s3171);
    (($fn3173) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3172);
}
void org$pandalanguage$pandac$CCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp3174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp3174.value);
    panda$core$Int64 $tmp3176 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3176, ((panda$core$Int64) { 1 }));
    bool $tmp3175 = $tmp3177.value;
    if ($tmp3175) goto $l3178;
    panda$core$Int64 $tmp3179 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp3180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3179, ((panda$core$Int64) { 2 }));
    $tmp3175 = $tmp3180.value;
    $l3178:;
    panda$core$Bit $tmp3181 = { $tmp3175 };
    PANDA_ASSERT($tmp3181.value);
    panda$core$Object* $tmp3183 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3184 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3183), p_out);
    panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3182, $tmp3184);
    panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3185, &$s3186);
    (($fn3188) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3187);
}
void org$pandalanguage$pandac$CCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp3197;
    org$pandalanguage$pandac$IRNode* w3212;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3215;
    panda$core$Object* $tmp3190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3191 = org$pandalanguage$pandac$CCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3190), p_out);
    panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3189, $tmp3191);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, &$s3193);
    (($fn3195) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3194);
    panda$core$Int64 $tmp3196 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3196;
    panda$core$Int64 $tmp3198 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3197, ((panda$core$Int64) { 1 }), $tmp3198, ((panda$core$Bit) { false }));
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
        panda$core$Object* $tmp3213 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i3199);
        w3212 = ((org$pandalanguage$pandac$IRNode*) $tmp3213);
        panda$core$Bit $tmp3214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3212->kind, ((panda$core$Int64) { 1042 }));
        if ($tmp3214.value) {
        {
            panda$core$Int64 $tmp3216 = panda$collections$Array$get_count$R$panda$core$Int64(w3212->children);
            panda$core$Int64 $tmp3217 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3216, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3215, ((panda$core$Int64) { 0 }), $tmp3217, ((panda$core$Bit) { false }));
            int64_t $tmp3219 = $tmp3215.min.value;
            panda$core$Int64 j3218 = { $tmp3219 };
            int64_t $tmp3221 = $tmp3215.max.value;
            bool $tmp3222 = $tmp3215.inclusive.value;
            if ($tmp3222) goto $l3229; else goto $l3230;
            $l3229:;
            if ($tmp3219 <= $tmp3221) goto $l3223; else goto $l3225;
            $l3230:;
            if ($tmp3219 < $tmp3221) goto $l3223; else goto $l3225;
            $l3223:;
            {
                panda$core$Object* $tmp3232 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3212->children, j3218);
                panda$core$UInt64 $tmp3233 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3232));
                panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3231, ((panda$core$Object*) wrap_panda$core$UInt64($tmp3233)));
                panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3234, &$s3235);
                (($fn3237) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3236);
            }
            $l3226:;
            int64_t $tmp3239 = $tmp3221 - j3218.value;
            if ($tmp3222) goto $l3240; else goto $l3241;
            $l3240:;
            if ($tmp3239 >= 1) goto $l3238; else goto $l3225;
            $l3241:;
            if ($tmp3239 > 1) goto $l3238; else goto $l3225;
            $l3238:;
            j3218.value += 1;
            goto $l3223;
            $l3225:;
            panda$core$Int64 $tmp3244 = panda$collections$Array$get_count$R$panda$core$Int64(w3212->children);
            panda$core$Int64 $tmp3245 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3244, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp3246 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3212->children, $tmp3245);
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3246), p_out);
            (($fn3248) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3247);
        }
        }
        else {
        {
            panda$core$Bit $tmp3249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w3212->kind, ((panda$core$Int64) { 1043 }));
            PANDA_ASSERT($tmp3249.value);
            panda$core$Int64 $tmp3250 = panda$collections$Array$get_count$R$panda$core$Int64(w3212->children);
            panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3250, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp3251.value);
            (($fn3253) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3252);
            panda$core$Object* $tmp3254 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w3212->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$CCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3254), p_out);
        }
        }
    }
    $l3207:;
    int64_t $tmp3256 = $tmp3202 - i3199.value;
    if ($tmp3203) goto $l3257; else goto $l3258;
    $l3257:;
    if ($tmp3256 >= 1) goto $l3255; else goto $l3206;
    $l3258:;
    if ($tmp3256 > 1) goto $l3255; else goto $l3206;
    $l3255:;
    i3199.value += 1;
    goto $l3204;
    $l3206:;
    panda$core$Int64 $tmp3261 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp3261;
    (($fn3263) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3262);
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
    panda$core$String* result3264;
    org$pandalanguage$pandac$Type* $tmp3265 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp3266 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3265);
    result3264 = $tmp3266;
    panda$core$Bit $tmp3268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp3267 = $tmp3268.value;
    if (!$tmp3267) goto $l3269;
    panda$core$Bit $tmp3271 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result3264, &$s3270);
    panda$core$Bit $tmp3272 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3271);
    $tmp3267 = $tmp3272.value;
    $l3269:;
    panda$core$Bit $tmp3273 = { $tmp3267 };
    if ($tmp3273.value) {
    {
        panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result3264, &$s3274);
        return $tmp3275;
    }
    }
    return result3264;
}
void org$pandalanguage$pandac$CCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$CCodeGenerator$writeImport$org$pandalanguage$pandac$ClassDecl(self, p_m->owner);
}
void org$pandalanguage$pandac$CCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator3287;
    panda$collections$Iterator* p$Iter3297;
    org$pandalanguage$pandac$MethodDecl$Parameter* p3309;
    panda$io$MemoryOutputStream* bodyBuffer3331;
    panda$io$IndentedOutputStream* indentedBody3334;
    panda$collections$Iterator* s$Iter3337;
    org$pandalanguage$pandac$IRNode* s3349;
    panda$core$Object* $tmp3276 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp3276)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s3277;
    panda$io$MemoryOutputStream$clear(self->methodHeaderBuffer);
    panda$core$String* $tmp3278 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp3279 = panda$core$String$convert$R$panda$core$String($tmp3278);
    panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, &$s3280);
    panda$core$String* $tmp3282 = org$pandalanguage$pandac$CCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, $tmp3282);
    panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
    (($fn3286) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3285);
    separator3287 = &$s3288;
    panda$core$Bit $tmp3289 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp3290 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3289);
    if ($tmp3290.value) {
    {
        panda$core$String* $tmp3291 = org$pandalanguage$pandac$CCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp3292 = panda$core$String$convert$R$panda$core$String($tmp3291);
        panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, &$s3293);
        (($fn3295) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3294);
        separator3287 = &$s3296;
    }
    }
    {
        ITable* $tmp3298 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp3298->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3298 = $tmp3298->next;
        }
        $fn3300 $tmp3299 = $tmp3298->methods[0];
        panda$collections$Iterator* $tmp3301 = $tmp3299(((panda$collections$Iterable*) p_m->parameters));
        p$Iter3297 = $tmp3301;
        $l3302:;
        ITable* $tmp3304 = p$Iter3297->$class->itable;
        while ($tmp3304->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3304 = $tmp3304->next;
        }
        $fn3306 $tmp3305 = $tmp3304->methods[0];
        panda$core$Bit $tmp3307 = $tmp3305(p$Iter3297);
        panda$core$Bit $tmp3308 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3307);
        if (!$tmp3308.value) goto $l3303;
        {
            ITable* $tmp3310 = p$Iter3297->$class->itable;
            while ($tmp3310->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3310 = $tmp3310->next;
            }
            $fn3312 $tmp3311 = $tmp3310->methods[1];
            panda$core$Object* $tmp3313 = $tmp3311(p$Iter3297);
            p3309 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp3313);
            panda$core$String* $tmp3314 = panda$core$String$convert$R$panda$core$String(separator3287);
            panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, &$s3315);
            panda$core$String* $tmp3317 = org$pandalanguage$pandac$CCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p3309->type);
            panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3316, $tmp3317);
            panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3319);
            panda$core$String* $tmp3321 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p3309->name);
            panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3320, $tmp3321);
            panda$core$String* $tmp3324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3322, &$s3323);
            (($fn3325) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3324);
            separator3287 = &$s3326;
        }
        goto $l3302;
        $l3303:;
    }
    (($fn3328) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3327);
    panda$core$Int64 $tmp3329 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3329;
    panda$core$Bit $tmp3330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp3330.value);
    panda$io$MemoryOutputStream* $tmp3332 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3332->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3332->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3332);
    bodyBuffer3331 = $tmp3332;
    panda$io$IndentedOutputStream* $tmp3335 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3335->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3335->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3335, ((panda$io$OutputStream*) bodyBuffer3331));
    indentedBody3334 = $tmp3335;
    {
        ITable* $tmp3338 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp3338->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3338 = $tmp3338->next;
        }
        $fn3340 $tmp3339 = $tmp3338->methods[0];
        panda$collections$Iterator* $tmp3341 = $tmp3339(((panda$collections$Iterable*) p_body->children));
        s$Iter3337 = $tmp3341;
        $l3342:;
        ITable* $tmp3344 = s$Iter3337->$class->itable;
        while ($tmp3344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3344 = $tmp3344->next;
        }
        $fn3346 $tmp3345 = $tmp3344->methods[0];
        panda$core$Bit $tmp3347 = $tmp3345(s$Iter3337);
        panda$core$Bit $tmp3348 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3347);
        if (!$tmp3348.value) goto $l3343;
        {
            ITable* $tmp3350 = s$Iter3337->$class->itable;
            while ($tmp3350->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3350 = $tmp3350->next;
            }
            $fn3352 $tmp3351 = $tmp3350->methods[1];
            panda$core$Object* $tmp3353 = $tmp3351(s$Iter3337);
            s3349 = ((org$pandalanguage$pandac$IRNode*) $tmp3353);
            org$pandalanguage$pandac$CCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s3349, indentedBody3334);
        }
        goto $l3342;
        $l3343:;
    }
    panda$core$String* $tmp3354 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodHeaderBuffer);
    (($fn3355) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3354);
    panda$core$String* $tmp3356 = panda$io$MemoryOutputStream$finish$R$panda$core$String(bodyBuffer3331);
    (($fn3357) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp3356);
    panda$core$Int64 $tmp3358 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp3358;
    (($fn3360) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s3359);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$io$File* path3361;
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
    panda$io$File* $tmp3363 = org$pandalanguage$pandac$HCodeGenerator$getPath$org$pandalanguage$pandac$ClassDecl$panda$core$String$R$panda$io$File(self->hCodeGen, p_cl, &$s3362);
    path3361 = $tmp3363;
    panda$io$File* $tmp3364 = panda$io$File$parent$R$panda$io$File$Q(path3361);
    panda$io$File$createDirectories($tmp3364);
    panda$io$IndentedOutputStream* $tmp3365 = (panda$io$IndentedOutputStream*) malloc(56);
    $tmp3365->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp3365->refCount.value = 1;
    panda$io$OutputStream* $tmp3367 = panda$io$File$openOutputStream$R$panda$io$OutputStream(path3361);
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp3365, $tmp3367);
    self->out = $tmp3365;
    org$pandalanguage$pandac$CCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
    panda$core$Bit $tmp3368 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_cl);
    if ($tmp3368.value) {
    {
        org$pandalanguage$pandac$CCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$CCodeGenerator$ClassConstant(self, p_cl);
        panda$core$String* $tmp3369 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3370 = panda$core$String$convert$R$panda$core$String($tmp3369);
        panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3370, &$s3371);
        panda$core$String* $tmp3373 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3372, $tmp3373);
        panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3374, &$s3375);
        panda$core$String* $tmp3377 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3378 = panda$core$String$convert$R$panda$core$String($tmp3377);
        panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3379);
        panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3376, $tmp3380);
        (($fn3382) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3381);
        panda$core$String* $tmp3384 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3383, $tmp3384);
        panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3385, &$s3386);
        panda$core$String* $tmp3389 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3388, $tmp3389);
        panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
        org$pandalanguage$pandac$Type* $tmp3393 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$Int64 $tmp3394 = org$pandalanguage$pandac$CCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3393);
        panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3392, ((panda$core$Object*) wrap_panda$core$Int64($tmp3394)));
        panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3395, &$s3396);
        panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, $tmp3397);
        (($fn3399) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3398);
        panda$core$String* $tmp3402 = org$pandalanguage$pandac$CCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
        panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3401, $tmp3402);
        panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, &$s3404);
        panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3400, $tmp3405);
        (($fn3407) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3406);
        (($fn3409) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3408);
        (($fn3411) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3410);
        (($fn3413) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), &$s3412);
    }
    }
}
void org$pandalanguage$pandac$CCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$CCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$CCodeGenerator$finish(self);
    self->currentClass = NULL;
}
void org$pandalanguage$pandac$CCodeGenerator$finish(org$pandalanguage$pandac$CCodeGenerator* self) {
    panda$core$String* $tmp3414 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->shimsBuffer);
    (($fn3415) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3414);
    panda$io$MemoryOutputStream$clear(self->shimsBuffer);
    panda$core$String* $tmp3416 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->wrapperShimsBuffer);
    (($fn3417) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3416);
    panda$io$MemoryOutputStream$clear(self->wrapperShimsBuffer);
    panda$core$String* $tmp3418 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->types);
    (($fn3419) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3418);
    panda$io$MemoryOutputStream$clear(self->types);
    panda$core$String* $tmp3420 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->strings);
    (($fn3421) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3420);
    panda$io$MemoryOutputStream$clear(self->strings);
    panda$core$String* $tmp3422 = panda$io$MemoryOutputStream$finish$R$panda$core$String(self->methodsBuffer);
    (($fn3423) ((panda$io$OutputStream*) self->out)->$class->vtable[19])(((panda$io$OutputStream*) self->out), $tmp3422);
    panda$io$MemoryOutputStream$clear(self->methodsBuffer);
    (($fn3424) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}

