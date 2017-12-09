#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "panda/io/OutputStream.h"
#include "panda/io/MemoryOutputStream.h"
#include "panda/io/IndentedOutputStream.h"
#include "panda/collections/Set.h"
#include "panda/collections/HashMap.h"
#include "panda/collections/IdentityMap.h"
#include "panda/collections/Stack.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/FieldDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "panda/core/MutableString.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/ClassConstant.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/Pair.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/MethodShim.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/File.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
#include "panda/core/Int8.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/SymbolTable.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$finish} };

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl} };

typedef void (*$fn50)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn54)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn56)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn58)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn60)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn62)(panda$io$MemoryOutputStream*);
typedef void (*$fn64)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn65)(panda$io$MemoryOutputStream*);
typedef void (*$fn67)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn68)(panda$io$MemoryOutputStream*);
typedef void (*$fn70)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn71)(panda$io$MemoryOutputStream*);
typedef void (*$fn73)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn74)(panda$io$MemoryOutputStream*);
typedef void (*$fn76)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn77)(panda$io$MemoryOutputStream*);
typedef void (*$fn79)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn80)(panda$core$Object*);
typedef void (*$fn95)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn127)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn133)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn139)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn168)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn174)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn180)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn211)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn217)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn223)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn256)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn262)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn268)(panda$collections$Iterator*);
typedef void (*$fn284)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn304)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn310)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn316)(panda$collections$Iterator*);
typedef void (*$fn333)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn343)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn527)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn533)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn539)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn566)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn605)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn616)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn622)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn628)(panda$collections$Iterator*);
typedef void (*$fn643)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn679)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn682)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn690)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn697)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn730)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn743)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn849)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn862)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn876)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn881)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn897)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn912)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn947)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn966)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1052)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1083)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1096)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1101)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1104)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1113)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1125)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1152)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1191)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1202)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1208)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1214)(panda$collections$Iterator*);
typedef void (*$fn1230)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1349)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1369)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1428)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1439)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1445)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1451)(panda$collections$Iterator*);
typedef void (*$fn1466)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1485)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1508)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1574)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1585)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1608)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1637)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1800)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1806)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1812)(panda$collections$Iterator*);
typedef void (*$fn1846)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1862)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1876)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1912)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1928)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1942)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1964)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2040)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2067)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2077)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2104)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2126)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2203)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2213)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2226)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2236)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2304)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2311)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2341)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2351)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2367)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2383)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2441)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2448)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2470)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2488)(panda$collections$CollectionView*);
typedef void (*$fn2510)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2523)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2539)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2567)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2603)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2618)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2644)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2660)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2686)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2699)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2720)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2753)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2766)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2803)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2858)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2922)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2929)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2941)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2947)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2953)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2959)(panda$collections$Iterator*);
typedef void (*$fn2971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2973)(panda$io$OutputStream*);
typedef void (*$fn3000)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3132)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3145)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3164)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3172)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3177)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3183)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3189)(panda$collections$Iterator*);
typedef void (*$fn3198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3253)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3264)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3286)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3298)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3317)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3350)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3368)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3391)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3426)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3448)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3470)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3524)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3542)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3557)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3597)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3620)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3652)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3691)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3769)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3869)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3919)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3933)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3961)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3976)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4011)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4023)(panda$collections$CollectionView*);
typedef void (*$fn4035)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4042)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4048)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4054)(panda$collections$Iterator*);
typedef void (*$fn4064)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4067)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4105)(panda$collections$CollectionView*);
typedef void (*$fn4113)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4155)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4164)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4206)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4215)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4225)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4270)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4306)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4312)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4318)(panda$collections$Iterator*);
typedef void (*$fn4341)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4369)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4396)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4408)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4425)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4430)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4544)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4561)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4579)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4583)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4589)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4595)(panda$collections$Iterator*);
typedef void (*$fn4597)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4598)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4601)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4664)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4700)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4707)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4720)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4730)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4748)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4762)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4772)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4782)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4797)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4909)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4930)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4941)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4958)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4979)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4990)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5011)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5038)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5045)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5062)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5078)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5107)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5145)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5187)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5212)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5226)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5253)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5312)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5325)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5336)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5364)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5377)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5388)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5420)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5431)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5446)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5463)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5469)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5475)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5500)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5522)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5558)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5581)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5620)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5640)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5647)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5657)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5659)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5714)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5741)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5763)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5769)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5775)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5781)(panda$collections$Iterator*);
typedef void (*$fn5788)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5790)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5803)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5805)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5837)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5853)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5914)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5976)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6008)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6012)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6020)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6040)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6045)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6051)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6057)(panda$collections$Iterator*);
typedef void (*$fn6071)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6074)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6077)(panda$io$MemoryOutputStream*);
typedef void (*$fn6079)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6082)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6096)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6106)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6111)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6117)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6123)(panda$collections$Iterator*);
typedef void (*$fn6137)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6140)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6152)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6158)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6164)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6166)(panda$io$MemoryOutputStream*);
typedef void (*$fn6168)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6169)(panda$io$MemoryOutputStream*);
typedef void (*$fn6171)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6177)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6182)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x64\x61\x74\x61\x6C\x61\x79\x6F\x75\x74\x20\x3D\x20\x22\x65\x2D\x70\x3A\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x69\x31\x3A\x38\x3A\x38\x2D\x69\x38\x3A\x38\x3A\x38\x2D\x69\x31\x36\x3A\x31\x36\x3A\x31\x36\x2D\x69\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x69\x36\x34\x3A", 72, 1 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34\x3A\x36\x34\x2D\x66\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x66\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x31\x32\x38\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D\x61\x30\x3A\x30\x3A\x36\x34\x2D\x73\x30\x3A\x36\x34\x3A\x36\x34\x2D\x66\x38\x30\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D", 78, 1 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x38\x3A\x31\x36\x3A\x33\x32\x3A\x36\x34\x2D\x53\x31\x32\x38\x22", 17, 1 };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6C\x65\x20\x3D\x20\x22\x78\x38\x36\x5F\x36\x34\x2D\x61\x70\x70\x6C\x65\x2D\x6D\x61\x63\x6F\x73\x78\x31\x30\x2E\x38\x2E\x30\x22", 43, 1 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x29", 24, 1 };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x2C\x20\x69\x36\x34\x29", 30, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x29", 23, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 60, 1 };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, 1 };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 1 };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 1 };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 1 };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10, 1 };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42, 1 };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, 1 };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, 1 };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, 1 };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, 1 };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, 1 };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 1 };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, 1 };
static panda$core$String $s728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, 1 };
static panda$core$String $s771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, 1 };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1 };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, 1 };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, 1 };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, 1 };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, 1 };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s1185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s1198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, 1 };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, 1 };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, 1 };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, 1 };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 1 };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, 1 };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 1 };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 1 };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, 1 };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 1 };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 1 };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 1 };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 1 };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 1 };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 1 };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 1 };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 1 };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1 };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1 };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 1 };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1 };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1 };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1 };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 1 };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 1 };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 1 };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 1 };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 1 };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 1 };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 1 };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 1 };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 1 };
static panda$core$String $s1814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1 };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, 1 };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, 1 };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s1959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 1 };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 1 };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 1 };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 1 };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 1 };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 1 };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 1 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 1 };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 1 };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 1 };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 1 };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 1 };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 1 };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 1 };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 1 };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 1 };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 1 };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 1 };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 1 };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 1 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 1 };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 1 };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 1 };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 1 };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 48, 1 };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 30, 1 };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 1 };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 1 };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 1 };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 1 };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 1 };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, 1 };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1 };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 1 };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 1 };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1 };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 1 };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, 1 };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, 1 };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 1 };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s2746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 1 };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 1 };
static panda$core$String $s2907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 1 };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 1 };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s2928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s2930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 1 };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s2966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s2972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 1 };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s3162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1 };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1 };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, 1 };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, 1 };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, 1 };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s3537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s3547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s3566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1 };
static panda$core$String $s3583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, 1 };
static panda$core$String $s3586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s3588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s3591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 1 };
static panda$core$String $s3671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 1 };
static panda$core$String $s3703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 1 };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 1 };
static panda$core$String $s3745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 1 };
static panda$core$String $s3753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s3810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s3841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s3853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s3873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s3917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 1 };
static panda$core$String $s3964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s3973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s3989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s3997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 1 };
static panda$core$String $s4016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s4026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1 };
static panda$core$String $s4028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, 1 };
static panda$core$String $s4033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s4037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 1 };
static panda$core$String $s4062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 1 };
static panda$core$String $s4072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, 1 };
static panda$core$String $s4083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s4085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 69, 1 };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, 1 };
static panda$core$String $s4095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, 1 };
static panda$core$String $s4108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s4111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x31\x20\x7D\x20\x7D", 26, 1 };
static panda$core$String $s4117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s4120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, 1 };
static panda$core$String $s4145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 1 };
static panda$core$String $s4148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, 1 };
static panda$core$String $s4162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 1 };
static panda$core$String $s4166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s4171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 1 };
static panda$core$String $s4199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s4213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 1 };
static panda$core$String $s4237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s4247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s4253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s4256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 1 };
static panda$core$String $s4265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 1 };
static panda$core$String $s4268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s4334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s4362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s4382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s4390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s4418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s4426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 1 };
static panda$core$String $s4428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s4433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s4499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s4537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s4542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s4548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 1 };
static panda$core$String $s4550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s4568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s4599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s4618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s4651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s4662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s4713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s4718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1 };
static panda$core$String $s4733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s4738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 1 };
static panda$core$String $s4749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1 };
static panda$core$String $s4775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1 };
static panda$core$String $s4784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s4787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, 1 };
static panda$core$String $s4792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1 };
static panda$core$String $s4823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s4827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s4830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1 };
static panda$core$String $s4833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s4835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s4838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 1 };
static panda$core$String $s4843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 1 };
static panda$core$String $s4850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s4874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 1 };
static panda$core$String $s4888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 1 };
static panda$core$String $s4920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 1 };
static panda$core$String $s4969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 1 };
static panda$core$String $s5001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s5172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 1 };
static panda$core$String $s5245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s5261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s5264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1 };
static panda$core$String $s5267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s5269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s5429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s5543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 1 };
static panda$core$String $s5555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3B\x20\x69\x6E\x6C\x69\x6E\x65\x20\x72\x65\x74\x75\x72\x6E\x20\x28", 18, 1 };
static panda$core$String $s5638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s5645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s5703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s5753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s5755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s5762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, 1 };
static panda$core$String $s5783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1 };
static panda$core$String $s5785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, 1 };
static panda$core$String $s5786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, 1 };
static panda$core$String $s5789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, 1 };
static panda$core$String $s5791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, 1 };
static panda$core$String $s5793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 1 };
static panda$core$String $s5801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s5817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s5830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 1 };
static panda$core$String $s5832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s5851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 1 };
static panda$core$String $s5904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 1 };
static panda$core$String $s5906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 1 };
static panda$core$String $s5972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s5998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 1 };
static panda$core$String $s6006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s6015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s6022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s6041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s6069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s6076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s6078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s6081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s6083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s6098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s6107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s6135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s6176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s6178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s6181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

