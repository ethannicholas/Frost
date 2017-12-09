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
#include "org/pandalanguage/pandac/Position.h"
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
typedef void (*$fn1028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1054)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1085)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1098)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1106)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1115)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1121)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1127)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1154)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1193)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1204)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1210)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1216)(panda$collections$Iterator*);
typedef void (*$fn1232)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1351)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1371)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1430)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1441)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1447)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1453)(panda$collections$Iterator*);
typedef void (*$fn1468)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1487)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1510)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1576)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1587)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1610)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1639)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1802)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1808)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1814)(panda$collections$Iterator*);
typedef void (*$fn1848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1864)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1878)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1914)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1930)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1944)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1950)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1966)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2025)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2042)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2052)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2079)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2106)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2128)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2158)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2168)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2181)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2215)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2228)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2262)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2281)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2306)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2343)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2353)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2369)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2385)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2424)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2443)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2450)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2472)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2490)(panda$collections$CollectionView*);
typedef void (*$fn2512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2541)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2591)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2605)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2620)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2646)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2688)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2701)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2722)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2738)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2755)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2768)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2786)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2805)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2820)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2924)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2931)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2943)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2949)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2955)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2961)(panda$collections$Iterator*);
typedef void (*$fn2973)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2975)(panda$io$OutputStream*);
typedef void (*$fn3002)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3152)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3174)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3191)(panda$collections$Iterator*);
typedef void (*$fn3200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3203)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3216)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3240)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3255)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3300)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3319)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3337)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3370)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3375)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3393)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3409)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3428)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3450)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3472)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3504)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3526)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3544)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3559)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3570)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3638)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3654)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3679)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3771)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3828)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3871)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3886)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3910)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3921)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3935)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3978)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4013)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4025)(panda$collections$CollectionView*);
typedef void (*$fn4037)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4044)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4050)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4056)(panda$collections$Iterator*);
typedef void (*$fn4066)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4069)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4107)(panda$collections$CollectionView*);
typedef void (*$fn4115)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4133)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4208)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4217)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4227)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4260)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4272)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4308)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4314)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4320)(panda$collections$Iterator*);
typedef void (*$fn4343)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4371)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4398)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4410)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4427)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4432)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4546)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4581)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4585)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4591)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4597)(panda$collections$Iterator*);
typedef void (*$fn4599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4603)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4666)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4702)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4709)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4722)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4732)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4750)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4764)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4809)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4862)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4879)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4911)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4932)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4943)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4981)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4992)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5013)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5024)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5040)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5064)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5080)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5093)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5109)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5136)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5163)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5176)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5189)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5203)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5228)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5239)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5255)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5268)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5290)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5295)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5314)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5347)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5366)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5379)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5390)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5413)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5422)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5433)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5448)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5465)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5471)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5477)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5502)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5524)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5560)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5638)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5657)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5705)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5712)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5739)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5761)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5767)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5773)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5779)(panda$collections$Iterator*);
typedef void (*$fn5786)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5788)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5796)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5801)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5803)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5805)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5822)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5835)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5851)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5912)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5936)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5974)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6006)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6010)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6012)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6018)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6038)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6043)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6049)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6055)(panda$collections$Iterator*);
typedef void (*$fn6069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6072)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6075)(panda$io$MemoryOutputStream*);
typedef void (*$fn6077)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6080)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6094)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6104)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6109)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6115)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6121)(panda$collections$Iterator*);
typedef void (*$fn6135)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6138)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6150)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6156)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6162)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6164)(panda$io$MemoryOutputStream*);
typedef void (*$fn6166)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6167)(panda$io$MemoryOutputStream*);
typedef void (*$fn6169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6177)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6180)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s1101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, 1 };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s1157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s1200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, 1 };
static panda$core$String $s1287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, 1 };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, 1 };
static panda$core$String $s1564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, 1 };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 1 };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, 1 };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 1 };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 1 };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, 1 };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 1 };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 1 };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 1 };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 1 };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 1 };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 1 };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 1 };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 1 };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1 };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1 };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 1 };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1 };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1 };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1 };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 1 };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 1 };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 1 };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 1 };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 1 };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 1 };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s1791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 1 };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 1 };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 1 };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1 };
static panda$core$String $s1827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, 1 };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, 1 };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 1 };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 1 };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 1 };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 1 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 1 };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 1 };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 1 };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 1 };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 1 };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 1 };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 1 };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 1 };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 1 };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 1 };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 1 };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 1 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 1 };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 1 };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 1 };
static panda$core$String $s2007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 1 };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 1 };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 48, 1 };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 30, 1 };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 1 };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 1 };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 1 };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 1 };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 1 };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, 1 };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1 };
static panda$core$String $s2372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 1 };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 1 };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1 };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 1 };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, 1 };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, 1 };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 1 };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s2761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 1 };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 1 };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, 1 };
static panda$core$String $s2911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 1 };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s2930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s2932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 1 };
static panda$core$String $s2935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s2974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s3132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 1 };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s3164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1 };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1 };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, 1 };
static panda$core$String $s3371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, 1 };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, 1 };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s3539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s3549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s3551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s3568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1 };
static panda$core$String $s3585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, 1 };
static panda$core$String $s3588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s3590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s3593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 1 };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 1 };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 1 };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 1 };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 1 };
static panda$core$String $s3755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s3812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s3843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s3866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s3877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s3884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s3919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s3953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s3961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 1 };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s3968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s3975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s3991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s3992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s3999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 1 };
static panda$core$String $s4018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s4028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1 };
static panda$core$String $s4030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, 1 };
static panda$core$String $s4035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s4039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 1 };
static panda$core$String $s4064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s4072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 1 };
static panda$core$String $s4074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, 1 };
static panda$core$String $s4085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s4087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 69, 1 };
static panda$core$String $s4095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, 1 };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, 1 };
static panda$core$String $s4110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x31\x20\x7D\x20\x7D", 26, 1 };
static panda$core$String $s4119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s4122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, 1 };
static panda$core$String $s4147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 1 };
static panda$core$String $s4150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, 1 };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 1 };
static panda$core$String $s4168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 1 };
static panda$core$String $s4201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s4215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 1 };
static panda$core$String $s4239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s4249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s4255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s4258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 1 };
static panda$core$String $s4267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 1 };
static panda$core$String $s4270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s4336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s4364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s4384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s4392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s4420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s4428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 1 };
static panda$core$String $s4430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s4435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s4501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s4539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s4544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s4550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 1 };
static panda$core$String $s4552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s4557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s4570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s4601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s4653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s4664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, 1 };
static panda$core$String $s4715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s4720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1 };
static panda$core$String $s4735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s4740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 1 };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1 };
static panda$core$String $s4777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1 };
static panda$core$String $s4786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s4789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, 1 };
static panda$core$String $s4794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1 };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s4827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s4829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, 1 };
static panda$core$String $s4832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, 1 };
static panda$core$String $s4835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s4837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 1 };
static panda$core$String $s4845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 1 };
static panda$core$String $s4852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s4876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 1 };
static panda$core$String $s4890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 1 };
static panda$core$String $s4922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s4957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 1 };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s5000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 1 };
static panda$core$String $s5003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s5174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 1 };
static panda$core$String $s5247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s5263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s5266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1 };
static panda$core$String $s5269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s5271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s5431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s5545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 1 };
static panda$core$String $s5557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s5643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s5701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s5751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s5753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s5760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, 1 };
static panda$core$String $s5781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1 };
static panda$core$String $s5783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, 1 };
static panda$core$String $s5784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, 1 };
static panda$core$String $s5787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, 1 };
static panda$core$String $s5789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, 1 };
static panda$core$String $s5791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 1 };
static panda$core$String $s5799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s5815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, 1 };
static panda$core$String $s5828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, 1 };
static panda$core$String $s5830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s5849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, 1 };
static panda$core$String $s5902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, 1 };
static panda$core$String $s5904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, 1 };
static panda$core$String $s5970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s5996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 1 };
static panda$core$String $s6004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s6013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s6020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s6039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s6067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s6074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s6076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s6079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s6081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s6096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s6105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s6133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s6174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s6176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s6179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

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
    org$pandalanguage$pandac$Position $tmp1012;
    panda$core$String* unwrapped1014;
    org$pandalanguage$pandac$Position $tmp1017;
    panda$core$String* returnValue1020;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1055;
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
    org$pandalanguage$pandac$IRNode* $tmp1010 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1010->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1010->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1012);
    org$pandalanguage$pandac$Type* $tmp1013 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1010, ((panda$core$Int64) { 1025 }), $tmp1012, $tmp1013);
    panda$collections$Array$add$panda$collections$Array$T(children1007, ((panda$core$Object*) $tmp1010));
    org$pandalanguage$pandac$IRNode* $tmp1015 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1015->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1017);
    org$pandalanguage$pandac$Type* $tmp1018 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1015, ((panda$core$Int64) { 1009 }), $tmp1017, $tmp1018, ((panda$collections$ListView*) children1007));
    panda$core$String* $tmp1019 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1015, p_out);
    unwrapped1014 = $tmp1019;
    org$pandalanguage$pandac$Type* $tmp1021 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1022 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1021);
    if ($tmp1022.value) {
    {
        panda$core$String* $tmp1023 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue1020 = $tmp1023;
        panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1024, returnValue1020);
        panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1025, &$s1026);
        (($fn1028) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1027);
        panda$core$String* $tmp1030 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1029, $tmp1030);
        panda$core$String* $tmp1033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1031, &$s1032);
        panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1033, returnValue1020);
        panda$core$String* $tmp1036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1034, &$s1035);
        returnValue1020 = $tmp1036;
    }
    }
    else {
    {
        returnValue1020 = &$s1037;
    }
    }
    panda$core$String* $tmp1039 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1038, $tmp1039);
    panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, &$s1041);
    panda$core$String* $tmp1043 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, $tmp1043);
    panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, &$s1045);
    panda$core$String* $tmp1047 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1046, $tmp1047);
    panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, &$s1049);
    panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, unwrapped1014);
    panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1052);
    (($fn1054) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1053);
    panda$core$Int64 $tmp1056 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1055, ((panda$core$Int64) { 0 }), $tmp1056, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1058 = $tmp1055.start.value;
    panda$core$Int64 i1057 = { $tmp1058 };
    int64_t $tmp1060 = $tmp1055.end.value;
    int64_t $tmp1061 = $tmp1055.step.value;
    bool $tmp1062 = $tmp1055.inclusive.value;
    bool $tmp1069 = $tmp1061 > 0;
    if ($tmp1069) goto $l1067; else goto $l1068;
    $l1067:;
    if ($tmp1062) goto $l1070; else goto $l1071;
    $l1070:;
    if ($tmp1058 <= $tmp1060) goto $l1063; else goto $l1065;
    $l1071:;
    if ($tmp1058 < $tmp1060) goto $l1063; else goto $l1065;
    $l1068:;
    if ($tmp1062) goto $l1072; else goto $l1073;
    $l1072:;
    if ($tmp1058 >= $tmp1060) goto $l1063; else goto $l1065;
    $l1073:;
    if ($tmp1058 > $tmp1060) goto $l1063; else goto $l1065;
    $l1063:;
    {
        panda$core$Object* $tmp1076 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType913->subtypes, i1057);
        panda$core$String* $tmp1077 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1076));
        panda$core$String* $tmp1078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1075, $tmp1077);
        panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1078, &$s1079);
        panda$core$Object* $tmp1081 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters967, i1057);
        panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1080, ((panda$core$String*) $tmp1081));
        panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, &$s1083);
        (($fn1085) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1084);
    }
    $l1066:;
    if ($tmp1069) goto $l1087; else goto $l1088;
    $l1087:;
    int64_t $tmp1089 = $tmp1060 - i1057.value;
    if ($tmp1062) goto $l1090; else goto $l1091;
    $l1090:;
    if ($tmp1089 >= $tmp1061) goto $l1086; else goto $l1065;
    $l1091:;
    if ($tmp1089 > $tmp1061) goto $l1086; else goto $l1065;
    $l1088:;
    int64_t $tmp1093 = i1057.value - $tmp1060;
    if ($tmp1062) goto $l1094; else goto $l1095;
    $l1094:;
    if ($tmp1093 >= -$tmp1061) goto $l1086; else goto $l1065;
    $l1095:;
    if ($tmp1093 > -$tmp1061) goto $l1086; else goto $l1065;
    $l1086:;
    i1057.value += $tmp1061;
    goto $l1063;
    $l1065:;
    (($fn1098) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1097);
    panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1099, returnValue1020);
    panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1100, &$s1101);
    (($fn1103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1102);
    panda$core$Int64 $tmp1104 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1104;
    (($fn1106) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1105);
    self->varCount = oldVarCount883;
    return result884;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1107;
    panda$core$String* previous1110;
    panda$collections$Iterator* intfType$Iter1112;
    org$pandalanguage$pandac$Type* intfType1124;
    org$pandalanguage$pandac$ClassDecl* intf1129;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1131;
    panda$collections$ListView* methods1133;
    panda$core$String* name1135;
    panda$core$String* t1145;
    panda$core$MutableString* result1159;
    panda$core$String* separator1199;
    panda$collections$Iterator* m$Iter1201;
    org$pandalanguage$pandac$MethodDecl* m1213;
    panda$core$String* shim1221;
    org$pandalanguage$pandac$Type* $tmp1108 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1109 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1108);
    interfaces1107 = $tmp1109;
    previous1110 = &$s1111;
    {
        ITable* $tmp1113 = ((panda$collections$Iterable*) interfaces1107)->$class->itable;
        while ($tmp1113->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1113 = $tmp1113->next;
        }
        $fn1115 $tmp1114 = $tmp1113->methods[0];
        panda$collections$Iterator* $tmp1116 = $tmp1114(((panda$collections$Iterable*) interfaces1107));
        intfType$Iter1112 = $tmp1116;
        $l1117:;
        ITable* $tmp1119 = intfType$Iter1112->$class->itable;
        while ($tmp1119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1119 = $tmp1119->next;
        }
        $fn1121 $tmp1120 = $tmp1119->methods[0];
        panda$core$Bit $tmp1122 = $tmp1120(intfType$Iter1112);
        panda$core$Bit $tmp1123 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1122);
        if (!$tmp1123.value) goto $l1118;
        {
            ITable* $tmp1125 = intfType$Iter1112->$class->itable;
            while ($tmp1125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1125 = $tmp1125->next;
            }
            $fn1127 $tmp1126 = $tmp1125->methods[1];
            panda$core$Object* $tmp1128 = $tmp1126(intfType$Iter1112);
            intfType1124 = ((org$pandalanguage$pandac$Type*) $tmp1128);
            org$pandalanguage$pandac$ClassDecl* $tmp1130 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1124);
            intf1129 = $tmp1130;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1132 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1129);
            intfCC1131 = $tmp1132;
            panda$collections$ListView* $tmp1134 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1124);
            methods1133 = $tmp1134;
            panda$core$String* $tmp1137 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1136, $tmp1137);
            panda$core$String* $tmp1140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1138, &$s1139);
            panda$core$String* $tmp1141 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1129)->name);
            panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1140, $tmp1141);
            panda$core$String* $tmp1144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, &$s1143);
            name1135 = $tmp1144;
            org$pandalanguage$pandac$Type* $tmp1147 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1148 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1147);
            panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1146, $tmp1148);
            panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1149, &$s1150);
            ITable* $tmp1152 = ((panda$collections$CollectionView*) methods1133)->$class->itable;
            while ($tmp1152->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1152 = $tmp1152->next;
            }
            $fn1154 $tmp1153 = $tmp1152->methods[0];
            panda$core$Int64 $tmp1155 = $tmp1153(((panda$collections$CollectionView*) methods1133));
            panda$core$String* $tmp1156 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1151, ((panda$core$Object*) wrap_panda$core$Int64($tmp1155)));
            panda$core$String* $tmp1158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1156, &$s1157);
            t1145 = $tmp1158;
            panda$core$MutableString* $tmp1160 = (panda$core$MutableString*) malloc(40);
            $tmp1160->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1160->refCount.value = 1;
            panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1162, name1135);
            panda$core$String* $tmp1165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, &$s1164);
            panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1165, t1145);
            panda$core$String* $tmp1168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1166, &$s1167);
            org$pandalanguage$pandac$Type* $tmp1169 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1170 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1169);
            panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1168, $tmp1170);
            panda$core$String* $tmp1173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1171, &$s1172);
            panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1174, intfCC1131->type);
            panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1176);
            panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1177, intfCC1131->name);
            panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1178, &$s1179);
            org$pandalanguage$pandac$Type* $tmp1181 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1182 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1181);
            panda$core$String* $tmp1183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1180, $tmp1182);
            panda$core$String* $tmp1185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1183, &$s1184);
            panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1173, $tmp1185);
            panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1187, previous1110);
            panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1188, &$s1189);
            ITable* $tmp1191 = ((panda$collections$CollectionView*) methods1133)->$class->itable;
            while ($tmp1191->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1191 = $tmp1191->next;
            }
            $fn1193 $tmp1192 = $tmp1191->methods[0];
            panda$core$Int64 $tmp1194 = $tmp1192(((panda$collections$CollectionView*) methods1133));
            panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1190, ((panda$core$Object*) wrap_panda$core$Int64($tmp1194)));
            panda$core$String* $tmp1197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1195, &$s1196);
            panda$core$String* $tmp1198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1186, $tmp1197);
            panda$core$MutableString$init$panda$core$String($tmp1160, $tmp1198);
            result1159 = $tmp1160;
            separator1199 = &$s1200;
            {
                ITable* $tmp1202 = ((panda$collections$Iterable*) methods1133)->$class->itable;
                while ($tmp1202->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1202 = $tmp1202->next;
                }
                $fn1204 $tmp1203 = $tmp1202->methods[0];
                panda$collections$Iterator* $tmp1205 = $tmp1203(((panda$collections$Iterable*) methods1133));
                m$Iter1201 = $tmp1205;
                $l1206:;
                ITable* $tmp1208 = m$Iter1201->$class->itable;
                while ($tmp1208->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1208 = $tmp1208->next;
                }
                $fn1210 $tmp1209 = $tmp1208->methods[0];
                panda$core$Bit $tmp1211 = $tmp1209(m$Iter1201);
                panda$core$Bit $tmp1212 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1211);
                if (!$tmp1212.value) goto $l1207;
                {
                    ITable* $tmp1214 = m$Iter1201->$class->itable;
                    while ($tmp1214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1214 = $tmp1214->next;
                    }
                    $fn1216 $tmp1215 = $tmp1214->methods[1];
                    panda$core$Object* $tmp1217 = $tmp1215(m$Iter1201);
                    m1213 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1217);
                    panda$core$MutableString$append$panda$core$String(result1159, separator1199);
                    separator1199 = &$s1218;
                    panda$core$Bit $tmp1219 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1213->annotations);
                    if ($tmp1219.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1159, &$s1220);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1222 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1213, self->wrapperShims);
                        shim1221 = $tmp1222;
                        panda$core$String* $tmp1224 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1213);
                        panda$core$String* $tmp1225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1223, $tmp1224);
                        panda$core$String* $tmp1227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1225, &$s1226);
                        panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1227, shim1221);
                        panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1229);
                        panda$core$MutableString$append$panda$core$String(result1159, $tmp1230);
                    }
                    }
                }
                goto $l1206;
                $l1207:;
            }
            panda$core$MutableString$append$panda$core$String(result1159, &$s1231);
            (($fn1232) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result1159));
            panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1233, t1145);
            panda$core$String* $tmp1236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1234, &$s1235);
            panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1236, name1135);
            panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1237, &$s1238);
            previous1110 = $tmp1239;
        }
        goto $l1117;
        $l1118:;
    }
    return previous1110;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1242;
    panda$core$Bit $tmp1240 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1240);
    if ($tmp1241.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1245 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1244 = $tmp1245.value;
    if (!$tmp1244) goto $l1246;
    panda$core$Bit $tmp1247 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1244 = $tmp1247.value;
    $l1246:;
    panda$core$Bit $tmp1248 = { $tmp1244 };
    bool $tmp1243 = $tmp1248.value;
    if (!$tmp1243) goto $l1249;
    org$pandalanguage$pandac$ClassDecl* $tmp1250 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1251 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1250);
    $tmp1243 = $tmp1251.value;
    $l1249:;
    panda$core$Bit $tmp1252 = { $tmp1243 };
    result1242 = $tmp1252;
    panda$core$Bit $tmp1254 = panda$core$Bit$$NOT$R$panda$core$Bit(result1242);
    bool $tmp1253 = $tmp1254.value;
    if ($tmp1253) goto $l1255;
    panda$core$Bit $tmp1257 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1258 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1257);
    bool $tmp1256 = $tmp1258.value;
    if (!$tmp1256) goto $l1259;
    panda$core$Bit $tmp1261 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1260 = $tmp1261.value;
    if ($tmp1260) goto $l1262;
    panda$core$Bit $tmp1263 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1260 = $tmp1263.value;
    $l1262:;
    panda$core$Bit $tmp1264 = { $tmp1260 };
    $tmp1256 = $tmp1264.value;
    $l1259:;
    panda$core$Bit $tmp1265 = { $tmp1256 };
    $tmp1253 = $tmp1265.value;
    $l1255:;
    panda$core$Bit $tmp1266 = { $tmp1253 };
    PANDA_ASSERT($tmp1266.value);
    return result1242;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1267;
    org$pandalanguage$pandac$Type* declared1268;
    org$pandalanguage$pandac$Type* inherited1271;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1274;
    panda$core$MutableString* resultType1279;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1288;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1269 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1270 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1269);
    declared1268 = $tmp1270;
    org$pandalanguage$pandac$Type* $tmp1272 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1271 = $tmp1272;
    panda$core$Bit $tmp1273 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1268, inherited1271);
    if ($tmp1273.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1275 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1276 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1275, ((panda$io$OutputStream*) self->shims));
        shim1274 = $tmp1276;
        resultName1267 = shim1274->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1277 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1267 = $tmp1277;
    }
    }
    panda$core$Bit $tmp1278 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1278.value) {
    {
        panda$core$MutableString* $tmp1280 = (panda$core$MutableString*) malloc(40);
        $tmp1280->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1280->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1280, &$s1282);
        resultType1279 = $tmp1280;
        panda$core$Int64 $tmp1283 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inherited1271->subtypes);
        panda$core$Int64 $tmp1284 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1283, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1285 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inherited1271->subtypes, $tmp1284);
        panda$core$String* $tmp1286 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1285));
        panda$core$MutableString$append$panda$core$String(resultType1279, $tmp1286);
        panda$core$MutableString$append$panda$core$String(resultType1279, &$s1287);
        panda$core$Int64 $tmp1289 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inherited1271->subtypes);
        panda$core$Int64 $tmp1290 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1289, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1288, ((panda$core$Int64) { 0 }), $tmp1290, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp1292 = $tmp1288.start.value;
        panda$core$Int64 i1291 = { $tmp1292 };
        int64_t $tmp1294 = $tmp1288.end.value;
        int64_t $tmp1295 = $tmp1288.step.value;
        bool $tmp1296 = $tmp1288.inclusive.value;
        bool $tmp1303 = $tmp1295 > 0;
        if ($tmp1303) goto $l1301; else goto $l1302;
        $l1301:;
        if ($tmp1296) goto $l1304; else goto $l1305;
        $l1304:;
        if ($tmp1292 <= $tmp1294) goto $l1297; else goto $l1299;
        $l1305:;
        if ($tmp1292 < $tmp1294) goto $l1297; else goto $l1299;
        $l1302:;
        if ($tmp1296) goto $l1306; else goto $l1307;
        $l1306:;
        if ($tmp1292 >= $tmp1294) goto $l1297; else goto $l1299;
        $l1307:;
        if ($tmp1292 > $tmp1294) goto $l1297; else goto $l1299;
        $l1297:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1279, &$s1309);
            panda$core$Object* $tmp1310 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inherited1271->subtypes, i1291);
            panda$core$String* $tmp1311 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1310));
            panda$core$MutableString$append$panda$core$String(resultType1279, $tmp1311);
        }
        $l1300:;
        if ($tmp1303) goto $l1313; else goto $l1314;
        $l1313:;
        int64_t $tmp1315 = $tmp1294 - i1291.value;
        if ($tmp1296) goto $l1316; else goto $l1317;
        $l1316:;
        if ($tmp1315 >= $tmp1295) goto $l1312; else goto $l1299;
        $l1317:;
        if ($tmp1315 > $tmp1295) goto $l1312; else goto $l1299;
        $l1314:;
        int64_t $tmp1319 = i1291.value - $tmp1294;
        if ($tmp1296) goto $l1320; else goto $l1321;
        $l1320:;
        if ($tmp1319 >= -$tmp1295) goto $l1312; else goto $l1299;
        $l1321:;
        if ($tmp1319 > -$tmp1295) goto $l1312; else goto $l1299;
        $l1312:;
        i1291.value += $tmp1295;
        goto $l1297;
        $l1299:;
        panda$core$MutableString$append$panda$core$String(resultType1279, &$s1323);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1324 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1324->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1324->refCount.value = 1;
        panda$core$String* $tmp1326 = panda$core$MutableString$convert$R$panda$core$String(resultType1279);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1324, ((panda$core$Object*) resultName1267), ((panda$core$Object*) $tmp1326));
        return $tmp1324;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1327 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1327->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1327->refCount.value = 1;
    panda$core$String* $tmp1329 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1271);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1327, ((panda$core$Object*) resultName1267), ((panda$core$Object*) $tmp1329));
    return $tmp1327;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1332;
    panda$core$String* type1334;
    panda$collections$ListView* vtable1353;
    panda$core$String* superPtr1377;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1378;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1389;
    panda$core$MutableString* code1393;
    panda$core$String* separator1436;
    panda$collections$Iterator* m$Iter1438;
    org$pandalanguage$pandac$MethodDecl* m1450;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1457;
    panda$core$Bit $tmp1330 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1331 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1330);
    PANDA_ASSERT($tmp1331.value);
    panda$core$Object* $tmp1333 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1332 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1333);
    if (((panda$core$Bit) { result1332 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1335 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1335->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1335->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1338 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1339 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1338)->name);
            panda$core$String* $tmp1340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1337, $tmp1339);
            panda$core$String* $tmp1342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1340, &$s1341);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1335, $tmp1342, &$s1343);
            result1332 = $tmp1335;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1332));
            panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1344, result1332->name);
            panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1345, &$s1346);
            panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1347, result1332->type);
            panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1348, &$s1349);
            (($fn1351) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1350);
            panda$core$Object* $tmp1352 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1352);
        }
        }
        panda$collections$ListView* $tmp1354 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1353 = $tmp1354;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1355 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1355->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1355->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1358 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1359 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1358)->name);
        panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1357, $tmp1359);
        panda$core$String* $tmp1362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, &$s1361);
        panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1363, &$s1364);
        panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, &$s1366);
        ITable* $tmp1369 = ((panda$collections$CollectionView*) vtable1353)->$class->itable;
        while ($tmp1369->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1369 = $tmp1369->next;
        }
        $fn1371 $tmp1370 = $tmp1369->methods[0];
        panda$core$Int64 $tmp1372 = $tmp1370(((panda$collections$CollectionView*) vtable1353));
        panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1368, ((panda$core$Object*) wrap_panda$core$Int64($tmp1372)));
        panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1373, &$s1374);
        panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, $tmp1375);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1355, $tmp1362, $tmp1376);
        result1332 = $tmp1355;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1332));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1379 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1380 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1379);
            superCC1378 = $tmp1380;
            panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1381, superCC1378->type);
            panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, &$s1383);
            panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, superCC1378->name);
            panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1385, &$s1386);
            superPtr1377 = $tmp1387;
        }
        }
        else {
        {
            superPtr1377 = &$s1388;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1390 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1391 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1390);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1392 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1391);
        clConstant1389 = $tmp1392;
        panda$core$MutableString* $tmp1394 = (panda$core$MutableString*) malloc(40);
        $tmp1394->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1394->refCount.value = 1;
        panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1396, result1332->name);
        panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1397, &$s1398);
        panda$core$MutableString$init$panda$core$String($tmp1394, $tmp1399);
        code1393 = $tmp1394;
        panda$core$Bit $tmp1400 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1400.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1393, &$s1401);
        }
        }
        panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1402, result1332->type);
        panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1403, &$s1404);
        panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1406, clConstant1389->type);
        panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1407, &$s1408);
        panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1409, clConstant1389->name);
        panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1411);
        panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1405, $tmp1412);
        panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1414, &$s1415);
        panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1417);
        panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, superPtr1377);
        panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1420);
        panda$core$String* $tmp1422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1413, $tmp1421);
        panda$core$String* $tmp1424 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1423, $tmp1424);
        panda$core$String* $tmp1427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1425, &$s1426);
        ITable* $tmp1428 = ((panda$collections$CollectionView*) vtable1353)->$class->itable;
        while ($tmp1428->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1428 = $tmp1428->next;
        }
        $fn1430 $tmp1429 = $tmp1428->methods[0];
        panda$core$Int64 $tmp1431 = $tmp1429(((panda$collections$CollectionView*) vtable1353));
        panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1427, ((panda$core$Object*) wrap_panda$core$Int64($tmp1431)));
        panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1433);
        panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1422, $tmp1434);
        panda$core$MutableString$append$panda$core$String(code1393, $tmp1435);
        separator1436 = &$s1437;
        {
            ITable* $tmp1439 = ((panda$collections$Iterable*) vtable1353)->$class->itable;
            while ($tmp1439->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1439 = $tmp1439->next;
            }
            $fn1441 $tmp1440 = $tmp1439->methods[0];
            panda$collections$Iterator* $tmp1442 = $tmp1440(((panda$collections$Iterable*) vtable1353));
            m$Iter1438 = $tmp1442;
            $l1443:;
            ITable* $tmp1445 = m$Iter1438->$class->itable;
            while ($tmp1445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1445 = $tmp1445->next;
            }
            $fn1447 $tmp1446 = $tmp1445->methods[0];
            panda$core$Bit $tmp1448 = $tmp1446(m$Iter1438);
            panda$core$Bit $tmp1449 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1448);
            if (!$tmp1449.value) goto $l1444;
            {
                ITable* $tmp1451 = m$Iter1438->$class->itable;
                while ($tmp1451->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1451 = $tmp1451->next;
                }
                $fn1453 $tmp1452 = $tmp1451->methods[1];
                panda$core$Object* $tmp1454 = $tmp1452(m$Iter1438);
                m1450 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1454);
                panda$core$MutableString$append$panda$core$String(code1393, separator1436);
                panda$core$Bit $tmp1455 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1450->annotations);
                if ($tmp1455.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1393, &$s1456);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1458 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1450);
                    entry1457 = $tmp1458;
                    panda$core$String* $tmp1460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1459, ((panda$core$String*) entry1457->second));
                    panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, &$s1461);
                    panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, ((panda$core$String*) entry1457->first));
                    panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, &$s1464);
                    panda$core$MutableString$append$panda$core$String(code1393, $tmp1465);
                }
                }
                separator1436 = &$s1466;
            }
            goto $l1443;
            $l1444:;
        }
        panda$core$MutableString$append$panda$core$String(code1393, &$s1467);
        (($fn1468) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1393));
    }
    }
    return result1332;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1469;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1475;
    panda$core$String* type1478;
    org$pandalanguage$pandac$ClassDecl* value1490;
    panda$collections$ListView* valueVTable1493;
    panda$collections$ListView* vtable1516;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1518;
    panda$core$String* superCast1521;
    panda$core$String* itable1529;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1531;
    panda$core$MutableString* code1535;
    panda$core$String* separator1582;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1584;
    org$pandalanguage$pandac$MethodDecl* m1607;
    panda$core$String* methodName1612;
    PANDA_ASSERT(p_cl->resolved.value);
    panda$core$String* $tmp1471 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1470, $tmp1471);
    panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1472, &$s1473);
    name1469 = $tmp1474;
    panda$core$Object* $tmp1476 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1469));
    result1475 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1476);
    if (((panda$core$Bit) { result1475 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1477 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1477);
            type1478 = &$s1479;
            panda$core$String* $tmp1481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1480, name1469);
            panda$core$String* $tmp1483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1481, &$s1482);
            panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1483, type1478);
            panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1484, &$s1485);
            (($fn1487) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1486);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1488 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1488->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1488->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1488, name1469, type1478);
            result1475 = $tmp1488;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1491 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1492 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1491);
            value1490 = $tmp1492;
            panda$collections$ListView* $tmp1494 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1490);
            valueVTable1493 = $tmp1494;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1495 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1495->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1495->refCount.value = 1;
            panda$core$String* $tmp1498 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1497, $tmp1498);
            panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1499, &$s1500);
            panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1502, &$s1503);
            panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1504, &$s1505);
            ITable* $tmp1508 = ((panda$collections$CollectionView*) valueVTable1493)->$class->itable;
            while ($tmp1508->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1508 = $tmp1508->next;
            }
            $fn1510 $tmp1509 = $tmp1508->methods[0];
            panda$core$Int64 $tmp1511 = $tmp1509(((panda$collections$CollectionView*) valueVTable1493));
            panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1507, ((panda$core$Object*) wrap_panda$core$Int64($tmp1511)));
            panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1512, &$s1513);
            panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1506, $tmp1514);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1495, $tmp1501, $tmp1515);
            result1475 = $tmp1495;
            panda$collections$ListView* $tmp1517 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1516 = $tmp1517;
            org$pandalanguage$pandac$ClassDecl* $tmp1519 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1520 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1519);
            superCC1518 = $tmp1520;
            panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1522, superCC1518->type);
            panda$core$String* $tmp1525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, &$s1524);
            panda$core$String* $tmp1526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1525, superCC1518->name);
            panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1526, &$s1527);
            superCast1521 = $tmp1528;
            panda$core$String* $tmp1530 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1529 = $tmp1530;
            org$pandalanguage$pandac$Type* $tmp1532 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1533 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1532);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1534 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1533);
            clConstant1531 = $tmp1534;
            panda$core$MutableString* $tmp1536 = (panda$core$MutableString*) malloc(40);
            $tmp1536->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1536->refCount.value = 1;
            panda$core$String* $tmp1539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1538, result1475->name);
            panda$core$String* $tmp1541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1539, &$s1540);
            panda$core$MutableString$init$panda$core$String($tmp1536, $tmp1541);
            code1535 = $tmp1536;
            panda$core$Bit $tmp1542 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1542.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1535, &$s1543);
            }
            }
            panda$core$String* $tmp1545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1544, result1475->type);
            panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1545, &$s1546);
            panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1548, clConstant1531->type);
            panda$core$String* $tmp1551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1549, &$s1550);
            panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1551, clConstant1531->name);
            panda$core$String* $tmp1554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1552, &$s1553);
            panda$core$String* $tmp1555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1547, $tmp1554);
            panda$core$String* $tmp1558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1556, &$s1557);
            panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1558, &$s1559);
            org$pandalanguage$pandac$Type* $tmp1561 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1562 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1561);
            panda$core$String* $tmp1563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1560, $tmp1562);
            panda$core$String* $tmp1565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1563, &$s1564);
            panda$core$String* $tmp1566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1565, superCast1521);
            panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1566, &$s1567);
            panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1555, $tmp1568);
            panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1570, itable1529);
            panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1571, &$s1572);
            ITable* $tmp1574 = ((panda$collections$CollectionView*) valueVTable1493)->$class->itable;
            while ($tmp1574->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1574 = $tmp1574->next;
            }
            $fn1576 $tmp1575 = $tmp1574->methods[0];
            panda$core$Int64 $tmp1577 = $tmp1575(((panda$collections$CollectionView*) valueVTable1493));
            panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1573, ((panda$core$Object*) wrap_panda$core$Int64($tmp1577)));
            panda$core$String* $tmp1580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1578, &$s1579);
            panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, $tmp1580);
            panda$core$MutableString$append$panda$core$String(code1535, $tmp1581);
            separator1582 = &$s1583;
            ITable* $tmp1585 = ((panda$collections$CollectionView*) valueVTable1493)->$class->itable;
            while ($tmp1585->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1585 = $tmp1585->next;
            }
            $fn1587 $tmp1586 = $tmp1585->methods[0];
            panda$core$Int64 $tmp1588 = $tmp1586(((panda$collections$CollectionView*) valueVTable1493));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1584, ((panda$core$Int64) { 0 }), $tmp1588, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1590 = $tmp1584.start.value;
            panda$core$Int64 i1589 = { $tmp1590 };
            int64_t $tmp1592 = $tmp1584.end.value;
            int64_t $tmp1593 = $tmp1584.step.value;
            bool $tmp1594 = $tmp1584.inclusive.value;
            bool $tmp1601 = $tmp1593 > 0;
            if ($tmp1601) goto $l1599; else goto $l1600;
            $l1599:;
            if ($tmp1594) goto $l1602; else goto $l1603;
            $l1602:;
            if ($tmp1590 <= $tmp1592) goto $l1595; else goto $l1597;
            $l1603:;
            if ($tmp1590 < $tmp1592) goto $l1595; else goto $l1597;
            $l1600:;
            if ($tmp1594) goto $l1604; else goto $l1605;
            $l1604:;
            if ($tmp1590 >= $tmp1592) goto $l1595; else goto $l1597;
            $l1605:;
            if ($tmp1590 > $tmp1592) goto $l1595; else goto $l1597;
            $l1595:;
            {
                ITable* $tmp1608 = vtable1516->$class->itable;
                while ($tmp1608->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1608 = $tmp1608->next;
                }
                $fn1610 $tmp1609 = $tmp1608->methods[0];
                panda$core$Object* $tmp1611 = $tmp1609(vtable1516, i1589);
                m1607 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1611);
                if (((panda$core$Bit) { ((panda$core$Object*) m1607->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1613 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1607, self->wrapperShims);
                    methodName1612 = $tmp1613;
                }
                }
                else {
                {
                    panda$core$String* $tmp1614 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1607);
                    methodName1612 = $tmp1614;
                    if (m1607->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1607);
                    }
                    }
                }
                }
                panda$core$String* $tmp1616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1615, separator1582);
                panda$core$String* $tmp1618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1616, &$s1617);
                panda$core$String* $tmp1619 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1607);
                panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1618, $tmp1619);
                panda$core$String* $tmp1622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1620, &$s1621);
                panda$core$String* $tmp1623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1622, methodName1612);
                panda$core$String* $tmp1625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1623, &$s1624);
                panda$core$MutableString$append$panda$core$String(code1535, $tmp1625);
                separator1582 = &$s1626;
            }
            $l1598:;
            if ($tmp1601) goto $l1628; else goto $l1629;
            $l1628:;
            int64_t $tmp1630 = $tmp1592 - i1589.value;
            if ($tmp1594) goto $l1631; else goto $l1632;
            $l1631:;
            if ($tmp1630 >= $tmp1593) goto $l1627; else goto $l1597;
            $l1632:;
            if ($tmp1630 > $tmp1593) goto $l1627; else goto $l1597;
            $l1629:;
            int64_t $tmp1634 = i1589.value - $tmp1592;
            if ($tmp1594) goto $l1635; else goto $l1636;
            $l1635:;
            if ($tmp1634 >= -$tmp1593) goto $l1627; else goto $l1597;
            $l1636:;
            if ($tmp1634 > -$tmp1593) goto $l1627; else goto $l1597;
            $l1627:;
            i1589.value += $tmp1593;
            goto $l1595;
            $l1597:;
            panda$core$MutableString$append$panda$core$String(code1535, &$s1638);
            (($fn1639) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1535));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1469), ((panda$core$Object*) result1475));
    }
    }
    return result1475;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1642 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1640, &$s1641);
    panda$core$String* $tmp1645 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1642, &$s1643, &$s1644);
    panda$core$String* $tmp1648 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1645, &$s1646, &$s1647);
    panda$core$String* $tmp1651 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1648, &$s1649, &$s1650);
    panda$core$String* $tmp1654 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1651, &$s1652, &$s1653);
    panda$core$String* $tmp1657 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1654, &$s1655, &$s1656);
    return $tmp1657;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1661;
    panda$core$String* result1699;
    panda$core$Bit $tmp1658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1658.value) {
    {
        panda$core$Int64 $tmp1659 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1660 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1659, ((panda$core$Int64) { 0 }));
        if ($tmp1660.value) {
        {
            panda$core$Int64 $tmp1662 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1661, ((panda$core$Int64) { 0 }), $tmp1662, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1664 = $tmp1661.start.value;
            panda$core$Int64 i1663 = { $tmp1664 };
            int64_t $tmp1666 = $tmp1661.end.value;
            int64_t $tmp1667 = $tmp1661.step.value;
            bool $tmp1668 = $tmp1661.inclusive.value;
            bool $tmp1675 = $tmp1667 > 0;
            if ($tmp1675) goto $l1673; else goto $l1674;
            $l1673:;
            if ($tmp1668) goto $l1676; else goto $l1677;
            $l1676:;
            if ($tmp1664 <= $tmp1666) goto $l1669; else goto $l1671;
            $l1677:;
            if ($tmp1664 < $tmp1666) goto $l1669; else goto $l1671;
            $l1674:;
            if ($tmp1668) goto $l1678; else goto $l1679;
            $l1678:;
            if ($tmp1664 >= $tmp1666) goto $l1669; else goto $l1671;
            $l1679:;
            if ($tmp1664 > $tmp1666) goto $l1669; else goto $l1671;
            $l1669:;
            {
                panda$core$Object* $tmp1681 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1663);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1681)->name) }).value) {
                {
                    panda$core$Object* $tmp1682 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1683 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1682)->argRefs, i1663);
                    return ((panda$core$String*) $tmp1683);
                }
                }
            }
            $l1672:;
            if ($tmp1675) goto $l1685; else goto $l1686;
            $l1685:;
            int64_t $tmp1687 = $tmp1666 - i1663.value;
            if ($tmp1668) goto $l1688; else goto $l1689;
            $l1688:;
            if ($tmp1687 >= $tmp1667) goto $l1684; else goto $l1671;
            $l1689:;
            if ($tmp1687 > $tmp1667) goto $l1684; else goto $l1671;
            $l1686:;
            int64_t $tmp1691 = i1663.value - $tmp1666;
            if ($tmp1668) goto $l1692; else goto $l1693;
            $l1692:;
            if ($tmp1691 >= -$tmp1667) goto $l1684; else goto $l1671;
            $l1693:;
            if ($tmp1691 > -$tmp1667) goto $l1684; else goto $l1671;
            $l1684:;
            i1663.value += $tmp1667;
            goto $l1669;
            $l1671:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1695, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1696, &$s1697);
        return $tmp1698;
    }
    }
    panda$core$Object* $tmp1700 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1699 = ((panda$core$String*) $tmp1700);
    if (((panda$core$Bit) { result1699 == NULL }).value) {
    {
        panda$core$Int64 $tmp1701 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1701;
        panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1702, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, &$s1704);
        panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1705, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
        result1699 = $tmp1708;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1699));
    }
    }
    panda$core$Int64 $tmp1709 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1710 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1709, ((panda$core$Int64) { 0 }));
    if ($tmp1710.value) {
    {
        panda$core$Object* $tmp1711 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1699, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1711)->varSuffix);
        result1699 = $tmp1712;
    }
    }
    return result1699;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1716;
    panda$core$String* $match$0_01722;
    panda$collections$Iterator* p$Iter1799;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1811;
    panda$core$Bit $tmp1714 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1713);
    if ($tmp1714.value) {
    {
        return &$s1715;
    }
    }
    panda$core$MutableString* $tmp1717 = (panda$core$MutableString*) malloc(40);
    $tmp1717->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1717->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1717, &$s1719);
    result1716 = $tmp1717;
    panda$core$String* $tmp1720 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1716, $tmp1720);
    panda$core$MutableString$append$panda$core$String(result1716, &$s1721);
    {
        $match$0_01722 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1724 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1723);
        if ($tmp1724.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1725);
        }
        }
        else {
        panda$core$Bit $tmp1727 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1726);
        if ($tmp1727.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1728);
        }
        }
        else {
        panda$core$Bit $tmp1730 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1729);
        if ($tmp1730.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1731);
        }
        }
        else {
        panda$core$Bit $tmp1733 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1732);
        if ($tmp1733.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1734);
        }
        }
        else {
        panda$core$Bit $tmp1736 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1735);
        if ($tmp1736.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1737);
        }
        }
        else {
        panda$core$Bit $tmp1739 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1738);
        if ($tmp1739.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1740);
        }
        }
        else {
        panda$core$Bit $tmp1742 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1741);
        if ($tmp1742.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1743);
        }
        }
        else {
        panda$core$Bit $tmp1745 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1744);
        if ($tmp1745.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1746);
        }
        }
        else {
        panda$core$Bit $tmp1748 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1747);
        if ($tmp1748.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1749);
        }
        }
        else {
        panda$core$Bit $tmp1751 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1750);
        if ($tmp1751.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1752);
        }
        }
        else {
        panda$core$Bit $tmp1754 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1753);
        if ($tmp1754.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1755);
        }
        }
        else {
        panda$core$Bit $tmp1757 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1756);
        if ($tmp1757.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1758);
        }
        }
        else {
        panda$core$Bit $tmp1760 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1759);
        if ($tmp1760.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1761);
        }
        }
        else {
        panda$core$Bit $tmp1763 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1762);
        if ($tmp1763.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1764);
        }
        }
        else {
        panda$core$Bit $tmp1766 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1765);
        if ($tmp1766.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1767);
        }
        }
        else {
        panda$core$Bit $tmp1769 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1768);
        if ($tmp1769.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1770);
        }
        }
        else {
        panda$core$Bit $tmp1772 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1771);
        if ($tmp1772.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1773);
        }
        }
        else {
        panda$core$Bit $tmp1775 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1774);
        if ($tmp1775.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1776);
        }
        }
        else {
        panda$core$Bit $tmp1778 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1777);
        if ($tmp1778.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1779);
        }
        }
        else {
        panda$core$Bit $tmp1781 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1780);
        if ($tmp1781.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1782);
        }
        }
        else {
        panda$core$Bit $tmp1784 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1783);
        if ($tmp1784.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1785);
        }
        }
        else {
        panda$core$Bit $tmp1787 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1786);
        if ($tmp1787.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1788);
        }
        }
        else {
        panda$core$Bit $tmp1790 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1789);
        if ($tmp1790.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1791);
        }
        }
        else {
        panda$core$Bit $tmp1793 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1792);
        if ($tmp1793.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1794);
        }
        }
        else {
        panda$core$Bit $tmp1796 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_01722, &$s1795);
        if ($tmp1796.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1716, &$s1797);
        }
        }
        else {
        {
            panda$core$String* $tmp1798 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1716, $tmp1798);
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
        ITable* $tmp1800 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1800->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1800 = $tmp1800->next;
        }
        $fn1802 $tmp1801 = $tmp1800->methods[0];
        panda$collections$Iterator* $tmp1803 = $tmp1801(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1799 = $tmp1803;
        $l1804:;
        ITable* $tmp1806 = p$Iter1799->$class->itable;
        while ($tmp1806->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1806 = $tmp1806->next;
        }
        $fn1808 $tmp1807 = $tmp1806->methods[0];
        panda$core$Bit $tmp1809 = $tmp1807(p$Iter1799);
        panda$core$Bit $tmp1810 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1809);
        if (!$tmp1810.value) goto $l1805;
        {
            ITable* $tmp1812 = p$Iter1799->$class->itable;
            while ($tmp1812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1812 = $tmp1812->next;
            }
            $fn1814 $tmp1813 = $tmp1812->methods[1];
            panda$core$Object* $tmp1815 = $tmp1813(p$Iter1799);
            p1811 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1815);
            panda$core$String* $tmp1817 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1811->type)->name);
            panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1816, $tmp1817);
            panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1819);
            panda$core$MutableString$append$panda$core$String(result1716, $tmp1820);
        }
        goto $l1804;
        $l1805:;
    }
    org$pandalanguage$pandac$Type* $tmp1821 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1822 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1821);
    if ($tmp1822.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1716, &$s1823);
        panda$core$String* $tmp1824 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1716, $tmp1824);
    }
    }
    panda$core$String* $tmp1825 = panda$core$MutableString$convert$R$panda$core$String(result1716);
    return $tmp1825;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1826 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1826.value);
    panda$core$String* $tmp1828 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1827, $tmp1828);
    panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, &$s1830);
    panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, &$s1833);
    return $tmp1834;
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
    panda$core$String* leftRef1835;
    panda$core$String* leftField1839;
    panda$core$String* start1849;
    panda$core$String* ifTrue1850;
    panda$core$String* ifFalse1852;
    panda$core$String* rightRef1865;
    panda$core$String* rightField1869;
    panda$core$String* truePred1879;
    panda$core$String* result1885;
    panda$core$String* $tmp1836 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1835 = $tmp1836;
    org$pandalanguage$pandac$Type* $tmp1837 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1838 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1837);
    if ($tmp1838.value) {
    {
        panda$core$String* $tmp1840 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1839 = $tmp1840;
        panda$core$String* $tmp1842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1841, leftField1839);
        panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1842, &$s1843);
        panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1844, leftRef1835);
        panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1846);
        (($fn1848) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1847);
        leftRef1835 = leftField1839;
    }
    }
    start1849 = self->currentBlock;
    panda$core$String* $tmp1851 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1850 = $tmp1851;
    panda$core$String* $tmp1853 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1852 = $tmp1853;
    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1854, leftRef1835);
    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1856);
    panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, ifTrue1850);
    panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1859);
    panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, ifFalse1852);
    panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
    (($fn1864) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1863);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1850, p_out);
    panda$core$String* $tmp1866 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1865 = $tmp1866;
    org$pandalanguage$pandac$Type* $tmp1867 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1868 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1867);
    if ($tmp1868.value) {
    {
        panda$core$String* $tmp1870 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1869 = $tmp1870;
        panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1871, rightField1869);
        panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1872, &$s1873);
        panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1874, rightRef1865);
        panda$core$String* $tmp1877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1875, &$s1876);
        (($fn1878) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1877);
        rightRef1865 = rightField1869;
    }
    }
    truePred1879 = self->currentBlock;
    panda$core$String* $tmp1881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1880, ifFalse1852);
    panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1881, &$s1882);
    (($fn1884) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1883);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1852, p_out);
    panda$core$String* $tmp1886 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1885 = $tmp1886;
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1887, result1885);
    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, &$s1889);
    panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1890, start1849);
    panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, &$s1892);
    panda$core$String* $tmp1894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1893, rightRef1865);
    panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1894, &$s1895);
    panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1896, truePred1879);
    panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1898);
    (($fn1900) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1899);
    return result1885;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1901;
    panda$core$String* leftField1905;
    panda$core$String* start1915;
    panda$core$String* ifTrue1916;
    panda$core$String* ifFalse1918;
    panda$core$String* rightRef1931;
    panda$core$String* rightField1935;
    panda$core$String* falsePred1945;
    panda$core$String* result1951;
    panda$core$String* $tmp1902 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1901 = $tmp1902;
    org$pandalanguage$pandac$Type* $tmp1903 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1904 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1903);
    if ($tmp1904.value) {
    {
        panda$core$String* $tmp1906 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1905 = $tmp1906;
        panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1907, leftField1905);
        panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1908, &$s1909);
        panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, leftRef1901);
        panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, &$s1912);
        (($fn1914) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1913);
        leftRef1901 = leftField1905;
    }
    }
    start1915 = self->currentBlock;
    panda$core$String* $tmp1917 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1916 = $tmp1917;
    panda$core$String* $tmp1919 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1918 = $tmp1919;
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1920, leftRef1901);
    panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1921, &$s1922);
    panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, ifTrue1916);
    panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1924, &$s1925);
    panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1926, ifFalse1918);
    panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, &$s1928);
    (($fn1930) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1929);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1918, p_out);
    panda$core$String* $tmp1932 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1931 = $tmp1932;
    org$pandalanguage$pandac$Type* $tmp1933 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1934 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1933);
    if ($tmp1934.value) {
    {
        panda$core$String* $tmp1936 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1935 = $tmp1936;
        panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1937, rightField1935);
        panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1938, &$s1939);
        panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1940, rightRef1931);
        panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1941, &$s1942);
        (($fn1944) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1943);
        rightRef1931 = rightField1935;
    }
    }
    falsePred1945 = self->currentBlock;
    panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1946, ifTrue1916);
    panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1947, &$s1948);
    (($fn1950) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1949);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1916, p_out);
    panda$core$String* $tmp1952 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1951 = $tmp1952;
    panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1953, result1951);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, &$s1955);
    panda$core$String* $tmp1957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, start1915);
    panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1957, &$s1958);
    panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1959, rightRef1931);
    panda$core$String* $tmp1962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1960, &$s1961);
    panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1962, falsePred1945);
    panda$core$String* $tmp1965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1963, &$s1964);
    (($fn1966) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1965);
    return result1951;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp1967;
    panda$core$String* result2010;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1967 = &$s1968;
                }
                break;
                case 52:
                {
                    llvmOp1967 = &$s1969;
                }
                break;
                case 53:
                {
                    llvmOp1967 = &$s1970;
                }
                break;
                case 55:
                {
                    llvmOp1967 = &$s1971;
                }
                break;
                case 56:
                {
                    llvmOp1967 = &$s1972;
                }
                break;
                case 72:
                {
                    llvmOp1967 = &$s1973;
                }
                break;
                case 1:
                {
                    llvmOp1967 = &$s1974;
                }
                break;
                case 67:
                {
                    llvmOp1967 = &$s1975;
                }
                break;
                case 69:
                {
                    llvmOp1967 = &$s1976;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1967 = &$s1977;
                }
                break;
                case 58:
                {
                    llvmOp1967 = &$s1978;
                }
                break;
                case 59:
                {
                    llvmOp1967 = &$s1979;
                }
                break;
                case 63:
                {
                    llvmOp1967 = &$s1980;
                }
                break;
                case 62:
                {
                    llvmOp1967 = &$s1981;
                }
                break;
                case 65:
                {
                    llvmOp1967 = &$s1982;
                }
                break;
                case 64:
                {
                    llvmOp1967 = &$s1983;
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
                    llvmOp1967 = &$s1984;
                }
                break;
                case 52:
                {
                    llvmOp1967 = &$s1985;
                }
                break;
                case 53:
                {
                    llvmOp1967 = &$s1986;
                }
                break;
                case 55:
                {
                    llvmOp1967 = &$s1987;
                }
                break;
                case 56:
                {
                    llvmOp1967 = &$s1988;
                }
                break;
                case 72:
                {
                    llvmOp1967 = &$s1989;
                }
                break;
                case 1:
                {
                    llvmOp1967 = &$s1990;
                }
                break;
                case 67:
                {
                    llvmOp1967 = &$s1991;
                }
                break;
                case 69:
                {
                    llvmOp1967 = &$s1992;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1967 = &$s1993;
                }
                break;
                case 58:
                {
                    llvmOp1967 = &$s1994;
                }
                break;
                case 59:
                {
                    llvmOp1967 = &$s1995;
                }
                break;
                case 63:
                {
                    llvmOp1967 = &$s1996;
                }
                break;
                case 62:
                {
                    llvmOp1967 = &$s1997;
                }
                break;
                case 65:
                {
                    llvmOp1967 = &$s1998;
                }
                break;
                case 64:
                {
                    llvmOp1967 = &$s1999;
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
                    llvmOp1967 = &$s2000;
                }
                break;
                case 52:
                {
                    llvmOp1967 = &$s2001;
                }
                break;
                case 53:
                {
                    llvmOp1967 = &$s2002;
                }
                break;
                case 55:
                {
                    llvmOp1967 = &$s2003;
                }
                break;
                case 58:
                {
                    llvmOp1967 = &$s2004;
                }
                break;
                case 59:
                {
                    llvmOp1967 = &$s2005;
                }
                break;
                case 63:
                {
                    llvmOp1967 = &$s2006;
                }
                break;
                case 62:
                {
                    llvmOp1967 = &$s2007;
                }
                break;
                case 65:
                {
                    llvmOp1967 = &$s2008;
                }
                break;
                case 64:
                {
                    llvmOp1967 = &$s2009;
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
    panda$core$String* $tmp2011 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2010 = $tmp2011;
    panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2012, result2010);
    panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2013, &$s2014);
    panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2015, llvmOp1967);
    panda$core$String* $tmp2018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2016, &$s2017);
    panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2018, p_leftRef);
    panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2019, &$s2020);
    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2021, p_rightRef);
    panda$core$String* $tmp2024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2022, &$s2023);
    (($fn2025) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2024);
    return result2010;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2026;
    panda$core$String* rightRef2028;
    panda$core$String* raw2030;
    panda$core$String* result2043;
    panda$core$String* $tmp2027 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef2026 = $tmp2027;
    panda$core$String* $tmp2029 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef2028 = $tmp2029;
    panda$core$String* $tmp2031 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw2030 = $tmp2031;
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2032, raw2030);
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, &$s2034);
    panda$core$String* $tmp2036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2035, leftRef2026);
    panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2036, &$s2037);
    panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, rightRef2028);
    panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2039, &$s2040);
    (($fn2042) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2041);
    panda$core$String* $tmp2044 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2043 = $tmp2044;
    panda$core$String* $tmp2046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2045, result2043);
    panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2046, &$s2047);
    panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2048, raw2030);
    panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, &$s2050);
    (($fn2052) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2051);
    return result2043;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2053;
    panda$core$String* rightRef2055;
    panda$core$String* raw2057;
    panda$core$String* result2070;
    panda$core$String* $tmp2054 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef2053 = $tmp2054;
    panda$core$String* $tmp2056 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef2055 = $tmp2056;
    panda$core$String* $tmp2058 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw2057 = $tmp2058;
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2059, raw2057);
    panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, &$s2061);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, leftRef2053);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, &$s2064);
    panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, rightRef2055);
    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2066, &$s2067);
    (($fn2069) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2068);
    panda$core$String* $tmp2071 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2070 = $tmp2071;
    panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2072, result2070);
    panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, &$s2074);
    panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2075, raw2057);
    panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, &$s2077);
    (($fn2079) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2078);
    return result2070;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2085;
    panda$core$String* rightRef2087;
    panda$core$Bit $tmp2080 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp2080.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp2081 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2081;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp2082 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2082;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp2083 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2083;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp2084 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2084;
        }
        break;
        default:
        {
            panda$core$String* $tmp2086 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef2085 = $tmp2086;
            panda$core$String* $tmp2088 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef2087 = $tmp2088;
            panda$core$Int64 $tmp2089 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp2090 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2089, leftRef2085, p_op, rightRef2087, p_out);
            return $tmp2090;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp2091.value);
    panda$core$Int64 $tmp2092 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp2093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2092, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2093.value);
    panda$core$Object* $tmp2094 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2095 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2096 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2094), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp2095), p_out);
    return $tmp2096;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s2097;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2098;
    panda$core$Int64 index2100;
    panda$collections$ListView* vtable2101;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2103;
    panda$core$String* classPtrPtr2142;
    panda$core$String* classPtr2159;
    panda$core$String* cast2169;
    panda$core$String* ptr2182;
    panda$core$String* load2206;
    panda$core$String* result2216;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2099 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc2098 = $tmp2099;
    index2100 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2102 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2101 = $tmp2102;
    ITable* $tmp2104 = ((panda$collections$CollectionView*) vtable2101)->$class->itable;
    while ($tmp2104->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2104 = $tmp2104->next;
    }
    $fn2106 $tmp2105 = $tmp2104->methods[0];
    panda$core$Int64 $tmp2107 = $tmp2105(((panda$collections$CollectionView*) vtable2101));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2103, ((panda$core$Int64) { 0 }), $tmp2107, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2109 = $tmp2103.start.value;
    panda$core$Int64 i2108 = { $tmp2109 };
    int64_t $tmp2111 = $tmp2103.end.value;
    int64_t $tmp2112 = $tmp2103.step.value;
    bool $tmp2113 = $tmp2103.inclusive.value;
    bool $tmp2120 = $tmp2112 > 0;
    if ($tmp2120) goto $l2118; else goto $l2119;
    $l2118:;
    if ($tmp2113) goto $l2121; else goto $l2122;
    $l2121:;
    if ($tmp2109 <= $tmp2111) goto $l2114; else goto $l2116;
    $l2122:;
    if ($tmp2109 < $tmp2111) goto $l2114; else goto $l2116;
    $l2119:;
    if ($tmp2113) goto $l2123; else goto $l2124;
    $l2123:;
    if ($tmp2109 >= $tmp2111) goto $l2114; else goto $l2116;
    $l2124:;
    if ($tmp2109 > $tmp2111) goto $l2114; else goto $l2116;
    $l2114:;
    {
        ITable* $tmp2126 = vtable2101->$class->itable;
        while ($tmp2126->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2126 = $tmp2126->next;
        }
        $fn2128 $tmp2127 = $tmp2126->methods[0];
        panda$core$Object* $tmp2129 = $tmp2127(vtable2101, i2108);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2129)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2100 = i2108;
            goto $l2116;
        }
        }
    }
    $l2117:;
    if ($tmp2120) goto $l2131; else goto $l2132;
    $l2131:;
    int64_t $tmp2133 = $tmp2111 - i2108.value;
    if ($tmp2113) goto $l2134; else goto $l2135;
    $l2134:;
    if ($tmp2133 >= $tmp2112) goto $l2130; else goto $l2116;
    $l2135:;
    if ($tmp2133 > $tmp2112) goto $l2130; else goto $l2116;
    $l2132:;
    int64_t $tmp2137 = i2108.value - $tmp2111;
    if ($tmp2113) goto $l2138; else goto $l2139;
    $l2138:;
    if ($tmp2137 >= -$tmp2112) goto $l2130; else goto $l2116;
    $l2139:;
    if ($tmp2137 > -$tmp2112) goto $l2130; else goto $l2116;
    $l2130:;
    i2108.value += $tmp2112;
    goto $l2114;
    $l2116:;
    panda$core$Bit $tmp2141 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2100, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2141.value);
    panda$core$String* $tmp2143 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2142 = $tmp2143;
    panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2144, classPtrPtr2142);
    panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, &$s2146);
    org$pandalanguage$pandac$Type* $tmp2148 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2149 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2148);
    panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, $tmp2149);
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
    panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2153, p_target);
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2155);
    panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, $tmp2156);
    (($fn2158) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2157);
    panda$core$String* $tmp2160 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2159 = $tmp2160;
    panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2161, classPtr2159);
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, &$s2163);
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, classPtrPtr2142);
    panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, &$s2166);
    (($fn2168) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2167);
    panda$core$String* $tmp2170 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2169 = $tmp2170;
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2171, cast2169);
    panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, &$s2173);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, classPtr2159);
    panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, &$s2176);
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, cc2098->type);
    panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, &$s2179);
    (($fn2181) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2180);
    panda$core$String* $tmp2183 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2182 = $tmp2183;
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2184, ptr2182);
    panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2186);
    panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, cc2098->type);
    panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2188, &$s2189);
    panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, cc2098->type);
    panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2191, &$s2192);
    panda$core$String* $tmp2194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, cast2169);
    panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2194, &$s2195);
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2197, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, &$s2199);
    panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2200, ((panda$core$Object*) wrap_panda$core$Int64(index2100)));
    panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, &$s2202);
    panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2196, $tmp2203);
    (($fn2205) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2204);
    panda$core$String* $tmp2207 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2206 = $tmp2207;
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2208, load2206);
    panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, &$s2210);
    panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, ptr2182);
    panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, &$s2213);
    (($fn2215) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2214);
    panda$core$String* $tmp2217 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2216 = $tmp2217;
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2218, result2216);
    panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, &$s2220);
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, load2206);
    panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, &$s2223);
    org$pandalanguage$pandac$Type* $tmp2225 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2226 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2225);
    panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2224, $tmp2226);
    (($fn2228) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2227);
    return result2216;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2229;
    panda$core$String* entry2232;
    panda$core$String* classPointer2239;
    panda$core$String* loadedClass2263;
    panda$core$String* classType2265;
    panda$core$String* itableFirst2282;
    panda$core$String* next2307;
    panda$core$String* leavingEntryLabel2314;
    panda$core$String* itableNext2316;
    panda$core$String* itablePtrPtr2321;
    panda$core$String* fail2323;
    panda$core$String* itablePtr2344;
    panda$core$String* itableClassPtr2354;
    panda$core$String* itableClass2370;
    panda$core$String* test2386;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2388;
    panda$core$String* success2412;
    panda$core$Int64 index2444;
    panda$collections$ListView* vtable2445;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2447;
    panda$core$String* methodPtrPtr2494;
    panda$core$String* cast2513;
    panda$core$String* methodPtr2526;
    org$pandalanguage$pandac$Type* $tmp2230 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2231 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2230);
    methodType2229 = $tmp2231;
    panda$core$String* $tmp2233 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2232 = $tmp2233;
    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2234, entry2232);
    panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
    (($fn2238) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2237);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, entry2232, p_out);
    panda$core$String* $tmp2240 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2239 = $tmp2240;
    panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2241, classPointer2239);
    panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2242, &$s2243);
    org$pandalanguage$pandac$Type* $tmp2245 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2246 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2245);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2244, $tmp2246);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, &$s2248);
    panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2250, p_target);
    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, &$s2252);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2254);
    panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2255, &$s2256);
    panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2257, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, &$s2259);
    panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, $tmp2260);
    (($fn2262) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2261);
    panda$core$String* $tmp2264 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2263 = $tmp2264;
    org$pandalanguage$pandac$Type* $tmp2266 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2267 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2266);
    classType2265 = $tmp2267;
    panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2268, loadedClass2263);
    panda$core$String* $tmp2271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, &$s2270);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2271, classType2265);
    panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, &$s2273);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2274, classType2265);
    panda$core$String* $tmp2277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, &$s2276);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2277, classPointer2239);
    panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2278, &$s2279);
    (($fn2281) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2280);
    panda$core$String* $tmp2283 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2282 = $tmp2283;
    panda$core$String* $tmp2285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2284, itableFirst2282);
    panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2285, &$s2286);
    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, classType2265);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
    panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, classType2265);
    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2291, &$s2292);
    panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2294, loadedClass2263);
    panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, &$s2296);
    panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2297, &$s2298);
    panda$core$String* $tmp2301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2299, &$s2300);
    panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2301, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, &$s2303);
    panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, $tmp2304);
    (($fn2306) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2305);
    panda$core$String* $tmp2308 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2307 = $tmp2308;
    panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2309, next2307);
    panda$core$String* $tmp2312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2310, &$s2311);
    (($fn2313) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2312);
    leavingEntryLabel2314 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, next2307, p_out);
    panda$core$Int64 $tmp2315 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2315;
    panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2317, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2319);
    itableNext2316 = $tmp2320;
    panda$core$String* $tmp2322 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2321 = $tmp2322;
    panda$core$String* $tmp2324 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2323 = $tmp2324;
    panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2325, itablePtrPtr2321);
    panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2326, &$s2327);
    panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2328, itableFirst2282);
    panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, &$s2330);
    panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2331, leavingEntryLabel2314);
    panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, &$s2333);
    panda$core$String* $tmp2336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2335, itableNext2316);
    panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2336, &$s2337);
    panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, fail2323);
    panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2340);
    panda$core$String* $tmp2342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2334, $tmp2341);
    (($fn2343) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2342);
    panda$core$String* $tmp2345 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2344 = $tmp2345;
    panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2346, itablePtr2344);
    panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2347, &$s2348);
    panda$core$String* $tmp2350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, itablePtrPtr2321);
    panda$core$String* $tmp2352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2350, &$s2351);
    (($fn2353) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2352);
    panda$core$String* $tmp2355 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2354 = $tmp2355;
    panda$core$String* $tmp2357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2356, itableClassPtr2354);
    panda$core$String* $tmp2359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2357, &$s2358);
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2360, itablePtr2344);
    panda$core$String* $tmp2363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2362);
    panda$core$String* $tmp2365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, &$s2364);
    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2365, &$s2366);
    panda$core$String* $tmp2368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2359, $tmp2367);
    (($fn2369) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2368);
    panda$core$String* $tmp2371 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2370 = $tmp2371;
    panda$core$String* $tmp2373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2372, itableClass2370);
    panda$core$String* $tmp2375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2373, &$s2374);
    panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2375, classType2265);
    panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2376, &$s2377);
    panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2378, classType2265);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2379, &$s2380);
    panda$core$String* $tmp2382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2381, itableClassPtr2354);
    panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2382, &$s2383);
    (($fn2385) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2384);
    panda$core$String* $tmp2387 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2386 = $tmp2387;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2389 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2388 = $tmp2389;
    panda$core$String* $tmp2391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2390, test2386);
    panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2391, &$s2392);
    panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2393, classType2265);
    panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2394, &$s2395);
    panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, intfCC2388->type);
    panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, &$s2398);
    panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2399, intfCC2388->name);
    panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2400, &$s2401);
    panda$core$String* $tmp2404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2403, classType2265);
    panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, &$s2405);
    panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, itableClass2370);
    panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, &$s2408);
    panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2402, $tmp2409);
    (($fn2411) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2410);
    panda$core$String* $tmp2413 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2412 = $tmp2413;
    panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2414, test2386);
    panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2415, &$s2416);
    panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, success2412);
    panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2418, &$s2419);
    panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, fail2323);
    panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2421, &$s2422);
    (($fn2424) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2423);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, fail2323, p_out);
    panda$core$String* $tmp2426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2425, itableNext2316);
    panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, &$s2427);
    panda$core$String* $tmp2429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, itablePtr2344);
    panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2429, &$s2430);
    panda$core$String* $tmp2434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2432, &$s2433);
    panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2434, &$s2435);
    panda$core$String* $tmp2437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2431, $tmp2436);
    (($fn2438) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2437);
    panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2439, next2307);
    panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2440, &$s2441);
    (($fn2443) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2442);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, success2412, p_out);
    index2444 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2446 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2445 = $tmp2446;
    ITable* $tmp2448 = ((panda$collections$CollectionView*) vtable2445)->$class->itable;
    while ($tmp2448->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2448 = $tmp2448->next;
    }
    $fn2450 $tmp2449 = $tmp2448->methods[0];
    panda$core$Int64 $tmp2451 = $tmp2449(((panda$collections$CollectionView*) vtable2445));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2447, ((panda$core$Int64) { 0 }), $tmp2451, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2453 = $tmp2447.start.value;
    panda$core$Int64 i2452 = { $tmp2453 };
    int64_t $tmp2455 = $tmp2447.end.value;
    int64_t $tmp2456 = $tmp2447.step.value;
    bool $tmp2457 = $tmp2447.inclusive.value;
    bool $tmp2464 = $tmp2456 > 0;
    if ($tmp2464) goto $l2462; else goto $l2463;
    $l2462:;
    if ($tmp2457) goto $l2465; else goto $l2466;
    $l2465:;
    if ($tmp2453 <= $tmp2455) goto $l2458; else goto $l2460;
    $l2466:;
    if ($tmp2453 < $tmp2455) goto $l2458; else goto $l2460;
    $l2463:;
    if ($tmp2457) goto $l2467; else goto $l2468;
    $l2467:;
    if ($tmp2453 >= $tmp2455) goto $l2458; else goto $l2460;
    $l2468:;
    if ($tmp2453 > $tmp2455) goto $l2458; else goto $l2460;
    $l2458:;
    {
        ITable* $tmp2470 = vtable2445->$class->itable;
        while ($tmp2470->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2470 = $tmp2470->next;
        }
        $fn2472 $tmp2471 = $tmp2470->methods[0];
        panda$core$Object* $tmp2473 = $tmp2471(vtable2445, i2452);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2473)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2444 = i2452;
            goto $l2460;
        }
        }
    }
    $l2461:;
    if ($tmp2464) goto $l2475; else goto $l2476;
    $l2475:;
    int64_t $tmp2477 = $tmp2455 - i2452.value;
    if ($tmp2457) goto $l2478; else goto $l2479;
    $l2478:;
    if ($tmp2477 >= $tmp2456) goto $l2474; else goto $l2460;
    $l2479:;
    if ($tmp2477 > $tmp2456) goto $l2474; else goto $l2460;
    $l2476:;
    int64_t $tmp2481 = i2452.value - $tmp2455;
    if ($tmp2457) goto $l2482; else goto $l2483;
    $l2482:;
    if ($tmp2481 >= -$tmp2456) goto $l2474; else goto $l2460;
    $l2483:;
    if ($tmp2481 > -$tmp2456) goto $l2474; else goto $l2460;
    $l2474:;
    i2452.value += $tmp2456;
    goto $l2458;
    $l2460:;
    org$pandalanguage$pandac$Type* $tmp2485 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2486 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2485);
    panda$collections$ListView* $tmp2487 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2486);
    ITable* $tmp2488 = ((panda$collections$CollectionView*) $tmp2487)->$class->itable;
    while ($tmp2488->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2488 = $tmp2488->next;
    }
    $fn2490 $tmp2489 = $tmp2488->methods[0];
    panda$core$Int64 $tmp2491 = $tmp2489(((panda$collections$CollectionView*) $tmp2487));
    panda$core$Int64 $tmp2492 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2444, $tmp2491);
    index2444 = $tmp2492;
    panda$core$Bit $tmp2493 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2444, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2493.value);
    panda$core$String* $tmp2495 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2494 = $tmp2495;
    panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2496, methodPtrPtr2494);
    panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2497, &$s2498);
    panda$core$String* $tmp2501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2500, itablePtr2344);
    panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2501, &$s2502);
    panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2503, &$s2504);
    panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2505, &$s2506);
    panda$core$String* $tmp2508 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2507, ((panda$core$Object*) wrap_panda$core$Int64(index2444)));
    panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2508, &$s2509);
    panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2499, $tmp2510);
    (($fn2512) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2511);
    panda$core$String* $tmp2514 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2513 = $tmp2514;
    panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2515, cast2513);
    panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2516, &$s2517);
    panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2518, methodPtrPtr2494);
    panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, &$s2520);
    panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, methodType2229);
    panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2522, &$s2523);
    (($fn2525) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2524);
    panda$core$String* $tmp2527 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2526 = $tmp2527;
    panda$core$String* $tmp2529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2528, methodPtr2526);
    panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2529, &$s2530);
    panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, methodType2229);
    panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2532, &$s2533);
    panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, methodType2229);
    panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2535, &$s2536);
    panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, cast2513);
    panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, &$s2539);
    (($fn2541) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2540);
    return methodPtr2526;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2543 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2542 = $tmp2543.value;
    if (!$tmp2542) goto $l2544;
    panda$core$Bit $tmp2545 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2542 = $tmp2545.value;
    $l2544:;
    panda$core$Bit $tmp2546 = { $tmp2542 };
    if ($tmp2546.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2547.value) {
        {
            panda$core$String* $tmp2548 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2548;
        }
        }
        else {
        {
            panda$core$String* $tmp2549 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2549;
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
        panda$core$String* $tmp2550 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2550;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2551;
    panda$core$String* $match$0_02552;
    panda$core$String* countStruct2557;
    panda$core$String* count2560;
    panda$core$String* size2570;
    panda$core$Int64 elementSize2572;
    panda$core$String* malloc2592;
    panda$core$String* result2606;
    panda$core$String* ptr2625;
    panda$core$String* baseType2628;
    panda$core$String* ptrType2631;
    panda$core$String* cast2634;
    panda$core$String* load2647;
    panda$core$String* ptr2667;
    panda$core$String* baseType2670;
    panda$core$String* ptrType2673;
    panda$core$String* cast2676;
    panda$core$String* indexStruct2689;
    panda$core$String* index2692;
    panda$core$String* offsetPtr2702;
    panda$core$String* load2723;
    panda$core$String* ptr2743;
    panda$core$String* ptrCast2746;
    panda$core$String* countStruct2756;
    panda$core$String* count2759;
    panda$core$String* size2769;
    panda$core$String* realloc2787;
    panda$core$String* result2806;
    panda$core$String* ptr2825;
    panda$core$String* baseType2828;
    panda$core$String* offsetStruct2832;
    panda$core$String* offset2835;
    panda$core$String* result2845;
    m2551 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$0_02552 = ((org$pandalanguage$pandac$Symbol*) m2551->value)->name;
        panda$core$Bit $tmp2554 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_02552, &$s2553);
        if ($tmp2554.value) {
        {
            panda$core$Int64 $tmp2555 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2556 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2555, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2556.value);
            panda$core$Object* $tmp2558 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2559 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2558), p_out);
            countStruct2557 = $tmp2559;
            panda$core$String* $tmp2561 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2560 = $tmp2561;
            panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2562, count2560);
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, &$s2564);
            panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, countStruct2557);
            panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, &$s2567);
            (($fn2569) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2568);
            panda$core$String* $tmp2571 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2570 = $tmp2571;
            org$pandalanguage$pandac$Type* $tmp2573 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2551);
            panda$core$Object* $tmp2574 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2573->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2575 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2574));
            elementSize2572 = $tmp2575;
            panda$core$Bit $tmp2576 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2572, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2576.value);
            panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2577, size2570);
            panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2578, &$s2579);
            panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2581);
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
            panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, count2560);
            panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2587, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2572)));
            panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
            (($fn2591) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2590);
            panda$core$String* $tmp2593 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2592 = $tmp2593;
            panda$core$String* $tmp2595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2594, malloc2592);
            panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2595, &$s2596);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2597, &$s2598);
            panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, &$s2600);
            panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, size2570);
            panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
            (($fn2605) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2604);
            panda$core$String* $tmp2607 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2606 = $tmp2607;
            panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2608, result2606);
            panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2610);
            panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, malloc2592);
            panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, &$s2613);
            org$pandalanguage$pandac$Type* $tmp2615 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2551);
            panda$core$String* $tmp2616 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2615);
            panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, $tmp2616);
            panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, &$s2618);
            (($fn2620) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2619);
            return result2606;
        }
        }
        else {
        panda$core$Bit $tmp2622 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_02552, &$s2621);
        if ($tmp2622.value) {
        {
            panda$core$Int64 $tmp2623 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2623, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2624.value);
            panda$core$Object* $tmp2626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2627 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2626), p_out);
            ptr2625 = $tmp2627;
            org$pandalanguage$pandac$Type* $tmp2629 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2551);
            panda$core$String* $tmp2630 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2629);
            baseType2628 = $tmp2630;
            panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2628, &$s2632);
            ptrType2631 = $tmp2633;
            panda$core$String* $tmp2635 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2634 = $tmp2635;
            panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2636, cast2634);
            panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2638);
            panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, ptr2625);
            panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2641);
            panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, ptrType2631);
            panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2643, &$s2644);
            (($fn2646) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2645);
            panda$core$String* $tmp2648 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2647 = $tmp2648;
            panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2649, load2647);
            panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, &$s2651);
            panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, baseType2628);
            panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, &$s2654);
            panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, ptrType2631);
            panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, &$s2657);
            panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2658, cast2634);
            panda$core$String* $tmp2661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2659, &$s2660);
            (($fn2662) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2661);
            return load2647;
        }
        }
        else {
        panda$core$Bit $tmp2664 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_02552, &$s2663);
        if ($tmp2664.value) {
        {
            panda$core$Int64 $tmp2665 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2665, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2666.value);
            panda$core$Object* $tmp2668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2669 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2668), p_out);
            ptr2667 = $tmp2669;
            org$pandalanguage$pandac$Type* $tmp2671 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2551);
            panda$core$String* $tmp2672 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2671);
            baseType2670 = $tmp2672;
            panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2670, &$s2674);
            ptrType2673 = $tmp2675;
            panda$core$String* $tmp2677 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2676 = $tmp2677;
            panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2678, cast2676);
            panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, &$s2680);
            panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2681, ptr2667);
            panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2683);
            panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, ptrType2673);
            panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
            (($fn2688) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2687);
            panda$core$Object* $tmp2690 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2691 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2690), p_out);
            indexStruct2689 = $tmp2691;
            panda$core$String* $tmp2693 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2692 = $tmp2693;
            panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2694, index2692);
            panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
            panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, indexStruct2689);
            panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
            (($fn2701) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2700);
            panda$core$String* $tmp2703 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2702 = $tmp2703;
            panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2704, offsetPtr2702);
            panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, &$s2706);
            panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2707, baseType2670);
            panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2708, &$s2709);
            panda$core$String* $tmp2711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, ptrType2673);
            panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2712);
            panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, cast2676);
            panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, &$s2715);
            panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2717, index2692);
            panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
            panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, $tmp2720);
            (($fn2722) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2721);
            panda$core$String* $tmp2724 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2723 = $tmp2724;
            panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2725, load2723);
            panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
            panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, baseType2670);
            panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, &$s2730);
            panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, ptrType2673);
            panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, &$s2733);
            panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, offsetPtr2702);
            panda$core$String* $tmp2737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, &$s2736);
            (($fn2738) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2737);
            return load2723;
        }
        }
        else {
        panda$core$Bit $tmp2740 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_02552, &$s2739);
        if ($tmp2740.value) {
        {
            panda$core$Int64 $tmp2741 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2741, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2742.value);
            panda$core$Object* $tmp2744 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2745 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2744), p_out);
            ptr2743 = $tmp2745;
            panda$core$String* $tmp2747 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2746 = $tmp2747;
            panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2748, ptrCast2746);
            panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
            panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, ptr2743);
            panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, &$s2753);
            (($fn2755) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2754);
            panda$core$Object* $tmp2757 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2758 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2757), p_out);
            countStruct2756 = $tmp2758;
            panda$core$String* $tmp2760 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2759 = $tmp2760;
            panda$core$String* $tmp2762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2761, count2759);
            panda$core$String* $tmp2764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2762, &$s2763);
            panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2764, countStruct2756);
            panda$core$String* $tmp2767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, &$s2766);
            (($fn2768) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2767);
            panda$core$String* $tmp2770 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2769 = $tmp2770;
            panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2771, size2769);
            panda$core$String* $tmp2774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2772, &$s2773);
            panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2774, &$s2775);
            panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2776, &$s2777);
            panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, count2759);
            panda$core$String* $tmp2781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, &$s2780);
            org$pandalanguage$pandac$Type* $tmp2782 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2551);
            panda$core$Object* $tmp2783 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2782->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2784 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2783));
            panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2781, ((panda$core$Object*) wrap_panda$core$Int64($tmp2784)));
            (($fn2786) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2785);
            panda$core$String* $tmp2788 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2787 = $tmp2788;
            panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2789, realloc2787);
            panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, &$s2791);
            panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, ptrCast2746);
            panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
            panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2796);
            panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, &$s2798);
            panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2800, size2769);
            panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, &$s2802);
            panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, $tmp2803);
            (($fn2805) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2804);
            panda$core$String* $tmp2807 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2806 = $tmp2807;
            panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2808, result2806);
            panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, &$s2810);
            panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, realloc2787);
            panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, &$s2813);
            org$pandalanguage$pandac$Type* $tmp2815 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2551);
            panda$core$String* $tmp2816 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2815);
            panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, $tmp2816);
            panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2818);
            (($fn2820) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2819);
            return result2806;
        }
        }
        else {
        panda$core$Bit $tmp2822 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_02552, &$s2821);
        if ($tmp2822.value) {
        {
            panda$core$Int64 $tmp2823 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2823, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2824.value);
            panda$core$Object* $tmp2826 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2827 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2826), p_out);
            ptr2825 = $tmp2827;
            panda$core$Object* $tmp2829 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2830 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp2829)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2831 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2830));
            baseType2828 = $tmp2831;
            panda$core$Object* $tmp2833 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2834 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2833), p_out);
            offsetStruct2832 = $tmp2834;
            panda$core$String* $tmp2836 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2835 = $tmp2836;
            panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2837, offset2835);
            panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
            panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, offsetStruct2832);
            panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2842);
            (($fn2844) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2843);
            panda$core$String* $tmp2846 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2845 = $tmp2846;
            panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2847, result2845);
            panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2848, &$s2849);
            panda$core$String* $tmp2851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, baseType2828);
            panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2851, &$s2852);
            panda$core$String* $tmp2854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, ptr2825);
            panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2854, &$s2855);
            panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, offset2835);
            panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, &$s2858);
            (($fn2860) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2859);
            return result2845;
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
    org$pandalanguage$pandac$MethodDecl* m2861;
    panda$core$String* selfRef2862;
    panda$core$Int64 argStart2864;
    panda$collections$Array* args2868;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2871;
    panda$core$String* end2904;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2913;
    org$pandalanguage$pandac$MethodDecl* old2920;
    panda$core$String* phi2933;
    panda$core$String* separator2944;
    panda$collections$Iterator* ret$Iter2946;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2958;
    m2861 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentFile, ((panda$core$Object*) m2861->owner->source));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2861), ((panda$core$Object*) m2861));
    selfRef2862 = &$s2863;
    panda$core$Bit $tmp2865 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2861);
    if ($tmp2865.value) {
    {
        argStart2864 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2866 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2867 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2866), p_out);
        selfRef2862 = $tmp2867;
    }
    }
    else {
    {
        argStart2864 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2869 = (panda$collections$Array*) malloc(40);
    $tmp2869->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2869->refCount.value = 1;
    panda$collections$Array$init($tmp2869);
    args2868 = $tmp2869;
    panda$core$Int64 $tmp2872 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2871, argStart2864, $tmp2872, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2874 = $tmp2871.start.value;
    panda$core$Int64 i2873 = { $tmp2874 };
    int64_t $tmp2876 = $tmp2871.end.value;
    int64_t $tmp2877 = $tmp2871.step.value;
    bool $tmp2878 = $tmp2871.inclusive.value;
    bool $tmp2885 = $tmp2877 > 0;
    if ($tmp2885) goto $l2883; else goto $l2884;
    $l2883:;
    if ($tmp2878) goto $l2886; else goto $l2887;
    $l2886:;
    if ($tmp2874 <= $tmp2876) goto $l2879; else goto $l2881;
    $l2887:;
    if ($tmp2874 < $tmp2876) goto $l2879; else goto $l2881;
    $l2884:;
    if ($tmp2878) goto $l2888; else goto $l2889;
    $l2888:;
    if ($tmp2874 >= $tmp2876) goto $l2879; else goto $l2881;
    $l2889:;
    if ($tmp2874 > $tmp2876) goto $l2879; else goto $l2881;
    $l2879:;
    {
        panda$core$Object* $tmp2891 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2873);
        panda$core$String* $tmp2892 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2891), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2868, ((panda$core$Object*) $tmp2892));
    }
    $l2882:;
    if ($tmp2885) goto $l2894; else goto $l2895;
    $l2894:;
    int64_t $tmp2896 = $tmp2876 - i2873.value;
    if ($tmp2878) goto $l2897; else goto $l2898;
    $l2897:;
    if ($tmp2896 >= $tmp2877) goto $l2893; else goto $l2881;
    $l2898:;
    if ($tmp2896 > $tmp2877) goto $l2893; else goto $l2881;
    $l2895:;
    int64_t $tmp2900 = i2873.value - $tmp2876;
    if ($tmp2878) goto $l2901; else goto $l2902;
    $l2901:;
    if ($tmp2900 >= -$tmp2877) goto $l2893; else goto $l2881;
    $l2902:;
    if ($tmp2900 > -$tmp2877) goto $l2893; else goto $l2881;
    $l2893:;
    i2873.value += $tmp2877;
    goto $l2879;
    $l2881:;
    panda$core$String* $tmp2905 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2904 = $tmp2905;
    panda$core$Int64 $tmp2906 = panda$collections$Array$get_count$R$panda$core$Int64(args2868);
    panda$core$Int64 $tmp2907 = panda$collections$Array$get_count$R$panda$core$Int64(m2861->parameters);
    panda$core$Bit $tmp2908 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2906, $tmp2907);
    if ($tmp2908.value) {
    {
        panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2909, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2910, &$s2911);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2912));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2914 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2914->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2914->refCount.value = 1;
    panda$core$String* $tmp2917 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2916, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2917, &$s2918);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2914, $tmp2919, selfRef2862, ((panda$collections$ListView*) args2868), end2904);
    inline2913 = $tmp2914;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2913));
    old2920 = self->currentMethod;
    self->currentMethod = m2861;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_body, p_out);
    self->currentMethod = old2920;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2921 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2922 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2921);
    if ($tmp2922.value) {
    {
        (($fn2924) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2923);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end2904, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2861));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentFile);
    panda$core$Int64 $tmp2925 = panda$collections$Array$get_count$R$panda$core$Int64(inline2913->returns);
    panda$core$Bit $tmp2926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2925, ((panda$core$Int64) { 1 }));
    if ($tmp2926.value) {
    {
        panda$core$Object* $tmp2927 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2913->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2927)->second);
    }
    }
    panda$core$Int64 $tmp2928 = panda$collections$Array$get_count$R$panda$core$Int64(inline2913->returns);
    panda$core$Bit $tmp2929 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2928, ((panda$core$Int64) { 0 }));
    if ($tmp2929.value) {
    {
        (($fn2931) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2930);
        return &$s2932;
    }
    }
    panda$core$String* $tmp2934 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2933 = $tmp2934;
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2935, phi2933);
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, &$s2937);
    panda$core$String* $tmp2939 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2861->returnType);
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, $tmp2939);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, &$s2941);
    (($fn2943) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2942);
    separator2944 = &$s2945;
    {
        ITable* $tmp2947 = ((panda$collections$Iterable*) inline2913->returns)->$class->itable;
        while ($tmp2947->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2947 = $tmp2947->next;
        }
        $fn2949 $tmp2948 = $tmp2947->methods[0];
        panda$collections$Iterator* $tmp2950 = $tmp2948(((panda$collections$Iterable*) inline2913->returns));
        ret$Iter2946 = $tmp2950;
        $l2951:;
        ITable* $tmp2953 = ret$Iter2946->$class->itable;
        while ($tmp2953->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2953 = $tmp2953->next;
        }
        $fn2955 $tmp2954 = $tmp2953->methods[0];
        panda$core$Bit $tmp2956 = $tmp2954(ret$Iter2946);
        panda$core$Bit $tmp2957 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2956);
        if (!$tmp2957.value) goto $l2952;
        {
            ITable* $tmp2959 = ret$Iter2946->$class->itable;
            while ($tmp2959->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2959 = $tmp2959->next;
            }
            $fn2961 $tmp2960 = $tmp2959->methods[1];
            panda$core$Object* $tmp2962 = $tmp2960(ret$Iter2946);
            ret2958 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2962);
            panda$core$String* $tmp2964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2963, separator2944);
            panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2964, &$s2965);
            panda$core$String* $tmp2967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, ((panda$core$String*) ret2958->second));
            panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2967, &$s2968);
            panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2969, ((panda$core$String*) ret2958->first));
            panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2970, &$s2971);
            (($fn2973) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2972);
            separator2944 = &$s2974;
        }
        goto $l2951;
        $l2952:;
    }
    (($fn2975) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi2933;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2977;
    panda$core$String* bit2987;
    panda$core$String* result2991;
    panda$core$String* bit3007;
    panda$core$String* result3011;
    org$pandalanguage$pandac$IRNode* block3028;
    panda$collections$Array* args3032;
    org$pandalanguage$pandac$Type* actualMethodType3036;
    panda$core$String* actualResultType3037;
    panda$core$Bit isSuper3038;
    panda$core$Int64 offset3058;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3063;
    panda$core$String* arg3083;
    panda$core$String* target3120;
    panda$core$String* methodRef3124;
    panda$core$String* result3126;
    panda$core$Bit indirect3127;
    panda$core$String* separator3153;
    panda$core$String* indirectVar3155;
    panda$collections$Iterator* arg$Iter3176;
    panda$core$String* arg3188;
    panda$core$Bit $tmp2976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2976.value);
    m2977 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2979 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2977->owner)->name, &$s2978);
    if ($tmp2979.value) {
    {
        panda$core$String* $tmp2980 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2980;
    }
    }
    if (m2977->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2977);
    }
    }
    panda$core$Bit $tmp2982 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2977->owner)->name, &$s2981);
    if ($tmp2982.value) {
    {
        panda$core$Bit $tmp2984 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2977)->name, &$s2983);
        if ($tmp2984.value) {
        {
            panda$core$Int64 $tmp2985 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2985, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2986.value);
            panda$core$Object* $tmp2988 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2989 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2990 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2988), ((org$pandalanguage$pandac$IRNode*) $tmp2989), p_out);
            bit2987 = $tmp2990;
            panda$core$String* $tmp2992 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2991 = $tmp2992;
            panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2993, result2991);
            panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, &$s2995);
            panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2997, bit2987);
            panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, &$s2999);
            panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, $tmp3000);
            (($fn3002) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3001);
            return result2991;
        }
        }
        panda$core$Bit $tmp3004 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2977)->name, &$s3003);
        if ($tmp3004.value) {
        {
            panda$core$Int64 $tmp3005 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp3006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3005, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp3006.value);
            panda$core$Object* $tmp3008 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3009 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3010 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3008), ((org$pandalanguage$pandac$IRNode*) $tmp3009), p_out);
            bit3007 = $tmp3010;
            panda$core$String* $tmp3012 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result3011 = $tmp3012;
            panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3013, result3011);
            panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3014, &$s3015);
            panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3017, bit3007);
            panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, &$s3019);
            panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, $tmp3020);
            (($fn3022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3021);
            return result3011;
        }
        }
    }
    }
    panda$core$Bit $tmp3024 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2977->annotations);
    bool $tmp3023 = $tmp3024.value;
    if (!$tmp3023) goto $l3025;
    panda$core$Object* $tmp3026 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2977));
    $tmp3023 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp3026) == NULL }).value;
    $l3025:;
    panda$core$Bit $tmp3027 = { $tmp3023 };
    if ($tmp3027.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3029 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2977);
        block3028 = $tmp3029;
        if (((panda$core$Bit) { block3028 != NULL }).value) {
        {
            panda$core$String* $tmp3030 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, block3028, p_out);
            return $tmp3030;
        }
        }
        return &$s3031;
    }
    }
    panda$collections$Array* $tmp3033 = (panda$collections$Array*) malloc(40);
    $tmp3033->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3033->refCount.value = 1;
    panda$core$Int64 $tmp3035 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp3033, $tmp3035);
    args3032 = $tmp3033;
    panda$core$Int64 $tmp3040 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp3041 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3040, ((panda$core$Int64) { 1 }));
    bool $tmp3039 = $tmp3041.value;
    if (!$tmp3039) goto $l3042;
    panda$core$Object* $tmp3043 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3043)->kind, ((panda$core$Int64) { 1024 }));
    $tmp3039 = $tmp3044.value;
    $l3042:;
    panda$core$Bit $tmp3045 = { $tmp3039 };
    isSuper3038 = $tmp3045;
    panda$core$Bit $tmp3047 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper3038);
    bool $tmp3046 = $tmp3047.value;
    if (!$tmp3046) goto $l3048;
    panda$core$Bit $tmp3049 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2977);
    $tmp3046 = $tmp3049.value;
    $l3048:;
    panda$core$Bit $tmp3050 = { $tmp3046 };
    if ($tmp3050.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3051 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2977);
        actualMethodType3036 = $tmp3051;
        panda$core$Int64 $tmp3052 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3036->subtypes);
        panda$core$Int64 $tmp3053 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3052, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3054 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3036->subtypes, $tmp3053);
        panda$core$String* $tmp3055 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3054));
        actualResultType3037 = $tmp3055;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3056 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2977);
        actualMethodType3036 = $tmp3056;
        panda$core$String* $tmp3057 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType3037 = $tmp3057;
    }
    }
    panda$core$Int64 $tmp3059 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3060 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3036->subtypes);
    panda$core$Int64 $tmp3061 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3059, $tmp3060);
    panda$core$Int64 $tmp3062 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3061, ((panda$core$Int64) { 1 }));
    offset3058 = $tmp3062;
    panda$core$Int64 $tmp3064 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3063, ((panda$core$Int64) { 0 }), $tmp3064, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3066 = $tmp3063.start.value;
    panda$core$Int64 i3065 = { $tmp3066 };
    int64_t $tmp3068 = $tmp3063.end.value;
    int64_t $tmp3069 = $tmp3063.step.value;
    bool $tmp3070 = $tmp3063.inclusive.value;
    bool $tmp3077 = $tmp3069 > 0;
    if ($tmp3077) goto $l3075; else goto $l3076;
    $l3075:;
    if ($tmp3070) goto $l3078; else goto $l3079;
    $l3078:;
    if ($tmp3066 <= $tmp3068) goto $l3071; else goto $l3073;
    $l3079:;
    if ($tmp3066 < $tmp3068) goto $l3071; else goto $l3073;
    $l3076:;
    if ($tmp3070) goto $l3080; else goto $l3081;
    $l3080:;
    if ($tmp3066 >= $tmp3068) goto $l3071; else goto $l3073;
    $l3081:;
    if ($tmp3066 > $tmp3068) goto $l3071; else goto $l3073;
    $l3071:;
    {
        panda$core$Object* $tmp3084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3065);
        panda$core$String* $tmp3085 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3084), p_out);
        arg3083 = $tmp3085;
        panda$core$Bit $tmp3087 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3065, offset3058);
        bool $tmp3086 = $tmp3087.value;
        if (!$tmp3086) goto $l3088;
        panda$core$Int64 $tmp3089 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3065, offset3058);
        panda$core$Object* $tmp3090 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3036->subtypes, $tmp3089);
        panda$core$Object* $tmp3091 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3065);
        panda$core$Bit $tmp3092 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3090), ((org$pandalanguage$pandac$IRNode*) $tmp3091)->type);
        $tmp3086 = $tmp3092.value;
        $l3088:;
        panda$core$Bit $tmp3093 = { $tmp3086 };
        if ($tmp3093.value) {
        {
            panda$core$Int64 $tmp3094 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3065, offset3058);
            panda$core$Object* $tmp3095 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3036->subtypes, $tmp3094);
            panda$core$String* $tmp3096 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3095));
            panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
            panda$core$Object* $tmp3099 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3065);
            panda$core$Int64 $tmp3100 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3065, offset3058);
            panda$core$Object* $tmp3101 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3036->subtypes, $tmp3100);
            panda$core$String* $tmp3102 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg3083, ((org$pandalanguage$pandac$IRNode*) $tmp3099)->type, ((org$pandalanguage$pandac$Type*) $tmp3101), p_out);
            panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, $tmp3102);
            arg3083 = $tmp3103;
        }
        }
        else {
        {
            panda$core$Object* $tmp3104 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3065);
            panda$core$String* $tmp3105 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3104)->type);
            panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3105, &$s3106);
            panda$core$String* $tmp3108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, arg3083);
            arg3083 = $tmp3108;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args3032, ((panda$core$Object*) arg3083));
    }
    $l3074:;
    if ($tmp3077) goto $l3110; else goto $l3111;
    $l3110:;
    int64_t $tmp3112 = $tmp3068 - i3065.value;
    if ($tmp3070) goto $l3113; else goto $l3114;
    $l3113:;
    if ($tmp3112 >= $tmp3069) goto $l3109; else goto $l3073;
    $l3114:;
    if ($tmp3112 > $tmp3069) goto $l3109; else goto $l3073;
    $l3111:;
    int64_t $tmp3116 = i3065.value - $tmp3068;
    if ($tmp3070) goto $l3117; else goto $l3118;
    $l3117:;
    if ($tmp3116 >= -$tmp3069) goto $l3109; else goto $l3073;
    $l3118:;
    if ($tmp3116 > -$tmp3069) goto $l3109; else goto $l3073;
    $l3109:;
    i3065.value += $tmp3069;
    goto $l3071;
    $l3073:;
    panda$core$Int64 $tmp3121 = panda$collections$Array$get_count$R$panda$core$Int64(args3032);
    panda$core$Bit $tmp3122 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3121, ((panda$core$Int64) { 0 }));
    if ($tmp3122.value) {
    {
        panda$core$Object* $tmp3123 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args3032, ((panda$core$Int64) { 0 }));
        target3120 = ((panda$core$String*) $tmp3123);
    }
    }
    else {
    {
        target3120 = NULL;
    }
    }
    panda$core$String* $tmp3125 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target3120, m2977, isSuper3038, p_out);
    methodRef3124 = $tmp3125;
    panda$core$Bit $tmp3128 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2977);
    indirect3127 = $tmp3128;
    if (indirect3127.value) {
    {
        panda$core$String* $tmp3130 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2977);
        panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3129, $tmp3130);
        panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, &$s3132);
        (($fn3134) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3133);
    }
    }
    else {
    {
        panda$core$String* $tmp3135 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3126 = $tmp3135;
        panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3136, result3126);
        panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, &$s3138);
        panda$core$String* $tmp3140 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2977);
        panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, $tmp3140);
        panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3142);
        panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, actualResultType3037);
        panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, &$s3145);
        (($fn3147) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3146);
    }
    }
    panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3148, methodRef3124);
    panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3149, &$s3150);
    (($fn3152) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3151);
    separator3153 = &$s3154;
    if (indirect3127.value) {
    {
        panda$core$Int64 $tmp3156 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3156;
        panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3157, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3155 = $tmp3158;
        panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3159, indirectVar3155);
        panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, &$s3161);
        panda$core$String* $tmp3163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, actualResultType3037);
        panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3163, &$s3164);
        (($fn3166) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3165);
        panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3167, actualResultType3037);
        panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, &$s3169);
        panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, indirectVar3155);
        panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, &$s3172);
        (($fn3174) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3173);
        separator3153 = &$s3175;
    }
    }
    {
        ITable* $tmp3177 = ((panda$collections$Iterable*) args3032)->$class->itable;
        while ($tmp3177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3177 = $tmp3177->next;
        }
        $fn3179 $tmp3178 = $tmp3177->methods[0];
        panda$collections$Iterator* $tmp3180 = $tmp3178(((panda$collections$Iterable*) args3032));
        arg$Iter3176 = $tmp3180;
        $l3181:;
        ITable* $tmp3183 = arg$Iter3176->$class->itable;
        while ($tmp3183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3183 = $tmp3183->next;
        }
        $fn3185 $tmp3184 = $tmp3183->methods[0];
        panda$core$Bit $tmp3186 = $tmp3184(arg$Iter3176);
        panda$core$Bit $tmp3187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3186);
        if (!$tmp3187.value) goto $l3182;
        {
            ITable* $tmp3189 = arg$Iter3176->$class->itable;
            while ($tmp3189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3189 = $tmp3189->next;
            }
            $fn3191 $tmp3190 = $tmp3189->methods[1];
            panda$core$Object* $tmp3192 = $tmp3190(arg$Iter3176);
            arg3188 = ((panda$core$String*) $tmp3192);
            panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3193, separator3153);
            panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, &$s3195);
            panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, arg3188);
            panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
            (($fn3200) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3199);
            separator3153 = &$s3201;
        }
        goto $l3181;
        $l3182:;
    }
    (($fn3203) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3202);
    if (indirect3127.value) {
    {
        panda$core$String* $tmp3204 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3126 = $tmp3204;
        panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3205, result3126);
        panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, &$s3207);
        panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3208, actualResultType3037);
        panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, &$s3210);
        panda$core$String* $tmp3212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, actualResultType3037);
        panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3212, &$s3213);
        panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3214, indirectVar3155);
        (($fn3216) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3215);
    }
    }
    panda$core$String* $tmp3217 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3218 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3217, actualResultType3037);
    if ($tmp3218.value) {
    {
        panda$core$Int64 $tmp3219 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3036->subtypes);
        panda$core$Int64 $tmp3220 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3219, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3221 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3036->subtypes, $tmp3220);
        panda$core$String* $tmp3222 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result3126, ((org$pandalanguage$pandac$Type*) $tmp3221), p_call->type, p_out);
        return $tmp3222;
    }
    }
    return result3126;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3223;
    panda$core$String* testStart3226;
    panda$core$String* isNonNull3227;
    panda$core$String* nonNullLabel3241;
    panda$core$String* endLabel3243;
    panda$core$String* unwrapped3256;
    panda$core$String* nonNullValue3259;
    panda$core$String* result3267;
    panda$core$String* mallocRef3289;
    panda$core$String* wrapperTypeName3301;
    panda$core$String* wrapperType3304;
    panda$core$String* wrapperCast3307;
    panda$core$String* classPtr3320;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3338;
    panda$core$String* refCount3353;
    panda$core$String* target3376;
    panda$core$String* result3412;
    org$pandalanguage$pandac$ClassDecl* $tmp3224 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3223 = $tmp3224;
    PANDA_ASSERT(((panda$core$Bit) { src3223 != NULL }).value);
    panda$core$Bit $tmp3225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3225.value) {
    {
        testStart3226 = self->currentBlock;
        panda$core$String* $tmp3228 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3227 = $tmp3228;
        panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3229, isNonNull3227);
        panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, &$s3231);
        panda$core$String* $tmp3233 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3232, $tmp3233);
        panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3234, &$s3235);
        panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, p_value);
        panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, &$s3238);
        (($fn3240) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3239);
        panda$core$String* $tmp3242 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3241 = $tmp3242;
        panda$core$String* $tmp3244 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3243 = $tmp3244;
        panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3245, isNonNull3227);
        panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, &$s3247);
        panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, nonNullLabel3241);
        panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, &$s3250);
        panda$core$String* $tmp3252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3251, endLabel3243);
        panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3252, &$s3253);
        (($fn3255) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3254);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3241, p_out);
        panda$core$Object* $tmp3257 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3258 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3257), p_out);
        unwrapped3256 = $tmp3258;
        panda$core$Object* $tmp3260 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3261 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped3256, ((org$pandalanguage$pandac$Type*) $tmp3260), p_dstType, p_out);
        nonNullValue3259 = $tmp3261;
        panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3262, endLabel3243);
        panda$core$String* $tmp3265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3263, &$s3264);
        (($fn3266) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3265);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3243, p_out);
        panda$core$String* $tmp3268 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3267 = $tmp3268;
        panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3269, result3267);
        panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, &$s3271);
        panda$core$String* $tmp3273 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3272, $tmp3273);
        panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3274, &$s3275);
        panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3276, testStart3226);
        panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3277, &$s3278);
        panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3280, nonNullValue3259);
        panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, &$s3282);
        panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, nonNullLabel3241);
        panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3284, &$s3285);
        panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, $tmp3286);
        (($fn3288) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3287);
        return result3267;
    }
    }
    panda$core$String* $tmp3290 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3289 = $tmp3290;
    panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3291, mallocRef3289);
    panda$core$String* $tmp3294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, &$s3293);
    org$pandalanguage$pandac$Type* $tmp3295 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3223);
    panda$core$Int64 $tmp3296 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3295);
    panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3294, ((panda$core$Object*) wrap_panda$core$Int64($tmp3296)));
    panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, &$s3298);
    (($fn3300) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3299);
    org$pandalanguage$pandac$Type* $tmp3302 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3223);
    panda$core$String* $tmp3303 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3302);
    wrapperTypeName3301 = $tmp3303;
    org$pandalanguage$pandac$Type* $tmp3305 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3223);
    panda$core$String* $tmp3306 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3305);
    wrapperType3304 = $tmp3306;
    panda$core$String* $tmp3308 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3307 = $tmp3308;
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3309, wrapperCast3307);
    panda$core$String* $tmp3312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, &$s3311);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3312, mallocRef3289);
    panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, &$s3314);
    panda$core$String* $tmp3316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, wrapperType3304);
    panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3316, &$s3317);
    (($fn3319) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3318);
    panda$core$String* $tmp3321 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3320 = $tmp3321;
    panda$core$String* $tmp3323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3322, classPtr3320);
    panda$core$String* $tmp3325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3323, &$s3324);
    panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3325, wrapperTypeName3301);
    panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, &$s3327);
    panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3329, wrapperType3304);
    panda$core$String* $tmp3332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, &$s3331);
    panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3332, wrapperCast3307);
    panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, &$s3334);
    panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, $tmp3335);
    (($fn3337) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3336);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3339 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3223);
    cc3338 = $tmp3339;
    panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3340, cc3338->type);
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
    panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, cc3338->name);
    panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, &$s3345);
    panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3347, classPtr3320);
    panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, &$s3349);
    panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, $tmp3350);
    (($fn3352) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3351);
    panda$core$String* $tmp3354 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3353 = $tmp3354;
    panda$core$String* $tmp3356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3355, refCount3353);
    panda$core$String* $tmp3358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3356, &$s3357);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3358, wrapperTypeName3301);
    panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, &$s3360);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3362, wrapperType3304);
    panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3363, &$s3364);
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, wrapperCast3307);
    panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, &$s3367);
    panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, $tmp3368);
    (($fn3370) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3369);
    panda$core$String* $tmp3372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3371, refCount3353);
    panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3372, &$s3373);
    (($fn3375) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3374);
    panda$core$String* $tmp3377 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3376 = $tmp3377;
    panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3378, target3376);
    panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3379, &$s3380);
    panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3381, wrapperTypeName3301);
    panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, &$s3383);
    panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3385, wrapperType3304);
    panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, &$s3387);
    panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, wrapperCast3307);
    panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3389, &$s3390);
    panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, $tmp3391);
    (($fn3393) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3392);
    panda$core$String* $tmp3395 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3394, $tmp3395);
    panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, &$s3397);
    panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, p_value);
    panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, &$s3400);
    panda$core$String* $tmp3402 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, $tmp3402);
    panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, &$s3404);
    panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, target3376);
    panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3406, &$s3407);
    (($fn3409) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3408);
    panda$core$String* $tmp3410 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3411 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3304, $tmp3410);
    if ($tmp3411.value) {
    {
        panda$core$String* $tmp3413 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3412 = $tmp3413;
        panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3414, result3412);
        panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, &$s3416);
        panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3417, wrapperType3304);
        panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3418, &$s3419);
        panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3420, wrapperCast3307);
        panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3421, &$s3422);
        panda$core$String* $tmp3424 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, $tmp3424);
        panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3425, &$s3426);
        (($fn3428) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3427);
        return result3412;
    }
    }
    return wrapperCast3307;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3432;
    panda$core$String* t3433;
    org$pandalanguage$pandac$ClassDecl* cl3437;
    panda$core$String* base3441;
    panda$collections$ListView* fields3444;
    panda$core$Int64$nullable index3446;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3447;
    panda$core$String* result3485;
    panda$core$String* ptr3505;
    panda$core$String* result3514;
    panda$core$Bit $tmp3429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3429.value);
    panda$core$Int64 $tmp3430 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3430, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3431.value);
    field3432 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3434 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3432->type);
    t3433 = $tmp3434;
    panda$core$Bit $tmp3435 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3432->annotations);
    if ($tmp3435.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3432->value != NULL }).value);
        panda$core$String* $tmp3436 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field3432->value, p_out);
        return $tmp3436;
    }
    }
    panda$core$Object* $tmp3438 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3439 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3438)->type);
    cl3437 = $tmp3439;
    PANDA_ASSERT(((panda$core$Bit) { cl3437 != NULL }).value);
    panda$core$Bit $tmp3440 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3437);
    if ($tmp3440.value) {
    {
        panda$core$Object* $tmp3442 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3443 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3442), p_out);
        base3441 = $tmp3443;
        panda$collections$ListView* $tmp3445 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3437);
        fields3444 = $tmp3445;
        index3446 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3448 = ((panda$collections$CollectionView*) fields3444)->$class->itable;
        while ($tmp3448->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3448 = $tmp3448->next;
        }
        $fn3450 $tmp3449 = $tmp3448->methods[0];
        panda$core$Int64 $tmp3451 = $tmp3449(((panda$collections$CollectionView*) fields3444));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3447, ((panda$core$Int64) { 0 }), $tmp3451, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp3453 = $tmp3447.start.value;
        panda$core$Int64 i3452 = { $tmp3453 };
        int64_t $tmp3455 = $tmp3447.end.value;
        int64_t $tmp3456 = $tmp3447.step.value;
        bool $tmp3457 = $tmp3447.inclusive.value;
        bool $tmp3464 = $tmp3456 > 0;
        if ($tmp3464) goto $l3462; else goto $l3463;
        $l3462:;
        if ($tmp3457) goto $l3465; else goto $l3466;
        $l3465:;
        if ($tmp3453 <= $tmp3455) goto $l3458; else goto $l3460;
        $l3466:;
        if ($tmp3453 < $tmp3455) goto $l3458; else goto $l3460;
        $l3463:;
        if ($tmp3457) goto $l3467; else goto $l3468;
        $l3467:;
        if ($tmp3453 >= $tmp3455) goto $l3458; else goto $l3460;
        $l3468:;
        if ($tmp3453 > $tmp3455) goto $l3458; else goto $l3460;
        $l3458:;
        {
            ITable* $tmp3470 = fields3444->$class->itable;
            while ($tmp3470->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3470 = $tmp3470->next;
            }
            $fn3472 $tmp3471 = $tmp3470->methods[0];
            panda$core$Object* $tmp3473 = $tmp3471(fields3444, i3452);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3473)) == ((panda$core$Object*) field3432) }).value) {
            {
                index3446 = ((panda$core$Int64$nullable) { i3452, true });
                goto $l3460;
            }
            }
        }
        $l3461:;
        if ($tmp3464) goto $l3475; else goto $l3476;
        $l3475:;
        int64_t $tmp3477 = $tmp3455 - i3452.value;
        if ($tmp3457) goto $l3478; else goto $l3479;
        $l3478:;
        if ($tmp3477 >= $tmp3456) goto $l3474; else goto $l3460;
        $l3479:;
        if ($tmp3477 > $tmp3456) goto $l3474; else goto $l3460;
        $l3476:;
        int64_t $tmp3481 = i3452.value - $tmp3455;
        if ($tmp3457) goto $l3482; else goto $l3483;
        $l3482:;
        if ($tmp3481 >= -$tmp3456) goto $l3474; else goto $l3460;
        $l3483:;
        if ($tmp3481 > -$tmp3456) goto $l3474; else goto $l3460;
        $l3474:;
        i3452.value += $tmp3456;
        goto $l3458;
        $l3460:;
        PANDA_ASSERT(((panda$core$Bit) { index3446.nonnull }).value);
        panda$core$String* $tmp3486 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3485 = $tmp3486;
        panda$core$String* $tmp3488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3487, result3485);
        panda$core$String* $tmp3490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3488, &$s3489);
        panda$core$Object* $tmp3491 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3492 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3491)->type);
        panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3490, $tmp3492);
        panda$core$String* $tmp3495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3493, &$s3494);
        panda$core$String* $tmp3496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3495, base3441);
        panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3496, &$s3497);
        panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3499, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3446.value))));
        panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3500, &$s3501);
        panda$core$String* $tmp3503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3498, $tmp3502);
        (($fn3504) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3503);
        return result3485;
    }
    }
    panda$core$String* $tmp3507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3506, t3433);
    panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3507, &$s3508);
    panda$core$String* $tmp3510 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3509, $tmp3510);
    panda$core$String* $tmp3513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3511, &$s3512);
    ptr3505 = $tmp3513;
    panda$core$String* $tmp3515 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3514 = $tmp3515;
    panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3516, result3514);
    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3517, &$s3518);
    panda$core$String* $tmp3520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, t3433);
    panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3520, &$s3521);
    panda$core$String* $tmp3523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, ptr3505);
    panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3523, &$s3524);
    (($fn3526) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3525);
    return result3514;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3527;
    panda$core$String* testStart3530;
    panda$core$String* isNonNull3531;
    panda$core$String* nonNullLabel3545;
    panda$core$String* endLabel3547;
    panda$core$String* wrapped3560;
    panda$core$String* nonNullValue3563;
    panda$core$String* result3571;
    panda$core$String* targetType3600;
    panda$core$String* wrapperTypeName3602;
    panda$core$String* wrapperType3604;
    panda$core$String* srcCast3606;
    panda$core$String* load3623;
    panda$core$String* result3639;
    org$pandalanguage$pandac$ClassDecl* $tmp3528 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3527 = $tmp3528;
    PANDA_ASSERT(((panda$core$Bit) { target3527 != NULL }).value);
    panda$core$Bit $tmp3529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3529.value) {
    {
        testStart3530 = self->currentBlock;
        panda$core$String* $tmp3532 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3531 = $tmp3532;
        panda$core$String* $tmp3534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3533, isNonNull3531);
        panda$core$String* $tmp3536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3534, &$s3535);
        panda$core$String* $tmp3537 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3536, $tmp3537);
        panda$core$String* $tmp3540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3538, &$s3539);
        panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3540, p_value);
        panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, &$s3542);
        (($fn3544) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3543);
        panda$core$String* $tmp3546 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3545 = $tmp3546;
        panda$core$String* $tmp3548 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3547 = $tmp3548;
        panda$core$String* $tmp3550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3549, isNonNull3531);
        panda$core$String* $tmp3552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3550, &$s3551);
        panda$core$String* $tmp3553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3552, nonNullLabel3545);
        panda$core$String* $tmp3555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3553, &$s3554);
        panda$core$String* $tmp3556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3555, endLabel3547);
        panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3556, &$s3557);
        (($fn3559) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3558);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3545, p_out);
        panda$core$Object* $tmp3561 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3562 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3561), p_out);
        wrapped3560 = $tmp3562;
        panda$core$Object* $tmp3564 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3565 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3560, ((org$pandalanguage$pandac$Type*) $tmp3564), p_dstType, p_out);
        nonNullValue3563 = $tmp3565;
        panda$core$String* $tmp3567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3566, endLabel3547);
        panda$core$String* $tmp3569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3567, &$s3568);
        (($fn3570) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3569);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3547, p_out);
        panda$core$String* $tmp3572 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3571 = $tmp3572;
        panda$core$String* $tmp3574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3573, result3571);
        panda$core$String* $tmp3576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3574, &$s3575);
        panda$core$String* $tmp3577 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3576, $tmp3577);
        panda$core$String* $tmp3580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3578, &$s3579);
        panda$core$Object* $tmp3582 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3583 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3582));
        panda$core$String* $tmp3584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3581, $tmp3583);
        panda$core$String* $tmp3586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3584, &$s3585);
        panda$core$String* $tmp3587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3580, $tmp3586);
        panda$core$String* $tmp3589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3588, testStart3530);
        panda$core$String* $tmp3591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3589, &$s3590);
        panda$core$String* $tmp3592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3591, nonNullValue3563);
        panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3592, &$s3593);
        panda$core$String* $tmp3595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3594, nonNullLabel3545);
        panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3595, &$s3596);
        panda$core$String* $tmp3598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3587, $tmp3597);
        (($fn3599) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3598);
        return result3571;
    }
    }
    panda$core$String* $tmp3601 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3600 = $tmp3601;
    panda$core$String* $tmp3603 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3602 = $tmp3603;
    panda$core$String* $tmp3605 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3604 = $tmp3605;
    panda$core$String* $tmp3607 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3606 = $tmp3607;
    panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3608, srcCast3606);
    panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, &$s3610);
    panda$core$String* $tmp3612 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, $tmp3612);
    panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, &$s3614);
    panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, p_value);
    panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3616, &$s3617);
    panda$core$String* $tmp3619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3618, wrapperType3604);
    panda$core$String* $tmp3621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3619, &$s3620);
    (($fn3622) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3621);
    panda$core$String* $tmp3624 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3623 = $tmp3624;
    panda$core$String* $tmp3626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3625, load3623);
    panda$core$String* $tmp3628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3626, &$s3627);
    panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3628, wrapperTypeName3602);
    panda$core$String* $tmp3631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3629, &$s3630);
    panda$core$String* $tmp3632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3631, wrapperType3604);
    panda$core$String* $tmp3634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3632, &$s3633);
    panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3634, srcCast3606);
    panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3635, &$s3636);
    (($fn3638) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3637);
    panda$core$String* $tmp3640 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3639 = $tmp3640;
    panda$core$String* $tmp3642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3641, result3639);
    panda$core$String* $tmp3644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3642, &$s3643);
    panda$core$String* $tmp3645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3644, wrapperTypeName3602);
    panda$core$String* $tmp3647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3645, &$s3646);
    panda$core$String* $tmp3648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3647, load3623);
    panda$core$String* $tmp3650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3648, &$s3649);
    panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3650, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3651, &$s3652);
    (($fn3654) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3653);
    return result3639;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType3655;
    panda$core$String* result3657;
    panda$core$String* $tmp3656 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3655 = $tmp3656;
    panda$core$String* $tmp3658 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3657 = $tmp3658;
    panda$core$String* $tmp3660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3659, result3657);
    panda$core$String* $tmp3662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3660, &$s3661);
    panda$core$String* $tmp3663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3662, nullableType3655);
    panda$core$String* $tmp3665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3663, &$s3664);
    panda$core$String* $tmp3667 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3666, $tmp3667);
    panda$core$String* $tmp3670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3668, &$s3669);
    panda$core$String* $tmp3671 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3670, $tmp3671);
    panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3672, &$s3673);
    panda$core$String* $tmp3675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3674, p_value);
    panda$core$String* $tmp3677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3675, &$s3676);
    panda$core$String* $tmp3678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3665, $tmp3677);
    (($fn3679) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3678);
    return result3657;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3680;
    panda$core$String* $tmp3681 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3680 = $tmp3681;
    panda$core$String* $tmp3683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3682, result3680);
    panda$core$String* $tmp3685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3683, &$s3684);
    panda$core$String* $tmp3686 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3685, $tmp3686);
    panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3687, &$s3688);
    panda$core$String* $tmp3690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3689, p_value);
    panda$core$String* $tmp3692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3690, &$s3691);
    (($fn3693) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3692);
    return result3680;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3694;
    panda$core$Int64 size13697;
    panda$core$Int64 size23699;
    org$pandalanguage$pandac$ClassDecl* srcClass3707;
    org$pandalanguage$pandac$ClassDecl* targetClass3709;
    panda$core$String* srcType3748;
    panda$core$String* dstType3750;
    panda$core$String* result3753;
    panda$core$Bit $tmp3695 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3695.value) {
    {
        panda$core$Bit $tmp3696 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3696.value);
        panda$core$Int64 $tmp3698 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13697 = $tmp3698;
        panda$core$Int64 $tmp3700 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23699 = $tmp3700;
        panda$core$Bit $tmp3701 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13697, size23699);
        if ($tmp3701.value) {
        {
            op3694 = &$s3702;
        }
        }
        else {
        panda$core$Bit $tmp3703 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13697, size23699);
        if ($tmp3703.value) {
        {
            panda$core$Bit $tmp3704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3704.value) {
            {
                op3694 = &$s3705;
            }
            }
            else {
            {
                op3694 = &$s3706;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3708 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3707 = $tmp3708;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3707 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3710 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3709 = $tmp3710;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3709 != NULL }).value);
        panda$core$Bit $tmp3712 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3707);
        bool $tmp3711 = $tmp3712.value;
        if (!$tmp3711) goto $l3713;
        panda$core$Bit $tmp3714 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3709);
        panda$core$Bit $tmp3715 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3714);
        $tmp3711 = $tmp3715.value;
        $l3713:;
        panda$core$Bit $tmp3716 = { $tmp3711 };
        if ($tmp3716.value) {
        {
            panda$core$String* $tmp3717 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3717;
        }
        }
        else {
        panda$core$Bit $tmp3719 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3707);
        panda$core$Bit $tmp3720 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3719);
        bool $tmp3718 = $tmp3720.value;
        if (!$tmp3718) goto $l3721;
        panda$core$Bit $tmp3722 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3709);
        $tmp3718 = $tmp3722.value;
        $l3721:;
        panda$core$Bit $tmp3723 = { $tmp3718 };
        if ($tmp3723.value) {
        {
            panda$core$String* $tmp3724 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3724;
        }
        }
        else {
        panda$core$Bit $tmp3727 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3707);
        bool $tmp3726 = $tmp3727.value;
        if (!$tmp3726) goto $l3728;
        panda$core$Bit $tmp3729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3726 = $tmp3729.value;
        $l3728:;
        panda$core$Bit $tmp3730 = { $tmp3726 };
        bool $tmp3725 = $tmp3730.value;
        if (!$tmp3725) goto $l3731;
        panda$core$Object* $tmp3732 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3733 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3732), p_src);
        $tmp3725 = $tmp3733.value;
        $l3731:;
        panda$core$Bit $tmp3734 = { $tmp3725 };
        if ($tmp3734.value) {
        {
            panda$core$String* $tmp3735 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3735;
        }
        }
        else {
        panda$core$Bit $tmp3738 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3709);
        bool $tmp3737 = $tmp3738.value;
        if (!$tmp3737) goto $l3739;
        panda$core$Bit $tmp3740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3737 = $tmp3740.value;
        $l3739:;
        panda$core$Bit $tmp3741 = { $tmp3737 };
        bool $tmp3736 = $tmp3741.value;
        if (!$tmp3736) goto $l3742;
        panda$core$Object* $tmp3743 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3744 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3743), p_target);
        $tmp3736 = $tmp3744.value;
        $l3742:;
        panda$core$Bit $tmp3745 = { $tmp3736 };
        if ($tmp3745.value) {
        {
            panda$core$String* $tmp3746 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3746;
        }
        }
        }
        }
        }
        op3694 = &$s3747;
    }
    }
    panda$core$String* $tmp3749 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3748 = $tmp3749;
    panda$core$String* $tmp3751 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3750 = $tmp3751;
    panda$core$Bit $tmp3752 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3748, dstType3750);
    if ($tmp3752.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3754 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3753 = $tmp3754;
    panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3755, result3753);
    panda$core$String* $tmp3758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3756, &$s3757);
    panda$core$String* $tmp3759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3758, op3694);
    panda$core$String* $tmp3761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3759, &$s3760);
    panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3761, srcType3748);
    panda$core$String* $tmp3764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3762, &$s3763);
    panda$core$String* $tmp3765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3764, p_value);
    panda$core$String* $tmp3767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3765, &$s3766);
    panda$core$String* $tmp3768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3767, dstType3750);
    panda$core$String* $tmp3770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3768, &$s3769);
    (($fn3771) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3770);
    return result3753;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3775;
    panda$core$Bit $tmp3772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3772.value);
    panda$core$Int64 $tmp3773 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3773, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3774.value);
    panda$core$Object* $tmp3776 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3777 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3776), p_out);
    base3775 = $tmp3777;
    panda$core$Object* $tmp3778 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3779 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3775, ((org$pandalanguage$pandac$IRNode*) $tmp3778)->type, p_cast->type, p_out);
    return $tmp3779;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3783;
    panda$core$String* t3785;
    panda$core$String* value3793;
    panda$core$String* result3804;
    org$pandalanguage$pandac$FieldDecl* lastField3806;
    panda$core$String* value3836;
    panda$core$String* result3847;
    org$pandalanguage$pandac$FieldDecl* lastField3849;
    panda$core$String* alloca3874;
    panda$core$String* result3895;
    panda$core$String* callRef3911;
    panda$core$String* result3922;
    panda$core$String* classPtr3936;
    panda$core$String* className3938;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3964;
    panda$core$Bit $tmp3780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3780.value);
    panda$core$Int64 $tmp3781 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3782 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3781, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3782.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3784 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3783 = $tmp3784;
    PANDA_ASSERT(((panda$core$Bit) { cl3783 != NULL }).value);
    panda$core$String* $tmp3786 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3785 = $tmp3786;
    panda$core$Bit $tmp3787 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3787.value) {
    {
        panda$core$Int64 $tmp3788 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3788, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3789.value);
        panda$core$Object* $tmp3790 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3791 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3790)->children);
        panda$core$Bit $tmp3792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3791, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3792.value);
        panda$core$Object* $tmp3794 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3794)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3796 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3795), p_out);
        value3793 = $tmp3796;
        panda$core$Object* $tmp3797 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3798 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3797)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3798)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3799.value) {
        {
            panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3800, value3793);
            panda$core$String* $tmp3803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3801, &$s3802);
            return $tmp3803;
        }
        }
        panda$core$String* $tmp3805 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3804 = $tmp3805;
        panda$core$Int64 $tmp3807 = panda$collections$Array$get_count$R$panda$core$Int64(cl3783->fields);
        panda$core$Int64 $tmp3808 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3807, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3809 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3783->fields, $tmp3808);
        lastField3806 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3809);
        panda$core$Bit $tmp3810 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3806->annotations);
        panda$core$Bit $tmp3811 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3810);
        PANDA_ASSERT($tmp3811.value);
        panda$core$String* $tmp3813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3812, result3804);
        panda$core$String* $tmp3815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3813, &$s3814);
        panda$core$String* $tmp3816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3815, t3785);
        panda$core$String* $tmp3818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3816, &$s3817);
        panda$core$String* $tmp3819 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3806->type);
        panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3818, $tmp3819);
        panda$core$String* $tmp3822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3820, &$s3821);
        panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3823, value3793);
        panda$core$String* $tmp3826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3824, &$s3825);
        panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3822, $tmp3826);
        (($fn3828) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3827);
        return result3804;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3829 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3830 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3829);
    if ($tmp3830.value) {
    {
        panda$core$Int64 $tmp3831 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3831, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3832.value);
        panda$core$Object* $tmp3833 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3834 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3833)->children);
        panda$core$Bit $tmp3835 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3834, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3835.value);
        panda$core$Object* $tmp3837 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3838 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3837)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3839 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3838), p_out);
        value3836 = $tmp3839;
        panda$core$Object* $tmp3840 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3841 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3840)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3841)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3842.value) {
        {
            panda$core$String* $tmp3844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3843, value3836);
            panda$core$String* $tmp3846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3844, &$s3845);
            return $tmp3846;
        }
        }
        panda$core$String* $tmp3848 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3847 = $tmp3848;
        panda$core$Int64 $tmp3850 = panda$collections$Array$get_count$R$panda$core$Int64(cl3783->fields);
        panda$core$Int64 $tmp3851 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3850, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3852 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3783->fields, $tmp3851);
        lastField3849 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3852);
        panda$core$Bit $tmp3853 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3849->annotations);
        panda$core$Bit $tmp3854 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3853);
        PANDA_ASSERT($tmp3854.value);
        panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3855, result3847);
        panda$core$String* $tmp3858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3856, &$s3857);
        panda$core$String* $tmp3859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3858, t3785);
        panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3859, &$s3860);
        panda$core$String* $tmp3862 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3849->type);
        panda$core$String* $tmp3863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3861, $tmp3862);
        panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3863, &$s3864);
        panda$core$String* $tmp3867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3866, value3836);
        panda$core$String* $tmp3869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3867, &$s3868);
        panda$core$String* $tmp3870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3865, $tmp3869);
        (($fn3871) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3870);
        return result3847;
    }
    }
    panda$core$Bit $tmp3872 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3783);
    if ($tmp3872.value) {
    {
        panda$core$Int64 $tmp3873 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3873;
        panda$core$String* $tmp3876 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3875, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3876, &$s3877);
        alloca3874 = $tmp3878;
        panda$core$String* $tmp3880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3879, alloca3874);
        panda$core$String* $tmp3882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3880, &$s3881);
        panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3882, t3785);
        panda$core$String* $tmp3885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3883, &$s3884);
        (($fn3886) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3885);
        panda$core$Object* $tmp3887 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3888, t3785);
        panda$core$String* $tmp3891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3889, &$s3890);
        panda$core$String* $tmp3892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3891, alloca3874);
        panda$core$String* $tmp3894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3892, &$s3893);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3887), $tmp3894, p_out);
        panda$core$String* $tmp3896 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3895 = $tmp3896;
        panda$core$String* $tmp3898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3897, result3895);
        panda$core$String* $tmp3900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3898, &$s3899);
        panda$core$String* $tmp3901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3900, t3785);
        panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3901, &$s3902);
        panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3903, t3785);
        panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, &$s3905);
        panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3906, alloca3874);
        panda$core$String* $tmp3909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3907, &$s3908);
        (($fn3910) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3909);
        return result3895;
    }
    }
    panda$core$String* $tmp3912 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3911 = $tmp3912;
    panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3913, callRef3911);
    panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3914, &$s3915);
    panda$core$Int64 $tmp3917 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3918 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3916, ((panda$core$Object*) wrap_panda$core$Int64($tmp3917)));
    panda$core$String* $tmp3920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3918, &$s3919);
    (($fn3921) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3920);
    panda$core$String* $tmp3923 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3922 = $tmp3923;
    panda$core$String* $tmp3925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3924, result3922);
    panda$core$String* $tmp3927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3925, &$s3926);
    panda$core$String* $tmp3928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3927, callRef3911);
    panda$core$String* $tmp3930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3928, &$s3929);
    panda$core$String* $tmp3931 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3930, $tmp3931);
    panda$core$String* $tmp3934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3932, &$s3933);
    (($fn3935) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3934);
    panda$core$String* $tmp3937 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3936 = $tmp3937;
    panda$core$Bit $tmp3940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3939 = $tmp3940.value;
    if (!$tmp3939) goto $l3941;
    panda$core$Bit $tmp3942 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3783);
    panda$core$Bit $tmp3943 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3942);
    $tmp3939 = $tmp3943.value;
    $l3941:;
    panda$core$Bit $tmp3944 = { $tmp3939 };
    if ($tmp3944.value) {
    {
        panda$core$Object* $tmp3945 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3946 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3945));
        className3938 = $tmp3946;
    }
    }
    else {
    {
        panda$core$String* $tmp3947 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3938 = $tmp3947;
    }
    }
    panda$core$String* $tmp3949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3948, classPtr3936);
    panda$core$String* $tmp3951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3949, &$s3950);
    panda$core$String* $tmp3952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3951, className3938);
    panda$core$String* $tmp3954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3952, &$s3953);
    panda$core$String* $tmp3955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3954, t3785);
    panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3955, &$s3956);
    panda$core$String* $tmp3958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, result3922);
    panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3958, &$s3959);
    panda$core$String* $tmp3962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, &$s3961);
    (($fn3963) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3962);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3965 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3783);
    cc3964 = $tmp3965;
    panda$core$String* $tmp3967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3966, cc3964->type);
    panda$core$String* $tmp3969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3967, &$s3968);
    panda$core$String* $tmp3970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3969, cc3964->name);
    panda$core$String* $tmp3972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3970, &$s3971);
    panda$core$String* $tmp3974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3973, classPtr3936);
    panda$core$String* $tmp3976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3974, &$s3975);
    panda$core$String* $tmp3977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3972, $tmp3976);
    (($fn3978) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3977);
    panda$core$Object* $tmp3979 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3980, t3785);
    panda$core$String* $tmp3983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3981, &$s3982);
    panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3983, result3922);
    panda$core$String* $tmp3986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3984, &$s3985);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3979), $tmp3986, p_out);
    return result3922;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3987 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3987;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3989 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3988, $tmp3989);
    return $tmp3990;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3991;
    }
    }
    return &$s3992;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3995;
    panda$core$String* t3997;
    panda$core$Bit $tmp3993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3993.value) {
    {
        panda$core$String* $tmp3994 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3994;
    }
    }
    panda$core$String* $tmp3996 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3995 = $tmp3996;
    panda$core$String* $tmp3998 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3997 = $tmp3998;
    panda$core$String* $tmp4000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3999, result3995);
    panda$core$String* $tmp4002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4000, &$s4001);
    panda$core$String* $tmp4003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4002, t3997);
    panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4003, &$s4004);
    panda$core$String* $tmp4006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4005, t3997);
    panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4006, &$s4007);
    panda$core$String* $tmp4009 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp4010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4008, $tmp4009);
    panda$core$String* $tmp4012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4010, &$s4011);
    (($fn4013) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4012);
    return result3995;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars4015;
    panda$core$String* charsType4020;
    panda$core$String* separator4038;
    panda$collections$Iterator* c$Iter4040;
    panda$core$Char8 c4053;
    panda$core$String* result4071;
    org$pandalanguage$pandac$ClassDecl* string4076;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4079;
    panda$core$Int64 $tmp4014 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4014;
    panda$core$String* $tmp4017 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4016, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4017, &$s4018);
    chars4015 = $tmp4019;
    panda$collections$ListView* $tmp4022 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4023 = ((panda$collections$CollectionView*) $tmp4022)->$class->itable;
    while ($tmp4023->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4023 = $tmp4023->next;
    }
    $fn4025 $tmp4024 = $tmp4023->methods[0];
    panda$core$Int64 $tmp4026 = $tmp4024(((panda$collections$CollectionView*) $tmp4022));
    panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4021, ((panda$core$Object*) wrap_panda$core$Int64($tmp4026)));
    panda$core$String* $tmp4029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4027, &$s4028);
    charsType4020 = $tmp4029;
    panda$core$String* $tmp4031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4030, chars4015);
    panda$core$String* $tmp4033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4031, &$s4032);
    panda$core$String* $tmp4034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4033, charsType4020);
    panda$core$String* $tmp4036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4034, &$s4035);
    (($fn4037) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4036);
    separator4038 = &$s4039;
    {
        panda$collections$ListView* $tmp4041 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp4042 = ((panda$collections$Iterable*) $tmp4041)->$class->itable;
        while ($tmp4042->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4042 = $tmp4042->next;
        }
        $fn4044 $tmp4043 = $tmp4042->methods[0];
        panda$collections$Iterator* $tmp4045 = $tmp4043(((panda$collections$Iterable*) $tmp4041));
        c$Iter4040 = $tmp4045;
        $l4046:;
        ITable* $tmp4048 = c$Iter4040->$class->itable;
        while ($tmp4048->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4048 = $tmp4048->next;
        }
        $fn4050 $tmp4049 = $tmp4048->methods[0];
        panda$core$Bit $tmp4051 = $tmp4049(c$Iter4040);
        panda$core$Bit $tmp4052 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4051);
        if (!$tmp4052.value) goto $l4047;
        {
            ITable* $tmp4054 = c$Iter4040->$class->itable;
            while ($tmp4054->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4054 = $tmp4054->next;
            }
            $fn4056 $tmp4055 = $tmp4054->methods[1];
            panda$core$Object* $tmp4057 = $tmp4055(c$Iter4040);
            c4053 = ((panda$core$Char8$wrapper*) $tmp4057)->value;
            panda$core$String* $tmp4059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4058, separator4038);
            panda$core$String* $tmp4061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4059, &$s4060);
            panda$core$Int8 $tmp4062 = panda$core$Char8$convert$R$panda$core$Int8(c4053);
            panda$core$String* $tmp4063 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4061, ((panda$core$Object*) wrap_panda$core$Int8($tmp4062)));
            panda$core$String* $tmp4065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4063, &$s4064);
            (($fn4066) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4065);
            separator4038 = &$s4067;
        }
        goto $l4046;
        $l4047:;
    }
    (($fn4069) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s4068);
    panda$core$Int64 $tmp4070 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4070;
    panda$core$String* $tmp4073 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4072, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4073, &$s4074);
    result4071 = $tmp4075;
    org$pandalanguage$pandac$Type* $tmp4077 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4078 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp4077);
    string4076 = $tmp4078;
    PANDA_ASSERT(((panda$core$Bit) { string4076 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4080 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string4076);
    cc4079 = $tmp4080;
    panda$core$String* $tmp4082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4081, result4071);
    panda$core$String* $tmp4084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4082, &$s4083);
    panda$core$String* $tmp4086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4085, cc4079->type);
    panda$core$String* $tmp4088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4086, &$s4087);
    panda$core$String* $tmp4089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4088, cc4079->name);
    panda$core$String* $tmp4091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4089, &$s4090);
    panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4084, $tmp4091);
    panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, &$s4093);
    panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4095, charsType4020);
    panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, &$s4097);
    panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4098, chars4015);
    panda$core$String* $tmp4101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4099, &$s4100);
    panda$core$String* $tmp4102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4094, $tmp4101);
    panda$collections$ListView* $tmp4104 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4105 = ((panda$collections$CollectionView*) $tmp4104)->$class->itable;
    while ($tmp4105->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4105 = $tmp4105->next;
    }
    $fn4107 $tmp4106 = $tmp4105->methods[0];
    panda$core$Int64 $tmp4108 = $tmp4106(((panda$collections$CollectionView*) $tmp4104));
    panda$core$String* $tmp4109 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4103, ((panda$core$Object*) wrap_panda$core$Int64($tmp4108)));
    panda$core$String* $tmp4111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4109, &$s4110);
    panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4102, $tmp4111);
    panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, &$s4113);
    (($fn4115) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4114);
    return result4071;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp4116 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp4117 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4116, ((panda$core$Int64) { 0 }));
    if ($tmp4117.value) {
    {
        panda$core$Object* $tmp4118 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4118)->selfRef;
    }
    }
    return &$s4119;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4120;
    panda$core$String* $tmp4121 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4120 = $tmp4121;
    panda$core$String* $tmp4123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4122, result4120);
    panda$core$String* $tmp4125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4123, &$s4124);
    org$pandalanguage$pandac$Type* $tmp4126 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp4127 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp4126);
    panda$core$String* $tmp4128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4125, $tmp4127);
    panda$core$String* $tmp4130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4128, &$s4129);
    panda$core$String* $tmp4131 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp4132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4130, $tmp4131);
    (($fn4133) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4132);
    return result4120;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4137;
    org$pandalanguage$pandac$ClassDecl* cl4140;
    panda$core$String* resultValue4143;
    panda$core$String* field4148;
    panda$core$String* result4176;
    panda$core$Bit $tmp4134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp4134.value);
    panda$core$Int64 $tmp4135 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4135, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4136.value);
    panda$core$Object* $tmp4138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4139 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4138), p_out);
    value4137 = $tmp4139;
    panda$core$Object* $tmp4141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4142 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4141)->type);
    cl4140 = $tmp4142;
    panda$core$Bit $tmp4144 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4140);
    if ($tmp4144.value) {
    {
        panda$core$Object* $tmp4145 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4146 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4145)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4146.value) {
        {
            return &$s4147;
        }
        }
        panda$core$String* $tmp4149 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field4148 = $tmp4149;
        panda$core$String* $tmp4151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4150, field4148);
        panda$core$String* $tmp4153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4151, &$s4152);
        panda$core$String* $tmp4154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4153, value4137);
        panda$core$String* $tmp4156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4154, &$s4155);
        (($fn4157) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4156);
        panda$core$String* $tmp4158 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4143 = $tmp4158;
        panda$core$String* $tmp4160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4159, resultValue4143);
        panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4160, &$s4161);
        panda$core$String* $tmp4163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, field4148);
        panda$core$String* $tmp4165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4163, &$s4164);
        (($fn4166) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4165);
    }
    }
    else {
    {
        panda$core$String* $tmp4167 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4143 = $tmp4167;
        panda$core$String* $tmp4169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4168, resultValue4143);
        panda$core$String* $tmp4171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4169, &$s4170);
        panda$core$String* $tmp4172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4171, value4137);
        panda$core$String* $tmp4174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4172, &$s4173);
        (($fn4175) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4174);
    }
    }
    panda$core$String* $tmp4177 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4176 = $tmp4177;
    panda$core$String* $tmp4179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4178, result4176);
    panda$core$String* $tmp4181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4179, &$s4180);
    panda$core$String* $tmp4182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4181, resultValue4143);
    panda$core$String* $tmp4184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4182, &$s4183);
    (($fn4185) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4184);
    return result4176;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4189;
    org$pandalanguage$pandac$ClassDecl* cl4192;
    panda$core$String* resultValue4195;
    panda$core$String* result4218;
    panda$core$Bit $tmp4186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4186.value);
    panda$core$Int64 $tmp4187 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4187, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4188.value);
    panda$core$Object* $tmp4190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4191 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4190), p_out);
    value4189 = $tmp4191;
    panda$core$Object* $tmp4193 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4194 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4193)->type);
    cl4192 = $tmp4194;
    panda$core$Bit $tmp4196 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4192);
    if ($tmp4196.value) {
    {
        panda$core$Object* $tmp4197 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4198 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4197)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4198.value) {
        {
            return &$s4199;
        }
        }
        panda$core$String* $tmp4200 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4195 = $tmp4200;
        panda$core$String* $tmp4202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4201, resultValue4195);
        panda$core$String* $tmp4204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4202, &$s4203);
        panda$core$String* $tmp4205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4204, value4189);
        panda$core$String* $tmp4207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4205, &$s4206);
        (($fn4208) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4207);
    }
    }
    else {
    {
        panda$core$String* $tmp4209 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4195 = $tmp4209;
        panda$core$String* $tmp4211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4210, resultValue4195);
        panda$core$String* $tmp4213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4211, &$s4212);
        panda$core$String* $tmp4214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4213, value4189);
        panda$core$String* $tmp4216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4214, &$s4215);
        (($fn4217) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4216);
    }
    }
    panda$core$String* $tmp4219 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4218 = $tmp4219;
    panda$core$String* $tmp4221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4220, result4218);
    panda$core$String* $tmp4223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4221, &$s4222);
    panda$core$String* $tmp4224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4223, resultValue4195);
    panda$core$String* $tmp4226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4224, &$s4225);
    (($fn4227) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4226);
    return result4218;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4229;
    panda$core$Bit $tmp4228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4228.value);
    panda$core$Object* $tmp4230 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4231 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4230));
    cl4229 = $tmp4231;
    PANDA_ASSERT(((panda$core$Bit) { cl4229 != NULL }).value);
    panda$core$Bit $tmp4232 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4229);
    if ($tmp4232.value) {
    {
        panda$core$Object* $tmp4234 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4235 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4234));
        panda$core$String* $tmp4236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4233, $tmp4235);
        panda$core$String* $tmp4238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4236, &$s4237);
        return $tmp4238;
    }
    }
    else {
    {
        return &$s4239;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4243;
    panda$core$String* result4246;
    panda$core$Bit $tmp4240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4240.value);
    panda$core$Int64 $tmp4241 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4241, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4242.value);
    panda$core$Object* $tmp4244 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4245 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4244), p_out);
    base4243 = $tmp4245;
    panda$core$String* $tmp4247 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4246 = $tmp4247;
    panda$core$Int64 $tmp4248 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4248.value) {
        case 52:
        {
            panda$core$String* $tmp4250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4249, result4246);
            panda$core$String* $tmp4252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4250, &$s4251);
            panda$core$String* $tmp4253 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4252, $tmp4253);
            panda$core$String* $tmp4256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4254, &$s4255);
            panda$core$String* $tmp4257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4256, base4243);
            panda$core$String* $tmp4259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4257, &$s4258);
            (($fn4260) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4259);
            return result4246;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4261, result4246);
            panda$core$String* $tmp4264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4262, &$s4263);
            panda$core$String* $tmp4265 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4264, $tmp4265);
            panda$core$String* $tmp4268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4266, &$s4267);
            panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4268, base4243);
            panda$core$String* $tmp4271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4269, &$s4270);
            (($fn4272) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4271);
            return result4246;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4285;
    panda$core$String* result4288;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4273 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4273;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4274 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4274;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4275 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4275;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4276 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4276;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4277 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4277;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4278 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4278;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4279 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4279;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4280 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4280;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4281 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4281;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4282 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4282;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4283 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4283;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4284 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4284;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4287 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4286), p_out);
            value4285 = $tmp4287;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4285));
            return value4285;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4289 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4288 = ((panda$core$String*) $tmp4289);
            PANDA_ASSERT(((panda$core$Bit) { result4288 != NULL }).value);
            return result4288;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4290 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4290;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4291 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4291;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4292 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4292;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4293 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4293;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4295 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4294, $tmp4295);
    panda$core$String* $tmp4298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4296, &$s4297);
    panda$core$String* $tmp4299 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4298, $tmp4299);
    panda$core$String* $tmp4302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4300, &$s4301);
    return $tmp4302;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4305;
    org$pandalanguage$pandac$IRNode* s4317;
    panda$core$Bit $tmp4303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4303.value);
    panda$core$Int64 $tmp4304 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4304;
    {
        ITable* $tmp4306 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4306->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4306 = $tmp4306->next;
        }
        $fn4308 $tmp4307 = $tmp4306->methods[0];
        panda$collections$Iterator* $tmp4309 = $tmp4307(((panda$collections$Iterable*) p_block->children));
        s$Iter4305 = $tmp4309;
        $l4310:;
        ITable* $tmp4312 = s$Iter4305->$class->itable;
        while ($tmp4312->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4312 = $tmp4312->next;
        }
        $fn4314 $tmp4313 = $tmp4312->methods[0];
        panda$core$Bit $tmp4315 = $tmp4313(s$Iter4305);
        panda$core$Bit $tmp4316 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4315);
        if (!$tmp4316.value) goto $l4311;
        {
            ITable* $tmp4318 = s$Iter4305->$class->itable;
            while ($tmp4318->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4318 = $tmp4318->next;
            }
            $fn4320 $tmp4319 = $tmp4318->methods[1];
            panda$core$Object* $tmp4321 = $tmp4319(s$Iter4305);
            s4317 = ((org$pandalanguage$pandac$IRNode*) $tmp4321);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4317, p_out);
        }
        goto $l4310;
        $l4311:;
    }
    panda$core$Int64 $tmp4322 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4322;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4323;
    panda$core$String* $match$0_04324;
    panda$core$String* ptr4329;
    panda$core$String* arg4332;
    org$pandalanguage$pandac$Type* baseType4352;
    panda$core$String* base4356;
    panda$core$String* indexStruct4359;
    panda$core$String* index4362;
    panda$core$String* value4372;
    panda$core$String* ptr4376;
    panda$core$String* ptr4415;
    panda$core$String* cast4418;
    m4323 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$0_04324 = ((org$pandalanguage$pandac$Symbol*) m4323->value)->name;
        panda$core$Bit $tmp4326 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_04324, &$s4325);
        if ($tmp4326.value) {
        {
            panda$core$Int64 $tmp4327 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4327, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4328.value);
            panda$core$Object* $tmp4330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4331 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4330), p_out);
            ptr4329 = $tmp4331;
            panda$core$Object* $tmp4333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4334 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4333));
            panda$core$String* $tmp4335 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4334, p_out);
            arg4332 = $tmp4335;
            panda$core$String* $tmp4337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4336, arg4332);
            panda$core$String* $tmp4339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4337, &$s4338);
            panda$core$String* $tmp4340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4339, ptr4329);
            panda$core$String* $tmp4342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4340, &$s4341);
            (($fn4343) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4342);
        }
        }
        else {
        panda$core$Bit $tmp4345 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_04324, &$s4344);
        if ($tmp4345.value) {
        {
            panda$core$Int64 $tmp4346 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4346, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4347.value);
            panda$core$Object* $tmp4348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4349 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4348));
            panda$core$Int64 $tmp4350 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64($tmp4349->type->subtypes);
            panda$core$Bit $tmp4351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4350, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4351.value);
            panda$core$Object* $tmp4353 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4354 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4353));
            panda$core$Object* $tmp4355 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp4354->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4352 = ((org$pandalanguage$pandac$Type*) $tmp4355);
            panda$core$Object* $tmp4357 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4358 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4357), p_out);
            base4356 = $tmp4358;
            panda$core$Object* $tmp4360 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4361 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4360), p_out);
            indexStruct4359 = $tmp4361;
            panda$core$String* $tmp4363 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4362 = $tmp4363;
            panda$core$String* $tmp4365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4364, index4362);
            panda$core$String* $tmp4367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4365, &$s4366);
            panda$core$String* $tmp4368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4367, indexStruct4359);
            panda$core$String* $tmp4370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4368, &$s4369);
            (($fn4371) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4370);
            panda$core$Object* $tmp4373 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4374 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4373));
            panda$core$String* $tmp4375 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4374, p_out);
            value4372 = $tmp4375;
            panda$core$String* $tmp4377 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4376 = $tmp4377;
            panda$core$String* $tmp4379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4378, ptr4376);
            panda$core$String* $tmp4381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4379, &$s4380);
            panda$core$String* $tmp4382 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4352);
            panda$core$String* $tmp4383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4381, $tmp4382);
            panda$core$String* $tmp4385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4383, &$s4384);
            panda$core$String* $tmp4386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4385, base4356);
            panda$core$String* $tmp4388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4386, &$s4387);
            panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4389, &$s4390);
            panda$core$String* $tmp4393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4391, &$s4392);
            panda$core$String* $tmp4394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4393, index4362);
            panda$core$String* $tmp4396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4394, &$s4395);
            panda$core$String* $tmp4397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4388, $tmp4396);
            (($fn4398) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4397);
            panda$core$String* $tmp4400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4399, value4372);
            panda$core$String* $tmp4402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4400, &$s4401);
            panda$core$String* $tmp4403 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4352);
            panda$core$String* $tmp4404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4402, $tmp4403);
            panda$core$String* $tmp4406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4404, &$s4405);
            panda$core$String* $tmp4407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4406, ptr4376);
            panda$core$String* $tmp4409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4407, &$s4408);
            (($fn4410) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4409);
        }
        }
        else {
        panda$core$Bit $tmp4412 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$0_04324, &$s4411);
        if ($tmp4412.value) {
        {
            panda$core$Int64 $tmp4413 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4413, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4414.value);
            panda$core$Object* $tmp4416 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4417 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4416), p_out);
            ptr4415 = $tmp4417;
            panda$core$String* $tmp4419 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4418 = $tmp4419;
            panda$core$String* $tmp4421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4420, cast4418);
            panda$core$String* $tmp4423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4421, &$s4422);
            panda$core$String* $tmp4424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4423, ptr4415);
            panda$core$String* $tmp4426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4424, &$s4425);
            (($fn4427) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4426);
            panda$core$String* $tmp4429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4428, cast4418);
            panda$core$String* $tmp4431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4429, &$s4430);
            (($fn4432) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4431);
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
    org$pandalanguage$pandac$MethodDecl* m4434;
    org$pandalanguage$pandac$Type* actualMethodType4437;
    panda$core$String* actualResultType4438;
    panda$core$Bit isSuper4439;
    panda$collections$Array* args4459;
    panda$core$Int64 offset4462;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4467;
    panda$core$String* arg4487;
    panda$core$String* refTarget4524;
    panda$core$String* methodRef4528;
    panda$core$String* separator4530;
    panda$core$String* indirectVar4534;
    panda$core$String* resultType4537;
    panda$collections$Iterator* a$Iter4582;
    panda$core$String* a4594;
    panda$core$Bit $tmp4433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4433.value);
    m4434 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4436 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4434->owner)->name, &$s4435);
    if ($tmp4436.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4434->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4434);
    }
    }
    panda$core$Int64 $tmp4441 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4442 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4441, ((panda$core$Int64) { 1 }));
    bool $tmp4440 = $tmp4442.value;
    if (!$tmp4440) goto $l4443;
    panda$core$Object* $tmp4444 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4444)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4440 = $tmp4445.value;
    $l4443:;
    panda$core$Bit $tmp4446 = { $tmp4440 };
    isSuper4439 = $tmp4446;
    panda$core$Bit $tmp4448 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4439);
    bool $tmp4447 = $tmp4448.value;
    if (!$tmp4447) goto $l4449;
    panda$core$Bit $tmp4450 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4434);
    $tmp4447 = $tmp4450.value;
    $l4449:;
    panda$core$Bit $tmp4451 = { $tmp4447 };
    if ($tmp4451.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4452 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4434);
        actualMethodType4437 = $tmp4452;
        panda$core$Int64 $tmp4453 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType4437->subtypes);
        panda$core$Int64 $tmp4454 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4453, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4455 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4437->subtypes, $tmp4454);
        panda$core$String* $tmp4456 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4455));
        actualResultType4438 = $tmp4456;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4457 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4434);
        actualMethodType4437 = $tmp4457;
        panda$core$String* $tmp4458 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4438 = $tmp4458;
    }
    }
    panda$collections$Array* $tmp4460 = (panda$collections$Array*) malloc(40);
    $tmp4460->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4460->refCount.value = 1;
    panda$collections$Array$init($tmp4460);
    args4459 = $tmp4460;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4459, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4463 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4464 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType4437->subtypes);
    panda$core$Int64 $tmp4465 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4463, $tmp4464);
    panda$core$Int64 $tmp4466 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4465, ((panda$core$Int64) { 1 }));
    offset4462 = $tmp4466;
    panda$core$Int64 $tmp4468 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4467, ((panda$core$Int64) { 0 }), $tmp4468, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4470 = $tmp4467.start.value;
    panda$core$Int64 i4469 = { $tmp4470 };
    int64_t $tmp4472 = $tmp4467.end.value;
    int64_t $tmp4473 = $tmp4467.step.value;
    bool $tmp4474 = $tmp4467.inclusive.value;
    bool $tmp4481 = $tmp4473 > 0;
    if ($tmp4481) goto $l4479; else goto $l4480;
    $l4479:;
    if ($tmp4474) goto $l4482; else goto $l4483;
    $l4482:;
    if ($tmp4470 <= $tmp4472) goto $l4475; else goto $l4477;
    $l4483:;
    if ($tmp4470 < $tmp4472) goto $l4475; else goto $l4477;
    $l4480:;
    if ($tmp4474) goto $l4484; else goto $l4485;
    $l4484:;
    if ($tmp4470 >= $tmp4472) goto $l4475; else goto $l4477;
    $l4485:;
    if ($tmp4470 > $tmp4472) goto $l4475; else goto $l4477;
    $l4475:;
    {
        panda$core$Object* $tmp4488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4469);
        panda$core$String* $tmp4489 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4488), p_out);
        arg4487 = $tmp4489;
        panda$core$Bit $tmp4491 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4469, offset4462);
        bool $tmp4490 = $tmp4491.value;
        if (!$tmp4490) goto $l4492;
        panda$core$Int64 $tmp4493 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4469, offset4462);
        panda$core$Object* $tmp4494 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4437->subtypes, $tmp4493);
        panda$core$Object* $tmp4495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4469);
        panda$core$Bit $tmp4496 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4494), ((org$pandalanguage$pandac$IRNode*) $tmp4495)->type);
        $tmp4490 = $tmp4496.value;
        $l4492:;
        panda$core$Bit $tmp4497 = { $tmp4490 };
        if ($tmp4497.value) {
        {
            panda$core$Int64 $tmp4498 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4469, offset4462);
            panda$core$Object* $tmp4499 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4437->subtypes, $tmp4498);
            panda$core$String* $tmp4500 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4499));
            panda$core$String* $tmp4502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4500, &$s4501);
            panda$core$Object* $tmp4503 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4469);
            panda$core$Int64 $tmp4504 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4469, offset4462);
            panda$core$Object* $tmp4505 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4437->subtypes, $tmp4504);
            panda$core$String* $tmp4506 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4487, ((org$pandalanguage$pandac$IRNode*) $tmp4503)->type, ((org$pandalanguage$pandac$Type*) $tmp4505), p_out);
            panda$core$String* $tmp4507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4502, $tmp4506);
            arg4487 = $tmp4507;
        }
        }
        else {
        {
            panda$core$Object* $tmp4508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4469);
            panda$core$String* $tmp4509 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4508)->type);
            panda$core$String* $tmp4511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4509, &$s4510);
            panda$core$String* $tmp4512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4511, arg4487);
            arg4487 = $tmp4512;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4459, ((panda$core$Object*) arg4487));
    }
    $l4478:;
    if ($tmp4481) goto $l4514; else goto $l4515;
    $l4514:;
    int64_t $tmp4516 = $tmp4472 - i4469.value;
    if ($tmp4474) goto $l4517; else goto $l4518;
    $l4517:;
    if ($tmp4516 >= $tmp4473) goto $l4513; else goto $l4477;
    $l4518:;
    if ($tmp4516 > $tmp4473) goto $l4513; else goto $l4477;
    $l4515:;
    int64_t $tmp4520 = i4469.value - $tmp4472;
    if ($tmp4474) goto $l4521; else goto $l4522;
    $l4521:;
    if ($tmp4520 >= -$tmp4473) goto $l4513; else goto $l4477;
    $l4522:;
    if ($tmp4520 > -$tmp4473) goto $l4513; else goto $l4477;
    $l4513:;
    i4469.value += $tmp4473;
    goto $l4475;
    $l4477:;
    panda$core$Int64 $tmp4525 = panda$collections$Array$get_count$R$panda$core$Int64(args4459);
    panda$core$Bit $tmp4526 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4525, ((panda$core$Int64) { 0 }));
    if ($tmp4526.value) {
    {
        panda$core$Object* $tmp4527 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4459, ((panda$core$Int64) { 0 }));
        refTarget4524 = ((panda$core$String*) $tmp4527);
    }
    }
    else {
    {
        refTarget4524 = NULL;
    }
    }
    panda$core$String* $tmp4529 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4524, m4434, isSuper4439, p_out);
    methodRef4528 = $tmp4529;
    separator4530 = &$s4531;
    panda$core$Bit $tmp4532 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4434);
    if ($tmp4532.value) {
    {
        panda$core$Int64 $tmp4533 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4533;
        panda$core$String* $tmp4536 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4535, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4534 = $tmp4536;
        panda$core$String* $tmp4538 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4537 = $tmp4538;
        panda$core$String* $tmp4540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4539, indirectVar4534);
        panda$core$String* $tmp4542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4540, &$s4541);
        panda$core$String* $tmp4543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4542, resultType4537);
        panda$core$String* $tmp4545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4543, &$s4544);
        (($fn4546) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4545);
        panda$core$String* $tmp4548 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4434);
        panda$core$String* $tmp4549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4547, $tmp4548);
        panda$core$String* $tmp4551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4549, &$s4550);
        panda$core$String* $tmp4553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4552, methodRef4528);
        panda$core$String* $tmp4555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4553, &$s4554);
        panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4555, resultType4537);
        panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, &$s4557);
        panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4558, indirectVar4534);
        panda$core$String* $tmp4561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4559, &$s4560);
        panda$core$String* $tmp4562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4551, $tmp4561);
        (($fn4563) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4562);
        separator4530 = &$s4564;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4565 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4566 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4565);
        if ($tmp4566.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4568 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4434);
        panda$core$String* $tmp4569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4567, $tmp4568);
        panda$core$String* $tmp4571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4569, &$s4570);
        panda$core$String* $tmp4572 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4571, $tmp4572);
        panda$core$String* $tmp4575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4573, &$s4574);
        panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4576, methodRef4528);
        panda$core$String* $tmp4579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4577, &$s4578);
        panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4575, $tmp4579);
        (($fn4581) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4580);
    }
    }
    {
        ITable* $tmp4583 = ((panda$collections$Iterable*) args4459)->$class->itable;
        while ($tmp4583->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4583 = $tmp4583->next;
        }
        $fn4585 $tmp4584 = $tmp4583->methods[0];
        panda$collections$Iterator* $tmp4586 = $tmp4584(((panda$collections$Iterable*) args4459));
        a$Iter4582 = $tmp4586;
        $l4587:;
        ITable* $tmp4589 = a$Iter4582->$class->itable;
        while ($tmp4589->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4589 = $tmp4589->next;
        }
        $fn4591 $tmp4590 = $tmp4589->methods[0];
        panda$core$Bit $tmp4592 = $tmp4590(a$Iter4582);
        panda$core$Bit $tmp4593 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4592);
        if (!$tmp4593.value) goto $l4588;
        {
            ITable* $tmp4595 = a$Iter4582->$class->itable;
            while ($tmp4595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4595 = $tmp4595->next;
            }
            $fn4597 $tmp4596 = $tmp4595->methods[1];
            panda$core$Object* $tmp4598 = $tmp4596(a$Iter4582);
            a4594 = ((panda$core$String*) $tmp4598);
            (($fn4599) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4530);
            (($fn4600) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4594);
            separator4530 = &$s4601;
        }
        goto $l4587;
        $l4588:;
    }
    (($fn4603) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4602);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4615;
    panda$core$String* testBit4618;
    panda$core$String* ifTrue4628;
    panda$core$String* ifFalse4630;
    panda$core$String* end4644;
    panda$core$Bit $tmp4604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4604.value);
    panda$core$Int64 $tmp4606 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4606, ((panda$core$Int64) { 2 }));
    bool $tmp4605 = $tmp4607.value;
    if ($tmp4605) goto $l4608;
    panda$core$Int64 $tmp4609 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4609, ((panda$core$Int64) { 3 }));
    $tmp4605 = $tmp4610.value;
    $l4608:;
    panda$core$Bit $tmp4611 = { $tmp4605 };
    PANDA_ASSERT($tmp4611.value);
    panda$core$Object* $tmp4612 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4613 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4614 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4612)->type, $tmp4613);
    PANDA_ASSERT($tmp4614.value);
    panda$core$Object* $tmp4616 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4617 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4616), p_out);
    test4615 = $tmp4617;
    panda$core$String* $tmp4619 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4618 = $tmp4619;
    panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4620, testBit4618);
    panda$core$String* $tmp4623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, &$s4622);
    panda$core$String* $tmp4624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4623, test4615);
    panda$core$String* $tmp4626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4624, &$s4625);
    (($fn4627) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4626);
    panda$core$String* $tmp4629 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4628 = $tmp4629;
    panda$core$String* $tmp4631 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4630 = $tmp4631;
    panda$core$String* $tmp4633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4632, testBit4618);
    panda$core$String* $tmp4635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4633, &$s4634);
    panda$core$String* $tmp4636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4635, ifTrue4628);
    panda$core$String* $tmp4638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4636, &$s4637);
    panda$core$String* $tmp4639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4638, ifFalse4630);
    panda$core$String* $tmp4641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4639, &$s4640);
    (($fn4642) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4641);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4628, p_out);
    panda$core$Object* $tmp4643 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4643), p_out);
    panda$core$Int64 $tmp4645 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4645, ((panda$core$Int64) { 3 }));
    if ($tmp4646.value) {
    {
        panda$core$String* $tmp4647 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4644 = $tmp4647;
    }
    }
    else {
    {
        end4644 = ifFalse4630;
    }
    }
    panda$core$Object* $tmp4648 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4649 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4648));
    panda$core$Bit $tmp4650 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4649);
    if ($tmp4650.value) {
    {
        panda$core$String* $tmp4652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4651, end4644);
        panda$core$String* $tmp4654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4652, &$s4653);
        (($fn4655) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4654);
    }
    }
    panda$core$Int64 $tmp4656 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4656, ((panda$core$Int64) { 3 }));
    if ($tmp4657.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4630, p_out);
        panda$core$Object* $tmp4658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4658), p_out);
        panda$core$Object* $tmp4659 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4660 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4659));
        panda$core$Bit $tmp4661 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4660);
        if ($tmp4661.value) {
        {
            panda$core$String* $tmp4663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4662, end4644);
            panda$core$String* $tmp4665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4663, &$s4664);
            (($fn4666) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4665);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4644, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4670;
    panda$core$String* range4681;
    org$pandalanguage$pandac$IRNode* block4684;
    org$pandalanguage$pandac$Type* t4686;
    panda$core$String* llt4689;
    panda$core$String* indexType4691;
    org$pandalanguage$pandac$ClassDecl* cl4697;
    panda$core$String* numberType4705;
    panda$core$String* index4713;
    panda$core$String* start4723;
    panda$core$String* indexValuePtr4733;
    panda$core$String* end4765;
    panda$core$String* rawStep4775;
    panda$core$String* step4785;
    panda$core$String* inclusive4800;
    panda$core$String* loopStart4810;
    panda$core$String* loopBody4812;
    panda$core$String* loopEnd4814;
    panda$core$String* loopTest4816;
    panda$core$String* forwardEntry4820;
    panda$core$String* backwardEntry4822;
    panda$core$String* signPrefix4824;
    panda$core$String* direction4836;
    panda$core$String* forwardEntryInclusive4863;
    panda$core$String* forwardEntryExclusive4865;
    panda$core$String* forwardEntryInclusiveTest4880;
    panda$core$String* forwardEntryExclusiveTest4912;
    panda$core$String* backwardEntryInclusive4944;
    panda$core$String* backwardEntryExclusive4946;
    panda$core$String* backwardEntryInclusiveTest4961;
    panda$core$String* backwardEntryExclusiveTest4993;
    panda$core$String* indexValue5025;
    panda$core$String* loopInc5048;
    panda$core$String* forwardLabel5050;
    panda$core$String* backwardLabel5052;
    panda$core$String* forwardDelta5065;
    panda$core$String* forwardInclusiveLabel5081;
    panda$core$String* forwardExclusiveLabel5083;
    panda$core$String* forwardInclusiveTest5094;
    panda$core$String* forwardExclusiveTest5121;
    panda$core$String* backwardDelta5148;
    panda$core$String* negStep5164;
    panda$core$String* backwardInclusiveLabel5177;
    panda$core$String* backwardExclusiveLabel5179;
    panda$core$String* backwardInclusiveTest5190;
    panda$core$String* backwardExclusiveTest5215;
    panda$core$String* inc5240;
    panda$core$String* incStruct5256;
    panda$core$Bit $tmp4667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4667.value);
    panda$core$Int64 $tmp4668 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4668, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4669.value);
    panda$core$Object* $tmp4671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4670 = ((org$pandalanguage$pandac$IRNode*) $tmp4671);
    panda$core$Object* $tmp4672 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4672)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4673.value);
    panda$core$Object* $tmp4674 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4675 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4674)->type->subtypes);
    panda$core$Bit $tmp4676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4675, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4676.value);
    panda$core$Object* $tmp4677 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4678 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4677)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4680 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4678))->name, &$s4679);
    PANDA_ASSERT($tmp4680.value);
    panda$core$Object* $tmp4682 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4683 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4682), p_out);
    range4681 = $tmp4683;
    panda$core$Object* $tmp4685 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4684 = ((org$pandalanguage$pandac$IRNode*) $tmp4685);
    panda$core$Object* $tmp4687 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4688 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4687)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4686 = ((org$pandalanguage$pandac$Type*) $tmp4688);
    panda$core$String* $tmp4690 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4686);
    llt4689 = $tmp4690;
    panda$core$Bit $tmp4692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4686->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4692.value) {
    {
        panda$core$Int64 $tmp4693 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(t4686->subtypes);
        panda$core$Bit $tmp4694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4693, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4694.value);
        panda$core$Object* $tmp4695 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(t4686->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4696 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4695));
        indexType4691 = $tmp4696;
    }
    }
    else {
    {
        indexType4691 = llt4689;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4698 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4686);
    cl4697 = $tmp4698;
    PANDA_ASSERT(((panda$core$Bit) { cl4697 != NULL }).value);
    panda$collections$ListView* $tmp4699 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4697);
    ITable* $tmp4700 = ((panda$collections$CollectionView*) $tmp4699)->$class->itable;
    while ($tmp4700->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4700 = $tmp4700->next;
    }
    $fn4702 $tmp4701 = $tmp4700->methods[0];
    panda$core$Int64 $tmp4703 = $tmp4701(((panda$collections$CollectionView*) $tmp4699));
    panda$core$Bit $tmp4704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4703, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4704.value);
    panda$collections$ListView* $tmp4706 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4697);
    ITable* $tmp4707 = $tmp4706->$class->itable;
    while ($tmp4707->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4707 = $tmp4707->next;
    }
    $fn4709 $tmp4708 = $tmp4707->methods[0];
    panda$core$Object* $tmp4710 = $tmp4708($tmp4706, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4711 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4710)->type);
    numberType4705 = $tmp4711;
    panda$core$Bit $tmp4712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4670->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4712.value);
    panda$core$String* $tmp4714 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4670->payload));
    index4713 = $tmp4714;
    panda$core$String* $tmp4716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4715, index4713);
    panda$core$String* $tmp4718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4716, &$s4717);
    panda$core$String* $tmp4719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4718, indexType4691);
    panda$core$String* $tmp4721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4719, &$s4720);
    (($fn4722) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4721);
    panda$core$String* $tmp4724 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4723 = $tmp4724;
    panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4725, start4723);
    panda$core$String* $tmp4728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4726, &$s4727);
    panda$core$String* $tmp4729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4728, range4681);
    panda$core$String* $tmp4731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4729, &$s4730);
    (($fn4732) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4731);
    panda$core$String* $tmp4734 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4733 = $tmp4734;
    panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4735, indexValuePtr4733);
    panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4736, &$s4737);
    panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, indexType4691);
    panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, &$s4740);
    panda$core$String* $tmp4742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, indexType4691);
    panda$core$String* $tmp4744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4742, &$s4743);
    panda$core$String* $tmp4745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4744, index4713);
    panda$core$String* $tmp4747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4745, &$s4746);
    panda$core$String* $tmp4749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4747, &$s4748);
    (($fn4750) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4749);
    panda$core$String* $tmp4752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4751, numberType4705);
    panda$core$String* $tmp4754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4752, &$s4753);
    panda$core$String* $tmp4755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4754, start4723);
    panda$core$String* $tmp4757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4755, &$s4756);
    panda$core$String* $tmp4758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4757, numberType4705);
    panda$core$String* $tmp4760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4758, &$s4759);
    panda$core$String* $tmp4761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4760, indexValuePtr4733);
    panda$core$String* $tmp4763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4761, &$s4762);
    (($fn4764) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4763);
    panda$core$String* $tmp4766 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4765 = $tmp4766;
    panda$core$String* $tmp4768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4767, end4765);
    panda$core$String* $tmp4770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4768, &$s4769);
    panda$core$String* $tmp4771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4770, range4681);
    panda$core$String* $tmp4773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4771, &$s4772);
    (($fn4774) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4773);
    panda$core$String* $tmp4776 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4775 = $tmp4776;
    panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4777, rawStep4775);
    panda$core$String* $tmp4780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4778, &$s4779);
    panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4780, range4681);
    panda$core$String* $tmp4783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4781, &$s4782);
    (($fn4784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4783);
    panda$core$Bit $tmp4787 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4705, &$s4786);
    if ($tmp4787.value) {
    {
        panda$core$String* $tmp4788 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4785 = $tmp4788;
        panda$core$String* $tmp4790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4789, step4785);
        panda$core$String* $tmp4792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, &$s4791);
        panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4792, rawStep4775);
        panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, &$s4794);
        panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4795, numberType4705);
        panda$core$String* $tmp4798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4796, &$s4797);
        (($fn4799) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4798);
    }
    }
    else {
    {
        step4785 = rawStep4775;
    }
    }
    panda$core$String* $tmp4801 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4800 = $tmp4801;
    panda$core$String* $tmp4803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4802, inclusive4800);
    panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4803, &$s4804);
    panda$core$String* $tmp4806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, range4681);
    panda$core$String* $tmp4808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4806, &$s4807);
    (($fn4809) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4808);
    panda$core$String* $tmp4811 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4810 = $tmp4811;
    panda$core$String* $tmp4813 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4812 = $tmp4813;
    panda$core$String* $tmp4815 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4814 = $tmp4815;
    panda$core$String* $tmp4817 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4816 = $tmp4817;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4818 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4818->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4818->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4818, ((panda$core$String*) p_f->payload), loopEnd4814, loopTest4816);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4818));
    panda$core$String* $tmp4821 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4820 = $tmp4821;
    panda$core$String* $tmp4823 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4822 = $tmp4823;
    panda$core$Bit $tmp4826 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4686)->name, &$s4825);
    if ($tmp4826.value) {
    {
        signPrefix4824 = &$s4827;
    }
    }
    else {
    {
        panda$core$Bit $tmp4830 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4686)->name, &$s4829);
        bool $tmp4828 = $tmp4830.value;
        if ($tmp4828) goto $l4831;
        panda$core$Bit $tmp4833 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4686)->name, &$s4832);
        $tmp4828 = $tmp4833.value;
        $l4831:;
        panda$core$Bit $tmp4834 = { $tmp4828 };
        PANDA_ASSERT($tmp4834.value);
        signPrefix4824 = &$s4835;
    }
    }
    panda$core$Bit $tmp4838 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4824, &$s4837);
    if ($tmp4838.value) {
    {
        panda$core$String* $tmp4839 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction4836 = $tmp4839;
        panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4840, direction4836);
        panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4841, &$s4842);
        panda$core$String* $tmp4844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4843, numberType4705);
        panda$core$String* $tmp4846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4844, &$s4845);
        panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4846, step4785);
        panda$core$String* $tmp4849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, &$s4848);
        (($fn4850) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4849);
    }
    }
    else {
    {
        direction4836 = &$s4851;
    }
    }
    panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4852, direction4836);
    panda$core$String* $tmp4855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, &$s4854);
    panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4855, forwardEntry4820);
    panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, &$s4857);
    panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4858, backwardEntry4822);
    panda$core$String* $tmp4861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4859, &$s4860);
    (($fn4862) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4861);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry4820, p_out);
    panda$core$String* $tmp4864 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4863 = $tmp4864;
    panda$core$String* $tmp4866 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4865 = $tmp4866;
    panda$core$String* $tmp4868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4867, inclusive4800);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4868, &$s4869);
    panda$core$String* $tmp4871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4870, forwardEntryInclusive4863);
    panda$core$String* $tmp4873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4871, &$s4872);
    panda$core$String* $tmp4875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4874, forwardEntryExclusive4865);
    panda$core$String* $tmp4877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4875, &$s4876);
    panda$core$String* $tmp4878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4873, $tmp4877);
    (($fn4879) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4878);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4863, p_out);
    panda$core$String* $tmp4881 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4880 = $tmp4881;
    panda$core$String* $tmp4883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4882, forwardEntryInclusiveTest4880);
    panda$core$String* $tmp4885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4883, &$s4884);
    panda$core$String* $tmp4886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4885, signPrefix4824);
    panda$core$String* $tmp4888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4886, &$s4887);
    panda$core$String* $tmp4889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4888, numberType4705);
    panda$core$String* $tmp4891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4889, &$s4890);
    panda$core$String* $tmp4893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4892, start4723);
    panda$core$String* $tmp4895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4893, &$s4894);
    panda$core$String* $tmp4896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4895, end4765);
    panda$core$String* $tmp4898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4896, &$s4897);
    panda$core$String* $tmp4899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4891, $tmp4898);
    (($fn4900) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4899);
    panda$core$String* $tmp4902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4901, forwardEntryInclusiveTest4880);
    panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4902, &$s4903);
    panda$core$String* $tmp4905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4904, loopStart4810);
    panda$core$String* $tmp4907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4905, &$s4906);
    panda$core$String* $tmp4908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4907, loopEnd4814);
    panda$core$String* $tmp4910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4908, &$s4909);
    (($fn4911) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4910);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4865, p_out);
    panda$core$String* $tmp4913 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4912 = $tmp4913;
    panda$core$String* $tmp4915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4914, forwardEntryExclusiveTest4912);
    panda$core$String* $tmp4917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4915, &$s4916);
    panda$core$String* $tmp4918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4917, signPrefix4824);
    panda$core$String* $tmp4920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4918, &$s4919);
    panda$core$String* $tmp4921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4920, numberType4705);
    panda$core$String* $tmp4923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4921, &$s4922);
    panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4924, start4723);
    panda$core$String* $tmp4927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4925, &$s4926);
    panda$core$String* $tmp4928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4927, end4765);
    panda$core$String* $tmp4930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4928, &$s4929);
    panda$core$String* $tmp4931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4923, $tmp4930);
    (($fn4932) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4931);
    panda$core$String* $tmp4934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4933, forwardEntryExclusiveTest4912);
    panda$core$String* $tmp4936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4934, &$s4935);
    panda$core$String* $tmp4937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4936, loopStart4810);
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4937, &$s4938);
    panda$core$String* $tmp4940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4939, loopEnd4814);
    panda$core$String* $tmp4942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4940, &$s4941);
    (($fn4943) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4942);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry4822, p_out);
    panda$core$String* $tmp4945 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive4944 = $tmp4945;
    panda$core$String* $tmp4947 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive4946 = $tmp4947;
    panda$core$String* $tmp4949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4948, inclusive4800);
    panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4949, &$s4950);
    panda$core$String* $tmp4952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, backwardEntryInclusive4944);
    panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4952, &$s4953);
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4955, backwardEntryExclusive4946);
    panda$core$String* $tmp4958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4956, &$s4957);
    panda$core$String* $tmp4959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, $tmp4958);
    (($fn4960) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4959);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive4944, p_out);
    panda$core$String* $tmp4962 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest4961 = $tmp4962;
    panda$core$String* $tmp4964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4963, backwardEntryInclusiveTest4961);
    panda$core$String* $tmp4966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4964, &$s4965);
    panda$core$String* $tmp4967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, signPrefix4824);
    panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4967, &$s4968);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4969, numberType4705);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, &$s4971);
    panda$core$String* $tmp4974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4973, start4723);
    panda$core$String* $tmp4976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4974, &$s4975);
    panda$core$String* $tmp4977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4976, end4765);
    panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4977, &$s4978);
    panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4972, $tmp4979);
    (($fn4981) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4980);
    panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4982, backwardEntryInclusiveTest4961);
    panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4983, &$s4984);
    panda$core$String* $tmp4986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4985, loopStart4810);
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4986, &$s4987);
    panda$core$String* $tmp4989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, loopEnd4814);
    panda$core$String* $tmp4991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4989, &$s4990);
    (($fn4992) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4991);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive4946, p_out);
    panda$core$String* $tmp4994 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest4993 = $tmp4994;
    panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4995, backwardEntryExclusiveTest4993);
    panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4996, &$s4997);
    panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4998, signPrefix4824);
    panda$core$String* $tmp5001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4999, &$s5000);
    panda$core$String* $tmp5002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5001, numberType4705);
    panda$core$String* $tmp5004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5002, &$s5003);
    panda$core$String* $tmp5006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5005, start4723);
    panda$core$String* $tmp5008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5006, &$s5007);
    panda$core$String* $tmp5009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5008, end4765);
    panda$core$String* $tmp5011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5009, &$s5010);
    panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5004, $tmp5011);
    (($fn5013) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5012);
    panda$core$String* $tmp5015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5014, backwardEntryExclusiveTest4993);
    panda$core$String* $tmp5017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5015, &$s5016);
    panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5017, loopStart4810);
    panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5018, &$s5019);
    panda$core$String* $tmp5021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5020, loopEnd4814);
    panda$core$String* $tmp5023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5021, &$s5022);
    (($fn5024) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5023);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4810, p_out);
    panda$core$String* $tmp5026 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5025 = $tmp5026;
    panda$core$String* $tmp5028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5027, indexValue5025);
    panda$core$String* $tmp5030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5028, &$s5029);
    panda$core$String* $tmp5031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5030, numberType4705);
    panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5031, &$s5032);
    panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5033, numberType4705);
    panda$core$String* $tmp5036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5034, &$s5035);
    panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5036, indexValuePtr4733);
    panda$core$String* $tmp5039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5037, &$s5038);
    (($fn5040) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5039);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4684, p_out);
    panda$core$Bit $tmp5041 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4684);
    panda$core$Bit $tmp5042 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5041);
    if ($tmp5042.value) {
    {
        panda$core$String* $tmp5044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5043, loopTest4816);
        panda$core$String* $tmp5046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5044, &$s5045);
        (($fn5047) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5046);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4816, p_out);
    panda$core$String* $tmp5049 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5048 = $tmp5049;
    panda$core$String* $tmp5051 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5050 = $tmp5051;
    panda$core$String* $tmp5053 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5052 = $tmp5053;
    panda$core$String* $tmp5055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5054, direction4836);
    panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5055, &$s5056);
    panda$core$String* $tmp5058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, forwardLabel5050);
    panda$core$String* $tmp5060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5058, &$s5059);
    panda$core$String* $tmp5061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5060, backwardLabel5052);
    panda$core$String* $tmp5063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5061, &$s5062);
    (($fn5064) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5063);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5050, p_out);
    panda$core$String* $tmp5066 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5065 = $tmp5066;
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5067, forwardDelta5065);
    panda$core$String* $tmp5070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5068, &$s5069);
    panda$core$String* $tmp5071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5070, numberType4705);
    panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5071, &$s5072);
    panda$core$String* $tmp5074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, end4765);
    panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5074, &$s5075);
    panda$core$String* $tmp5077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5076, indexValue5025);
    panda$core$String* $tmp5079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5077, &$s5078);
    (($fn5080) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5079);
    panda$core$String* $tmp5082 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5081 = $tmp5082;
    panda$core$String* $tmp5084 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5083 = $tmp5084;
    panda$core$String* $tmp5086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5085, inclusive4800);
    panda$core$String* $tmp5088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5086, &$s5087);
    panda$core$String* $tmp5089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5088, forwardInclusiveLabel5081);
    panda$core$String* $tmp5091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5089, &$s5090);
    panda$core$String* $tmp5092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5091, forwardExclusiveLabel5083);
    (($fn5093) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5092);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5081, p_out);
    panda$core$String* $tmp5095 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5094 = $tmp5095;
    panda$core$String* $tmp5097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5096, forwardInclusiveTest5094);
    panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5097, &$s5098);
    panda$core$String* $tmp5100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5099, numberType4705);
    panda$core$String* $tmp5102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5100, &$s5101);
    panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5102, forwardDelta5065);
    panda$core$String* $tmp5105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, &$s5104);
    panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5105, step4785);
    panda$core$String* $tmp5108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5106, &$s5107);
    (($fn5109) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5108);
    panda$core$String* $tmp5111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5110, forwardInclusiveTest5094);
    panda$core$String* $tmp5113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5111, &$s5112);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5113, loopInc5048);
    panda$core$String* $tmp5116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, &$s5115);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5116, loopEnd4814);
    panda$core$String* $tmp5119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, &$s5118);
    (($fn5120) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5119);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5083, p_out);
    panda$core$String* $tmp5122 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5121 = $tmp5122;
    panda$core$String* $tmp5124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5123, forwardExclusiveTest5121);
    panda$core$String* $tmp5126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5124, &$s5125);
    panda$core$String* $tmp5127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5126, numberType4705);
    panda$core$String* $tmp5129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5127, &$s5128);
    panda$core$String* $tmp5130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5129, forwardDelta5065);
    panda$core$String* $tmp5132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5130, &$s5131);
    panda$core$String* $tmp5133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, step4785);
    panda$core$String* $tmp5135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5133, &$s5134);
    (($fn5136) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5135);
    panda$core$String* $tmp5138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5137, forwardExclusiveTest5121);
    panda$core$String* $tmp5140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5138, &$s5139);
    panda$core$String* $tmp5141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5140, loopInc5048);
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5141, &$s5142);
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5143, loopEnd4814);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5144, &$s5145);
    (($fn5147) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5146);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5052, p_out);
    panda$core$String* $tmp5149 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5148 = $tmp5149;
    panda$core$String* $tmp5151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5150, backwardDelta5148);
    panda$core$String* $tmp5153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5151, &$s5152);
    panda$core$String* $tmp5154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5153, numberType4705);
    panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5154, &$s5155);
    panda$core$String* $tmp5157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, indexValue5025);
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5157, &$s5158);
    panda$core$String* $tmp5160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, end4765);
    panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5160, &$s5161);
    (($fn5163) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5162);
    panda$core$String* $tmp5165 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5164 = $tmp5165;
    panda$core$String* $tmp5167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5166, negStep5164);
    panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5167, &$s5168);
    panda$core$String* $tmp5170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, numberType4705);
    panda$core$String* $tmp5172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5170, &$s5171);
    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5172, step4785);
    panda$core$String* $tmp5175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5173, &$s5174);
    (($fn5176) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5175);
    panda$core$String* $tmp5178 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5177 = $tmp5178;
    panda$core$String* $tmp5180 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5179 = $tmp5180;
    panda$core$String* $tmp5182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5181, inclusive4800);
    panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5182, &$s5183);
    panda$core$String* $tmp5185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, backwardInclusiveLabel5177);
    panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5185, &$s5186);
    panda$core$String* $tmp5188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5187, backwardExclusiveLabel5179);
    (($fn5189) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5188);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5177, p_out);
    panda$core$String* $tmp5191 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5190 = $tmp5191;
    panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5192, backwardInclusiveTest5190);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5193, &$s5194);
    panda$core$String* $tmp5196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, numberType4705);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5196, &$s5197);
    panda$core$String* $tmp5199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, backwardDelta5148);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5199, &$s5200);
    panda$core$String* $tmp5202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5201, negStep5164);
    (($fn5203) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5202);
    panda$core$String* $tmp5205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5204, backwardInclusiveTest5190);
    panda$core$String* $tmp5207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5205, &$s5206);
    panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, loopInc5048);
    panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5208, &$s5209);
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5210, loopEnd4814);
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, &$s5212);
    (($fn5214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5213);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5179, p_out);
    panda$core$String* $tmp5216 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5215 = $tmp5216;
    panda$core$String* $tmp5218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5217, backwardExclusiveTest5215);
    panda$core$String* $tmp5220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5218, &$s5219);
    panda$core$String* $tmp5221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5220, numberType4705);
    panda$core$String* $tmp5223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5221, &$s5222);
    panda$core$String* $tmp5224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5223, backwardDelta5148);
    panda$core$String* $tmp5226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5224, &$s5225);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5226, negStep5164);
    (($fn5228) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5227);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5229, backwardExclusiveTest5215);
    panda$core$String* $tmp5232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, &$s5231);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5232, loopInc5048);
    panda$core$String* $tmp5235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, &$s5234);
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5235, loopEnd4814);
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5236, &$s5237);
    (($fn5239) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5238);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5048, p_out);
    panda$core$String* $tmp5241 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5240 = $tmp5241;
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5242, inc5240);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, &$s5244);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, numberType4705);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, &$s5247);
    panda$core$String* $tmp5249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, indexValue5025);
    panda$core$String* $tmp5251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5249, &$s5250);
    panda$core$String* $tmp5252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5251, step4785);
    panda$core$String* $tmp5254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5252, &$s5253);
    (($fn5255) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5254);
    panda$core$String* $tmp5257 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5256 = $tmp5257;
    panda$core$String* $tmp5259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5258, incStruct5256);
    panda$core$String* $tmp5261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5259, &$s5260);
    panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5261, indexType4691);
    panda$core$String* $tmp5264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5262, &$s5263);
    panda$core$String* $tmp5265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5264, numberType4705);
    panda$core$String* $tmp5267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5265, &$s5266);
    (($fn5268) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5267);
    panda$core$String* $tmp5270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5269, numberType4705);
    panda$core$String* $tmp5272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5270, &$s5271);
    panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, inc5240);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, &$s5274);
    (($fn5276) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5275);
    panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5277, indexType4691);
    panda$core$String* $tmp5280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, &$s5279);
    panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5280, incStruct5256);
    panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, &$s5282);
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5283, indexType4691);
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, &$s5285);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5286, index4713);
    panda$core$String* $tmp5289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5287, &$s5288);
    (($fn5290) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5289);
    panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5291, loopStart4810);
    panda$core$String* $tmp5294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5292, &$s5293);
    (($fn5295) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5294);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4814, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5302;
    panda$core$String* loopBody5304;
    panda$core$String* loopEnd5306;
    panda$core$String* test5315;
    panda$core$String* testBit5318;
    panda$core$Bit $tmp5296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5296.value);
    panda$core$Int64 $tmp5297 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5297, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5298.value);
    panda$core$Object* $tmp5299 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5300 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5301 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5299)->type, $tmp5300);
    PANDA_ASSERT($tmp5301.value);
    panda$core$String* $tmp5303 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5302 = $tmp5303;
    panda$core$String* $tmp5305 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5304 = $tmp5305;
    panda$core$String* $tmp5307 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5306 = $tmp5307;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5308 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5308->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5308->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5308, ((panda$core$String*) p_w->payload), loopEnd5306, loopStart5302);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5308));
    panda$core$String* $tmp5311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5310, loopStart5302);
    panda$core$String* $tmp5313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, &$s5312);
    (($fn5314) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5313);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5302, p_out);
    panda$core$Object* $tmp5316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5317 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5316), p_out);
    test5315 = $tmp5317;
    panda$core$String* $tmp5319 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5318 = $tmp5319;
    panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5320, testBit5318);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5321, &$s5322);
    panda$core$String* $tmp5324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, test5315);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5324, &$s5325);
    (($fn5327) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5326);
    panda$core$String* $tmp5329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5328, testBit5318);
    panda$core$String* $tmp5331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5329, &$s5330);
    panda$core$String* $tmp5332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5331, loopBody5304);
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, &$s5333);
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, loopEnd5306);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5335, &$s5336);
    (($fn5338) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5337);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5304, p_out);
    panda$core$Object* $tmp5339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5339), p_out);
    panda$core$Object* $tmp5340 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5341 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5340));
    panda$core$Bit $tmp5342 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5341);
    if ($tmp5342.value) {
    {
        panda$core$String* $tmp5344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5343, loopStart5302);
        panda$core$String* $tmp5346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5344, &$s5345);
        (($fn5347) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5346);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5306, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5354;
    panda$core$String* loopBody5356;
    panda$core$String* loopEnd5358;
    panda$core$String* test5367;
    panda$core$String* testBit5370;
    panda$core$Bit $tmp5348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5348.value);
    panda$core$Int64 $tmp5349 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5349, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5350.value);
    panda$core$Object* $tmp5351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5352 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5353 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5351)->type, $tmp5352);
    PANDA_ASSERT($tmp5353.value);
    panda$core$String* $tmp5355 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5354 = $tmp5355;
    panda$core$String* $tmp5357 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5356 = $tmp5357;
    panda$core$String* $tmp5359 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5358 = $tmp5359;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5360 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5360->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5360->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5360, ((panda$core$String*) p_d->payload), loopEnd5358, loopStart5354);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5360));
    panda$core$String* $tmp5363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5362, loopBody5356);
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5363, &$s5364);
    (($fn5366) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5365);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5354, p_out);
    panda$core$Object* $tmp5368 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5369 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5368), p_out);
    test5367 = $tmp5369;
    panda$core$String* $tmp5371 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5370 = $tmp5371;
    panda$core$String* $tmp5373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5372, testBit5370);
    panda$core$String* $tmp5375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5373, &$s5374);
    panda$core$String* $tmp5376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5375, test5367);
    panda$core$String* $tmp5378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5376, &$s5377);
    (($fn5379) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5378);
    panda$core$String* $tmp5381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5380, testBit5370);
    panda$core$String* $tmp5383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5381, &$s5382);
    panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5383, loopBody5356);
    panda$core$String* $tmp5386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5384, &$s5385);
    panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5386, loopEnd5358);
    panda$core$String* $tmp5389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5387, &$s5388);
    (($fn5390) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5389);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5356, p_out);
    panda$core$Object* $tmp5391 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5391), p_out);
    panda$core$Object* $tmp5392 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5393 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5392));
    panda$core$Bit $tmp5394 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5393);
    if ($tmp5394.value) {
    {
        panda$core$String* $tmp5396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5395, loopStart5354);
        panda$core$String* $tmp5398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5396, &$s5397);
        (($fn5399) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5398);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5358, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5403;
    panda$core$String* loopEnd5405;
    panda$core$Bit $tmp5400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5400.value);
    panda$core$Int64 $tmp5401 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5401, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5402.value);
    panda$core$String* $tmp5404 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5403 = $tmp5404;
    panda$core$String* $tmp5406 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5405 = $tmp5406;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5407 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5407->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5407->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5407, ((panda$core$String*) p_l->payload), loopEnd5405, loopStart5403);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5407));
    panda$core$String* $tmp5410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5409, loopStart5403);
    panda$core$String* $tmp5412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5410, &$s5411);
    (($fn5413) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5412);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5403, p_out);
    panda$core$Object* $tmp5414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5414), p_out);
    panda$core$Object* $tmp5415 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5416 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5415));
    panda$core$Bit $tmp5417 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5416);
    if ($tmp5417.value) {
    {
        panda$core$String* $tmp5419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5418, loopStart5403);
        panda$core$String* $tmp5421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5419, &$s5420);
        (($fn5422) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5421);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5405, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5423;
    panda$core$String* ref5434;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5423 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5425 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5423);
            panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5424, $tmp5425);
            panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5426, &$s5427);
            panda$core$String* $tmp5429 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5423->type);
            panda$core$String* $tmp5430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5428, $tmp5429);
            panda$core$String* $tmp5432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5430, &$s5431);
            (($fn5433) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5432);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5435 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref5434 = $tmp5435;
                panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5436, ref5434);
                panda$core$String* $tmp5439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5437, &$s5438);
                panda$core$String* $tmp5440 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5423->type);
                panda$core$String* $tmp5441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5439, $tmp5440);
                panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5441, &$s5442);
                panda$core$String* $tmp5444 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5423);
                panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, $tmp5444);
                panda$core$String* $tmp5447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5445, &$s5446);
                (($fn5448) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5447);
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
    panda$collections$Iterator* decl$Iter5462;
    org$pandalanguage$pandac$IRNode* decl5474;
    panda$core$Bit $tmp5452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5451 = $tmp5452.value;
    if ($tmp5451) goto $l5453;
    panda$core$Bit $tmp5454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5451 = $tmp5454.value;
    $l5453:;
    panda$core$Bit $tmp5455 = { $tmp5451 };
    bool $tmp5450 = $tmp5455.value;
    if ($tmp5450) goto $l5456;
    panda$core$Bit $tmp5457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5450 = $tmp5457.value;
    $l5456:;
    panda$core$Bit $tmp5458 = { $tmp5450 };
    bool $tmp5449 = $tmp5458.value;
    if ($tmp5449) goto $l5459;
    panda$core$Bit $tmp5460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5449 = $tmp5460.value;
    $l5459:;
    panda$core$Bit $tmp5461 = { $tmp5449 };
    PANDA_ASSERT($tmp5461.value);
    {
        ITable* $tmp5463 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5463->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5463 = $tmp5463->next;
        }
        $fn5465 $tmp5464 = $tmp5463->methods[0];
        panda$collections$Iterator* $tmp5466 = $tmp5464(((panda$collections$Iterable*) p_v->children));
        decl$Iter5462 = $tmp5466;
        $l5467:;
        ITable* $tmp5469 = decl$Iter5462->$class->itable;
        while ($tmp5469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5469 = $tmp5469->next;
        }
        $fn5471 $tmp5470 = $tmp5469->methods[0];
        panda$core$Bit $tmp5472 = $tmp5470(decl$Iter5462);
        panda$core$Bit $tmp5473 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5472);
        if (!$tmp5473.value) goto $l5468;
        {
            ITable* $tmp5475 = decl$Iter5462->$class->itable;
            while ($tmp5475->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5475 = $tmp5475->next;
            }
            $fn5477 $tmp5476 = $tmp5475->methods[1];
            panda$core$Object* $tmp5478 = $tmp5476(decl$Iter5462);
            decl5474 = ((org$pandalanguage$pandac$IRNode*) $tmp5478);
            panda$core$Bit $tmp5479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5474->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5479.value);
            panda$core$Int64 $tmp5480 = panda$collections$Array$get_count$R$panda$core$Int64(decl5474->children);
            panda$core$Bit $tmp5481 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5480, ((panda$core$Int64) { 1 }));
            if ($tmp5481.value) {
            {
                panda$core$Object* $tmp5482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5474->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5483 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5474->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5482), ((org$pandalanguage$pandac$IRNode*) $tmp5483), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5484 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5474->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5484), NULL, p_out);
            }
            }
        }
        goto $l5467;
        $l5468:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base5488;
    panda$core$String* ptr5491;
    org$pandalanguage$pandac$ClassDecl* cl5493;
    panda$collections$ListView* fields5496;
    panda$core$Int64 index5498;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5499;
    panda$core$String* result5561;
    panda$core$String* reused5564;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5485 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5486 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5485, p_out);
            return $tmp5486;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5487 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5487;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5489 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5490 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5489), p_out);
            base5488 = $tmp5490;
            panda$core$String* $tmp5492 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr5491 = $tmp5492;
            panda$core$Object* $tmp5494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5495 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5494)->type);
            cl5493 = $tmp5495;
            PANDA_ASSERT(((panda$core$Bit) { cl5493 != NULL }).value);
            panda$collections$ListView* $tmp5497 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5493);
            fields5496 = $tmp5497;
            index5498 = ((panda$core$Int64) { -1 });
            ITable* $tmp5500 = ((panda$collections$CollectionView*) fields5496)->$class->itable;
            while ($tmp5500->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5500 = $tmp5500->next;
            }
            $fn5502 $tmp5501 = $tmp5500->methods[0];
            panda$core$Int64 $tmp5503 = $tmp5501(((panda$collections$CollectionView*) fields5496));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5499, ((panda$core$Int64) { 0 }), $tmp5503, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp5505 = $tmp5499.start.value;
            panda$core$Int64 i5504 = { $tmp5505 };
            int64_t $tmp5507 = $tmp5499.end.value;
            int64_t $tmp5508 = $tmp5499.step.value;
            bool $tmp5509 = $tmp5499.inclusive.value;
            bool $tmp5516 = $tmp5508 > 0;
            if ($tmp5516) goto $l5514; else goto $l5515;
            $l5514:;
            if ($tmp5509) goto $l5517; else goto $l5518;
            $l5517:;
            if ($tmp5505 <= $tmp5507) goto $l5510; else goto $l5512;
            $l5518:;
            if ($tmp5505 < $tmp5507) goto $l5510; else goto $l5512;
            $l5515:;
            if ($tmp5509) goto $l5519; else goto $l5520;
            $l5519:;
            if ($tmp5505 >= $tmp5507) goto $l5510; else goto $l5512;
            $l5520:;
            if ($tmp5505 > $tmp5507) goto $l5510; else goto $l5512;
            $l5510:;
            {
                ITable* $tmp5522 = fields5496->$class->itable;
                while ($tmp5522->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5522 = $tmp5522->next;
                }
                $fn5524 $tmp5523 = $tmp5522->methods[0];
                panda$core$Object* $tmp5525 = $tmp5523(fields5496, i5504);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5525))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name) }).value) {
                {
                    index5498 = i5504;
                    goto $l5512;
                }
                }
            }
            $l5513:;
            if ($tmp5516) goto $l5527; else goto $l5528;
            $l5527:;
            int64_t $tmp5529 = $tmp5507 - i5504.value;
            if ($tmp5509) goto $l5530; else goto $l5531;
            $l5530:;
            if ($tmp5529 >= $tmp5508) goto $l5526; else goto $l5512;
            $l5531:;
            if ($tmp5529 > $tmp5508) goto $l5526; else goto $l5512;
            $l5528:;
            int64_t $tmp5533 = i5504.value - $tmp5507;
            if ($tmp5509) goto $l5534; else goto $l5535;
            $l5534:;
            if ($tmp5533 >= -$tmp5508) goto $l5526; else goto $l5512;
            $l5535:;
            if ($tmp5533 > -$tmp5508) goto $l5526; else goto $l5512;
            $l5526:;
            i5504.value += $tmp5508;
            goto $l5510;
            $l5512:;
            panda$core$Bit $tmp5537 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5498, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5537.value);
            panda$core$String* $tmp5539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5538, ptr5491);
            panda$core$String* $tmp5541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5539, &$s5540);
            org$pandalanguage$pandac$Type* $tmp5542 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5493);
            panda$core$String* $tmp5543 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5542);
            panda$core$String* $tmp5544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5541, $tmp5543);
            panda$core$String* $tmp5546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5544, &$s5545);
            org$pandalanguage$pandac$Type* $tmp5548 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5493);
            panda$core$String* $tmp5549 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5548);
            panda$core$String* $tmp5550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5547, $tmp5549);
            panda$core$String* $tmp5552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5550, &$s5551);
            panda$core$String* $tmp5553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5552, base5488);
            panda$core$String* $tmp5555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5553, &$s5554);
            panda$core$String* $tmp5556 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5555, ((panda$core$Object*) wrap_panda$core$Int64(index5498)));
            panda$core$String* $tmp5558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5556, &$s5557);
            panda$core$String* $tmp5559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5546, $tmp5558);
            (($fn5560) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5559);
            return ptr5491;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5563 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5562), p_out);
            result5561 = $tmp5563;
            panda$core$String* $tmp5565 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5564 = $tmp5565;
            panda$core$String* $tmp5567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5566, reused5564);
            panda$core$String* $tmp5569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5567, &$s5568);
            panda$core$String* $tmp5570 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5569, $tmp5570);
            panda$core$String* $tmp5573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5571, &$s5572);
            panda$core$String* $tmp5575 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5574, $tmp5575);
            panda$core$String* $tmp5578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5576, &$s5577);
            panda$core$String* $tmp5579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5578, result5561);
            panda$core$String* $tmp5581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5579, &$s5580);
            panda$core$String* $tmp5582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5573, $tmp5581);
            (($fn5583) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5582);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5564));
            return result5561;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue5587;
    panda$core$String* value5599;
    panda$core$String* t5600;
    panda$core$Int64 op5603;
    panda$core$String* right5605;
    panda$core$Bit $tmp5584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5584.value);
    panda$core$Int64 $tmp5585 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5585, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5586.value);
    panda$core$Object* $tmp5589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5590 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5589)->type);
    panda$core$String* $tmp5591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5588, $tmp5590);
    panda$core$String* $tmp5593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5591, &$s5592);
    panda$core$Object* $tmp5594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5595 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5594), p_out);
    panda$core$String* $tmp5596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5593, $tmp5595);
    panda$core$String* $tmp5598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5596, &$s5597);
    lvalue5587 = $tmp5598;
    panda$core$Object* $tmp5601 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5602 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5601)->type);
    t5600 = $tmp5602;
    op5603 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5603, ((panda$core$Int64) { 73 }));
    if ($tmp5604.value) {
    {
        panda$core$Object* $tmp5606 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5607 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5606), p_out);
        right5605 = $tmp5607;
        panda$core$String* $tmp5609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5608, t5600);
        panda$core$String* $tmp5611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5609, &$s5610);
        panda$core$String* $tmp5612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5611, right5605);
        panda$core$String* $tmp5614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5612, &$s5613);
        value5599 = $tmp5614;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5615, value5599);
    panda$core$String* $tmp5618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5616, &$s5617);
    panda$core$String* $tmp5619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5618, lvalue5587);
    panda$core$String* $tmp5621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5619, &$s5620);
    (($fn5622) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5621);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5627;
    panda$core$String* result5629;
    panda$core$Int64 $tmp5623 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5623, ((panda$core$Int64) { 1 }));
    if ($tmp5624.value) {
    {
        panda$core$Int64 $tmp5625 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5626 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5625, ((panda$core$Int64) { 0 }));
        if ($tmp5626.value) {
        {
            panda$core$Object* $tmp5628 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5627 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5628);
            panda$core$Object* $tmp5630 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5631 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5630), p_out);
            result5629 = $tmp5631;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5632 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5632->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5632->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5632, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5629));
            panda$collections$Array$add$panda$collections$Array$T(inline5627->returns, ((panda$core$Object*) $tmp5632));
            panda$core$String* $tmp5635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5634, inline5627->exitLabel);
            panda$core$String* $tmp5637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5635, &$s5636);
            (($fn5638) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5637);
        }
        }
        else {
        {
            panda$core$Object* $tmp5640 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5641 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5640), p_out);
            panda$core$String* $tmp5642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5639, $tmp5641);
            panda$core$String* $tmp5644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5642, &$s5643);
            (($fn5645) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5644);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5646 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5646, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp5647.value);
        panda$core$Int64 $tmp5648 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5649 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5648, ((panda$core$Int64) { 0 }));
        if ($tmp5649.value) {
        {
            panda$core$Object* $tmp5651 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5650, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5651)->exitLabel);
            panda$core$String* $tmp5654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5652, &$s5653);
            (($fn5655) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5654);
        }
        }
        else {
        {
            (($fn5657) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5656);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5661;
    panda$core$Int64 $tmp5658 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5659 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5658, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5659.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5660 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5660);
    }
    }
    panda$core$Int64 $tmp5662 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5661, ((panda$core$Int64) { 0 }), $tmp5662, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5664 = $tmp5661.start.value;
    panda$core$Int64 i5663 = { $tmp5664 };
    int64_t $tmp5666 = $tmp5661.end.value;
    int64_t $tmp5667 = $tmp5661.step.value;
    bool $tmp5668 = $tmp5661.inclusive.value;
    bool $tmp5675 = $tmp5667 > 0;
    if ($tmp5675) goto $l5673; else goto $l5674;
    $l5673:;
    if ($tmp5668) goto $l5676; else goto $l5677;
    $l5676:;
    if ($tmp5664 <= $tmp5666) goto $l5669; else goto $l5671;
    $l5677:;
    if ($tmp5664 < $tmp5666) goto $l5669; else goto $l5671;
    $l5674:;
    if ($tmp5668) goto $l5678; else goto $l5679;
    $l5678:;
    if ($tmp5664 >= $tmp5666) goto $l5669; else goto $l5671;
    $l5679:;
    if ($tmp5664 > $tmp5666) goto $l5669; else goto $l5671;
    $l5669:;
    {
        panda$core$Object* $tmp5682 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5663);
        bool $tmp5681 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5682)->loopLabel != NULL }).value;
        if (!$tmp5681) goto $l5683;
        panda$core$Object* $tmp5684 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5663);
        panda$core$Bit $tmp5685 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5684)->loopLabel, p_name);
        $tmp5681 = $tmp5685.value;
        $l5683:;
        panda$core$Bit $tmp5686 = { $tmp5681 };
        if ($tmp5686.value) {
        {
            panda$core$Object* $tmp5687 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5663);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5687);
        }
        }
    }
    $l5672:;
    if ($tmp5675) goto $l5689; else goto $l5690;
    $l5689:;
    int64_t $tmp5691 = $tmp5666 - i5663.value;
    if ($tmp5668) goto $l5692; else goto $l5693;
    $l5692:;
    if ($tmp5691 >= $tmp5667) goto $l5688; else goto $l5671;
    $l5693:;
    if ($tmp5691 > $tmp5667) goto $l5688; else goto $l5671;
    $l5690:;
    int64_t $tmp5695 = i5663.value - $tmp5666;
    if ($tmp5668) goto $l5696; else goto $l5697;
    $l5696:;
    if ($tmp5695 >= -$tmp5667) goto $l5688; else goto $l5671;
    $l5697:;
    if ($tmp5695 > -$tmp5667) goto $l5688; else goto $l5671;
    $l5688:;
    i5663.value += $tmp5667;
    goto $l5669;
    $l5671:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5699;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5700 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5699 = $tmp5700;
    panda$core$String* $tmp5702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5701, desc5699->breakLabel);
    panda$core$String* $tmp5704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5702, &$s5703);
    (($fn5705) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5704);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5706;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5707 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5706 = $tmp5707;
    panda$core$String* $tmp5709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5708, desc5706->continueLabel);
    panda$core$String* $tmp5711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5709, &$s5710);
    (($fn5712) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5711);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5722;
    panda$core$String* ifTrue5725;
    panda$core$String* ifFalse5727;
    panda$core$String* name5740;
    panda$core$String* path5741;
    panda$core$String$Index$nullable index5743;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5746;
    panda$core$String* nameRef5748;
    panda$core$String* line5750;
    panda$core$String* msg5755;
    panda$collections$Iterator* m$Iter5762;
    org$pandalanguage$pandac$MethodDecl* m5776;
    panda$core$Bit $tmp5713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5713.value);
    panda$core$Int64 $tmp5715 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5715, ((panda$core$Int64) { 1 }));
    bool $tmp5714 = $tmp5716.value;
    if ($tmp5714) goto $l5717;
    panda$core$Int64 $tmp5718 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5718, ((panda$core$Int64) { 2 }));
    $tmp5714 = $tmp5719.value;
    $l5717:;
    panda$core$Bit $tmp5720 = { $tmp5714 };
    PANDA_ASSERT($tmp5720.value);
    panda$core$Bit $tmp5721 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5721.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5723 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5724 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5723), p_out);
    test5722 = $tmp5724;
    panda$core$String* $tmp5726 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5725 = $tmp5726;
    panda$core$String* $tmp5728 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5727 = $tmp5728;
    panda$core$String* $tmp5730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5729, test5722);
    panda$core$String* $tmp5732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5730, &$s5731);
    panda$core$String* $tmp5733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5732, ifTrue5725);
    panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5733, &$s5734);
    panda$core$String* $tmp5736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5735, ifFalse5727);
    panda$core$String* $tmp5738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5736, &$s5737);
    (($fn5739) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5738);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse5727, p_out);
    panda$core$Object* $tmp5742 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentFile);
    path5741 = ((panda$io$File*) $tmp5742)->path;
    panda$core$String$Index$nullable $tmp5745 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5741, &$s5744);
    index5743 = $tmp5745;
    if (((panda$core$Bit) { !index5743.nonnull }).value) {
    {
        name5740 = path5741;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp5746, index5743, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5747 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5741, $tmp5746);
        name5740 = $tmp5747;
    }
    }
    panda$core$String* $tmp5749 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name5740, p_out);
    nameRef5748 = $tmp5749;
    panda$core$String* $tmp5752 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5751, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5752, &$s5753);
    line5750 = $tmp5754;
    panda$core$Int64 $tmp5756 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5756, ((panda$core$Int64) { 2 }));
    if ($tmp5757.value) {
    {
        panda$core$Object* $tmp5758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5759 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5758), p_out);
        msg5755 = $tmp5759;
    }
    }
    else {
    {
        msg5755 = NULL;
    }
    }
    (($fn5761) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5760);
    {
        org$pandalanguage$pandac$Type* $tmp5763 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5764 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5763);
        ITable* $tmp5765 = ((panda$collections$Iterable*) $tmp5764->methods)->$class->itable;
        while ($tmp5765->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5765 = $tmp5765->next;
        }
        $fn5767 $tmp5766 = $tmp5765->methods[0];
        panda$collections$Iterator* $tmp5768 = $tmp5766(((panda$collections$Iterable*) $tmp5764->methods));
        m$Iter5762 = $tmp5768;
        $l5769:;
        ITable* $tmp5771 = m$Iter5762->$class->itable;
        while ($tmp5771->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5771 = $tmp5771->next;
        }
        $fn5773 $tmp5772 = $tmp5771->methods[0];
        panda$core$Bit $tmp5774 = $tmp5772(m$Iter5762);
        panda$core$Bit $tmp5775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5774);
        if (!$tmp5775.value) goto $l5770;
        {
            ITable* $tmp5777 = m$Iter5762->$class->itable;
            while ($tmp5777->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5777 = $tmp5777->next;
            }
            $fn5779 $tmp5778 = $tmp5777->methods[1];
            panda$core$Object* $tmp5780 = $tmp5778(m$Iter5762);
            m5776 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5780);
            panda$core$Bit $tmp5782 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5776)->name, &$s5781);
            if ($tmp5782.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5776);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5776);
            }
            }
        }
        goto $l5769;
        $l5770:;
    }
    if (((panda$core$Bit) { msg5755 != NULL }).value) {
    {
        panda$core$String* $tmp5785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5783, &$s5784);
        (($fn5786) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5785);
    }
    }
    else {
    {
        (($fn5788) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5787);
    }
    }
    panda$core$String* $tmp5790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5789, nameRef5748);
    panda$core$String* $tmp5792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5790, &$s5791);
    panda$core$String* $tmp5793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5792, line5750);
    panda$core$String* $tmp5795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5793, &$s5794);
    (($fn5796) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5795);
    if (((panda$core$Bit) { msg5755 != NULL }).value) {
    {
        panda$core$String* $tmp5798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5797, msg5755);
        panda$core$String* $tmp5800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5798, &$s5799);
        (($fn5801) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5800);
    }
    }
    (($fn5803) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5802);
    (($fn5805) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5804);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue5725, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* valueStruct5807;
    org$pandalanguage$pandac$ClassDecl* numberClass5810;
    panda$core$String* value5813;
    org$pandalanguage$pandac$FieldDecl* f5823;
    panda$core$String* switchType5826;
    panda$core$String* endLabel5836;
    panda$collections$Array* whenLabels5838;
    panda$core$String* otherwiseLabel5841;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5852;
    org$pandalanguage$pandac$IRNode* w5872;
    panda$core$String* label5876;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5878;
    panda$core$UInt64 number5899;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5937;
    org$pandalanguage$pandac$IRNode* w5957;
    org$pandalanguage$pandac$IRNode* block5959;
    panda$core$Bit $tmp5806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp5806.value);
    panda$core$Object* $tmp5808 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5809 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5808), p_out);
    valueStruct5807 = $tmp5809;
    panda$core$Object* $tmp5811 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp5812 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5811)->type);
    numberClass5810 = $tmp5812;
    panda$core$String* $tmp5814 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value5813 = $tmp5814;
    panda$core$String* $tmp5816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5815, value5813);
    panda$core$String* $tmp5818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5816, &$s5817);
    panda$core$String* $tmp5819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5818, valueStruct5807);
    panda$core$String* $tmp5821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5819, &$s5820);
    (($fn5822) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5821);
    org$pandalanguage$pandac$Symbol* $tmp5825 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass5810->symbolTable, &$s5824);
    f5823 = ((org$pandalanguage$pandac$FieldDecl*) $tmp5825);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f5823);
    panda$core$String* $tmp5827 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f5823->type);
    switchType5826 = $tmp5827;
    panda$core$String* $tmp5829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5828, switchType5826);
    panda$core$String* $tmp5831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5829, &$s5830);
    panda$core$String* $tmp5832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5831, value5813);
    panda$core$String* $tmp5834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5832, &$s5833);
    (($fn5835) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5834);
    panda$core$String* $tmp5837 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel5836 = $tmp5837;
    panda$collections$Array* $tmp5839 = (panda$collections$Array*) malloc(40);
    $tmp5839->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5839->refCount.value = 1;
    panda$collections$Array$init($tmp5839);
    whenLabels5838 = $tmp5839;
    panda$core$Int64 $tmp5842 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp5843 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5842, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5844 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp5843);
    panda$core$Bit $tmp5845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5844)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp5845.value) {
    {
        panda$core$String* $tmp5846 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel5841 = $tmp5846;
    }
    }
    else {
    {
        otherwiseLabel5841 = endLabel5836;
    }
    }
    panda$core$String* $tmp5848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5847, otherwiseLabel5841);
    panda$core$String* $tmp5850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5848, &$s5849);
    (($fn5851) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5850);
    panda$core$Int64 $tmp5853 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5852, ((panda$core$Int64) { 1 }), $tmp5853, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5855 = $tmp5852.start.value;
    panda$core$Int64 i5854 = { $tmp5855 };
    int64_t $tmp5857 = $tmp5852.end.value;
    int64_t $tmp5858 = $tmp5852.step.value;
    bool $tmp5859 = $tmp5852.inclusive.value;
    bool $tmp5866 = $tmp5858 > 0;
    if ($tmp5866) goto $l5864; else goto $l5865;
    $l5864:;
    if ($tmp5859) goto $l5867; else goto $l5868;
    $l5867:;
    if ($tmp5855 <= $tmp5857) goto $l5860; else goto $l5862;
    $l5868:;
    if ($tmp5855 < $tmp5857) goto $l5860; else goto $l5862;
    $l5865:;
    if ($tmp5859) goto $l5869; else goto $l5870;
    $l5869:;
    if ($tmp5855 >= $tmp5857) goto $l5860; else goto $l5862;
    $l5870:;
    if ($tmp5855 > $tmp5857) goto $l5860; else goto $l5862;
    $l5860:;
    {
        panda$core$Object* $tmp5873 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5854);
        w5872 = ((org$pandalanguage$pandac$IRNode*) $tmp5873);
        panda$core$Bit $tmp5874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5872->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp5874.value) {
        {
            goto $l5863;
        }
        }
        panda$core$Bit $tmp5875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w5872->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp5875.value);
        panda$core$String* $tmp5877 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label5876 = $tmp5877;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels5838, ((panda$core$Object*) label5876));
        panda$core$Int64 $tmp5879 = panda$collections$Array$get_count$R$panda$core$Int64(w5872->children);
        panda$core$Int64 $tmp5880 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5879, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5878, ((panda$core$Int64) { 0 }), $tmp5880, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp5882 = $tmp5878.start.value;
        panda$core$Int64 i5881 = { $tmp5882 };
        int64_t $tmp5884 = $tmp5878.end.value;
        int64_t $tmp5885 = $tmp5878.step.value;
        bool $tmp5886 = $tmp5878.inclusive.value;
        bool $tmp5893 = $tmp5885 > 0;
        if ($tmp5893) goto $l5891; else goto $l5892;
        $l5891:;
        if ($tmp5886) goto $l5894; else goto $l5895;
        $l5894:;
        if ($tmp5882 <= $tmp5884) goto $l5887; else goto $l5889;
        $l5895:;
        if ($tmp5882 < $tmp5884) goto $l5887; else goto $l5889;
        $l5892:;
        if ($tmp5886) goto $l5896; else goto $l5897;
        $l5896:;
        if ($tmp5882 >= $tmp5884) goto $l5887; else goto $l5889;
        $l5897:;
        if ($tmp5882 > $tmp5884) goto $l5887; else goto $l5889;
        $l5887:;
        {
            panda$core$Object* $tmp5900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5872->children, i5881);
            panda$core$UInt64 $tmp5901 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5900));
            number5899 = $tmp5901;
            panda$core$String* $tmp5903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5902, switchType5826);
            panda$core$String* $tmp5905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5903, &$s5904);
            panda$core$String* $tmp5906 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5905, ((panda$core$Object*) wrap_panda$core$UInt64(number5899)));
            panda$core$String* $tmp5908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5906, &$s5907);
            panda$core$String* $tmp5909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5908, label5876);
            panda$core$String* $tmp5911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5909, &$s5910);
            (($fn5912) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5911);
        }
        $l5890:;
        if ($tmp5893) goto $l5914; else goto $l5915;
        $l5914:;
        int64_t $tmp5916 = $tmp5884 - i5881.value;
        if ($tmp5886) goto $l5917; else goto $l5918;
        $l5917:;
        if ($tmp5916 >= $tmp5885) goto $l5913; else goto $l5889;
        $l5918:;
        if ($tmp5916 > $tmp5885) goto $l5913; else goto $l5889;
        $l5915:;
        int64_t $tmp5920 = i5881.value - $tmp5884;
        if ($tmp5886) goto $l5921; else goto $l5922;
        $l5921:;
        if ($tmp5920 >= -$tmp5885) goto $l5913; else goto $l5889;
        $l5922:;
        if ($tmp5920 > -$tmp5885) goto $l5913; else goto $l5889;
        $l5913:;
        i5881.value += $tmp5885;
        goto $l5887;
        $l5889:;
    }
    $l5863:;
    if ($tmp5866) goto $l5925; else goto $l5926;
    $l5925:;
    int64_t $tmp5927 = $tmp5857 - i5854.value;
    if ($tmp5859) goto $l5928; else goto $l5929;
    $l5928:;
    if ($tmp5927 >= $tmp5858) goto $l5924; else goto $l5862;
    $l5929:;
    if ($tmp5927 > $tmp5858) goto $l5924; else goto $l5862;
    $l5926:;
    int64_t $tmp5931 = i5854.value - $tmp5857;
    if ($tmp5859) goto $l5932; else goto $l5933;
    $l5932:;
    if ($tmp5931 >= -$tmp5858) goto $l5924; else goto $l5862;
    $l5933:;
    if ($tmp5931 > -$tmp5858) goto $l5924; else goto $l5862;
    $l5924:;
    i5854.value += $tmp5858;
    goto $l5860;
    $l5862:;
    (($fn5936) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5935);
    panda$core$Int64 $tmp5938 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5937, ((panda$core$Int64) { 1 }), $tmp5938, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5940 = $tmp5937.start.value;
    panda$core$Int64 i5939 = { $tmp5940 };
    int64_t $tmp5942 = $tmp5937.end.value;
    int64_t $tmp5943 = $tmp5937.step.value;
    bool $tmp5944 = $tmp5937.inclusive.value;
    bool $tmp5951 = $tmp5943 > 0;
    if ($tmp5951) goto $l5949; else goto $l5950;
    $l5949:;
    if ($tmp5944) goto $l5952; else goto $l5953;
    $l5952:;
    if ($tmp5940 <= $tmp5942) goto $l5945; else goto $l5947;
    $l5953:;
    if ($tmp5940 < $tmp5942) goto $l5945; else goto $l5947;
    $l5950:;
    if ($tmp5944) goto $l5954; else goto $l5955;
    $l5954:;
    if ($tmp5940 >= $tmp5942) goto $l5945; else goto $l5947;
    $l5955:;
    if ($tmp5940 > $tmp5942) goto $l5945; else goto $l5947;
    $l5945:;
    {
        panda$core$Object* $tmp5958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i5939);
        w5957 = ((org$pandalanguage$pandac$IRNode*) $tmp5958);
        panda$core$Int64 $tmp5960 = panda$collections$Array$get_count$R$panda$core$Int64(w5957->children);
        panda$core$Int64 $tmp5961 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5960, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp5962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w5957->children, $tmp5961);
        block5959 = ((org$pandalanguage$pandac$IRNode*) $tmp5962);
        panda$core$Int64 $tmp5963 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5939, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp5964 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels5838);
        panda$core$Bit $tmp5965 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5963, $tmp5964);
        if ($tmp5965.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, otherwiseLabel5841, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp5966 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5939, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp5967 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels5838, $tmp5966);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ((panda$core$String*) $tmp5967), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block5959, p_out);
        panda$core$Bit $tmp5968 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block5959);
        panda$core$Bit $tmp5969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5968);
        if ($tmp5969.value) {
        {
            panda$core$String* $tmp5971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5970, endLabel5836);
            panda$core$String* $tmp5973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5971, &$s5972);
            (($fn5974) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5973);
        }
        }
    }
    $l5948:;
    if ($tmp5951) goto $l5976; else goto $l5977;
    $l5976:;
    int64_t $tmp5978 = $tmp5942 - i5939.value;
    if ($tmp5944) goto $l5979; else goto $l5980;
    $l5979:;
    if ($tmp5978 >= $tmp5943) goto $l5975; else goto $l5947;
    $l5980:;
    if ($tmp5978 > $tmp5943) goto $l5975; else goto $l5947;
    $l5977:;
    int64_t $tmp5982 = i5939.value - $tmp5942;
    if ($tmp5944) goto $l5983; else goto $l5984;
    $l5983:;
    if ($tmp5982 >= -$tmp5943) goto $l5975; else goto $l5947;
    $l5984:;
    if ($tmp5982 > -$tmp5943) goto $l5975; else goto $l5947;
    $l5975:;
    i5939.value += $tmp5943;
    goto $l5945;
    $l5947:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel5836, p_out);
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
    panda$core$String* result5986;
    org$pandalanguage$pandac$Type* $tmp5987 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp5988 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5987);
    result5986 = $tmp5988;
    panda$core$Bit $tmp5990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp5989 = $tmp5990.value;
    if (!$tmp5989) goto $l5991;
    panda$core$Bit $tmp5993 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result5986, &$s5992);
    panda$core$Bit $tmp5994 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5993);
    $tmp5989 = $tmp5994.value;
    $l5991:;
    panda$core$Bit $tmp5995 = { $tmp5989 };
    if ($tmp5995.value) {
    {
        panda$core$String* $tmp5997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result5986, &$s5996);
        return $tmp5997;
    }
    }
    return result5986;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name5998;
    panda$core$Bit needsIndirection6007;
    panda$core$String* separator6019;
    panda$collections$Iterator* p$Iter6040;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6052;
    panda$core$String* $tmp5999 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name5998 = $tmp5999;
    panda$core$Bit $tmp6000 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name5998));
    if ($tmp6000.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name5998));
    panda$core$String* $tmp6002 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6001, $tmp6002);
    panda$core$String* $tmp6005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6003, &$s6004);
    (($fn6006) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6005);
    panda$core$Bit $tmp6008 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6007 = $tmp6008;
    if (needsIndirection6007.value) {
    {
        (($fn6010) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6009);
    }
    }
    else {
    {
        panda$core$String* $tmp6011 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6012) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6011);
    }
    }
    panda$core$String* $tmp6014 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6013, $tmp6014);
    panda$core$String* $tmp6017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6015, &$s6016);
    (($fn6018) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6017);
    separator6019 = &$s6020;
    if (needsIndirection6007.value) {
    {
        panda$core$String* $tmp6022 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6021, $tmp6022);
        panda$core$String* $tmp6025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6023, &$s6024);
        (($fn6026) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6025);
        separator6019 = &$s6027;
    }
    }
    panda$core$Bit $tmp6028 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6029 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6028);
    if ($tmp6029.value) {
    {
        panda$core$String* $tmp6031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6030, separator6019);
        panda$core$String* $tmp6033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6031, &$s6032);
        panda$core$String* $tmp6034 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6033, $tmp6034);
        panda$core$String* $tmp6037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6035, &$s6036);
        (($fn6038) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6037);
        separator6019 = &$s6039;
    }
    }
    {
        ITable* $tmp6041 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6041->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6041 = $tmp6041->next;
        }
        $fn6043 $tmp6042 = $tmp6041->methods[0];
        panda$collections$Iterator* $tmp6044 = $tmp6042(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6040 = $tmp6044;
        $l6045:;
        ITable* $tmp6047 = p$Iter6040->$class->itable;
        while ($tmp6047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6047 = $tmp6047->next;
        }
        $fn6049 $tmp6048 = $tmp6047->methods[0];
        panda$core$Bit $tmp6050 = $tmp6048(p$Iter6040);
        panda$core$Bit $tmp6051 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6050);
        if (!$tmp6051.value) goto $l6046;
        {
            ITable* $tmp6053 = p$Iter6040->$class->itable;
            while ($tmp6053->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6053 = $tmp6053->next;
            }
            $fn6055 $tmp6054 = $tmp6053->methods[1];
            panda$core$Object* $tmp6056 = $tmp6054(p$Iter6040);
            p6052 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6056);
            panda$core$String* $tmp6058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6057, separator6019);
            panda$core$String* $tmp6060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6058, &$s6059);
            panda$core$String* $tmp6061 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6052->type);
            panda$core$String* $tmp6062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6060, $tmp6061);
            panda$core$String* $tmp6064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6062, &$s6063);
            panda$core$String* $tmp6065 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6052->name);
            panda$core$String* $tmp6066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6064, $tmp6065);
            panda$core$String* $tmp6068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6066, &$s6067);
            (($fn6069) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6068);
            separator6019 = &$s6070;
        }
        goto $l6045;
        $l6046:;
    }
    (($fn6072) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6071);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6095;
    panda$collections$Iterator* p$Iter6106;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6118;
    panda$io$MemoryOutputStream* bodyBuffer6141;
    panda$io$IndentedOutputStream* indentedBody6144;
    panda$collections$Iterator* s$Iter6147;
    org$pandalanguage$pandac$IRNode* s6159;
    panda$core$Object* $tmp6073 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6073)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6074;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn6075) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    (($fn6077) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6076);
    panda$core$Bit $tmp6078 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6078.value) {
    {
        (($fn6080) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6079);
    }
    }
    panda$core$String* $tmp6082 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6081, $tmp6082);
    panda$core$String* $tmp6085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6083, &$s6084);
    panda$core$String* $tmp6086 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6085, $tmp6086);
    panda$core$String* $tmp6089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6087, &$s6088);
    panda$core$String* $tmp6090 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6089, $tmp6090);
    panda$core$String* $tmp6093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6091, &$s6092);
    (($fn6094) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6093);
    separator6095 = &$s6096;
    panda$core$Bit $tmp6097 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6098 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6097);
    if ($tmp6098.value) {
    {
        panda$core$String* $tmp6100 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6099, $tmp6100);
        panda$core$String* $tmp6103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6101, &$s6102);
        (($fn6104) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6103);
        separator6095 = &$s6105;
    }
    }
    {
        ITable* $tmp6107 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6107->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6107 = $tmp6107->next;
        }
        $fn6109 $tmp6108 = $tmp6107->methods[0];
        panda$collections$Iterator* $tmp6110 = $tmp6108(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6106 = $tmp6110;
        $l6111:;
        ITable* $tmp6113 = p$Iter6106->$class->itable;
        while ($tmp6113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6113 = $tmp6113->next;
        }
        $fn6115 $tmp6114 = $tmp6113->methods[0];
        panda$core$Bit $tmp6116 = $tmp6114(p$Iter6106);
        panda$core$Bit $tmp6117 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6116);
        if (!$tmp6117.value) goto $l6112;
        {
            ITable* $tmp6119 = p$Iter6106->$class->itable;
            while ($tmp6119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6119 = $tmp6119->next;
            }
            $fn6121 $tmp6120 = $tmp6119->methods[1];
            panda$core$Object* $tmp6122 = $tmp6120(p$Iter6106);
            p6118 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6122);
            panda$core$String* $tmp6124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6123, separator6095);
            panda$core$String* $tmp6126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6124, &$s6125);
            panda$core$String* $tmp6127 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6118->type);
            panda$core$String* $tmp6128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6126, $tmp6127);
            panda$core$String* $tmp6130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6128, &$s6129);
            panda$core$String* $tmp6131 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6118->name);
            panda$core$String* $tmp6132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6130, $tmp6131);
            panda$core$String* $tmp6134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6132, &$s6133);
            (($fn6135) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6134);
            separator6095 = &$s6136;
        }
        goto $l6111;
        $l6112:;
    }
    (($fn6138) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6137);
    panda$core$Int64 $tmp6139 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6139;
    panda$core$Bit $tmp6140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6140.value);
    panda$io$MemoryOutputStream* $tmp6142 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6142->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6142->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6142);
    bodyBuffer6141 = $tmp6142;
    panda$io$IndentedOutputStream* $tmp6145 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp6145->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6145->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6145, ((panda$io$OutputStream*) bodyBuffer6141));
    indentedBody6144 = $tmp6145;
    {
        ITable* $tmp6148 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6148->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6148 = $tmp6148->next;
        }
        $fn6150 $tmp6149 = $tmp6148->methods[0];
        panda$collections$Iterator* $tmp6151 = $tmp6149(((panda$collections$Iterable*) p_body->children));
        s$Iter6147 = $tmp6151;
        $l6152:;
        ITable* $tmp6154 = s$Iter6147->$class->itable;
        while ($tmp6154->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6154 = $tmp6154->next;
        }
        $fn6156 $tmp6155 = $tmp6154->methods[0];
        panda$core$Bit $tmp6157 = $tmp6155(s$Iter6147);
        panda$core$Bit $tmp6158 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6157);
        if (!$tmp6158.value) goto $l6153;
        {
            ITable* $tmp6160 = s$Iter6147->$class->itable;
            while ($tmp6160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6160 = $tmp6160->next;
            }
            $fn6162 $tmp6161 = $tmp6160->methods[1];
            panda$core$Object* $tmp6163 = $tmp6161(s$Iter6147);
            s6159 = ((org$pandalanguage$pandac$IRNode*) $tmp6163);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6159, indentedBody6144);
        }
        goto $l6152;
        $l6153:;
    }
    panda$core$String* $tmp6165 = (($fn6164) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn6166) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6165);
    panda$core$String* $tmp6168 = (($fn6167) bodyBuffer6141->$class->vtable[0])(bodyBuffer6141);
    (($fn6169) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6168);
    panda$core$Bit $tmp6170 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6171 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6170);
    if ($tmp6171.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6172 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6173 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6172);
        if ($tmp6173.value) {
        {
            (($fn6175) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6174);
        }
        }
        else {
        {
            (($fn6177) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6176);
        }
        }
    }
    }
    panda$core$Int64 $tmp6178 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6178;
    (($fn6180) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6179);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6181 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6181.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6182 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6182);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