void org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$io$OutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$io$OutputStream* p_out) {
    panda$io$MemoryOutputStream* $tmp1 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp1->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp1->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp1);
    self->declarations = $tmp1;
    panda$io$MemoryOutputStream* $tmp3 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp3->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp3->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp3);
    self->types = $tmp3;
    panda$io$MemoryOutputStream* $tmp5 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp5->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp5->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp5);
    self->methodsBuffer = $tmp5;
    panda$io$IndentedOutputStream* $tmp7 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp7->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp7->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp7, ((panda$io$OutputStream*) self->methodsBuffer));
    self->methods = $tmp7;
    panda$io$MemoryOutputStream* $tmp9 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp9->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp9->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp9);
    self->methodHeaderBuffer = $tmp9;
    panda$io$IndentedOutputStream* $tmp11 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp11->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp11->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp11, ((panda$io$OutputStream*) self->methodHeaderBuffer));
    self->methodHeader = $tmp11;
    panda$io$MemoryOutputStream* $tmp13 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp13->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp13->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp13);
    self->wrapperShimsBuffer = $tmp13;
    panda$io$IndentedOutputStream* $tmp15 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp15->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp15->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp15, ((panda$io$OutputStream*) self->wrapperShimsBuffer));
    self->wrapperShims = $tmp15;
    panda$io$MemoryOutputStream* $tmp17 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp17->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp17->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp17);
    self->shimsBuffer = $tmp17;
    panda$io$IndentedOutputStream* $tmp19 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp19->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp19->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp19, ((panda$io$OutputStream*) self->shimsBuffer));
    self->shims = $tmp19;
    panda$io$MemoryOutputStream* $tmp21 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp21->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp21->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp21);
    self->strings = $tmp21;
    panda$collections$Set* $tmp23 = (panda$collections$Set*) malloc(24);
    $tmp23->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp23->refCount.value = 1;
    panda$collections$Set$init($tmp23);
    self->declared = $tmp23;
    panda$collections$Set* $tmp25 = (panda$collections$Set*) malloc(24);
    $tmp25->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp25->refCount.value = 1;
    panda$collections$Set$init($tmp25);
    self->writtenTypes = $tmp25;
    panda$collections$Set* $tmp27 = (panda$collections$Set*) malloc(24);
    $tmp27->$class = (panda$core$Class*) &panda$collections$Set$class;
    $tmp27->refCount.value = 1;
    panda$collections$Set$init($tmp27);
    self->writtenWrappers = $tmp27;
    panda$collections$HashMap* $tmp29 = (panda$collections$HashMap*) malloc(56);
    $tmp29->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp29->refCount.value = 1;
    panda$collections$HashMap$init($tmp29);
    self->classConstants = $tmp29;
    panda$collections$IdentityMap* $tmp31 = (panda$collections$IdentityMap*) malloc(56);
    $tmp31->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp31->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp31);
    self->variableNames = $tmp31;
    panda$collections$Stack* $tmp33 = (panda$collections$Stack*) malloc(24);
    $tmp33->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp33->refCount.value = 1;
    panda$collections$Stack$init($tmp33);
    self->loopDescriptors = $tmp33;
    self->varCount = ((panda$core$Int64) { 0 });
    self->labelCount = ((panda$core$Int64) { 0 });
    panda$collections$HashMap* $tmp35 = (panda$collections$HashMap*) malloc(56);
    $tmp35->$class = (panda$core$Class*) &panda$collections$HashMap$class;
    $tmp35->refCount.value = 1;
    panda$collections$HashMap$init($tmp35);
    self->reusedValues = $tmp35;
    panda$collections$IdentityMap* $tmp37 = (panda$collections$IdentityMap*) malloc(56);
    $tmp37->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp37->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp37);
    self->methodShims = $tmp37;
    panda$collections$Stack* $tmp39 = (panda$collections$Stack*) malloc(24);
    $tmp39->$class = (panda$core$Class*) &panda$collections$Stack$class;
    $tmp39->refCount.value = 1;
    panda$collections$Stack$init($tmp39);
    self->inlineContext = $tmp39;
    panda$collections$IdentityMap* $tmp41 = (panda$collections$IdentityMap*) malloc(56);
    $tmp41->$class = (panda$core$Class*) &panda$collections$IdentityMap$class;
    $tmp41->refCount.value = 1;
    panda$collections$IdentityMap$init($tmp41);
    self->currentlyInlining = $tmp41;
    panda$io$IndentedOutputStream* $tmp43 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp43->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp43->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp43, p_out);
    self->out = $tmp43;
    panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s45, &$s46);
    panda$core$String* $tmp49 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp47, &$s48);
    (($fn50) p_out->$class->vtable[19])(p_out, $tmp49);
    (($fn52) p_out->$class->vtable[19])(p_out, &$s51);
    (($fn54) p_out->$class->vtable[19])(p_out, &$s53);
    (($fn56) p_out->$class->vtable[19])(p_out, &$s55);
    (($fn58) p_out->$class->vtable[19])(p_out, &$s57);
    (($fn60) p_out->$class->vtable[19])(p_out, &$s59);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    self->compiler = p_compiler;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$finish(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    org$pandalanguage$pandac$Type* $tmp61 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp61);
    panda$core$String* $tmp63 = (($fn62) self->types->$class->vtable[0])(self->types);
    (($fn64) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp63);
    panda$core$String* $tmp66 = (($fn65) self->strings->$class->vtable[0])(self->strings);
    (($fn67) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp66);
    panda$core$String* $tmp69 = (($fn68) self->declarations->$class->vtable[0])(self->declarations);
    (($fn70) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp69);
    panda$core$String* $tmp72 = (($fn71) self->wrapperShimsBuffer->$class->vtable[0])(self->wrapperShimsBuffer);
    (($fn73) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp72);
    panda$core$String* $tmp75 = (($fn74) self->shimsBuffer->$class->vtable[0])(self->shimsBuffer);
    (($fn76) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp75);
    panda$core$String* $tmp78 = (($fn77) self->methodsBuffer->$class->vtable[0])(self->methodsBuffer);
    (($fn79) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp78);
    (($fn80) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    panda$core$Int64 $tmp81 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp81;
    panda$core$String* $tmp83 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s82, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp85 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp83, &$s84);
    return $tmp85;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    panda$core$Int64 $tmp86 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp86;
    panda$core$String* $tmp88 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s87, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp88, &$s89);
    return $tmp90;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s91, p_label);
    panda$core$String* $tmp94 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp92, &$s93);
    (($fn95) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp94);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    switch (p_stmt->kind.value) {
        case 1000:
        {
            panda$core$Int64 $tmp96 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp96, ((panda$core$Int64) { 0 }));
            if ($tmp97.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp98 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp99 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp98, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp100 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp99);
            panda$core$Bit $tmp101 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp100));
            return $tmp101;
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
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl113;
    panda$core$Int64 result122;
    panda$collections$Iterator* f$Iter123;
    org$pandalanguage$pandac$FieldDecl* f136;
    panda$core$Int64 size142;
    panda$core$Int64 align144;
    PANDA_ASSERT(p_t->resolved.value);
    panda$core$Bit $tmp102 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp102.value) {
    {
        panda$core$Bit $tmp104 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s103);
        if ($tmp104.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp106 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s105);
        if ($tmp106.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp108 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s107);
        if ($tmp108.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        panda$core$Bit $tmp110 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s109);
        PANDA_ASSERT($tmp110.value);
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp111 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp112 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp111);
    if ($tmp112.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp114 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl113 = $tmp114;
    PANDA_ASSERT(((panda$core$Bit) { cl113 != NULL }).value);
    panda$core$Bit $tmp116 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl113);
    panda$core$Bit $tmp117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp116);
    bool $tmp115 = $tmp117.value;
    if ($tmp115) goto $l118;
    panda$core$Bit $tmp120 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl113)->name, &$s119);
    $tmp115 = $tmp120.value;
    $l118:;
    panda$core$Bit $tmp121 = { $tmp115 };
    if ($tmp121.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result122 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp124 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl113);
        ITable* $tmp125 = ((panda$collections$Iterable*) $tmp124)->$class->itable;
        while ($tmp125->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp125 = $tmp125->next;
        }
        $fn127 $tmp126 = $tmp125->methods[0];
        panda$collections$Iterator* $tmp128 = $tmp126(((panda$collections$Iterable*) $tmp124));
        f$Iter123 = $tmp128;
        $l129:;
        ITable* $tmp131 = f$Iter123->$class->itable;
        while ($tmp131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp131 = $tmp131->next;
        }
        $fn133 $tmp132 = $tmp131->methods[0];
        panda$core$Bit $tmp134 = $tmp132(f$Iter123);
        panda$core$Bit $tmp135 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp134);
        if (!$tmp135.value) goto $l130;
        {
            ITable* $tmp137 = f$Iter123->$class->itable;
            while ($tmp137->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp137 = $tmp137->next;
            }
            $fn139 $tmp138 = $tmp137->methods[1];
            panda$core$Object* $tmp140 = $tmp138(f$Iter123);
            f136 = ((org$pandalanguage$pandac$FieldDecl*) $tmp140);
            panda$core$Bit $tmp141 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f136->annotations);
            if ($tmp141.value) {
            {
                goto $l129;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f136);
            panda$core$Int64 $tmp143 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f136->type);
            size142 = $tmp143;
            panda$core$Int64 $tmp145 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result122, size142);
            align144 = $tmp145;
            panda$core$Bit $tmp146 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align144, ((panda$core$Int64) { 0 }));
            if ($tmp146.value) {
            {
                panda$core$Int64 $tmp147 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size142, align144);
                panda$core$Int64 $tmp148 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result122, $tmp147);
                result122 = $tmp148;
            }
            }
            panda$core$Int64 $tmp149 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result122, size142);
            panda$core$Bit $tmp150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp149, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp150.value);
            panda$core$Int64 $tmp151 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result122, size142);
            result122 = $tmp151;
        }
        goto $l129;
        $l130:;
    }
    panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp152.value) {
    {
        panda$core$Int64 $tmp153 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result122, ((panda$core$Int64) { 1 }));
        result122 = $tmp153;
    }
    }
    return result122;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp154 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp155 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp154, ((panda$core$Int64) { 8 }));
    return $tmp155;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl159;
    panda$core$Int64 result163;
    panda$collections$Iterator* f$Iter164;
    org$pandalanguage$pandac$FieldDecl* f177;
    panda$core$Int64 size182;
    panda$core$Int64 align184;
    panda$core$Bit $tmp156 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    panda$core$Bit $tmp157 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp156);
    if ($tmp157.value) {
    {
        panda$core$Int64 $tmp158 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
        return $tmp158;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp160 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl159 = $tmp160;
    PANDA_ASSERT(((panda$core$Bit) { cl159 != NULL }).value);
    panda$core$Bit $tmp162 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl159)->name, &$s161);
    if ($tmp162.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result163 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp165 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl159);
        ITable* $tmp166 = ((panda$collections$Iterable*) $tmp165)->$class->itable;
        while ($tmp166->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp166 = $tmp166->next;
        }
        $fn168 $tmp167 = $tmp166->methods[0];
        panda$collections$Iterator* $tmp169 = $tmp167(((panda$collections$Iterable*) $tmp165));
        f$Iter164 = $tmp169;
        $l170:;
        ITable* $tmp172 = f$Iter164->$class->itable;
        while ($tmp172->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp172 = $tmp172->next;
        }
        $fn174 $tmp173 = $tmp172->methods[0];
        panda$core$Bit $tmp175 = $tmp173(f$Iter164);
        panda$core$Bit $tmp176 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp175);
        if (!$tmp176.value) goto $l171;
        {
            ITable* $tmp178 = f$Iter164->$class->itable;
            while ($tmp178->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp178 = $tmp178->next;
            }
            $fn180 $tmp179 = $tmp178->methods[1];
            panda$core$Object* $tmp181 = $tmp179(f$Iter164);
            f177 = ((org$pandalanguage$pandac$FieldDecl*) $tmp181);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f177);
            panda$core$Int64 $tmp183 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f177->type);
            size182 = $tmp183;
            panda$core$Int64 $tmp185 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result163, size182);
            align184 = $tmp185;
            panda$core$Bit $tmp186 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align184, ((panda$core$Int64) { 0 }));
            if ($tmp186.value) {
            {
                panda$core$Int64 $tmp187 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size182, align184);
                panda$core$Int64 $tmp188 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result163, $tmp187);
                result163 = $tmp188;
            }
            }
            panda$core$Int64 $tmp189 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result163, size182);
            panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp189, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp190.value);
            panda$core$Int64 $tmp191 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result163, size182);
            result163 = $tmp191;
        }
        goto $l170;
        $l171:;
    }
    panda$core$Bit $tmp193 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl159);
    bool $tmp192 = $tmp193.value;
    if (!$tmp192) goto $l194;
    panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    $tmp192 = $tmp195.value;
    $l194:;
    panda$core$Bit $tmp196 = { $tmp192 };
    if ($tmp196.value) {
    {
        panda$core$Int64 $tmp197 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result163, ((panda$core$Int64) { 1 }));
        result163 = $tmp197;
    }
    }
    return result163;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
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
    panda$core$Int64 $tmp206 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp205);
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
            panda$core$Int64 $tmp226 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f220->type);
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
void org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl238;
    panda$core$MutableString* code242;
    panda$core$String* separator250;
    panda$collections$Iterator* f$Iter252;
    org$pandalanguage$pandac$FieldDecl* f265;
    panda$core$Bit $tmp237 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp237.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    org$pandalanguage$pandac$ClassDecl* $tmp239 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl238 = $tmp239;
    panda$core$Bit $tmp240 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(cl238->annotations);
    panda$core$Bit $tmp241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp240);
    PANDA_ASSERT($tmp241.value);
    panda$core$MutableString* $tmp243 = (panda$core$MutableString*) malloc(40);
    $tmp243->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp243->refCount.value = 1;
    panda$core$String* $tmp246 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s245, $tmp246);
    panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp247, &$s248);
    panda$core$MutableString$init$panda$core$String($tmp243, $tmp249);
    code242 = $tmp243;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) cl238));
    PANDA_ASSERT(((panda$core$Bit) { cl238 != NULL }).value);
    separator250 = &$s251;
    {
        panda$collections$ListView* $tmp253 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl238);
        ITable* $tmp254 = ((panda$collections$Iterable*) $tmp253)->$class->itable;
        while ($tmp254->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp254 = $tmp254->next;
        }
        $fn256 $tmp255 = $tmp254->methods[0];
        panda$collections$Iterator* $tmp257 = $tmp255(((panda$collections$Iterable*) $tmp253));
        f$Iter252 = $tmp257;
        $l258:;
        ITable* $tmp260 = f$Iter252->$class->itable;
        while ($tmp260->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp260 = $tmp260->next;
        }
        $fn262 $tmp261 = $tmp260->methods[0];
        panda$core$Bit $tmp263 = $tmp261(f$Iter252);
        panda$core$Bit $tmp264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp263);
        if (!$tmp264.value) goto $l259;
        {
            ITable* $tmp266 = f$Iter252->$class->itable;
            while ($tmp266->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp266 = $tmp266->next;
            }
            $fn268 $tmp267 = $tmp266->methods[1];
            panda$core$Object* $tmp269 = $tmp267(f$Iter252);
            f265 = ((org$pandalanguage$pandac$FieldDecl*) $tmp269);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f265);
            panda$core$Bit $tmp270 = panda$core$Bit$$NOT$R$panda$core$Bit(f265->type->resolved);
            if ($tmp270.value) {
            {
                return;
            }
            }
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s271, separator250);
            panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp272, &$s273);
            panda$core$String* $tmp275 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f265->type);
            panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp274, $tmp275);
            panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp276, &$s277);
            panda$core$MutableString$append$panda$core$String(code242, $tmp278);
            separator250 = &$s279;
        }
        goto $l258;
        $l259:;
    }
    org$pandalanguage$pandac$Type* $tmp280 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp281 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp280);
    if ($tmp281.value) {
    {
        panda$core$MutableString$append$panda$core$String(code242, &$s282);
    }
    }
    panda$core$MutableString$append$panda$core$String(code242, &$s283);
    (($fn284) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code242));
    panda$core$Bit $tmp285 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl238);
    if ($tmp285.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl238);
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$MutableString* code287;
    org$pandalanguage$pandac$ClassDecl* object295;
    panda$core$String* separator298;
    panda$collections$Iterator* f$Iter300;
    org$pandalanguage$pandac$FieldDecl* f313;
    panda$core$Bit $tmp286 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp286.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    panda$core$MutableString* $tmp288 = (panda$core$MutableString*) malloc(40);
    $tmp288->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp288->refCount.value = 1;
    panda$core$String* $tmp291 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s290, $tmp291);
    panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp292, &$s293);
    panda$core$MutableString$init$panda$core$String($tmp288, $tmp294);
    code287 = $tmp288;
    org$pandalanguage$pandac$Type* $tmp296 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp297 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp296);
    object295 = $tmp297;
    PANDA_ASSERT(((panda$core$Bit) { object295 != NULL }).value);
    separator298 = &$s299;
    {
        panda$collections$ListView* $tmp301 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, object295);
        ITable* $tmp302 = ((panda$collections$Iterable*) $tmp301)->$class->itable;
        while ($tmp302->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp302 = $tmp302->next;
        }
        $fn304 $tmp303 = $tmp302->methods[0];
        panda$collections$Iterator* $tmp305 = $tmp303(((panda$collections$Iterable*) $tmp301));
        f$Iter300 = $tmp305;
        $l306:;
        ITable* $tmp308 = f$Iter300->$class->itable;
        while ($tmp308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp308 = $tmp308->next;
        }
        $fn310 $tmp309 = $tmp308->methods[0];
        panda$core$Bit $tmp311 = $tmp309(f$Iter300);
        panda$core$Bit $tmp312 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp311);
        if (!$tmp312.value) goto $l307;
        {
            ITable* $tmp314 = f$Iter300->$class->itable;
            while ($tmp314->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp314 = $tmp314->next;
            }
            $fn316 $tmp315 = $tmp314->methods[1];
            panda$core$Object* $tmp317 = $tmp315(f$Iter300);
            f313 = ((org$pandalanguage$pandac$FieldDecl*) $tmp317);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f313);
            panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s318, separator298);
            panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s320);
            panda$core$String* $tmp322 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f313->type);
            panda$core$String* $tmp323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, $tmp322);
            panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s324);
            panda$core$MutableString$append$panda$core$String(code287, $tmp325);
            separator298 = &$s326;
        }
        goto $l306;
        $l307:;
    }
    panda$core$String* $tmp328 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s327, $tmp328);
    panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, &$s330);
    panda$core$MutableString$append$panda$core$String(code287, $tmp331);
    panda$core$MutableString$append$panda$core$String(code287, &$s332);
    (($fn333) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code287));
    panda$core$String* $tmp335 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s334, $tmp335);
    panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s337);
    panda$core$String* $tmp339 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, $tmp339);
    panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s341);
    (($fn343) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp342);
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp345 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s344, $tmp345);
    return $tmp346;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name355;
    org$pandalanguage$pandac$ClassDecl* cl361;
    org$pandalanguage$pandac$ClassDecl* cl367;
    org$pandalanguage$pandac$ClassDecl* cl380;
    panda$core$String* name383;
    org$pandalanguage$pandac$ClassDecl* cl389;
    panda$core$MutableString* result398;
    panda$core$Range$LTpanda$core$Int64$GT $tmp406;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s347;
        }
        break;
        case 12:
        case 13:
        {
            panda$core$Int64 $tmp349 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp350 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp349, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp351 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s348, ((panda$core$Object*) wrap_panda$core$Int64($tmp350)));
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp351, &$s352);
            return $tmp353;
        }
        break;
        case 19:
        {
            return &$s354;
        }
        break;
        case 10:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, p_t);
            panda$core$String* $tmp357 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s356, $tmp357);
            panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp358, &$s359);
            name355 = $tmp360;
            org$pandalanguage$pandac$ClassDecl* $tmp362 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl361 = $tmp362;
            PANDA_ASSERT(((panda$core$Bit) { cl361 != NULL }).value);
            panda$core$Bit $tmp363 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl361);
            panda$core$Bit $tmp364 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp363);
            if ($tmp364.value) {
            {
                panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name355, &$s365);
                return $tmp366;
            }
            }
            return name355;
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp368 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl367 = $tmp368;
            PANDA_ASSERT(((panda$core$Bit) { cl367 != NULL }).value);
            panda$core$Bit $tmp369 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl367);
            if ($tmp369.value) {
            {
                panda$core$String* $tmp370 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                return $tmp370;
            }
            }
            panda$core$Object* $tmp371 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp372 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp371));
            return $tmp372;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp373 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp375 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp373))->name, &$s374);
            if ($tmp375.value) {
            {
                panda$core$Object* $tmp376 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp377 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp376));
                panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, &$s378);
                return $tmp379;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp381 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl380 = $tmp381;
            panda$core$Bit $tmp382 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl380);
            if ($tmp382.value) {
            {
                panda$core$String* $tmp385 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s384, $tmp385);
                panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp386, &$s387);
                name383 = $tmp388;
                org$pandalanguage$pandac$ClassDecl* $tmp390 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl389 = $tmp390;
                PANDA_ASSERT(((panda$core$Bit) { cl389 != NULL }).value);
                panda$core$Bit $tmp391 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl389);
                panda$core$Bit $tmp392 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp391);
                if ($tmp392.value) {
                {
                    panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name383, &$s393);
                    return $tmp394;
                }
                }
                return name383;
            }
            }
            panda$core$Object* $tmp395 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp396 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp395));
            return $tmp396;
        }
        break;
        case 22:
        {
            panda$core$String* $tmp397 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp397;
        }
        break;
        case 24:
        case 25:
        {
            panda$core$MutableString* $tmp399 = (panda$core$MutableString*) malloc(40);
            $tmp399->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp399->refCount.value = 1;
            panda$core$Int64 $tmp401 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp402 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp401, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp403 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, $tmp402);
            panda$core$String* $tmp404 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp403));
            panda$core$MutableString$init$panda$core$String($tmp399, $tmp404);
            result398 = $tmp399;
            panda$core$MutableString$append$panda$core$String(result398, &$s405);
            panda$core$Int64 $tmp407 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp408 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp407, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp406, ((panda$core$Int64) { 0 }), $tmp408, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp410 = $tmp406.start.value;
            panda$core$Int64 i409 = { $tmp410 };
            int64_t $tmp412 = $tmp406.end.value;
            int64_t $tmp413 = $tmp406.step.value;
            bool $tmp414 = $tmp406.inclusive.value;
            bool $tmp421 = $tmp413 > 0;
            if ($tmp421) goto $l419; else goto $l420;
            $l419:;
            if ($tmp414) goto $l422; else goto $l423;
            $l422:;
            if ($tmp410 <= $tmp412) goto $l415; else goto $l417;
            $l423:;
            if ($tmp410 < $tmp412) goto $l415; else goto $l417;
            $l420:;
            if ($tmp414) goto $l424; else goto $l425;
            $l424:;
            if ($tmp410 >= $tmp412) goto $l415; else goto $l417;
            $l425:;
            if ($tmp410 > $tmp412) goto $l415; else goto $l417;
            $l415:;
            {
                panda$core$Bit $tmp427 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i409, ((panda$core$Int64) { 0 }));
                if ($tmp427.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result398, &$s428);
                }
                }
                panda$core$Object* $tmp429 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, i409);
                panda$core$String* $tmp430 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp429));
                panda$core$MutableString$append$panda$core$String(result398, $tmp430);
            }
            $l418:;
            if ($tmp421) goto $l432; else goto $l433;
            $l432:;
            int64_t $tmp434 = $tmp412 - i409.value;
            if ($tmp414) goto $l435; else goto $l436;
            $l435:;
            if ($tmp434 >= $tmp413) goto $l431; else goto $l417;
            $l436:;
            if ($tmp434 > $tmp413) goto $l431; else goto $l417;
            $l433:;
            int64_t $tmp438 = i409.value - $tmp412;
            if ($tmp414) goto $l439; else goto $l440;
            $l439:;
            if ($tmp438 >= -$tmp413) goto $l431; else goto $l417;
            $l440:;
            if ($tmp438 > -$tmp413) goto $l431; else goto $l417;
            $l431:;
            i409.value += $tmp413;
            goto $l415;
            $l417:;
            panda$core$MutableString$append$panda$core$String(result398, &$s442);
            panda$core$String* $tmp443 = panda$core$MutableString$convert$R$panda$core$String(result398);
            return $tmp443;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp444.value) {
    {
        panda$core$Object* $tmp445 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp446 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp445));
        return $tmp446;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, p_t);
    panda$core$String* $tmp448 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s447, $tmp448);
    panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp449, &$s450);
    return $tmp451;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp452 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp452, &$s453);
    return $tmp454;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType455;
    panda$core$MutableString* result457;
    panda$core$Range$LTpanda$core$Int64$GT $tmp474;
    org$pandalanguage$pandac$Type* $tmp456 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType455 = $tmp456;
    panda$core$MutableString* $tmp458 = (panda$core$MutableString*) malloc(40);
    $tmp458->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp458->refCount.value = 1;
    panda$core$MutableString$init($tmp458);
    result457 = $tmp458;
    panda$core$Int64 $tmp460 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inheritedType455->subtypes);
    panda$core$Int64 $tmp461 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp460, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp462 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedType455->subtypes, $tmp461);
    panda$core$String* $tmp463 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp462));
    panda$core$MutableString$append$panda$core$String(result457, $tmp463);
    panda$core$MutableString$append$panda$core$String(result457, &$s464);
    panda$core$Bit $tmp465 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp465.value);
    panda$core$String* $tmp467 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s466, $tmp467);
    panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp468, &$s469);
    panda$core$MutableString$append$panda$core$String(result457, $tmp470);
    panda$core$Bit $tmp471 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp471.value) {
    {
        panda$core$MutableString$append$panda$core$String(result457, &$s472);
    }
    }
    panda$core$MutableString$append$panda$core$String(result457, &$s473);
    panda$core$Int64 $tmp475 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inheritedType455->subtypes);
    panda$core$Int64 $tmp476 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp475, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp474, ((panda$core$Int64) { 0 }), $tmp476, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp478 = $tmp474.start.value;
    panda$core$Int64 i477 = { $tmp478 };
    int64_t $tmp480 = $tmp474.end.value;
    int64_t $tmp481 = $tmp474.step.value;
    bool $tmp482 = $tmp474.inclusive.value;
    bool $tmp489 = $tmp481 > 0;
    if ($tmp489) goto $l487; else goto $l488;
    $l487:;
    if ($tmp482) goto $l490; else goto $l491;
    $l490:;
    if ($tmp478 <= $tmp480) goto $l483; else goto $l485;
    $l491:;
    if ($tmp478 < $tmp480) goto $l483; else goto $l485;
    $l488:;
    if ($tmp482) goto $l492; else goto $l493;
    $l492:;
    if ($tmp478 >= $tmp480) goto $l483; else goto $l485;
    $l493:;
    if ($tmp478 > $tmp480) goto $l483; else goto $l485;
    $l483:;
    {
        panda$core$MutableString$append$panda$core$String(result457, &$s495);
        panda$core$Object* $tmp496 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedType455->subtypes, i477);
        panda$core$String* $tmp497 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp496));
        panda$core$MutableString$append$panda$core$String(result457, $tmp497);
    }
    $l486:;
    if ($tmp489) goto $l499; else goto $l500;
    $l499:;
    int64_t $tmp501 = $tmp480 - i477.value;
    if ($tmp482) goto $l502; else goto $l503;
    $l502:;
    if ($tmp501 >= $tmp481) goto $l498; else goto $l485;
    $l503:;
    if ($tmp501 > $tmp481) goto $l498; else goto $l485;
    $l500:;
    int64_t $tmp505 = i477.value - $tmp480;
    if ($tmp482) goto $l506; else goto $l507;
    $l506:;
    if ($tmp505 >= -$tmp481) goto $l498; else goto $l485;
    $l507:;
    if ($tmp505 > -$tmp481) goto $l498; else goto $l485;
    $l498:;
    i477.value += $tmp481;
    goto $l483;
    $l485:;
    panda$core$MutableString$append$panda$core$String(result457, &$s509);
    panda$core$String* $tmp510 = panda$core$MutableString$convert$R$panda$core$String(result457);
    return $tmp510;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp511.value);
    panda$core$Object* $tmp512 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp512));
    panda$core$Object* $tmp514 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp515 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp514));
    panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s513, $tmp515);
    panda$core$String* $tmp518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp516, &$s517);
    return $tmp518;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces519;
    panda$core$String* previous522;
    panda$collections$Iterator* intfType$Iter524;
    org$pandalanguage$pandac$Type* intfType536;
    org$pandalanguage$pandac$ClassDecl* intf541;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC543;
    panda$collections$ListView* methods545;
    panda$core$String* name547;
    panda$core$String* t557;
    panda$core$MutableString* result571;
    panda$core$String* separator611;
    panda$collections$Iterator* m$Iter613;
    org$pandalanguage$pandac$MethodDecl* m625;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry633;
    org$pandalanguage$pandac$Type* $tmp520 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp521 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp520);
    interfaces519 = $tmp521;
    previous522 = &$s523;
    {
        ITable* $tmp525 = ((panda$collections$Iterable*) interfaces519)->$class->itable;
        while ($tmp525->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp525 = $tmp525->next;
        }
        $fn527 $tmp526 = $tmp525->methods[0];
        panda$collections$Iterator* $tmp528 = $tmp526(((panda$collections$Iterable*) interfaces519));
        intfType$Iter524 = $tmp528;
        $l529:;
        ITable* $tmp531 = intfType$Iter524->$class->itable;
        while ($tmp531->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp531 = $tmp531->next;
        }
        $fn533 $tmp532 = $tmp531->methods[0];
        panda$core$Bit $tmp534 = $tmp532(intfType$Iter524);
        panda$core$Bit $tmp535 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp534);
        if (!$tmp535.value) goto $l530;
        {
            ITable* $tmp537 = intfType$Iter524->$class->itable;
            while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp537 = $tmp537->next;
            }
            $fn539 $tmp538 = $tmp537->methods[1];
            panda$core$Object* $tmp540 = $tmp538(intfType$Iter524);
            intfType536 = ((org$pandalanguage$pandac$Type*) $tmp540);
            org$pandalanguage$pandac$ClassDecl* $tmp542 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType536);
            intf541 = $tmp542;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp544 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf541);
            intfCC543 = $tmp544;
            panda$collections$ListView* $tmp546 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType536);
            methods545 = $tmp546;
            panda$core$String* $tmp549 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s548, $tmp549);
            panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s551);
            panda$core$String* $tmp553 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf541)->name);
            panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, $tmp553);
            panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp554, &$s555);
            name547 = $tmp556;
            org$pandalanguage$pandac$Type* $tmp559 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp560 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp559);
            panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s558, $tmp560);
            panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp561, &$s562);
            ITable* $tmp564 = ((panda$collections$CollectionView*) methods545)->$class->itable;
            while ($tmp564->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp564 = $tmp564->next;
            }
            $fn566 $tmp565 = $tmp564->methods[0];
            panda$core$Int64 $tmp567 = $tmp565(((panda$collections$CollectionView*) methods545));
            panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp563, ((panda$core$Object*) wrap_panda$core$Int64($tmp567)));
            panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp568, &$s569);
            t557 = $tmp570;
            panda$core$MutableString* $tmp572 = (panda$core$MutableString*) malloc(40);
            $tmp572->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp572->refCount.value = 1;
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s574, name547);
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s576);
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, t557);
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s579);
            org$pandalanguage$pandac$Type* $tmp581 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp582 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp581);
            panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, $tmp582);
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, &$s584);
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s586, intfCC543->type);
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, &$s588);
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, intfCC543->name);
            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s591);
            org$pandalanguage$pandac$Type* $tmp593 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp594 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp593);
            panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, $tmp594);
            panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, &$s596);
            panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, $tmp597);
            panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s599, previous522);
            panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp600, &$s601);
            ITable* $tmp603 = ((panda$collections$CollectionView*) methods545)->$class->itable;
            while ($tmp603->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp603 = $tmp603->next;
            }
            $fn605 $tmp604 = $tmp603->methods[0];
            panda$core$Int64 $tmp606 = $tmp604(((panda$collections$CollectionView*) methods545));
            panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp602, ((panda$core$Object*) wrap_panda$core$Int64($tmp606)));
            panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s608);
            panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, $tmp609);
            panda$core$MutableString$init$panda$core$String($tmp572, $tmp610);
            result571 = $tmp572;
            separator611 = &$s612;
            {
                ITable* $tmp614 = ((panda$collections$Iterable*) methods545)->$class->itable;
                while ($tmp614->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp614 = $tmp614->next;
                }
                $fn616 $tmp615 = $tmp614->methods[0];
                panda$collections$Iterator* $tmp617 = $tmp615(((panda$collections$Iterable*) methods545));
                m$Iter613 = $tmp617;
                $l618:;
                ITable* $tmp620 = m$Iter613->$class->itable;
                while ($tmp620->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp620 = $tmp620->next;
                }
                $fn622 $tmp621 = $tmp620->methods[0];
                panda$core$Bit $tmp623 = $tmp621(m$Iter613);
                panda$core$Bit $tmp624 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp623);
                if (!$tmp624.value) goto $l619;
                {
                    ITable* $tmp626 = m$Iter613->$class->itable;
                    while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp626 = $tmp626->next;
                    }
                    $fn628 $tmp627 = $tmp626->methods[1];
                    panda$core$Object* $tmp629 = $tmp627(m$Iter613);
                    m625 = ((org$pandalanguage$pandac$MethodDecl*) $tmp629);
                    panda$core$MutableString$append$panda$core$String(result571, separator611);
                    separator611 = &$s630;
                    panda$core$Bit $tmp631 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m625->annotations);
                    if ($tmp631.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result571, &$s632);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp634 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m625);
                        entry633 = $tmp634;
                        panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s635, ((panda$core$String*) entry633->second));
                        panda$core$String* $tmp638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, &$s637);
                        panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp638, ((panda$core$String*) entry633->first));
                        panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp639, &$s640);
                        panda$core$MutableString$append$panda$core$String(result571, $tmp641);
                    }
                    }
                }
                goto $l618;
                $l619:;
            }
            panda$core$MutableString$append$panda$core$String(result571, &$s642);
            (($fn643) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result571));
            panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s644, t557);
            panda$core$String* $tmp647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp645, &$s646);
            panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp647, name547);
            panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp648, &$s649);
            previous522 = $tmp650;
        }
        goto $l529;
        $l530:;
    }
    return previous522;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer651;
    panda$io$IndentedOutputStream* out654;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found657;
    panda$core$Int64 oldVarCount665;
    org$pandalanguage$pandac$Type* effectiveReturnType666;
    panda$core$String* resultName670;
    panda$core$MutableString* resultType674;
    panda$core$String* self_t691;
    panda$core$Range$LTpanda$core$Int64$GT $tmp699;
    panda$core$String* pType719;
    panda$collections$Array* casts745;
    panda$core$Range$LTpanda$core$Int64$GT $tmp748;
    panda$core$String* p768;
    panda$core$String* returnValue790;
    panda$core$Range$LTpanda$core$Int64$GT $tmp819;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result877;
    panda$io$MemoryOutputStream* $tmp652 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp652->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp652->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp652);
    outBuffer651 = $tmp652;
    panda$io$IndentedOutputStream* $tmp655 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp655->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp655->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp655, ((panda$io$OutputStream*) outBuffer651));
    out654 = $tmp655;
    panda$core$Object* $tmp658 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found657 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp658);
    if (((panda$core$Bit) { found657 != NULL }).value) {
    {
        return found657;
    }
    }
    panda$core$Bit $tmp659 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp659.value);
    panda$core$Int64 $tmp660 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp661 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp662 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp661, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp660, $tmp662);
    PANDA_ASSERT($tmp663.value);
    panda$core$Bit $tmp664 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp664.value);
    oldVarCount665 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp667 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp668 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp667, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp669 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, $tmp668);
    effectiveReturnType666 = ((org$pandalanguage$pandac$Type*) $tmp669);
    panda$core$String* $tmp671 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp671, &$s672);
    resultName670 = $tmp673;
    panda$core$MutableString* $tmp675 = (panda$core$MutableString*) malloc(40);
    $tmp675->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp675->refCount.value = 1;
    panda$core$String* $tmp677 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType666);
    panda$core$MutableString$init$panda$core$String($tmp675, $tmp677);
    resultType674 = $tmp675;
    (($fn679) ((panda$io$OutputStream*) out654)->$class->vtable[16])(((panda$io$OutputStream*) out654), &$s678);
    panda$core$Bit $tmp680 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_raw->owner);
    if ($tmp680.value) {
    {
        (($fn682) ((panda$io$OutputStream*) out654)->$class->vtable[16])(((panda$io$OutputStream*) out654), &$s681);
    }
    }
    panda$core$String* $tmp684 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s683, ((panda$core$Object*) resultType674));
    panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp684, &$s685);
    panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp686, resultName670);
    panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp687, &$s688);
    (($fn690) ((panda$io$OutputStream*) out654)->$class->vtable[16])(((panda$io$OutputStream*) out654), $tmp689);
    panda$core$String* $tmp692 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t691 = $tmp692;
    panda$core$String* $tmp694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s693, self_t691);
    panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp694, &$s695);
    (($fn697) ((panda$io$OutputStream*) out654)->$class->vtable[16])(((panda$io$OutputStream*) out654), $tmp696);
    panda$core$MutableString$append$panda$core$String(resultType674, &$s698);
    panda$core$MutableString$append$panda$core$String(resultType674, self_t691);
    panda$core$Int64 $tmp700 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp699, ((panda$core$Int64) { 0 }), $tmp700, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp702 = $tmp699.start.value;
    panda$core$Int64 i701 = { $tmp702 };
    int64_t $tmp704 = $tmp699.end.value;
    int64_t $tmp705 = $tmp699.step.value;
    bool $tmp706 = $tmp699.inclusive.value;
    bool $tmp713 = $tmp705 > 0;
    if ($tmp713) goto $l711; else goto $l712;
    $l711:;
    if ($tmp706) goto $l714; else goto $l715;
    $l714:;
    if ($tmp702 <= $tmp704) goto $l707; else goto $l709;
    $l715:;
    if ($tmp702 < $tmp704) goto $l707; else goto $l709;
    $l712:;
    if ($tmp706) goto $l716; else goto $l717;
    $l716:;
    if ($tmp702 >= $tmp704) goto $l707; else goto $l709;
    $l717:;
    if ($tmp702 > $tmp704) goto $l707; else goto $l709;
    $l707:;
    {
        panda$core$Object* $tmp720 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i701);
        panda$core$String* $tmp721 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp720));
        pType719 = $tmp721;
        panda$core$MutableString$append$panda$core$String(resultType674, &$s722);
        panda$core$MutableString$append$panda$core$String(resultType674, pType719);
        panda$core$String* $tmp724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s723, pType719);
        panda$core$String* $tmp726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp724, &$s725);
        panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp726, ((panda$core$Object*) wrap_panda$core$Int64(i701)));
        panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp727, &$s728);
        (($fn730) ((panda$io$OutputStream*) out654)->$class->vtable[16])(((panda$io$OutputStream*) out654), $tmp729);
    }
    $l710:;
    if ($tmp713) goto $l732; else goto $l733;
    $l732:;
    int64_t $tmp734 = $tmp704 - i701.value;
    if ($tmp706) goto $l735; else goto $l736;
    $l735:;
    if ($tmp734 >= $tmp705) goto $l731; else goto $l709;
    $l736:;
    if ($tmp734 > $tmp705) goto $l731; else goto $l709;
    $l733:;
    int64_t $tmp738 = i701.value - $tmp704;
    if ($tmp706) goto $l739; else goto $l740;
    $l739:;
    if ($tmp738 >= -$tmp705) goto $l731; else goto $l709;
    $l740:;
    if ($tmp738 > -$tmp705) goto $l731; else goto $l709;
    $l731:;
    i701.value += $tmp705;
    goto $l707;
    $l709:;
    (($fn743) ((panda$io$OutputStream*) out654)->$class->vtable[19])(((panda$io$OutputStream*) out654), &$s742);
    panda$core$MutableString$append$panda$core$String(resultType674, &$s744);
    panda$collections$Array* $tmp746 = (panda$collections$Array*) malloc(40);
    $tmp746->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp746->refCount.value = 1;
    panda$collections$Array$init($tmp746);
    casts745 = $tmp746;
    panda$core$Int64 $tmp749 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp748, ((panda$core$Int64) { 0 }), $tmp749, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp751 = $tmp748.start.value;
    panda$core$Int64 i750 = { $tmp751 };
    int64_t $tmp753 = $tmp748.end.value;
    int64_t $tmp754 = $tmp748.step.value;
    bool $tmp755 = $tmp748.inclusive.value;
    bool $tmp762 = $tmp754 > 0;
    if ($tmp762) goto $l760; else goto $l761;
    $l760:;
    if ($tmp755) goto $l763; else goto $l764;
    $l763:;
    if ($tmp751 <= $tmp753) goto $l756; else goto $l758;
    $l764:;
    if ($tmp751 < $tmp753) goto $l756; else goto $l758;
    $l761:;
    if ($tmp755) goto $l765; else goto $l766;
    $l765:;
    if ($tmp751 >= $tmp753) goto $l756; else goto $l758;
    $l766:;
    if ($tmp751 > $tmp753) goto $l756; else goto $l758;
    $l756:;
    {
        panda$core$String* $tmp770 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s769, ((panda$core$Object*) wrap_panda$core$Int64(i750)));
        panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp770, &$s771);
        p768 = $tmp772;
        panda$core$Object* $tmp773 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i750);
        panda$core$Object* $tmp774 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i750);
        panda$core$Bit $tmp775 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp773)->type, ((org$pandalanguage$pandac$Type*) $tmp774));
        if ($tmp775.value) {
        {
            panda$core$Object* $tmp776 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i750);
            panda$core$Object* $tmp777 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i750);
            panda$core$String* $tmp778 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p768, ((org$pandalanguage$pandac$Type*) $tmp776), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp777)->type, out654);
            panda$collections$Array$add$panda$collections$Array$T(casts745, ((panda$core$Object*) $tmp778));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts745, ((panda$core$Object*) p768));
        }
        }
    }
    $l759:;
    if ($tmp762) goto $l780; else goto $l781;
    $l780:;
    int64_t $tmp782 = $tmp753 - i750.value;
    if ($tmp755) goto $l783; else goto $l784;
    $l783:;
    if ($tmp782 >= $tmp754) goto $l779; else goto $l758;
    $l784:;
    if ($tmp782 > $tmp754) goto $l779; else goto $l758;
    $l781:;
    int64_t $tmp786 = i750.value - $tmp753;
    if ($tmp755) goto $l787; else goto $l788;
    $l787:;
    if ($tmp786 >= -$tmp754) goto $l779; else goto $l758;
    $l788:;
    if ($tmp786 > -$tmp754) goto $l779; else goto $l758;
    $l779:;
    i750.value += $tmp754;
    goto $l756;
    $l758:;
    org$pandalanguage$pandac$Type* $tmp791 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp792 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp791);
    if ($tmp792.value) {
    {
        panda$core$String* $tmp793 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue790 = $tmp793;
        panda$core$String* $tmp795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s794, returnValue790);
        panda$core$String* $tmp797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp795, &$s796);
        (($fn798) ((panda$io$OutputStream*) out654)->$class->vtable[16])(((panda$io$OutputStream*) out654), $tmp797);
    }
    }
    else {
    {
        returnValue790 = &$s799;
    }
    }
    panda$core$String* $tmp801 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s800, $tmp801);
    panda$core$String* $tmp804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp802, &$s803);
    panda$core$String* $tmp805 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
    panda$core$String* $tmp806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp804, $tmp805);
    panda$core$String* $tmp808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp806, &$s807);
    panda$core$String* $tmp809 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp808, $tmp809);
    panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp810, &$s811);
    panda$core$String* $tmp814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s813, self_t691);
    panda$core$String* $tmp816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp814, &$s815);
    panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp812, $tmp816);
    (($fn818) ((panda$io$OutputStream*) out654)->$class->vtable[16])(((panda$io$OutputStream*) out654), $tmp817);
    panda$core$Int64 $tmp820 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp819, ((panda$core$Int64) { 0 }), $tmp820, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp822 = $tmp819.start.value;
    panda$core$Int64 i821 = { $tmp822 };
    int64_t $tmp824 = $tmp819.end.value;
    int64_t $tmp825 = $tmp819.step.value;
    bool $tmp826 = $tmp819.inclusive.value;
    bool $tmp833 = $tmp825 > 0;
    if ($tmp833) goto $l831; else goto $l832;
    $l831:;
    if ($tmp826) goto $l834; else goto $l835;
    $l834:;
    if ($tmp822 <= $tmp824) goto $l827; else goto $l829;
    $l835:;
    if ($tmp822 < $tmp824) goto $l827; else goto $l829;
    $l832:;
    if ($tmp826) goto $l836; else goto $l837;
    $l836:;
    if ($tmp822 >= $tmp824) goto $l827; else goto $l829;
    $l837:;
    if ($tmp822 > $tmp824) goto $l827; else goto $l829;
    $l827:;
    {
        panda$core$Object* $tmp840 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i821);
        panda$core$String* $tmp841 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp840)->type);
        panda$core$String* $tmp842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s839, $tmp841);
        panda$core$String* $tmp844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp842, &$s843);
        panda$core$Object* $tmp845 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts745, i821);
        panda$core$String* $tmp846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp844, ((panda$core$String*) $tmp845));
        panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, &$s847);
        (($fn849) ((panda$io$OutputStream*) out654)->$class->vtable[16])(((panda$io$OutputStream*) out654), $tmp848);
    }
    $l830:;
    if ($tmp833) goto $l851; else goto $l852;
    $l851:;
    int64_t $tmp853 = $tmp824 - i821.value;
    if ($tmp826) goto $l854; else goto $l855;
    $l854:;
    if ($tmp853 >= $tmp825) goto $l850; else goto $l829;
    $l855:;
    if ($tmp853 > $tmp825) goto $l850; else goto $l829;
    $l852:;
    int64_t $tmp857 = i821.value - $tmp824;
    if ($tmp826) goto $l858; else goto $l859;
    $l858:;
    if ($tmp857 >= -$tmp825) goto $l850; else goto $l829;
    $l859:;
    if ($tmp857 > -$tmp825) goto $l850; else goto $l829;
    $l850:;
    i821.value += $tmp825;
    goto $l827;
    $l829:;
    (($fn862) ((panda$io$OutputStream*) out654)->$class->vtable[19])(((panda$io$OutputStream*) out654), &$s861);
    org$pandalanguage$pandac$Type* $tmp863 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp864 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp863);
    if ($tmp864.value) {
    {
        panda$core$String* $tmp865 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType666);
        panda$core$String* $tmp867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp865, &$s866);
        panda$core$String* $tmp868 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, returnValue790, p_raw->returnType, effectiveReturnType666, out654);
        panda$core$String* $tmp869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, $tmp868);
        returnValue790 = $tmp869;
    }
    }
    panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s870, returnValue790);
    panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp871, &$s872);
    (($fn874) ((panda$io$OutputStream*) out654)->$class->vtable[19])(((panda$io$OutputStream*) out654), $tmp873);
    (($fn876) ((panda$io$OutputStream*) out654)->$class->vtable[19])(((panda$io$OutputStream*) out654), &$s875);
    self->varCount = oldVarCount665;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp878 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp878->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp878->refCount.value = 1;
    panda$core$String* $tmp880 = panda$core$MutableString$convert$R$panda$core$String(resultType674);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp878, resultName670, $tmp880);
    result877 = $tmp878;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result877));
    (($fn881) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer651));
    return result877;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 oldVarCount883;
    panda$core$String* result884;
    panda$core$String* selfType890;
    org$pandalanguage$pandac$Type* actualMethodType913;
    org$pandalanguage$pandac$Type* inheritedMethodType915;
    panda$core$Range$LTpanda$core$Int64$GT $tmp917;
    panda$collections$Array* parameters967;
    panda$core$Range$LTpanda$core$Int64$GT $tmp970;
    panda$collections$Array* children1007;
    panda$core$String* unwrapped1013;
    panda$core$String* returnValue1018;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1053;
    panda$core$Bit $tmp882 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp882.value);
    oldVarCount883 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp886 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s885, $tmp886);
    panda$core$String* $tmp889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp887, &$s888);
    result884 = $tmp889;
    panda$core$String* $tmp892 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s891, $tmp892);
    panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp893, &$s894);
    selfType890 = $tmp895;
    (($fn897) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s896);
    panda$core$Bit $tmp898 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp898.value) {
    {
        (($fn900) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s899);
    }
    }
    panda$core$String* $tmp902 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s901, $tmp902);
    panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp903, &$s904);
    panda$core$String* $tmp906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp905, result884);
    panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, &$s907);
    panda$core$String* $tmp909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, selfType890);
    panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp909, &$s910);
    (($fn912) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp911);
    org$pandalanguage$pandac$Type* $tmp914 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType913 = $tmp914;
    org$pandalanguage$pandac$Type* $tmp916 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType915 = $tmp916;
    panda$core$Int64 $tmp918 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp917, ((panda$core$Int64) { 0 }), $tmp918, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp920 = $tmp917.start.value;
    panda$core$Int64 i919 = { $tmp920 };
    int64_t $tmp922 = $tmp917.end.value;
    int64_t $tmp923 = $tmp917.step.value;
    bool $tmp924 = $tmp917.inclusive.value;
    bool $tmp931 = $tmp923 > 0;
    if ($tmp931) goto $l929; else goto $l930;
    $l929:;
    if ($tmp924) goto $l932; else goto $l933;
    $l932:;
    if ($tmp920 <= $tmp922) goto $l925; else goto $l927;
    $l933:;
    if ($tmp920 < $tmp922) goto $l925; else goto $l927;
    $l930:;
    if ($tmp924) goto $l934; else goto $l935;
    $l934:;
    if ($tmp920 >= $tmp922) goto $l925; else goto $l927;
    $l935:;
    if ($tmp920 > $tmp922) goto $l925; else goto $l927;
    $l925:;
    {
        panda$core$Object* $tmp938 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedMethodType915->subtypes, i919);
        panda$core$String* $tmp939 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp938));
        panda$core$String* $tmp940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s937, $tmp939);
        panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp940, &$s941);
        panda$core$Object* $tmp943 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i919);
        panda$core$String* $tmp944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp942, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp943)->name);
        panda$core$String* $tmp946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp944, &$s945);
        (($fn947) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp946);
    }
    $l928:;
    if ($tmp931) goto $l949; else goto $l950;
    $l949:;
    int64_t $tmp951 = $tmp922 - i919.value;
    if ($tmp924) goto $l952; else goto $l953;
    $l952:;
    if ($tmp951 >= $tmp923) goto $l948; else goto $l927;
    $l953:;
    if ($tmp951 > $tmp923) goto $l948; else goto $l927;
    $l950:;
    int64_t $tmp955 = i919.value - $tmp922;
    if ($tmp924) goto $l956; else goto $l957;
    $l956:;
    if ($tmp955 >= -$tmp923) goto $l948; else goto $l927;
    $l957:;
    if ($tmp955 > -$tmp923) goto $l948; else goto $l927;
    $l948:;
    i919.value += $tmp923;
    goto $l925;
    $l927:;
    (($fn960) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s959);
    panda$core$Int64 $tmp961 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp961;
    panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s962, selfType890);
    panda$core$String* $tmp965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, &$s964);
    (($fn966) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp965);
    panda$collections$Array* $tmp968 = (panda$collections$Array*) malloc(40);
    $tmp968->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp968->refCount.value = 1;
    panda$collections$Array$init($tmp968);
    parameters967 = $tmp968;
    panda$core$Int64 $tmp971 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp970, ((panda$core$Int64) { 0 }), $tmp971, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp973 = $tmp970.start.value;
    panda$core$Int64 i972 = { $tmp973 };
    int64_t $tmp975 = $tmp970.end.value;
    int64_t $tmp976 = $tmp970.step.value;
    bool $tmp977 = $tmp970.inclusive.value;
    bool $tmp984 = $tmp976 > 0;
    if ($tmp984) goto $l982; else goto $l983;
    $l982:;
    if ($tmp977) goto $l985; else goto $l986;
    $l985:;
    if ($tmp973 <= $tmp975) goto $l978; else goto $l980;
    $l986:;
    if ($tmp973 < $tmp975) goto $l978; else goto $l980;
    $l983:;
    if ($tmp977) goto $l987; else goto $l988;
    $l987:;
    if ($tmp973 >= $tmp975) goto $l978; else goto $l980;
    $l988:;
    if ($tmp973 > $tmp975) goto $l978; else goto $l980;
    $l978:;
    {
        panda$core$Object* $tmp991 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i972);
        panda$core$String* $tmp992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s990, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp991)->name);
        panda$core$Object* $tmp993 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedMethodType915->subtypes, i972);
        panda$core$Object* $tmp994 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType913->subtypes, i972);
        panda$core$String* $tmp995 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp992, ((org$pandalanguage$pandac$Type*) $tmp993), ((org$pandalanguage$pandac$Type*) $tmp994), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters967, ((panda$core$Object*) $tmp995));
    }
    $l981:;
    if ($tmp984) goto $l997; else goto $l998;
    $l997:;
    int64_t $tmp999 = $tmp975 - i972.value;
    if ($tmp977) goto $l1000; else goto $l1001;
    $l1000:;
    if ($tmp999 >= $tmp976) goto $l996; else goto $l980;
    $l1001:;
    if ($tmp999 > $tmp976) goto $l996; else goto $l980;
    $l998:;
    int64_t $tmp1003 = i972.value - $tmp975;
    if ($tmp977) goto $l1004; else goto $l1005;
    $l1004:;
    if ($tmp1003 >= -$tmp976) goto $l996; else goto $l980;
    $l1005:;
    if ($tmp1003 > -$tmp976) goto $l996; else goto $l980;
    $l996:;
    i972.value += $tmp976;
    goto $l978;
    $l980:;
    panda$collections$Array* $tmp1008 = (panda$collections$Array*) malloc(40);
    $tmp1008->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1008->refCount.value = 1;
    panda$collections$Array$init($tmp1008);
    children1007 = $tmp1008;
    org$pandalanguage$pandac$IRNode* $tmp1010 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1010->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1010->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp1012 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1010, ((panda$core$Int64) { 1025 }), ((panda$core$Int64) { -1 }), $tmp1012);
    panda$collections$Array$add$panda$collections$Array$T(children1007, ((panda$core$Object*) $tmp1010));
    org$pandalanguage$pandac$IRNode* $tmp1014 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1014->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1014->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp1016 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1014, ((panda$core$Int64) { 1009 }), ((panda$core$Int64) { -1 }), $tmp1016, ((panda$collections$ListView*) children1007));
    panda$core$String* $tmp1017 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1014, p_out);
    unwrapped1013 = $tmp1017;
    org$pandalanguage$pandac$Type* $tmp1019 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1020 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1019);
    if ($tmp1020.value) {
    {
        panda$core$String* $tmp1021 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue1018 = $tmp1021;
        panda$core$String* $tmp1023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1022, returnValue1018);
        panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1023, &$s1024);
        (($fn1026) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1025);
        panda$core$String* $tmp1028 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp1029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1027, $tmp1028);
        panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1029, &$s1030);
        panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1031, returnValue1018);
        panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1032, &$s1033);
        returnValue1018 = $tmp1034;
    }
    }
    else {
    {
        returnValue1018 = &$s1035;
    }
    }
    panda$core$String* $tmp1037 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1036, $tmp1037);
    panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1038, &$s1039);
    panda$core$String* $tmp1041 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, $tmp1041);
    panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, &$s1043);
    panda$core$String* $tmp1045 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, $tmp1045);
    panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, &$s1047);
    panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, unwrapped1013);
    panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, &$s1050);
    (($fn1052) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1051);
    panda$core$Int64 $tmp1054 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1053, ((panda$core$Int64) { 0 }), $tmp1054, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1056 = $tmp1053.start.value;
    panda$core$Int64 i1055 = { $tmp1056 };
    int64_t $tmp1058 = $tmp1053.end.value;
    int64_t $tmp1059 = $tmp1053.step.value;
    bool $tmp1060 = $tmp1053.inclusive.value;
    bool $tmp1067 = $tmp1059 > 0;
    if ($tmp1067) goto $l1065; else goto $l1066;
    $l1065:;
    if ($tmp1060) goto $l1068; else goto $l1069;
    $l1068:;
    if ($tmp1056 <= $tmp1058) goto $l1061; else goto $l1063;
    $l1069:;
    if ($tmp1056 < $tmp1058) goto $l1061; else goto $l1063;
    $l1066:;
    if ($tmp1060) goto $l1070; else goto $l1071;
    $l1070:;
    if ($tmp1056 >= $tmp1058) goto $l1061; else goto $l1063;
    $l1071:;
    if ($tmp1056 > $tmp1058) goto $l1061; else goto $l1063;
    $l1061:;
    {
        panda$core$Object* $tmp1074 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType913->subtypes, i1055);
        panda$core$String* $tmp1075 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1074));
        panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1073, $tmp1075);
        panda$core$String* $tmp1078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1076, &$s1077);
        panda$core$Object* $tmp1079 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters967, i1055);
        panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1078, ((panda$core$String*) $tmp1079));
        panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1080, &$s1081);
        (($fn1083) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1082);
    }
    $l1064:;
    if ($tmp1067) goto $l1085; else goto $l1086;
    $l1085:;
    int64_t $tmp1087 = $tmp1058 - i1055.value;
    if ($tmp1060) goto $l1088; else goto $l1089;
    $l1088:;
    if ($tmp1087 >= $tmp1059) goto $l1084; else goto $l1063;
    $l1089:;
    if ($tmp1087 > $tmp1059) goto $l1084; else goto $l1063;
    $l1086:;
    int64_t $tmp1091 = i1055.value - $tmp1058;
    if ($tmp1060) goto $l1092; else goto $l1093;
    $l1092:;
    if ($tmp1091 >= -$tmp1059) goto $l1084; else goto $l1063;
    $l1093:;
    if ($tmp1091 > -$tmp1059) goto $l1084; else goto $l1063;
    $l1084:;
    i1055.value += $tmp1059;
    goto $l1061;
    $l1063:;
    (($fn1096) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1095);
    panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1097, returnValue1018);
    panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1099);
    (($fn1101) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1100);
    panda$core$Int64 $tmp1102 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1102;
    (($fn1104) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1103);
    self->varCount = oldVarCount883;
    return result884;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1105;
    panda$core$String* previous1108;
    panda$collections$Iterator* intfType$Iter1110;
    org$pandalanguage$pandac$Type* intfType1122;
    org$pandalanguage$pandac$ClassDecl* intf1127;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1129;
    panda$collections$ListView* methods1131;
    panda$core$String* name1133;
    panda$core$String* t1143;
    panda$core$MutableString* result1157;
    panda$core$String* separator1197;
    panda$collections$Iterator* m$Iter1199;
    org$pandalanguage$pandac$MethodDecl* m1211;
    panda$core$String* shim1219;
    org$pandalanguage$pandac$Type* $tmp1106 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1107 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1106);
    interfaces1105 = $tmp1107;
    previous1108 = &$s1109;
    {
        ITable* $tmp1111 = ((panda$collections$Iterable*) interfaces1105)->$class->itable;
        while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1111 = $tmp1111->next;
        }
        $fn1113 $tmp1112 = $tmp1111->methods[0];
        panda$collections$Iterator* $tmp1114 = $tmp1112(((panda$collections$Iterable*) interfaces1105));
        intfType$Iter1110 = $tmp1114;
        $l1115:;
        ITable* $tmp1117 = intfType$Iter1110->$class->itable;
        while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1117 = $tmp1117->next;
        }
        $fn1119 $tmp1118 = $tmp1117->methods[0];
        panda$core$Bit $tmp1120 = $tmp1118(intfType$Iter1110);
        panda$core$Bit $tmp1121 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1120);
        if (!$tmp1121.value) goto $l1116;
        {
            ITable* $tmp1123 = intfType$Iter1110->$class->itable;
            while ($tmp1123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1123 = $tmp1123->next;
            }
            $fn1125 $tmp1124 = $tmp1123->methods[1];
            panda$core$Object* $tmp1126 = $tmp1124(intfType$Iter1110);
            intfType1122 = ((org$pandalanguage$pandac$Type*) $tmp1126);
            org$pandalanguage$pandac$ClassDecl* $tmp1128 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1122);
            intf1127 = $tmp1128;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1130 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1127);
            intfCC1129 = $tmp1130;
            panda$collections$ListView* $tmp1132 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1122);
            methods1131 = $tmp1132;
            panda$core$String* $tmp1135 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1134, $tmp1135);
            panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1136, &$s1137);
            panda$core$String* $tmp1139 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1127)->name);
            panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1138, $tmp1139);
            panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1140, &$s1141);
            name1133 = $tmp1142;
            org$pandalanguage$pandac$Type* $tmp1145 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1146 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1145);
            panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1144, $tmp1146);
            panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1147, &$s1148);
            ITable* $tmp1150 = ((panda$collections$CollectionView*) methods1131)->$class->itable;
            while ($tmp1150->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1150 = $tmp1150->next;
            }
            $fn1152 $tmp1151 = $tmp1150->methods[0];
            panda$core$Int64 $tmp1153 = $tmp1151(((panda$collections$CollectionView*) methods1131));
            panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1149, ((panda$core$Object*) wrap_panda$core$Int64($tmp1153)));
            panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1154, &$s1155);
            t1143 = $tmp1156;
            panda$core$MutableString* $tmp1158 = (panda$core$MutableString*) malloc(40);
            $tmp1158->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1158->refCount.value = 1;
            panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1160, name1133);
            panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1161, &$s1162);
            panda$core$String* $tmp1164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, t1143);
            panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1164, &$s1165);
            org$pandalanguage$pandac$Type* $tmp1167 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1168 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1167);
            panda$core$String* $tmp1169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1166, $tmp1168);
            panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1169, &$s1170);
            panda$core$String* $tmp1173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1172, intfCC1129->type);
            panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1173, &$s1174);
            panda$core$String* $tmp1176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, intfCC1129->name);
            panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1176, &$s1177);
            org$pandalanguage$pandac$Type* $tmp1179 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1180 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1179);
            panda$core$String* $tmp1181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1178, $tmp1180);
            panda$core$String* $tmp1183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1181, &$s1182);
            panda$core$String* $tmp1184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1171, $tmp1183);
            panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1185, previous1108);
            panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1186, &$s1187);
            ITable* $tmp1189 = ((panda$collections$CollectionView*) methods1131)->$class->itable;
            while ($tmp1189->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1189 = $tmp1189->next;
            }
            $fn1191 $tmp1190 = $tmp1189->methods[0];
            panda$core$Int64 $tmp1192 = $tmp1190(((panda$collections$CollectionView*) methods1131));
            panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1188, ((panda$core$Object*) wrap_panda$core$Int64($tmp1192)));
            panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1193, &$s1194);
            panda$core$String* $tmp1196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1184, $tmp1195);
            panda$core$MutableString$init$panda$core$String($tmp1158, $tmp1196);
            result1157 = $tmp1158;
            separator1197 = &$s1198;
            {
                ITable* $tmp1200 = ((panda$collections$Iterable*) methods1131)->$class->itable;
                while ($tmp1200->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1200 = $tmp1200->next;
                }
                $fn1202 $tmp1201 = $tmp1200->methods[0];
                panda$collections$Iterator* $tmp1203 = $tmp1201(((panda$collections$Iterable*) methods1131));
                m$Iter1199 = $tmp1203;
                $l1204:;
                ITable* $tmp1206 = m$Iter1199->$class->itable;
                while ($tmp1206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1206 = $tmp1206->next;
                }
                $fn1208 $tmp1207 = $tmp1206->methods[0];
                panda$core$Bit $tmp1209 = $tmp1207(m$Iter1199);
                panda$core$Bit $tmp1210 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1209);
                if (!$tmp1210.value) goto $l1205;
                {
                    ITable* $tmp1212 = m$Iter1199->$class->itable;
                    while ($tmp1212->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1212 = $tmp1212->next;
                    }
                    $fn1214 $tmp1213 = $tmp1212->methods[1];
                    panda$core$Object* $tmp1215 = $tmp1213(m$Iter1199);
                    m1211 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1215);
                    panda$core$MutableString$append$panda$core$String(result1157, separator1197);
                    separator1197 = &$s1216;
                    panda$core$Bit $tmp1217 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1211->annotations);
                    if ($tmp1217.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1157, &$s1218);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1220 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1211, self->wrapperShims);
                        shim1219 = $tmp1220;
                        panda$core$String* $tmp1222 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1211);
                        panda$core$String* $tmp1223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1221, $tmp1222);
                        panda$core$String* $tmp1225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1223, &$s1224);
                        panda$core$String* $tmp1226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1225, shim1219);
                        panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1226, &$s1227);
                        panda$core$MutableString$append$panda$core$String(result1157, $tmp1228);
                    }
                    }
                }
                goto $l1204;
                $l1205:;
            }
            panda$core$MutableString$append$panda$core$String(result1157, &$s1229);
            (($fn1230) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result1157));
            panda$core$String* $tmp1232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1231, t1143);
            panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1232, &$s1233);
            panda$core$String* $tmp1235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1234, name1133);
            panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1235, &$s1236);
            previous1108 = $tmp1237;
        }
        goto $l1115;
        $l1116:;
    }
    return previous1108;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1240;
    panda$core$Bit $tmp1238 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1239 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1238);
    if ($tmp1239.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1243 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1242 = $tmp1243.value;
    if (!$tmp1242) goto $l1244;
    panda$core$Bit $tmp1245 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1242 = $tmp1245.value;
    $l1244:;
    panda$core$Bit $tmp1246 = { $tmp1242 };
    bool $tmp1241 = $tmp1246.value;
    if (!$tmp1241) goto $l1247;
    org$pandalanguage$pandac$ClassDecl* $tmp1248 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1249 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1248);
    $tmp1241 = $tmp1249.value;
    $l1247:;
    panda$core$Bit $tmp1250 = { $tmp1241 };
    result1240 = $tmp1250;
    panda$core$Bit $tmp1252 = panda$core$Bit$$NOT$R$panda$core$Bit(result1240);
    bool $tmp1251 = $tmp1252.value;
    if ($tmp1251) goto $l1253;
    panda$core$Bit $tmp1255 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1256 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1255);
    bool $tmp1254 = $tmp1256.value;
    if (!$tmp1254) goto $l1257;
    panda$core$Bit $tmp1259 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1258 = $tmp1259.value;
    if ($tmp1258) goto $l1260;
    panda$core$Bit $tmp1261 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1258 = $tmp1261.value;
    $l1260:;
    panda$core$Bit $tmp1262 = { $tmp1258 };
    $tmp1254 = $tmp1262.value;
    $l1257:;
    panda$core$Bit $tmp1263 = { $tmp1254 };
    $tmp1251 = $tmp1263.value;
    $l1253:;
    panda$core$Bit $tmp1264 = { $tmp1251 };
    PANDA_ASSERT($tmp1264.value);
    return result1240;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1265;
    org$pandalanguage$pandac$Type* declared1266;
    org$pandalanguage$pandac$Type* inherited1269;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1272;
    panda$core$MutableString* resultType1277;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1286;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1267 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1268 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1267);
    declared1266 = $tmp1268;
    org$pandalanguage$pandac$Type* $tmp1270 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1269 = $tmp1270;
    panda$core$Bit $tmp1271 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1266, inherited1269);
    if ($tmp1271.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1273 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1274 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1273, ((panda$io$OutputStream*) self->shims));
        shim1272 = $tmp1274;
        resultName1265 = shim1272->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1275 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1265 = $tmp1275;
    }
    }
    panda$core$Bit $tmp1276 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1276.value) {
    {
        panda$core$MutableString* $tmp1278 = (panda$core$MutableString*) malloc(40);
        $tmp1278->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1278->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1278, &$s1280);
        resultType1277 = $tmp1278;
        panda$core$Int64 $tmp1281 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inherited1269->subtypes);
        panda$core$Int64 $tmp1282 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1281, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1283 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inherited1269->subtypes, $tmp1282);
        panda$core$String* $tmp1284 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1283));
        panda$core$MutableString$append$panda$core$String(resultType1277, $tmp1284);
        panda$core$MutableString$append$panda$core$String(resultType1277, &$s1285);
        panda$core$Int64 $tmp1287 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inherited1269->subtypes);
        panda$core$Int64 $tmp1288 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1287, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1286, ((panda$core$Int64) { 0 }), $tmp1288, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp1290 = $tmp1286.start.value;
        panda$core$Int64 i1289 = { $tmp1290 };
        int64_t $tmp1292 = $tmp1286.end.value;
        int64_t $tmp1293 = $tmp1286.step.value;
        bool $tmp1294 = $tmp1286.inclusive.value;
        bool $tmp1301 = $tmp1293 > 0;
        if ($tmp1301) goto $l1299; else goto $l1300;
        $l1299:;
        if ($tmp1294) goto $l1302; else goto $l1303;
        $l1302:;
        if ($tmp1290 <= $tmp1292) goto $l1295; else goto $l1297;
        $l1303:;
        if ($tmp1290 < $tmp1292) goto $l1295; else goto $l1297;
        $l1300:;
        if ($tmp1294) goto $l1304; else goto $l1305;
        $l1304:;
        if ($tmp1290 >= $tmp1292) goto $l1295; else goto $l1297;
        $l1305:;
        if ($tmp1290 > $tmp1292) goto $l1295; else goto $l1297;
        $l1295:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1277, &$s1307);
            panda$core$Object* $tmp1308 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inherited1269->subtypes, i1289);
            panda$core$String* $tmp1309 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1308));
            panda$core$MutableString$append$panda$core$String(resultType1277, $tmp1309);
        }
        $l1298:;
        if ($tmp1301) goto $l1311; else goto $l1312;
        $l1311:;
        int64_t $tmp1313 = $tmp1292 - i1289.value;
        if ($tmp1294) goto $l1314; else goto $l1315;
        $l1314:;
        if ($tmp1313 >= $tmp1293) goto $l1310; else goto $l1297;
        $l1315:;
        if ($tmp1313 > $tmp1293) goto $l1310; else goto $l1297;
        $l1312:;
        int64_t $tmp1317 = i1289.value - $tmp1292;
        if ($tmp1294) goto $l1318; else goto $l1319;
        $l1318:;
        if ($tmp1317 >= -$tmp1293) goto $l1310; else goto $l1297;
        $l1319:;
        if ($tmp1317 > -$tmp1293) goto $l1310; else goto $l1297;
        $l1310:;
        i1289.value += $tmp1293;
        goto $l1295;
        $l1297:;
        panda$core$MutableString$append$panda$core$String(resultType1277, &$s1321);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1322 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1322->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1322->refCount.value = 1;
        panda$core$String* $tmp1324 = panda$core$MutableString$convert$R$panda$core$String(resultType1277);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1322, ((panda$core$Object*) resultName1265), ((panda$core$Object*) $tmp1324));
        return $tmp1322;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1325 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1325->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1325->refCount.value = 1;
    panda$core$String* $tmp1327 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1269);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1325, ((panda$core$Object*) resultName1265), ((panda$core$Object*) $tmp1327));
    return $tmp1325;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1330;
    panda$core$String* type1332;
    panda$collections$ListView* vtable1351;
    panda$core$String* superPtr1375;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1376;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1387;
    panda$core$MutableString* code1391;
    panda$core$String* separator1434;
    panda$collections$Iterator* m$Iter1436;
    org$pandalanguage$pandac$MethodDecl* m1448;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1455;
    panda$core$Bit $tmp1328 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1329 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1328);
    PANDA_ASSERT($tmp1329.value);
    panda$core$Object* $tmp1331 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1330 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1331);
    if (((panda$core$Bit) { result1330 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1333 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1333->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1333->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1336 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1337 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1336)->name);
            panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1335, $tmp1337);
            panda$core$String* $tmp1340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1338, &$s1339);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1333, $tmp1340, &$s1341);
            result1330 = $tmp1333;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1330));
            panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1342, result1330->name);
            panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1343, &$s1344);
            panda$core$String* $tmp1346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1345, result1330->type);
            panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1346, &$s1347);
            (($fn1349) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1348);
            panda$core$Object* $tmp1350 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1350);
        }
        }
        panda$collections$ListView* $tmp1352 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1351 = $tmp1352;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1353 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1353->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1353->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1356 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1357 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1356)->name);
        panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1355, $tmp1357);
        panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, &$s1359);
        panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1361, &$s1362);
        panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1363, &$s1364);
        ITable* $tmp1367 = ((panda$collections$CollectionView*) vtable1351)->$class->itable;
        while ($tmp1367->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1367 = $tmp1367->next;
        }
        $fn1369 $tmp1368 = $tmp1367->methods[0];
        panda$core$Int64 $tmp1370 = $tmp1368(((panda$collections$CollectionView*) vtable1351));
        panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1366, ((panda$core$Object*) wrap_panda$core$Int64($tmp1370)));
        panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1371, &$s1372);
        panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, $tmp1373);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1353, $tmp1360, $tmp1374);
        result1330 = $tmp1353;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1330));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1377 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1378 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1377);
            superCC1376 = $tmp1378;
            panda$core$String* $tmp1380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1379, superCC1376->type);
            panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1380, &$s1381);
            panda$core$String* $tmp1383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, superCC1376->name);
            panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, &$s1384);
            superPtr1375 = $tmp1385;
        }
        }
        else {
        {
            superPtr1375 = &$s1386;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1388 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1389 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1388);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1390 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1389);
        clConstant1387 = $tmp1390;
        panda$core$MutableString* $tmp1392 = (panda$core$MutableString*) malloc(40);
        $tmp1392->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1392->refCount.value = 1;
        panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1394, result1330->name);
        panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1395, &$s1396);
        panda$core$MutableString$init$panda$core$String($tmp1392, $tmp1397);
        code1391 = $tmp1392;
        panda$core$Bit $tmp1398 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1398.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1391, &$s1399);
        }
        }
        panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1400, result1330->type);
        panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, &$s1402);
        panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1404, clConstant1387->type);
        panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1405, &$s1406);
        panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1407, clConstant1387->name);
        panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1408, &$s1409);
        panda$core$String* $tmp1411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1403, $tmp1410);
        panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1412, &$s1413);
        panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1414, &$s1415);
        panda$core$String* $tmp1417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, superPtr1375);
        panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, &$s1418);
        panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1411, $tmp1419);
        panda$core$String* $tmp1422 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1421, $tmp1422);
        panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, &$s1424);
        ITable* $tmp1426 = ((panda$collections$CollectionView*) vtable1351)->$class->itable;
        while ($tmp1426->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1426 = $tmp1426->next;
        }
        $fn1428 $tmp1427 = $tmp1426->methods[0];
        panda$core$Int64 $tmp1429 = $tmp1427(((panda$collections$CollectionView*) vtable1351));
        panda$core$String* $tmp1430 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1425, ((panda$core$Object*) wrap_panda$core$Int64($tmp1429)));
        panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1430, &$s1431);
        panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, $tmp1432);
        panda$core$MutableString$append$panda$core$String(code1391, $tmp1433);
        separator1434 = &$s1435;
        {
            ITable* $tmp1437 = ((panda$collections$Iterable*) vtable1351)->$class->itable;
            while ($tmp1437->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1437 = $tmp1437->next;
            }
            $fn1439 $tmp1438 = $tmp1437->methods[0];
            panda$collections$Iterator* $tmp1440 = $tmp1438(((panda$collections$Iterable*) vtable1351));
            m$Iter1436 = $tmp1440;
            $l1441:;
            ITable* $tmp1443 = m$Iter1436->$class->itable;
            while ($tmp1443->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1443 = $tmp1443->next;
            }
            $fn1445 $tmp1444 = $tmp1443->methods[0];
            panda$core$Bit $tmp1446 = $tmp1444(m$Iter1436);
            panda$core$Bit $tmp1447 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1446);
            if (!$tmp1447.value) goto $l1442;
            {
                ITable* $tmp1449 = m$Iter1436->$class->itable;
                while ($tmp1449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1449 = $tmp1449->next;
                }
                $fn1451 $tmp1450 = $tmp1449->methods[1];
                panda$core$Object* $tmp1452 = $tmp1450(m$Iter1436);
                m1448 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1452);
                panda$core$MutableString$append$panda$core$String(code1391, separator1434);
                panda$core$Bit $tmp1453 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1448->annotations);
                if ($tmp1453.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1391, &$s1454);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1456 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1448);
                    entry1455 = $tmp1456;
                    panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1457, ((panda$core$String*) entry1455->second));
                    panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1458, &$s1459);
                    panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, ((panda$core$String*) entry1455->first));
                    panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, &$s1462);
                    panda$core$MutableString$append$panda$core$String(code1391, $tmp1463);
                }
                }
                separator1434 = &$s1464;
            }
            goto $l1441;
            $l1442:;
        }
        panda$core$MutableString$append$panda$core$String(code1391, &$s1465);
        (($fn1466) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1391));
    }
    }
    return result1330;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1467;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1473;
    panda$core$String* type1476;
    org$pandalanguage$pandac$ClassDecl* value1488;
    panda$collections$ListView* valueVTable1491;
    panda$collections$ListView* vtable1514;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1516;
    panda$core$String* superCast1519;
    panda$core$String* itable1527;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1529;
    panda$core$MutableString* code1533;
    panda$core$String* separator1580;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1582;
    org$pandalanguage$pandac$MethodDecl* m1605;
    panda$core$String* methodName1610;
    PANDA_ASSERT(p_cl->resolved.value);
    panda$core$String* $tmp1469 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1468, $tmp1469);
    panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, &$s1471);
    name1467 = $tmp1472;
    panda$core$Object* $tmp1474 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1467));
    result1473 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1474);
    if (((panda$core$Bit) { result1473 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1475 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1475);
            type1476 = &$s1477;
            panda$core$String* $tmp1479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1478, name1467);
            panda$core$String* $tmp1481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1479, &$s1480);
            panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1481, type1476);
            panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, &$s1483);
            (($fn1485) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1484);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1486 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1486->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1486->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1486, name1467, type1476);
            result1473 = $tmp1486;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1489 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1490 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1489);
            value1488 = $tmp1490;
            panda$collections$ListView* $tmp1492 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1488);
            valueVTable1491 = $tmp1492;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1493 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1493->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1493->refCount.value = 1;
            panda$core$String* $tmp1496 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1495, $tmp1496);
            panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, &$s1498);
            panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1500, &$s1501);
            panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1502, &$s1503);
            ITable* $tmp1506 = ((panda$collections$CollectionView*) valueVTable1491)->$class->itable;
            while ($tmp1506->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1506 = $tmp1506->next;
            }
            $fn1508 $tmp1507 = $tmp1506->methods[0];
            panda$core$Int64 $tmp1509 = $tmp1507(((panda$collections$CollectionView*) valueVTable1491));
            panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1505, ((panda$core$Object*) wrap_panda$core$Int64($tmp1509)));
            panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, &$s1511);
            panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1504, $tmp1512);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1493, $tmp1499, $tmp1513);
            result1473 = $tmp1493;
            panda$collections$ListView* $tmp1515 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1514 = $tmp1515;
            org$pandalanguage$pandac$ClassDecl* $tmp1517 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1518 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1517);
            superCC1516 = $tmp1518;
            panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1520, superCC1516->type);
            panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1521, &$s1522);
            panda$core$String* $tmp1524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, superCC1516->name);
            panda$core$String* $tmp1526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1524, &$s1525);
            superCast1519 = $tmp1526;
            panda$core$String* $tmp1528 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1527 = $tmp1528;
            org$pandalanguage$pandac$Type* $tmp1530 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1531 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1530);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1532 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1531);
            clConstant1529 = $tmp1532;
            panda$core$MutableString* $tmp1534 = (panda$core$MutableString*) malloc(40);
            $tmp1534->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1534->refCount.value = 1;
            panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1536, result1473->name);
            panda$core$String* $tmp1539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1537, &$s1538);
            panda$core$MutableString$init$panda$core$String($tmp1534, $tmp1539);
            code1533 = $tmp1534;
            panda$core$Bit $tmp1540 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1540.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1533, &$s1541);
            }
            }
            panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1542, result1473->type);
            panda$core$String* $tmp1545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1543, &$s1544);
            panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1546, clConstant1529->type);
            panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1547, &$s1548);
            panda$core$String* $tmp1550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1549, clConstant1529->name);
            panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1550, &$s1551);
            panda$core$String* $tmp1553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1545, $tmp1552);
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1554, &$s1555);
            panda$core$String* $tmp1558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1556, &$s1557);
            org$pandalanguage$pandac$Type* $tmp1559 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1560 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1559);
            panda$core$String* $tmp1561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1558, $tmp1560);
            panda$core$String* $tmp1563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1561, &$s1562);
            panda$core$String* $tmp1564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1563, superCast1519);
            panda$core$String* $tmp1566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1564, &$s1565);
            panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1553, $tmp1566);
            panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1568, itable1527);
            panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, &$s1570);
            ITable* $tmp1572 = ((panda$collections$CollectionView*) valueVTable1491)->$class->itable;
            while ($tmp1572->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1572 = $tmp1572->next;
            }
            $fn1574 $tmp1573 = $tmp1572->methods[0];
            panda$core$Int64 $tmp1575 = $tmp1573(((panda$collections$CollectionView*) valueVTable1491));
            panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1571, ((panda$core$Object*) wrap_panda$core$Int64($tmp1575)));
            panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1576, &$s1577);
            panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1567, $tmp1578);
            panda$core$MutableString$append$panda$core$String(code1533, $tmp1579);
            separator1580 = &$s1581;
            ITable* $tmp1583 = ((panda$collections$CollectionView*) valueVTable1491)->$class->itable;
            while ($tmp1583->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1583 = $tmp1583->next;
            }
            $fn1585 $tmp1584 = $tmp1583->methods[0];
            panda$core$Int64 $tmp1586 = $tmp1584(((panda$collections$CollectionView*) valueVTable1491));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1582, ((panda$core$Int64) { 0 }), $tmp1586, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1588 = $tmp1582.start.value;
            panda$core$Int64 i1587 = { $tmp1588 };
            int64_t $tmp1590 = $tmp1582.end.value;
            int64_t $tmp1591 = $tmp1582.step.value;
            bool $tmp1592 = $tmp1582.inclusive.value;
            bool $tmp1599 = $tmp1591 > 0;
            if ($tmp1599) goto $l1597; else goto $l1598;
            $l1597:;
            if ($tmp1592) goto $l1600; else goto $l1601;
            $l1600:;
            if ($tmp1588 <= $tmp1590) goto $l1593; else goto $l1595;
            $l1601:;
            if ($tmp1588 < $tmp1590) goto $l1593; else goto $l1595;
            $l1598:;
            if ($tmp1592) goto $l1602; else goto $l1603;
            $l1602:;
            if ($tmp1588 >= $tmp1590) goto $l1593; else goto $l1595;
            $l1603:;
            if ($tmp1588 > $tmp1590) goto $l1593; else goto $l1595;
            $l1593:;
            {
                ITable* $tmp1606 = vtable1514->$class->itable;
                while ($tmp1606->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1606 = $tmp1606->next;
                }
                $fn1608 $tmp1607 = $tmp1606->methods[0];
                panda$core$Object* $tmp1609 = $tmp1607(vtable1514, i1587);
                m1605 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1609);
                if (((panda$core$Bit) { ((panda$core$Object*) m1605->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1611 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1605, self->wrapperShims);
                    methodName1610 = $tmp1611;
                }
                }
                else {
                {
                    panda$core$String* $tmp1612 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1605);
                    methodName1610 = $tmp1612;
                    if (m1605->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1605);
                    }
                    }
                }
                }
                panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1613, separator1580);
                panda$core$String* $tmp1616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1614, &$s1615);
                panda$core$String* $tmp1617 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1605);
                panda$core$String* $tmp1618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1616, $tmp1617);
                panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1618, &$s1619);
                panda$core$String* $tmp1621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1620, methodName1610);
                panda$core$String* $tmp1623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1621, &$s1622);
                panda$core$MutableString$append$panda$core$String(code1533, $tmp1623);
                separator1580 = &$s1624;
            }
            $l1596:;
            if ($tmp1599) goto $l1626; else goto $l1627;
            $l1626:;
            int64_t $tmp1628 = $tmp1590 - i1587.value;
            if ($tmp1592) goto $l1629; else goto $l1630;
            $l1629:;
            if ($tmp1628 >= $tmp1591) goto $l1625; else goto $l1595;
            $l1630:;
            if ($tmp1628 > $tmp1591) goto $l1625; else goto $l1595;
            $l1627:;
            int64_t $tmp1632 = i1587.value - $tmp1590;
            if ($tmp1592) goto $l1633; else goto $l1634;
            $l1633:;
            if ($tmp1632 >= -$tmp1591) goto $l1625; else goto $l1595;
            $l1634:;
            if ($tmp1632 > -$tmp1591) goto $l1625; else goto $l1595;
            $l1625:;
            i1587.value += $tmp1591;
            goto $l1593;
            $l1595:;
            panda$core$MutableString$append$panda$core$String(code1533, &$s1636);
            (($fn1637) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1533));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1467), ((panda$core$Object*) result1473));
    }
    }
    return result1473;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1640 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1638, &$s1639);
    panda$core$String* $tmp1643 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1640, &$s1641, &$s1642);
    panda$core$String* $tmp1646 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1643, &$s1644, &$s1645);
    panda$core$String* $tmp1649 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1646, &$s1647, &$s1648);
    panda$core$String* $tmp1652 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1649, &$s1650, &$s1651);
    panda$core$String* $tmp1655 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1652, &$s1653, &$s1654);
    return $tmp1655;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1659;
    panda$core$String* result1697;
    panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1656.value) {
    {
        panda$core$Int64 $tmp1657 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1658 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1657, ((panda$core$Int64) { 0 }));
        if ($tmp1658.value) {
        {
            panda$core$Int64 $tmp1660 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1659, ((panda$core$Int64) { 0 }), $tmp1660, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1662 = $tmp1659.start.value;
            panda$core$Int64 i1661 = { $tmp1662 };
            int64_t $tmp1664 = $tmp1659.end.value;
            int64_t $tmp1665 = $tmp1659.step.value;
            bool $tmp1666 = $tmp1659.inclusive.value;
            bool $tmp1673 = $tmp1665 > 0;
            if ($tmp1673) goto $l1671; else goto $l1672;
            $l1671:;
            if ($tmp1666) goto $l1674; else goto $l1675;
            $l1674:;
            if ($tmp1662 <= $tmp1664) goto $l1667; else goto $l1669;
            $l1675:;
            if ($tmp1662 < $tmp1664) goto $l1667; else goto $l1669;
            $l1672:;
            if ($tmp1666) goto $l1676; else goto $l1677;
            $l1676:;
            if ($tmp1662 >= $tmp1664) goto $l1667; else goto $l1669;
            $l1677:;
            if ($tmp1662 > $tmp1664) goto $l1667; else goto $l1669;
            $l1667:;
            {
                panda$core$Object* $tmp1679 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1661);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1679)->name) }).value) {
                {
                    panda$core$Object* $tmp1680 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1681 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1680)->argRefs, i1661);
                    return ((panda$core$String*) $tmp1681);
                }
                }
            }
            $l1670:;
            if ($tmp1673) goto $l1683; else goto $l1684;
            $l1683:;
            int64_t $tmp1685 = $tmp1664 - i1661.value;
            if ($tmp1666) goto $l1686; else goto $l1687;
            $l1686:;
            if ($tmp1685 >= $tmp1665) goto $l1682; else goto $l1669;
            $l1687:;
            if ($tmp1685 > $tmp1665) goto $l1682; else goto $l1669;
            $l1684:;
            int64_t $tmp1689 = i1661.value - $tmp1664;
            if ($tmp1666) goto $l1690; else goto $l1691;
            $l1690:;
            if ($tmp1689 >= -$tmp1665) goto $l1682; else goto $l1669;
            $l1691:;
            if ($tmp1689 > -$tmp1665) goto $l1682; else goto $l1669;
            $l1682:;
            i1661.value += $tmp1665;
            goto $l1667;
            $l1669:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1693, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1694, &$s1695);
        return $tmp1696;
    }
    }
    panda$core$Object* $tmp1698 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1697 = ((panda$core$String*) $tmp1698);
    if (((panda$core$Bit) { result1697 == NULL }).value) {
    {
        panda$core$Int64 $tmp1699 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1699;
        panda$core$String* $tmp1701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1700, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1701, &$s1702);
        panda$core$String* $tmp1704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1703, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1704, &$s1705);
        result1697 = $tmp1706;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1697));
    }
    }
    panda$core$Int64 $tmp1707 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1708 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1707, ((panda$core$Int64) { 0 }));
    if ($tmp1708.value) {
    {
        panda$core$Object* $tmp1709 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1697, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1709)->varSuffix);
        result1697 = $tmp1710;
    }
    }
    return result1697;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1714;
    panda$core$String* $match$316531720;
    panda$collections$Iterator* p$Iter1797;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1809;
    panda$core$Bit $tmp1712 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1711);
    if ($tmp1712.value) {
    {
        return &$s1713;
    }
    }
    panda$core$MutableString* $tmp1715 = (panda$core$MutableString*) malloc(40);
    $tmp1715->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1715->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1715, &$s1717);
    result1714 = $tmp1715;
    panda$core$String* $tmp1718 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1714, $tmp1718);
    panda$core$MutableString$append$panda$core$String(result1714, &$s1719);
    {
        $match$316531720 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1722 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1721);
        if ($tmp1722.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1723);
        }
        }
        else {
        panda$core$Bit $tmp1725 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1724);
        if ($tmp1725.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1726);
        }
        }
        else {
        panda$core$Bit $tmp1728 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1727);
        if ($tmp1728.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1729);
        }
        }
        else {
        panda$core$Bit $tmp1731 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1730);
        if ($tmp1731.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1732);
        }
        }
        else {
        panda$core$Bit $tmp1734 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1733);
        if ($tmp1734.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1735);
        }
        }
        else {
        panda$core$Bit $tmp1737 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1736);
        if ($tmp1737.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1738);
        }
        }
        else {
        panda$core$Bit $tmp1740 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1739);
        if ($tmp1740.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1741);
        }
        }
        else {
        panda$core$Bit $tmp1743 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1742);
        if ($tmp1743.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1744);
        }
        }
        else {
        panda$core$Bit $tmp1746 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1745);
        if ($tmp1746.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1747);
        }
        }
        else {
        panda$core$Bit $tmp1749 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1748);
        if ($tmp1749.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1750);
        }
        }
        else {
        panda$core$Bit $tmp1752 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1751);
        if ($tmp1752.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1753);
        }
        }
        else {
        panda$core$Bit $tmp1755 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1754);
        if ($tmp1755.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1756);
        }
        }
        else {
        panda$core$Bit $tmp1758 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1757);
        if ($tmp1758.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1759);
        }
        }
        else {
        panda$core$Bit $tmp1761 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1760);
        if ($tmp1761.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1762);
        }
        }
        else {
        panda$core$Bit $tmp1764 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1763);
        if ($tmp1764.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1765);
        }
        }
        else {
        panda$core$Bit $tmp1767 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1766);
        if ($tmp1767.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1768);
        }
        }
        else {
        panda$core$Bit $tmp1770 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1769);
        if ($tmp1770.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1771);
        }
        }
        else {
        panda$core$Bit $tmp1773 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1772);
        if ($tmp1773.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1774);
        }
        }
        else {
        panda$core$Bit $tmp1776 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1775);
        if ($tmp1776.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1777);
        }
        }
        else {
        panda$core$Bit $tmp1779 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1778);
        if ($tmp1779.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1780);
        }
        }
        else {
        panda$core$Bit $tmp1782 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1781);
        if ($tmp1782.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1783);
        }
        }
        else {
        panda$core$Bit $tmp1785 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1784);
        if ($tmp1785.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1786);
        }
        }
        else {
        panda$core$Bit $tmp1788 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1787);
        if ($tmp1788.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1789);
        }
        }
        else {
        panda$core$Bit $tmp1791 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1790);
        if ($tmp1791.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1792);
        }
        }
        else {
        panda$core$Bit $tmp1794 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$316531720, &$s1793);
        if ($tmp1794.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1714, &$s1795);
        }
        }
        else {
        {
            panda$core$String* $tmp1796 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1714, $tmp1796);
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
        }
        }
        }
        }
        }
        }
        }
    }
    {
        ITable* $tmp1798 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1798->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1798 = $tmp1798->next;
        }
        $fn1800 $tmp1799 = $tmp1798->methods[0];
        panda$collections$Iterator* $tmp1801 = $tmp1799(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1797 = $tmp1801;
        $l1802:;
        ITable* $tmp1804 = p$Iter1797->$class->itable;
        while ($tmp1804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1804 = $tmp1804->next;
        }
        $fn1806 $tmp1805 = $tmp1804->methods[0];
        panda$core$Bit $tmp1807 = $tmp1805(p$Iter1797);
        panda$core$Bit $tmp1808 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1807);
        if (!$tmp1808.value) goto $l1803;
        {
            ITable* $tmp1810 = p$Iter1797->$class->itable;
            while ($tmp1810->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1810 = $tmp1810->next;
            }
            $fn1812 $tmp1811 = $tmp1810->methods[1];
            panda$core$Object* $tmp1813 = $tmp1811(p$Iter1797);
            p1809 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1813);
            panda$core$String* $tmp1815 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1809->type)->name);
            panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1814, $tmp1815);
            panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, &$s1817);
            panda$core$MutableString$append$panda$core$String(result1714, $tmp1818);
        }
        goto $l1802;
        $l1803:;
    }
    org$pandalanguage$pandac$Type* $tmp1819 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1820 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1819);
    if ($tmp1820.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1714, &$s1821);
        panda$core$String* $tmp1822 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1714, $tmp1822);
    }
    }
    panda$core$String* $tmp1823 = panda$core$MutableString$convert$R$panda$core$String(result1714);
    return $tmp1823;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1824 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1824.value);
    panda$core$String* $tmp1826 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1825, $tmp1826);
    panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1827, &$s1828);
    panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1831);
    return $tmp1832;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1833;
    panda$core$String* leftField1837;
    panda$core$String* start1847;
    panda$core$String* ifTrue1848;
    panda$core$String* ifFalse1850;
    panda$core$String* rightRef1863;
    panda$core$String* rightField1867;
    panda$core$String* truePred1877;
    panda$core$String* result1883;
    panda$core$String* $tmp1834 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1833 = $tmp1834;
    org$pandalanguage$pandac$Type* $tmp1835 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1836 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1835);
    if ($tmp1836.value) {
    {
        panda$core$String* $tmp1838 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1837 = $tmp1838;
        panda$core$String* $tmp1840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1839, leftField1837);
        panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1840, &$s1841);
        panda$core$String* $tmp1843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, leftRef1833);
        panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1843, &$s1844);
        (($fn1846) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1845);
        leftRef1833 = leftField1837;
    }
    }
    start1847 = self->currentBlock;
    panda$core$String* $tmp1849 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1848 = $tmp1849;
    panda$core$String* $tmp1851 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1850 = $tmp1851;
    panda$core$String* $tmp1853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1852, leftRef1833);
    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1853, &$s1854);
    panda$core$String* $tmp1856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, ifTrue1848);
    panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1856, &$s1857);
    panda$core$String* $tmp1859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, ifFalse1850);
    panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, &$s1860);
    (($fn1862) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1861);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1848, p_out);
    panda$core$String* $tmp1864 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1863 = $tmp1864;
    org$pandalanguage$pandac$Type* $tmp1865 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1866 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1865);
    if ($tmp1866.value) {
    {
        panda$core$String* $tmp1868 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1867 = $tmp1868;
        panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1869, rightField1867);
        panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1870, &$s1871);
        panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1872, rightRef1863);
        panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, &$s1874);
        (($fn1876) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1875);
        rightRef1863 = rightField1867;
    }
    }
    truePred1877 = self->currentBlock;
    panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1878, ifFalse1850);
    panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, &$s1880);
    (($fn1882) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1881);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1850, p_out);
    panda$core$String* $tmp1884 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1883 = $tmp1884;
    panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1885, result1883);
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1886, &$s1887);
    panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, start1847);
    panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1889, &$s1890);
    panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, rightRef1863);
    panda$core$String* $tmp1894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1892, &$s1893);
    panda$core$String* $tmp1895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1894, truePred1877);
    panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1895, &$s1896);
    (($fn1898) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1897);
    return result1883;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1899;
    panda$core$String* leftField1903;
    panda$core$String* start1913;
    panda$core$String* ifTrue1914;
    panda$core$String* ifFalse1916;
    panda$core$String* rightRef1929;
    panda$core$String* rightField1933;
    panda$core$String* falsePred1943;
    panda$core$String* result1949;
    panda$core$String* $tmp1900 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1899 = $tmp1900;
    org$pandalanguage$pandac$Type* $tmp1901 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1902 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1901);
    if ($tmp1902.value) {
    {
        panda$core$String* $tmp1904 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1903 = $tmp1904;
        panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1905, leftField1903);
        panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1906, &$s1907);
        panda$core$String* $tmp1909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, leftRef1899);
        panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1909, &$s1910);
        (($fn1912) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1911);
        leftRef1899 = leftField1903;
    }
    }
    start1913 = self->currentBlock;
    panda$core$String* $tmp1915 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1914 = $tmp1915;
    panda$core$String* $tmp1917 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1916 = $tmp1917;
    panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1918, leftRef1899);
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1919, &$s1920);
    panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1921, ifTrue1914);
    panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1922, &$s1923);
    panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1924, ifFalse1916);
    panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, &$s1926);
    (($fn1928) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1927);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1916, p_out);
    panda$core$String* $tmp1930 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1929 = $tmp1930;
    org$pandalanguage$pandac$Type* $tmp1931 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1932 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1931);
    if ($tmp1932.value) {
    {
        panda$core$String* $tmp1934 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1933 = $tmp1934;
        panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1935, rightField1933);
        panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, &$s1937);
        panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1938, rightRef1929);
        panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1939, &$s1940);
        (($fn1942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1941);
        rightRef1929 = rightField1933;
    }
    }
    falsePred1943 = self->currentBlock;
    panda$core$String* $tmp1945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1944, ifTrue1914);
    panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1945, &$s1946);
    (($fn1948) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1947);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1914, p_out);
    panda$core$String* $tmp1950 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1949 = $tmp1950;
    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1951, result1949);
    panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, &$s1953);
    panda$core$String* $tmp1955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, start1913);
    panda$core$String* $tmp1957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1955, &$s1956);
    panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1957, rightRef1929);
    panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1958, &$s1959);
    panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1960, falsePred1943);
    panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, &$s1962);
    (($fn1964) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1963);
    return result1949;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp1965;
    panda$core$String* result2008;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1965 = &$s1966;
                }
                break;
                case 52:
                {
                    llvmOp1965 = &$s1967;
                }
                break;
                case 53:
                {
                    llvmOp1965 = &$s1968;
                }
                break;
                case 55:
                {
                    llvmOp1965 = &$s1969;
                }
                break;
                case 56:
                {
                    llvmOp1965 = &$s1970;
                }
                break;
                case 72:
                {
                    llvmOp1965 = &$s1971;
                }
                break;
                case 1:
                {
                    llvmOp1965 = &$s1972;
                }
                break;
                case 67:
                {
                    llvmOp1965 = &$s1973;
                }
                break;
                case 69:
                {
                    llvmOp1965 = &$s1974;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1965 = &$s1975;
                }
                break;
                case 58:
                {
                    llvmOp1965 = &$s1976;
                }
                break;
                case 59:
                {
                    llvmOp1965 = &$s1977;
                }
                break;
                case 63:
                {
                    llvmOp1965 = &$s1978;
                }
                break;
                case 62:
                {
                    llvmOp1965 = &$s1979;
                }
                break;
                case 65:
                {
                    llvmOp1965 = &$s1980;
                }
                break;
                case 64:
                {
                    llvmOp1965 = &$s1981;
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        break;
        case 10122:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1965 = &$s1982;
                }
                break;
                case 52:
                {
                    llvmOp1965 = &$s1983;
                }
                break;
                case 53:
                {
                    llvmOp1965 = &$s1984;
                }
                break;
                case 55:
                {
                    llvmOp1965 = &$s1985;
                }
                break;
                case 56:
                {
                    llvmOp1965 = &$s1986;
                }
                break;
                case 72:
                {
                    llvmOp1965 = &$s1987;
                }
                break;
                case 1:
                {
                    llvmOp1965 = &$s1988;
                }
                break;
                case 67:
                {
                    llvmOp1965 = &$s1989;
                }
                break;
                case 69:
                {
                    llvmOp1965 = &$s1990;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1965 = &$s1991;
                }
                break;
                case 58:
                {
                    llvmOp1965 = &$s1992;
                }
                break;
                case 59:
                {
                    llvmOp1965 = &$s1993;
                }
                break;
                case 63:
                {
                    llvmOp1965 = &$s1994;
                }
                break;
                case 62:
                {
                    llvmOp1965 = &$s1995;
                }
                break;
                case 65:
                {
                    llvmOp1965 = &$s1996;
                }
                break;
                case 64:
                {
                    llvmOp1965 = &$s1997;
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        break;
        case 10123:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1965 = &$s1998;
                }
                break;
                case 52:
                {
                    llvmOp1965 = &$s1999;
                }
                break;
                case 53:
                {
                    llvmOp1965 = &$s2000;
                }
                break;
                case 55:
                {
                    llvmOp1965 = &$s2001;
                }
                break;
                case 58:
                {
                    llvmOp1965 = &$s2002;
                }
                break;
                case 59:
                {
                    llvmOp1965 = &$s2003;
                }
                break;
                case 63:
                {
                    llvmOp1965 = &$s2004;
                }
                break;
                case 62:
                {
                    llvmOp1965 = &$s2005;
                }
                break;
                case 65:
                {
                    llvmOp1965 = &$s2006;
                }
                break;
                case 64:
                {
                    llvmOp1965 = &$s2007;
                }
                break;
                default:
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
            }
        }
        break;
    }
    panda$core$String* $tmp2009 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2008 = $tmp2009;
    panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2010, result2008);
    panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, &$s2012);
    panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, llvmOp1965);
    panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, &$s2015);
    panda$core$String* $tmp2017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, p_leftRef);
    panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2017, &$s2018);
    panda$core$String* $tmp2020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2019, p_rightRef);
    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2020, &$s2021);
    (($fn2023) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2022);
    return result2008;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2024;
    panda$core$String* rightRef2026;
    panda$core$String* raw2028;
    panda$core$String* result2041;
    panda$core$String* $tmp2025 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef2024 = $tmp2025;
    panda$core$String* $tmp2027 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef2026 = $tmp2027;
    panda$core$String* $tmp2029 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw2028 = $tmp2029;
    panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2030, raw2028);
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2031, &$s2032);
    panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, leftRef2024);
    panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2035);
    panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, rightRef2026);
    panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2037, &$s2038);
    (($fn2040) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2039);
    panda$core$String* $tmp2042 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2041 = $tmp2042;
    panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2043, result2041);
    panda$core$String* $tmp2046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2044, &$s2045);
    panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2046, raw2028);
    panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2047, &$s2048);
    (($fn2050) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2049);
    return result2041;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2051;
    panda$core$String* rightRef2053;
    panda$core$String* raw2055;
    panda$core$String* result2068;
    panda$core$String* $tmp2052 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef2051 = $tmp2052;
    panda$core$String* $tmp2054 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef2053 = $tmp2054;
    panda$core$String* $tmp2056 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw2055 = $tmp2056;
    panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2057, raw2055);
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2058, &$s2059);
    panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, leftRef2051);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2061, &$s2062);
    panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, rightRef2053);
    panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, &$s2065);
    (($fn2067) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2066);
    panda$core$String* $tmp2069 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2068 = $tmp2069;
    panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2070, result2068);
    panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2071, &$s2072);
    panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, raw2055);
    panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, &$s2075);
    (($fn2077) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2076);
    return result2068;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2083;
    panda$core$String* rightRef2085;
    panda$core$Bit $tmp2078 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp2078.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp2079 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2079;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp2080 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2080;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp2081 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2081;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp2082 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2082;
        }
        break;
        default:
        {
            panda$core$String* $tmp2084 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef2083 = $tmp2084;
            panda$core$String* $tmp2086 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef2085 = $tmp2086;
            panda$core$Int64 $tmp2087 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp2088 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2087, leftRef2083, p_op, rightRef2085, p_out);
            return $tmp2088;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp2089.value);
    panda$core$Int64 $tmp2090 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp2091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2090, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2091.value);
    panda$core$Object* $tmp2092 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2093 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2094 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2092), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp2093), p_out);
    return $tmp2094;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s2095;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2096;
    panda$core$Int64 index2098;
    panda$collections$ListView* vtable2099;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2101;
    panda$core$String* classPtrPtr2140;
    panda$core$String* classPtr2157;
    panda$core$String* cast2167;
    panda$core$String* ptr2180;
    panda$core$String* load2204;
    panda$core$String* result2214;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2097 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc2096 = $tmp2097;
    index2098 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2100 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2099 = $tmp2100;
    ITable* $tmp2102 = ((panda$collections$CollectionView*) vtable2099)->$class->itable;
    while ($tmp2102->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2102 = $tmp2102->next;
    }
    $fn2104 $tmp2103 = $tmp2102->methods[0];
    panda$core$Int64 $tmp2105 = $tmp2103(((panda$collections$CollectionView*) vtable2099));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2101, ((panda$core$Int64) { 0 }), $tmp2105, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2107 = $tmp2101.start.value;
    panda$core$Int64 i2106 = { $tmp2107 };
    int64_t $tmp2109 = $tmp2101.end.value;
    int64_t $tmp2110 = $tmp2101.step.value;
    bool $tmp2111 = $tmp2101.inclusive.value;
    bool $tmp2118 = $tmp2110 > 0;
    if ($tmp2118) goto $l2116; else goto $l2117;
    $l2116:;
    if ($tmp2111) goto $l2119; else goto $l2120;
    $l2119:;
    if ($tmp2107 <= $tmp2109) goto $l2112; else goto $l2114;
    $l2120:;
    if ($tmp2107 < $tmp2109) goto $l2112; else goto $l2114;
    $l2117:;
    if ($tmp2111) goto $l2121; else goto $l2122;
    $l2121:;
    if ($tmp2107 >= $tmp2109) goto $l2112; else goto $l2114;
    $l2122:;
    if ($tmp2107 > $tmp2109) goto $l2112; else goto $l2114;
    $l2112:;
    {
        ITable* $tmp2124 = vtable2099->$class->itable;
        while ($tmp2124->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2124 = $tmp2124->next;
        }
        $fn2126 $tmp2125 = $tmp2124->methods[0];
        panda$core$Object* $tmp2127 = $tmp2125(vtable2099, i2106);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2127)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2098 = i2106;
            goto $l2114;
        }
        }
    }
    $l2115:;
    if ($tmp2118) goto $l2129; else goto $l2130;
    $l2129:;
    int64_t $tmp2131 = $tmp2109 - i2106.value;
    if ($tmp2111) goto $l2132; else goto $l2133;
    $l2132:;
    if ($tmp2131 >= $tmp2110) goto $l2128; else goto $l2114;
    $l2133:;
    if ($tmp2131 > $tmp2110) goto $l2128; else goto $l2114;
    $l2130:;
    int64_t $tmp2135 = i2106.value - $tmp2109;
    if ($tmp2111) goto $l2136; else goto $l2137;
    $l2136:;
    if ($tmp2135 >= -$tmp2110) goto $l2128; else goto $l2114;
    $l2137:;
    if ($tmp2135 > -$tmp2110) goto $l2128; else goto $l2114;
    $l2128:;
    i2106.value += $tmp2110;
    goto $l2112;
    $l2114:;
    panda$core$Bit $tmp2139 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2098, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2139.value);
    panda$core$String* $tmp2141 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2140 = $tmp2141;
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2142, classPtrPtr2140);
    panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, &$s2144);
    org$pandalanguage$pandac$Type* $tmp2146 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2147 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2146);
    panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, $tmp2147);
    panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2148, &$s2149);
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2151, p_target);
    panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, &$s2153);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, $tmp2154);
    (($fn2156) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2155);
    panda$core$String* $tmp2158 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2157 = $tmp2158;
    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2159, classPtr2157);
    panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, &$s2161);
    panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, classPtrPtr2140);
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, &$s2164);
    (($fn2166) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2165);
    panda$core$String* $tmp2168 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2167 = $tmp2168;
    panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2169, cast2167);
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, &$s2171);
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, classPtr2157);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
    panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, cc2096->type);
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
    (($fn2179) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2178);
    panda$core$String* $tmp2181 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2180 = $tmp2181;
    panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2182, ptr2180);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, &$s2184);
    panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, cc2096->type);
    panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, &$s2187);
    panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2188, cc2096->type);
    panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, cast2167);
    panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, &$s2193);
    panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2195, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2196, &$s2197);
    panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2198, ((panda$core$Object*) wrap_panda$core$Int64(index2098)));
    panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, &$s2200);
    panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2194, $tmp2201);
    (($fn2203) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2202);
    panda$core$String* $tmp2205 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2204 = $tmp2205;
    panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2206, load2204);
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2207, &$s2208);
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, ptr2180);
    panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2210, &$s2211);
    (($fn2213) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2212);
    panda$core$String* $tmp2215 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2214 = $tmp2215;
    panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2216, result2214);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, &$s2218);
    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, load2204);
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2220, &$s2221);
    org$pandalanguage$pandac$Type* $tmp2223 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2224 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2223);
    panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, $tmp2224);
    (($fn2226) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2225);
    return result2214;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2227;
    panda$core$String* entry2230;
    panda$core$String* classPointer2237;
    panda$core$String* loadedClass2261;
    panda$core$String* classType2263;
    panda$core$String* itableFirst2280;
    panda$core$String* next2305;
    panda$core$String* leavingEntryLabel2312;
    panda$core$String* itableNext2314;
    panda$core$String* itablePtrPtr2319;
    panda$core$String* fail2321;
    panda$core$String* itablePtr2342;
    panda$core$String* itableClassPtr2352;
    panda$core$String* itableClass2368;
    panda$core$String* test2384;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2386;
    panda$core$String* success2410;
    panda$core$Int64 index2442;
    panda$collections$ListView* vtable2443;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2445;
    panda$core$String* methodPtrPtr2492;
    panda$core$String* cast2511;
    panda$core$String* methodPtr2524;
    org$pandalanguage$pandac$Type* $tmp2228 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2229 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2228);
    methodType2227 = $tmp2229;
    panda$core$String* $tmp2231 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2230 = $tmp2231;
    panda$core$String* $tmp2233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2232, entry2230);
    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2233, &$s2234);
    (($fn2236) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2235);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, entry2230, p_out);
    panda$core$String* $tmp2238 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2237 = $tmp2238;
    panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2239, classPointer2237);
    panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, &$s2241);
    org$pandalanguage$pandac$Type* $tmp2243 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2244 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2243);
    panda$core$String* $tmp2245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2242, $tmp2244);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2245, &$s2246);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2248, p_target);
    panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2250);
    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, &$s2252);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2254);
    panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2255, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2256, &$s2257);
    panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, $tmp2258);
    (($fn2260) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2259);
    panda$core$String* $tmp2262 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2261 = $tmp2262;
    org$pandalanguage$pandac$Type* $tmp2264 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2265 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2264);
    classType2263 = $tmp2265;
    panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2266, loadedClass2261);
    panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2268);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, classType2263);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
    panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, classType2263);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
    panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, classPointer2237);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, &$s2277);
    (($fn2279) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2278);
    panda$core$String* $tmp2281 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2280 = $tmp2281;
    panda$core$String* $tmp2283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2282, itableFirst2280);
    panda$core$String* $tmp2285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2283, &$s2284);
    panda$core$String* $tmp2286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2285, classType2263);
    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2286, &$s2287);
    panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, classType2263);
    panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, &$s2290);
    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2292, loadedClass2261);
    panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
    panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, &$s2296);
    panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, &$s2298);
    panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2299, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2300, &$s2301);
    panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2291, $tmp2302);
    (($fn2304) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2303);
    panda$core$String* $tmp2306 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2305 = $tmp2306;
    panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2307, next2305);
    panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, &$s2309);
    (($fn2311) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2310);
    leavingEntryLabel2312 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, next2305, p_out);
    panda$core$Int64 $tmp2313 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2313;
    panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2315, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2316, &$s2317);
    itableNext2314 = $tmp2318;
    panda$core$String* $tmp2320 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2319 = $tmp2320;
    panda$core$String* $tmp2322 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2321 = $tmp2322;
    panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2323, itablePtrPtr2319);
    panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2324, &$s2325);
    panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2326, itableFirst2280);
    panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, &$s2328);
    panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, leavingEntryLabel2312);
    panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2330, &$s2331);
    panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2333, itableNext2314);
    panda$core$String* $tmp2336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2334, &$s2335);
    panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2336, fail2321);
    panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, &$s2338);
    panda$core$String* $tmp2340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, $tmp2339);
    (($fn2341) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2340);
    panda$core$String* $tmp2343 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2342 = $tmp2343;
    panda$core$String* $tmp2345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2344, itablePtr2342);
    panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2345, &$s2346);
    panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2347, itablePtrPtr2319);
    panda$core$String* $tmp2350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2348, &$s2349);
    (($fn2351) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2350);
    panda$core$String* $tmp2353 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2352 = $tmp2353;
    panda$core$String* $tmp2355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2354, itableClassPtr2352);
    panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2355, &$s2356);
    panda$core$String* $tmp2359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2358, itablePtr2342);
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2359, &$s2360);
    panda$core$String* $tmp2363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2362);
    panda$core$String* $tmp2365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, &$s2364);
    panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2357, $tmp2365);
    (($fn2367) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2366);
    panda$core$String* $tmp2369 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2368 = $tmp2369;
    panda$core$String* $tmp2371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2370, itableClass2368);
    panda$core$String* $tmp2373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2371, &$s2372);
    panda$core$String* $tmp2374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2373, classType2263);
    panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2374, &$s2375);
    panda$core$String* $tmp2377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2376, classType2263);
    panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2377, &$s2378);
    panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2379, itableClassPtr2352);
    panda$core$String* $tmp2382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2380, &$s2381);
    (($fn2383) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2382);
    panda$core$String* $tmp2385 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2384 = $tmp2385;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2387 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2386 = $tmp2387;
    panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2388, test2384);
    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, &$s2390);
    panda$core$String* $tmp2392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, classType2263);
    panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2392, &$s2393);
    panda$core$String* $tmp2395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2394, intfCC2386->type);
    panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2395, &$s2396);
    panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, intfCC2386->name);
    panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, &$s2399);
    panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2401, classType2263);
    panda$core$String* $tmp2404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2402, &$s2403);
    panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, itableClass2368);
    panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, &$s2406);
    panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2400, $tmp2407);
    (($fn2409) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2408);
    panda$core$String* $tmp2411 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2410 = $tmp2411;
    panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2412, test2384);
    panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2413, &$s2414);
    panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2415, success2410);
    panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, &$s2417);
    panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2418, fail2321);
    panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, &$s2420);
    (($fn2422) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2421);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, fail2321, p_out);
    panda$core$String* $tmp2424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2423, itableNext2314);
    panda$core$String* $tmp2426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2424, &$s2425);
    panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, itablePtr2342);
    panda$core$String* $tmp2429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, &$s2428);
    panda$core$String* $tmp2432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2430, &$s2431);
    panda$core$String* $tmp2434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2432, &$s2433);
    panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2429, $tmp2434);
    (($fn2436) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2435);
    panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2437, next2305);
    panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2438, &$s2439);
    (($fn2441) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2440);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, success2410, p_out);
    index2442 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2444 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2443 = $tmp2444;
    ITable* $tmp2446 = ((panda$collections$CollectionView*) vtable2443)->$class->itable;
    while ($tmp2446->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2446 = $tmp2446->next;
    }
    $fn2448 $tmp2447 = $tmp2446->methods[0];
    panda$core$Int64 $tmp2449 = $tmp2447(((panda$collections$CollectionView*) vtable2443));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2445, ((panda$core$Int64) { 0 }), $tmp2449, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2451 = $tmp2445.start.value;
    panda$core$Int64 i2450 = { $tmp2451 };
    int64_t $tmp2453 = $tmp2445.end.value;
    int64_t $tmp2454 = $tmp2445.step.value;
    bool $tmp2455 = $tmp2445.inclusive.value;
    bool $tmp2462 = $tmp2454 > 0;
    if ($tmp2462) goto $l2460; else goto $l2461;
    $l2460:;
    if ($tmp2455) goto $l2463; else goto $l2464;
    $l2463:;
    if ($tmp2451 <= $tmp2453) goto $l2456; else goto $l2458;
    $l2464:;
    if ($tmp2451 < $tmp2453) goto $l2456; else goto $l2458;
    $l2461:;
    if ($tmp2455) goto $l2465; else goto $l2466;
    $l2465:;
    if ($tmp2451 >= $tmp2453) goto $l2456; else goto $l2458;
    $l2466:;
    if ($tmp2451 > $tmp2453) goto $l2456; else goto $l2458;
    $l2456:;
    {
        ITable* $tmp2468 = vtable2443->$class->itable;
        while ($tmp2468->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2468 = $tmp2468->next;
        }
        $fn2470 $tmp2469 = $tmp2468->methods[0];
        panda$core$Object* $tmp2471 = $tmp2469(vtable2443, i2450);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2471)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2442 = i2450;
            goto $l2458;
        }
        }
    }
    $l2459:;
    if ($tmp2462) goto $l2473; else goto $l2474;
    $l2473:;
    int64_t $tmp2475 = $tmp2453 - i2450.value;
    if ($tmp2455) goto $l2476; else goto $l2477;
    $l2476:;
    if ($tmp2475 >= $tmp2454) goto $l2472; else goto $l2458;
    $l2477:;
    if ($tmp2475 > $tmp2454) goto $l2472; else goto $l2458;
    $l2474:;
    int64_t $tmp2479 = i2450.value - $tmp2453;
    if ($tmp2455) goto $l2480; else goto $l2481;
    $l2480:;
    if ($tmp2479 >= -$tmp2454) goto $l2472; else goto $l2458;
    $l2481:;
    if ($tmp2479 > -$tmp2454) goto $l2472; else goto $l2458;
    $l2472:;
    i2450.value += $tmp2454;
    goto $l2456;
    $l2458:;
    org$pandalanguage$pandac$Type* $tmp2483 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2484 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2483);
    panda$collections$ListView* $tmp2485 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2484);
    ITable* $tmp2486 = ((panda$collections$CollectionView*) $tmp2485)->$class->itable;
    while ($tmp2486->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2486 = $tmp2486->next;
    }
    $fn2488 $tmp2487 = $tmp2486->methods[0];
    panda$core$Int64 $tmp2489 = $tmp2487(((panda$collections$CollectionView*) $tmp2485));
    panda$core$Int64 $tmp2490 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2442, $tmp2489);
    index2442 = $tmp2490;
    panda$core$Bit $tmp2491 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2442, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2491.value);
    panda$core$String* $tmp2493 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2492 = $tmp2493;
    panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2494, methodPtrPtr2492);
    panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, &$s2496);
    panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2498, itablePtr2342);
    panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2499, &$s2500);
    panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2501, &$s2502);
    panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2503, &$s2504);
    panda$core$String* $tmp2506 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2505, ((panda$core$Object*) wrap_panda$core$Int64(index2442)));
    panda$core$String* $tmp2508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2506, &$s2507);
    panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2497, $tmp2508);
    (($fn2510) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2509);
    panda$core$String* $tmp2512 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2511 = $tmp2512;
    panda$core$String* $tmp2514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2513, cast2511);
    panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2514, &$s2515);
    panda$core$String* $tmp2517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2516, methodPtrPtr2492);
    panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, &$s2518);
    panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, methodType2227);
    panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2520, &$s2521);
    (($fn2523) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2522);
    panda$core$String* $tmp2525 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2524 = $tmp2525;
    panda$core$String* $tmp2527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2526, methodPtr2524);
    panda$core$String* $tmp2529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2527, &$s2528);
    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2529, methodType2227);
    panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, &$s2531);
    panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2532, methodType2227);
    panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, &$s2534);
    panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2535, cast2511);
    panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, &$s2537);
    (($fn2539) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2538);
    return methodPtr2524;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2541 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2540 = $tmp2541.value;
    if (!$tmp2540) goto $l2542;
    panda$core$Bit $tmp2543 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2540 = $tmp2543.value;
    $l2542:;
    panda$core$Bit $tmp2544 = { $tmp2540 };
    if ($tmp2544.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2545.value) {
        {
            panda$core$String* $tmp2546 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2546;
        }
        }
        else {
        {
            panda$core$String* $tmp2547 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2547;
        }
        }
    }
    }
    else {
    {
        if (p_m->owner->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
        }
        }
        panda$core$String* $tmp2548 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2548;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2549;
    panda$core$String* $match$469362550;
    panda$core$String* countStruct2555;
    panda$core$String* count2558;
    panda$core$String* size2568;
    panda$core$Int64 elementSize2570;
    panda$core$String* malloc2590;
    panda$core$String* result2604;
    panda$core$String* ptr2623;
    panda$core$String* baseType2626;
    panda$core$String* ptrType2629;
    panda$core$String* cast2632;
    panda$core$String* load2645;
    panda$core$String* ptr2665;
    panda$core$String* baseType2668;
    panda$core$String* ptrType2671;
    panda$core$String* cast2674;
    panda$core$String* indexStruct2687;
    panda$core$String* index2690;
    panda$core$String* offsetPtr2700;
    panda$core$String* load2721;
    panda$core$String* ptr2741;
    panda$core$String* ptrCast2744;
    panda$core$String* countStruct2754;
    panda$core$String* count2757;
    panda$core$String* size2767;
    panda$core$String* realloc2785;
    panda$core$String* result2804;
    panda$core$String* ptr2823;
    panda$core$String* baseType2826;
    panda$core$String* offsetStruct2830;
    panda$core$String* offset2833;
    panda$core$String* result2843;
    m2549 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$469362550 = ((org$pandalanguage$pandac$Symbol*) m2549->value)->name;
        panda$core$Bit $tmp2552 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$469362550, &$s2551);
        if ($tmp2552.value) {
        {
            panda$core$Int64 $tmp2553 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2553, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2554.value);
            panda$core$Object* $tmp2556 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2557 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2556), p_out);
            countStruct2555 = $tmp2557;
            panda$core$String* $tmp2559 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2558 = $tmp2559;
            panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2560, count2558);
            panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, &$s2562);
            panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, countStruct2555);
            panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, &$s2565);
            (($fn2567) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2566);
            panda$core$String* $tmp2569 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2568 = $tmp2569;
            org$pandalanguage$pandac$Type* $tmp2571 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2549);
            panda$core$Object* $tmp2572 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2571->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2573 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2572));
            elementSize2570 = $tmp2573;
            panda$core$Bit $tmp2574 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2570, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2574.value);
            panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2575, size2568);
            panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, &$s2577);
            panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, &$s2579);
            panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2581);
            panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, count2558);
            panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2584);
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2585, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2570)));
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2587);
            (($fn2589) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2588);
            panda$core$String* $tmp2591 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2590 = $tmp2591;
            panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2592, malloc2590);
            panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, &$s2594);
            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2595, &$s2596);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
            panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, size2568);
            panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2600, &$s2601);
            (($fn2603) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2602);
            panda$core$String* $tmp2605 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2604 = $tmp2605;
            panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2606, result2604);
            panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2607, &$s2608);
            panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, malloc2590);
            panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2610, &$s2611);
            org$pandalanguage$pandac$Type* $tmp2613 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2549);
            panda$core$String* $tmp2614 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2613);
            panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, $tmp2614);
            panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, &$s2616);
            (($fn2618) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2617);
            return result2604;
        }
        }
        else {
        panda$core$Bit $tmp2620 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$469362550, &$s2619);
        if ($tmp2620.value) {
        {
            panda$core$Int64 $tmp2621 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2621, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2622.value);
            panda$core$Object* $tmp2624 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2625 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2624), p_out);
            ptr2623 = $tmp2625;
            org$pandalanguage$pandac$Type* $tmp2627 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2549);
            panda$core$String* $tmp2628 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2627);
            baseType2626 = $tmp2628;
            panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2626, &$s2630);
            ptrType2629 = $tmp2631;
            panda$core$String* $tmp2633 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2632 = $tmp2633;
            panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2634, cast2632);
            panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2636);
            panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, ptr2623);
            panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2638, &$s2639);
            panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, ptrType2629);
            panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2641, &$s2642);
            (($fn2644) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2643);
            panda$core$String* $tmp2646 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2645 = $tmp2646;
            panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2647, load2645);
            panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, &$s2649);
            panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, baseType2626);
            panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2651, &$s2652);
            panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, ptrType2629);
            panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2655);
            panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, cast2632);
            panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
            (($fn2660) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2659);
            return load2645;
        }
        }
        else {
        panda$core$Bit $tmp2662 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$469362550, &$s2661);
        if ($tmp2662.value) {
        {
            panda$core$Int64 $tmp2663 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2663, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2664.value);
            panda$core$Object* $tmp2666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2667 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2666), p_out);
            ptr2665 = $tmp2667;
            org$pandalanguage$pandac$Type* $tmp2669 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2549);
            panda$core$String* $tmp2670 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2669);
            baseType2668 = $tmp2670;
            panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2668, &$s2672);
            ptrType2671 = $tmp2673;
            panda$core$String* $tmp2675 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2674 = $tmp2675;
            panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2676, cast2674);
            panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, &$s2678);
            panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, ptr2665);
            panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2681);
            panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, ptrType2671);
            panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, &$s2684);
            (($fn2686) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2685);
            panda$core$Object* $tmp2688 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2689 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2688), p_out);
            indexStruct2687 = $tmp2689;
            panda$core$String* $tmp2691 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2690 = $tmp2691;
            panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2692, index2690);
            panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, &$s2694);
            panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, indexStruct2687);
            panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, &$s2697);
            (($fn2699) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2698);
            panda$core$String* $tmp2701 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2700 = $tmp2701;
            panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2702, offsetPtr2700);
            panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, &$s2704);
            panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, baseType2668);
            panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2706, &$s2707);
            panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, ptrType2671);
            panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, &$s2710);
            panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, cast2674);
            panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, &$s2713);
            panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2715, index2690);
            panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
            panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, $tmp2718);
            (($fn2720) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2719);
            panda$core$String* $tmp2722 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2721 = $tmp2722;
            panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2723, load2721);
            panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, &$s2725);
            panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, baseType2668);
            panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, &$s2728);
            panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, ptrType2671);
            panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2731);
            panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, offsetPtr2700);
            panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2733, &$s2734);
            (($fn2736) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2735);
            return load2721;
        }
        }
        else {
        panda$core$Bit $tmp2738 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$469362550, &$s2737);
        if ($tmp2738.value) {
        {
            panda$core$Int64 $tmp2739 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2739, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2740.value);
            panda$core$Object* $tmp2742 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2743 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2742), p_out);
            ptr2741 = $tmp2743;
            panda$core$String* $tmp2745 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2744 = $tmp2745;
            panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2746, ptrCast2744);
            panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2747, &$s2748);
            panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, ptr2741);
            panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, &$s2751);
            (($fn2753) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2752);
            panda$core$Object* $tmp2755 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2756 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2755), p_out);
            countStruct2754 = $tmp2756;
            panda$core$String* $tmp2758 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2757 = $tmp2758;
            panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2759, count2757);
            panda$core$String* $tmp2762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, &$s2761);
            panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2762, countStruct2754);
            panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2764);
            (($fn2766) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2765);
            panda$core$String* $tmp2768 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2767 = $tmp2768;
            panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2769, size2767);
            panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, &$s2771);
            panda$core$String* $tmp2774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2772, &$s2773);
            panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2774, &$s2775);
            panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, count2757);
            panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2778);
            org$pandalanguage$pandac$Type* $tmp2780 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2549);
            panda$core$Object* $tmp2781 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2780->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2782 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2781));
            panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2779, ((panda$core$Object*) wrap_panda$core$Int64($tmp2782)));
            (($fn2784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2783);
            panda$core$String* $tmp2786 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2785 = $tmp2786;
            panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2787, realloc2785);
            panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, &$s2789);
            panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, ptrCast2744);
            panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
            panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
            panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2796);
            panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2798, size2767);
            panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, &$s2800);
            panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, $tmp2801);
            (($fn2803) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2802);
            panda$core$String* $tmp2805 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2804 = $tmp2805;
            panda$core$String* $tmp2807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2806, result2804);
            panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2808);
            panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, realloc2785);
            panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, &$s2811);
            org$pandalanguage$pandac$Type* $tmp2813 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2549);
            panda$core$String* $tmp2814 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2813);
            panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, $tmp2814);
            panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
            (($fn2818) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2817);
            return result2804;
        }
        }
        else {
        panda$core$Bit $tmp2820 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$469362550, &$s2819);
        if ($tmp2820.value) {
        {
            panda$core$Int64 $tmp2821 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2821, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2822.value);
            panda$core$Object* $tmp2824 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2825 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2824), p_out);
            ptr2823 = $tmp2825;
            panda$core$Object* $tmp2827 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2828 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp2827)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2829 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2828));
            baseType2826 = $tmp2829;
            panda$core$Object* $tmp2831 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2832 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2831), p_out);
            offsetStruct2830 = $tmp2832;
            panda$core$String* $tmp2834 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2833 = $tmp2834;
            panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2835, offset2833);
            panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2837);
            panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, offsetStruct2830);
            panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, &$s2840);
            (($fn2842) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2841);
            panda$core$String* $tmp2844 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2843 = $tmp2844;
            panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2845, result2843);
            panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2846, &$s2847);
            panda$core$String* $tmp2849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2848, baseType2826);
            panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2849, &$s2850);
            panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, ptr2823);
            panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, &$s2853);
            panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, offset2833);
            panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, &$s2856);
            (($fn2858) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2857);
            return result2843;
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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, org$pandalanguage$pandac$IRNode* p_body, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2859;
    panda$core$String* selfRef2860;
    panda$core$Int64 argStart2862;
    panda$collections$Array* args2866;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2869;
    panda$core$String* end2902;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2911;
    org$pandalanguage$pandac$MethodDecl* old2918;
    panda$core$String* phi2931;
    panda$core$String* separator2942;
    panda$collections$Iterator* ret$Iter2944;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2956;
    m2859 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentFile, ((panda$core$Object*) m2859->owner->source));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2859), ((panda$core$Object*) m2859));
    selfRef2860 = &$s2861;
    panda$core$Bit $tmp2863 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2859);
    if ($tmp2863.value) {
    {
        argStart2862 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2864 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2865 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2864), p_out);
        selfRef2860 = $tmp2865;
    }
    }
    else {
    {
        argStart2862 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2867 = (panda$collections$Array*) malloc(40);
    $tmp2867->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2867->refCount.value = 1;
    panda$collections$Array$init($tmp2867);
    args2866 = $tmp2867;
    panda$core$Int64 $tmp2870 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2869, argStart2862, $tmp2870, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2872 = $tmp2869.start.value;
    panda$core$Int64 i2871 = { $tmp2872 };
    int64_t $tmp2874 = $tmp2869.end.value;
    int64_t $tmp2875 = $tmp2869.step.value;
    bool $tmp2876 = $tmp2869.inclusive.value;
    bool $tmp2883 = $tmp2875 > 0;
    if ($tmp2883) goto $l2881; else goto $l2882;
    $l2881:;
    if ($tmp2876) goto $l2884; else goto $l2885;
    $l2884:;
    if ($tmp2872 <= $tmp2874) goto $l2877; else goto $l2879;
    $l2885:;
    if ($tmp2872 < $tmp2874) goto $l2877; else goto $l2879;
    $l2882:;
    if ($tmp2876) goto $l2886; else goto $l2887;
    $l2886:;
    if ($tmp2872 >= $tmp2874) goto $l2877; else goto $l2879;
    $l2887:;
    if ($tmp2872 > $tmp2874) goto $l2877; else goto $l2879;
    $l2877:;
    {
        panda$core$Object* $tmp2889 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2871);
        panda$core$String* $tmp2890 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2889), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2866, ((panda$core$Object*) $tmp2890));
    }
    $l2880:;
    if ($tmp2883) goto $l2892; else goto $l2893;
    $l2892:;
    int64_t $tmp2894 = $tmp2874 - i2871.value;
    if ($tmp2876) goto $l2895; else goto $l2896;
    $l2895:;
    if ($tmp2894 >= $tmp2875) goto $l2891; else goto $l2879;
    $l2896:;
    if ($tmp2894 > $tmp2875) goto $l2891; else goto $l2879;
    $l2893:;
    int64_t $tmp2898 = i2871.value - $tmp2874;
    if ($tmp2876) goto $l2899; else goto $l2900;
    $l2899:;
    if ($tmp2898 >= -$tmp2875) goto $l2891; else goto $l2879;
    $l2900:;
    if ($tmp2898 > -$tmp2875) goto $l2891; else goto $l2879;
    $l2891:;
    i2871.value += $tmp2875;
    goto $l2877;
    $l2879:;
    panda$core$String* $tmp2903 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2902 = $tmp2903;
    panda$core$Int64 $tmp2904 = panda$collections$Array$get_count$R$panda$core$Int64(args2866);
    panda$core$Int64 $tmp2905 = panda$collections$Array$get_count$R$panda$core$Int64(m2859->parameters);
    panda$core$Bit $tmp2906 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2904, $tmp2905);
    if ($tmp2906.value) {
    {
        panda$core$String* $tmp2908 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2907, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2908, &$s2909);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2910));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2912 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2912->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2912->refCount.value = 1;
    panda$core$String* $tmp2915 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2914, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2915, &$s2916);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2912, $tmp2917, selfRef2860, ((panda$collections$ListView*) args2866), end2902);
    inline2911 = $tmp2912;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2911));
    old2918 = self->currentMethod;
    self->currentMethod = m2859;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_body, p_out);
    self->currentMethod = old2918;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2919 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2920 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2919);
    if ($tmp2920.value) {
    {
        (($fn2922) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2921);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end2902, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2859));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentFile);
    panda$core$Int64 $tmp2923 = panda$collections$Array$get_count$R$panda$core$Int64(inline2911->returns);
    panda$core$Bit $tmp2924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2923, ((panda$core$Int64) { 1 }));
    if ($tmp2924.value) {
    {
        panda$core$Object* $tmp2925 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2911->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2925)->second);
    }
    }
    panda$core$Int64 $tmp2926 = panda$collections$Array$get_count$R$panda$core$Int64(inline2911->returns);
    panda$core$Bit $tmp2927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2926, ((panda$core$Int64) { 0 }));
    if ($tmp2927.value) {
    {
        (($fn2929) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2928);
        return &$s2930;
    }
    }
    panda$core$String* $tmp2932 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2931 = $tmp2932;
    panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2933, phi2931);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2934, &$s2935);
    panda$core$String* $tmp2937 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2859->returnType);
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, $tmp2937);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, &$s2939);
    (($fn2941) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2940);
    separator2942 = &$s2943;
    {
        ITable* $tmp2945 = ((panda$collections$Iterable*) inline2911->returns)->$class->itable;
        while ($tmp2945->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2945 = $tmp2945->next;
        }
        $fn2947 $tmp2946 = $tmp2945->methods[0];
        panda$collections$Iterator* $tmp2948 = $tmp2946(((panda$collections$Iterable*) inline2911->returns));
        ret$Iter2944 = $tmp2948;
        $l2949:;
        ITable* $tmp2951 = ret$Iter2944->$class->itable;
        while ($tmp2951->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2951 = $tmp2951->next;
        }
        $fn2953 $tmp2952 = $tmp2951->methods[0];
        panda$core$Bit $tmp2954 = $tmp2952(ret$Iter2944);
        panda$core$Bit $tmp2955 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2954);
        if (!$tmp2955.value) goto $l2950;
        {
            ITable* $tmp2957 = ret$Iter2944->$class->itable;
            while ($tmp2957->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2957 = $tmp2957->next;
            }
            $fn2959 $tmp2958 = $tmp2957->methods[1];
            panda$core$Object* $tmp2960 = $tmp2958(ret$Iter2944);
            ret2956 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2960);
            panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2961, separator2942);
            panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, &$s2963);
            panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2964, ((panda$core$String*) ret2956->second));
            panda$core$String* $tmp2967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, &$s2966);
            panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2967, ((panda$core$String*) ret2956->first));
            panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, &$s2969);
            (($fn2971) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2970);
            separator2942 = &$s2972;
        }
        goto $l2949;
        $l2950:;
    }
    (($fn2973) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi2931;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2975;
    panda$core$String* bit2985;
    panda$core$String* result2989;
    panda$core$String* bit3005;
    panda$core$String* result3009;
    org$pandalanguage$pandac$IRNode* block3026;
    panda$collections$Array* args3030;
    org$pandalanguage$pandac$Type* actualMethodType3034;
    panda$core$String* actualResultType3035;
    panda$core$Bit isSuper3036;
    panda$core$Int64 offset3056;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3061;
    panda$core$String* arg3081;
    panda$core$String* target3118;
    panda$core$String* methodRef3122;
    panda$core$String* result3124;
    panda$core$Bit indirect3125;
    panda$core$String* separator3151;
    panda$core$String* indirectVar3153;
    panda$collections$Iterator* arg$Iter3174;
    panda$core$String* arg3186;
    panda$core$Bit $tmp2974 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2974.value);
    m2975 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2977 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2975->owner)->name, &$s2976);
    if ($tmp2977.value) {
    {
        panda$core$String* $tmp2978 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2978;
    }
    }
    if (m2975->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2975);
    }
    }
    panda$core$Bit $tmp2980 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2975->owner)->name, &$s2979);
    if ($tmp2980.value) {
    {
        panda$core$Bit $tmp2982 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2975)->name, &$s2981);
        if ($tmp2982.value) {
        {
            panda$core$Int64 $tmp2983 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2983, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2984.value);
            panda$core$Object* $tmp2986 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2987 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2988 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2986), ((org$pandalanguage$pandac$IRNode*) $tmp2987), p_out);
            bit2985 = $tmp2988;
            panda$core$String* $tmp2990 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2989 = $tmp2990;
            panda$core$String* $tmp2992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2991, result2989);
            panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2992, &$s2993);
            panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2995, bit2985);
            panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, &$s2997);
            panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, $tmp2998);
            (($fn3000) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2999);
            return result2989;
        }
        }
        panda$core$Bit $tmp3002 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2975)->name, &$s3001);
        if ($tmp3002.value) {
        {
            panda$core$Int64 $tmp3003 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp3004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3003, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3004.value);
            panda$core$Object* $tmp3006 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3007 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3008 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3006), ((org$pandalanguage$pandac$IRNode*) $tmp3007), p_out);
            bit3005 = $tmp3008;
            panda$core$String* $tmp3010 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result3009 = $tmp3010;
            panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3011, result3009);
            panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, &$s3013);
            panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3015, bit3005);
            panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
            panda$core$String* $tmp3019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3014, $tmp3018);
            (($fn3020) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3019);
            return result3009;
        }
        }
    }
    }
    panda$core$Bit $tmp3022 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2975->annotations);
    bool $tmp3021 = $tmp3022.value;
    if (!$tmp3021) goto $l3023;
    panda$core$Object* $tmp3024 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2975));
    $tmp3021 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp3024) == NULL }).value;
    $l3023:;
    panda$core$Bit $tmp3025 = { $tmp3021 };
    if ($tmp3025.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3027 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2975);
        block3026 = $tmp3027;
        if (((panda$core$Bit) { block3026 != NULL }).value) {
        {
            panda$core$String* $tmp3028 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, block3026, p_out);
            return $tmp3028;
        }
        }
        return &$s3029;
    }
    }
    panda$collections$Array* $tmp3031 = (panda$collections$Array*) malloc(40);
    $tmp3031->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3031->refCount.value = 1;
    panda$core$Int64 $tmp3033 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp3031, $tmp3033);
    args3030 = $tmp3031;
    panda$core$Int64 $tmp3038 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp3039 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3038, ((panda$core$Int64) { 1 }));
    bool $tmp3037 = $tmp3039.value;
    if (!$tmp3037) goto $l3040;
    panda$core$Object* $tmp3041 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3041)->kind, ((panda$core$Int64) { 1024 }));
    $tmp3037 = $tmp3042.value;
    $l3040:;
    panda$core$Bit $tmp3043 = { $tmp3037 };
    isSuper3036 = $tmp3043;
    panda$core$Bit $tmp3045 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper3036);
    bool $tmp3044 = $tmp3045.value;
    if (!$tmp3044) goto $l3046;
    panda$core$Bit $tmp3047 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2975);
    $tmp3044 = $tmp3047.value;
    $l3046:;
    panda$core$Bit $tmp3048 = { $tmp3044 };
    if ($tmp3048.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3049 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2975);
        actualMethodType3034 = $tmp3049;
        panda$core$Int64 $tmp3050 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3034->subtypes);
        panda$core$Int64 $tmp3051 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3050, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3052 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3034->subtypes, $tmp3051);
        panda$core$String* $tmp3053 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3052));
        actualResultType3035 = $tmp3053;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3054 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2975);
        actualMethodType3034 = $tmp3054;
        panda$core$String* $tmp3055 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType3035 = $tmp3055;
    }
    }
    panda$core$Int64 $tmp3057 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3058 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3034->subtypes);
    panda$core$Int64 $tmp3059 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3057, $tmp3058);
    panda$core$Int64 $tmp3060 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3059, ((panda$core$Int64) { 1 }));
    offset3056 = $tmp3060;
    panda$core$Int64 $tmp3062 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3061, ((panda$core$Int64) { 0 }), $tmp3062, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3064 = $tmp3061.start.value;
    panda$core$Int64 i3063 = { $tmp3064 };
    int64_t $tmp3066 = $tmp3061.end.value;
    int64_t $tmp3067 = $tmp3061.step.value;
    bool $tmp3068 = $tmp3061.inclusive.value;
    bool $tmp3075 = $tmp3067 > 0;
    if ($tmp3075) goto $l3073; else goto $l3074;
    $l3073:;
    if ($tmp3068) goto $l3076; else goto $l3077;
    $l3076:;
    if ($tmp3064 <= $tmp3066) goto $l3069; else goto $l3071;
    $l3077:;
    if ($tmp3064 < $tmp3066) goto $l3069; else goto $l3071;
    $l3074:;
    if ($tmp3068) goto $l3078; else goto $l3079;
    $l3078:;
    if ($tmp3064 >= $tmp3066) goto $l3069; else goto $l3071;
    $l3079:;
    if ($tmp3064 > $tmp3066) goto $l3069; else goto $l3071;
    $l3069:;
    {
        panda$core$Object* $tmp3082 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3063);
        panda$core$String* $tmp3083 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3082), p_out);
        arg3081 = $tmp3083;
        panda$core$Bit $tmp3085 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3063, offset3056);
        bool $tmp3084 = $tmp3085.value;
        if (!$tmp3084) goto $l3086;
        panda$core$Int64 $tmp3087 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3063, offset3056);
        panda$core$Object* $tmp3088 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3034->subtypes, $tmp3087);
        panda$core$Object* $tmp3089 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3063);
        panda$core$Bit $tmp3090 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3088), ((org$pandalanguage$pandac$IRNode*) $tmp3089)->type);
        $tmp3084 = $tmp3090.value;
        $l3086:;
        panda$core$Bit $tmp3091 = { $tmp3084 };
        if ($tmp3091.value) {
        {
            panda$core$Int64 $tmp3092 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3063, offset3056);
            panda$core$Object* $tmp3093 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3034->subtypes, $tmp3092);
            panda$core$String* $tmp3094 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3093));
            panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, &$s3095);
            panda$core$Object* $tmp3097 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3063);
            panda$core$Int64 $tmp3098 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3063, offset3056);
            panda$core$Object* $tmp3099 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3034->subtypes, $tmp3098);
            panda$core$String* $tmp3100 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg3081, ((org$pandalanguage$pandac$IRNode*) $tmp3097)->type, ((org$pandalanguage$pandac$Type*) $tmp3099), p_out);
            panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, $tmp3100);
            arg3081 = $tmp3101;
        }
        }
        else {
        {
            panda$core$Object* $tmp3102 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3063);
            panda$core$String* $tmp3103 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3102)->type);
            panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3103, &$s3104);
            panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3105, arg3081);
            arg3081 = $tmp3106;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args3030, ((panda$core$Object*) arg3081));
    }
    $l3072:;
    if ($tmp3075) goto $l3108; else goto $l3109;
    $l3108:;
    int64_t $tmp3110 = $tmp3066 - i3063.value;
    if ($tmp3068) goto $l3111; else goto $l3112;
    $l3111:;
    if ($tmp3110 >= $tmp3067) goto $l3107; else goto $l3071;
    $l3112:;
    if ($tmp3110 > $tmp3067) goto $l3107; else goto $l3071;
    $l3109:;
    int64_t $tmp3114 = i3063.value - $tmp3066;
    if ($tmp3068) goto $l3115; else goto $l3116;
    $l3115:;
    if ($tmp3114 >= -$tmp3067) goto $l3107; else goto $l3071;
    $l3116:;
    if ($tmp3114 > -$tmp3067) goto $l3107; else goto $l3071;
    $l3107:;
    i3063.value += $tmp3067;
    goto $l3069;
    $l3071:;
    panda$core$Int64 $tmp3119 = panda$collections$Array$get_count$R$panda$core$Int64(args3030);
    panda$core$Bit $tmp3120 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3119, ((panda$core$Int64) { 0 }));
    if ($tmp3120.value) {
    {
        panda$core$Object* $tmp3121 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args3030, ((panda$core$Int64) { 0 }));
        target3118 = ((panda$core$String*) $tmp3121);
    }
    }
    else {
    {
        target3118 = NULL;
    }
    }
    panda$core$String* $tmp3123 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target3118, m2975, isSuper3036, p_out);
    methodRef3122 = $tmp3123;
    panda$core$Bit $tmp3126 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2975);
    indirect3125 = $tmp3126;
    if (indirect3125.value) {
    {
        panda$core$String* $tmp3128 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2975);
        panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3127, $tmp3128);
        panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3130);
        (($fn3132) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3131);
    }
    }
    else {
    {
        panda$core$String* $tmp3133 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3124 = $tmp3133;
        panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3134, result3124);
        panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, &$s3136);
        panda$core$String* $tmp3138 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2975);
        panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, $tmp3138);
        panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, &$s3140);
        panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, actualResultType3035);
        panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, &$s3143);
        (($fn3145) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3144);
    }
    }
    panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3146, methodRef3122);
    panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, &$s3148);
    (($fn3150) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3149);
    separator3151 = &$s3152;
    if (indirect3125.value) {
    {
        panda$core$Int64 $tmp3154 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3154;
        panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3155, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3153 = $tmp3156;
        panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3157, indirectVar3153);
        panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
        panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, actualResultType3035);
        panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, &$s3162);
        (($fn3164) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3163);
        panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3165, actualResultType3035);
        panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3166, &$s3167);
        panda$core$String* $tmp3169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, indirectVar3153);
        panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3169, &$s3170);
        (($fn3172) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3171);
        separator3151 = &$s3173;
    }
    }
    {
        ITable* $tmp3175 = ((panda$collections$Iterable*) args3030)->$class->itable;
        while ($tmp3175->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3175 = $tmp3175->next;
        }
        $fn3177 $tmp3176 = $tmp3175->methods[0];
        panda$collections$Iterator* $tmp3178 = $tmp3176(((panda$collections$Iterable*) args3030));
        arg$Iter3174 = $tmp3178;
        $l3179:;
        ITable* $tmp3181 = arg$Iter3174->$class->itable;
        while ($tmp3181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3181 = $tmp3181->next;
        }
        $fn3183 $tmp3182 = $tmp3181->methods[0];
        panda$core$Bit $tmp3184 = $tmp3182(arg$Iter3174);
        panda$core$Bit $tmp3185 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3184);
        if (!$tmp3185.value) goto $l3180;
        {
            ITable* $tmp3187 = arg$Iter3174->$class->itable;
            while ($tmp3187->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3187 = $tmp3187->next;
            }
            $fn3189 $tmp3188 = $tmp3187->methods[1];
            panda$core$Object* $tmp3190 = $tmp3188(arg$Iter3174);
            arg3186 = ((panda$core$String*) $tmp3190);
            panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3191, separator3151);
            panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, &$s3193);
            panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, arg3186);
            panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
            (($fn3198) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3197);
            separator3151 = &$s3199;
        }
        goto $l3179;
        $l3180:;
    }
    (($fn3201) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3200);
    if (indirect3125.value) {
    {
        panda$core$String* $tmp3202 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3124 = $tmp3202;
        panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3203, result3124);
        panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
        panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, actualResultType3035);
        panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, &$s3208);
        panda$core$String* $tmp3210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, actualResultType3035);
        panda$core$String* $tmp3212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3210, &$s3211);
        panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3212, indirectVar3153);
        (($fn3214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3213);
    }
    }
    panda$core$String* $tmp3215 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3216 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3215, actualResultType3035);
    if ($tmp3216.value) {
    {
        panda$core$Int64 $tmp3217 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3034->subtypes);
        panda$core$Int64 $tmp3218 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3217, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3219 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3034->subtypes, $tmp3218);
        panda$core$String* $tmp3220 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result3124, ((org$pandalanguage$pandac$Type*) $tmp3219), p_call->type, p_out);
        return $tmp3220;
    }
    }
    return result3124;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3221;
    panda$core$String* testStart3224;
    panda$core$String* isNonNull3225;
    panda$core$String* nonNullLabel3239;
    panda$core$String* endLabel3241;
    panda$core$String* unwrapped3254;
    panda$core$String* nonNullValue3257;
    panda$core$String* result3265;
    panda$core$String* mallocRef3287;
    panda$core$String* wrapperTypeName3299;
    panda$core$String* wrapperType3302;
    panda$core$String* wrapperCast3305;
    panda$core$String* classPtr3318;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3336;
    panda$core$String* refCount3351;
    panda$core$String* target3374;
    panda$core$String* result3410;
    org$pandalanguage$pandac$ClassDecl* $tmp3222 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3221 = $tmp3222;
    PANDA_ASSERT(((panda$core$Bit) { src3221 != NULL }).value);
    panda$core$Bit $tmp3223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3223.value) {
    {
        testStart3224 = self->currentBlock;
        panda$core$String* $tmp3226 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3225 = $tmp3226;
        panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3227, isNonNull3225);
        panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, &$s3229);
        panda$core$String* $tmp3231 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, $tmp3231);
        panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3232, &$s3233);
        panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3234, p_value);
        panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, &$s3236);
        (($fn3238) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3237);
        panda$core$String* $tmp3240 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3239 = $tmp3240;
        panda$core$String* $tmp3242 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3241 = $tmp3242;
        panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3243, isNonNull3225);
        panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, &$s3245);
        panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, nonNullLabel3239);
        panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, &$s3248);
        panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, endLabel3241);
        panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3250, &$s3251);
        (($fn3253) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3252);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3239, p_out);
        panda$core$Object* $tmp3255 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3256 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3255), p_out);
        unwrapped3254 = $tmp3256;
        panda$core$Object* $tmp3258 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3259 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped3254, ((org$pandalanguage$pandac$Type*) $tmp3258), p_dstType, p_out);
        nonNullValue3257 = $tmp3259;
        panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3260, endLabel3241);
        panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, &$s3262);
        (($fn3264) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3263);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3241, p_out);
        panda$core$String* $tmp3266 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3265 = $tmp3266;
        panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3267, result3265);
        panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, &$s3269);
        panda$core$String* $tmp3271 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, $tmp3271);
        panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3272, &$s3273);
        panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3274, testStart3224);
        panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, &$s3276);
        panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3278, nonNullValue3257);
        panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, &$s3280);
        panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, nonNullLabel3239);
        panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, &$s3283);
        panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3277, $tmp3284);
        (($fn3286) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3285);
        return result3265;
    }
    }
    panda$core$String* $tmp3288 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3287 = $tmp3288;
    panda$core$String* $tmp3290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3289, mallocRef3287);
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3290, &$s3291);
    org$pandalanguage$pandac$Type* $tmp3293 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3221);
    panda$core$Int64 $tmp3294 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3293);
    panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3292, ((panda$core$Object*) wrap_panda$core$Int64($tmp3294)));
    panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3296);
    (($fn3298) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3297);
    org$pandalanguage$pandac$Type* $tmp3300 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3221);
    panda$core$String* $tmp3301 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3300);
    wrapperTypeName3299 = $tmp3301;
    org$pandalanguage$pandac$Type* $tmp3303 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3221);
    panda$core$String* $tmp3304 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3303);
    wrapperType3302 = $tmp3304;
    panda$core$String* $tmp3306 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3305 = $tmp3306;
    panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3307, wrapperCast3305);
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, &$s3309);
    panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, mallocRef3287);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, &$s3312);
    panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, wrapperType3302);
    panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3314, &$s3315);
    (($fn3317) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3316);
    panda$core$String* $tmp3319 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3318 = $tmp3319;
    panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3320, classPtr3318);
    panda$core$String* $tmp3323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3321, &$s3322);
    panda$core$String* $tmp3324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, wrapperTypeName3299);
    panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3324, &$s3325);
    panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3327, wrapperType3302);
    panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, &$s3329);
    panda$core$String* $tmp3331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, wrapperCast3305);
    panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3331, &$s3332);
    panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, $tmp3333);
    (($fn3335) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3334);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3337 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3221);
    cc3336 = $tmp3337;
    panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3338, cc3336->type);
    panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3339, &$s3340);
    panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, cc3336->name);
    panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, &$s3343);
    panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3345, classPtr3318);
    panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, &$s3347);
    panda$core$String* $tmp3349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, $tmp3348);
    (($fn3350) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3349);
    panda$core$String* $tmp3352 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3351 = $tmp3352;
    panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3353, refCount3351);
    panda$core$String* $tmp3356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3354, &$s3355);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3356, wrapperTypeName3299);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, &$s3358);
    panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3360, wrapperType3302);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, &$s3362);
    panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, wrapperCast3305);
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, &$s3365);
    panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, $tmp3366);
    (($fn3368) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3367);
    panda$core$String* $tmp3370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3369, refCount3351);
    panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3370, &$s3371);
    (($fn3373) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3372);
    panda$core$String* $tmp3375 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3374 = $tmp3375;
    panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3376, target3374);
    panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3377, &$s3378);
    panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3379, wrapperTypeName3299);
    panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, &$s3381);
    panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3383, wrapperType3302);
    panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, &$s3385);
    panda$core$String* $tmp3387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, wrapperCast3305);
    panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3387, &$s3388);
    panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, $tmp3389);
    (($fn3391) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3390);
    panda$core$String* $tmp3393 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3392, $tmp3393);
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
    panda$core$String* $tmp3397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, p_value);
    panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3397, &$s3398);
    panda$core$String* $tmp3400 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, $tmp3400);
    panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, &$s3402);
    panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, target3374);
    panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3404, &$s3405);
    (($fn3407) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3406);
    panda$core$String* $tmp3408 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3409 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3302, $tmp3408);
    if ($tmp3409.value) {
    {
        panda$core$String* $tmp3411 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3410 = $tmp3411;
        panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3412, result3410);
        panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3414);
        panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, wrapperType3302);
        panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, &$s3417);
        panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3418, wrapperCast3305);
        panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3419, &$s3420);
        panda$core$String* $tmp3422 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3421, $tmp3422);
        panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, &$s3424);
        (($fn3426) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3425);
        return result3410;
    }
    }
    return wrapperCast3305;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3430;
    panda$core$String* t3431;
    org$pandalanguage$pandac$ClassDecl* cl3435;
    panda$core$String* base3439;
    panda$collections$ListView* fields3442;
    panda$core$Int64$nullable index3444;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3445;
    panda$core$String* result3483;
    panda$core$String* ptr3503;
    panda$core$String* result3512;
    panda$core$Bit $tmp3427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3427.value);
    panda$core$Int64 $tmp3428 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3428, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3429.value);
    field3430 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3432 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3430->type);
    t3431 = $tmp3432;
    panda$core$Bit $tmp3433 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3430->annotations);
    if ($tmp3433.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3430->value != NULL }).value);
        panda$core$String* $tmp3434 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field3430->value, p_out);
        return $tmp3434;
    }
    }
    panda$core$Object* $tmp3436 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3437 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3436)->type);
    cl3435 = $tmp3437;
    PANDA_ASSERT(((panda$core$Bit) { cl3435 != NULL }).value);
    panda$core$Bit $tmp3438 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3435);
    if ($tmp3438.value) {
    {
        panda$core$Object* $tmp3440 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3441 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3440), p_out);
        base3439 = $tmp3441;
        panda$collections$ListView* $tmp3443 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3435);
        fields3442 = $tmp3443;
        index3444 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3446 = ((panda$collections$CollectionView*) fields3442)->$class->itable;
        while ($tmp3446->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3446 = $tmp3446->next;
        }
        $fn3448 $tmp3447 = $tmp3446->methods[0];
        panda$core$Int64 $tmp3449 = $tmp3447(((panda$collections$CollectionView*) fields3442));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3445, ((panda$core$Int64) { 0 }), $tmp3449, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp3451 = $tmp3445.start.value;
        panda$core$Int64 i3450 = { $tmp3451 };
        int64_t $tmp3453 = $tmp3445.end.value;
        int64_t $tmp3454 = $tmp3445.step.value;
        bool $tmp3455 = $tmp3445.inclusive.value;
        bool $tmp3462 = $tmp3454 > 0;
        if ($tmp3462) goto $l3460; else goto $l3461;
        $l3460:;
        if ($tmp3455) goto $l3463; else goto $l3464;
        $l3463:;
        if ($tmp3451 <= $tmp3453) goto $l3456; else goto $l3458;
        $l3464:;
        if ($tmp3451 < $tmp3453) goto $l3456; else goto $l3458;
        $l3461:;
        if ($tmp3455) goto $l3465; else goto $l3466;
        $l3465:;
        if ($tmp3451 >= $tmp3453) goto $l3456; else goto $l3458;
        $l3466:;
        if ($tmp3451 > $tmp3453) goto $l3456; else goto $l3458;
        $l3456:;
        {
            ITable* $tmp3468 = fields3442->$class->itable;
            while ($tmp3468->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3468 = $tmp3468->next;
            }
            $fn3470 $tmp3469 = $tmp3468->methods[0];
            panda$core$Object* $tmp3471 = $tmp3469(fields3442, i3450);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3471)) == ((panda$core$Object*) field3430) }).value) {
            {
                index3444 = ((panda$core$Int64$nullable) { i3450, true });
                goto $l3458;
            }
            }
        }
        $l3459:;
        if ($tmp3462) goto $l3473; else goto $l3474;
        $l3473:;
        int64_t $tmp3475 = $tmp3453 - i3450.value;
        if ($tmp3455) goto $l3476; else goto $l3477;
        $l3476:;
        if ($tmp3475 >= $tmp3454) goto $l3472; else goto $l3458;
        $l3477:;
        if ($tmp3475 > $tmp3454) goto $l3472; else goto $l3458;
        $l3474:;
        int64_t $tmp3479 = i3450.value - $tmp3453;
        if ($tmp3455) goto $l3480; else goto $l3481;
        $l3480:;
        if ($tmp3479 >= -$tmp3454) goto $l3472; else goto $l3458;
        $l3481:;
        if ($tmp3479 > -$tmp3454) goto $l3472; else goto $l3458;
        $l3472:;
        i3450.value += $tmp3454;
        goto $l3456;
        $l3458:;
        PANDA_ASSERT(((panda$core$Bit) { index3444.nonnull }).value);
        panda$core$String* $tmp3484 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3483 = $tmp3484;
        panda$core$String* $tmp3486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3485, result3483);
        panda$core$String* $tmp3488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3486, &$s3487);
        panda$core$Object* $tmp3489 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3490 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3489)->type);
        panda$core$String* $tmp3491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3488, $tmp3490);
        panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3491, &$s3492);
        panda$core$String* $tmp3494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3493, base3439);
        panda$core$String* $tmp3496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3494, &$s3495);
        panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3497, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3444.value))));
        panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3498, &$s3499);
        panda$core$String* $tmp3501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3496, $tmp3500);
        (($fn3502) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3501);
        return result3483;
    }
    }
    panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3504, t3431);
    panda$core$String* $tmp3507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3505, &$s3506);
    panda$core$String* $tmp3508 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3507, $tmp3508);
    panda$core$String* $tmp3511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3509, &$s3510);
    ptr3503 = $tmp3511;
    panda$core$String* $tmp3513 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3512 = $tmp3513;
    panda$core$String* $tmp3515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3514, result3512);
    panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3515, &$s3516);
    panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3517, t3431);
    panda$core$String* $tmp3520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3518, &$s3519);
    panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3520, ptr3503);
    panda$core$String* $tmp3523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3521, &$s3522);
    (($fn3524) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3523);
    return result3512;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3525;
    panda$core$String* testStart3528;
    panda$core$String* isNonNull3529;
    panda$core$String* nonNullLabel3543;
    panda$core$String* endLabel3545;
    panda$core$String* wrapped3558;
    panda$core$String* nonNullValue3561;
    panda$core$String* result3569;
    panda$core$String* targetType3598;
    panda$core$String* wrapperTypeName3600;
    panda$core$String* wrapperType3602;
    panda$core$String* srcCast3604;
    panda$core$String* load3621;
    panda$core$String* result3637;
    org$pandalanguage$pandac$ClassDecl* $tmp3526 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3525 = $tmp3526;
    PANDA_ASSERT(((panda$core$Bit) { target3525 != NULL }).value);
    panda$core$Bit $tmp3527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3527.value) {
    {
        testStart3528 = self->currentBlock;
        panda$core$String* $tmp3530 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3529 = $tmp3530;
        panda$core$String* $tmp3532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3531, isNonNull3529);
        panda$core$String* $tmp3534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3532, &$s3533);
        panda$core$String* $tmp3535 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3534, $tmp3535);
        panda$core$String* $tmp3538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3536, &$s3537);
        panda$core$String* $tmp3539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3538, p_value);
        panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3539, &$s3540);
        (($fn3542) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3541);
        panda$core$String* $tmp3544 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3543 = $tmp3544;
        panda$core$String* $tmp3546 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3545 = $tmp3546;
        panda$core$String* $tmp3548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3547, isNonNull3529);
        panda$core$String* $tmp3550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3548, &$s3549);
        panda$core$String* $tmp3551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3550, nonNullLabel3543);
        panda$core$String* $tmp3553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3551, &$s3552);
        panda$core$String* $tmp3554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3553, endLabel3545);
        panda$core$String* $tmp3556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3554, &$s3555);
        (($fn3557) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3556);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3543, p_out);
        panda$core$Object* $tmp3559 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3560 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3559), p_out);
        wrapped3558 = $tmp3560;
        panda$core$Object* $tmp3562 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3563 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3558, ((org$pandalanguage$pandac$Type*) $tmp3562), p_dstType, p_out);
        nonNullValue3561 = $tmp3563;
        panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3564, endLabel3545);
        panda$core$String* $tmp3567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3565, &$s3566);
        (($fn3568) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3567);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3545, p_out);
        panda$core$String* $tmp3570 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3569 = $tmp3570;
        panda$core$String* $tmp3572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3571, result3569);
        panda$core$String* $tmp3574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3572, &$s3573);
        panda$core$String* $tmp3575 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3574, $tmp3575);
        panda$core$String* $tmp3578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3576, &$s3577);
        panda$core$Object* $tmp3580 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3581 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3580));
        panda$core$String* $tmp3582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3579, $tmp3581);
        panda$core$String* $tmp3584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3582, &$s3583);
        panda$core$String* $tmp3585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3578, $tmp3584);
        panda$core$String* $tmp3587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3586, testStart3528);
        panda$core$String* $tmp3589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3587, &$s3588);
        panda$core$String* $tmp3590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3589, nonNullValue3561);
        panda$core$String* $tmp3592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3590, &$s3591);
        panda$core$String* $tmp3593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3592, nonNullLabel3543);
        panda$core$String* $tmp3595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3593, &$s3594);
        panda$core$String* $tmp3596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3585, $tmp3595);
        (($fn3597) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3596);
        return result3569;
    }
    }
    panda$core$String* $tmp3599 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3598 = $tmp3599;
    panda$core$String* $tmp3601 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3600 = $tmp3601;
    panda$core$String* $tmp3603 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3602 = $tmp3603;
    panda$core$String* $tmp3605 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3604 = $tmp3605;
    panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3606, srcCast3604);
    panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3607, &$s3608);
    panda$core$String* $tmp3610 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, $tmp3610);
    panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, &$s3612);
    panda$core$String* $tmp3614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, p_value);
    panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3614, &$s3615);
    panda$core$String* $tmp3617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3616, wrapperType3602);
    panda$core$String* $tmp3619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3617, &$s3618);
    (($fn3620) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3619);
    panda$core$String* $tmp3622 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3621 = $tmp3622;
    panda$core$String* $tmp3624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3623, load3621);
    panda$core$String* $tmp3626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3624, &$s3625);
    panda$core$String* $tmp3627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3626, wrapperTypeName3600);
    panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3627, &$s3628);
    panda$core$String* $tmp3630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3629, wrapperType3602);
    panda$core$String* $tmp3632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3630, &$s3631);
    panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3632, srcCast3604);
    panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, &$s3634);
    (($fn3636) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3635);
    panda$core$String* $tmp3638 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3637 = $tmp3638;
    panda$core$String* $tmp3640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3639, result3637);
    panda$core$String* $tmp3642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3640, &$s3641);
    panda$core$String* $tmp3643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3642, wrapperTypeName3600);
    panda$core$String* $tmp3645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3643, &$s3644);
    panda$core$String* $tmp3646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3645, load3621);
    panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3646, &$s3647);
    panda$core$String* $tmp3649 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3648, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3649, &$s3650);
    (($fn3652) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3651);
    return result3637;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType3653;
    panda$core$String* result3655;
    panda$core$String* $tmp3654 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3653 = $tmp3654;
    panda$core$String* $tmp3656 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3655 = $tmp3656;
    panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3657, result3655);
    panda$core$String* $tmp3660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3658, &$s3659);
    panda$core$String* $tmp3661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3660, nullableType3653);
    panda$core$String* $tmp3663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3661, &$s3662);
    panda$core$String* $tmp3665 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3664, $tmp3665);
    panda$core$String* $tmp3668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3666, &$s3667);
    panda$core$String* $tmp3669 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3668, $tmp3669);
    panda$core$String* $tmp3672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3670, &$s3671);
    panda$core$String* $tmp3673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3672, p_value);
    panda$core$String* $tmp3675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3673, &$s3674);
    panda$core$String* $tmp3676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3663, $tmp3675);
    (($fn3677) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3676);
    return result3655;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3678;
    panda$core$String* $tmp3679 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3678 = $tmp3679;
    panda$core$String* $tmp3681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3680, result3678);
    panda$core$String* $tmp3683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3681, &$s3682);
    panda$core$String* $tmp3684 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3683, $tmp3684);
    panda$core$String* $tmp3687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3685, &$s3686);
    panda$core$String* $tmp3688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3687, p_value);
    panda$core$String* $tmp3690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3688, &$s3689);
    (($fn3691) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3690);
    return result3678;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3692;
    panda$core$Int64 size13695;
    panda$core$Int64 size23697;
    org$pandalanguage$pandac$ClassDecl* srcClass3705;
    org$pandalanguage$pandac$ClassDecl* targetClass3707;
    panda$core$String* srcType3746;
    panda$core$String* dstType3748;
    panda$core$String* result3751;
    panda$core$Bit $tmp3693 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3693.value) {
    {
        panda$core$Bit $tmp3694 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3694.value);
        panda$core$Int64 $tmp3696 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13695 = $tmp3696;
        panda$core$Int64 $tmp3698 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23697 = $tmp3698;
        panda$core$Bit $tmp3699 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13695, size23697);
        if ($tmp3699.value) {
        {
            op3692 = &$s3700;
        }
        }
        else {
        panda$core$Bit $tmp3701 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13695, size23697);
        if ($tmp3701.value) {
        {
            panda$core$Bit $tmp3702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3702.value) {
            {
                op3692 = &$s3703;
            }
            }
            else {
            {
                op3692 = &$s3704;
            }
            }
        }
        }
        else {
        {
            return p_value;
        }
        }
        }
    }
    }
    else {
    {
        org$pandalanguage$pandac$ClassDecl* $tmp3706 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3705 = $tmp3706;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3705 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3708 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3707 = $tmp3708;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3707 != NULL }).value);
        panda$core$Bit $tmp3710 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3705);
        bool $tmp3709 = $tmp3710.value;
        if (!$tmp3709) goto $l3711;
        panda$core$Bit $tmp3712 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3707);
        panda$core$Bit $tmp3713 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3712);
        $tmp3709 = $tmp3713.value;
        $l3711:;
        panda$core$Bit $tmp3714 = { $tmp3709 };
        if ($tmp3714.value) {
        {
            panda$core$String* $tmp3715 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3715;
        }
        }
        else {
        panda$core$Bit $tmp3717 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3705);
        panda$core$Bit $tmp3718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3717);
        bool $tmp3716 = $tmp3718.value;
        if (!$tmp3716) goto $l3719;
        panda$core$Bit $tmp3720 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3707);
        $tmp3716 = $tmp3720.value;
        $l3719:;
        panda$core$Bit $tmp3721 = { $tmp3716 };
        if ($tmp3721.value) {
        {
            panda$core$String* $tmp3722 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3722;
        }
        }
        else {
        panda$core$Bit $tmp3725 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3705);
        bool $tmp3724 = $tmp3725.value;
        if (!$tmp3724) goto $l3726;
        panda$core$Bit $tmp3727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3724 = $tmp3727.value;
        $l3726:;
        panda$core$Bit $tmp3728 = { $tmp3724 };
        bool $tmp3723 = $tmp3728.value;
        if (!$tmp3723) goto $l3729;
        panda$core$Object* $tmp3730 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3731 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3730), p_src);
        $tmp3723 = $tmp3731.value;
        $l3729:;
        panda$core$Bit $tmp3732 = { $tmp3723 };
        if ($tmp3732.value) {
        {
            panda$core$String* $tmp3733 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3733;
        }
        }
        else {
        panda$core$Bit $tmp3736 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3707);
        bool $tmp3735 = $tmp3736.value;
        if (!$tmp3735) goto $l3737;
        panda$core$Bit $tmp3738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3735 = $tmp3738.value;
        $l3737:;
        panda$core$Bit $tmp3739 = { $tmp3735 };
        bool $tmp3734 = $tmp3739.value;
        if (!$tmp3734) goto $l3740;
        panda$core$Object* $tmp3741 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3742 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3741), p_target);
        $tmp3734 = $tmp3742.value;
        $l3740:;
        panda$core$Bit $tmp3743 = { $tmp3734 };
        if ($tmp3743.value) {
        {
            panda$core$String* $tmp3744 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3744;
        }
        }
        }
        }
        }
        op3692 = &$s3745;
    }
    }
    panda$core$String* $tmp3747 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3746 = $tmp3747;
    panda$core$String* $tmp3749 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3748 = $tmp3749;
    panda$core$Bit $tmp3750 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3746, dstType3748);
    if ($tmp3750.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3752 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3751 = $tmp3752;
    panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3753, result3751);
    panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3754, &$s3755);
    panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3756, op3692);
    panda$core$String* $tmp3759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3757, &$s3758);
    panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3759, srcType3746);
    panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3760, &$s3761);
    panda$core$String* $tmp3763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3762, p_value);
    panda$core$String* $tmp3765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3763, &$s3764);
    panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3765, dstType3748);
    panda$core$String* $tmp3768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3766, &$s3767);
    (($fn3769) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3768);
    return result3751;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3773;
    panda$core$Bit $tmp3770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3770.value);
    panda$core$Int64 $tmp3771 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3771, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3772.value);
    panda$core$Object* $tmp3774 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3775 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3774), p_out);
    base3773 = $tmp3775;
    panda$core$Object* $tmp3776 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3777 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3773, ((org$pandalanguage$pandac$IRNode*) $tmp3776)->type, p_cast->type, p_out);
    return $tmp3777;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3781;
    panda$core$String* t3783;
    panda$core$String* value3791;
    panda$core$String* result3802;
    org$pandalanguage$pandac$FieldDecl* lastField3804;
    panda$core$String* value3834;
    panda$core$String* result3845;
    org$pandalanguage$pandac$FieldDecl* lastField3847;
    panda$core$String* alloca3872;
    panda$core$String* result3893;
    panda$core$String* callRef3909;
    panda$core$String* result3920;
    panda$core$String* classPtr3934;
    panda$core$String* className3936;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3962;
    panda$core$Bit $tmp3778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3778.value);
    panda$core$Int64 $tmp3779 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3780 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3779, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3780.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3782 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3781 = $tmp3782;
    PANDA_ASSERT(((panda$core$Bit) { cl3781 != NULL }).value);
    panda$core$String* $tmp3784 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3783 = $tmp3784;
    panda$core$Bit $tmp3785 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3785.value) {
    {
        panda$core$Int64 $tmp3786 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3786, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3787.value);
        panda$core$Object* $tmp3788 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3789 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3788)->children);
        panda$core$Bit $tmp3790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3789, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3790.value);
        panda$core$Object* $tmp3792 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3792)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3794 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3793), p_out);
        value3791 = $tmp3794;
        panda$core$Object* $tmp3795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3795)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3796)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3797.value) {
        {
            panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3798, value3791);
            panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, &$s3800);
            return $tmp3801;
        }
        }
        panda$core$String* $tmp3803 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3802 = $tmp3803;
        panda$core$Int64 $tmp3805 = panda$collections$Array$get_count$R$panda$core$Int64(cl3781->fields);
        panda$core$Int64 $tmp3806 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3805, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3807 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3781->fields, $tmp3806);
        lastField3804 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3807);
        panda$core$Bit $tmp3808 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3804->annotations);
        panda$core$Bit $tmp3809 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3808);
        PANDA_ASSERT($tmp3809.value);
        panda$core$String* $tmp3811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3810, result3802);
        panda$core$String* $tmp3813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3811, &$s3812);
        panda$core$String* $tmp3814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3813, t3783);
        panda$core$String* $tmp3816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3814, &$s3815);
        panda$core$String* $tmp3817 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3804->type);
        panda$core$String* $tmp3818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3816, $tmp3817);
        panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3818, &$s3819);
        panda$core$String* $tmp3822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3821, value3791);
        panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3822, &$s3823);
        panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3820, $tmp3824);
        (($fn3826) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3825);
        return result3802;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3827 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3828 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3827);
    if ($tmp3828.value) {
    {
        panda$core$Int64 $tmp3829 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3829, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3830.value);
        panda$core$Object* $tmp3831 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3832 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3831)->children);
        panda$core$Bit $tmp3833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3832, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3833.value);
        panda$core$Object* $tmp3835 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3836 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3835)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3837 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3836), p_out);
        value3834 = $tmp3837;
        panda$core$Object* $tmp3838 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3839 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3838)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3839)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3840.value) {
        {
            panda$core$String* $tmp3842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3841, value3834);
            panda$core$String* $tmp3844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3842, &$s3843);
            return $tmp3844;
        }
        }
        panda$core$String* $tmp3846 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3845 = $tmp3846;
        panda$core$Int64 $tmp3848 = panda$collections$Array$get_count$R$panda$core$Int64(cl3781->fields);
        panda$core$Int64 $tmp3849 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3848, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3850 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3781->fields, $tmp3849);
        lastField3847 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3850);
        panda$core$Bit $tmp3851 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3847->annotations);
        panda$core$Bit $tmp3852 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3851);
        PANDA_ASSERT($tmp3852.value);
        panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3853, result3845);
        panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3854, &$s3855);
        panda$core$String* $tmp3857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3856, t3783);
        panda$core$String* $tmp3859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3857, &$s3858);
        panda$core$String* $tmp3860 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3847->type);
        panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3859, $tmp3860);
        panda$core$String* $tmp3863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3861, &$s3862);
        panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3864, value3834);
        panda$core$String* $tmp3867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3865, &$s3866);
        panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3863, $tmp3867);
        (($fn3869) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3868);
        return result3845;
    }
    }
    panda$core$Bit $tmp3870 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3781);
    if ($tmp3870.value) {
    {
        panda$core$Int64 $tmp3871 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3871;
        panda$core$String* $tmp3874 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3873, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3874, &$s3875);
        alloca3872 = $tmp3876;
        panda$core$String* $tmp3878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3877, alloca3872);
        panda$core$String* $tmp3880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3878, &$s3879);
        panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3880, t3783);
        panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, &$s3882);
        (($fn3884) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3883);
        panda$core$Object* $tmp3885 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3886, t3783);
        panda$core$String* $tmp3889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3887, &$s3888);
        panda$core$String* $tmp3890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3889, alloca3872);
        panda$core$String* $tmp3892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3890, &$s3891);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3885), $tmp3892, p_out);
        panda$core$String* $tmp3894 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3893 = $tmp3894;
        panda$core$String* $tmp3896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3895, result3893);
        panda$core$String* $tmp3898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, &$s3897);
        panda$core$String* $tmp3899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3898, t3783);
        panda$core$String* $tmp3901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3899, &$s3900);
        panda$core$String* $tmp3902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3901, t3783);
        panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3902, &$s3903);
        panda$core$String* $tmp3905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, alloca3872);
        panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3905, &$s3906);
        (($fn3908) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3907);
        return result3893;
    }
    }
    panda$core$String* $tmp3910 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3909 = $tmp3910;
    panda$core$String* $tmp3912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3911, callRef3909);
    panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3912, &$s3913);
    panda$core$Int64 $tmp3915 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3914, ((panda$core$Object*) wrap_panda$core$Int64($tmp3915)));
    panda$core$String* $tmp3918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3916, &$s3917);
    (($fn3919) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3918);
    panda$core$String* $tmp3921 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3920 = $tmp3921;
    panda$core$String* $tmp3923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3922, result3920);
    panda$core$String* $tmp3925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3923, &$s3924);
    panda$core$String* $tmp3926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3925, callRef3909);
    panda$core$String* $tmp3928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3926, &$s3927);
    panda$core$String* $tmp3929 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3928, $tmp3929);
    panda$core$String* $tmp3932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3930, &$s3931);
    (($fn3933) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3932);
    panda$core$String* $tmp3935 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3934 = $tmp3935;
    panda$core$Bit $tmp3938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3937 = $tmp3938.value;
    if (!$tmp3937) goto $l3939;
    panda$core$Bit $tmp3940 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3781);
    panda$core$Bit $tmp3941 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3940);
    $tmp3937 = $tmp3941.value;
    $l3939:;
    panda$core$Bit $tmp3942 = { $tmp3937 };
    if ($tmp3942.value) {
    {
        panda$core$Object* $tmp3943 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3944 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3943));
        className3936 = $tmp3944;
    }
    }
    else {
    {
        panda$core$String* $tmp3945 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3936 = $tmp3945;
    }
    }
    panda$core$String* $tmp3947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3946, classPtr3934);
    panda$core$String* $tmp3949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3947, &$s3948);
    panda$core$String* $tmp3950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3949, className3936);
    panda$core$String* $tmp3952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3950, &$s3951);
    panda$core$String* $tmp3953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3952, t3783);
    panda$core$String* $tmp3955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3953, &$s3954);
    panda$core$String* $tmp3956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3955, result3920);
    panda$core$String* $tmp3958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3956, &$s3957);
    panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3958, &$s3959);
    (($fn3961) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3960);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3963 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3781);
    cc3962 = $tmp3963;
    panda$core$String* $tmp3965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3964, cc3962->type);
    panda$core$String* $tmp3967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3965, &$s3966);
    panda$core$String* $tmp3968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3967, cc3962->name);
    panda$core$String* $tmp3970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3968, &$s3969);
    panda$core$String* $tmp3972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3971, classPtr3934);
    panda$core$String* $tmp3974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3972, &$s3973);
    panda$core$String* $tmp3975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3970, $tmp3974);
    (($fn3976) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3975);
    panda$core$Object* $tmp3977 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3978, t3783);
    panda$core$String* $tmp3981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3979, &$s3980);
    panda$core$String* $tmp3982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3981, result3920);
    panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3982, &$s3983);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3977), $tmp3984, p_out);
    return result3920;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3985 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3985;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3987 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3986, $tmp3987);
    return $tmp3988;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3989;
    }
    }
    return &$s3990;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3993;
    panda$core$String* t3995;
    panda$core$Bit $tmp3991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3991.value) {
    {
        panda$core$String* $tmp3992 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3992;
    }
    }
    panda$core$String* $tmp3994 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3993 = $tmp3994;
    panda$core$String* $tmp3996 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3995 = $tmp3996;
    panda$core$String* $tmp3998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3997, result3993);
    panda$core$String* $tmp4000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3998, &$s3999);
    panda$core$String* $tmp4001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4000, t3995);
    panda$core$String* $tmp4003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4001, &$s4002);
    panda$core$String* $tmp4004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4003, t3995);
    panda$core$String* $tmp4006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4004, &$s4005);
    panda$core$String* $tmp4007 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4006, $tmp4007);
    panda$core$String* $tmp4010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4008, &$s4009);
    (($fn4011) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4010);
    return result3993;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars4013;
    panda$core$String* charsType4018;
    panda$core$String* separator4036;
    panda$collections$Iterator* c$Iter4038;
    panda$core$Char8 c4051;
    panda$core$String* result4069;
    org$pandalanguage$pandac$ClassDecl* string4074;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4077;
    panda$core$Int64 $tmp4012 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4012;
    panda$core$String* $tmp4015 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4014, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4015, &$s4016);
    chars4013 = $tmp4017;
    panda$collections$ListView* $tmp4020 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4021 = ((panda$collections$CollectionView*) $tmp4020)->$class->itable;
    while ($tmp4021->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4021 = $tmp4021->next;
    }
    $fn4023 $tmp4022 = $tmp4021->methods[0];
    panda$core$Int64 $tmp4024 = $tmp4022(((panda$collections$CollectionView*) $tmp4020));
    panda$core$String* $tmp4025 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4019, ((panda$core$Object*) wrap_panda$core$Int64($tmp4024)));
    panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4025, &$s4026);
    charsType4018 = $tmp4027;
    panda$core$String* $tmp4029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4028, chars4013);
    panda$core$String* $tmp4031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4029, &$s4030);
    panda$core$String* $tmp4032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4031, charsType4018);
    panda$core$String* $tmp4034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4032, &$s4033);
    (($fn4035) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4034);
    separator4036 = &$s4037;
    {
        panda$collections$ListView* $tmp4039 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp4040 = ((panda$collections$Iterable*) $tmp4039)->$class->itable;
        while ($tmp4040->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4040 = $tmp4040->next;
        }
        $fn4042 $tmp4041 = $tmp4040->methods[0];
        panda$collections$Iterator* $tmp4043 = $tmp4041(((panda$collections$Iterable*) $tmp4039));
        c$Iter4038 = $tmp4043;
        $l4044:;
        ITable* $tmp4046 = c$Iter4038->$class->itable;
        while ($tmp4046->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4046 = $tmp4046->next;
        }
        $fn4048 $tmp4047 = $tmp4046->methods[0];
        panda$core$Bit $tmp4049 = $tmp4047(c$Iter4038);
        panda$core$Bit $tmp4050 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4049);
        if (!$tmp4050.value) goto $l4045;
        {
            ITable* $tmp4052 = c$Iter4038->$class->itable;
            while ($tmp4052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4052 = $tmp4052->next;
            }
            $fn4054 $tmp4053 = $tmp4052->methods[1];
            panda$core$Object* $tmp4055 = $tmp4053(c$Iter4038);
            c4051 = ((panda$core$Char8$wrapper*) $tmp4055)->value;
            panda$core$String* $tmp4057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4056, separator4036);
            panda$core$String* $tmp4059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4057, &$s4058);
            panda$core$Int8 $tmp4060 = panda$core$Char8$convert$R$panda$core$Int8(c4051);
            panda$core$String* $tmp4061 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4059, ((panda$core$Object*) wrap_panda$core$Int8($tmp4060)));
            panda$core$String* $tmp4063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4061, &$s4062);
            (($fn4064) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4063);
            separator4036 = &$s4065;
        }
        goto $l4044;
        $l4045:;
    }
    (($fn4067) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s4066);
    panda$core$Int64 $tmp4068 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4068;
    panda$core$String* $tmp4071 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4070, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4071, &$s4072);
    result4069 = $tmp4073;
    org$pandalanguage$pandac$Type* $tmp4075 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4076 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp4075);
    string4074 = $tmp4076;
    PANDA_ASSERT(((panda$core$Bit) { string4074 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4078 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string4074);
    cc4077 = $tmp4078;
    panda$core$String* $tmp4080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4079, result4069);
    panda$core$String* $tmp4082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4080, &$s4081);
    panda$core$String* $tmp4084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4083, cc4077->type);
    panda$core$String* $tmp4086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4084, &$s4085);
    panda$core$String* $tmp4087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4086, cc4077->name);
    panda$core$String* $tmp4089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4087, &$s4088);
    panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4082, $tmp4089);
    panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4090, &$s4091);
    panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4093, charsType4018);
    panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4094, &$s4095);
    panda$core$String* $tmp4097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, chars4013);
    panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4097, &$s4098);
    panda$core$String* $tmp4100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, $tmp4099);
    panda$collections$ListView* $tmp4102 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4103 = ((panda$collections$CollectionView*) $tmp4102)->$class->itable;
    while ($tmp4103->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4103 = $tmp4103->next;
    }
    $fn4105 $tmp4104 = $tmp4103->methods[0];
    panda$core$Int64 $tmp4106 = $tmp4104(((panda$collections$CollectionView*) $tmp4102));
    panda$core$String* $tmp4107 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4101, ((panda$core$Object*) wrap_panda$core$Int64($tmp4106)));
    panda$core$String* $tmp4109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4107, &$s4108);
    panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4100, $tmp4109);
    panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, &$s4111);
    (($fn4113) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4112);
    return result4069;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp4114 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp4115 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4114, ((panda$core$Int64) { 0 }));
    if ($tmp4115.value) {
    {
        panda$core$Object* $tmp4116 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4116)->selfRef;
    }
    }
    return &$s4117;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4118;
    panda$core$String* $tmp4119 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4118 = $tmp4119;
    panda$core$String* $tmp4121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4120, result4118);
    panda$core$String* $tmp4123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4121, &$s4122);
    org$pandalanguage$pandac$Type* $tmp4124 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp4125 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp4124);
    panda$core$String* $tmp4126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4123, $tmp4125);
    panda$core$String* $tmp4128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4126, &$s4127);
    panda$core$String* $tmp4129 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp4130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4128, $tmp4129);
    (($fn4131) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4130);
    return result4118;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4135;
    org$pandalanguage$pandac$ClassDecl* cl4138;
    panda$core$String* resultValue4141;
    panda$core$String* field4146;
    panda$core$String* result4174;
    panda$core$Bit $tmp4132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp4132.value);
    panda$core$Int64 $tmp4133 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4133, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4134.value);
    panda$core$Object* $tmp4136 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4137 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4136), p_out);
    value4135 = $tmp4137;
    panda$core$Object* $tmp4139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4140 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4139)->type);
    cl4138 = $tmp4140;
    panda$core$Bit $tmp4142 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4138);
    if ($tmp4142.value) {
    {
        panda$core$Object* $tmp4143 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4144 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4143)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4144.value) {
        {
            return &$s4145;
        }
        }
        panda$core$String* $tmp4147 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field4146 = $tmp4147;
        panda$core$String* $tmp4149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4148, field4146);
        panda$core$String* $tmp4151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4149, &$s4150);
        panda$core$String* $tmp4152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4151, value4135);
        panda$core$String* $tmp4154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4152, &$s4153);
        (($fn4155) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4154);
        panda$core$String* $tmp4156 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4141 = $tmp4156;
        panda$core$String* $tmp4158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4157, resultValue4141);
        panda$core$String* $tmp4160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4158, &$s4159);
        panda$core$String* $tmp4161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4160, field4146);
        panda$core$String* $tmp4163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4161, &$s4162);
        (($fn4164) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4163);
    }
    }
    else {
    {
        panda$core$String* $tmp4165 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4141 = $tmp4165;
        panda$core$String* $tmp4167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4166, resultValue4141);
        panda$core$String* $tmp4169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4167, &$s4168);
        panda$core$String* $tmp4170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4169, value4135);
        panda$core$String* $tmp4172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4170, &$s4171);
        (($fn4173) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4172);
    }
    }
    panda$core$String* $tmp4175 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4174 = $tmp4175;
    panda$core$String* $tmp4177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4176, result4174);
    panda$core$String* $tmp4179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4177, &$s4178);
    panda$core$String* $tmp4180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4179, resultValue4141);
    panda$core$String* $tmp4182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4180, &$s4181);
    (($fn4183) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4182);
    return result4174;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4187;
    org$pandalanguage$pandac$ClassDecl* cl4190;
    panda$core$String* resultValue4193;
    panda$core$String* result4216;
    panda$core$Bit $tmp4184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4184.value);
    panda$core$Int64 $tmp4185 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4185, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4186.value);
    panda$core$Object* $tmp4188 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4189 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4188), p_out);
    value4187 = $tmp4189;
    panda$core$Object* $tmp4191 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4192 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4191)->type);
    cl4190 = $tmp4192;
    panda$core$Bit $tmp4194 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4190);
    if ($tmp4194.value) {
    {
        panda$core$Object* $tmp4195 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4196 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4195)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4196.value) {
        {
            return &$s4197;
        }
        }
        panda$core$String* $tmp4198 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4193 = $tmp4198;
        panda$core$String* $tmp4200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4199, resultValue4193);
        panda$core$String* $tmp4202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4200, &$s4201);
        panda$core$String* $tmp4203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4202, value4187);
        panda$core$String* $tmp4205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4203, &$s4204);
        (($fn4206) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4205);
    }
    }
    else {
    {
        panda$core$String* $tmp4207 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4193 = $tmp4207;
        panda$core$String* $tmp4209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4208, resultValue4193);
        panda$core$String* $tmp4211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4209, &$s4210);
        panda$core$String* $tmp4212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4211, value4187);
        panda$core$String* $tmp4214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4212, &$s4213);
        (($fn4215) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4214);
    }
    }
    panda$core$String* $tmp4217 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4216 = $tmp4217;
    panda$core$String* $tmp4219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4218, result4216);
    panda$core$String* $tmp4221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4219, &$s4220);
    panda$core$String* $tmp4222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4221, resultValue4193);
    panda$core$String* $tmp4224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4222, &$s4223);
    (($fn4225) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4224);
    return result4216;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4227;
    panda$core$Bit $tmp4226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4226.value);
    panda$core$Object* $tmp4228 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4229 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4228));
    cl4227 = $tmp4229;
    PANDA_ASSERT(((panda$core$Bit) { cl4227 != NULL }).value);
    panda$core$Bit $tmp4230 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4227);
    if ($tmp4230.value) {
    {
        panda$core$Object* $tmp4232 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4233 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4232));
        panda$core$String* $tmp4234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4231, $tmp4233);
        panda$core$String* $tmp4236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4234, &$s4235);
        return $tmp4236;
    }
    }
    else {
    {
        return &$s4237;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4241;
    panda$core$String* result4244;
    panda$core$Bit $tmp4238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4238.value);
    panda$core$Int64 $tmp4239 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4239, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4240.value);
    panda$core$Object* $tmp4242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4243 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4242), p_out);
    base4241 = $tmp4243;
    panda$core$String* $tmp4245 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4244 = $tmp4245;
    panda$core$Int64 $tmp4246 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4246.value) {
        case 52:
        {
            panda$core$String* $tmp4248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4247, result4244);
            panda$core$String* $tmp4250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4248, &$s4249);
            panda$core$String* $tmp4251 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4250, $tmp4251);
            panda$core$String* $tmp4254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4252, &$s4253);
            panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4254, base4241);
            panda$core$String* $tmp4257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4255, &$s4256);
            (($fn4258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4257);
            return result4244;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4259, result4244);
            panda$core$String* $tmp4262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4260, &$s4261);
            panda$core$String* $tmp4263 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4262, $tmp4263);
            panda$core$String* $tmp4266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4264, &$s4265);
            panda$core$String* $tmp4267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4266, base4241);
            panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4267, &$s4268);
            (($fn4270) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4269);
            return result4244;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4283;
    panda$core$String* result4286;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4271 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4271;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4272 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4272;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4273 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4273;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4274 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4274;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4275 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4275;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4276 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4276;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4277 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4277;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4278 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4278;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4279 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4279;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4280 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4280;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4281 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4281;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4282 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4282;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4285 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4284), p_out);
            value4283 = $tmp4285;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4283));
            return value4283;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4287 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4286 = ((panda$core$String*) $tmp4287);
            PANDA_ASSERT(((panda$core$Bit) { result4286 != NULL }).value);
            return result4286;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4288 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4288;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4289 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4289;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4290 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4290;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4291 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4291;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4293 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4292, $tmp4293);
    panda$core$String* $tmp4296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4294, &$s4295);
    panda$core$String* $tmp4297 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4296, $tmp4297);
    panda$core$String* $tmp4300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4298, &$s4299);
    return $tmp4300;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4303;
    org$pandalanguage$pandac$IRNode* s4315;
    panda$core$Bit $tmp4301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4301.value);
    panda$core$Int64 $tmp4302 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4302;
    {
        ITable* $tmp4304 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4304->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4304 = $tmp4304->next;
        }
        $fn4306 $tmp4305 = $tmp4304->methods[0];
        panda$collections$Iterator* $tmp4307 = $tmp4305(((panda$collections$Iterable*) p_block->children));
        s$Iter4303 = $tmp4307;
        $l4308:;
        ITable* $tmp4310 = s$Iter4303->$class->itable;
        while ($tmp4310->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4310 = $tmp4310->next;
        }
        $fn4312 $tmp4311 = $tmp4310->methods[0];
        panda$core$Bit $tmp4313 = $tmp4311(s$Iter4303);
        panda$core$Bit $tmp4314 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4313);
        if (!$tmp4314.value) goto $l4309;
        {
            ITable* $tmp4316 = s$Iter4303->$class->itable;
            while ($tmp4316->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4316 = $tmp4316->next;
            }
            $fn4318 $tmp4317 = $tmp4316->methods[1];
            panda$core$Object* $tmp4319 = $tmp4317(s$Iter4303);
            s4315 = ((org$pandalanguage$pandac$IRNode*) $tmp4319);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4315, p_out);
        }
        goto $l4308;
        $l4309:;
    }
    panda$core$Int64 $tmp4320 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4320;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4321;
    panda$core$String* $match$767434322;
    panda$core$String* ptr4327;
    panda$core$String* arg4330;
    org$pandalanguage$pandac$Type* baseType4350;
    panda$core$String* base4354;
    panda$core$String* indexStruct4357;
    panda$core$String* index4360;
    panda$core$String* value4370;
    panda$core$String* ptr4374;
    panda$core$String* ptr4413;
    panda$core$String* cast4416;
    m4321 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$767434322 = ((org$pandalanguage$pandac$Symbol*) m4321->value)->name;
        panda$core$Bit $tmp4324 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$767434322, &$s4323);
        if ($tmp4324.value) {
        {
            panda$core$Int64 $tmp4325 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4325, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4326.value);
            panda$core$Object* $tmp4328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4329 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4328), p_out);
            ptr4327 = $tmp4329;
            panda$core$Object* $tmp4331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4332 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4331));
            panda$core$String* $tmp4333 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4332, p_out);
            arg4330 = $tmp4333;
            panda$core$String* $tmp4335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4334, arg4330);
            panda$core$String* $tmp4337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4335, &$s4336);
            panda$core$String* $tmp4338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4337, ptr4327);
            panda$core$String* $tmp4340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4338, &$s4339);
            (($fn4341) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4340);
        }
        }
        else {
        panda$core$Bit $tmp4343 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$767434322, &$s4342);
        if ($tmp4343.value) {
        {
            panda$core$Int64 $tmp4344 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4344, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4345.value);
            panda$core$Object* $tmp4346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4347 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4346));
            panda$core$Int64 $tmp4348 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64($tmp4347->type->subtypes);
            panda$core$Bit $tmp4349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4348, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4349.value);
            panda$core$Object* $tmp4351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4352 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4351));
            panda$core$Object* $tmp4353 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp4352->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4350 = ((org$pandalanguage$pandac$Type*) $tmp4353);
            panda$core$Object* $tmp4355 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4356 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4355), p_out);
            base4354 = $tmp4356;
            panda$core$Object* $tmp4358 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4359 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4358), p_out);
            indexStruct4357 = $tmp4359;
            panda$core$String* $tmp4361 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4360 = $tmp4361;
            panda$core$String* $tmp4363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4362, index4360);
            panda$core$String* $tmp4365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4363, &$s4364);
            panda$core$String* $tmp4366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4365, indexStruct4357);
            panda$core$String* $tmp4368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4366, &$s4367);
            (($fn4369) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4368);
            panda$core$Object* $tmp4371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4372 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4371));
            panda$core$String* $tmp4373 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4372, p_out);
            value4370 = $tmp4373;
            panda$core$String* $tmp4375 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4374 = $tmp4375;
            panda$core$String* $tmp4377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4376, ptr4374);
            panda$core$String* $tmp4379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4377, &$s4378);
            panda$core$String* $tmp4380 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4350);
            panda$core$String* $tmp4381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4379, $tmp4380);
            panda$core$String* $tmp4383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4381, &$s4382);
            panda$core$String* $tmp4384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4383, base4354);
            panda$core$String* $tmp4386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4384, &$s4385);
            panda$core$String* $tmp4389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4387, &$s4388);
            panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4389, &$s4390);
            panda$core$String* $tmp4392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4391, index4360);
            panda$core$String* $tmp4394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4392, &$s4393);
            panda$core$String* $tmp4395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4386, $tmp4394);
            (($fn4396) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4395);
            panda$core$String* $tmp4398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4397, value4370);
            panda$core$String* $tmp4400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4398, &$s4399);
            panda$core$String* $tmp4401 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4350);
            panda$core$String* $tmp4402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4400, $tmp4401);
            panda$core$String* $tmp4404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4402, &$s4403);
            panda$core$String* $tmp4405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4404, ptr4374);
            panda$core$String* $tmp4407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4405, &$s4406);
            (($fn4408) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4407);
        }
        }
        else {
        panda$core$Bit $tmp4410 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$767434322, &$s4409);
        if ($tmp4410.value) {
        {
            panda$core$Int64 $tmp4411 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4411, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4412.value);
            panda$core$Object* $tmp4414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4415 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4414), p_out);
            ptr4413 = $tmp4415;
            panda$core$String* $tmp4417 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4416 = $tmp4417;
            panda$core$String* $tmp4419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4418, cast4416);
            panda$core$String* $tmp4421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4419, &$s4420);
            panda$core$String* $tmp4422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4421, ptr4413);
            panda$core$String* $tmp4424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4422, &$s4423);
            (($fn4425) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4424);
            panda$core$String* $tmp4427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4426, cast4416);
            panda$core$String* $tmp4429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4427, &$s4428);
            (($fn4430) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4429);
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
void org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$core$String* p_target, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m4432;
    org$pandalanguage$pandac$Type* actualMethodType4435;
    panda$core$String* actualResultType4436;
    panda$core$Bit isSuper4437;
    panda$collections$Array* args4457;
    panda$core$Int64 offset4460;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4465;
    panda$core$String* arg4485;
    panda$core$String* refTarget4522;
    panda$core$String* methodRef4526;
    panda$core$String* separator4528;
    panda$core$String* indirectVar4532;
    panda$core$String* resultType4535;
    panda$collections$Iterator* a$Iter4580;
    panda$core$String* a4592;
    panda$core$Bit $tmp4431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4431.value);
    m4432 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4434 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4432->owner)->name, &$s4433);
    if ($tmp4434.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4432->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4432);
    }
    }
    panda$core$Int64 $tmp4439 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4440 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4439, ((panda$core$Int64) { 1 }));
    bool $tmp4438 = $tmp4440.value;
    if (!$tmp4438) goto $l4441;
    panda$core$Object* $tmp4442 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4442)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4438 = $tmp4443.value;
    $l4441:;
    panda$core$Bit $tmp4444 = { $tmp4438 };
    isSuper4437 = $tmp4444;
    panda$core$Bit $tmp4446 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4437);
    bool $tmp4445 = $tmp4446.value;
    if (!$tmp4445) goto $l4447;
    panda$core$Bit $tmp4448 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4432);
    $tmp4445 = $tmp4448.value;
    $l4447:;
    panda$core$Bit $tmp4449 = { $tmp4445 };
    if ($tmp4449.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4450 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4432);
        actualMethodType4435 = $tmp4450;
        panda$core$Int64 $tmp4451 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType4435->subtypes);
        panda$core$Int64 $tmp4452 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4451, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4453 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4435->subtypes, $tmp4452);
        panda$core$String* $tmp4454 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4453));
        actualResultType4436 = $tmp4454;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4455 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4432);
        actualMethodType4435 = $tmp4455;
        panda$core$String* $tmp4456 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4436 = $tmp4456;
    }
    }
    panda$collections$Array* $tmp4458 = (panda$collections$Array*) malloc(40);
    $tmp4458->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4458->refCount.value = 1;
    panda$collections$Array$init($tmp4458);
    args4457 = $tmp4458;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4457, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4461 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4462 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType4435->subtypes);
    panda$core$Int64 $tmp4463 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4461, $tmp4462);
    panda$core$Int64 $tmp4464 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4463, ((panda$core$Int64) { 1 }));
    offset4460 = $tmp4464;
    panda$core$Int64 $tmp4466 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4465, ((panda$core$Int64) { 0 }), $tmp4466, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4468 = $tmp4465.start.value;
    panda$core$Int64 i4467 = { $tmp4468 };
    int64_t $tmp4470 = $tmp4465.end.value;
    int64_t $tmp4471 = $tmp4465.step.value;
    bool $tmp4472 = $tmp4465.inclusive.value;
    bool $tmp4479 = $tmp4471 > 0;
    if ($tmp4479) goto $l4477; else goto $l4478;
    $l4477:;
    if ($tmp4472) goto $l4480; else goto $l4481;
    $l4480:;
    if ($tmp4468 <= $tmp4470) goto $l4473; else goto $l4475;
    $l4481:;
    if ($tmp4468 < $tmp4470) goto $l4473; else goto $l4475;
    $l4478:;
    if ($tmp4472) goto $l4482; else goto $l4483;
    $l4482:;
    if ($tmp4468 >= $tmp4470) goto $l4473; else goto $l4475;
    $l4483:;
    if ($tmp4468 > $tmp4470) goto $l4473; else goto $l4475;
    $l4473:;
    {
        panda$core$Object* $tmp4486 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4467);
        panda$core$String* $tmp4487 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4486), p_out);
        arg4485 = $tmp4487;
        panda$core$Bit $tmp4489 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4467, offset4460);
        bool $tmp4488 = $tmp4489.value;
        if (!$tmp4488) goto $l4490;
        panda$core$Int64 $tmp4491 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4467, offset4460);
        panda$core$Object* $tmp4492 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4435->subtypes, $tmp4491);
        panda$core$Object* $tmp4493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4467);
        panda$core$Bit $tmp4494 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4492), ((org$pandalanguage$pandac$IRNode*) $tmp4493)->type);
        $tmp4488 = $tmp4494.value;
        $l4490:;
        panda$core$Bit $tmp4495 = { $tmp4488 };
        if ($tmp4495.value) {
        {
            panda$core$Int64 $tmp4496 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4467, offset4460);
            panda$core$Object* $tmp4497 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4435->subtypes, $tmp4496);
            panda$core$String* $tmp4498 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4497));
            panda$core$String* $tmp4500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4498, &$s4499);
            panda$core$Object* $tmp4501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4467);
            panda$core$Int64 $tmp4502 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4467, offset4460);
            panda$core$Object* $tmp4503 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4435->subtypes, $tmp4502);
            panda$core$String* $tmp4504 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4485, ((org$pandalanguage$pandac$IRNode*) $tmp4501)->type, ((org$pandalanguage$pandac$Type*) $tmp4503), p_out);
            panda$core$String* $tmp4505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4500, $tmp4504);
            arg4485 = $tmp4505;
        }
        }
        else {
        {
            panda$core$Object* $tmp4506 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4467);
            panda$core$String* $tmp4507 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4506)->type);
            panda$core$String* $tmp4509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4507, &$s4508);
            panda$core$String* $tmp4510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4509, arg4485);
            arg4485 = $tmp4510;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4457, ((panda$core$Object*) arg4485));
    }
    $l4476:;
    if ($tmp4479) goto $l4512; else goto $l4513;
    $l4512:;
    int64_t $tmp4514 = $tmp4470 - i4467.value;
    if ($tmp4472) goto $l4515; else goto $l4516;
    $l4515:;
    if ($tmp4514 >= $tmp4471) goto $l4511; else goto $l4475;
    $l4516:;
    if ($tmp4514 > $tmp4471) goto $l4511; else goto $l4475;
    $l4513:;
    int64_t $tmp4518 = i4467.value - $tmp4470;
    if ($tmp4472) goto $l4519; else goto $l4520;
    $l4519:;
    if ($tmp4518 >= -$tmp4471) goto $l4511; else goto $l4475;
    $l4520:;
    if ($tmp4518 > -$tmp4471) goto $l4511; else goto $l4475;
    $l4511:;
    i4467.value += $tmp4471;
    goto $l4473;
    $l4475:;
    panda$core$Int64 $tmp4523 = panda$collections$Array$get_count$R$panda$core$Int64(args4457);
    panda$core$Bit $tmp4524 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4523, ((panda$core$Int64) { 0 }));
    if ($tmp4524.value) {
    {
        panda$core$Object* $tmp4525 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4457, ((panda$core$Int64) { 0 }));
        refTarget4522 = ((panda$core$String*) $tmp4525);
    }
    }
    else {
    {
        refTarget4522 = NULL;
    }
    }
    panda$core$String* $tmp4527 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4522, m4432, isSuper4437, p_out);
    methodRef4526 = $tmp4527;
    separator4528 = &$s4529;
    panda$core$Bit $tmp4530 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4432);
    if ($tmp4530.value) {
    {
        panda$core$Int64 $tmp4531 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4531;
        panda$core$String* $tmp4534 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4533, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4532 = $tmp4534;
        panda$core$String* $tmp4536 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4535 = $tmp4536;
        panda$core$String* $tmp4538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4537, indirectVar4532);
        panda$core$String* $tmp4540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4538, &$s4539);
        panda$core$String* $tmp4541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4540, resultType4535);
        panda$core$String* $tmp4543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4541, &$s4542);
        (($fn4544) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4543);
        panda$core$String* $tmp4546 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4432);
        panda$core$String* $tmp4547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4545, $tmp4546);
        panda$core$String* $tmp4549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4547, &$s4548);
        panda$core$String* $tmp4551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4550, methodRef4526);
        panda$core$String* $tmp4553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4551, &$s4552);
        panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4553, resultType4535);
        panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4554, &$s4555);
        panda$core$String* $tmp4557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, indirectVar4532);
        panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4557, &$s4558);
        panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4549, $tmp4559);
        (($fn4561) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4560);
        separator4528 = &$s4562;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4563 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4564 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4563);
        if ($tmp4564.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4566 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4432);
        panda$core$String* $tmp4567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4565, $tmp4566);
        panda$core$String* $tmp4569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4567, &$s4568);
        panda$core$String* $tmp4570 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4569, $tmp4570);
        panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4571, &$s4572);
        panda$core$String* $tmp4575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4574, methodRef4526);
        panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4575, &$s4576);
        panda$core$String* $tmp4578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4573, $tmp4577);
        (($fn4579) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4578);
    }
    }
    {
        ITable* $tmp4581 = ((panda$collections$Iterable*) args4457)->$class->itable;
        while ($tmp4581->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4581 = $tmp4581->next;
        }
        $fn4583 $tmp4582 = $tmp4581->methods[0];
        panda$collections$Iterator* $tmp4584 = $tmp4582(((panda$collections$Iterable*) args4457));
        a$Iter4580 = $tmp4584;
        $l4585:;
        ITable* $tmp4587 = a$Iter4580->$class->itable;
        while ($tmp4587->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4587 = $tmp4587->next;
        }
        $fn4589 $tmp4588 = $tmp4587->methods[0];
        panda$core$Bit $tmp4590 = $tmp4588(a$Iter4580);
        panda$core$Bit $tmp4591 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4590);
        if (!$tmp4591.value) goto $l4586;
        {
            ITable* $tmp4593 = a$Iter4580->$class->itable;
            while ($tmp4593->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4593 = $tmp4593->next;
            }
            $fn4595 $tmp4594 = $tmp4593->methods[1];
            panda$core$Object* $tmp4596 = $tmp4594(a$Iter4580);
            a4592 = ((panda$core$String*) $tmp4596);
            (($fn4597) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4528);
            (($fn4598) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4592);
            separator4528 = &$s4599;
        }
        goto $l4585;
        $l4586:;
    }
    (($fn4601) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4600);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4613;
    panda$core$String* testBit4616;
    panda$core$String* ifTrue4626;
    panda$core$String* ifFalse4628;
    panda$core$String* end4642;
    panda$core$Bit $tmp4602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4602.value);
    panda$core$Int64 $tmp4604 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4604, ((panda$core$Int64) { 2 }));
    bool $tmp4603 = $tmp4605.value;
    if ($tmp4603) goto $l4606;
    panda$core$Int64 $tmp4607 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4607, ((panda$core$Int64) { 3 }));
    $tmp4603 = $tmp4608.value;
    $l4606:;
    panda$core$Bit $tmp4609 = { $tmp4603 };
    PANDA_ASSERT($tmp4609.value);
    panda$core$Object* $tmp4610 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4611 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4612 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4610)->type, $tmp4611);
    PANDA_ASSERT($tmp4612.value);
    panda$core$Object* $tmp4614 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4615 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4614), p_out);
    test4613 = $tmp4615;
    panda$core$String* $tmp4617 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4616 = $tmp4617;
    panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4618, testBit4616);
    panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4619, &$s4620);
    panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, test4613);
    panda$core$String* $tmp4624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4622, &$s4623);
    (($fn4625) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4624);
    panda$core$String* $tmp4627 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4626 = $tmp4627;
    panda$core$String* $tmp4629 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4628 = $tmp4629;
    panda$core$String* $tmp4631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4630, testBit4616);
    panda$core$String* $tmp4633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4631, &$s4632);
    panda$core$String* $tmp4634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4633, ifTrue4626);
    panda$core$String* $tmp4636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4634, &$s4635);
    panda$core$String* $tmp4637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4636, ifFalse4628);
    panda$core$String* $tmp4639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4637, &$s4638);
    (($fn4640) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4639);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4626, p_out);
    panda$core$Object* $tmp4641 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4641), p_out);
    panda$core$Int64 $tmp4643 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4643, ((panda$core$Int64) { 3 }));
    if ($tmp4644.value) {
    {
        panda$core$String* $tmp4645 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4642 = $tmp4645;
    }
    }
    else {
    {
        end4642 = ifFalse4628;
    }
    }
    panda$core$Object* $tmp4646 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4647 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4646));
    panda$core$Bit $tmp4648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4647);
    if ($tmp4648.value) {
    {
        panda$core$String* $tmp4650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4649, end4642);
        panda$core$String* $tmp4652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4650, &$s4651);
        (($fn4653) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4652);
    }
    }
    panda$core$Int64 $tmp4654 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4654, ((panda$core$Int64) { 3 }));
    if ($tmp4655.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4628, p_out);
        panda$core$Object* $tmp4656 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4656), p_out);
        panda$core$Object* $tmp4657 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4658 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4657));
        panda$core$Bit $tmp4659 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4658);
        if ($tmp4659.value) {
        {
            panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4660, end4642);
            panda$core$String* $tmp4663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4661, &$s4662);
            (($fn4664) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4663);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4642, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4668;
    panda$core$String* range4679;
    org$pandalanguage$pandac$IRNode* block4682;
    org$pandalanguage$pandac$Type* t4684;
    panda$core$String* llt4687;
    panda$core$String* indexType4689;
    org$pandalanguage$pandac$ClassDecl* cl4695;
    panda$core$String* numberType4703;
    panda$core$String* index4711;
    panda$core$String* start4721;
    panda$core$String* indexValuePtr4731;
    panda$core$String* end4763;
    panda$core$String* rawStep4773;
    panda$core$String* step4783;
    panda$core$String* inclusive4798;
    panda$core$String* loopStart4808;
    panda$core$String* loopBody4810;
    panda$core$String* loopEnd4812;
    panda$core$String* loopTest4814;
    panda$core$String* forwardEntry4818;
    panda$core$String* backwardEntry4820;
    panda$core$String* signPrefix4822;
    panda$core$String* direction4834;
    panda$core$String* forwardEntryInclusive4861;
    panda$core$String* forwardEntryExclusive4863;
    panda$core$String* forwardEntryInclusiveTest4878;
    panda$core$String* forwardEntryExclusiveTest4910;
    panda$core$String* backwardEntryInclusive4942;
    panda$core$String* backwardEntryExclusive4944;
    panda$core$String* backwardEntryInclusiveTest4959;
    panda$core$String* backwardEntryExclusiveTest4991;
    panda$core$String* indexValue5023;
    panda$core$String* loopInc5046;
    panda$core$String* forwardLabel5048;
    panda$core$String* backwardLabel5050;
    panda$core$String* forwardDelta5063;
    panda$core$String* forwardInclusiveLabel5079;
    panda$core$String* forwardExclusiveLabel5081;
    panda$core$String* forwardInclusiveTest5092;
    panda$core$String* forwardExclusiveTest5119;
    panda$core$String* backwardDelta5146;
    panda$core$String* negStep5162;
    panda$core$String* backwardInclusiveLabel5175;
    panda$core$String* backwardExclusiveLabel5177;
    panda$core$String* backwardInclusiveTest5188;
    panda$core$String* backwardExclusiveTest5213;
    panda$core$String* inc5238;
    panda$core$String* incStruct5254;
    panda$core$Bit $tmp4665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4665.value);
    panda$core$Int64 $tmp4666 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4666, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4667.value);
    panda$core$Object* $tmp4669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4668 = ((org$pandalanguage$pandac$IRNode*) $tmp4669);
    panda$core$Object* $tmp4670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4670)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4671.value);
    panda$core$Object* $tmp4672 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4673 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4672)->type->subtypes);
    panda$core$Bit $tmp4674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4673, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4674.value);
    panda$core$Object* $tmp4675 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4676 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4675)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4678 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4676))->name, &$s4677);
    PANDA_ASSERT($tmp4678.value);
    panda$core$Object* $tmp4680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4681 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4680), p_out);
    range4679 = $tmp4681;
    panda$core$Object* $tmp4683 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4682 = ((org$pandalanguage$pandac$IRNode*) $tmp4683);
    panda$core$Object* $tmp4685 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4686 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4685)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4684 = ((org$pandalanguage$pandac$Type*) $tmp4686);
    panda$core$String* $tmp4688 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4684);
    llt4687 = $tmp4688;
    panda$core$Bit $tmp4690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4684->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4690.value) {
    {
        panda$core$Int64 $tmp4691 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(t4684->subtypes);
        panda$core$Bit $tmp4692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4691, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4692.value);
        panda$core$Object* $tmp4693 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(t4684->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4694 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4693));
        indexType4689 = $tmp4694;
    }
    }
    else {
    {
        indexType4689 = llt4687;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4696 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4684);
    cl4695 = $tmp4696;
    PANDA_ASSERT(((panda$core$Bit) { cl4695 != NULL }).value);
    panda$collections$ListView* $tmp4697 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4695);
    ITable* $tmp4698 = ((panda$collections$CollectionView*) $tmp4697)->$class->itable;
    while ($tmp4698->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4698 = $tmp4698->next;
    }
    $fn4700 $tmp4699 = $tmp4698->methods[0];
    panda$core$Int64 $tmp4701 = $tmp4699(((panda$collections$CollectionView*) $tmp4697));
    panda$core$Bit $tmp4702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4701, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4702.value);
    panda$collections$ListView* $tmp4704 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4695);
    ITable* $tmp4705 = $tmp4704->$class->itable;
    while ($tmp4705->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4705 = $tmp4705->next;
    }
    $fn4707 $tmp4706 = $tmp4705->methods[0];
    panda$core$Object* $tmp4708 = $tmp4706($tmp4704, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4709 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4708)->type);
    numberType4703 = $tmp4709;
    panda$core$Bit $tmp4710 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4668->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4710.value);
    panda$core$String* $tmp4712 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4668->payload));
    index4711 = $tmp4712;
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4713, index4711);
    panda$core$String* $tmp4716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4714, &$s4715);
    panda$core$String* $tmp4717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4716, indexType4689);
    panda$core$String* $tmp4719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4717, &$s4718);
    (($fn4720) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4719);
    panda$core$String* $tmp4722 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4721 = $tmp4722;
    panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4723, start4721);
    panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4724, &$s4725);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4726, range4679);
    panda$core$String* $tmp4729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, &$s4728);
    (($fn4730) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4729);
    panda$core$String* $tmp4732 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4731 = $tmp4732;
    panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4733, indexValuePtr4731);
    panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, &$s4735);
    panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4736, indexType4689);
    panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, &$s4738);
    panda$core$String* $tmp4740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, indexType4689);
    panda$core$String* $tmp4742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4740, &$s4741);
    panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4742, index4711);
    panda$core$String* $tmp4745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4743, &$s4744);
    panda$core$String* $tmp4747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4745, &$s4746);
    (($fn4748) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4747);
    panda$core$String* $tmp4750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4749, numberType4703);
    panda$core$String* $tmp4752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4750, &$s4751);
    panda$core$String* $tmp4753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4752, start4721);
    panda$core$String* $tmp4755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4753, &$s4754);
    panda$core$String* $tmp4756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4755, numberType4703);
    panda$core$String* $tmp4758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4756, &$s4757);
    panda$core$String* $tmp4759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4758, indexValuePtr4731);
    panda$core$String* $tmp4761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4759, &$s4760);
    (($fn4762) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4761);
    panda$core$String* $tmp4764 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4763 = $tmp4764;
    panda$core$String* $tmp4766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4765, end4763);
    panda$core$String* $tmp4768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4766, &$s4767);
    panda$core$String* $tmp4769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4768, range4679);
    panda$core$String* $tmp4771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4769, &$s4770);
    (($fn4772) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4771);
    panda$core$String* $tmp4774 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4773 = $tmp4774;
    panda$core$String* $tmp4776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4775, rawStep4773);
    panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4776, &$s4777);
    panda$core$String* $tmp4779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4778, range4679);
    panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4779, &$s4780);
    (($fn4782) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4781);
    panda$core$Bit $tmp4785 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4703, &$s4784);
    if ($tmp4785.value) {
    {
        panda$core$String* $tmp4786 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4783 = $tmp4786;
        panda$core$String* $tmp4788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4787, step4783);
        panda$core$String* $tmp4790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4788, &$s4789);
        panda$core$String* $tmp4791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, rawStep4773);
        panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4791, &$s4792);
        panda$core$String* $tmp4794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, numberType4703);
        panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4794, &$s4795);
        (($fn4797) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4796);
    }
    }
    else {
    {
        step4783 = rawStep4773;
    }
    }
    panda$core$String* $tmp4799 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4798 = $tmp4799;
    panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4800, inclusive4798);
    panda$core$String* $tmp4803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4801, &$s4802);
    panda$core$String* $tmp4804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4803, range4679);
    panda$core$String* $tmp4806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4804, &$s4805);
    (($fn4807) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4806);
    panda$core$String* $tmp4809 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4808 = $tmp4809;
    panda$core$String* $tmp4811 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4810 = $tmp4811;
    panda$core$String* $tmp4813 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4812 = $tmp4813;
    panda$core$String* $tmp4815 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4814 = $tmp4815;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4816 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4816->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4816->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4816, ((panda$core$String*) p_f->payload), loopEnd4812, loopTest4814);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4816));
    panda$core$String* $tmp4819 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4818 = $tmp4819;
    panda$core$String* $tmp4821 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4820 = $tmp4821;
    panda$core$Bit $tmp4824 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4684)->name, &$s4823);
    if ($tmp4824.value) {
    {
        signPrefix4822 = &$s4825;
    }
    }
    else {
    {
        panda$core$Bit $tmp4828 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4684)->name, &$s4827);
        bool $tmp4826 = $tmp4828.value;
        if ($tmp4826) goto $l4829;
        panda$core$Bit $tmp4831 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4684)->name, &$s4830);
        $tmp4826 = $tmp4831.value;
        $l4829:;
        panda$core$Bit $tmp4832 = { $tmp4826 };
        PANDA_ASSERT($tmp4832.value);
        signPrefix4822 = &$s4833;
    }
    }
    panda$core$Bit $tmp4836 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4822, &$s4835);
    if ($tmp4836.value) {
    {
        panda$core$String* $tmp4837 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction4834 = $tmp4837;
        panda$core$String* $tmp4839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4838, direction4834);
        panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, &$s4840);
        panda$core$String* $tmp4842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4841, numberType4703);
        panda$core$String* $tmp4844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4842, &$s4843);
        panda$core$String* $tmp4845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4844, step4783);
        panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4845, &$s4846);
        (($fn4848) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4847);
    }
    }
    else {
    {
        direction4834 = &$s4849;
    }
    }
    panda$core$String* $tmp4851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4850, direction4834);
    panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, &$s4852);
    panda$core$String* $tmp4854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, forwardEntry4818);
    panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4854, &$s4855);
    panda$core$String* $tmp4857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, backwardEntry4820);
    panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4857, &$s4858);
    (($fn4860) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4859);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry4818, p_out);
    panda$core$String* $tmp4862 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4861 = $tmp4862;
    panda$core$String* $tmp4864 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4863 = $tmp4864;
    panda$core$String* $tmp4866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4865, inclusive4798);
    panda$core$String* $tmp4868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4866, &$s4867);
    panda$core$String* $tmp4869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4868, forwardEntryInclusive4861);
    panda$core$String* $tmp4871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4869, &$s4870);
    panda$core$String* $tmp4873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4872, forwardEntryExclusive4863);
    panda$core$String* $tmp4875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4873, &$s4874);
    panda$core$String* $tmp4876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4871, $tmp4875);
    (($fn4877) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4876);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4861, p_out);
    panda$core$String* $tmp4879 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4878 = $tmp4879;
    panda$core$String* $tmp4881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4880, forwardEntryInclusiveTest4878);
    panda$core$String* $tmp4883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4881, &$s4882);
    panda$core$String* $tmp4884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4883, signPrefix4822);
    panda$core$String* $tmp4886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4884, &$s4885);
    panda$core$String* $tmp4887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4886, numberType4703);
    panda$core$String* $tmp4889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4887, &$s4888);
    panda$core$String* $tmp4891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4890, start4721);
    panda$core$String* $tmp4893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4891, &$s4892);
    panda$core$String* $tmp4894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4893, end4763);
    panda$core$String* $tmp4896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4894, &$s4895);
    panda$core$String* $tmp4897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4889, $tmp4896);
    (($fn4898) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4897);
    panda$core$String* $tmp4900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4899, forwardEntryInclusiveTest4878);
    panda$core$String* $tmp4902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4900, &$s4901);
    panda$core$String* $tmp4903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4902, loopStart4808);
    panda$core$String* $tmp4905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4903, &$s4904);
    panda$core$String* $tmp4906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4905, loopEnd4812);
    panda$core$String* $tmp4908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4906, &$s4907);
    (($fn4909) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4908);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4863, p_out);
    panda$core$String* $tmp4911 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4910 = $tmp4911;
    panda$core$String* $tmp4913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4912, forwardEntryExclusiveTest4910);
    panda$core$String* $tmp4915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4913, &$s4914);
    panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4915, signPrefix4822);
    panda$core$String* $tmp4918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4916, &$s4917);
    panda$core$String* $tmp4919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4918, numberType4703);
    panda$core$String* $tmp4921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4919, &$s4920);
    panda$core$String* $tmp4923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4922, start4721);
    panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4923, &$s4924);
    panda$core$String* $tmp4926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4925, end4763);
    panda$core$String* $tmp4928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4926, &$s4927);
    panda$core$String* $tmp4929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4921, $tmp4928);
    (($fn4930) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4929);
    panda$core$String* $tmp4932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4931, forwardEntryExclusiveTest4910);
    panda$core$String* $tmp4934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4932, &$s4933);
    panda$core$String* $tmp4935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4934, loopStart4808);
    panda$core$String* $tmp4937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4935, &$s4936);
    panda$core$String* $tmp4938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4937, loopEnd4812);
    panda$core$String* $tmp4940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4938, &$s4939);
    (($fn4941) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4940);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry4820, p_out);
    panda$core$String* $tmp4943 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive4942 = $tmp4943;
    panda$core$String* $tmp4945 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive4944 = $tmp4945;
    panda$core$String* $tmp4947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4946, inclusive4798);
    panda$core$String* $tmp4949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4947, &$s4948);
    panda$core$String* $tmp4950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4949, backwardEntryInclusive4942);
    panda$core$String* $tmp4952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4950, &$s4951);
    panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4953, backwardEntryExclusive4944);
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, &$s4955);
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4952, $tmp4956);
    (($fn4958) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4957);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive4942, p_out);
    panda$core$String* $tmp4960 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest4959 = $tmp4960;
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4961, backwardEntryInclusiveTest4959);
    panda$core$String* $tmp4964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4962, &$s4963);
    panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4964, signPrefix4822);
    panda$core$String* $tmp4967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4965, &$s4966);
    panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4967, numberType4703);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4968, &$s4969);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4971, start4721);
    panda$core$String* $tmp4974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4972, &$s4973);
    panda$core$String* $tmp4975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4974, end4763);
    panda$core$String* $tmp4977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4975, &$s4976);
    panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, $tmp4977);
    (($fn4979) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4978);
    panda$core$String* $tmp4981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4980, backwardEntryInclusiveTest4959);
    panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4981, &$s4982);
    panda$core$String* $tmp4984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4983, loopStart4808);
    panda$core$String* $tmp4986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4984, &$s4985);
    panda$core$String* $tmp4987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4986, loopEnd4812);
    panda$core$String* $tmp4989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4987, &$s4988);
    (($fn4990) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4989);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive4944, p_out);
    panda$core$String* $tmp4992 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest4991 = $tmp4992;
    panda$core$String* $tmp4994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4993, backwardEntryExclusiveTest4991);
    panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4994, &$s4995);
    panda$core$String* $tmp4997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4996, signPrefix4822);
    panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4997, &$s4998);
    panda$core$String* $tmp5000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4999, numberType4703);
    panda$core$String* $tmp5002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5000, &$s5001);
    panda$core$String* $tmp5004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5003, start4721);
    panda$core$String* $tmp5006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5004, &$s5005);
    panda$core$String* $tmp5007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5006, end4763);
    panda$core$String* $tmp5009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5007, &$s5008);
    panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5002, $tmp5009);
    (($fn5011) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5010);
    panda$core$String* $tmp5013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5012, backwardEntryExclusiveTest4991);
    panda$core$String* $tmp5015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5013, &$s5014);
    panda$core$String* $tmp5016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5015, loopStart4808);
    panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5016, &$s5017);
    panda$core$String* $tmp5019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5018, loopEnd4812);
    panda$core$String* $tmp5021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5019, &$s5020);
    (($fn5022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5021);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4808, p_out);
    panda$core$String* $tmp5024 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5023 = $tmp5024;
    panda$core$String* $tmp5026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5025, indexValue5023);
    panda$core$String* $tmp5028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5026, &$s5027);
    panda$core$String* $tmp5029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5028, numberType4703);
    panda$core$String* $tmp5031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5029, &$s5030);
    panda$core$String* $tmp5032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5031, numberType4703);
    panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5032, &$s5033);
    panda$core$String* $tmp5035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5034, indexValuePtr4731);
    panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5035, &$s5036);
    (($fn5038) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5037);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4682, p_out);
    panda$core$Bit $tmp5039 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4682);
    panda$core$Bit $tmp5040 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5039);
    if ($tmp5040.value) {
    {
        panda$core$String* $tmp5042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5041, loopTest4814);
        panda$core$String* $tmp5044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5042, &$s5043);
        (($fn5045) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5044);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4814, p_out);
    panda$core$String* $tmp5047 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5046 = $tmp5047;
    panda$core$String* $tmp5049 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5048 = $tmp5049;
    panda$core$String* $tmp5051 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5050 = $tmp5051;
    panda$core$String* $tmp5053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5052, direction4834);
    panda$core$String* $tmp5055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5053, &$s5054);
    panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5055, forwardLabel5048);
    panda$core$String* $tmp5058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5056, &$s5057);
    panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5058, backwardLabel5050);
    panda$core$String* $tmp5061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, &$s5060);
    (($fn5062) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5061);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5048, p_out);
    panda$core$String* $tmp5064 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5063 = $tmp5064;
    panda$core$String* $tmp5066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5065, forwardDelta5063);
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5066, &$s5067);
    panda$core$String* $tmp5069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5068, numberType4703);
    panda$core$String* $tmp5071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5069, &$s5070);
    panda$core$String* $tmp5072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5071, end4763);
    panda$core$String* $tmp5074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5072, &$s5073);
    panda$core$String* $tmp5075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5074, indexValue5023);
    panda$core$String* $tmp5077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5075, &$s5076);
    (($fn5078) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5077);
    panda$core$String* $tmp5080 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5079 = $tmp5080;
    panda$core$String* $tmp5082 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5081 = $tmp5082;
    panda$core$String* $tmp5084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5083, inclusive4798);
    panda$core$String* $tmp5086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5084, &$s5085);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5086, forwardInclusiveLabel5079);
    panda$core$String* $tmp5089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5087, &$s5088);
    panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5089, forwardExclusiveLabel5081);
    (($fn5091) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5090);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5079, p_out);
    panda$core$String* $tmp5093 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5092 = $tmp5093;
    panda$core$String* $tmp5095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5094, forwardInclusiveTest5092);
    panda$core$String* $tmp5097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5095, &$s5096);
    panda$core$String* $tmp5098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5097, numberType4703);
    panda$core$String* $tmp5100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5098, &$s5099);
    panda$core$String* $tmp5101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5100, forwardDelta5063);
    panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5101, &$s5102);
    panda$core$String* $tmp5104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, step4783);
    panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5104, &$s5105);
    (($fn5107) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5106);
    panda$core$String* $tmp5109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5108, forwardInclusiveTest5092);
    panda$core$String* $tmp5111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5109, &$s5110);
    panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5111, loopInc5046);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, &$s5113);
    panda$core$String* $tmp5115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, loopEnd4812);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5115, &$s5116);
    (($fn5118) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5117);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5081, p_out);
    panda$core$String* $tmp5120 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5119 = $tmp5120;
    panda$core$String* $tmp5122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5121, forwardExclusiveTest5119);
    panda$core$String* $tmp5124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5122, &$s5123);
    panda$core$String* $tmp5125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5124, numberType4703);
    panda$core$String* $tmp5127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5125, &$s5126);
    panda$core$String* $tmp5128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5127, forwardDelta5063);
    panda$core$String* $tmp5130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5128, &$s5129);
    panda$core$String* $tmp5131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5130, step4783);
    panda$core$String* $tmp5133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5131, &$s5132);
    (($fn5134) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5133);
    panda$core$String* $tmp5136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5135, forwardExclusiveTest5119);
    panda$core$String* $tmp5138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5136, &$s5137);
    panda$core$String* $tmp5139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5138, loopInc5046);
    panda$core$String* $tmp5141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5139, &$s5140);
    panda$core$String* $tmp5142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5141, loopEnd4812);
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5142, &$s5143);
    (($fn5145) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5144);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5050, p_out);
    panda$core$String* $tmp5147 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5146 = $tmp5147;
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5148, backwardDelta5146);
    panda$core$String* $tmp5151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5149, &$s5150);
    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5151, numberType4703);
    panda$core$String* $tmp5154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5152, &$s5153);
    panda$core$String* $tmp5155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5154, indexValue5023);
    panda$core$String* $tmp5157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5155, &$s5156);
    panda$core$String* $tmp5158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5157, end4763);
    panda$core$String* $tmp5160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, &$s5159);
    (($fn5161) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5160);
    panda$core$String* $tmp5163 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5162 = $tmp5163;
    panda$core$String* $tmp5165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5164, negStep5162);
    panda$core$String* $tmp5167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5165, &$s5166);
    panda$core$String* $tmp5168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5167, numberType4703);
    panda$core$String* $tmp5170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5168, &$s5169);
    panda$core$String* $tmp5171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5170, step4783);
    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5171, &$s5172);
    (($fn5174) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5173);
    panda$core$String* $tmp5176 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5175 = $tmp5176;
    panda$core$String* $tmp5178 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5177 = $tmp5178;
    panda$core$String* $tmp5180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5179, inclusive4798);
    panda$core$String* $tmp5182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5180, &$s5181);
    panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5182, backwardInclusiveLabel5175);
    panda$core$String* $tmp5185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5183, &$s5184);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5185, backwardExclusiveLabel5177);
    (($fn5187) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5186);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5175, p_out);
    panda$core$String* $tmp5189 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5188 = $tmp5189;
    panda$core$String* $tmp5191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5190, backwardInclusiveTest5188);
    panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5191, &$s5192);
    panda$core$String* $tmp5194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5193, numberType4703);
    panda$core$String* $tmp5196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5194, &$s5195);
    panda$core$String* $tmp5197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5196, backwardDelta5146);
    panda$core$String* $tmp5199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5197, &$s5198);
    panda$core$String* $tmp5200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5199, negStep5162);
    (($fn5201) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5200);
    panda$core$String* $tmp5203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5202, backwardInclusiveTest5188);
    panda$core$String* $tmp5205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5203, &$s5204);
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5205, loopInc5046);
    panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5206, &$s5207);
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5208, loopEnd4812);
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5209, &$s5210);
    (($fn5212) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5211);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5177, p_out);
    panda$core$String* $tmp5214 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5213 = $tmp5214;
    panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5215, backwardExclusiveTest5213);
    panda$core$String* $tmp5218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5216, &$s5217);
    panda$core$String* $tmp5219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5218, numberType4703);
    panda$core$String* $tmp5221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, &$s5220);
    panda$core$String* $tmp5222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5221, backwardDelta5146);
    panda$core$String* $tmp5224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5222, &$s5223);
    panda$core$String* $tmp5225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5224, negStep5162);
    (($fn5226) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5225);
    panda$core$String* $tmp5228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5227, backwardExclusiveTest5213);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, &$s5229);
    panda$core$String* $tmp5231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, loopInc5046);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5231, &$s5232);
    panda$core$String* $tmp5234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, loopEnd4812);
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5234, &$s5235);
    (($fn5237) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5236);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5046, p_out);
    panda$core$String* $tmp5239 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5238 = $tmp5239;
    panda$core$String* $tmp5241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5240, inc5238);
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5241, &$s5242);
    panda$core$String* $tmp5244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, numberType4703);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5244, &$s5245);
    panda$core$String* $tmp5247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, indexValue5023);
    panda$core$String* $tmp5249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5247, &$s5248);
    panda$core$String* $tmp5250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5249, step4783);
    panda$core$String* $tmp5252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5250, &$s5251);
    (($fn5253) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5252);
    panda$core$String* $tmp5255 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5254 = $tmp5255;
    panda$core$String* $tmp5257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5256, incStruct5254);
    panda$core$String* $tmp5259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5257, &$s5258);
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5259, indexType4689);
    panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, &$s5261);
    panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5262, numberType4703);
    panda$core$String* $tmp5265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5263, &$s5264);
    (($fn5266) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5265);
    panda$core$String* $tmp5268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5267, numberType4703);
    panda$core$String* $tmp5270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5268, &$s5269);
    panda$core$String* $tmp5271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5270, inc5238);
    panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5271, &$s5272);
    (($fn5274) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5273);
    panda$core$String* $tmp5276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5275, indexType4689);
    panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5276, &$s5277);
    panda$core$String* $tmp5279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, incStruct5254);
    panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5279, &$s5280);
    panda$core$String* $tmp5282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, indexType4689);
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5282, &$s5283);
    panda$core$String* $tmp5285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, index4711);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5285, &$s5286);
    (($fn5288) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5287);
    panda$core$String* $tmp5290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5289, loopStart4808);
    panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5290, &$s5291);
    (($fn5293) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5292);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4812, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5300;
    panda$core$String* loopBody5302;
    panda$core$String* loopEnd5304;
    panda$core$String* test5313;
    panda$core$String* testBit5316;
    panda$core$Bit $tmp5294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5294.value);
    panda$core$Int64 $tmp5295 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5295, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5296.value);
    panda$core$Object* $tmp5297 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5298 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5299 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5297)->type, $tmp5298);
    PANDA_ASSERT($tmp5299.value);
    panda$core$String* $tmp5301 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5300 = $tmp5301;
    panda$core$String* $tmp5303 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5302 = $tmp5303;
    panda$core$String* $tmp5305 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5304 = $tmp5305;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5306 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5306->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5306->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5306, ((panda$core$String*) p_w->payload), loopEnd5304, loopStart5300);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5306));
    panda$core$String* $tmp5309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5308, loopStart5300);
    panda$core$String* $tmp5311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5309, &$s5310);
    (($fn5312) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5311);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5300, p_out);
    panda$core$Object* $tmp5314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5315 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5314), p_out);
    test5313 = $tmp5315;
    panda$core$String* $tmp5317 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5316 = $tmp5317;
    panda$core$String* $tmp5319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5318, testBit5316);
    panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5319, &$s5320);
    panda$core$String* $tmp5322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5321, test5313);
    panda$core$String* $tmp5324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5322, &$s5323);
    (($fn5325) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5324);
    panda$core$String* $tmp5327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5326, testBit5316);
    panda$core$String* $tmp5329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5327, &$s5328);
    panda$core$String* $tmp5330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5329, loopBody5302);
    panda$core$String* $tmp5332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5330, &$s5331);
    panda$core$String* $tmp5333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, loopEnd5304);
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5333, &$s5334);
    (($fn5336) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5335);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5302, p_out);
    panda$core$Object* $tmp5337 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5337), p_out);
    panda$core$Object* $tmp5338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5339 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5338));
    panda$core$Bit $tmp5340 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5339);
    if ($tmp5340.value) {
    {
        panda$core$String* $tmp5342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5341, loopStart5300);
        panda$core$String* $tmp5344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5342, &$s5343);
        (($fn5345) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5344);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5304, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5352;
    panda$core$String* loopBody5354;
    panda$core$String* loopEnd5356;
    panda$core$String* test5365;
    panda$core$String* testBit5368;
    panda$core$Bit $tmp5346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5346.value);
    panda$core$Int64 $tmp5347 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5347, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5348.value);
    panda$core$Object* $tmp5349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5350 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5351 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5349)->type, $tmp5350);
    PANDA_ASSERT($tmp5351.value);
    panda$core$String* $tmp5353 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5352 = $tmp5353;
    panda$core$String* $tmp5355 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5354 = $tmp5355;
    panda$core$String* $tmp5357 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5356 = $tmp5357;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5358 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5358->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5358->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5358, ((panda$core$String*) p_d->payload), loopEnd5356, loopStart5352);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5358));
    panda$core$String* $tmp5361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5360, loopBody5354);
    panda$core$String* $tmp5363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5361, &$s5362);
    (($fn5364) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5363);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5352, p_out);
    panda$core$Object* $tmp5366 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5367 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5366), p_out);
    test5365 = $tmp5367;
    panda$core$String* $tmp5369 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5368 = $tmp5369;
    panda$core$String* $tmp5371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5370, testBit5368);
    panda$core$String* $tmp5373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5371, &$s5372);
    panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5373, test5365);
    panda$core$String* $tmp5376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, &$s5375);
    (($fn5377) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5376);
    panda$core$String* $tmp5379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5378, testBit5368);
    panda$core$String* $tmp5381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5379, &$s5380);
    panda$core$String* $tmp5382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5381, loopBody5354);
    panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5382, &$s5383);
    panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5384, loopEnd5356);
    panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5385, &$s5386);
    (($fn5388) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5387);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5354, p_out);
    panda$core$Object* $tmp5389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5389), p_out);
    panda$core$Object* $tmp5390 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5391 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5390));
    panda$core$Bit $tmp5392 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5391);
    if ($tmp5392.value) {
    {
        panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5393, loopStart5352);
        panda$core$String* $tmp5396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5394, &$s5395);
        (($fn5397) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5396);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5356, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5401;
    panda$core$String* loopEnd5403;
    panda$core$Bit $tmp5398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5398.value);
    panda$core$Int64 $tmp5399 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5399, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5400.value);
    panda$core$String* $tmp5402 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5401 = $tmp5402;
    panda$core$String* $tmp5404 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5403 = $tmp5404;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5405 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5405->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5405->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5405, ((panda$core$String*) p_l->payload), loopEnd5403, loopStart5401);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5405));
    panda$core$String* $tmp5408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5407, loopStart5401);
    panda$core$String* $tmp5410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5408, &$s5409);
    (($fn5411) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5410);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5401, p_out);
    panda$core$Object* $tmp5412 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5412), p_out);
    panda$core$Object* $tmp5413 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5414 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5413));
    panda$core$Bit $tmp5415 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5414);
    if ($tmp5415.value) {
    {
        panda$core$String* $tmp5417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5416, loopStart5401);
        panda$core$String* $tmp5419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5417, &$s5418);
        (($fn5420) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5419);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5403, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5421;
    panda$core$String* ref5432;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5421 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5423 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5421);
            panda$core$String* $tmp5424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5422, $tmp5423);
            panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5424, &$s5425);
            panda$core$String* $tmp5427 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5421->type);
            panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5426, $tmp5427);
            panda$core$String* $tmp5430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5428, &$s5429);
            (($fn5431) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5430);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5433 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref5432 = $tmp5433;
                panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5434, ref5432);
                panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5435, &$s5436);
                panda$core$String* $tmp5438 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5421->type);
                panda$core$String* $tmp5439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5437, $tmp5438);
                panda$core$String* $tmp5441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5439, &$s5440);
                panda$core$String* $tmp5442 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5421);
                panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5441, $tmp5442);
                panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, &$s5444);
                (($fn5446) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5445);
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
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* decl$Iter5460;
    org$pandalanguage$pandac$IRNode* decl5472;
    panda$core$Bit $tmp5450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5449 = $tmp5450.value;
    if ($tmp5449) goto $l5451;
    panda$core$Bit $tmp5452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5449 = $tmp5452.value;
    $l5451:;
    panda$core$Bit $tmp5453 = { $tmp5449 };
    bool $tmp5448 = $tmp5453.value;
    if ($tmp5448) goto $l5454;
    panda$core$Bit $tmp5455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5448 = $tmp5455.value;
    $l5454:;
    panda$core$Bit $tmp5456 = { $tmp5448 };
    bool $tmp5447 = $tmp5456.value;
    if ($tmp5447) goto $l5457;
    panda$core$Bit $tmp5458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5447 = $tmp5458.value;
    $l5457:;
    panda$core$Bit $tmp5459 = { $tmp5447 };
    PANDA_ASSERT($tmp5459.value);
    {
        ITable* $tmp5461 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5461->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5461 = $tmp5461->next;
        }
        $fn5463 $tmp5462 = $tmp5461->methods[0];
        panda$collections$Iterator* $tmp5464 = $tmp5462(((panda$collections$Iterable*) p_v->children));
        decl$Iter5460 = $tmp5464;
        $l5465:;
        ITable* $tmp5467 = decl$Iter5460->$class->itable;
        while ($tmp5467->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5467 = $tmp5467->next;
        }
        $fn5469 $tmp5468 = $tmp5467->methods[0];
        panda$core$Bit $tmp5470 = $tmp5468(decl$Iter5460);
        panda$core$Bit $tmp5471 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5470);
        if (!$tmp5471.value) goto $l5466;
        {
            ITable* $tmp5473 = decl$Iter5460->$class->itable;
            while ($tmp5473->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5473 = $tmp5473->next;
            }
            $fn5475 $tmp5474 = $tmp5473->methods[1];
            panda$core$Object* $tmp5476 = $tmp5474(decl$Iter5460);
            decl5472 = ((org$pandalanguage$pandac$IRNode*) $tmp5476);
            panda$core$Bit $tmp5477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5472->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5477.value);
            panda$core$Int64 $tmp5478 = panda$collections$Array$get_count$R$panda$core$Int64(decl5472->children);
            panda$core$Bit $tmp5479 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5478, ((panda$core$Int64) { 1 }));
            if ($tmp5479.value) {
            {
                panda$core$Object* $tmp5480 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5472->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5472->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5480), ((org$pandalanguage$pandac$IRNode*) $tmp5481), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5472->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5482), NULL, p_out);
            }
            }
        }
        goto $l5465;
        $l5466:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base5486;
    panda$core$String* ptr5489;
    org$pandalanguage$pandac$ClassDecl* cl5491;
    panda$collections$ListView* fields5494;
    panda$core$Int64 index5496;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5497;
    panda$core$String* result5559;
    panda$core$String* reused5562;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5483 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5484 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5483, p_out);
            return $tmp5484;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5485 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5485;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5487 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5488 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5487), p_out);
            base5486 = $tmp5488;
            panda$core$String* $tmp5490 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr5489 = $tmp5490;
            panda$core$Object* $tmp5492 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5493 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5492)->type);
            cl5491 = $tmp5493;
            PANDA_ASSERT(((panda$core$Bit) { cl5491 != NULL }).value);
            panda$collections$ListView* $tmp5495 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5491);
            fields5494 = $tmp5495;
            index5496 = ((panda$core$Int64) { -1 });
            ITable* $tmp5498 = ((panda$collections$CollectionView*) fields5494)->$class->itable;
            while ($tmp5498->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5498 = $tmp5498->next;
            }
            $fn5500 $tmp5499 = $tmp5498->methods[0];
            panda$core$Int64 $tmp5501 = $tmp5499(((panda$collections$CollectionView*) fields5494));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5497, ((panda$core$Int64) { 0 }), $tmp5501, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp5503 = $tmp5497.start.value;
            panda$core$Int64 i5502 = { $tmp5503 };
            int64_t $tmp5505 = $tmp5497.end.value;
            int64_t $tmp5506 = $tmp5497.step.value;
            bool $tmp5507 = $tmp5497.inclusive.value;
            bool $tmp5514 = $tmp5506 > 0;
            if ($tmp5514) goto $l5512; else goto $l5513;
            $l5512:;
            if ($tmp5507) goto $l5515; else goto $l5516;
            $l5515:;
            if ($tmp5503 <= $tmp5505) goto $l5508; else goto $l5510;
            $l5516:;
            if ($tmp5503 < $tmp5505) goto $l5508; else goto $l5510;
            $l5513:;
            if ($tmp5507) goto $l5517; else goto $l5518;
            $l5517:;
            if ($tmp5503 >= $tmp5505) goto $l5508; else goto $l5510;
            $l5518:;
            if ($tmp5503 > $tmp5505) goto $l5508; else goto $l5510;
            $l5508:;
            {
                ITable* $tmp5520 = fields5494->$class->itable;
                while ($tmp5520->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5520 = $tmp5520->next;
                }
                $fn5522 $tmp5521 = $tmp5520->methods[0];
                panda$core$Object* $tmp5523 = $tmp5521(fields5494, i5502);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5523))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name) }).value) {
                {
                    index5496 = i5502;
                    goto $l5510;
                }
                }
            }
            $l5511:;
            if ($tmp5514) goto $l5525; else goto $l5526;
            $l5525:;
            int64_t $tmp5527 = $tmp5505 - i5502.value;
            if ($tmp5507) goto $l5528; else goto $l5529;
            $l5528:;
            if ($tmp5527 >= $tmp5506) goto $l5524; else goto $l5510;
            $l5529:;
            if ($tmp5527 > $tmp5506) goto $l5524; else goto $l5510;
            $l5526:;
            int64_t $tmp5531 = i5502.value - $tmp5505;
            if ($tmp5507) goto $l5532; else goto $l5533;
            $l5532:;
            if ($tmp5531 >= -$tmp5506) goto $l5524; else goto $l5510;
            $l5533:;
            if ($tmp5531 > -$tmp5506) goto $l5524; else goto $l5510;
            $l5524:;
            i5502.value += $tmp5506;
            goto $l5508;
            $l5510:;
            panda$core$Bit $tmp5535 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5496, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5535.value);
            panda$core$String* $tmp5537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5536, ptr5489);
            panda$core$String* $tmp5539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5537, &$s5538);
            org$pandalanguage$pandac$Type* $tmp5540 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5491);
            panda$core$String* $tmp5541 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5540);
            panda$core$String* $tmp5542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5539, $tmp5541);
            panda$core$String* $tmp5544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5542, &$s5543);
            org$pandalanguage$pandac$Type* $tmp5546 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5491);
            panda$core$String* $tmp5547 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5546);
            panda$core$String* $tmp5548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5545, $tmp5547);
            panda$core$String* $tmp5550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5548, &$s5549);
            panda$core$String* $tmp5551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5550, base5486);
            panda$core$String* $tmp5553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5551, &$s5552);
            panda$core$String* $tmp5554 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5553, ((panda$core$Object*) wrap_panda$core$Int64(index5496)));
            panda$core$String* $tmp5556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5554, &$s5555);
            panda$core$String* $tmp5557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5544, $tmp5556);
            (($fn5558) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5557);
            return ptr5489;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5560 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5561 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5560), p_out);
            result5559 = $tmp5561;
            panda$core$String* $tmp5563 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5562 = $tmp5563;
            panda$core$String* $tmp5565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5564, reused5562);
            panda$core$String* $tmp5567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5565, &$s5566);
            panda$core$String* $tmp5568 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5567, $tmp5568);
            panda$core$String* $tmp5571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5569, &$s5570);
            panda$core$String* $tmp5573 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5572, $tmp5573);
            panda$core$String* $tmp5576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5574, &$s5575);
            panda$core$String* $tmp5577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5576, result5559);
            panda$core$String* $tmp5579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5577, &$s5578);
            panda$core$String* $tmp5580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5571, $tmp5579);
            (($fn5581) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5580);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5562));
            return result5559;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue5585;
    panda$core$String* value5597;
    panda$core$String* t5598;
    panda$core$Int64 op5601;
    panda$core$String* right5603;
    panda$core$Bit $tmp5582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5582.value);
    panda$core$Int64 $tmp5583 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5583, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5584.value);
    panda$core$Object* $tmp5587 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5588 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5587)->type);
    panda$core$String* $tmp5589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5586, $tmp5588);
    panda$core$String* $tmp5591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5589, &$s5590);
    panda$core$Object* $tmp5592 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5593 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5592), p_out);
    panda$core$String* $tmp5594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5591, $tmp5593);
    panda$core$String* $tmp5596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5594, &$s5595);
    lvalue5585 = $tmp5596;
    panda$core$Object* $tmp5599 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5600 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5599)->type);
    t5598 = $tmp5600;
    op5601 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5602 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5601, ((panda$core$Int64) { 73 }));
    if ($tmp5602.value) {
    {
        panda$core$Object* $tmp5604 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5605 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5604), p_out);
        right5603 = $tmp5605;
        panda$core$String* $tmp5607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5606, t5598);
        panda$core$String* $tmp5609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5607, &$s5608);
        panda$core$String* $tmp5610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5609, right5603);
        panda$core$String* $tmp5612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5610, &$s5611);
        value5597 = $tmp5612;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5613, value5597);
    panda$core$String* $tmp5616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5614, &$s5615);
    panda$core$String* $tmp5617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5616, lvalue5585);
    panda$core$String* $tmp5619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5617, &$s5618);
    (($fn5620) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5619);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5625;
    panda$core$String* result5627;
    panda$core$Int64 $tmp5621 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5621, ((panda$core$Int64) { 1 }));
    if ($tmp5622.value) {
    {
        panda$core$Int64 $tmp5623 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5624 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5623, ((panda$core$Int64) { 0 }));
        if ($tmp5624.value) {
        {
            panda$core$Object* $tmp5626 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5625 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5626);
            panda$core$Object* $tmp5628 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5629 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5628), p_out);
            result5627 = $tmp5629;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5630 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5630->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5630->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5630, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5627));
            panda$collections$Array$add$panda$collections$Array$T(inline5625->returns, ((panda$core$Object*) $tmp5630));
            panda$core$String* $tmp5633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5632, inline5625->exitLabel);
            panda$core$String* $tmp5635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5633, &$s5634);
            org$pandalanguage$pandac$Position* $tmp5636 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self->compiler, p_r->offset);
            panda$core$String* $tmp5637 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5635, ((panda$core$Object*) $tmp5636));
            panda$core$String* $tmp5639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5637, &$s5638);
            (($fn5640) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5639);
        }
        }
        else {
        {
            panda$core$Object* $tmp5642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5643 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5642), p_out);
            panda$core$String* $tmp5644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5641, $tmp5643);
            panda$core$String* $tmp5646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5644, &$s5645);
            (($fn5647) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5646);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5648 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5648, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp5649.value);
        panda$core$Int64 $tmp5650 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5651 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5650, ((panda$core$Int64) { 0 }));
        if ($tmp5651.value) {
        {
            panda$core$Object* $tmp5653 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5652, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5653)->exitLabel);
            panda$core$String* $tmp5656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5654, &$s5655);
            (($fn5657) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5656);
        }
        }
        else {
        {
            (($fn5659) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5658);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5663;
    panda$core$Int64 $tmp5660 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5661 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5660, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5661.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5662 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5662);
    }
    }
    panda$core$Int64 $tmp5664 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5663, ((panda$core$Int64) { 0 }), $tmp5664, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5666 = $tmp5663.start.value;
    panda$core$Int64 i5665 = { $tmp5666 };
    int64_t $tmp5668 = $tmp5663.end.value;
    int64_t $tmp5669 = $tmp5663.step.value;
    bool $tmp5670 = $tmp5663.inclusive.value;
    bool $tmp5677 = $tmp5669 > 0;
    if ($tmp5677) goto $l5675; else goto $l5676;
    $l5675:;
    if ($tmp5670) goto $l5678; else goto $l5679;
    $l5678:;
    if ($tmp5666 <= $tmp5668) goto $l5671; else goto $l5673;
    $l5679:;
    if ($tmp5666 < $tmp5668) goto $l5671; else goto $l5673;
    $l5676:;
    if ($tmp5670) goto $l5680; else goto $l5681;
    $l5680:;
    if ($tmp5666 >= $tmp5668) goto $l5671; else goto $l5673;
    $l5681:;
    if ($tmp5666 > $tmp5668) goto $l5671; else goto $l5673;
    $l5671:;
    {
        panda$core$Object* $tmp5684 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5665);
        bool $tmp5683 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5684)->loopLabel != NULL }).value;
        if (!$tmp5683) goto $l5685;
        panda$core$Object* $tmp5686 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5665);
        panda$core$Bit $tmp5687 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5686)->loopLabel, p_name);
        $tmp5683 = $tmp5687.value;
        $l5685:;
        panda$core$Bit $tmp5688 = { $tmp5683 };
        if ($tmp5688.value) {
        {
            panda$core$Object* $tmp5689 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5665);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5689);
        }
        }
    }
    $l5674:;
    if ($tmp5677) goto $l5691; else goto $l5692;
    $l5691:;
    int64_t $tmp5693 = $tmp5668 - i5665.value;
    if ($tmp5670) goto $l5694; else goto $l5695;
    $l5694:;
    if ($tmp5693 >= $tmp5669) goto $l5690; else goto $l5673;
    $l5695:;
    if ($tmp5693 > $tmp5669) goto $l5690; else goto $l5673;
    $l5692:;
    int64_t $tmp5697 = i5665.value - $tmp5668;
    if ($tmp5670) goto $l5698; else goto $l5699;
    $l5698:;
    if ($tmp5697 >= -$tmp5669) goto $l5690; else goto $l5673;
    $l5699:;
    if ($tmp5697 > -$tmp5669) goto $l5690; else goto $l5673;
    $l5690:;
    i5665.value += $tmp5669;
    goto $l5671;
    $l5673:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5701;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5702 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5701 = $tmp5702;
    panda$core$String* $tmp5704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5703, desc5701->breakLabel);
    panda$core$String* $tmp5706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5704, &$s5705);
    (($fn5707) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5706);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5708;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5709 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5708 = $tmp5709;
    panda$core$String* $tmp5711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5710, desc5708->continueLabel);
    panda$core$String* $tmp5713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5711, &$s5712);
    (($fn5714) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5713);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5724;
    panda$core$String* ifTrue5727;
    panda$core$String* ifFalse5729;
    org$pandalanguage$pandac$Position* p5742;
    panda$core$String* name5744;
    panda$core$String$Index$nullable index5745;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5748;
    panda$core$String* nameRef5750;
    panda$core$String* line5752;
    panda$core$String* msg5757;
    panda$collections$Iterator* m$Iter5764;
    org$pandalanguage$pandac$MethodDecl* m5778;
    panda$core$Bit $tmp5715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5715.value);
    panda$core$Int64 $tmp5717 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5717, ((panda$core$Int64) { 1 }));
    bool $tmp5716 = $tmp5718.value;
    if ($tmp5716) goto $l5719;
    panda$core$Int64 $tmp5720 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5720, ((panda$core$Int64) { 2 }));
    $tmp5716 = $tmp5721.value;
    $l5719:;
    panda$core$Bit $tmp5722 = { $tmp5716 };
    PANDA_ASSERT($tmp5722.value);
    panda$core$Bit $tmp5723 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5723.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5725 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5726 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5725), p_out);
    test5724 = $tmp5726;
    panda$core$String* $tmp5728 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5727 = $tmp5728;
    panda$core$String* $tmp5730 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5729 = $tmp5730;
    panda$core$String* $tmp5732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5731, test5724);
    panda$core$String* $tmp5734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5732, &$s5733);
    panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5734, ifTrue5727);
    panda$core$String* $tmp5737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5735, &$s5736);
    panda$core$String* $tmp5738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5737, ifFalse5729);
    panda$core$String* $tmp5740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5738, &$s5739);
    (($fn5741) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5740);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse5729, p_out);
    org$pandalanguage$pandac$Position* $tmp5743 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self->compiler, p_a->offset);
    p5742 = $tmp5743;
    panda$core$String$Index$nullable $tmp5747 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p5742->file, &$s5746);
    index5745 = $tmp5747;
    if (((panda$core$Bit) { !index5745.nonnull }).value) {
    {
        name5744 = p5742->file;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp5748, index5745, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5749 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p5742->file, $tmp5748);
        name5744 = $tmp5749;
    }
    }
    panda$core$String* $tmp5751 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name5744, p_out);
    nameRef5750 = $tmp5751;
    panda$core$String* $tmp5754 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5753, ((panda$core$Object*) wrap_panda$core$Int64(p5742->line)));
    panda$core$String* $tmp5756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5754, &$s5755);
    line5752 = $tmp5756;
    panda$core$Int64 $tmp5758 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5758, ((panda$core$Int64) { 2 }));
    if ($tmp5759.value) {
    {
        panda$core$Object* $tmp5760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5761 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5760), p_out);
        msg5757 = $tmp5761;
    }
    }
    else {
    {
        msg5757 = NULL;
    }
    }
    (($fn5763) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5762);
    {
        org$pandalanguage$pandac$Type* $tmp5765 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5766 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5765);
        ITable* $tmp5767 = ((panda$collections$Iterable*) $tmp5766->methods)->$class->itable;
        while ($tmp5767->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5767 = $tmp5767->next;
        }
        $fn5769 $tmp5768 = $tmp5767->methods[0];
        panda$collections$Iterator* $tmp5770 = $tmp5768(((panda$collections$Iterable*) $tmp5766->methods));
        m$Iter5764 = $tmp5770;
        $l5771:;
        ITable* $tmp5773 = m$Iter5764->$class->itable;
        while ($tmp5773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5773 = $tmp5773->next;
        }
        $fn5775 $tmp5774 = $tmp5773->methods[0];
        panda$core$Bit $tmp5776 = $tmp5774(m$Iter5764);
        panda$core$Bit $tmp5777 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5776);
        if (!$tmp5777.value) goto $l5772;
        {
            ITable* $tmp5779 = m$Iter5764->$class->itable;
            while ($tmp5779->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5779 = $tmp5779->next;
            }
            $fn5781 $tmp5780 = $tmp5779->methods[1];
            panda$core$Object* $tmp5782 = $tmp5780(m$Iter5764);
            m5778 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5782);
            panda$core$Bit $tmp5784 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5778)->name, &$s5783);
            if ($tmp5784.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5778);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5778);
            }
            }
        }
        goto $l5771;
        $l5772:;
    }
    if (((panda$core$Bit) { msg5757 != NULL }).value) {
    {
        panda$core$String* $tmp5787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5785, &$s5786);
        (($fn5788) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5787);
    }
    }
    else {
    {
        (($fn5790) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5789);
    }
    }
    panda$core$String* $tmp5792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5791, nameRef5750);
    panda$core$String* $tmp5794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5792, &$s5793);
    panda$core$String* $tmp5795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5794, line5752);
    panda$core$String* $tmp5797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5795, &$s5796);
    (($fn5798) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5797);
    if (((panda$core$Bit) { msg5757 != NULL }).value) {
    {
        panda$core$String* $tmp5800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5799, msg5757);
        panda$core$String* $tmp5802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5800, &$s5801);
        (($fn5803) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5802);
    }
    }
    (($fn5805) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5804);
    (($fn5807) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5806);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue5727, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* valueStruct5809;
    org$pandalanguage$pandac$ClassDecl* numberClass5812;
    panda$core$String* value5815;
    org$pandalanguage$pandac$FieldDecl* f5825;
    panda$core$String* switchType5828;
    panda$core$String* endLabel5838;
    panda$collections$Array* whenLabels5840;
    panda$core$String* otherwiseLabel5843;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5854;
    org$pandalanguage$pandac$IRNode* w5874;
    panda$core$String* label5878;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5880;
    panda$core$UInt64 number5901;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5939;
    org$pandalanguage$pandac$IRNode* w5959;
    org$pandalanguage$pandac$IRNode* block5961;
    panda$core$Bit $tmp5808 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp5808.value);
    panda$core$Object* $tmp5810 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5811 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5810), p_out);
    valueStruct5809 = $tmp5811;
    panda$core$Object* $tmp5813 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp5814 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5813)->type);
    numberClass5812 = $tmp5814;
    panda$core$String* $tmp5816 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value5815 = $tmp5816;
    panda$core$String* $tmp5818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5817, value5815);
    panda$core$String* $tmp5820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5818, &$s5819);
    panda$core$String* $tmp5821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5820, valueStruct5809);
    panda$core$String* $tmp5823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5821, &$s5822);
    (($fn5824) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5823);
    org$pandalanguage$pandac$Symbol* $tmp5827 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass5812->symbolTable, &$s5826);
    f5825 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5827);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f5825);
    panda$core$String* $tmp5829 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f5825->type);
    switchType5828 = $tmp5829;
    panda$core$String* $tmp5831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5830, switchType5828);
    panda$core$String* $tmp5833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5831, &$s5832);
    panda$core$String* $tmp5834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5833, value5815);
    panda$core$String* $tmp5836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5834, &$s5835);
    (($fn5837) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5836);
    panda$core$String* $tmp5839 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel5838 = $tmp5839;
    panda$collections$Array* $tmp5841 = (panda$collections$Array*) malloc(40);
    $tmp5841->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5841->refCount.value = 1;
    panda$collections$Array$init($tmp5841);
    whenLabels5840 = $tmp5841;
    panda$core$Int64 $tmp5844 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp5845 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5844, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5846 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp5845);
    panda$core$Bit $tmp5847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5846)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp5847.value) {
    {
        panda$core$String* $tmp5848 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel5843 = $tmp5848;
    }
    }
    else {
    {
        otherwiseLabel5843 = endLabel5838;
    }
    }
    panda$core$String* $tmp5850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5849, otherwiseLabel5843);
    panda$core$String* $tmp5852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5850, &$s5851);
    (($fn5853) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5852);
    panda$core$Int64 $tmp5855 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5854, ((panda$core$Int64) { 1 }), $tmp5855, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5857 = $tmp5854.start.value;
    panda$core$Int64 i5856 = { $tmp5857 };
    int64_t $tmp5859 = $tmp5854.end.value;
    int64_t $tmp5860 = $tmp5854.step.value;
    bool $tmp5861 = $tmp5854.inclusive.value;
    bool $tmp5868 = $tmp5860 > 0;
    if ($tmp5868) goto $l5866; else goto $l5867;
    $l5866:;
    if ($tmp5861) goto $l5869; else goto $l5870;
    $l5869:;
    if ($tmp5857 <= $tmp5859) goto $l5862; else goto $l5864;
    $l5870:;
    if ($tmp5857 < $tmp5859) goto $l5862; else goto $l5864;
    $l5867:;
    if ($tmp5861) goto $l5871; else goto $l5872;
    $l5871:;
    if ($tmp5857 >= $tmp5859) goto $l5862; else goto $l5864;
    $l5872:;
    if ($tmp5857 > $tmp5859) goto $l5862; else goto $l5864;
    $l5862:;
    {
        panda$core$Object* $tmp5875 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5856);
        w5874 = ((org$pandalanguage$pandac$IRNode*) $tmp5875);
        panda$core$Bit $tmp5876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5874->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp5876.value) {
        {
            goto $l5865;
        }
        }
        panda$core$Bit $tmp5877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5874->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp5877.value);
        panda$core$String* $tmp5879 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label5878 = $tmp5879;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels5840, ((panda$core$Object*) label5878));
        panda$core$Int64 $tmp5881 = panda$collections$Array$get_count$R$panda$core$Int64(w5874->children);
        panda$core$Int64 $tmp5882 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5881, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5880, ((panda$core$Int64) { 0 }), $tmp5882, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp5884 = $tmp5880.start.value;
        panda$core$Int64 i5883 = { $tmp5884 };
        int64_t $tmp5886 = $tmp5880.end.value;
        int64_t $tmp5887 = $tmp5880.step.value;
        bool $tmp5888 = $tmp5880.inclusive.value;
        bool $tmp5895 = $tmp5887 > 0;
        if ($tmp5895) goto $l5893; else goto $l5894;
        $l5893:;
        if ($tmp5888) goto $l5896; else goto $l5897;
        $l5896:;
        if ($tmp5884 <= $tmp5886) goto $l5889; else goto $l5891;
        $l5897:;
        if ($tmp5884 < $tmp5886) goto $l5889; else goto $l5891;
        $l5894:;
        if ($tmp5888) goto $l5898; else goto $l5899;
        $l5898:;
        if ($tmp5884 >= $tmp5886) goto $l5889; else goto $l5891;
        $l5899:;
        if ($tmp5884 > $tmp5886) goto $l5889; else goto $l5891;
        $l5889:;
        {
            panda$core$Object* $tmp5902 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5874->children, i5883);
            panda$core$UInt64 $tmp5903 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5902));
            number5901 = $tmp5903;
            panda$core$String* $tmp5905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5904, switchType5828);
            panda$core$String* $tmp5907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5905, &$s5906);
            panda$core$String* $tmp5908 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5907, ((panda$core$Object*) wrap_panda$core$UInt64(number5901)));
            panda$core$String* $tmp5910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5908, &$s5909);
            panda$core$String* $tmp5911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5910, label5878);
            panda$core$String* $tmp5913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5911, &$s5912);
            (($fn5914) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5913);
        }
        $l5892:;
        if ($tmp5895) goto $l5916; else goto $l5917;
        $l5916:;
        int64_t $tmp5918 = $tmp5886 - i5883.value;
        if ($tmp5888) goto $l5919; else goto $l5920;
        $l5919:;
        if ($tmp5918 >= $tmp5887) goto $l5915; else goto $l5891;
        $l5920:;
        if ($tmp5918 > $tmp5887) goto $l5915; else goto $l5891;
        $l5917:;
        int64_t $tmp5922 = i5883.value - $tmp5886;
        if ($tmp5888) goto $l5923; else goto $l5924;
        $l5923:;
        if ($tmp5922 >= -$tmp5887) goto $l5915; else goto $l5891;
        $l5924:;
        if ($tmp5922 > -$tmp5887) goto $l5915; else goto $l5891;
        $l5915:;
        i5883.value += $tmp5887;
        goto $l5889;
        $l5891:;
    }
    $l5865:;
    if ($tmp5868) goto $l5927; else goto $l5928;
    $l5927:;
    int64_t $tmp5929 = $tmp5859 - i5856.value;
    if ($tmp5861) goto $l5930; else goto $l5931;
    $l5930:;
    if ($tmp5929 >= $tmp5860) goto $l5926; else goto $l5864;
    $l5931:;
    if ($tmp5929 > $tmp5860) goto $l5926; else goto $l5864;
    $l5928:;
    int64_t $tmp5933 = i5856.value - $tmp5859;
    if ($tmp5861) goto $l5934; else goto $l5935;
    $l5934:;
    if ($tmp5933 >= -$tmp5860) goto $l5926; else goto $l5864;
    $l5935:;
    if ($tmp5933 > -$tmp5860) goto $l5926; else goto $l5864;
    $l5926:;
    i5856.value += $tmp5860;
    goto $l5862;
    $l5864:;
    (($fn5938) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5937);
    panda$core$Int64 $tmp5940 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5939, ((panda$core$Int64) { 1 }), $tmp5940, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5942 = $tmp5939.start.value;
    panda$core$Int64 i5941 = { $tmp5942 };
    int64_t $tmp5944 = $tmp5939.end.value;
    int64_t $tmp5945 = $tmp5939.step.value;
    bool $tmp5946 = $tmp5939.inclusive.value;
    bool $tmp5953 = $tmp5945 > 0;
    if ($tmp5953) goto $l5951; else goto $l5952;
    $l5951:;
    if ($tmp5946) goto $l5954; else goto $l5955;
    $l5954:;
    if ($tmp5942 <= $tmp5944) goto $l5947; else goto $l5949;
    $l5955:;
    if ($tmp5942 < $tmp5944) goto $l5947; else goto $l5949;
    $l5952:;
    if ($tmp5946) goto $l5956; else goto $l5957;
    $l5956:;
    if ($tmp5942 >= $tmp5944) goto $l5947; else goto $l5949;
    $l5957:;
    if ($tmp5942 > $tmp5944) goto $l5947; else goto $l5949;
    $l5947:;
    {
        panda$core$Object* $tmp5960 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5941);
        w5959 = ((org$pandalanguage$pandac$IRNode*) $tmp5960);
        panda$core$Int64 $tmp5962 = panda$collections$Array$get_count$R$panda$core$Int64(w5959->children);
        panda$core$Int64 $tmp5963 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5962, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp5964 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5959->children, $tmp5963);
        block5961 = ((org$pandalanguage$pandac$IRNode*) $tmp5964);
        panda$core$Int64 $tmp5965 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5941, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp5966 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels5840);
        panda$core$Bit $tmp5967 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5965, $tmp5966);
        if ($tmp5967.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, otherwiseLabel5843, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp5968 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5941, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp5969 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels5840, $tmp5968);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ((panda$core$String*) $tmp5969), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block5961, p_out);
        panda$core$Bit $tmp5970 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block5961);
        panda$core$Bit $tmp5971 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5970);
        if ($tmp5971.value) {
        {
            panda$core$String* $tmp5973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5972, endLabel5838);
            panda$core$String* $tmp5975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5973, &$s5974);
            (($fn5976) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5975);
        }
        }
    }
    $l5950:;
    if ($tmp5953) goto $l5978; else goto $l5979;
    $l5978:;
    int64_t $tmp5980 = $tmp5944 - i5941.value;
    if ($tmp5946) goto $l5981; else goto $l5982;
    $l5981:;
    if ($tmp5980 >= $tmp5945) goto $l5977; else goto $l5949;
    $l5982:;
    if ($tmp5980 > $tmp5945) goto $l5977; else goto $l5949;
    $l5979:;
    int64_t $tmp5984 = i5941.value - $tmp5944;
    if ($tmp5946) goto $l5985; else goto $l5986;
    $l5985:;
    if ($tmp5984 >= -$tmp5945) goto $l5977; else goto $l5949;
    $l5986:;
    if ($tmp5984 > -$tmp5945) goto $l5977; else goto $l5949;
    $l5977:;
    i5941.value += $tmp5945;
    goto $l5947;
    $l5949:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel5838, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    switch (p_stmt->kind.value) {
        case 1023:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1000:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1005:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, p_stmt, NULL, p_out);
        }
        break;
        case 1012:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1029:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1013:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1014:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1015:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1017:
        case 1018:
        case 1019:
        case 1020:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1008:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1006:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1007:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1034:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        case 1042:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result5988;
    org$pandalanguage$pandac$Type* $tmp5989 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp5990 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5989);
    result5988 = $tmp5990;
    panda$core$Bit $tmp5992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp5991 = $tmp5992.value;
    if (!$tmp5991) goto $l5993;
    panda$core$Bit $tmp5995 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result5988, &$s5994);
    panda$core$Bit $tmp5996 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5995);
    $tmp5991 = $tmp5996.value;
    $l5993:;
    panda$core$Bit $tmp5997 = { $tmp5991 };
    if ($tmp5997.value) {
    {
        panda$core$String* $tmp5999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result5988, &$s5998);
        return $tmp5999;
    }
    }
    return result5988;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6000;
    panda$core$Bit needsIndirection6009;
    panda$core$String* separator6021;
    panda$collections$Iterator* p$Iter6042;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6054;
    panda$core$String* $tmp6001 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6000 = $tmp6001;
    panda$core$Bit $tmp6002 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6000));
    if ($tmp6002.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6000));
    panda$core$String* $tmp6004 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6003, $tmp6004);
    panda$core$String* $tmp6007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6005, &$s6006);
    (($fn6008) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6007);
    panda$core$Bit $tmp6010 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6009 = $tmp6010;
    if (needsIndirection6009.value) {
    {
        (($fn6012) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6011);
    }
    }
    else {
    {
        panda$core$String* $tmp6013 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6014) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6013);
    }
    }
    panda$core$String* $tmp6016 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6015, $tmp6016);
    panda$core$String* $tmp6019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6017, &$s6018);
    (($fn6020) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6019);
    separator6021 = &$s6022;
    if (needsIndirection6009.value) {
    {
        panda$core$String* $tmp6024 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6023, $tmp6024);
        panda$core$String* $tmp6027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6025, &$s6026);
        (($fn6028) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6027);
        separator6021 = &$s6029;
    }
    }
    panda$core$Bit $tmp6030 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6031 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6030);
    if ($tmp6031.value) {
    {
        panda$core$String* $tmp6033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6032, separator6021);
        panda$core$String* $tmp6035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6033, &$s6034);
        panda$core$String* $tmp6036 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6035, $tmp6036);
        panda$core$String* $tmp6039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6037, &$s6038);
        (($fn6040) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6039);
        separator6021 = &$s6041;
    }
    }
    {
        ITable* $tmp6043 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6043->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6043 = $tmp6043->next;
        }
        $fn6045 $tmp6044 = $tmp6043->methods[0];
        panda$collections$Iterator* $tmp6046 = $tmp6044(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6042 = $tmp6046;
        $l6047:;
        ITable* $tmp6049 = p$Iter6042->$class->itable;
        while ($tmp6049->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6049 = $tmp6049->next;
        }
        $fn6051 $tmp6050 = $tmp6049->methods[0];
        panda$core$Bit $tmp6052 = $tmp6050(p$Iter6042);
        panda$core$Bit $tmp6053 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6052);
        if (!$tmp6053.value) goto $l6048;
        {
            ITable* $tmp6055 = p$Iter6042->$class->itable;
            while ($tmp6055->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6055 = $tmp6055->next;
            }
            $fn6057 $tmp6056 = $tmp6055->methods[1];
            panda$core$Object* $tmp6058 = $tmp6056(p$Iter6042);
            p6054 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6058);
            panda$core$String* $tmp6060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6059, separator6021);
            panda$core$String* $tmp6062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6060, &$s6061);
            panda$core$String* $tmp6063 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6054->type);
            panda$core$String* $tmp6064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6062, $tmp6063);
            panda$core$String* $tmp6066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6064, &$s6065);
            panda$core$String* $tmp6067 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6054->name);
            panda$core$String* $tmp6068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6066, $tmp6067);
            panda$core$String* $tmp6070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6068, &$s6069);
            (($fn6071) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6070);
            separator6021 = &$s6072;
        }
        goto $l6047;
        $l6048:;
    }
    (($fn6074) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6073);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6097;
    panda$collections$Iterator* p$Iter6108;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6120;
    panda$io$MemoryOutputStream* bodyBuffer6143;
    panda$io$IndentedOutputStream* indentedBody6146;
    panda$collections$Iterator* s$Iter6149;
    org$pandalanguage$pandac$IRNode* s6161;
    panda$core$Object* $tmp6075 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6075)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6076;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn6077) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    (($fn6079) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6078);
    panda$core$Bit $tmp6080 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6080.value) {
    {
        (($fn6082) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6081);
    }
    }
    panda$core$String* $tmp6084 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6083, $tmp6084);
    panda$core$String* $tmp6087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6085, &$s6086);
    panda$core$String* $tmp6088 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6087, $tmp6088);
    panda$core$String* $tmp6091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6089, &$s6090);
    panda$core$String* $tmp6092 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6091, $tmp6092);
    panda$core$String* $tmp6095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6093, &$s6094);
    (($fn6096) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6095);
    separator6097 = &$s6098;
    panda$core$Bit $tmp6099 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6100 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6099);
    if ($tmp6100.value) {
    {
        panda$core$String* $tmp6102 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6101, $tmp6102);
        panda$core$String* $tmp6105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6103, &$s6104);
        (($fn6106) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6105);
        separator6097 = &$s6107;
    }
    }
    {
        ITable* $tmp6109 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6109->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6109 = $tmp6109->next;
        }
        $fn6111 $tmp6110 = $tmp6109->methods[0];
        panda$collections$Iterator* $tmp6112 = $tmp6110(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6108 = $tmp6112;
        $l6113:;
        ITable* $tmp6115 = p$Iter6108->$class->itable;
        while ($tmp6115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6115 = $tmp6115->next;
        }
        $fn6117 $tmp6116 = $tmp6115->methods[0];
        panda$core$Bit $tmp6118 = $tmp6116(p$Iter6108);
        panda$core$Bit $tmp6119 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6118);
        if (!$tmp6119.value) goto $l6114;
        {
            ITable* $tmp6121 = p$Iter6108->$class->itable;
            while ($tmp6121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6121 = $tmp6121->next;
            }
            $fn6123 $tmp6122 = $tmp6121->methods[1];
            panda$core$Object* $tmp6124 = $tmp6122(p$Iter6108);
            p6120 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6124);
            panda$core$String* $tmp6126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6125, separator6097);
            panda$core$String* $tmp6128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6126, &$s6127);
            panda$core$String* $tmp6129 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6120->type);
            panda$core$String* $tmp6130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6128, $tmp6129);
            panda$core$String* $tmp6132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6130, &$s6131);
            panda$core$String* $tmp6133 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6120->name);
            panda$core$String* $tmp6134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6132, $tmp6133);
            panda$core$String* $tmp6136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6134, &$s6135);
            (($fn6137) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6136);
            separator6097 = &$s6138;
        }
        goto $l6113;
        $l6114:;
    }
    (($fn6140) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6139);
    panda$core$Int64 $tmp6141 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6141;
    panda$core$Bit $tmp6142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6142.value);
    panda$io$MemoryOutputStream* $tmp6144 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6144->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6144->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6144);
    bodyBuffer6143 = $tmp6144;
    panda$io$IndentedOutputStream* $tmp6147 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp6147->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6147->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6147, ((panda$io$OutputStream*) bodyBuffer6143));
    indentedBody6146 = $tmp6147;
    {
        ITable* $tmp6150 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6150->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6150 = $tmp6150->next;
        }
        $fn6152 $tmp6151 = $tmp6150->methods[0];
        panda$collections$Iterator* $tmp6153 = $tmp6151(((panda$collections$Iterable*) p_body->children));
        s$Iter6149 = $tmp6153;
        $l6154:;
        ITable* $tmp6156 = s$Iter6149->$class->itable;
        while ($tmp6156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6156 = $tmp6156->next;
        }
        $fn6158 $tmp6157 = $tmp6156->methods[0];
        panda$core$Bit $tmp6159 = $tmp6157(s$Iter6149);
        panda$core$Bit $tmp6160 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6159);
        if (!$tmp6160.value) goto $l6155;
        {
            ITable* $tmp6162 = s$Iter6149->$class->itable;
            while ($tmp6162->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6162 = $tmp6162->next;
            }
            $fn6164 $tmp6163 = $tmp6162->methods[1];
            panda$core$Object* $tmp6165 = $tmp6163(s$Iter6149);
            s6161 = ((org$pandalanguage$pandac$IRNode*) $tmp6165);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6161, indentedBody6146);
        }
        goto $l6154;
        $l6155:;
    }
    panda$core$String* $tmp6167 = (($fn6166) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn6168) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6167);
    panda$core$String* $tmp6170 = (($fn6169) bodyBuffer6143->$class->vtable[0])(bodyBuffer6143);
    (($fn6171) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6170);
    panda$core$Bit $tmp6172 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6173 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6172);
    if ($tmp6173.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6174 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6175 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6174);
        if ($tmp6175.value) {
        {
            (($fn6177) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6176);
        }
        }
        else {
        {
            (($fn6179) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6178);
        }
        }
    }
    }
    panda$core$Int64 $tmp6180 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6180;
    (($fn6182) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6181);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6183 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6183.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6184 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6184);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

