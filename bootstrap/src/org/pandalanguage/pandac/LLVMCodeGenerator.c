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
#include "panda/core/Char8.h"
#include "panda/core/Int8.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$finish} };

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl} };

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
typedef panda$collections$Iterator* (*$fn136)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn142)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn148)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn175)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn181)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn187)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn212)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn218)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn224)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn253)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn259)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn265)(panda$collections$Iterator*);
typedef void (*$fn280)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn300)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn306)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn312)(panda$collections$Iterator*);
typedef void (*$fn329)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn339)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn539)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn545)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn551)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn578)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn617)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn628)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn634)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn640)(panda$collections$Iterator*);
typedef void (*$fn655)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn685)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn688)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn696)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn703)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn749)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn804)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn824)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn855)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn868)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn880)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn887)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn902)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn917)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn952)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn965)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1031)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1057)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1088)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1101)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1106)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1109)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1118)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1124)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1130)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1157)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1196)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1207)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1213)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1219)(panda$collections$Iterator*);
typedef void (*$fn1235)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1338)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1358)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1417)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1428)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1434)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1440)(panda$collections$Iterator*);
typedef void (*$fn1455)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1474)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1497)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1563)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1574)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1597)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1626)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1789)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1795)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1801)(panda$collections$Iterator*);
typedef void (*$fn1842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1858)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1872)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1878)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1894)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1924)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1944)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2076)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2093)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2130)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2158)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2180)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2209)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2232)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2256)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2289)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2313)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2332)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2357)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2364)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2404)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2420)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2462)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2475)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2494)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2501)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2523)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2541)(panda$collections$CollectionView*);
typedef void (*$fn2562)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2575)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2591)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2617)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2638)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2652)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2667)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2691)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2731)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2744)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2765)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2781)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2796)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2809)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2846)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2861)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2883)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2899)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2975)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2981)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2987)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2993)(panda$collections$Iterator*);
typedef void (*$fn3005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3007)(panda$io$OutputStream*);
typedef void (*$fn3031)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3049)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3179)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3193)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3201)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3206)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3212)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3218)(panda$collections$Iterator*);
typedef void (*$fn3227)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3243)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3282)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3315)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3346)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3364)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3379)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3402)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3420)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3455)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3474)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3496)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3528)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3550)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3568)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3594)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3623)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3646)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3703)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3717)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3794)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3838)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3889)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3913)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3924)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3938)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3966)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3981)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4016)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4028)(panda$collections$CollectionView*);
typedef void (*$fn4040)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4047)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4053)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4059)(panda$collections$Iterator*);
typedef void (*$fn4069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4072)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4110)(panda$collections$CollectionView*);
typedef void (*$fn4118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4136)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4205)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4224)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4255)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4272)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4326)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4332)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4338)(panda$collections$Iterator*);
typedef void (*$fn4359)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4381)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4408)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4420)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4435)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4440)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4553)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4570)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4588)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4592)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4598)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4604)(panda$collections$Iterator*);
typedef void (*$fn4606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4607)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4610)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4623)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4638)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4651)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4662)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn4685)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4697)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4707)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4739)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4749)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4759)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4784)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4830)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4847)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4868)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4879)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4900)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4911)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4928)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4949)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4981)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4992)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5008)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5032)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5048)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5061)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5077)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5088)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5104)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5115)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5144)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5171)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5182)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5207)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5223)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5236)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5263)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5276)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5289)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5300)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5309)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5346)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5366)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5375)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5388)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5403)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5408)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5414)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5420)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5448)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5470)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5505)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5565)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5585)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5648)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5674)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5696)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5702)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5708)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5714)(panda$collections$Iterator*);
typedef void (*$fn5721)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5731)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5738)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5740)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5787)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5793)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5819)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5824)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5830)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5836)(panda$collections$Iterator*);
typedef void (*$fn5850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5853)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5855)(panda$io$MemoryOutputStream*);
typedef void (*$fn5857)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5884)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5889)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5895)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5901)(panda$collections$Iterator*);
typedef void (*$fn5915)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5918)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5929)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5935)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5941)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn5943)(panda$io$MemoryOutputStream*);
typedef void (*$fn5945)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5946)(panda$io$MemoryOutputStream*);
typedef void (*$fn5948)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5956)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5959)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 1 };
static panda$core$String $s116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 1 };
static panda$core$String $s118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 1 };
static panda$core$String $s128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10, 1 };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42, 1 };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, 1 };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, 1 };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, 1 };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, 1 };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, 1 };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 1 };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, 1 };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, 1 };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, 1 };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1 };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, 1 };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, 1 };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, 1 };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s1139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, 1 };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s1170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s1203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, 1 };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, 1 };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, 1 };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, 1 };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 1 };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, 1 };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 1 };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 1 };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, 1 };
static panda$core$String $s1706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 1 };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 1 };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 1 };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 1 };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 1 };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 1 };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 1 };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 1 };
static panda$core$String $s1734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1 };
static panda$core$String $s1737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1 };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 1 };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1 };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1 };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1 };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 1 };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 1 };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 1 };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 1 };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 1 };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 1 };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 1 };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 1 };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 1 };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1 };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, 1 };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, 1 };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 1 };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 1 };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 1 };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 1 };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 1 };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 1 };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 1 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 1 };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 1 };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 1 };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 1 };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 1 };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 1 };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 1 };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 1 };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 1 };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 1 };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 1 };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 1 };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 1 };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 1 };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 1 };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 1 };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 1 };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 48, 1 };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 30, 1 };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 1 };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 1 };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 1 };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 1 };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 1 };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, 1 };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1 };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 1 };
static panda$core$String $s2449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 1 };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1 };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 1 };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, 1 };
static panda$core$String $s2570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, 1 };
static panda$core$String $s2645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s2677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 1 };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 1 };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s2876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s2891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 1 };
static panda$core$String $s2948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 1 };
static panda$core$String $s2950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s2962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, 1 };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s3044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s3124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 1 };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s3291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1 };
static panda$core$String $s3305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1 };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s3367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s3376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, 1 };
static panda$core$String $s3398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, 1 };
static panda$core$String $s3400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, 1 };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s3573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s3575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1 };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, 1 };
static panda$core$String $s3612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 1 };
static panda$core$String $s3697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 1 };
static panda$core$String $s3728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 1 };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 1 };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 1 };
static panda$core$String $s3778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s3783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s3822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s3831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s3833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s3850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s3858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s3863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s3869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s3880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s3887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s3922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s3956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s3964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 1 };
static panda$core$String $s3969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s3971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s3978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s3994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s3995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s4002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 1 };
static panda$core$String $s4021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s4031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1 };
static panda$core$String $s4033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, 1 };
static panda$core$String $s4038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 1 };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s4075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 1 };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, 1 };
static panda$core$String $s4088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s4090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 69, 1 };
static panda$core$String $s4098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, 1 };
static panda$core$String $s4100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, 1 };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s4116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x31\x20\x7D\x20\x7D", 26, 1 };
static panda$core$String $s4122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s4125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, 1 };
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
static panda$core$String $s4196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 1 };
static panda$core$String $s4198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s4212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 1 };
static panda$core$String $s4235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s4244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s4250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s4253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 1 };
static panda$core$String $s4267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 1 };
static panda$core$String $s4270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s4352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s4374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s4394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s4402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s4428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s4436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 1 };
static panda$core$String $s4438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s4442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s4508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s4546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s4551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s4557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 1 };
static panda$core$String $s4559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s4564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s4577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s4608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s4616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s4649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s4660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s4695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1 };
static panda$core$String $s4710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s4715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 1 };
static panda$core$String $s4726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1 };
static panda$core$String $s4752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1 };
static panda$core$String $s4761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s4764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, 1 };
static panda$core$String $s4769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1 };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s4802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s4803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s4805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s4808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 1 };
static panda$core$String $s4813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 1 };
static panda$core$String $s4820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s4844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 1 };
static panda$core$String $s4858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 1 };
static panda$core$String $s4890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s4925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 1 };
static panda$core$String $s4939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s4968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 1 };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s5142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 1 };
static panda$core$String $s5215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s5231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s5234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1 };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s5239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5298 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s5490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 1 };
static panda$core$String $s5502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3B\x20\x69\x6E\x6C\x69\x6E\x65\x20\x72\x65\x74\x75\x72\x6E\x20\x28", 18, 1 };
static panda$core$String $s5583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s5590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s5644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s5686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s5688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s5695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, 1 };
static panda$core$String $s5716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1 };
static panda$core$String $s5718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, 1 };
static panda$core$String $s5719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, 1 };
static panda$core$String $s5722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, 1 };
static panda$core$String $s5724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, 1 };
static panda$core$String $s5726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 1 };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s5773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s5777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s5782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 1 };
static panda$core$String $s5785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s5794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s5801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s5808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s5820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s5848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s5856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s5859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s5861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s5876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s5885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s5913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s5953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s5955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s5958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

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
    panda$core$Int64 $match$644896;
    {
        $match$644896 = p_stmt->kind;
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644896, ((panda$core$Int64) { 1000 }));
        if ($tmp97.value) {
        {
            panda$core$Int64 $tmp98 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp98, ((panda$core$Int64) { 0 }));
            if ($tmp99.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp100 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp101 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp100, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp102 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp101);
            panda$core$Bit $tmp103 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp102));
            return $tmp103;
        }
        }
        else {
        panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644896, ((panda$core$Int64) { 1006 }));
        bool $tmp105 = $tmp106.value;
        if ($tmp105) goto $l107;
        panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644896, ((panda$core$Int64) { 1007 }));
        $tmp105 = $tmp108.value;
        $l107:;
        panda$core$Bit $tmp109 = { $tmp105 };
        bool $tmp104 = $tmp109.value;
        if ($tmp104) goto $l110;
        panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644896, ((panda$core$Int64) { 1008 }));
        $tmp104 = $tmp111.value;
        $l110:;
        panda$core$Bit $tmp112 = { $tmp104 };
        if ($tmp112.value) {
        {
            return ((panda$core$Bit) { true });
        }
        }
        else {
        {
            return ((panda$core$Bit) { false });
        }
        }
        }
    }
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl122;
    panda$core$Int64 result131;
    panda$collections$Iterator* f$Iter132;
    org$pandalanguage$pandac$FieldDecl* f145;
    panda$core$Int64 size151;
    panda$core$Int64 align153;
    panda$core$Bit $tmp113 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_t);
    if ($tmp113.value) {
    {
        panda$core$Bit $tmp115 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s114);
        if ($tmp115.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp117 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s116);
        if ($tmp117.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp119 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s118);
        if ($tmp119.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp120 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp121 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp120);
    if ($tmp121.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp123 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl122 = $tmp123;
    panda$core$Bit $tmp125 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl122);
    panda$core$Bit $tmp126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp125);
    bool $tmp124 = $tmp126.value;
    if ($tmp124) goto $l127;
    panda$core$Bit $tmp129 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl122)->name, &$s128);
    $tmp124 = $tmp129.value;
    $l127:;
    panda$core$Bit $tmp130 = { $tmp124 };
    if ($tmp130.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result131 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp133 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl122);
        ITable* $tmp134 = ((panda$collections$Iterable*) $tmp133)->$class->itable;
        while ($tmp134->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp134 = $tmp134->next;
        }
        $fn136 $tmp135 = $tmp134->methods[0];
        panda$collections$Iterator* $tmp137 = $tmp135(((panda$collections$Iterable*) $tmp133));
        f$Iter132 = $tmp137;
        $l138:;
        ITable* $tmp140 = f$Iter132->$class->itable;
        while ($tmp140->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp140 = $tmp140->next;
        }
        $fn142 $tmp141 = $tmp140->methods[0];
        panda$core$Bit $tmp143 = $tmp141(f$Iter132);
        panda$core$Bit $tmp144 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp143);
        if (!$tmp144.value) goto $l139;
        {
            ITable* $tmp146 = f$Iter132->$class->itable;
            while ($tmp146->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp146 = $tmp146->next;
            }
            $fn148 $tmp147 = $tmp146->methods[1];
            panda$core$Object* $tmp149 = $tmp147(f$Iter132);
            f145 = ((org$pandalanguage$pandac$FieldDecl*) $tmp149);
            panda$core$Bit $tmp150 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(f145->annotations);
            if ($tmp150.value) {
            {
                goto $l138;
            }
            }
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f145);
            panda$core$Int64 $tmp152 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f145->type);
            size151 = $tmp152;
            panda$core$Int64 $tmp154 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result131, size151);
            align153 = $tmp154;
            panda$core$Bit $tmp155 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align153, ((panda$core$Int64) { 0 }));
            if ($tmp155.value) {
            {
                panda$core$Int64 $tmp156 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size151, align153);
                panda$core$Int64 $tmp157 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result131, $tmp156);
                result131 = $tmp157;
            }
            }
            panda$core$Int64 $tmp158 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result131, size151);
            result131 = $tmp158;
        }
        goto $l138;
        $l139:;
    }
    panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp159.value) {
    {
        panda$core$Int64 $tmp160 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result131, ((panda$core$Int64) { 1 }));
        result131 = $tmp160;
    }
    }
    return result131;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp161 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
    panda$core$Int64 $tmp162 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp161, ((panda$core$Int64) { 8 }));
    return $tmp162;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl166;
    panda$core$Int64 result170;
    panda$collections$Iterator* f$Iter171;
    org$pandalanguage$pandac$FieldDecl* f184;
    panda$core$Int64 size189;
    panda$core$Int64 align191;
    panda$core$Bit $tmp163 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_t);
    panda$core$Bit $tmp164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp163);
    if ($tmp164.value) {
    {
        panda$core$Int64 $tmp165 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
        return $tmp165;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp167 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl166 = $tmp167;
    panda$core$Bit $tmp169 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl166)->name, &$s168);
    if ($tmp169.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result170 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp172 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl166);
        ITable* $tmp173 = ((panda$collections$Iterable*) $tmp172)->$class->itable;
        while ($tmp173->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp173 = $tmp173->next;
        }
        $fn175 $tmp174 = $tmp173->methods[0];
        panda$collections$Iterator* $tmp176 = $tmp174(((panda$collections$Iterable*) $tmp172));
        f$Iter171 = $tmp176;
        $l177:;
        ITable* $tmp179 = f$Iter171->$class->itable;
        while ($tmp179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp179 = $tmp179->next;
        }
        $fn181 $tmp180 = $tmp179->methods[0];
        panda$core$Bit $tmp182 = $tmp180(f$Iter171);
        panda$core$Bit $tmp183 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp182);
        if (!$tmp183.value) goto $l178;
        {
            ITable* $tmp185 = f$Iter171->$class->itable;
            while ($tmp185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp185 = $tmp185->next;
            }
            $fn187 $tmp186 = $tmp185->methods[1];
            panda$core$Object* $tmp188 = $tmp186(f$Iter171);
            f184 = ((org$pandalanguage$pandac$FieldDecl*) $tmp188);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f184);
            panda$core$Int64 $tmp190 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f184->type);
            size189 = $tmp190;
            panda$core$Int64 $tmp192 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result170, size189);
            align191 = $tmp192;
            panda$core$Bit $tmp193 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align191, ((panda$core$Int64) { 0 }));
            if ($tmp193.value) {
            {
                panda$core$Int64 $tmp194 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size189, align191);
                panda$core$Int64 $tmp195 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result170, $tmp194);
                result170 = $tmp195;
            }
            }
            panda$core$Int64 $tmp196 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result170, size189);
            result170 = $tmp196;
        }
        goto $l177;
        $l178:;
    }
    panda$core$Bit $tmp198 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl166);
    bool $tmp197 = $tmp198.value;
    if (!$tmp197) goto $l199;
    panda$core$Bit $tmp200 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    $tmp197 = $tmp200.value;
    $l199:;
    panda$core$Bit $tmp201 = { $tmp197 };
    if ($tmp201.value) {
    {
        panda$core$Int64 $tmp202 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result170, ((panda$core$Int64) { 1 }));
        result170 = $tmp202;
    }
    }
    return result170;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl203;
    panda$core$Int64 result205;
    panda$collections$Iterator* f$Iter208;
    org$pandalanguage$pandac$FieldDecl* f221;
    panda$core$Int64 size226;
    panda$core$Int64 align228;
    org$pandalanguage$pandac$ClassDecl* $tmp204 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl203 = $tmp204;
    org$pandalanguage$pandac$Type* $tmp206 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp207 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp206);
    result205 = $tmp207;
    {
        panda$collections$ListView* $tmp209 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl203);
        ITable* $tmp210 = ((panda$collections$Iterable*) $tmp209)->$class->itable;
        while ($tmp210->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp210 = $tmp210->next;
        }
        $fn212 $tmp211 = $tmp210->methods[0];
        panda$collections$Iterator* $tmp213 = $tmp211(((panda$collections$Iterable*) $tmp209));
        f$Iter208 = $tmp213;
        $l214:;
        ITable* $tmp216 = f$Iter208->$class->itable;
        while ($tmp216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp216 = $tmp216->next;
        }
        $fn218 $tmp217 = $tmp216->methods[0];
        panda$core$Bit $tmp219 = $tmp217(f$Iter208);
        panda$core$Bit $tmp220 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp219);
        if (!$tmp220.value) goto $l215;
        {
            ITable* $tmp222 = f$Iter208->$class->itable;
            while ($tmp222->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp222 = $tmp222->next;
            }
            $fn224 $tmp223 = $tmp222->methods[1];
            panda$core$Object* $tmp225 = $tmp223(f$Iter208);
            f221 = ((org$pandalanguage$pandac$FieldDecl*) $tmp225);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f221);
            panda$core$Int64 $tmp227 = org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, f221->type);
            size226 = $tmp227;
            panda$core$Int64 $tmp229 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result205, size226);
            align228 = $tmp229;
            panda$core$Bit $tmp230 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align228, ((panda$core$Int64) { 0 }));
            if ($tmp230.value) {
            {
                panda$core$Int64 $tmp231 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size226, align228);
                panda$core$Int64 $tmp232 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result205, $tmp231);
                result205 = $tmp232;
            }
            }
            panda$core$Int64 $tmp233 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result205, size226);
            result205 = $tmp233;
        }
        goto $l214;
        $l215:;
    }
    panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp234.value) {
    {
        panda$core$Int64 $tmp235 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result205, ((panda$core$Int64) { 1 }));
        result205 = $tmp235;
    }
    }
    return result205;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl237;
    panda$core$MutableString* code239;
    panda$core$String* separator247;
    panda$collections$Iterator* f$Iter249;
    org$pandalanguage$pandac$FieldDecl* f262;
    panda$core$Bit $tmp236 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp236.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    org$pandalanguage$pandac$ClassDecl* $tmp238 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
    cl237 = $tmp238;
    panda$core$MutableString* $tmp240 = (panda$core$MutableString*) malloc(40);
    $tmp240->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp240->refCount.value = 1;
    panda$core$String* $tmp243 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s242, $tmp243);
    panda$core$String* $tmp246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp244, &$s245);
    panda$core$MutableString$init$panda$core$String($tmp240, $tmp246);
    code239 = $tmp240;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) cl237));
    separator247 = &$s248;
    {
        panda$collections$ListView* $tmp250 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl237);
        ITable* $tmp251 = ((panda$collections$Iterable*) $tmp250)->$class->itable;
        while ($tmp251->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp251 = $tmp251->next;
        }
        $fn253 $tmp252 = $tmp251->methods[0];
        panda$collections$Iterator* $tmp254 = $tmp252(((panda$collections$Iterable*) $tmp250));
        f$Iter249 = $tmp254;
        $l255:;
        ITable* $tmp257 = f$Iter249->$class->itable;
        while ($tmp257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp257 = $tmp257->next;
        }
        $fn259 $tmp258 = $tmp257->methods[0];
        panda$core$Bit $tmp260 = $tmp258(f$Iter249);
        panda$core$Bit $tmp261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp260);
        if (!$tmp261.value) goto $l256;
        {
            ITable* $tmp263 = f$Iter249->$class->itable;
            while ($tmp263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp263 = $tmp263->next;
            }
            $fn265 $tmp264 = $tmp263->methods[1];
            panda$core$Object* $tmp266 = $tmp264(f$Iter249);
            f262 = ((org$pandalanguage$pandac$FieldDecl*) $tmp266);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f262);
            panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s267, separator247);
            panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp268, &$s269);
            panda$core$String* $tmp271 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f262->type);
            panda$core$String* $tmp272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, $tmp271);
            panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp272, &$s273);
            panda$core$MutableString$append$panda$core$String(code239, $tmp274);
            separator247 = &$s275;
        }
        goto $l255;
        $l256:;
    }
    org$pandalanguage$pandac$Type* $tmp276 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp277 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp276);
    if ($tmp277.value) {
    {
        panda$core$MutableString$append$panda$core$String(code239, &$s278);
    }
    }
    panda$core$MutableString$append$panda$core$String(code239, &$s279);
    (($fn280) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code239));
    panda$core$Bit $tmp281 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl237);
    if ($tmp281.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl237);
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$MutableString* code283;
    org$pandalanguage$pandac$ClassDecl* object291;
    panda$core$String* separator294;
    panda$collections$Iterator* f$Iter296;
    org$pandalanguage$pandac$FieldDecl* f309;
    panda$core$Bit $tmp282 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp282.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    panda$core$MutableString* $tmp284 = (panda$core$MutableString*) malloc(40);
    $tmp284->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp284->refCount.value = 1;
    panda$core$String* $tmp287 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s286, $tmp287);
    panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp288, &$s289);
    panda$core$MutableString$init$panda$core$String($tmp284, $tmp290);
    code283 = $tmp284;
    org$pandalanguage$pandac$Type* $tmp292 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp293 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp292);
    object291 = $tmp293;
    separator294 = &$s295;
    {
        panda$collections$ListView* $tmp297 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, object291);
        ITable* $tmp298 = ((panda$collections$Iterable*) $tmp297)->$class->itable;
        while ($tmp298->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp298 = $tmp298->next;
        }
        $fn300 $tmp299 = $tmp298->methods[0];
        panda$collections$Iterator* $tmp301 = $tmp299(((panda$collections$Iterable*) $tmp297));
        f$Iter296 = $tmp301;
        $l302:;
        ITable* $tmp304 = f$Iter296->$class->itable;
        while ($tmp304->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp304 = $tmp304->next;
        }
        $fn306 $tmp305 = $tmp304->methods[0];
        panda$core$Bit $tmp307 = $tmp305(f$Iter296);
        panda$core$Bit $tmp308 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp307);
        if (!$tmp308.value) goto $l303;
        {
            ITable* $tmp310 = f$Iter296->$class->itable;
            while ($tmp310->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp310 = $tmp310->next;
            }
            $fn312 $tmp311 = $tmp310->methods[1];
            panda$core$Object* $tmp313 = $tmp311(f$Iter296);
            f309 = ((org$pandalanguage$pandac$FieldDecl*) $tmp313);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f309);
            panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s314, separator294);
            panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s316);
            panda$core$String* $tmp318 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f309->type);
            panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp317, $tmp318);
            panda$core$String* $tmp321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp319, &$s320);
            panda$core$MutableString$append$panda$core$String(code283, $tmp321);
            separator294 = &$s322;
        }
        goto $l302;
        $l303:;
    }
    panda$core$String* $tmp324 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s323, $tmp324);
    panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp325, &$s326);
    panda$core$MutableString$append$panda$core$String(code283, $tmp327);
    panda$core$MutableString$append$panda$core$String(code283, &$s328);
    (($fn329) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code283));
    panda$core$String* $tmp331 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s330, $tmp331);
    panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s333);
    panda$core$String* $tmp335 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, $tmp335);
    panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s337);
    (($fn339) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp338);
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp341 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s340, $tmp341);
    return $tmp342;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$11074343;
    panda$core$String* name360;
    org$pandalanguage$pandac$ClassDecl* cl366;
    org$pandalanguage$pandac$ClassDecl* cl373;
    org$pandalanguage$pandac$ClassDecl* cl387;
    panda$core$String* name390;
    org$pandalanguage$pandac$ClassDecl* cl396;
    panda$core$MutableString* result412;
    panda$core$Range$LTpanda$core$Int64$GT $tmp420;
    {
        $match$11074343 = p_t->typeKind;
        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11074343, ((panda$core$Int64) { 14 }));
        if ($tmp344.value) {
        {
            return &$s345;
        }
        }
        else {
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11074343, ((panda$core$Int64) { 12 }));
        bool $tmp346 = $tmp347.value;
        if ($tmp346) goto $l348;
        panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11074343, ((panda$core$Int64) { 13 }));
        $tmp346 = $tmp349.value;
        $l348:;
        panda$core$Bit $tmp350 = { $tmp346 };
        if ($tmp350.value) {
        {
            panda$core$Int64 $tmp352 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp353 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp352, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s351, ((panda$core$Object*) wrap_panda$core$Int64($tmp353)));
            panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s355);
            return $tmp356;
        }
        }
        else {
        panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11074343, ((panda$core$Int64) { 19 }));
        if ($tmp357.value) {
        {
            return &$s358;
        }
        }
        else {
        panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11074343, ((panda$core$Int64) { 10 }));
        if ($tmp359.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, p_t);
            panda$core$String* $tmp362 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s361, $tmp362);
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, &$s364);
            name360 = $tmp365;
            org$pandalanguage$pandac$ClassDecl* $tmp367 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl366 = $tmp367;
            panda$core$Bit $tmp368 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl366);
            panda$core$Bit $tmp369 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp368);
            if ($tmp369.value) {
            {
                panda$core$String* $tmp371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name360, &$s370);
                return $tmp371;
            }
            }
            return name360;
        }
        }
        else {
        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11074343, ((panda$core$Int64) { 11 }));
        if ($tmp372.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp374 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl373 = $tmp374;
            panda$core$Bit $tmp375 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl373);
            if ($tmp375.value) {
            {
                panda$core$String* $tmp376 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                return $tmp376;
            }
            }
            panda$core$Object* $tmp377 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp378 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp377));
            return $tmp378;
        }
        }
        else {
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11074343, ((panda$core$Int64) { 21 }));
        if ($tmp379.value) {
        {
            panda$core$Object* $tmp380 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp382 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp380))->name, &$s381);
            if ($tmp382.value) {
            {
                panda$core$Object* $tmp383 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp384 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp383));
                panda$core$String* $tmp386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp384, &$s385);
                return $tmp386;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp388 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl387 = $tmp388;
            panda$core$Bit $tmp389 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl387);
            if ($tmp389.value) {
            {
                panda$core$String* $tmp392 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s391, $tmp392);
                panda$core$String* $tmp395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp393, &$s394);
                name390 = $tmp395;
                org$pandalanguage$pandac$ClassDecl* $tmp397 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl396 = $tmp397;
                panda$core$Bit $tmp398 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl396);
                panda$core$Bit $tmp399 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp398);
                if ($tmp399.value) {
                {
                    panda$core$String* $tmp401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name390, &$s400);
                    return $tmp401;
                }
                }
                return name390;
            }
            }
            panda$core$Object* $tmp402 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp403 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp402));
            return $tmp403;
        }
        }
        else {
        panda$core$Bit $tmp404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11074343, ((panda$core$Int64) { 22 }));
        if ($tmp404.value) {
        {
            panda$core$Object* $tmp405 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp406 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp405));
            return $tmp406;
        }
        }
        else {
        panda$core$Bit $tmp408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11074343, ((panda$core$Int64) { 24 }));
        bool $tmp407 = $tmp408.value;
        if ($tmp407) goto $l409;
        panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11074343, ((panda$core$Int64) { 25 }));
        $tmp407 = $tmp410.value;
        $l409:;
        panda$core$Bit $tmp411 = { $tmp407 };
        if ($tmp411.value) {
        {
            panda$core$MutableString* $tmp413 = (panda$core$MutableString*) malloc(40);
            $tmp413->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp413->refCount.value = 1;
            panda$core$Int64 $tmp415 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp416 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp415, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp417 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, $tmp416);
            panda$core$String* $tmp418 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp417));
            panda$core$MutableString$init$panda$core$String($tmp413, $tmp418);
            result412 = $tmp413;
            panda$core$MutableString$append$panda$core$String(result412, &$s419);
            panda$core$Int64 $tmp421 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp422 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp421, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp420, ((panda$core$Int64) { 0 }), $tmp422, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp424 = $tmp420.start.value;
            panda$core$Int64 i423 = { $tmp424 };
            int64_t $tmp426 = $tmp420.end.value;
            int64_t $tmp427 = $tmp420.step.value;
            bool $tmp428 = $tmp420.inclusive.value;
            bool $tmp435 = $tmp427 > 0;
            if ($tmp435) goto $l433; else goto $l434;
            $l433:;
            if ($tmp428) goto $l436; else goto $l437;
            $l436:;
            if ($tmp424 <= $tmp426) goto $l429; else goto $l431;
            $l437:;
            if ($tmp424 < $tmp426) goto $l429; else goto $l431;
            $l434:;
            if ($tmp428) goto $l438; else goto $l439;
            $l438:;
            if ($tmp424 >= $tmp426) goto $l429; else goto $l431;
            $l439:;
            if ($tmp424 > $tmp426) goto $l429; else goto $l431;
            $l429:;
            {
                panda$core$Bit $tmp441 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i423, ((panda$core$Int64) { 0 }));
                if ($tmp441.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result412, &$s442);
                }
                }
                panda$core$Object* $tmp443 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, i423);
                panda$core$String* $tmp444 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp443));
                panda$core$MutableString$append$panda$core$String(result412, $tmp444);
            }
            $l432:;
            if ($tmp435) goto $l446; else goto $l447;
            $l446:;
            int64_t $tmp448 = $tmp426 - i423.value;
            if ($tmp428) goto $l449; else goto $l450;
            $l449:;
            if ($tmp448 >= $tmp427) goto $l445; else goto $l431;
            $l450:;
            if ($tmp448 > $tmp427) goto $l445; else goto $l431;
            $l447:;
            int64_t $tmp452 = i423.value - $tmp426;
            if ($tmp428) goto $l453; else goto $l454;
            $l453:;
            if ($tmp452 >= -$tmp427) goto $l445; else goto $l431;
            $l454:;
            if ($tmp452 > -$tmp427) goto $l445; else goto $l431;
            $l445:;
            i423.value += $tmp427;
            goto $l429;
            $l431:;
            panda$core$MutableString$append$panda$core$String(result412, &$s456);
            panda$core$String* $tmp457 = panda$core$MutableString$convert$R$panda$core$String(result412);
            return $tmp457;
        }
        }
        else {
        {
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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp458.value) {
    {
        panda$core$Object* $tmp459 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp460 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp459));
        return $tmp460;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, p_t);
    panda$core$String* $tmp462 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s461, $tmp462);
    panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp463, &$s464);
    return $tmp465;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp466 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp466, &$s467);
    return $tmp468;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType469;
    panda$core$MutableString* result471;
    panda$core$Range$LTpanda$core$Int64$GT $tmp487;
    org$pandalanguage$pandac$Type* $tmp470 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType469 = $tmp470;
    panda$core$MutableString* $tmp472 = (panda$core$MutableString*) malloc(40);
    $tmp472->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp472->refCount.value = 1;
    panda$core$MutableString$init($tmp472);
    result471 = $tmp472;
    panda$core$Int64 $tmp474 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inheritedType469->subtypes);
    panda$core$Int64 $tmp475 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp474, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp476 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedType469->subtypes, $tmp475);
    panda$core$String* $tmp477 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp476));
    panda$core$MutableString$append$panda$core$String(result471, $tmp477);
    panda$core$MutableString$append$panda$core$String(result471, &$s478);
    panda$core$String* $tmp480 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s479, $tmp480);
    panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, &$s482);
    panda$core$MutableString$append$panda$core$String(result471, $tmp483);
    panda$core$Bit $tmp484 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp484.value) {
    {
        panda$core$MutableString$append$panda$core$String(result471, &$s485);
    }
    }
    panda$core$MutableString$append$panda$core$String(result471, &$s486);
    panda$core$Int64 $tmp488 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inheritedType469->subtypes);
    panda$core$Int64 $tmp489 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp488, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp487, ((panda$core$Int64) { 0 }), $tmp489, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp491 = $tmp487.start.value;
    panda$core$Int64 i490 = { $tmp491 };
    int64_t $tmp493 = $tmp487.end.value;
    int64_t $tmp494 = $tmp487.step.value;
    bool $tmp495 = $tmp487.inclusive.value;
    bool $tmp502 = $tmp494 > 0;
    if ($tmp502) goto $l500; else goto $l501;
    $l500:;
    if ($tmp495) goto $l503; else goto $l504;
    $l503:;
    if ($tmp491 <= $tmp493) goto $l496; else goto $l498;
    $l504:;
    if ($tmp491 < $tmp493) goto $l496; else goto $l498;
    $l501:;
    if ($tmp495) goto $l505; else goto $l506;
    $l505:;
    if ($tmp491 >= $tmp493) goto $l496; else goto $l498;
    $l506:;
    if ($tmp491 > $tmp493) goto $l496; else goto $l498;
    $l496:;
    {
        panda$core$MutableString$append$panda$core$String(result471, &$s508);
        panda$core$Object* $tmp509 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedType469->subtypes, i490);
        panda$core$String* $tmp510 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp509));
        panda$core$MutableString$append$panda$core$String(result471, $tmp510);
    }
    $l499:;
    if ($tmp502) goto $l512; else goto $l513;
    $l512:;
    int64_t $tmp514 = $tmp493 - i490.value;
    if ($tmp495) goto $l515; else goto $l516;
    $l515:;
    if ($tmp514 >= $tmp494) goto $l511; else goto $l498;
    $l516:;
    if ($tmp514 > $tmp494) goto $l511; else goto $l498;
    $l513:;
    int64_t $tmp518 = i490.value - $tmp493;
    if ($tmp495) goto $l519; else goto $l520;
    $l519:;
    if ($tmp518 >= -$tmp494) goto $l511; else goto $l498;
    $l520:;
    if ($tmp518 > -$tmp494) goto $l511; else goto $l498;
    $l511:;
    i490.value += $tmp494;
    goto $l496;
    $l498:;
    panda$core$MutableString$append$panda$core$String(result471, &$s522);
    panda$core$String* $tmp523 = panda$core$MutableString$convert$R$panda$core$String(result471);
    return $tmp523;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Object* $tmp524 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp524));
    panda$core$Object* $tmp526 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp527 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp526));
    panda$core$String* $tmp528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s525, $tmp527);
    panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp528, &$s529);
    return $tmp530;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces531;
    panda$core$String* previous534;
    panda$collections$Iterator* intfType$Iter536;
    org$pandalanguage$pandac$Type* intfType548;
    org$pandalanguage$pandac$ClassDecl* intf553;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC555;
    panda$collections$ListView* methods557;
    panda$core$String* name559;
    panda$core$String* t569;
    panda$core$MutableString* result583;
    panda$core$String* separator623;
    panda$collections$Iterator* m$Iter625;
    org$pandalanguage$pandac$MethodDecl* m637;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry645;
    org$pandalanguage$pandac$Type* $tmp532 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp533 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp532);
    interfaces531 = $tmp533;
    previous534 = &$s535;
    {
        ITable* $tmp537 = ((panda$collections$Iterable*) interfaces531)->$class->itable;
        while ($tmp537->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp537 = $tmp537->next;
        }
        $fn539 $tmp538 = $tmp537->methods[0];
        panda$collections$Iterator* $tmp540 = $tmp538(((panda$collections$Iterable*) interfaces531));
        intfType$Iter536 = $tmp540;
        $l541:;
        ITable* $tmp543 = intfType$Iter536->$class->itable;
        while ($tmp543->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp543 = $tmp543->next;
        }
        $fn545 $tmp544 = $tmp543->methods[0];
        panda$core$Bit $tmp546 = $tmp544(intfType$Iter536);
        panda$core$Bit $tmp547 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp546);
        if (!$tmp547.value) goto $l542;
        {
            ITable* $tmp549 = intfType$Iter536->$class->itable;
            while ($tmp549->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp549 = $tmp549->next;
            }
            $fn551 $tmp550 = $tmp549->methods[1];
            panda$core$Object* $tmp552 = $tmp550(intfType$Iter536);
            intfType548 = ((org$pandalanguage$pandac$Type*) $tmp552);
            org$pandalanguage$pandac$ClassDecl* $tmp554 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType548);
            intf553 = $tmp554;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp556 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf553);
            intfCC555 = $tmp556;
            panda$collections$ListView* $tmp558 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType548);
            methods557 = $tmp558;
            panda$core$String* $tmp561 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s560, $tmp561);
            panda$core$String* $tmp564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, &$s563);
            panda$core$String* $tmp565 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf553)->name);
            panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp564, $tmp565);
            panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp566, &$s567);
            name559 = $tmp568;
            org$pandalanguage$pandac$Type* $tmp571 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp572 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp571);
            panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s570, $tmp572);
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s574);
            ITable* $tmp576 = ((panda$collections$CollectionView*) methods557)->$class->itable;
            while ($tmp576->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp576 = $tmp576->next;
            }
            $fn578 $tmp577 = $tmp576->methods[0];
            panda$core$Int64 $tmp579 = $tmp577(((panda$collections$CollectionView*) methods557));
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp575, ((panda$core$Object*) wrap_panda$core$Int64($tmp579)));
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s581);
            t569 = $tmp582;
            panda$core$MutableString* $tmp584 = (panda$core$MutableString*) malloc(40);
            $tmp584->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp584->refCount.value = 1;
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s586, name559);
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, &$s588);
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, t569);
            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, &$s591);
            org$pandalanguage$pandac$Type* $tmp593 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp594 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp593);
            panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, $tmp594);
            panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp595, &$s596);
            panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s598, intfCC555->type);
            panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s600);
            panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, intfCC555->name);
            panda$core$String* $tmp604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp602, &$s603);
            org$pandalanguage$pandac$Type* $tmp605 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp606 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp605);
            panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, $tmp606);
            panda$core$String* $tmp609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s608);
            panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp597, $tmp609);
            panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s611, previous534);
            panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp612, &$s613);
            ITable* $tmp615 = ((panda$collections$CollectionView*) methods557)->$class->itable;
            while ($tmp615->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp615 = $tmp615->next;
            }
            $fn617 $tmp616 = $tmp615->methods[0];
            panda$core$Int64 $tmp618 = $tmp616(((panda$collections$CollectionView*) methods557));
            panda$core$String* $tmp619 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp614, ((panda$core$Object*) wrap_panda$core$Int64($tmp618)));
            panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, &$s620);
            panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp610, $tmp621);
            panda$core$MutableString$init$panda$core$String($tmp584, $tmp622);
            result583 = $tmp584;
            separator623 = &$s624;
            {
                ITable* $tmp626 = ((panda$collections$Iterable*) methods557)->$class->itable;
                while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp626 = $tmp626->next;
                }
                $fn628 $tmp627 = $tmp626->methods[0];
                panda$collections$Iterator* $tmp629 = $tmp627(((panda$collections$Iterable*) methods557));
                m$Iter625 = $tmp629;
                $l630:;
                ITable* $tmp632 = m$Iter625->$class->itable;
                while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp632 = $tmp632->next;
                }
                $fn634 $tmp633 = $tmp632->methods[0];
                panda$core$Bit $tmp635 = $tmp633(m$Iter625);
                panda$core$Bit $tmp636 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp635);
                if (!$tmp636.value) goto $l631;
                {
                    ITable* $tmp638 = m$Iter625->$class->itable;
                    while ($tmp638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp638 = $tmp638->next;
                    }
                    $fn640 $tmp639 = $tmp638->methods[1];
                    panda$core$Object* $tmp641 = $tmp639(m$Iter625);
                    m637 = ((org$pandalanguage$pandac$MethodDecl*) $tmp641);
                    panda$core$MutableString$append$panda$core$String(result583, separator623);
                    separator623 = &$s642;
                    panda$core$Bit $tmp643 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m637->annotations);
                    if ($tmp643.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result583, &$s644);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp646 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m637);
                        entry645 = $tmp646;
                        panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s647, ((panda$core$String*) entry645->second));
                        panda$core$String* $tmp650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp648, &$s649);
                        panda$core$String* $tmp651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp650, ((panda$core$String*) entry645->first));
                        panda$core$String* $tmp653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp651, &$s652);
                        panda$core$MutableString$append$panda$core$String(result583, $tmp653);
                    }
                    }
                }
                goto $l630;
                $l631:;
            }
            panda$core$MutableString$append$panda$core$String(result583, &$s654);
            (($fn655) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result583));
            panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s656, t569);
            panda$core$String* $tmp659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp657, &$s658);
            panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp659, name559);
            panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, &$s661);
            previous534 = $tmp662;
        }
        goto $l541;
        $l542:;
    }
    return previous534;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer663;
    panda$io$IndentedOutputStream* out666;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found669;
    panda$core$Int64 oldVarCount671;
    org$pandalanguage$pandac$Type* effectiveReturnType672;
    panda$core$String* resultName676;
    panda$core$MutableString* resultType680;
    panda$core$String* self_t697;
    panda$core$Range$LTpanda$core$Int64$GT $tmp705;
    panda$core$String* pType725;
    panda$collections$Array* casts751;
    panda$core$Range$LTpanda$core$Int64$GT $tmp754;
    panda$core$String* p774;
    panda$core$String* returnValue796;
    panda$core$Range$LTpanda$core$Int64$GT $tmp825;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result883;
    panda$io$MemoryOutputStream* $tmp664 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp664->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp664->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp664);
    outBuffer663 = $tmp664;
    panda$io$IndentedOutputStream* $tmp667 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp667->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp667->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp667, ((panda$io$OutputStream*) outBuffer663));
    out666 = $tmp667;
    panda$core$Object* $tmp670 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found669 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp670);
    if (((panda$core$Bit) { found669 != NULL }).value) {
    {
        return found669;
    }
    }
    oldVarCount671 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp673 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp674 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp673, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp675 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, $tmp674);
    effectiveReturnType672 = ((org$pandalanguage$pandac$Type*) $tmp675);
    panda$core$String* $tmp677 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp677, &$s678);
    resultName676 = $tmp679;
    panda$core$MutableString* $tmp681 = (panda$core$MutableString*) malloc(40);
    $tmp681->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp681->refCount.value = 1;
    panda$core$String* $tmp683 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType672);
    panda$core$MutableString$init$panda$core$String($tmp681, $tmp683);
    resultType680 = $tmp681;
    (($fn685) ((panda$io$OutputStream*) out666)->$class->vtable[16])(((panda$io$OutputStream*) out666), &$s684);
    panda$core$Bit $tmp686 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_raw->owner);
    if ($tmp686.value) {
    {
        (($fn688) ((panda$io$OutputStream*) out666)->$class->vtable[16])(((panda$io$OutputStream*) out666), &$s687);
    }
    }
    panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s689, ((panda$core$Object*) resultType680));
    panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp690, &$s691);
    panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp692, resultName676);
    panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, &$s694);
    (($fn696) ((panda$io$OutputStream*) out666)->$class->vtable[16])(((panda$io$OutputStream*) out666), $tmp695);
    panda$core$String* $tmp698 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t697 = $tmp698;
    panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s699, self_t697);
    panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s701);
    (($fn703) ((panda$io$OutputStream*) out666)->$class->vtable[16])(((panda$io$OutputStream*) out666), $tmp702);
    panda$core$MutableString$append$panda$core$String(resultType680, &$s704);
    panda$core$MutableString$append$panda$core$String(resultType680, self_t697);
    panda$core$Int64 $tmp706 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp705, ((panda$core$Int64) { 0 }), $tmp706, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp708 = $tmp705.start.value;
    panda$core$Int64 i707 = { $tmp708 };
    int64_t $tmp710 = $tmp705.end.value;
    int64_t $tmp711 = $tmp705.step.value;
    bool $tmp712 = $tmp705.inclusive.value;
    bool $tmp719 = $tmp711 > 0;
    if ($tmp719) goto $l717; else goto $l718;
    $l717:;
    if ($tmp712) goto $l720; else goto $l721;
    $l720:;
    if ($tmp708 <= $tmp710) goto $l713; else goto $l715;
    $l721:;
    if ($tmp708 < $tmp710) goto $l713; else goto $l715;
    $l718:;
    if ($tmp712) goto $l722; else goto $l723;
    $l722:;
    if ($tmp708 >= $tmp710) goto $l713; else goto $l715;
    $l723:;
    if ($tmp708 > $tmp710) goto $l713; else goto $l715;
    $l713:;
    {
        panda$core$Object* $tmp726 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i707);
        panda$core$String* $tmp727 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp726));
        pType725 = $tmp727;
        panda$core$MutableString$append$panda$core$String(resultType680, &$s728);
        panda$core$MutableString$append$panda$core$String(resultType680, pType725);
        panda$core$String* $tmp730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s729, pType725);
        panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp730, &$s731);
        panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp732, ((panda$core$Object*) wrap_panda$core$Int64(i707)));
        panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp733, &$s734);
        (($fn736) ((panda$io$OutputStream*) out666)->$class->vtable[16])(((panda$io$OutputStream*) out666), $tmp735);
    }
    $l716:;
    if ($tmp719) goto $l738; else goto $l739;
    $l738:;
    int64_t $tmp740 = $tmp710 - i707.value;
    if ($tmp712) goto $l741; else goto $l742;
    $l741:;
    if ($tmp740 >= $tmp711) goto $l737; else goto $l715;
    $l742:;
    if ($tmp740 > $tmp711) goto $l737; else goto $l715;
    $l739:;
    int64_t $tmp744 = i707.value - $tmp710;
    if ($tmp712) goto $l745; else goto $l746;
    $l745:;
    if ($tmp744 >= -$tmp711) goto $l737; else goto $l715;
    $l746:;
    if ($tmp744 > -$tmp711) goto $l737; else goto $l715;
    $l737:;
    i707.value += $tmp711;
    goto $l713;
    $l715:;
    (($fn749) ((panda$io$OutputStream*) out666)->$class->vtable[19])(((panda$io$OutputStream*) out666), &$s748);
    panda$core$MutableString$append$panda$core$String(resultType680, &$s750);
    panda$collections$Array* $tmp752 = (panda$collections$Array*) malloc(40);
    $tmp752->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp752->refCount.value = 1;
    panda$collections$Array$init($tmp752);
    casts751 = $tmp752;
    panda$core$Int64 $tmp755 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp754, ((panda$core$Int64) { 0 }), $tmp755, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp757 = $tmp754.start.value;
    panda$core$Int64 i756 = { $tmp757 };
    int64_t $tmp759 = $tmp754.end.value;
    int64_t $tmp760 = $tmp754.step.value;
    bool $tmp761 = $tmp754.inclusive.value;
    bool $tmp768 = $tmp760 > 0;
    if ($tmp768) goto $l766; else goto $l767;
    $l766:;
    if ($tmp761) goto $l769; else goto $l770;
    $l769:;
    if ($tmp757 <= $tmp759) goto $l762; else goto $l764;
    $l770:;
    if ($tmp757 < $tmp759) goto $l762; else goto $l764;
    $l767:;
    if ($tmp761) goto $l771; else goto $l772;
    $l771:;
    if ($tmp757 >= $tmp759) goto $l762; else goto $l764;
    $l772:;
    if ($tmp757 > $tmp759) goto $l762; else goto $l764;
    $l762:;
    {
        panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s775, ((panda$core$Object*) wrap_panda$core$Int64(i756)));
        panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp776, &$s777);
        p774 = $tmp778;
        panda$core$Object* $tmp779 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i756);
        panda$core$Object* $tmp780 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i756);
        panda$core$Bit $tmp781 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp779)->type, ((org$pandalanguage$pandac$Type*) $tmp780));
        if ($tmp781.value) {
        {
            panda$core$Object* $tmp782 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_effective->subtypes, i756);
            panda$core$Object* $tmp783 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i756);
            panda$core$String* $tmp784 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p774, ((org$pandalanguage$pandac$Type*) $tmp782), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp783)->type, out666);
            panda$collections$Array$add$panda$collections$Array$T(casts751, ((panda$core$Object*) $tmp784));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts751, ((panda$core$Object*) p774));
        }
        }
    }
    $l765:;
    if ($tmp768) goto $l786; else goto $l787;
    $l786:;
    int64_t $tmp788 = $tmp759 - i756.value;
    if ($tmp761) goto $l789; else goto $l790;
    $l789:;
    if ($tmp788 >= $tmp760) goto $l785; else goto $l764;
    $l790:;
    if ($tmp788 > $tmp760) goto $l785; else goto $l764;
    $l787:;
    int64_t $tmp792 = i756.value - $tmp759;
    if ($tmp761) goto $l793; else goto $l794;
    $l793:;
    if ($tmp792 >= -$tmp760) goto $l785; else goto $l764;
    $l794:;
    if ($tmp792 > -$tmp760) goto $l785; else goto $l764;
    $l785:;
    i756.value += $tmp760;
    goto $l762;
    $l764:;
    org$pandalanguage$pandac$Type* $tmp797 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp798 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp797);
    if ($tmp798.value) {
    {
        panda$core$String* $tmp799 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue796 = $tmp799;
        panda$core$String* $tmp801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s800, returnValue796);
        panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp801, &$s802);
        (($fn804) ((panda$io$OutputStream*) out666)->$class->vtable[16])(((panda$io$OutputStream*) out666), $tmp803);
    }
    }
    else {
    {
        returnValue796 = &$s805;
    }
    }
    panda$core$String* $tmp807 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s806, $tmp807);
    panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp808, &$s809);
    panda$core$String* $tmp811 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
    panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp810, $tmp811);
    panda$core$String* $tmp814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp812, &$s813);
    panda$core$String* $tmp815 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp814, $tmp815);
    panda$core$String* $tmp818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp816, &$s817);
    panda$core$String* $tmp820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s819, self_t697);
    panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp820, &$s821);
    panda$core$String* $tmp823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp818, $tmp822);
    (($fn824) ((panda$io$OutputStream*) out666)->$class->vtable[16])(((panda$io$OutputStream*) out666), $tmp823);
    panda$core$Int64 $tmp826 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp825, ((panda$core$Int64) { 0 }), $tmp826, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp828 = $tmp825.start.value;
    panda$core$Int64 i827 = { $tmp828 };
    int64_t $tmp830 = $tmp825.end.value;
    int64_t $tmp831 = $tmp825.step.value;
    bool $tmp832 = $tmp825.inclusive.value;
    bool $tmp839 = $tmp831 > 0;
    if ($tmp839) goto $l837; else goto $l838;
    $l837:;
    if ($tmp832) goto $l840; else goto $l841;
    $l840:;
    if ($tmp828 <= $tmp830) goto $l833; else goto $l835;
    $l841:;
    if ($tmp828 < $tmp830) goto $l833; else goto $l835;
    $l838:;
    if ($tmp832) goto $l842; else goto $l843;
    $l842:;
    if ($tmp828 >= $tmp830) goto $l833; else goto $l835;
    $l843:;
    if ($tmp828 > $tmp830) goto $l833; else goto $l835;
    $l833:;
    {
        panda$core$Object* $tmp846 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i827);
        panda$core$String* $tmp847 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp846)->type);
        panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s845, $tmp847);
        panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp848, &$s849);
        panda$core$Object* $tmp851 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts751, i827);
        panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, ((panda$core$String*) $tmp851));
        panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp852, &$s853);
        (($fn855) ((panda$io$OutputStream*) out666)->$class->vtable[16])(((panda$io$OutputStream*) out666), $tmp854);
    }
    $l836:;
    if ($tmp839) goto $l857; else goto $l858;
    $l857:;
    int64_t $tmp859 = $tmp830 - i827.value;
    if ($tmp832) goto $l860; else goto $l861;
    $l860:;
    if ($tmp859 >= $tmp831) goto $l856; else goto $l835;
    $l861:;
    if ($tmp859 > $tmp831) goto $l856; else goto $l835;
    $l858:;
    int64_t $tmp863 = i827.value - $tmp830;
    if ($tmp832) goto $l864; else goto $l865;
    $l864:;
    if ($tmp863 >= -$tmp831) goto $l856; else goto $l835;
    $l865:;
    if ($tmp863 > -$tmp831) goto $l856; else goto $l835;
    $l856:;
    i827.value += $tmp831;
    goto $l833;
    $l835:;
    (($fn868) ((panda$io$OutputStream*) out666)->$class->vtable[19])(((panda$io$OutputStream*) out666), &$s867);
    org$pandalanguage$pandac$Type* $tmp869 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp870 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp869);
    if ($tmp870.value) {
    {
        panda$core$String* $tmp871 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType672);
        panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp871, &$s872);
        panda$core$String* $tmp874 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, returnValue796, p_raw->returnType, effectiveReturnType672, out666);
        panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp873, $tmp874);
        returnValue796 = $tmp875;
    }
    }
    panda$core$String* $tmp877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s876, returnValue796);
    panda$core$String* $tmp879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp877, &$s878);
    (($fn880) ((panda$io$OutputStream*) out666)->$class->vtable[19])(((panda$io$OutputStream*) out666), $tmp879);
    (($fn882) ((panda$io$OutputStream*) out666)->$class->vtable[19])(((panda$io$OutputStream*) out666), &$s881);
    self->varCount = oldVarCount671;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp884 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp884->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp884->refCount.value = 1;
    panda$core$String* $tmp886 = panda$core$MutableString$convert$R$panda$core$String(resultType680);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp884, resultName676, $tmp886);
    result883 = $tmp884;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result883));
    (($fn887) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer663));
    return result883;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 oldVarCount888;
    panda$core$String* result889;
    panda$core$String* selfType895;
    org$pandalanguage$pandac$Type* actualMethodType918;
    org$pandalanguage$pandac$Type* inheritedMethodType920;
    panda$core$Range$LTpanda$core$Int64$GT $tmp922;
    panda$collections$Array* parameters972;
    panda$core$Range$LTpanda$core$Int64$GT $tmp975;
    panda$collections$Array* children1012;
    panda$core$String* unwrapped1018;
    panda$core$String* returnValue1023;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1058;
    oldVarCount888 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp891 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s890, $tmp891);
    panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp892, &$s893);
    result889 = $tmp894;
    panda$core$String* $tmp897 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s896, $tmp897);
    panda$core$String* $tmp900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp898, &$s899);
    selfType895 = $tmp900;
    (($fn902) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s901);
    panda$core$Bit $tmp903 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp903.value) {
    {
        (($fn905) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s904);
    }
    }
    panda$core$String* $tmp907 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s906, $tmp907);
    panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, &$s909);
    panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp910, result889);
    panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp911, &$s912);
    panda$core$String* $tmp914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp913, selfType895);
    panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp914, &$s915);
    (($fn917) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp916);
    org$pandalanguage$pandac$Type* $tmp919 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType918 = $tmp919;
    org$pandalanguage$pandac$Type* $tmp921 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType920 = $tmp921;
    panda$core$Int64 $tmp923 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp922, ((panda$core$Int64) { 0 }), $tmp923, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp925 = $tmp922.start.value;
    panda$core$Int64 i924 = { $tmp925 };
    int64_t $tmp927 = $tmp922.end.value;
    int64_t $tmp928 = $tmp922.step.value;
    bool $tmp929 = $tmp922.inclusive.value;
    bool $tmp936 = $tmp928 > 0;
    if ($tmp936) goto $l934; else goto $l935;
    $l934:;
    if ($tmp929) goto $l937; else goto $l938;
    $l937:;
    if ($tmp925 <= $tmp927) goto $l930; else goto $l932;
    $l938:;
    if ($tmp925 < $tmp927) goto $l930; else goto $l932;
    $l935:;
    if ($tmp929) goto $l939; else goto $l940;
    $l939:;
    if ($tmp925 >= $tmp927) goto $l930; else goto $l932;
    $l940:;
    if ($tmp925 > $tmp927) goto $l930; else goto $l932;
    $l930:;
    {
        panda$core$Object* $tmp943 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedMethodType920->subtypes, i924);
        panda$core$String* $tmp944 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp943));
        panda$core$String* $tmp945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s942, $tmp944);
        panda$core$String* $tmp947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp945, &$s946);
        panda$core$Object* $tmp948 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i924);
        panda$core$String* $tmp949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp947, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp948)->name);
        panda$core$String* $tmp951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp949, &$s950);
        (($fn952) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp951);
    }
    $l933:;
    if ($tmp936) goto $l954; else goto $l955;
    $l954:;
    int64_t $tmp956 = $tmp927 - i924.value;
    if ($tmp929) goto $l957; else goto $l958;
    $l957:;
    if ($tmp956 >= $tmp928) goto $l953; else goto $l932;
    $l958:;
    if ($tmp956 > $tmp928) goto $l953; else goto $l932;
    $l955:;
    int64_t $tmp960 = i924.value - $tmp927;
    if ($tmp929) goto $l961; else goto $l962;
    $l961:;
    if ($tmp960 >= -$tmp928) goto $l953; else goto $l932;
    $l962:;
    if ($tmp960 > -$tmp928) goto $l953; else goto $l932;
    $l953:;
    i924.value += $tmp928;
    goto $l930;
    $l932:;
    (($fn965) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s964);
    panda$core$Int64 $tmp966 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp966;
    panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s967, selfType895);
    panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, &$s969);
    (($fn971) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp970);
    panda$collections$Array* $tmp973 = (panda$collections$Array*) malloc(40);
    $tmp973->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp973->refCount.value = 1;
    panda$collections$Array$init($tmp973);
    parameters972 = $tmp973;
    panda$core$Int64 $tmp976 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp975, ((panda$core$Int64) { 0 }), $tmp976, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp978 = $tmp975.start.value;
    panda$core$Int64 i977 = { $tmp978 };
    int64_t $tmp980 = $tmp975.end.value;
    int64_t $tmp981 = $tmp975.step.value;
    bool $tmp982 = $tmp975.inclusive.value;
    bool $tmp989 = $tmp981 > 0;
    if ($tmp989) goto $l987; else goto $l988;
    $l987:;
    if ($tmp982) goto $l990; else goto $l991;
    $l990:;
    if ($tmp978 <= $tmp980) goto $l983; else goto $l985;
    $l991:;
    if ($tmp978 < $tmp980) goto $l983; else goto $l985;
    $l988:;
    if ($tmp982) goto $l992; else goto $l993;
    $l992:;
    if ($tmp978 >= $tmp980) goto $l983; else goto $l985;
    $l993:;
    if ($tmp978 > $tmp980) goto $l983; else goto $l985;
    $l983:;
    {
        panda$core$Object* $tmp996 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i977);
        panda$core$String* $tmp997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s995, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp996)->name);
        panda$core$Object* $tmp998 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inheritedMethodType920->subtypes, i977);
        panda$core$Object* $tmp999 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType918->subtypes, i977);
        panda$core$String* $tmp1000 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp997, ((org$pandalanguage$pandac$Type*) $tmp998), ((org$pandalanguage$pandac$Type*) $tmp999), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters972, ((panda$core$Object*) $tmp1000));
    }
    $l986:;
    if ($tmp989) goto $l1002; else goto $l1003;
    $l1002:;
    int64_t $tmp1004 = $tmp980 - i977.value;
    if ($tmp982) goto $l1005; else goto $l1006;
    $l1005:;
    if ($tmp1004 >= $tmp981) goto $l1001; else goto $l985;
    $l1006:;
    if ($tmp1004 > $tmp981) goto $l1001; else goto $l985;
    $l1003:;
    int64_t $tmp1008 = i977.value - $tmp980;
    if ($tmp982) goto $l1009; else goto $l1010;
    $l1009:;
    if ($tmp1008 >= -$tmp981) goto $l1001; else goto $l985;
    $l1010:;
    if ($tmp1008 > -$tmp981) goto $l1001; else goto $l985;
    $l1001:;
    i977.value += $tmp981;
    goto $l983;
    $l985:;
    panda$collections$Array* $tmp1013 = (panda$collections$Array*) malloc(40);
    $tmp1013->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1013->refCount.value = 1;
    panda$collections$Array$init($tmp1013);
    children1012 = $tmp1013;
    org$pandalanguage$pandac$IRNode* $tmp1015 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1015->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1015->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp1017 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1015, ((panda$core$Int64) { 1025 }), ((panda$core$Int64) { -1 }), $tmp1017);
    panda$collections$Array$add$panda$collections$Array$T(children1012, ((panda$core$Object*) $tmp1015));
    org$pandalanguage$pandac$IRNode* $tmp1019 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1019->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1019->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp1021 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1019, ((panda$core$Int64) { 1009 }), ((panda$core$Int64) { -1 }), $tmp1021, ((panda$collections$ListView*) children1012));
    panda$core$String* $tmp1022 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1019, p_out);
    unwrapped1018 = $tmp1022;
    org$pandalanguage$pandac$Type* $tmp1024 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1025 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1024);
    if ($tmp1025.value) {
    {
        panda$core$String* $tmp1026 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue1023 = $tmp1026;
        panda$core$String* $tmp1028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1027, returnValue1023);
        panda$core$String* $tmp1030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1028, &$s1029);
        (($fn1031) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1030);
        panda$core$String* $tmp1033 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1032, $tmp1033);
        panda$core$String* $tmp1036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1034, &$s1035);
        panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1036, returnValue1023);
        panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1037, &$s1038);
        returnValue1023 = $tmp1039;
    }
    }
    else {
    {
        returnValue1023 = &$s1040;
    }
    }
    panda$core$String* $tmp1042 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1041, $tmp1042);
    panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, &$s1044);
    panda$core$String* $tmp1046 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp1047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1045, $tmp1046);
    panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1048);
    panda$core$String* $tmp1050 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, $tmp1050);
    panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1052);
    panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1053, unwrapped1018);
    panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1054, &$s1055);
    (($fn1057) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1056);
    panda$core$Int64 $tmp1059 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1058, ((panda$core$Int64) { 0 }), $tmp1059, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1061 = $tmp1058.start.value;
    panda$core$Int64 i1060 = { $tmp1061 };
    int64_t $tmp1063 = $tmp1058.end.value;
    int64_t $tmp1064 = $tmp1058.step.value;
    bool $tmp1065 = $tmp1058.inclusive.value;
    bool $tmp1072 = $tmp1064 > 0;
    if ($tmp1072) goto $l1070; else goto $l1071;
    $l1070:;
    if ($tmp1065) goto $l1073; else goto $l1074;
    $l1073:;
    if ($tmp1061 <= $tmp1063) goto $l1066; else goto $l1068;
    $l1074:;
    if ($tmp1061 < $tmp1063) goto $l1066; else goto $l1068;
    $l1071:;
    if ($tmp1065) goto $l1075; else goto $l1076;
    $l1075:;
    if ($tmp1061 >= $tmp1063) goto $l1066; else goto $l1068;
    $l1076:;
    if ($tmp1061 > $tmp1063) goto $l1066; else goto $l1068;
    $l1066:;
    {
        panda$core$Object* $tmp1079 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType918->subtypes, i1060);
        panda$core$String* $tmp1080 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1079));
        panda$core$String* $tmp1081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1078, $tmp1080);
        panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1081, &$s1082);
        panda$core$Object* $tmp1084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters972, i1060);
        panda$core$String* $tmp1085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, ((panda$core$String*) $tmp1084));
        panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1085, &$s1086);
        (($fn1088) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1087);
    }
    $l1069:;
    if ($tmp1072) goto $l1090; else goto $l1091;
    $l1090:;
    int64_t $tmp1092 = $tmp1063 - i1060.value;
    if ($tmp1065) goto $l1093; else goto $l1094;
    $l1093:;
    if ($tmp1092 >= $tmp1064) goto $l1089; else goto $l1068;
    $l1094:;
    if ($tmp1092 > $tmp1064) goto $l1089; else goto $l1068;
    $l1091:;
    int64_t $tmp1096 = i1060.value - $tmp1063;
    if ($tmp1065) goto $l1097; else goto $l1098;
    $l1097:;
    if ($tmp1096 >= -$tmp1064) goto $l1089; else goto $l1068;
    $l1098:;
    if ($tmp1096 > -$tmp1064) goto $l1089; else goto $l1068;
    $l1089:;
    i1060.value += $tmp1064;
    goto $l1066;
    $l1068:;
    (($fn1101) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1100);
    panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1102, returnValue1023);
    panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1103, &$s1104);
    (($fn1106) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1105);
    panda$core$Int64 $tmp1107 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1107;
    (($fn1109) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1108);
    self->varCount = oldVarCount888;
    return result889;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1110;
    panda$core$String* previous1113;
    panda$collections$Iterator* intfType$Iter1115;
    org$pandalanguage$pandac$Type* intfType1127;
    org$pandalanguage$pandac$ClassDecl* intf1132;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1134;
    panda$collections$ListView* methods1136;
    panda$core$String* name1138;
    panda$core$String* t1148;
    panda$core$MutableString* result1162;
    panda$core$String* separator1202;
    panda$collections$Iterator* m$Iter1204;
    org$pandalanguage$pandac$MethodDecl* m1216;
    panda$core$String* shim1224;
    org$pandalanguage$pandac$Type* $tmp1111 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1112 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1111);
    interfaces1110 = $tmp1112;
    previous1113 = &$s1114;
    {
        ITable* $tmp1116 = ((panda$collections$Iterable*) interfaces1110)->$class->itable;
        while ($tmp1116->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1116 = $tmp1116->next;
        }
        $fn1118 $tmp1117 = $tmp1116->methods[0];
        panda$collections$Iterator* $tmp1119 = $tmp1117(((panda$collections$Iterable*) interfaces1110));
        intfType$Iter1115 = $tmp1119;
        $l1120:;
        ITable* $tmp1122 = intfType$Iter1115->$class->itable;
        while ($tmp1122->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1122 = $tmp1122->next;
        }
        $fn1124 $tmp1123 = $tmp1122->methods[0];
        panda$core$Bit $tmp1125 = $tmp1123(intfType$Iter1115);
        panda$core$Bit $tmp1126 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1125);
        if (!$tmp1126.value) goto $l1121;
        {
            ITable* $tmp1128 = intfType$Iter1115->$class->itable;
            while ($tmp1128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1128 = $tmp1128->next;
            }
            $fn1130 $tmp1129 = $tmp1128->methods[1];
            panda$core$Object* $tmp1131 = $tmp1129(intfType$Iter1115);
            intfType1127 = ((org$pandalanguage$pandac$Type*) $tmp1131);
            org$pandalanguage$pandac$ClassDecl* $tmp1133 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1127);
            intf1132 = $tmp1133;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1135 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1132);
            intfCC1134 = $tmp1135;
            panda$collections$ListView* $tmp1137 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1127);
            methods1136 = $tmp1137;
            panda$core$String* $tmp1140 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1139, $tmp1140);
            panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1141, &$s1142);
            panda$core$String* $tmp1144 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1132)->name);
            panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1143, $tmp1144);
            panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1145, &$s1146);
            name1138 = $tmp1147;
            org$pandalanguage$pandac$Type* $tmp1150 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1151 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1150);
            panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1149, $tmp1151);
            panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, &$s1153);
            ITable* $tmp1155 = ((panda$collections$CollectionView*) methods1136)->$class->itable;
            while ($tmp1155->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1155 = $tmp1155->next;
            }
            $fn1157 $tmp1156 = $tmp1155->methods[0];
            panda$core$Int64 $tmp1158 = $tmp1156(((panda$collections$CollectionView*) methods1136));
            panda$core$String* $tmp1159 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1154, ((panda$core$Object*) wrap_panda$core$Int64($tmp1158)));
            panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1159, &$s1160);
            t1148 = $tmp1161;
            panda$core$MutableString* $tmp1163 = (panda$core$MutableString*) malloc(40);
            $tmp1163->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1163->refCount.value = 1;
            panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1165, name1138);
            panda$core$String* $tmp1168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1166, &$s1167);
            panda$core$String* $tmp1169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1168, t1148);
            panda$core$String* $tmp1171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1169, &$s1170);
            org$pandalanguage$pandac$Type* $tmp1172 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1173 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1172);
            panda$core$String* $tmp1174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1171, $tmp1173);
            panda$core$String* $tmp1176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1174, &$s1175);
            panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1177, intfCC1134->type);
            panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1178, &$s1179);
            panda$core$String* $tmp1181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1180, intfCC1134->name);
            panda$core$String* $tmp1183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1181, &$s1182);
            org$pandalanguage$pandac$Type* $tmp1184 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1185 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1184);
            panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1183, $tmp1185);
            panda$core$String* $tmp1188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1186, &$s1187);
            panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1176, $tmp1188);
            panda$core$String* $tmp1191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1190, previous1113);
            panda$core$String* $tmp1193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1191, &$s1192);
            ITable* $tmp1194 = ((panda$collections$CollectionView*) methods1136)->$class->itable;
            while ($tmp1194->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1194 = $tmp1194->next;
            }
            $fn1196 $tmp1195 = $tmp1194->methods[0];
            panda$core$Int64 $tmp1197 = $tmp1195(((panda$collections$CollectionView*) methods1136));
            panda$core$String* $tmp1198 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1193, ((panda$core$Object*) wrap_panda$core$Int64($tmp1197)));
            panda$core$String* $tmp1200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1198, &$s1199);
            panda$core$String* $tmp1201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1189, $tmp1200);
            panda$core$MutableString$init$panda$core$String($tmp1163, $tmp1201);
            result1162 = $tmp1163;
            separator1202 = &$s1203;
            {
                ITable* $tmp1205 = ((panda$collections$Iterable*) methods1136)->$class->itable;
                while ($tmp1205->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1205 = $tmp1205->next;
                }
                $fn1207 $tmp1206 = $tmp1205->methods[0];
                panda$collections$Iterator* $tmp1208 = $tmp1206(((panda$collections$Iterable*) methods1136));
                m$Iter1204 = $tmp1208;
                $l1209:;
                ITable* $tmp1211 = m$Iter1204->$class->itable;
                while ($tmp1211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1211 = $tmp1211->next;
                }
                $fn1213 $tmp1212 = $tmp1211->methods[0];
                panda$core$Bit $tmp1214 = $tmp1212(m$Iter1204);
                panda$core$Bit $tmp1215 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1214);
                if (!$tmp1215.value) goto $l1210;
                {
                    ITable* $tmp1217 = m$Iter1204->$class->itable;
                    while ($tmp1217->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1217 = $tmp1217->next;
                    }
                    $fn1219 $tmp1218 = $tmp1217->methods[1];
                    panda$core$Object* $tmp1220 = $tmp1218(m$Iter1204);
                    m1216 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1220);
                    panda$core$MutableString$append$panda$core$String(result1162, separator1202);
                    separator1202 = &$s1221;
                    panda$core$Bit $tmp1222 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1216->annotations);
                    if ($tmp1222.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1162, &$s1223);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1225 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1216, self->wrapperShims);
                        shim1224 = $tmp1225;
                        panda$core$String* $tmp1227 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1216);
                        panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1226, $tmp1227);
                        panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1229);
                        panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1230, shim1224);
                        panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1231, &$s1232);
                        panda$core$MutableString$append$panda$core$String(result1162, $tmp1233);
                    }
                    }
                }
                goto $l1209;
                $l1210:;
            }
            panda$core$MutableString$append$panda$core$String(result1162, &$s1234);
            (($fn1235) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result1162));
            panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1236, t1148);
            panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1237, &$s1238);
            panda$core$String* $tmp1240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1239, name1138);
            panda$core$String* $tmp1242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1240, &$s1241);
            previous1113 = $tmp1242;
        }
        goto $l1120;
        $l1121:;
    }
    return previous1113;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1245;
    panda$core$Bit $tmp1243 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1244 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1243);
    if ($tmp1244.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1248 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1247 = $tmp1248.value;
    if (!$tmp1247) goto $l1249;
    panda$core$Bit $tmp1250 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1247 = $tmp1250.value;
    $l1249:;
    panda$core$Bit $tmp1251 = { $tmp1247 };
    bool $tmp1246 = $tmp1251.value;
    if (!$tmp1246) goto $l1252;
    org$pandalanguage$pandac$ClassDecl* $tmp1253 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1254 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1253);
    $tmp1246 = $tmp1254.value;
    $l1252:;
    panda$core$Bit $tmp1255 = { $tmp1246 };
    result1245 = $tmp1255;
    return result1245;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1256;
    org$pandalanguage$pandac$Type* declared1257;
    org$pandalanguage$pandac$Type* inherited1260;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1263;
    panda$core$MutableString* resultType1268;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1277;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1258 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1259 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1258);
    declared1257 = $tmp1259;
    org$pandalanguage$pandac$Type* $tmp1261 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1260 = $tmp1261;
    panda$core$Bit $tmp1262 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1257, inherited1260);
    if ($tmp1262.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1265 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1264, ((panda$io$OutputStream*) self->shims));
        shim1263 = $tmp1265;
        resultName1256 = shim1263->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1266 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1256 = $tmp1266;
    }
    }
    panda$core$Bit $tmp1267 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1267.value) {
    {
        panda$core$MutableString* $tmp1269 = (panda$core$MutableString*) malloc(40);
        $tmp1269->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1269->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1269, &$s1271);
        resultType1268 = $tmp1269;
        panda$core$Int64 $tmp1272 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inherited1260->subtypes);
        panda$core$Int64 $tmp1273 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1272, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1274 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inherited1260->subtypes, $tmp1273);
        panda$core$String* $tmp1275 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1274));
        panda$core$MutableString$append$panda$core$String(resultType1268, $tmp1275);
        panda$core$MutableString$append$panda$core$String(resultType1268, &$s1276);
        panda$core$Int64 $tmp1278 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(inherited1260->subtypes);
        panda$core$Int64 $tmp1279 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1278, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1277, ((panda$core$Int64) { 0 }), $tmp1279, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp1281 = $tmp1277.start.value;
        panda$core$Int64 i1280 = { $tmp1281 };
        int64_t $tmp1283 = $tmp1277.end.value;
        int64_t $tmp1284 = $tmp1277.step.value;
        bool $tmp1285 = $tmp1277.inclusive.value;
        bool $tmp1292 = $tmp1284 > 0;
        if ($tmp1292) goto $l1290; else goto $l1291;
        $l1290:;
        if ($tmp1285) goto $l1293; else goto $l1294;
        $l1293:;
        if ($tmp1281 <= $tmp1283) goto $l1286; else goto $l1288;
        $l1294:;
        if ($tmp1281 < $tmp1283) goto $l1286; else goto $l1288;
        $l1291:;
        if ($tmp1285) goto $l1295; else goto $l1296;
        $l1295:;
        if ($tmp1281 >= $tmp1283) goto $l1286; else goto $l1288;
        $l1296:;
        if ($tmp1281 > $tmp1283) goto $l1286; else goto $l1288;
        $l1286:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1268, &$s1298);
            panda$core$Object* $tmp1299 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(inherited1260->subtypes, i1280);
            panda$core$String* $tmp1300 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1299));
            panda$core$MutableString$append$panda$core$String(resultType1268, $tmp1300);
        }
        $l1289:;
        if ($tmp1292) goto $l1302; else goto $l1303;
        $l1302:;
        int64_t $tmp1304 = $tmp1283 - i1280.value;
        if ($tmp1285) goto $l1305; else goto $l1306;
        $l1305:;
        if ($tmp1304 >= $tmp1284) goto $l1301; else goto $l1288;
        $l1306:;
        if ($tmp1304 > $tmp1284) goto $l1301; else goto $l1288;
        $l1303:;
        int64_t $tmp1308 = i1280.value - $tmp1283;
        if ($tmp1285) goto $l1309; else goto $l1310;
        $l1309:;
        if ($tmp1308 >= -$tmp1284) goto $l1301; else goto $l1288;
        $l1310:;
        if ($tmp1308 > -$tmp1284) goto $l1301; else goto $l1288;
        $l1301:;
        i1280.value += $tmp1284;
        goto $l1286;
        $l1288:;
        panda$core$MutableString$append$panda$core$String(resultType1268, &$s1312);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1313 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1313->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1313->refCount.value = 1;
        panda$core$String* $tmp1315 = panda$core$MutableString$convert$R$panda$core$String(resultType1268);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1313, ((panda$core$Object*) resultName1256), ((panda$core$Object*) $tmp1315));
        return $tmp1313;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1316 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1316->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1316->refCount.value = 1;
    panda$core$String* $tmp1318 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1260);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1316, ((panda$core$Object*) resultName1256), ((panda$core$Object*) $tmp1318));
    return $tmp1316;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1319;
    panda$core$String* type1321;
    panda$collections$ListView* vtable1340;
    panda$core$String* superPtr1364;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1365;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1376;
    panda$core$MutableString* code1380;
    panda$core$String* separator1423;
    panda$collections$Iterator* m$Iter1425;
    org$pandalanguage$pandac$MethodDecl* m1437;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1444;
    panda$core$Object* $tmp1320 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1319 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1320);
    if (((panda$core$Bit) { result1319 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1322 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1322->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1322->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1325 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1326 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1325)->name);
            panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1324, $tmp1326);
            panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1327, &$s1328);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1322, $tmp1329, &$s1330);
            result1319 = $tmp1322;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1319));
            panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1331, result1319->name);
            panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1332, &$s1333);
            panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1334, result1319->type);
            panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, &$s1336);
            (($fn1338) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1337);
            panda$core$Object* $tmp1339 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1339);
        }
        }
        panda$collections$ListView* $tmp1341 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1340 = $tmp1341;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1342 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1342->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1342->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1345 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1346 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1345)->name);
        panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1344, $tmp1346);
        panda$core$String* $tmp1349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1347, &$s1348);
        panda$core$String* $tmp1352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1350, &$s1351);
        panda$core$String* $tmp1354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1352, &$s1353);
        ITable* $tmp1356 = ((panda$collections$CollectionView*) vtable1340)->$class->itable;
        while ($tmp1356->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1356 = $tmp1356->next;
        }
        $fn1358 $tmp1357 = $tmp1356->methods[0];
        panda$core$Int64 $tmp1359 = $tmp1357(((panda$collections$CollectionView*) vtable1340));
        panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1355, ((panda$core$Object*) wrap_panda$core$Int64($tmp1359)));
        panda$core$String* $tmp1362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, &$s1361);
        panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1354, $tmp1362);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1342, $tmp1349, $tmp1363);
        result1319 = $tmp1342;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1319));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1366 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1367 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1366);
            superCC1365 = $tmp1367;
            panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1368, superCC1365->type);
            panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1369, &$s1370);
            panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1371, superCC1365->name);
            panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1372, &$s1373);
            superPtr1364 = $tmp1374;
        }
        }
        else {
        {
            superPtr1364 = &$s1375;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1377 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1378 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1377);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1379 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1378);
        clConstant1376 = $tmp1379;
        panda$core$MutableString* $tmp1381 = (panda$core$MutableString*) malloc(40);
        $tmp1381->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1381->refCount.value = 1;
        panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1383, result1319->name);
        panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, &$s1385);
        panda$core$MutableString$init$panda$core$String($tmp1381, $tmp1386);
        code1380 = $tmp1381;
        panda$core$Bit $tmp1387 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1387.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1380, &$s1388);
        }
        }
        panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1389, result1319->type);
        panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1390, &$s1391);
        panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1393, clConstant1376->type);
        panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, &$s1395);
        panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, clConstant1376->name);
        panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1397, &$s1398);
        panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1392, $tmp1399);
        panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1401, &$s1402);
        panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1403, &$s1404);
        panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1405, superPtr1364);
        panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1406, &$s1407);
        panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1400, $tmp1408);
        panda$core$String* $tmp1411 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1410, $tmp1411);
        panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1412, &$s1413);
        ITable* $tmp1415 = ((panda$collections$CollectionView*) vtable1340)->$class->itable;
        while ($tmp1415->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1415 = $tmp1415->next;
        }
        $fn1417 $tmp1416 = $tmp1415->methods[0];
        panda$core$Int64 $tmp1418 = $tmp1416(((panda$collections$CollectionView*) vtable1340));
        panda$core$String* $tmp1419 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1414, ((panda$core$Object*) wrap_panda$core$Int64($tmp1418)));
        panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1419, &$s1420);
        panda$core$String* $tmp1422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1409, $tmp1421);
        panda$core$MutableString$append$panda$core$String(code1380, $tmp1422);
        separator1423 = &$s1424;
        {
            ITable* $tmp1426 = ((panda$collections$Iterable*) vtable1340)->$class->itable;
            while ($tmp1426->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1426 = $tmp1426->next;
            }
            $fn1428 $tmp1427 = $tmp1426->methods[0];
            panda$collections$Iterator* $tmp1429 = $tmp1427(((panda$collections$Iterable*) vtable1340));
            m$Iter1425 = $tmp1429;
            $l1430:;
            ITable* $tmp1432 = m$Iter1425->$class->itable;
            while ($tmp1432->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1432 = $tmp1432->next;
            }
            $fn1434 $tmp1433 = $tmp1432->methods[0];
            panda$core$Bit $tmp1435 = $tmp1433(m$Iter1425);
            panda$core$Bit $tmp1436 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1435);
            if (!$tmp1436.value) goto $l1431;
            {
                ITable* $tmp1438 = m$Iter1425->$class->itable;
                while ($tmp1438->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1438 = $tmp1438->next;
                }
                $fn1440 $tmp1439 = $tmp1438->methods[1];
                panda$core$Object* $tmp1441 = $tmp1439(m$Iter1425);
                m1437 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1441);
                panda$core$MutableString$append$panda$core$String(code1380, separator1423);
                panda$core$Bit $tmp1442 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1437->annotations);
                if ($tmp1442.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1380, &$s1443);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1445 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1437);
                    entry1444 = $tmp1445;
                    panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1446, ((panda$core$String*) entry1444->second));
                    panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1447, &$s1448);
                    panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, ((panda$core$String*) entry1444->first));
                    panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, &$s1451);
                    panda$core$MutableString$append$panda$core$String(code1380, $tmp1452);
                }
                }
                separator1423 = &$s1453;
            }
            goto $l1430;
            $l1431:;
        }
        panda$core$MutableString$append$panda$core$String(code1380, &$s1454);
        (($fn1455) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1380));
    }
    }
    return result1319;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1456;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1462;
    panda$core$String* type1465;
    org$pandalanguage$pandac$ClassDecl* value1477;
    panda$collections$ListView* valueVTable1480;
    panda$collections$ListView* vtable1503;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1505;
    panda$core$String* superCast1508;
    panda$core$String* itable1516;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1518;
    panda$core$MutableString* code1522;
    panda$core$String* separator1569;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1571;
    org$pandalanguage$pandac$MethodDecl* m1594;
    panda$core$String* methodName1599;
    panda$core$String* $tmp1458 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1457, $tmp1458);
    panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1459, &$s1460);
    name1456 = $tmp1461;
    panda$core$Object* $tmp1463 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1456));
    result1462 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1463);
    if (((panda$core$Bit) { result1462 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1464 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1464);
            type1465 = &$s1466;
            panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1467, name1456);
            panda$core$String* $tmp1470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, &$s1469);
            panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1470, type1465);
            panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1471, &$s1472);
            (($fn1474) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1473);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1475 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1475->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1475->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1475, name1456, type1465);
            result1462 = $tmp1475;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1478 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1479 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1478);
            value1477 = $tmp1479;
            panda$collections$ListView* $tmp1481 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1477);
            valueVTable1480 = $tmp1481;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1482 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1482->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1482->refCount.value = 1;
            panda$core$String* $tmp1485 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1484, $tmp1485);
            panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1486, &$s1487);
            panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1489, &$s1490);
            panda$core$String* $tmp1493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1491, &$s1492);
            ITable* $tmp1495 = ((panda$collections$CollectionView*) valueVTable1480)->$class->itable;
            while ($tmp1495->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1495 = $tmp1495->next;
            }
            $fn1497 $tmp1496 = $tmp1495->methods[0];
            panda$core$Int64 $tmp1498 = $tmp1496(((panda$collections$CollectionView*) valueVTable1480));
            panda$core$String* $tmp1499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1494, ((panda$core$Object*) wrap_panda$core$Int64($tmp1498)));
            panda$core$String* $tmp1501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1499, &$s1500);
            panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1493, $tmp1501);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1482, $tmp1488, $tmp1502);
            result1462 = $tmp1482;
            panda$collections$ListView* $tmp1504 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1503 = $tmp1504;
            org$pandalanguage$pandac$ClassDecl* $tmp1506 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1507 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1506);
            superCC1505 = $tmp1507;
            panda$core$String* $tmp1510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1509, superCC1505->type);
            panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, &$s1511);
            panda$core$String* $tmp1513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1512, superCC1505->name);
            panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1513, &$s1514);
            superCast1508 = $tmp1515;
            panda$core$String* $tmp1517 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1516 = $tmp1517;
            org$pandalanguage$pandac$Type* $tmp1519 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1520 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1519);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1521 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1520);
            clConstant1518 = $tmp1521;
            panda$core$MutableString* $tmp1523 = (panda$core$MutableString*) malloc(40);
            $tmp1523->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1523->refCount.value = 1;
            panda$core$String* $tmp1526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1525, result1462->name);
            panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1526, &$s1527);
            panda$core$MutableString$init$panda$core$String($tmp1523, $tmp1528);
            code1522 = $tmp1523;
            panda$core$Bit $tmp1529 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1529.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1522, &$s1530);
            }
            }
            panda$core$String* $tmp1532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1531, result1462->type);
            panda$core$String* $tmp1534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1532, &$s1533);
            panda$core$String* $tmp1536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1535, clConstant1518->type);
            panda$core$String* $tmp1538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1536, &$s1537);
            panda$core$String* $tmp1539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1538, clConstant1518->name);
            panda$core$String* $tmp1541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1539, &$s1540);
            panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1534, $tmp1541);
            panda$core$String* $tmp1545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1543, &$s1544);
            panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1545, &$s1546);
            org$pandalanguage$pandac$Type* $tmp1548 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1549 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1548);
            panda$core$String* $tmp1550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1547, $tmp1549);
            panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1550, &$s1551);
            panda$core$String* $tmp1553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1552, superCast1508);
            panda$core$String* $tmp1555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1553, &$s1554);
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1542, $tmp1555);
            panda$core$String* $tmp1558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1557, itable1516);
            panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1558, &$s1559);
            ITable* $tmp1561 = ((panda$collections$CollectionView*) valueVTable1480)->$class->itable;
            while ($tmp1561->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1561 = $tmp1561->next;
            }
            $fn1563 $tmp1562 = $tmp1561->methods[0];
            panda$core$Int64 $tmp1564 = $tmp1562(((panda$collections$CollectionView*) valueVTable1480));
            panda$core$String* $tmp1565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1560, ((panda$core$Object*) wrap_panda$core$Int64($tmp1564)));
            panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1565, &$s1566);
            panda$core$String* $tmp1568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1556, $tmp1567);
            panda$core$MutableString$append$panda$core$String(code1522, $tmp1568);
            separator1569 = &$s1570;
            ITable* $tmp1572 = ((panda$collections$CollectionView*) valueVTable1480)->$class->itable;
            while ($tmp1572->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1572 = $tmp1572->next;
            }
            $fn1574 $tmp1573 = $tmp1572->methods[0];
            panda$core$Int64 $tmp1575 = $tmp1573(((panda$collections$CollectionView*) valueVTable1480));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1571, ((panda$core$Int64) { 0 }), $tmp1575, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1577 = $tmp1571.start.value;
            panda$core$Int64 i1576 = { $tmp1577 };
            int64_t $tmp1579 = $tmp1571.end.value;
            int64_t $tmp1580 = $tmp1571.step.value;
            bool $tmp1581 = $tmp1571.inclusive.value;
            bool $tmp1588 = $tmp1580 > 0;
            if ($tmp1588) goto $l1586; else goto $l1587;
            $l1586:;
            if ($tmp1581) goto $l1589; else goto $l1590;
            $l1589:;
            if ($tmp1577 <= $tmp1579) goto $l1582; else goto $l1584;
            $l1590:;
            if ($tmp1577 < $tmp1579) goto $l1582; else goto $l1584;
            $l1587:;
            if ($tmp1581) goto $l1591; else goto $l1592;
            $l1591:;
            if ($tmp1577 >= $tmp1579) goto $l1582; else goto $l1584;
            $l1592:;
            if ($tmp1577 > $tmp1579) goto $l1582; else goto $l1584;
            $l1582:;
            {
                ITable* $tmp1595 = vtable1503->$class->itable;
                while ($tmp1595->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1595 = $tmp1595->next;
                }
                $fn1597 $tmp1596 = $tmp1595->methods[0];
                panda$core$Object* $tmp1598 = $tmp1596(vtable1503, i1576);
                m1594 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1598);
                if (((panda$core$Bit) { ((panda$core$Object*) m1594->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1600 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1594, self->wrapperShims);
                    methodName1599 = $tmp1600;
                }
                }
                else {
                {
                    panda$core$String* $tmp1601 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1594);
                    methodName1599 = $tmp1601;
                    if (m1594->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1594);
                    }
                    }
                }
                }
                panda$core$String* $tmp1603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1602, separator1569);
                panda$core$String* $tmp1605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, &$s1604);
                panda$core$String* $tmp1606 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1594);
                panda$core$String* $tmp1607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1605, $tmp1606);
                panda$core$String* $tmp1609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1607, &$s1608);
                panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1609, methodName1599);
                panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1610, &$s1611);
                panda$core$MutableString$append$panda$core$String(code1522, $tmp1612);
                separator1569 = &$s1613;
            }
            $l1585:;
            if ($tmp1588) goto $l1615; else goto $l1616;
            $l1615:;
            int64_t $tmp1617 = $tmp1579 - i1576.value;
            if ($tmp1581) goto $l1618; else goto $l1619;
            $l1618:;
            if ($tmp1617 >= $tmp1580) goto $l1614; else goto $l1584;
            $l1619:;
            if ($tmp1617 > $tmp1580) goto $l1614; else goto $l1584;
            $l1616:;
            int64_t $tmp1621 = i1576.value - $tmp1579;
            if ($tmp1581) goto $l1622; else goto $l1623;
            $l1622:;
            if ($tmp1621 >= -$tmp1580) goto $l1614; else goto $l1584;
            $l1623:;
            if ($tmp1621 > -$tmp1580) goto $l1614; else goto $l1584;
            $l1614:;
            i1576.value += $tmp1580;
            goto $l1582;
            $l1584:;
            panda$core$MutableString$append$panda$core$String(code1522, &$s1625);
            (($fn1626) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1522));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1456), ((panda$core$Object*) result1462));
    }
    }
    return result1462;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1629 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1627, &$s1628);
    panda$core$String* $tmp1632 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1629, &$s1630, &$s1631);
    panda$core$String* $tmp1635 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1632, &$s1633, &$s1634);
    panda$core$String* $tmp1638 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1635, &$s1636, &$s1637);
    panda$core$String* $tmp1641 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1638, &$s1639, &$s1640);
    panda$core$String* $tmp1644 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1641, &$s1642, &$s1643);
    return $tmp1644;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1648;
    panda$core$String* result1686;
    panda$core$Bit $tmp1645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1645.value) {
    {
        panda$core$Int64 $tmp1646 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1647 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1646, ((panda$core$Int64) { 0 }));
        if ($tmp1647.value) {
        {
            panda$core$Int64 $tmp1649 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1648, ((panda$core$Int64) { 0 }), $tmp1649, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1651 = $tmp1648.start.value;
            panda$core$Int64 i1650 = { $tmp1651 };
            int64_t $tmp1653 = $tmp1648.end.value;
            int64_t $tmp1654 = $tmp1648.step.value;
            bool $tmp1655 = $tmp1648.inclusive.value;
            bool $tmp1662 = $tmp1654 > 0;
            if ($tmp1662) goto $l1660; else goto $l1661;
            $l1660:;
            if ($tmp1655) goto $l1663; else goto $l1664;
            $l1663:;
            if ($tmp1651 <= $tmp1653) goto $l1656; else goto $l1658;
            $l1664:;
            if ($tmp1651 < $tmp1653) goto $l1656; else goto $l1658;
            $l1661:;
            if ($tmp1655) goto $l1665; else goto $l1666;
            $l1665:;
            if ($tmp1651 >= $tmp1653) goto $l1656; else goto $l1658;
            $l1666:;
            if ($tmp1651 > $tmp1653) goto $l1656; else goto $l1658;
            $l1656:;
            {
                panda$core$Object* $tmp1668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1650);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1668)->name) }).value) {
                {
                    panda$core$Object* $tmp1669 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1670 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1669)->argRefs, i1650);
                    return ((panda$core$String*) $tmp1670);
                }
                }
            }
            $l1659:;
            if ($tmp1662) goto $l1672; else goto $l1673;
            $l1672:;
            int64_t $tmp1674 = $tmp1653 - i1650.value;
            if ($tmp1655) goto $l1675; else goto $l1676;
            $l1675:;
            if ($tmp1674 >= $tmp1654) goto $l1671; else goto $l1658;
            $l1676:;
            if ($tmp1674 > $tmp1654) goto $l1671; else goto $l1658;
            $l1673:;
            int64_t $tmp1678 = i1650.value - $tmp1653;
            if ($tmp1655) goto $l1679; else goto $l1680;
            $l1679:;
            if ($tmp1678 >= -$tmp1654) goto $l1671; else goto $l1658;
            $l1680:;
            if ($tmp1678 > -$tmp1654) goto $l1671; else goto $l1658;
            $l1671:;
            i1650.value += $tmp1654;
            goto $l1656;
            $l1658:;
        }
        }
        panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1682, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, &$s1684);
        return $tmp1685;
    }
    }
    panda$core$Object* $tmp1687 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1686 = ((panda$core$String*) $tmp1687);
    if (((panda$core$Bit) { result1686 == NULL }).value) {
    {
        panda$core$Int64 $tmp1688 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1688;
        panda$core$String* $tmp1690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1689, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1690, &$s1691);
        panda$core$String* $tmp1693 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1692, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1693, &$s1694);
        result1686 = $tmp1695;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1686));
    }
    }
    panda$core$Int64 $tmp1696 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1697 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1696, ((panda$core$Int64) { 0 }));
    if ($tmp1697.value) {
    {
        panda$core$Object* $tmp1698 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1686, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1698)->varSuffix);
        result1686 = $tmp1699;
    }
    }
    return result1686;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1703;
    panda$core$String* $match$315511709;
    panda$collections$Iterator* p$Iter1786;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1798;
    panda$core$Bit $tmp1701 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1700);
    if ($tmp1701.value) {
    {
        return &$s1702;
    }
    }
    panda$core$MutableString* $tmp1704 = (panda$core$MutableString*) malloc(40);
    $tmp1704->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1704->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1704, &$s1706);
    result1703 = $tmp1704;
    panda$core$String* $tmp1707 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1703, $tmp1707);
    panda$core$MutableString$append$panda$core$String(result1703, &$s1708);
    {
        $match$315511709 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1711 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1710);
        if ($tmp1711.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1712);
        }
        }
        else {
        panda$core$Bit $tmp1714 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1713);
        if ($tmp1714.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1715);
        }
        }
        else {
        panda$core$Bit $tmp1717 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1716);
        if ($tmp1717.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1718);
        }
        }
        else {
        panda$core$Bit $tmp1720 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1719);
        if ($tmp1720.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1721);
        }
        }
        else {
        panda$core$Bit $tmp1723 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1722);
        if ($tmp1723.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1724);
        }
        }
        else {
        panda$core$Bit $tmp1726 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1725);
        if ($tmp1726.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1727);
        }
        }
        else {
        panda$core$Bit $tmp1729 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1728);
        if ($tmp1729.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1730);
        }
        }
        else {
        panda$core$Bit $tmp1732 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1731);
        if ($tmp1732.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1733);
        }
        }
        else {
        panda$core$Bit $tmp1735 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1734);
        if ($tmp1735.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1736);
        }
        }
        else {
        panda$core$Bit $tmp1738 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1737);
        if ($tmp1738.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1739);
        }
        }
        else {
        panda$core$Bit $tmp1741 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1740);
        if ($tmp1741.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1742);
        }
        }
        else {
        panda$core$Bit $tmp1744 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1743);
        if ($tmp1744.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1745);
        }
        }
        else {
        panda$core$Bit $tmp1747 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1746);
        if ($tmp1747.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1748);
        }
        }
        else {
        panda$core$Bit $tmp1750 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1749);
        if ($tmp1750.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1751);
        }
        }
        else {
        panda$core$Bit $tmp1753 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1752);
        if ($tmp1753.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1754);
        }
        }
        else {
        panda$core$Bit $tmp1756 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1755);
        if ($tmp1756.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1757);
        }
        }
        else {
        panda$core$Bit $tmp1759 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1758);
        if ($tmp1759.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1760);
        }
        }
        else {
        panda$core$Bit $tmp1762 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1761);
        if ($tmp1762.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1763);
        }
        }
        else {
        panda$core$Bit $tmp1765 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1764);
        if ($tmp1765.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1766);
        }
        }
        else {
        panda$core$Bit $tmp1768 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1767);
        if ($tmp1768.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1769);
        }
        }
        else {
        panda$core$Bit $tmp1771 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1770);
        if ($tmp1771.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1772);
        }
        }
        else {
        panda$core$Bit $tmp1774 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1773);
        if ($tmp1774.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1775);
        }
        }
        else {
        panda$core$Bit $tmp1777 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1776);
        if ($tmp1777.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1778);
        }
        }
        else {
        panda$core$Bit $tmp1780 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1779);
        if ($tmp1780.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1781);
        }
        }
        else {
        panda$core$Bit $tmp1783 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315511709, &$s1782);
        if ($tmp1783.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1703, &$s1784);
        }
        }
        else {
        {
            panda$core$String* $tmp1785 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1703, $tmp1785);
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
        ITable* $tmp1787 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1787->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1787 = $tmp1787->next;
        }
        $fn1789 $tmp1788 = $tmp1787->methods[0];
        panda$collections$Iterator* $tmp1790 = $tmp1788(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1786 = $tmp1790;
        $l1791:;
        ITable* $tmp1793 = p$Iter1786->$class->itable;
        while ($tmp1793->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1793 = $tmp1793->next;
        }
        $fn1795 $tmp1794 = $tmp1793->methods[0];
        panda$core$Bit $tmp1796 = $tmp1794(p$Iter1786);
        panda$core$Bit $tmp1797 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1796);
        if (!$tmp1797.value) goto $l1792;
        {
            ITable* $tmp1799 = p$Iter1786->$class->itable;
            while ($tmp1799->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1799 = $tmp1799->next;
            }
            $fn1801 $tmp1800 = $tmp1799->methods[1];
            panda$core$Object* $tmp1802 = $tmp1800(p$Iter1786);
            p1798 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1802);
            panda$core$String* $tmp1804 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1798->type)->name);
            panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1803, $tmp1804);
            panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1805, &$s1806);
            panda$core$MutableString$append$panda$core$String(result1703, $tmp1807);
        }
        goto $l1791;
        $l1792:;
    }
    org$pandalanguage$pandac$Type* $tmp1808 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1809 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1808);
    if ($tmp1809.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1703, &$s1810);
        panda$core$String* $tmp1811 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1703, $tmp1811);
    }
    }
    panda$core$String* $tmp1812 = panda$core$MutableString$convert$R$panda$core$String(result1703);
    return $tmp1812;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $tmp1814 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1813, $tmp1814);
    panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1815, &$s1816);
    panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1817, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1819);
    return $tmp1820;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$334111821;
    {
        $match$334111821 = p_t->typeKind;
        panda$core$Bit $tmp1822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$334111821, ((panda$core$Int64) { 12 }));
        if ($tmp1822.value) {
        {
            return ((panda$core$Int64) { 10121 });
        }
        }
        else {
        panda$core$Bit $tmp1824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$334111821, ((panda$core$Int64) { 13 }));
        bool $tmp1823 = $tmp1824.value;
        if ($tmp1823) goto $l1825;
        panda$core$Bit $tmp1826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$334111821, ((panda$core$Int64) { 19 }));
        $tmp1823 = $tmp1826.value;
        $l1825:;
        panda$core$Bit $tmp1827 = { $tmp1823 };
        if ($tmp1827.value) {
        {
            return ((panda$core$Int64) { 10122 });
        }
        }
        else {
        panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$334111821, ((panda$core$Int64) { 20 }));
        if ($tmp1828.value) {
        {
            return ((panda$core$Int64) { 10123 });
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1829;
    panda$core$String* leftField1833;
    panda$core$String* start1843;
    panda$core$String* ifTrue1844;
    panda$core$String* ifFalse1846;
    panda$core$String* rightRef1859;
    panda$core$String* rightField1863;
    panda$core$String* truePred1873;
    panda$core$String* result1879;
    panda$core$String* $tmp1830 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1829 = $tmp1830;
    org$pandalanguage$pandac$Type* $tmp1831 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1832 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1831);
    if ($tmp1832.value) {
    {
        panda$core$String* $tmp1834 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1833 = $tmp1834;
        panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1835, leftField1833);
        panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, &$s1837);
        panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1838, leftRef1829);
        panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1839, &$s1840);
        (($fn1842) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1841);
        leftRef1829 = leftField1833;
    }
    }
    start1843 = self->currentBlock;
    panda$core$String* $tmp1845 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1844 = $tmp1845;
    panda$core$String* $tmp1847 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1846 = $tmp1847;
    panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1848, leftRef1829);
    panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1850);
    panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1851, ifTrue1844);
    panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, &$s1853);
    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, ifFalse1846);
    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1856);
    (($fn1858) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1857);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1844, p_out);
    panda$core$String* $tmp1860 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1859 = $tmp1860;
    org$pandalanguage$pandac$Type* $tmp1861 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1862 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1861);
    if ($tmp1862.value) {
    {
        panda$core$String* $tmp1864 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1863 = $tmp1864;
        panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1865, rightField1863);
        panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1866, &$s1867);
        panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1868, rightRef1859);
        panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1869, &$s1870);
        (($fn1872) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1871);
        rightRef1859 = rightField1863;
    }
    }
    truePred1873 = self->currentBlock;
    panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1874, ifFalse1846);
    panda$core$String* $tmp1877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1875, &$s1876);
    (($fn1878) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1877);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1846, p_out);
    panda$core$String* $tmp1880 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1879 = $tmp1880;
    panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1881, result1879);
    panda$core$String* $tmp1884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1882, &$s1883);
    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1884, start1843);
    panda$core$String* $tmp1887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, &$s1886);
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, rightRef1859);
    panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1888, &$s1889);
    panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1890, truePred1873);
    panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, &$s1892);
    (($fn1894) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1893);
    return result1879;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1895;
    panda$core$String* leftField1899;
    panda$core$String* start1909;
    panda$core$String* ifTrue1910;
    panda$core$String* ifFalse1912;
    panda$core$String* rightRef1925;
    panda$core$String* rightField1929;
    panda$core$String* falsePred1939;
    panda$core$String* result1945;
    panda$core$String* $tmp1896 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1895 = $tmp1896;
    org$pandalanguage$pandac$Type* $tmp1897 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1898 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1897);
    if ($tmp1898.value) {
    {
        panda$core$String* $tmp1900 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1899 = $tmp1900;
        panda$core$String* $tmp1902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1901, leftField1899);
        panda$core$String* $tmp1904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1902, &$s1903);
        panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1904, leftRef1895);
        panda$core$String* $tmp1907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1905, &$s1906);
        (($fn1908) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1907);
        leftRef1895 = leftField1899;
    }
    }
    start1909 = self->currentBlock;
    panda$core$String* $tmp1911 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1910 = $tmp1911;
    panda$core$String* $tmp1913 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1912 = $tmp1913;
    panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1914, leftRef1895);
    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1916);
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, ifTrue1910);
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1918, &$s1919);
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, ifFalse1912);
    panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1921, &$s1922);
    (($fn1924) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1923);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1912, p_out);
    panda$core$String* $tmp1926 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1925 = $tmp1926;
    org$pandalanguage$pandac$Type* $tmp1927 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1928 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1927);
    if ($tmp1928.value) {
    {
        panda$core$String* $tmp1930 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1929 = $tmp1930;
        panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1931, rightField1929);
        panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1932, &$s1933);
        panda$core$String* $tmp1935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1934, rightRef1925);
        panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1935, &$s1936);
        (($fn1938) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1937);
        rightRef1925 = rightField1929;
    }
    }
    falsePred1939 = self->currentBlock;
    panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1940, ifTrue1910);
    panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1941, &$s1942);
    (($fn1944) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1943);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1910, p_out);
    panda$core$String* $tmp1946 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1945 = $tmp1946;
    panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1947, result1945);
    panda$core$String* $tmp1950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1948, &$s1949);
    panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1950, start1909);
    panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1952);
    panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1953, rightRef1925);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, &$s1955);
    panda$core$String* $tmp1957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, falsePred1939);
    panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1957, &$s1958);
    (($fn1960) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1959);
    return result1945;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp1961;
    panda$core$Int64 $match$360841962;
    panda$core$Int64 $match$361441964;
    panda$core$Int64 $match$374112002;
    panda$core$Int64 $match$386752040;
    panda$core$String* result2061;
    {
        $match$360841962 = p_cl;
        panda$core$Bit $tmp1963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$360841962, ((panda$core$Int64) { 10121 }));
        if ($tmp1963.value) {
        {
            {
                $match$361441964 = p_op;
                panda$core$Bit $tmp1965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 51 }));
                if ($tmp1965.value) {
                {
                    llvmOp1961 = &$s1966;
                }
                }
                else {
                panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 52 }));
                if ($tmp1967.value) {
                {
                    llvmOp1961 = &$s1968;
                }
                }
                else {
                panda$core$Bit $tmp1969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 53 }));
                if ($tmp1969.value) {
                {
                    llvmOp1961 = &$s1970;
                }
                }
                else {
                panda$core$Bit $tmp1971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 55 }));
                if ($tmp1971.value) {
                {
                    llvmOp1961 = &$s1972;
                }
                }
                else {
                panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 56 }));
                if ($tmp1973.value) {
                {
                    llvmOp1961 = &$s1974;
                }
                }
                else {
                panda$core$Bit $tmp1975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 72 }));
                if ($tmp1975.value) {
                {
                    llvmOp1961 = &$s1976;
                }
                }
                else {
                panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 1 }));
                if ($tmp1977.value) {
                {
                    llvmOp1961 = &$s1978;
                }
                }
                else {
                panda$core$Bit $tmp1979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 67 }));
                if ($tmp1979.value) {
                {
                    llvmOp1961 = &$s1980;
                }
                }
                else {
                panda$core$Bit $tmp1981 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 69 }));
                if ($tmp1981.value) {
                {
                    llvmOp1961 = &$s1982;
                }
                }
                else {
                panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 70 }));
                bool $tmp1983 = $tmp1984.value;
                if ($tmp1983) goto $l1985;
                panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 71 }));
                $tmp1983 = $tmp1986.value;
                $l1985:;
                panda$core$Bit $tmp1987 = { $tmp1983 };
                if ($tmp1987.value) {
                {
                    llvmOp1961 = &$s1988;
                }
                }
                else {
                panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 58 }));
                if ($tmp1989.value) {
                {
                    llvmOp1961 = &$s1990;
                }
                }
                else {
                panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 59 }));
                if ($tmp1991.value) {
                {
                    llvmOp1961 = &$s1992;
                }
                }
                else {
                panda$core$Bit $tmp1993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 63 }));
                if ($tmp1993.value) {
                {
                    llvmOp1961 = &$s1994;
                }
                }
                else {
                panda$core$Bit $tmp1995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 62 }));
                if ($tmp1995.value) {
                {
                    llvmOp1961 = &$s1996;
                }
                }
                else {
                panda$core$Bit $tmp1997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 65 }));
                if ($tmp1997.value) {
                {
                    llvmOp1961 = &$s1998;
                }
                }
                else {
                panda$core$Bit $tmp1999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361441964, ((panda$core$Int64) { 64 }));
                if ($tmp1999.value) {
                {
                    llvmOp1961 = &$s2000;
                }
                }
                else {
                {
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
        else {
        panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$360841962, ((panda$core$Int64) { 10122 }));
        if ($tmp2001.value) {
        {
            {
                $match$374112002 = p_op;
                panda$core$Bit $tmp2003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 51 }));
                if ($tmp2003.value) {
                {
                    llvmOp1961 = &$s2004;
                }
                }
                else {
                panda$core$Bit $tmp2005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 52 }));
                if ($tmp2005.value) {
                {
                    llvmOp1961 = &$s2006;
                }
                }
                else {
                panda$core$Bit $tmp2007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 53 }));
                if ($tmp2007.value) {
                {
                    llvmOp1961 = &$s2008;
                }
                }
                else {
                panda$core$Bit $tmp2009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 55 }));
                if ($tmp2009.value) {
                {
                    llvmOp1961 = &$s2010;
                }
                }
                else {
                panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 56 }));
                if ($tmp2011.value) {
                {
                    llvmOp1961 = &$s2012;
                }
                }
                else {
                panda$core$Bit $tmp2013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 72 }));
                if ($tmp2013.value) {
                {
                    llvmOp1961 = &$s2014;
                }
                }
                else {
                panda$core$Bit $tmp2015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 1 }));
                if ($tmp2015.value) {
                {
                    llvmOp1961 = &$s2016;
                }
                }
                else {
                panda$core$Bit $tmp2017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 67 }));
                if ($tmp2017.value) {
                {
                    llvmOp1961 = &$s2018;
                }
                }
                else {
                panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 69 }));
                if ($tmp2019.value) {
                {
                    llvmOp1961 = &$s2020;
                }
                }
                else {
                panda$core$Bit $tmp2022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 70 }));
                bool $tmp2021 = $tmp2022.value;
                if ($tmp2021) goto $l2023;
                panda$core$Bit $tmp2024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 71 }));
                $tmp2021 = $tmp2024.value;
                $l2023:;
                panda$core$Bit $tmp2025 = { $tmp2021 };
                if ($tmp2025.value) {
                {
                    llvmOp1961 = &$s2026;
                }
                }
                else {
                panda$core$Bit $tmp2027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 58 }));
                if ($tmp2027.value) {
                {
                    llvmOp1961 = &$s2028;
                }
                }
                else {
                panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 59 }));
                if ($tmp2029.value) {
                {
                    llvmOp1961 = &$s2030;
                }
                }
                else {
                panda$core$Bit $tmp2031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 63 }));
                if ($tmp2031.value) {
                {
                    llvmOp1961 = &$s2032;
                }
                }
                else {
                panda$core$Bit $tmp2033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 62 }));
                if ($tmp2033.value) {
                {
                    llvmOp1961 = &$s2034;
                }
                }
                else {
                panda$core$Bit $tmp2035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 65 }));
                if ($tmp2035.value) {
                {
                    llvmOp1961 = &$s2036;
                }
                }
                else {
                panda$core$Bit $tmp2037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374112002, ((panda$core$Int64) { 64 }));
                if ($tmp2037.value) {
                {
                    llvmOp1961 = &$s2038;
                }
                }
                else {
                {
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
        else {
        panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$360841962, ((panda$core$Int64) { 10123 }));
        if ($tmp2039.value) {
        {
            {
                $match$386752040 = p_op;
                panda$core$Bit $tmp2041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386752040, ((panda$core$Int64) { 51 }));
                if ($tmp2041.value) {
                {
                    llvmOp1961 = &$s2042;
                }
                }
                else {
                panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386752040, ((panda$core$Int64) { 52 }));
                if ($tmp2043.value) {
                {
                    llvmOp1961 = &$s2044;
                }
                }
                else {
                panda$core$Bit $tmp2045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386752040, ((panda$core$Int64) { 53 }));
                if ($tmp2045.value) {
                {
                    llvmOp1961 = &$s2046;
                }
                }
                else {
                panda$core$Bit $tmp2047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386752040, ((panda$core$Int64) { 55 }));
                if ($tmp2047.value) {
                {
                    llvmOp1961 = &$s2048;
                }
                }
                else {
                panda$core$Bit $tmp2049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386752040, ((panda$core$Int64) { 58 }));
                if ($tmp2049.value) {
                {
                    llvmOp1961 = &$s2050;
                }
                }
                else {
                panda$core$Bit $tmp2051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386752040, ((panda$core$Int64) { 59 }));
                if ($tmp2051.value) {
                {
                    llvmOp1961 = &$s2052;
                }
                }
                else {
                panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386752040, ((panda$core$Int64) { 63 }));
                if ($tmp2053.value) {
                {
                    llvmOp1961 = &$s2054;
                }
                }
                else {
                panda$core$Bit $tmp2055 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386752040, ((panda$core$Int64) { 62 }));
                if ($tmp2055.value) {
                {
                    llvmOp1961 = &$s2056;
                }
                }
                else {
                panda$core$Bit $tmp2057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386752040, ((panda$core$Int64) { 65 }));
                if ($tmp2057.value) {
                {
                    llvmOp1961 = &$s2058;
                }
                }
                else {
                panda$core$Bit $tmp2059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386752040, ((panda$core$Int64) { 64 }));
                if ($tmp2059.value) {
                {
                    llvmOp1961 = &$s2060;
                }
                }
                else {
                {
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
    panda$core$String* $tmp2062 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2061 = $tmp2062;
    panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2063, result2061);
    panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, &$s2065);
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2066, llvmOp1961);
    panda$core$String* $tmp2069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2067, &$s2068);
    panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2069, p_leftRef);
    panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, &$s2071);
    panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2072, p_rightRef);
    panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, &$s2074);
    (($fn2076) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2075);
    return result2061;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2077;
    panda$core$String* rightRef2079;
    panda$core$String* raw2081;
    panda$core$String* result2094;
    panda$core$String* $tmp2078 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef2077 = $tmp2078;
    panda$core$String* $tmp2080 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef2079 = $tmp2080;
    panda$core$String* $tmp2082 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw2081 = $tmp2082;
    panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2083, raw2081);
    panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2084, &$s2085);
    panda$core$String* $tmp2087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2086, leftRef2077);
    panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2087, &$s2088);
    panda$core$String* $tmp2090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, rightRef2079);
    panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2090, &$s2091);
    (($fn2093) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2092);
    panda$core$String* $tmp2095 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2094 = $tmp2095;
    panda$core$String* $tmp2097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2096, result2094);
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2097, &$s2098);
    panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, raw2081);
    panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2100, &$s2101);
    (($fn2103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2102);
    return result2094;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2104;
    panda$core$String* rightRef2106;
    panda$core$String* raw2108;
    panda$core$String* result2121;
    panda$core$String* $tmp2105 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef2104 = $tmp2105;
    panda$core$String* $tmp2107 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef2106 = $tmp2107;
    panda$core$String* $tmp2109 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw2108 = $tmp2109;
    panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2110, raw2108);
    panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2111, &$s2112);
    panda$core$String* $tmp2114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2113, leftRef2104);
    panda$core$String* $tmp2116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2114, &$s2115);
    panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2116, rightRef2106);
    panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, &$s2118);
    (($fn2120) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2119);
    panda$core$String* $tmp2122 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2121 = $tmp2122;
    panda$core$String* $tmp2124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2123, result2121);
    panda$core$String* $tmp2126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, &$s2125);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2126, raw2108);
    panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2127, &$s2128);
    (($fn2130) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2129);
    return result2121;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$406212131;
    panda$core$String* leftRef2140;
    panda$core$String* rightRef2142;
    {
        $match$406212131 = p_op;
        panda$core$Bit $tmp2132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406212131, ((panda$core$Int64) { 66 }));
        if ($tmp2132.value) {
        {
            panda$core$String* $tmp2133 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2133;
        }
        }
        else {
        panda$core$Bit $tmp2134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406212131, ((panda$core$Int64) { 68 }));
        if ($tmp2134.value) {
        {
            panda$core$String* $tmp2135 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2135;
        }
        }
        else {
        panda$core$Bit $tmp2136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406212131, ((panda$core$Int64) { 60 }));
        if ($tmp2136.value) {
        {
            panda$core$String* $tmp2137 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2137;
        }
        }
        else {
        panda$core$Bit $tmp2138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406212131, ((panda$core$Int64) { 61 }));
        if ($tmp2138.value) {
        {
            panda$core$String* $tmp2139 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2139;
        }
        }
        else {
        {
            panda$core$String* $tmp2141 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef2140 = $tmp2141;
            panda$core$String* $tmp2143 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef2142 = $tmp2143;
            panda$core$Int64 $tmp2144 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp2145 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2144, leftRef2140, p_op, rightRef2142, p_out);
            return $tmp2145;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp2146 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2148 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2146), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp2147), p_out);
    return $tmp2148;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s2149;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2150;
    panda$core$Int64 index2152;
    panda$collections$ListView* vtable2153;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2155;
    panda$core$String* classPtrPtr2193;
    panda$core$String* classPtr2210;
    panda$core$String* cast2220;
    panda$core$String* ptr2233;
    panda$core$String* load2257;
    panda$core$String* result2267;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2151 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc2150 = $tmp2151;
    index2152 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2154 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2153 = $tmp2154;
    ITable* $tmp2156 = ((panda$collections$CollectionView*) vtable2153)->$class->itable;
    while ($tmp2156->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2156 = $tmp2156->next;
    }
    $fn2158 $tmp2157 = $tmp2156->methods[0];
    panda$core$Int64 $tmp2159 = $tmp2157(((panda$collections$CollectionView*) vtable2153));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2155, ((panda$core$Int64) { 0 }), $tmp2159, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2161 = $tmp2155.start.value;
    panda$core$Int64 i2160 = { $tmp2161 };
    int64_t $tmp2163 = $tmp2155.end.value;
    int64_t $tmp2164 = $tmp2155.step.value;
    bool $tmp2165 = $tmp2155.inclusive.value;
    bool $tmp2172 = $tmp2164 > 0;
    if ($tmp2172) goto $l2170; else goto $l2171;
    $l2170:;
    if ($tmp2165) goto $l2173; else goto $l2174;
    $l2173:;
    if ($tmp2161 <= $tmp2163) goto $l2166; else goto $l2168;
    $l2174:;
    if ($tmp2161 < $tmp2163) goto $l2166; else goto $l2168;
    $l2171:;
    if ($tmp2165) goto $l2175; else goto $l2176;
    $l2175:;
    if ($tmp2161 >= $tmp2163) goto $l2166; else goto $l2168;
    $l2176:;
    if ($tmp2161 > $tmp2163) goto $l2166; else goto $l2168;
    $l2166:;
    {
        ITable* $tmp2178 = vtable2153->$class->itable;
        while ($tmp2178->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2178 = $tmp2178->next;
        }
        $fn2180 $tmp2179 = $tmp2178->methods[0];
        panda$core$Object* $tmp2181 = $tmp2179(vtable2153, i2160);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2181)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2152 = i2160;
            goto $l2168;
        }
        }
    }
    $l2169:;
    if ($tmp2172) goto $l2183; else goto $l2184;
    $l2183:;
    int64_t $tmp2185 = $tmp2163 - i2160.value;
    if ($tmp2165) goto $l2186; else goto $l2187;
    $l2186:;
    if ($tmp2185 >= $tmp2164) goto $l2182; else goto $l2168;
    $l2187:;
    if ($tmp2185 > $tmp2164) goto $l2182; else goto $l2168;
    $l2184:;
    int64_t $tmp2189 = i2160.value - $tmp2163;
    if ($tmp2165) goto $l2190; else goto $l2191;
    $l2190:;
    if ($tmp2189 >= -$tmp2164) goto $l2182; else goto $l2168;
    $l2191:;
    if ($tmp2189 > -$tmp2164) goto $l2182; else goto $l2168;
    $l2182:;
    i2160.value += $tmp2164;
    goto $l2166;
    $l2168:;
    panda$core$String* $tmp2194 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2193 = $tmp2194;
    panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2195, classPtrPtr2193);
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2196, &$s2197);
    org$pandalanguage$pandac$Type* $tmp2199 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2200 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2199);
    panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, $tmp2200);
    panda$core$String* $tmp2203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, &$s2202);
    panda$core$String* $tmp2205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2204, p_target);
    panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2205, &$s2206);
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2203, $tmp2207);
    (($fn2209) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2208);
    panda$core$String* $tmp2211 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2210 = $tmp2211;
    panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2212, classPtr2210);
    panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, &$s2214);
    panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2215, classPtrPtr2193);
    panda$core$String* $tmp2218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2217);
    (($fn2219) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2218);
    panda$core$String* $tmp2221 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2220 = $tmp2221;
    panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2222, cast2220);
    panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2223, &$s2224);
    panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2225, classPtr2210);
    panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, &$s2227);
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2228, cc2150->type);
    panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, &$s2230);
    (($fn2232) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2231);
    panda$core$String* $tmp2234 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2233 = $tmp2234;
    panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2235, ptr2233);
    panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, &$s2237);
    panda$core$String* $tmp2239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, cc2150->type);
    panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, &$s2240);
    panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, cc2150->type);
    panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2242, &$s2243);
    panda$core$String* $tmp2245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2244, cast2220);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2245, &$s2246);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2248, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2250);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2251, ((panda$core$Object*) wrap_panda$core$Int64(index2152)));
    panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2253);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, $tmp2254);
    (($fn2256) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2255);
    panda$core$String* $tmp2258 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2257 = $tmp2258;
    panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2259, load2257);
    panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2260, &$s2261);
    panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, ptr2233);
    panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, &$s2264);
    (($fn2266) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2265);
    panda$core$String* $tmp2268 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2267 = $tmp2268;
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2269, result2267);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
    panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, load2257);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
    org$pandalanguage$pandac$Type* $tmp2276 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2277 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2276);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, $tmp2277);
    (($fn2279) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2278);
    return result2267;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2280;
    panda$core$String* entry2283;
    panda$core$String* classPointer2290;
    panda$core$String* loadedClass2314;
    panda$core$String* classType2316;
    panda$core$String* itableFirst2333;
    panda$core$String* next2358;
    panda$core$String* leavingEntryLabel2365;
    panda$core$String* itableNext2367;
    panda$core$String* itablePtrPtr2372;
    panda$core$String* fail2374;
    panda$core$String* itablePtr2395;
    panda$core$String* itableClassPtr2405;
    panda$core$String* itableClass2421;
    panda$core$String* test2437;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2439;
    panda$core$String* success2463;
    panda$core$Int64 index2495;
    panda$collections$ListView* vtable2496;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2498;
    panda$core$String* methodPtrPtr2544;
    panda$core$String* cast2563;
    panda$core$String* methodPtr2576;
    org$pandalanguage$pandac$Type* $tmp2281 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2282 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2281);
    methodType2280 = $tmp2282;
    panda$core$String* $tmp2284 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2283 = $tmp2284;
    panda$core$String* $tmp2286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2285, entry2283);
    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2286, &$s2287);
    (($fn2289) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2288);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, entry2283, p_out);
    panda$core$String* $tmp2291 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2290 = $tmp2291;
    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2292, classPointer2290);
    panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
    org$pandalanguage$pandac$Type* $tmp2296 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2297 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2296);
    panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, $tmp2297);
    panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2298, &$s2299);
    panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2301, p_target);
    panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, &$s2303);
    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, &$s2305);
    panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, &$s2307);
    panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2308, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2309, &$s2310);
    panda$core$String* $tmp2312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2300, $tmp2311);
    (($fn2313) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2312);
    panda$core$String* $tmp2315 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2314 = $tmp2315;
    org$pandalanguage$pandac$Type* $tmp2317 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2318 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2317);
    classType2316 = $tmp2318;
    panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2319, loadedClass2314);
    panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2320, &$s2321);
    panda$core$String* $tmp2323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, classType2316);
    panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2323, &$s2324);
    panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2325, classType2316);
    panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2326, &$s2327);
    panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2328, classPointer2290);
    panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, &$s2330);
    (($fn2332) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2331);
    panda$core$String* $tmp2334 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2333 = $tmp2334;
    panda$core$String* $tmp2336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2335, itableFirst2333);
    panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2336, &$s2337);
    panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, classType2316);
    panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2340);
    panda$core$String* $tmp2342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, classType2316);
    panda$core$String* $tmp2344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2342, &$s2343);
    panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2345, loadedClass2314);
    panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2346, &$s2347);
    panda$core$String* $tmp2350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2348, &$s2349);
    panda$core$String* $tmp2352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2350, &$s2351);
    panda$core$String* $tmp2353 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2352, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2353, &$s2354);
    panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2344, $tmp2355);
    (($fn2357) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2356);
    panda$core$String* $tmp2359 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2358 = $tmp2359;
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2360, next2358);
    panda$core$String* $tmp2363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2362);
    (($fn2364) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2363);
    leavingEntryLabel2365 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, next2358, p_out);
    panda$core$Int64 $tmp2366 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2366;
    panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2368, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, &$s2370);
    itableNext2367 = $tmp2371;
    panda$core$String* $tmp2373 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2372 = $tmp2373;
    panda$core$String* $tmp2375 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2374 = $tmp2375;
    panda$core$String* $tmp2377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2376, itablePtrPtr2372);
    panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2377, &$s2378);
    panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2379, itableFirst2333);
    panda$core$String* $tmp2382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2380, &$s2381);
    panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2382, leavingEntryLabel2365);
    panda$core$String* $tmp2385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, &$s2384);
    panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2386, itableNext2367);
    panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2387, &$s2388);
    panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2389, fail2374);
    panda$core$String* $tmp2392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2390, &$s2391);
    panda$core$String* $tmp2393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2385, $tmp2392);
    (($fn2394) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2393);
    panda$core$String* $tmp2396 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2395 = $tmp2396;
    panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2397, itablePtr2395);
    panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, &$s2399);
    panda$core$String* $tmp2401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2400, itablePtrPtr2372);
    panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2401, &$s2402);
    (($fn2404) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2403);
    panda$core$String* $tmp2406 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2405 = $tmp2406;
    panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2407, itableClassPtr2405);
    panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, &$s2409);
    panda$core$String* $tmp2412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2411, itablePtr2395);
    panda$core$String* $tmp2414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2412, &$s2413);
    panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2414, &$s2415);
    panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, &$s2417);
    panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2410, $tmp2418);
    (($fn2420) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2419);
    panda$core$String* $tmp2422 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2421 = $tmp2422;
    panda$core$String* $tmp2424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2423, itableClass2421);
    panda$core$String* $tmp2426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2424, &$s2425);
    panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, classType2316);
    panda$core$String* $tmp2429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, &$s2428);
    panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2429, classType2316);
    panda$core$String* $tmp2432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, &$s2431);
    panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2432, itableClassPtr2405);
    panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2433, &$s2434);
    (($fn2436) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2435);
    panda$core$String* $tmp2438 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2437 = $tmp2438;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2440 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2439 = $tmp2440;
    panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2441, test2437);
    panda$core$String* $tmp2444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, &$s2443);
    panda$core$String* $tmp2445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2444, classType2316);
    panda$core$String* $tmp2447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2445, &$s2446);
    panda$core$String* $tmp2448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2447, intfCC2439->type);
    panda$core$String* $tmp2450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2448, &$s2449);
    panda$core$String* $tmp2451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2450, intfCC2439->name);
    panda$core$String* $tmp2453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2451, &$s2452);
    panda$core$String* $tmp2455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2454, classType2316);
    panda$core$String* $tmp2457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2455, &$s2456);
    panda$core$String* $tmp2458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2457, itableClass2421);
    panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2458, &$s2459);
    panda$core$String* $tmp2461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2453, $tmp2460);
    (($fn2462) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2461);
    panda$core$String* $tmp2464 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2463 = $tmp2464;
    panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2465, test2437);
    panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, &$s2467);
    panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2468, success2463);
    panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2469, &$s2470);
    panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2471, fail2374);
    panda$core$String* $tmp2474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, &$s2473);
    (($fn2475) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2474);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, fail2374, p_out);
    panda$core$String* $tmp2477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2476, itableNext2367);
    panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2477, &$s2478);
    panda$core$String* $tmp2480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, itablePtr2395);
    panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2480, &$s2481);
    panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2483, &$s2484);
    panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, &$s2486);
    panda$core$String* $tmp2488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2482, $tmp2487);
    (($fn2489) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2488);
    panda$core$String* $tmp2491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2490, next2358);
    panda$core$String* $tmp2493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2491, &$s2492);
    (($fn2494) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2493);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, success2463, p_out);
    index2495 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2497 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2496 = $tmp2497;
    ITable* $tmp2499 = ((panda$collections$CollectionView*) vtable2496)->$class->itable;
    while ($tmp2499->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2499 = $tmp2499->next;
    }
    $fn2501 $tmp2500 = $tmp2499->methods[0];
    panda$core$Int64 $tmp2502 = $tmp2500(((panda$collections$CollectionView*) vtable2496));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2498, ((panda$core$Int64) { 0 }), $tmp2502, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2504 = $tmp2498.start.value;
    panda$core$Int64 i2503 = { $tmp2504 };
    int64_t $tmp2506 = $tmp2498.end.value;
    int64_t $tmp2507 = $tmp2498.step.value;
    bool $tmp2508 = $tmp2498.inclusive.value;
    bool $tmp2515 = $tmp2507 > 0;
    if ($tmp2515) goto $l2513; else goto $l2514;
    $l2513:;
    if ($tmp2508) goto $l2516; else goto $l2517;
    $l2516:;
    if ($tmp2504 <= $tmp2506) goto $l2509; else goto $l2511;
    $l2517:;
    if ($tmp2504 < $tmp2506) goto $l2509; else goto $l2511;
    $l2514:;
    if ($tmp2508) goto $l2518; else goto $l2519;
    $l2518:;
    if ($tmp2504 >= $tmp2506) goto $l2509; else goto $l2511;
    $l2519:;
    if ($tmp2504 > $tmp2506) goto $l2509; else goto $l2511;
    $l2509:;
    {
        ITable* $tmp2521 = vtable2496->$class->itable;
        while ($tmp2521->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2521 = $tmp2521->next;
        }
        $fn2523 $tmp2522 = $tmp2521->methods[0];
        panda$core$Object* $tmp2524 = $tmp2522(vtable2496, i2503);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2524)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2495 = i2503;
            goto $l2511;
        }
        }
    }
    $l2512:;
    if ($tmp2515) goto $l2526; else goto $l2527;
    $l2526:;
    int64_t $tmp2528 = $tmp2506 - i2503.value;
    if ($tmp2508) goto $l2529; else goto $l2530;
    $l2529:;
    if ($tmp2528 >= $tmp2507) goto $l2525; else goto $l2511;
    $l2530:;
    if ($tmp2528 > $tmp2507) goto $l2525; else goto $l2511;
    $l2527:;
    int64_t $tmp2532 = i2503.value - $tmp2506;
    if ($tmp2508) goto $l2533; else goto $l2534;
    $l2533:;
    if ($tmp2532 >= -$tmp2507) goto $l2525; else goto $l2511;
    $l2534:;
    if ($tmp2532 > -$tmp2507) goto $l2525; else goto $l2511;
    $l2525:;
    i2503.value += $tmp2507;
    goto $l2509;
    $l2511:;
    org$pandalanguage$pandac$Type* $tmp2536 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2537 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2536);
    panda$collections$ListView* $tmp2538 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2537);
    ITable* $tmp2539 = ((panda$collections$CollectionView*) $tmp2538)->$class->itable;
    while ($tmp2539->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2539 = $tmp2539->next;
    }
    $fn2541 $tmp2540 = $tmp2539->methods[0];
    panda$core$Int64 $tmp2542 = $tmp2540(((panda$collections$CollectionView*) $tmp2538));
    panda$core$Int64 $tmp2543 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2495, $tmp2542);
    index2495 = $tmp2543;
    panda$core$String* $tmp2545 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2544 = $tmp2545;
    panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2546, methodPtrPtr2544);
    panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, &$s2548);
    panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2550, itablePtr2395);
    panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, &$s2552);
    panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, &$s2554);
    panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
    panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2557, ((panda$core$Object*) wrap_panda$core$Int64(index2495)));
    panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, &$s2559);
    panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2549, $tmp2560);
    (($fn2562) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2561);
    panda$core$String* $tmp2564 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2563 = $tmp2564;
    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2565, cast2563);
    panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, &$s2567);
    panda$core$String* $tmp2569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2568, methodPtrPtr2544);
    panda$core$String* $tmp2571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2569, &$s2570);
    panda$core$String* $tmp2572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2571, methodType2280);
    panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2572, &$s2573);
    (($fn2575) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2574);
    panda$core$String* $tmp2577 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2576 = $tmp2577;
    panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2578, methodPtr2576);
    panda$core$String* $tmp2581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2579, &$s2580);
    panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2581, methodType2280);
    panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
    panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, methodType2280);
    panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
    panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, cast2563);
    panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
    (($fn2591) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2590);
    return methodPtr2576;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2593 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2592 = $tmp2593.value;
    if (!$tmp2592) goto $l2594;
    panda$core$Bit $tmp2595 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2592 = $tmp2595.value;
    $l2594:;
    panda$core$Bit $tmp2596 = { $tmp2592 };
    if ($tmp2596.value) {
    {
        panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2597.value) {
        {
            panda$core$String* $tmp2598 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2598;
        }
        }
        else {
        {
            panda$core$String* $tmp2599 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2599;
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
        panda$core$String* $tmp2600 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2600;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2601;
    panda$core$String* $match$468342602;
    panda$core$String* countStruct2605;
    panda$core$String* count2608;
    panda$core$String* size2618;
    panda$core$Int64 elementSize2620;
    panda$core$String* malloc2639;
    panda$core$String* result2653;
    panda$core$String* ptr2670;
    panda$core$String* baseType2673;
    panda$core$String* ptrType2676;
    panda$core$String* cast2679;
    panda$core$String* load2692;
    panda$core$String* ptr2710;
    panda$core$String* baseType2713;
    panda$core$String* ptrType2716;
    panda$core$String* cast2719;
    panda$core$String* indexStruct2732;
    panda$core$String* index2735;
    panda$core$String* offsetPtr2745;
    panda$core$String* load2766;
    panda$core$String* ptr2784;
    panda$core$String* ptrCast2787;
    panda$core$String* countStruct2797;
    panda$core$String* count2800;
    panda$core$String* size2810;
    panda$core$String* realloc2828;
    panda$core$String* result2847;
    panda$core$String* ptr2864;
    panda$core$String* baseType2867;
    panda$core$String* offsetStruct2871;
    panda$core$String* offset2874;
    panda$core$String* result2884;
    m2601 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$468342602 = ((org$pandalanguage$pandac$Symbol*) m2601->value)->name;
        panda$core$Bit $tmp2604 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$468342602, &$s2603);
        if ($tmp2604.value) {
        {
            panda$core$Object* $tmp2606 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2607 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2606), p_out);
            countStruct2605 = $tmp2607;
            panda$core$String* $tmp2609 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2608 = $tmp2609;
            panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2610, count2608);
            panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, &$s2612);
            panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, countStruct2605);
            panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, &$s2615);
            (($fn2617) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2616);
            panda$core$String* $tmp2619 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2618 = $tmp2619;
            org$pandalanguage$pandac$Type* $tmp2621 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2601);
            panda$core$Object* $tmp2622 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2621->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2623 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2622));
            elementSize2620 = $tmp2623;
            panda$core$String* $tmp2625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2624, size2618);
            panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2625, &$s2626);
            panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2628);
            panda$core$String* $tmp2631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, &$s2630);
            panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2631, count2608);
            panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2632, &$s2633);
            panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2634, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2620)));
            panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2636);
            (($fn2638) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2637);
            panda$core$String* $tmp2640 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2639 = $tmp2640;
            panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2641, malloc2639);
            panda$core$String* $tmp2644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, &$s2643);
            panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2644, &$s2645);
            panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, &$s2647);
            panda$core$String* $tmp2649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, size2618);
            panda$core$String* $tmp2651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2649, &$s2650);
            (($fn2652) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2651);
            panda$core$String* $tmp2654 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2653 = $tmp2654;
            panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2655, result2653);
            panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, &$s2657);
            panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2658, malloc2639);
            panda$core$String* $tmp2661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2659, &$s2660);
            org$pandalanguage$pandac$Type* $tmp2662 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2601);
            panda$core$String* $tmp2663 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2662);
            panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2661, $tmp2663);
            panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2664, &$s2665);
            (($fn2667) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2666);
            return result2653;
        }
        }
        else {
        panda$core$Bit $tmp2669 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$468342602, &$s2668);
        if ($tmp2669.value) {
        {
            panda$core$Object* $tmp2671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2672 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2671), p_out);
            ptr2670 = $tmp2672;
            org$pandalanguage$pandac$Type* $tmp2674 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2601);
            panda$core$String* $tmp2675 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2674);
            baseType2673 = $tmp2675;
            panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2673, &$s2677);
            ptrType2676 = $tmp2678;
            panda$core$String* $tmp2680 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2679 = $tmp2680;
            panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2681, cast2679);
            panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2683);
            panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, ptr2670);
            panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
            panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, ptrType2676);
            panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2688, &$s2689);
            (($fn2691) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2690);
            panda$core$String* $tmp2693 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2692 = $tmp2693;
            panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2694, load2692);
            panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
            panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, baseType2673);
            panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
            panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, ptrType2676);
            panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, &$s2702);
            panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, cast2679);
            panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
            (($fn2707) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2706);
            return load2692;
        }
        }
        else {
        panda$core$Bit $tmp2709 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$468342602, &$s2708);
        if ($tmp2709.value) {
        {
            panda$core$Object* $tmp2711 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2712 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2711), p_out);
            ptr2710 = $tmp2712;
            org$pandalanguage$pandac$Type* $tmp2714 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2601);
            panda$core$String* $tmp2715 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2714);
            baseType2713 = $tmp2715;
            panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2713, &$s2717);
            ptrType2716 = $tmp2718;
            panda$core$String* $tmp2720 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2719 = $tmp2720;
            panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2721, cast2719);
            panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, &$s2723);
            panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, ptr2710);
            panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, &$s2726);
            panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, ptrType2716);
            panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, &$s2729);
            (($fn2731) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2730);
            panda$core$Object* $tmp2733 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2734 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2733), p_out);
            indexStruct2732 = $tmp2734;
            panda$core$String* $tmp2736 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2735 = $tmp2736;
            panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2737, index2735);
            panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, &$s2739);
            panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, indexStruct2732);
            panda$core$String* $tmp2743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, &$s2742);
            (($fn2744) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2743);
            panda$core$String* $tmp2746 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2745 = $tmp2746;
            panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2747, offsetPtr2745);
            panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2748, &$s2749);
            panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2750, baseType2713);
            panda$core$String* $tmp2753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, &$s2752);
            panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2753, ptrType2716);
            panda$core$String* $tmp2756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2754, &$s2755);
            panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2756, cast2719);
            panda$core$String* $tmp2759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2757, &$s2758);
            panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2760, index2735);
            panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2761, &$s2762);
            panda$core$String* $tmp2764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2759, $tmp2763);
            (($fn2765) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2764);
            panda$core$String* $tmp2767 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2766 = $tmp2767;
            panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2768, load2766);
            panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2769, &$s2770);
            panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, baseType2713);
            panda$core$String* $tmp2774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2772, &$s2773);
            panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2774, ptrType2716);
            panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2775, &$s2776);
            panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, offsetPtr2745);
            panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
            (($fn2781) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2780);
            return load2766;
        }
        }
        else {
        panda$core$Bit $tmp2783 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$468342602, &$s2782);
        if ($tmp2783.value) {
        {
            panda$core$Object* $tmp2785 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2786 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2785), p_out);
            ptr2784 = $tmp2786;
            panda$core$String* $tmp2788 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2787 = $tmp2788;
            panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2789, ptrCast2787);
            panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, &$s2791);
            panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, ptr2784);
            panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
            (($fn2796) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2795);
            panda$core$Object* $tmp2798 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2799 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2798), p_out);
            countStruct2797 = $tmp2799;
            panda$core$String* $tmp2801 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2800 = $tmp2801;
            panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2802, count2800);
            panda$core$String* $tmp2805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2803, &$s2804);
            panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, countStruct2797);
            panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, &$s2807);
            (($fn2809) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2808);
            panda$core$String* $tmp2811 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2810 = $tmp2811;
            panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2812, size2810);
            panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, &$s2814);
            panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
            panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2818);
            panda$core$String* $tmp2820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2819, count2800);
            panda$core$String* $tmp2822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, &$s2821);
            org$pandalanguage$pandac$Type* $tmp2823 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2601);
            panda$core$Object* $tmp2824 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp2823->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2825 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2824));
            panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2822, ((panda$core$Object*) wrap_panda$core$Int64($tmp2825)));
            (($fn2827) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2826);
            panda$core$String* $tmp2829 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2828 = $tmp2829;
            panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2830, realloc2828);
            panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, &$s2832);
            panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, ptrCast2787);
            panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, &$s2835);
            panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2837);
            panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
            panda$core$String* $tmp2842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2841, size2810);
            panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2842, &$s2843);
            panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, $tmp2844);
            (($fn2846) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2845);
            panda$core$String* $tmp2848 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2847 = $tmp2848;
            panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2849, result2847);
            panda$core$String* $tmp2852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2850, &$s2851);
            panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2852, realloc2828);
            panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, &$s2854);
            org$pandalanguage$pandac$Type* $tmp2856 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2601);
            panda$core$String* $tmp2857 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2856);
            panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, $tmp2857);
            panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2859);
            (($fn2861) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2860);
            return result2847;
        }
        }
        else {
        panda$core$Bit $tmp2863 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$468342602, &$s2862);
        if ($tmp2863.value) {
        {
            panda$core$Object* $tmp2865 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2866 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2865), p_out);
            ptr2864 = $tmp2866;
            panda$core$Object* $tmp2868 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2869 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp2868)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2870 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2869));
            baseType2867 = $tmp2870;
            panda$core$Object* $tmp2872 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2873 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2872), p_out);
            offsetStruct2871 = $tmp2873;
            panda$core$String* $tmp2875 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2874 = $tmp2875;
            panda$core$String* $tmp2877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2876, offset2874);
            panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2877, &$s2878);
            panda$core$String* $tmp2880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, offsetStruct2871);
            panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2880, &$s2881);
            (($fn2883) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2882);
            panda$core$String* $tmp2885 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2884 = $tmp2885;
            panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2886, result2884);
            panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, &$s2888);
            panda$core$String* $tmp2890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, baseType2867);
            panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2890, &$s2891);
            panda$core$String* $tmp2893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2892, ptr2864);
            panda$core$String* $tmp2895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2893, &$s2894);
            panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2895, offset2874);
            panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
            (($fn2899) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2898);
            return result2884;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, org$pandalanguage$pandac$IRNode* p_body, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2900;
    panda$core$String* selfRef2901;
    panda$core$Int64 argStart2903;
    panda$collections$Array* args2907;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2910;
    panda$core$String* end2943;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2945;
    org$pandalanguage$pandac$MethodDecl* old2952;
    panda$core$String* phi2965;
    panda$core$String* separator2976;
    panda$collections$Iterator* ret$Iter2978;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2990;
    m2900 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentFile, ((panda$core$Object*) m2900->owner->source));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2900), ((panda$core$Object*) m2900));
    selfRef2901 = &$s2902;
    panda$core$Bit $tmp2904 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2900);
    if ($tmp2904.value) {
    {
        argStart2903 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2906 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2905), p_out);
        selfRef2901 = $tmp2906;
    }
    }
    else {
    {
        argStart2903 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2908 = (panda$collections$Array*) malloc(40);
    $tmp2908->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2908->refCount.value = 1;
    panda$collections$Array$init($tmp2908);
    args2907 = $tmp2908;
    panda$core$Int64 $tmp2911 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2910, argStart2903, $tmp2911, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2913 = $tmp2910.start.value;
    panda$core$Int64 i2912 = { $tmp2913 };
    int64_t $tmp2915 = $tmp2910.end.value;
    int64_t $tmp2916 = $tmp2910.step.value;
    bool $tmp2917 = $tmp2910.inclusive.value;
    bool $tmp2924 = $tmp2916 > 0;
    if ($tmp2924) goto $l2922; else goto $l2923;
    $l2922:;
    if ($tmp2917) goto $l2925; else goto $l2926;
    $l2925:;
    if ($tmp2913 <= $tmp2915) goto $l2918; else goto $l2920;
    $l2926:;
    if ($tmp2913 < $tmp2915) goto $l2918; else goto $l2920;
    $l2923:;
    if ($tmp2917) goto $l2927; else goto $l2928;
    $l2927:;
    if ($tmp2913 >= $tmp2915) goto $l2918; else goto $l2920;
    $l2928:;
    if ($tmp2913 > $tmp2915) goto $l2918; else goto $l2920;
    $l2918:;
    {
        panda$core$Object* $tmp2930 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2912);
        panda$core$String* $tmp2931 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2930), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2907, ((panda$core$Object*) $tmp2931));
    }
    $l2921:;
    if ($tmp2924) goto $l2933; else goto $l2934;
    $l2933:;
    int64_t $tmp2935 = $tmp2915 - i2912.value;
    if ($tmp2917) goto $l2936; else goto $l2937;
    $l2936:;
    if ($tmp2935 >= $tmp2916) goto $l2932; else goto $l2920;
    $l2937:;
    if ($tmp2935 > $tmp2916) goto $l2932; else goto $l2920;
    $l2934:;
    int64_t $tmp2939 = i2912.value - $tmp2915;
    if ($tmp2917) goto $l2940; else goto $l2941;
    $l2940:;
    if ($tmp2939 >= -$tmp2916) goto $l2932; else goto $l2920;
    $l2941:;
    if ($tmp2939 > -$tmp2916) goto $l2932; else goto $l2920;
    $l2932:;
    i2912.value += $tmp2916;
    goto $l2918;
    $l2920:;
    panda$core$String* $tmp2944 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2943 = $tmp2944;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2946 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2946->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2946->refCount.value = 1;
    panda$core$String* $tmp2949 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2948, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2949, &$s2950);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2946, $tmp2951, selfRef2901, ((panda$collections$ListView*) args2907), end2943);
    inline2945 = $tmp2946;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2945));
    old2952 = self->currentMethod;
    self->currentMethod = m2900;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_body, p_out);
    self->currentMethod = old2952;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2953 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2954 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2953);
    if ($tmp2954.value) {
    {
        (($fn2956) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2955);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end2943, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2900));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentFile);
    panda$core$Int64 $tmp2957 = panda$collections$Array$get_count$R$panda$core$Int64(inline2945->returns);
    panda$core$Bit $tmp2958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2957, ((panda$core$Int64) { 1 }));
    if ($tmp2958.value) {
    {
        panda$core$Object* $tmp2959 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2945->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2959)->second);
    }
    }
    panda$core$Int64 $tmp2960 = panda$collections$Array$get_count$R$panda$core$Int64(inline2945->returns);
    panda$core$Bit $tmp2961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2960, ((panda$core$Int64) { 0 }));
    if ($tmp2961.value) {
    {
        (($fn2963) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2962);
        return &$s2964;
    }
    }
    panda$core$String* $tmp2966 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2965 = $tmp2966;
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2967, phi2965);
    panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, &$s2969);
    panda$core$String* $tmp2971 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2900->returnType);
    panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2970, $tmp2971);
    panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, &$s2973);
    (($fn2975) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2974);
    separator2976 = &$s2977;
    {
        ITable* $tmp2979 = ((panda$collections$Iterable*) inline2945->returns)->$class->itable;
        while ($tmp2979->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2979 = $tmp2979->next;
        }
        $fn2981 $tmp2980 = $tmp2979->methods[0];
        panda$collections$Iterator* $tmp2982 = $tmp2980(((panda$collections$Iterable*) inline2945->returns));
        ret$Iter2978 = $tmp2982;
        $l2983:;
        ITable* $tmp2985 = ret$Iter2978->$class->itable;
        while ($tmp2985->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2985 = $tmp2985->next;
        }
        $fn2987 $tmp2986 = $tmp2985->methods[0];
        panda$core$Bit $tmp2988 = $tmp2986(ret$Iter2978);
        panda$core$Bit $tmp2989 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2988);
        if (!$tmp2989.value) goto $l2984;
        {
            ITable* $tmp2991 = ret$Iter2978->$class->itable;
            while ($tmp2991->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2991 = $tmp2991->next;
            }
            $fn2993 $tmp2992 = $tmp2991->methods[1];
            panda$core$Object* $tmp2994 = $tmp2992(ret$Iter2978);
            ret2990 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2994);
            panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2995, separator2976);
            panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2996, &$s2997);
            panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2998, ((panda$core$String*) ret2990->second));
            panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2999, &$s3000);
            panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, ((panda$core$String*) ret2990->first));
            panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3003);
            (($fn3005) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3004);
            separator2976 = &$s3006;
        }
        goto $l2983;
        $l2984:;
    }
    (($fn3007) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi2965;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m3008;
    panda$core$String* bit3016;
    panda$core$String* result3020;
    panda$core$String* bit3034;
    panda$core$String* result3038;
    org$pandalanguage$pandac$IRNode* block3055;
    panda$collections$Array* args3059;
    org$pandalanguage$pandac$Type* actualMethodType3063;
    panda$core$String* actualResultType3064;
    panda$core$Bit isSuper3065;
    panda$core$Int64 offset3085;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3090;
    panda$core$String* arg3110;
    panda$core$String* target3147;
    panda$core$String* methodRef3151;
    panda$core$String* result3153;
    panda$core$Bit indirect3154;
    panda$core$String* separator3180;
    panda$core$String* indirectVar3182;
    panda$collections$Iterator* arg$Iter3203;
    panda$core$String* arg3215;
    m3008 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp3010 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3008->owner)->name, &$s3009);
    if ($tmp3010.value) {
    {
        panda$core$String* $tmp3011 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp3011;
    }
    }
    if (m3008->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m3008);
    }
    }
    panda$core$Bit $tmp3013 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3008->owner)->name, &$s3012);
    if ($tmp3013.value) {
    {
        panda$core$Bit $tmp3015 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3008)->name, &$s3014);
        if ($tmp3015.value) {
        {
            panda$core$Object* $tmp3017 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3018 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3019 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3017), ((org$pandalanguage$pandac$IRNode*) $tmp3018), p_out);
            bit3016 = $tmp3019;
            panda$core$String* $tmp3021 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result3020 = $tmp3021;
            panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3022, result3020);
            panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, &$s3024);
            panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3026, bit3016);
            panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3027, &$s3028);
            panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, $tmp3029);
            (($fn3031) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3030);
            return result3020;
        }
        }
        panda$core$Bit $tmp3033 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3008)->name, &$s3032);
        if ($tmp3033.value) {
        {
            panda$core$Object* $tmp3035 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3036 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3037 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3035), ((org$pandalanguage$pandac$IRNode*) $tmp3036), p_out);
            bit3034 = $tmp3037;
            panda$core$String* $tmp3039 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result3038 = $tmp3039;
            panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3040, result3038);
            panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
            panda$core$String* $tmp3045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3044, bit3034);
            panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3045, &$s3046);
            panda$core$String* $tmp3048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, $tmp3047);
            (($fn3049) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3048);
            return result3038;
        }
        }
    }
    }
    panda$core$Bit $tmp3051 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m3008->annotations);
    bool $tmp3050 = $tmp3051.value;
    if (!$tmp3050) goto $l3052;
    panda$core$Object* $tmp3053 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m3008));
    $tmp3050 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp3053) == NULL }).value;
    $l3052:;
    panda$core$Bit $tmp3054 = { $tmp3050 };
    if ($tmp3054.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3056 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m3008);
        block3055 = $tmp3056;
        if (((panda$core$Bit) { block3055 != NULL }).value) {
        {
            panda$core$String* $tmp3057 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, block3055, p_out);
            return $tmp3057;
        }
        }
        return &$s3058;
    }
    }
    panda$collections$Array* $tmp3060 = (panda$collections$Array*) malloc(40);
    $tmp3060->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3060->refCount.value = 1;
    panda$core$Int64 $tmp3062 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp3060, $tmp3062);
    args3059 = $tmp3060;
    panda$core$Int64 $tmp3067 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp3068 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3067, ((panda$core$Int64) { 1 }));
    bool $tmp3066 = $tmp3068.value;
    if (!$tmp3066) goto $l3069;
    panda$core$Object* $tmp3070 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3070)->kind, ((panda$core$Int64) { 1024 }));
    $tmp3066 = $tmp3071.value;
    $l3069:;
    panda$core$Bit $tmp3072 = { $tmp3066 };
    isSuper3065 = $tmp3072;
    panda$core$Bit $tmp3074 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper3065);
    bool $tmp3073 = $tmp3074.value;
    if (!$tmp3073) goto $l3075;
    panda$core$Bit $tmp3076 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m3008);
    $tmp3073 = $tmp3076.value;
    $l3075:;
    panda$core$Bit $tmp3077 = { $tmp3073 };
    if ($tmp3077.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3078 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m3008);
        actualMethodType3063 = $tmp3078;
        panda$core$Int64 $tmp3079 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3063->subtypes);
        panda$core$Int64 $tmp3080 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3079, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3081 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3063->subtypes, $tmp3080);
        panda$core$String* $tmp3082 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3081));
        actualResultType3064 = $tmp3082;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3083 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m3008);
        actualMethodType3063 = $tmp3083;
        panda$core$String* $tmp3084 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType3064 = $tmp3084;
    }
    }
    panda$core$Int64 $tmp3086 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3087 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3063->subtypes);
    panda$core$Int64 $tmp3088 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3086, $tmp3087);
    panda$core$Int64 $tmp3089 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3088, ((panda$core$Int64) { 1 }));
    offset3085 = $tmp3089;
    panda$core$Int64 $tmp3091 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3090, ((panda$core$Int64) { 0 }), $tmp3091, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3093 = $tmp3090.start.value;
    panda$core$Int64 i3092 = { $tmp3093 };
    int64_t $tmp3095 = $tmp3090.end.value;
    int64_t $tmp3096 = $tmp3090.step.value;
    bool $tmp3097 = $tmp3090.inclusive.value;
    bool $tmp3104 = $tmp3096 > 0;
    if ($tmp3104) goto $l3102; else goto $l3103;
    $l3102:;
    if ($tmp3097) goto $l3105; else goto $l3106;
    $l3105:;
    if ($tmp3093 <= $tmp3095) goto $l3098; else goto $l3100;
    $l3106:;
    if ($tmp3093 < $tmp3095) goto $l3098; else goto $l3100;
    $l3103:;
    if ($tmp3097) goto $l3107; else goto $l3108;
    $l3107:;
    if ($tmp3093 >= $tmp3095) goto $l3098; else goto $l3100;
    $l3108:;
    if ($tmp3093 > $tmp3095) goto $l3098; else goto $l3100;
    $l3098:;
    {
        panda$core$Object* $tmp3111 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3092);
        panda$core$String* $tmp3112 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3111), p_out);
        arg3110 = $tmp3112;
        panda$core$Bit $tmp3114 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3092, offset3085);
        bool $tmp3113 = $tmp3114.value;
        if (!$tmp3113) goto $l3115;
        panda$core$Int64 $tmp3116 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3092, offset3085);
        panda$core$Object* $tmp3117 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3063->subtypes, $tmp3116);
        panda$core$Object* $tmp3118 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3092);
        panda$core$Bit $tmp3119 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3117), ((org$pandalanguage$pandac$IRNode*) $tmp3118)->type);
        $tmp3113 = $tmp3119.value;
        $l3115:;
        panda$core$Bit $tmp3120 = { $tmp3113 };
        if ($tmp3120.value) {
        {
            panda$core$Int64 $tmp3121 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3092, offset3085);
            panda$core$Object* $tmp3122 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3063->subtypes, $tmp3121);
            panda$core$String* $tmp3123 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3122));
            panda$core$String* $tmp3125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3123, &$s3124);
            panda$core$Object* $tmp3126 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3092);
            panda$core$Int64 $tmp3127 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3092, offset3085);
            panda$core$Object* $tmp3128 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3063->subtypes, $tmp3127);
            panda$core$String* $tmp3129 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg3110, ((org$pandalanguage$pandac$IRNode*) $tmp3126)->type, ((org$pandalanguage$pandac$Type*) $tmp3128), p_out);
            panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3125, $tmp3129);
            arg3110 = $tmp3130;
        }
        }
        else {
        {
            panda$core$Object* $tmp3131 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3092);
            panda$core$String* $tmp3132 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3131)->type);
            panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, &$s3133);
            panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, arg3110);
            arg3110 = $tmp3135;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args3059, ((panda$core$Object*) arg3110));
    }
    $l3101:;
    if ($tmp3104) goto $l3137; else goto $l3138;
    $l3137:;
    int64_t $tmp3139 = $tmp3095 - i3092.value;
    if ($tmp3097) goto $l3140; else goto $l3141;
    $l3140:;
    if ($tmp3139 >= $tmp3096) goto $l3136; else goto $l3100;
    $l3141:;
    if ($tmp3139 > $tmp3096) goto $l3136; else goto $l3100;
    $l3138:;
    int64_t $tmp3143 = i3092.value - $tmp3095;
    if ($tmp3097) goto $l3144; else goto $l3145;
    $l3144:;
    if ($tmp3143 >= -$tmp3096) goto $l3136; else goto $l3100;
    $l3145:;
    if ($tmp3143 > -$tmp3096) goto $l3136; else goto $l3100;
    $l3136:;
    i3092.value += $tmp3096;
    goto $l3098;
    $l3100:;
    panda$core$Int64 $tmp3148 = panda$collections$Array$get_count$R$panda$core$Int64(args3059);
    panda$core$Bit $tmp3149 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3148, ((panda$core$Int64) { 0 }));
    if ($tmp3149.value) {
    {
        panda$core$Object* $tmp3150 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args3059, ((panda$core$Int64) { 0 }));
        target3147 = ((panda$core$String*) $tmp3150);
    }
    }
    else {
    {
        target3147 = NULL;
    }
    }
    panda$core$String* $tmp3152 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target3147, m3008, isSuper3065, p_out);
    methodRef3151 = $tmp3152;
    panda$core$Bit $tmp3155 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m3008);
    indirect3154 = $tmp3155;
    if (indirect3154.value) {
    {
        panda$core$String* $tmp3157 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m3008);
        panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3156, $tmp3157);
        panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
        (($fn3161) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3160);
    }
    }
    else {
    {
        panda$core$String* $tmp3162 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3153 = $tmp3162;
        panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3163, result3153);
        panda$core$String* $tmp3166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3164, &$s3165);
        panda$core$String* $tmp3167 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m3008);
        panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3166, $tmp3167);
        panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, &$s3169);
        panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, actualResultType3064);
        panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, &$s3172);
        (($fn3174) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3173);
    }
    }
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3175, methodRef3151);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
    (($fn3179) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3178);
    separator3180 = &$s3181;
    if (indirect3154.value) {
    {
        panda$core$Int64 $tmp3183 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3183;
        panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3184, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3182 = $tmp3185;
        panda$core$String* $tmp3187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3186, indirectVar3182);
        panda$core$String* $tmp3189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3187, &$s3188);
        panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3189, actualResultType3064);
        panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3190, &$s3191);
        (($fn3193) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3192);
        panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3194, actualResultType3064);
        panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
        panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, indirectVar3182);
        panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, &$s3199);
        (($fn3201) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3200);
        separator3180 = &$s3202;
    }
    }
    {
        ITable* $tmp3204 = ((panda$collections$Iterable*) args3059)->$class->itable;
        while ($tmp3204->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3204 = $tmp3204->next;
        }
        $fn3206 $tmp3205 = $tmp3204->methods[0];
        panda$collections$Iterator* $tmp3207 = $tmp3205(((panda$collections$Iterable*) args3059));
        arg$Iter3203 = $tmp3207;
        $l3208:;
        ITable* $tmp3210 = arg$Iter3203->$class->itable;
        while ($tmp3210->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3210 = $tmp3210->next;
        }
        $fn3212 $tmp3211 = $tmp3210->methods[0];
        panda$core$Bit $tmp3213 = $tmp3211(arg$Iter3203);
        panda$core$Bit $tmp3214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3213);
        if (!$tmp3214.value) goto $l3209;
        {
            ITable* $tmp3216 = arg$Iter3203->$class->itable;
            while ($tmp3216->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3216 = $tmp3216->next;
            }
            $fn3218 $tmp3217 = $tmp3216->methods[1];
            panda$core$Object* $tmp3219 = $tmp3217(arg$Iter3203);
            arg3215 = ((panda$core$String*) $tmp3219);
            panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3220, separator3180);
            panda$core$String* $tmp3223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, &$s3222);
            panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3223, arg3215);
            panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, &$s3225);
            (($fn3227) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3226);
            separator3180 = &$s3228;
        }
        goto $l3208;
        $l3209:;
    }
    (($fn3230) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3229);
    if (indirect3154.value) {
    {
        panda$core$String* $tmp3231 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3153 = $tmp3231;
        panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3232, result3153);
        panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3233, &$s3234);
        panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3235, actualResultType3064);
        panda$core$String* $tmp3238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, &$s3237);
        panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3238, actualResultType3064);
        panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, &$s3240);
        panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, indirectVar3182);
        (($fn3243) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3242);
    }
    }
    panda$core$String* $tmp3244 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3245 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3244, actualResultType3064);
    if ($tmp3245.value) {
    {
        panda$core$Int64 $tmp3246 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType3063->subtypes);
        panda$core$Int64 $tmp3247 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3246, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3248 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType3063->subtypes, $tmp3247);
        panda$core$String* $tmp3249 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result3153, ((org$pandalanguage$pandac$Type*) $tmp3248), p_call->type, p_out);
        return $tmp3249;
    }
    }
    return result3153;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3250;
    panda$core$String* testStart3253;
    panda$core$String* isNonNull3254;
    panda$core$String* nonNullLabel3268;
    panda$core$String* endLabel3270;
    panda$core$String* unwrapped3283;
    panda$core$String* nonNullValue3286;
    panda$core$String* result3294;
    panda$core$String* mallocRef3316;
    panda$core$String* wrapperTypeName3328;
    panda$core$String* wrapperType3331;
    panda$core$String* wrapperCast3334;
    panda$core$String* classPtr3347;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3365;
    panda$core$String* refCount3380;
    panda$core$String* target3403;
    panda$core$String* result3439;
    org$pandalanguage$pandac$ClassDecl* $tmp3251 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3250 = $tmp3251;
    panda$core$Bit $tmp3252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3252.value) {
    {
        testStart3253 = self->currentBlock;
        panda$core$String* $tmp3255 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3254 = $tmp3255;
        panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3256, isNonNull3254);
        panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, &$s3258);
        panda$core$String* $tmp3260 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, $tmp3260);
        panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, &$s3262);
        panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3263, p_value);
        panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, &$s3265);
        (($fn3267) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3266);
        panda$core$String* $tmp3269 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3268 = $tmp3269;
        panda$core$String* $tmp3271 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3270 = $tmp3271;
        panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3272, isNonNull3254);
        panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, &$s3274);
        panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, nonNullLabel3268);
        panda$core$String* $tmp3278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3276, &$s3277);
        panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3278, endLabel3270);
        panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, &$s3280);
        (($fn3282) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3281);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3268, p_out);
        panda$core$Object* $tmp3284 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3285 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3284), p_out);
        unwrapped3283 = $tmp3285;
        panda$core$Object* $tmp3287 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3288 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped3283, ((org$pandalanguage$pandac$Type*) $tmp3287), p_dstType, p_out);
        nonNullValue3286 = $tmp3288;
        panda$core$String* $tmp3290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3289, endLabel3270);
        panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3290, &$s3291);
        (($fn3293) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3292);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3270, p_out);
        panda$core$String* $tmp3295 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3294 = $tmp3295;
        panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3296, result3294);
        panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, &$s3298);
        panda$core$String* $tmp3300 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3299, $tmp3300);
        panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3301, &$s3302);
        panda$core$String* $tmp3304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3303, testStart3253);
        panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3304, &$s3305);
        panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3307, nonNullValue3286);
        panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, &$s3309);
        panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, nonNullLabel3268);
        panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, &$s3312);
        panda$core$String* $tmp3314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3306, $tmp3313);
        (($fn3315) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3314);
        return result3294;
    }
    }
    panda$core$String* $tmp3317 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3316 = $tmp3317;
    panda$core$String* $tmp3319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3318, mallocRef3316);
    panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3319, &$s3320);
    org$pandalanguage$pandac$Type* $tmp3322 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3250);
    panda$core$Int64 $tmp3323 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3322);
    panda$core$String* $tmp3324 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3321, ((panda$core$Object*) wrap_panda$core$Int64($tmp3323)));
    panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3324, &$s3325);
    (($fn3327) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3326);
    org$pandalanguage$pandac$Type* $tmp3329 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3250);
    panda$core$String* $tmp3330 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3329);
    wrapperTypeName3328 = $tmp3330;
    org$pandalanguage$pandac$Type* $tmp3332 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3250);
    panda$core$String* $tmp3333 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3332);
    wrapperType3331 = $tmp3333;
    panda$core$String* $tmp3335 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3334 = $tmp3335;
    panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3336, wrapperCast3334);
    panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, &$s3338);
    panda$core$String* $tmp3340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3339, mallocRef3316);
    panda$core$String* $tmp3342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3340, &$s3341);
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3342, wrapperType3331);
    panda$core$String* $tmp3345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, &$s3344);
    (($fn3346) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3345);
    panda$core$String* $tmp3348 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3347 = $tmp3348;
    panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3349, classPtr3347);
    panda$core$String* $tmp3352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3350, &$s3351);
    panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3352, wrapperTypeName3328);
    panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3353, &$s3354);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3356, wrapperType3331);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, &$s3358);
    panda$core$String* $tmp3360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, wrapperCast3334);
    panda$core$String* $tmp3362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3360, &$s3361);
    panda$core$String* $tmp3363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3355, $tmp3362);
    (($fn3364) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3363);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3366 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3250);
    cc3365 = $tmp3366;
    panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3367, cc3365->type);
    panda$core$String* $tmp3370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3368, &$s3369);
    panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3370, cc3365->name);
    panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, &$s3372);
    panda$core$String* $tmp3375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3374, classPtr3347);
    panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3375, &$s3376);
    panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3373, $tmp3377);
    (($fn3379) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3378);
    panda$core$String* $tmp3381 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3380 = $tmp3381;
    panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3382, refCount3380);
    panda$core$String* $tmp3385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3383, &$s3384);
    panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3385, wrapperTypeName3328);
    panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, &$s3387);
    panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3389, wrapperType3331);
    panda$core$String* $tmp3392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, &$s3391);
    panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3392, wrapperCast3334);
    panda$core$String* $tmp3395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, &$s3394);
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, $tmp3395);
    (($fn3397) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3396);
    panda$core$String* $tmp3399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3398, refCount3380);
    panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3399, &$s3400);
    (($fn3402) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3401);
    panda$core$String* $tmp3404 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3403 = $tmp3404;
    panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3405, target3403);
    panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3406, &$s3407);
    panda$core$String* $tmp3409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3408, wrapperTypeName3328);
    panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3409, &$s3410);
    panda$core$String* $tmp3413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3412, wrapperType3331);
    panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3413, &$s3414);
    panda$core$String* $tmp3416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, wrapperCast3334);
    panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3416, &$s3417);
    panda$core$String* $tmp3419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3411, $tmp3418);
    (($fn3420) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3419);
    panda$core$String* $tmp3422 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3421, $tmp3422);
    panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, &$s3424);
    panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3425, p_value);
    panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3426, &$s3427);
    panda$core$String* $tmp3429 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, $tmp3429);
    panda$core$String* $tmp3432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3430, &$s3431);
    panda$core$String* $tmp3433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3432, target3403);
    panda$core$String* $tmp3435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3433, &$s3434);
    (($fn3436) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3435);
    panda$core$String* $tmp3437 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3438 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3331, $tmp3437);
    if ($tmp3438.value) {
    {
        panda$core$String* $tmp3440 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3439 = $tmp3440;
        panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3441, result3439);
        panda$core$String* $tmp3444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, &$s3443);
        panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3444, wrapperType3331);
        panda$core$String* $tmp3447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3445, &$s3446);
        panda$core$String* $tmp3448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3447, wrapperCast3334);
        panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3448, &$s3449);
        panda$core$String* $tmp3451 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3450, $tmp3451);
        panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, &$s3453);
        (($fn3455) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3454);
        return result3439;
    }
    }
    return wrapperCast3334;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3456;
    panda$core$String* t3457;
    org$pandalanguage$pandac$ClassDecl* cl3461;
    panda$core$String* base3465;
    panda$collections$ListView* fields3468;
    panda$core$Int64$nullable index3470;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3471;
    panda$core$String* result3509;
    panda$core$String* ptr3529;
    panda$core$String* result3538;
    field3456 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3458 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3456->type);
    t3457 = $tmp3458;
    panda$core$Bit $tmp3459 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3456->annotations);
    if ($tmp3459.value) {
    {
        panda$core$String* $tmp3460 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field3456->value, p_out);
        return $tmp3460;
    }
    }
    panda$core$Object* $tmp3462 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3463 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3462)->type);
    cl3461 = $tmp3463;
    panda$core$Bit $tmp3464 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3461);
    if ($tmp3464.value) {
    {
        panda$core$Object* $tmp3466 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3467 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3466), p_out);
        base3465 = $tmp3467;
        panda$collections$ListView* $tmp3469 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3461);
        fields3468 = $tmp3469;
        index3470 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3472 = ((panda$collections$CollectionView*) fields3468)->$class->itable;
        while ($tmp3472->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3472 = $tmp3472->next;
        }
        $fn3474 $tmp3473 = $tmp3472->methods[0];
        panda$core$Int64 $tmp3475 = $tmp3473(((panda$collections$CollectionView*) fields3468));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3471, ((panda$core$Int64) { 0 }), $tmp3475, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp3477 = $tmp3471.start.value;
        panda$core$Int64 i3476 = { $tmp3477 };
        int64_t $tmp3479 = $tmp3471.end.value;
        int64_t $tmp3480 = $tmp3471.step.value;
        bool $tmp3481 = $tmp3471.inclusive.value;
        bool $tmp3488 = $tmp3480 > 0;
        if ($tmp3488) goto $l3486; else goto $l3487;
        $l3486:;
        if ($tmp3481) goto $l3489; else goto $l3490;
        $l3489:;
        if ($tmp3477 <= $tmp3479) goto $l3482; else goto $l3484;
        $l3490:;
        if ($tmp3477 < $tmp3479) goto $l3482; else goto $l3484;
        $l3487:;
        if ($tmp3481) goto $l3491; else goto $l3492;
        $l3491:;
        if ($tmp3477 >= $tmp3479) goto $l3482; else goto $l3484;
        $l3492:;
        if ($tmp3477 > $tmp3479) goto $l3482; else goto $l3484;
        $l3482:;
        {
            ITable* $tmp3494 = fields3468->$class->itable;
            while ($tmp3494->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3494 = $tmp3494->next;
            }
            $fn3496 $tmp3495 = $tmp3494->methods[0];
            panda$core$Object* $tmp3497 = $tmp3495(fields3468, i3476);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3497)) == ((panda$core$Object*) field3456) }).value) {
            {
                index3470 = ((panda$core$Int64$nullable) { i3476, true });
                goto $l3484;
            }
            }
        }
        $l3485:;
        if ($tmp3488) goto $l3499; else goto $l3500;
        $l3499:;
        int64_t $tmp3501 = $tmp3479 - i3476.value;
        if ($tmp3481) goto $l3502; else goto $l3503;
        $l3502:;
        if ($tmp3501 >= $tmp3480) goto $l3498; else goto $l3484;
        $l3503:;
        if ($tmp3501 > $tmp3480) goto $l3498; else goto $l3484;
        $l3500:;
        int64_t $tmp3505 = i3476.value - $tmp3479;
        if ($tmp3481) goto $l3506; else goto $l3507;
        $l3506:;
        if ($tmp3505 >= -$tmp3480) goto $l3498; else goto $l3484;
        $l3507:;
        if ($tmp3505 > -$tmp3480) goto $l3498; else goto $l3484;
        $l3498:;
        i3476.value += $tmp3480;
        goto $l3482;
        $l3484:;
        panda$core$String* $tmp3510 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3509 = $tmp3510;
        panda$core$String* $tmp3512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3511, result3509);
        panda$core$String* $tmp3514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3512, &$s3513);
        panda$core$Object* $tmp3515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3516 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3515)->type);
        panda$core$String* $tmp3517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3514, $tmp3516);
        panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3517, &$s3518);
        panda$core$String* $tmp3520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, base3465);
        panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3520, &$s3521);
        panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3523, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3470.value))));
        panda$core$String* $tmp3526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3524, &$s3525);
        panda$core$String* $tmp3527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, $tmp3526);
        (($fn3528) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3527);
        return result3509;
    }
    }
    panda$core$String* $tmp3531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3530, t3457);
    panda$core$String* $tmp3533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3531, &$s3532);
    panda$core$String* $tmp3534 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3533, $tmp3534);
    panda$core$String* $tmp3537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3535, &$s3536);
    ptr3529 = $tmp3537;
    panda$core$String* $tmp3539 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3538 = $tmp3539;
    panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3540, result3538);
    panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, &$s3542);
    panda$core$String* $tmp3544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3543, t3457);
    panda$core$String* $tmp3546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3544, &$s3545);
    panda$core$String* $tmp3547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3546, ptr3529);
    panda$core$String* $tmp3549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3547, &$s3548);
    (($fn3550) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3549);
    return result3538;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3551;
    panda$core$String* testStart3554;
    panda$core$String* isNonNull3555;
    panda$core$String* nonNullLabel3569;
    panda$core$String* endLabel3571;
    panda$core$String* wrapped3584;
    panda$core$String* nonNullValue3587;
    panda$core$String* result3595;
    panda$core$String* targetType3624;
    panda$core$String* wrapperTypeName3626;
    panda$core$String* wrapperType3628;
    panda$core$String* srcCast3630;
    panda$core$String* load3647;
    panda$core$String* result3663;
    org$pandalanguage$pandac$ClassDecl* $tmp3552 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3551 = $tmp3552;
    panda$core$Bit $tmp3553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3553.value) {
    {
        testStart3554 = self->currentBlock;
        panda$core$String* $tmp3556 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3555 = $tmp3556;
        panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3557, isNonNull3555);
        panda$core$String* $tmp3560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3558, &$s3559);
        panda$core$String* $tmp3561 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3560, $tmp3561);
        panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, &$s3563);
        panda$core$String* $tmp3565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3564, p_value);
        panda$core$String* $tmp3567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3565, &$s3566);
        (($fn3568) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3567);
        panda$core$String* $tmp3570 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3569 = $tmp3570;
        panda$core$String* $tmp3572 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3571 = $tmp3572;
        panda$core$String* $tmp3574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3573, isNonNull3555);
        panda$core$String* $tmp3576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3574, &$s3575);
        panda$core$String* $tmp3577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3576, nonNullLabel3569);
        panda$core$String* $tmp3579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3577, &$s3578);
        panda$core$String* $tmp3580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3579, endLabel3571);
        panda$core$String* $tmp3582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3580, &$s3581);
        (($fn3583) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3582);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3569, p_out);
        panda$core$Object* $tmp3585 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3586 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3585), p_out);
        wrapped3584 = $tmp3586;
        panda$core$Object* $tmp3588 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3589 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3584, ((org$pandalanguage$pandac$Type*) $tmp3588), p_dstType, p_out);
        nonNullValue3587 = $tmp3589;
        panda$core$String* $tmp3591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3590, endLabel3571);
        panda$core$String* $tmp3593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3591, &$s3592);
        (($fn3594) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3593);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3571, p_out);
        panda$core$String* $tmp3596 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3595 = $tmp3596;
        panda$core$String* $tmp3598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3597, result3595);
        panda$core$String* $tmp3600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3598, &$s3599);
        panda$core$String* $tmp3601 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3600, $tmp3601);
        panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3602, &$s3603);
        panda$core$Object* $tmp3606 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3607 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3606));
        panda$core$String* $tmp3608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3605, $tmp3607);
        panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, &$s3609);
        panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, $tmp3610);
        panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3612, testStart3554);
        panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, &$s3614);
        panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, nonNullValue3587);
        panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3616, &$s3617);
        panda$core$String* $tmp3619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3618, nonNullLabel3569);
        panda$core$String* $tmp3621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3619, &$s3620);
        panda$core$String* $tmp3622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, $tmp3621);
        (($fn3623) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3622);
        return result3595;
    }
    }
    panda$core$String* $tmp3625 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3624 = $tmp3625;
    panda$core$String* $tmp3627 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3626 = $tmp3627;
    panda$core$String* $tmp3629 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3628 = $tmp3629;
    panda$core$String* $tmp3631 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3630 = $tmp3631;
    panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3632, srcCast3630);
    panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, &$s3634);
    panda$core$String* $tmp3636 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3635, $tmp3636);
    panda$core$String* $tmp3639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3637, &$s3638);
    panda$core$String* $tmp3640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3639, p_value);
    panda$core$String* $tmp3642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3640, &$s3641);
    panda$core$String* $tmp3643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3642, wrapperType3628);
    panda$core$String* $tmp3645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3643, &$s3644);
    (($fn3646) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3645);
    panda$core$String* $tmp3648 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3647 = $tmp3648;
    panda$core$String* $tmp3650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3649, load3647);
    panda$core$String* $tmp3652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3650, &$s3651);
    panda$core$String* $tmp3653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3652, wrapperTypeName3626);
    panda$core$String* $tmp3655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3653, &$s3654);
    panda$core$String* $tmp3656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3655, wrapperType3628);
    panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3656, &$s3657);
    panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3658, srcCast3630);
    panda$core$String* $tmp3661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3659, &$s3660);
    (($fn3662) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3661);
    panda$core$String* $tmp3664 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3663 = $tmp3664;
    panda$core$String* $tmp3666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3665, result3663);
    panda$core$String* $tmp3668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3666, &$s3667);
    panda$core$String* $tmp3669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3668, wrapperTypeName3626);
    panda$core$String* $tmp3671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3669, &$s3670);
    panda$core$String* $tmp3672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3671, load3647);
    panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3672, &$s3673);
    panda$core$String* $tmp3675 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3674, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3675, &$s3676);
    (($fn3678) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3677);
    return result3663;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType3679;
    panda$core$String* result3681;
    panda$core$String* $tmp3680 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3679 = $tmp3680;
    panda$core$String* $tmp3682 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3681 = $tmp3682;
    panda$core$String* $tmp3684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3683, result3681);
    panda$core$String* $tmp3686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3684, &$s3685);
    panda$core$String* $tmp3687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3686, nullableType3679);
    panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3687, &$s3688);
    panda$core$String* $tmp3691 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3690, $tmp3691);
    panda$core$String* $tmp3694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3692, &$s3693);
    panda$core$String* $tmp3695 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3694, $tmp3695);
    panda$core$String* $tmp3698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3696, &$s3697);
    panda$core$String* $tmp3699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3698, p_value);
    panda$core$String* $tmp3701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3699, &$s3700);
    panda$core$String* $tmp3702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3689, $tmp3701);
    (($fn3703) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3702);
    return result3681;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3704;
    panda$core$String* $tmp3705 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3704 = $tmp3705;
    panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3706, result3704);
    panda$core$String* $tmp3709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3707, &$s3708);
    panda$core$String* $tmp3710 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3709, $tmp3710);
    panda$core$String* $tmp3713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3711, &$s3712);
    panda$core$String* $tmp3714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3713, p_value);
    panda$core$String* $tmp3716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3714, &$s3715);
    (($fn3717) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3716);
    return result3704;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3718;
    panda$core$Int64 size13720;
    panda$core$Int64 size23722;
    org$pandalanguage$pandac$ClassDecl* srcClass3730;
    org$pandalanguage$pandac$ClassDecl* targetClass3732;
    panda$core$String* srcType3771;
    panda$core$String* dstType3773;
    panda$core$String* result3776;
    panda$core$Bit $tmp3719 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3719.value) {
    {
        panda$core$Int64 $tmp3721 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13720 = $tmp3721;
        panda$core$Int64 $tmp3723 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23722 = $tmp3723;
        panda$core$Bit $tmp3724 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13720, size23722);
        if ($tmp3724.value) {
        {
            op3718 = &$s3725;
        }
        }
        else {
        panda$core$Bit $tmp3726 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13720, size23722);
        if ($tmp3726.value) {
        {
            panda$core$Bit $tmp3727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3727.value) {
            {
                op3718 = &$s3728;
            }
            }
            else {
            {
                op3718 = &$s3729;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3731 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3730 = $tmp3731;
        org$pandalanguage$pandac$ClassDecl* $tmp3733 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3732 = $tmp3733;
        panda$core$Bit $tmp3735 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3730);
        bool $tmp3734 = $tmp3735.value;
        if (!$tmp3734) goto $l3736;
        panda$core$Bit $tmp3737 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3732);
        panda$core$Bit $tmp3738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3737);
        $tmp3734 = $tmp3738.value;
        $l3736:;
        panda$core$Bit $tmp3739 = { $tmp3734 };
        if ($tmp3739.value) {
        {
            panda$core$String* $tmp3740 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3740;
        }
        }
        else {
        panda$core$Bit $tmp3742 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3730);
        panda$core$Bit $tmp3743 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3742);
        bool $tmp3741 = $tmp3743.value;
        if (!$tmp3741) goto $l3744;
        panda$core$Bit $tmp3745 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3732);
        $tmp3741 = $tmp3745.value;
        $l3744:;
        panda$core$Bit $tmp3746 = { $tmp3741 };
        if ($tmp3746.value) {
        {
            panda$core$String* $tmp3747 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3747;
        }
        }
        else {
        panda$core$Bit $tmp3750 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3730);
        bool $tmp3749 = $tmp3750.value;
        if (!$tmp3749) goto $l3751;
        panda$core$Bit $tmp3752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3749 = $tmp3752.value;
        $l3751:;
        panda$core$Bit $tmp3753 = { $tmp3749 };
        bool $tmp3748 = $tmp3753.value;
        if (!$tmp3748) goto $l3754;
        panda$core$Object* $tmp3755 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3756 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3755), p_src);
        $tmp3748 = $tmp3756.value;
        $l3754:;
        panda$core$Bit $tmp3757 = { $tmp3748 };
        if ($tmp3757.value) {
        {
            panda$core$String* $tmp3758 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3758;
        }
        }
        else {
        panda$core$Bit $tmp3761 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3732);
        bool $tmp3760 = $tmp3761.value;
        if (!$tmp3760) goto $l3762;
        panda$core$Bit $tmp3763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3760 = $tmp3763.value;
        $l3762:;
        panda$core$Bit $tmp3764 = { $tmp3760 };
        bool $tmp3759 = $tmp3764.value;
        if (!$tmp3759) goto $l3765;
        panda$core$Object* $tmp3766 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3767 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3766), p_target);
        $tmp3759 = $tmp3767.value;
        $l3765:;
        panda$core$Bit $tmp3768 = { $tmp3759 };
        if ($tmp3768.value) {
        {
            panda$core$String* $tmp3769 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3769;
        }
        }
        }
        }
        }
        op3718 = &$s3770;
    }
    }
    panda$core$String* $tmp3772 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3771 = $tmp3772;
    panda$core$String* $tmp3774 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3773 = $tmp3774;
    panda$core$Bit $tmp3775 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3771, dstType3773);
    if ($tmp3775.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3777 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3776 = $tmp3777;
    panda$core$String* $tmp3779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3778, result3776);
    panda$core$String* $tmp3781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3779, &$s3780);
    panda$core$String* $tmp3782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3781, op3718);
    panda$core$String* $tmp3784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3782, &$s3783);
    panda$core$String* $tmp3785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3784, srcType3771);
    panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3785, &$s3786);
    panda$core$String* $tmp3788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3787, p_value);
    panda$core$String* $tmp3790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3788, &$s3789);
    panda$core$String* $tmp3791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3790, dstType3773);
    panda$core$String* $tmp3793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3791, &$s3792);
    (($fn3794) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3793);
    return result3776;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3795;
    panda$core$Object* $tmp3796 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3797 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3796), p_out);
    base3795 = $tmp3797;
    panda$core$Object* $tmp3798 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3799 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3795, ((org$pandalanguage$pandac$IRNode*) $tmp3798)->type, p_cast->type, p_out);
    return $tmp3799;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3800;
    panda$core$String* t3802;
    panda$core$String* value3805;
    panda$core$String* result3816;
    org$pandalanguage$pandac$FieldDecl* lastField3818;
    panda$core$String* value3841;
    panda$core$String* result3852;
    org$pandalanguage$pandac$FieldDecl* lastField3854;
    panda$core$String* alloca3877;
    panda$core$String* result3898;
    panda$core$String* callRef3914;
    panda$core$String* result3925;
    panda$core$String* classPtr3939;
    panda$core$String* className3941;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3967;
    org$pandalanguage$pandac$ClassDecl* $tmp3801 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3800 = $tmp3801;
    panda$core$String* $tmp3803 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3802 = $tmp3803;
    panda$core$Bit $tmp3804 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3804.value) {
    {
        panda$core$Object* $tmp3806 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3807 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3806)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3808 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3807), p_out);
        value3805 = $tmp3808;
        panda$core$Object* $tmp3809 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3810 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3809)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3810)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3811.value) {
        {
            panda$core$String* $tmp3813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3812, value3805);
            panda$core$String* $tmp3815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3813, &$s3814);
            return $tmp3815;
        }
        }
        panda$core$String* $tmp3817 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3816 = $tmp3817;
        panda$core$Int64 $tmp3819 = panda$collections$Array$get_count$R$panda$core$Int64(cl3800->fields);
        panda$core$Int64 $tmp3820 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3819, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3821 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3800->fields, $tmp3820);
        lastField3818 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3821);
        panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3822, result3816);
        panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3823, &$s3824);
        panda$core$String* $tmp3826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3825, t3802);
        panda$core$String* $tmp3828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3826, &$s3827);
        panda$core$String* $tmp3829 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3818->type);
        panda$core$String* $tmp3830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3828, $tmp3829);
        panda$core$String* $tmp3832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3830, &$s3831);
        panda$core$String* $tmp3834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3833, value3805);
        panda$core$String* $tmp3836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3834, &$s3835);
        panda$core$String* $tmp3837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3832, $tmp3836);
        (($fn3838) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3837);
        return result3816;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3839 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3840 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3839);
    if ($tmp3840.value) {
    {
        panda$core$Object* $tmp3842 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3843 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3842)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3844 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3843), p_out);
        value3841 = $tmp3844;
        panda$core$Object* $tmp3845 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3846 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3845)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3846)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3847.value) {
        {
            panda$core$String* $tmp3849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3848, value3841);
            panda$core$String* $tmp3851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3849, &$s3850);
            return $tmp3851;
        }
        }
        panda$core$String* $tmp3853 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3852 = $tmp3853;
        panda$core$Int64 $tmp3855 = panda$collections$Array$get_count$R$panda$core$Int64(cl3800->fields);
        panda$core$Int64 $tmp3856 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3855, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3857 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3800->fields, $tmp3856);
        lastField3854 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3857);
        panda$core$String* $tmp3859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3858, result3852);
        panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3859, &$s3860);
        panda$core$String* $tmp3862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3861, t3802);
        panda$core$String* $tmp3864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3862, &$s3863);
        panda$core$String* $tmp3865 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3854->type);
        panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3864, $tmp3865);
        panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, &$s3867);
        panda$core$String* $tmp3870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3869, value3841);
        panda$core$String* $tmp3872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3870, &$s3871);
        panda$core$String* $tmp3873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3868, $tmp3872);
        (($fn3874) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3873);
        return result3852;
    }
    }
    panda$core$Bit $tmp3875 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3800);
    if ($tmp3875.value) {
    {
        panda$core$Int64 $tmp3876 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3876;
        panda$core$String* $tmp3879 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3878, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3879, &$s3880);
        alloca3877 = $tmp3881;
        panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3882, alloca3877);
        panda$core$String* $tmp3885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3883, &$s3884);
        panda$core$String* $tmp3886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3885, t3802);
        panda$core$String* $tmp3888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3886, &$s3887);
        (($fn3889) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3888);
        panda$core$Object* $tmp3890 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3891, t3802);
        panda$core$String* $tmp3894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3892, &$s3893);
        panda$core$String* $tmp3895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3894, alloca3877);
        panda$core$String* $tmp3897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3895, &$s3896);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3890), $tmp3897, p_out);
        panda$core$String* $tmp3899 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3898 = $tmp3899;
        panda$core$String* $tmp3901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3900, result3898);
        panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3901, &$s3902);
        panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3903, t3802);
        panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, &$s3905);
        panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3906, t3802);
        panda$core$String* $tmp3909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3907, &$s3908);
        panda$core$String* $tmp3910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3909, alloca3877);
        panda$core$String* $tmp3912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3910, &$s3911);
        (($fn3913) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3912);
        return result3898;
    }
    }
    panda$core$String* $tmp3915 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3914 = $tmp3915;
    panda$core$String* $tmp3917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3916, callRef3914);
    panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3917, &$s3918);
    panda$core$Int64 $tmp3920 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3921 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3919, ((panda$core$Object*) wrap_panda$core$Int64($tmp3920)));
    panda$core$String* $tmp3923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3921, &$s3922);
    (($fn3924) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3923);
    panda$core$String* $tmp3926 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3925 = $tmp3926;
    panda$core$String* $tmp3928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3927, result3925);
    panda$core$String* $tmp3930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3928, &$s3929);
    panda$core$String* $tmp3931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3930, callRef3914);
    panda$core$String* $tmp3933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3931, &$s3932);
    panda$core$String* $tmp3934 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3933, $tmp3934);
    panda$core$String* $tmp3937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3935, &$s3936);
    (($fn3938) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3937);
    panda$core$String* $tmp3940 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3939 = $tmp3940;
    panda$core$Bit $tmp3943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3942 = $tmp3943.value;
    if (!$tmp3942) goto $l3944;
    panda$core$Bit $tmp3945 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3800);
    panda$core$Bit $tmp3946 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3945);
    $tmp3942 = $tmp3946.value;
    $l3944:;
    panda$core$Bit $tmp3947 = { $tmp3942 };
    if ($tmp3947.value) {
    {
        panda$core$Object* $tmp3948 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3949 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3948));
        className3941 = $tmp3949;
    }
    }
    else {
    {
        panda$core$String* $tmp3950 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3941 = $tmp3950;
    }
    }
    panda$core$String* $tmp3952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3951, classPtr3939);
    panda$core$String* $tmp3954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3952, &$s3953);
    panda$core$String* $tmp3955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3954, className3941);
    panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3955, &$s3956);
    panda$core$String* $tmp3958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, t3802);
    panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3958, &$s3959);
    panda$core$String* $tmp3961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, result3925);
    panda$core$String* $tmp3963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3961, &$s3962);
    panda$core$String* $tmp3965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3963, &$s3964);
    (($fn3966) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3965);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3968 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3800);
    cc3967 = $tmp3968;
    panda$core$String* $tmp3970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3969, cc3967->type);
    panda$core$String* $tmp3972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3970, &$s3971);
    panda$core$String* $tmp3973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3972, cc3967->name);
    panda$core$String* $tmp3975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3973, &$s3974);
    panda$core$String* $tmp3977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3976, classPtr3939);
    panda$core$String* $tmp3979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3977, &$s3978);
    panda$core$String* $tmp3980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3975, $tmp3979);
    (($fn3981) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3980);
    panda$core$Object* $tmp3982 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3983, t3802);
    panda$core$String* $tmp3986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3984, &$s3985);
    panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3986, result3925);
    panda$core$String* $tmp3989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3987, &$s3988);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3982), $tmp3989, p_out);
    return result3925;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3990 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp3990;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3992 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3991, $tmp3992);
    return $tmp3993;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3994;
    }
    }
    return &$s3995;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3998;
    panda$core$String* t4000;
    panda$core$Bit $tmp3996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3996.value) {
    {
        panda$core$String* $tmp3997 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3997;
    }
    }
    panda$core$String* $tmp3999 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3998 = $tmp3999;
    panda$core$String* $tmp4001 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t4000 = $tmp4001;
    panda$core$String* $tmp4003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4002, result3998);
    panda$core$String* $tmp4005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4003, &$s4004);
    panda$core$String* $tmp4006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4005, t4000);
    panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4006, &$s4007);
    panda$core$String* $tmp4009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4008, t4000);
    panda$core$String* $tmp4011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4009, &$s4010);
    panda$core$String* $tmp4012 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp4013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4011, $tmp4012);
    panda$core$String* $tmp4015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4013, &$s4014);
    (($fn4016) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4015);
    return result3998;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars4018;
    panda$core$String* charsType4023;
    panda$core$String* separator4041;
    panda$collections$Iterator* c$Iter4043;
    panda$core$Char8 c4056;
    panda$core$String* result4074;
    org$pandalanguage$pandac$ClassDecl* string4079;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4082;
    panda$core$Int64 $tmp4017 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4017;
    panda$core$String* $tmp4020 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4019, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4020, &$s4021);
    chars4018 = $tmp4022;
    panda$collections$ListView* $tmp4025 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4026 = ((panda$collections$CollectionView*) $tmp4025)->$class->itable;
    while ($tmp4026->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4026 = $tmp4026->next;
    }
    $fn4028 $tmp4027 = $tmp4026->methods[0];
    panda$core$Int64 $tmp4029 = $tmp4027(((panda$collections$CollectionView*) $tmp4025));
    panda$core$String* $tmp4030 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4024, ((panda$core$Object*) wrap_panda$core$Int64($tmp4029)));
    panda$core$String* $tmp4032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4030, &$s4031);
    charsType4023 = $tmp4032;
    panda$core$String* $tmp4034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4033, chars4018);
    panda$core$String* $tmp4036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4034, &$s4035);
    panda$core$String* $tmp4037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4036, charsType4023);
    panda$core$String* $tmp4039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4037, &$s4038);
    (($fn4040) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4039);
    separator4041 = &$s4042;
    {
        panda$collections$ListView* $tmp4044 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp4045 = ((panda$collections$Iterable*) $tmp4044)->$class->itable;
        while ($tmp4045->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4045 = $tmp4045->next;
        }
        $fn4047 $tmp4046 = $tmp4045->methods[0];
        panda$collections$Iterator* $tmp4048 = $tmp4046(((panda$collections$Iterable*) $tmp4044));
        c$Iter4043 = $tmp4048;
        $l4049:;
        ITable* $tmp4051 = c$Iter4043->$class->itable;
        while ($tmp4051->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4051 = $tmp4051->next;
        }
        $fn4053 $tmp4052 = $tmp4051->methods[0];
        panda$core$Bit $tmp4054 = $tmp4052(c$Iter4043);
        panda$core$Bit $tmp4055 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4054);
        if (!$tmp4055.value) goto $l4050;
        {
            ITable* $tmp4057 = c$Iter4043->$class->itable;
            while ($tmp4057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4057 = $tmp4057->next;
            }
            $fn4059 $tmp4058 = $tmp4057->methods[1];
            panda$core$Object* $tmp4060 = $tmp4058(c$Iter4043);
            c4056 = ((panda$core$Char8$wrapper*) $tmp4060)->value;
            panda$core$String* $tmp4062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4061, separator4041);
            panda$core$String* $tmp4064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4062, &$s4063);
            panda$core$Int8 $tmp4065 = panda$core$Char8$convert$R$panda$core$Int8(c4056);
            panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4064, ((panda$core$Object*) wrap_panda$core$Int8($tmp4065)));
            panda$core$String* $tmp4068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4066, &$s4067);
            (($fn4069) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4068);
            separator4041 = &$s4070;
        }
        goto $l4049;
        $l4050:;
    }
    (($fn4072) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s4071);
    panda$core$Int64 $tmp4073 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4073;
    panda$core$String* $tmp4076 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4075, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4076, &$s4077);
    result4074 = $tmp4078;
    org$pandalanguage$pandac$Type* $tmp4080 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4081 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp4080);
    string4079 = $tmp4081;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4083 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string4079);
    cc4082 = $tmp4083;
    panda$core$String* $tmp4085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4084, result4074);
    panda$core$String* $tmp4087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4085, &$s4086);
    panda$core$String* $tmp4089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4088, cc4082->type);
    panda$core$String* $tmp4091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4089, &$s4090);
    panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4091, cc4082->name);
    panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, &$s4093);
    panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4087, $tmp4094);
    panda$core$String* $tmp4097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4095, &$s4096);
    panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4098, charsType4023);
    panda$core$String* $tmp4101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4099, &$s4100);
    panda$core$String* $tmp4102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4101, chars4018);
    panda$core$String* $tmp4104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4102, &$s4103);
    panda$core$String* $tmp4105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4097, $tmp4104);
    panda$collections$ListView* $tmp4107 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4108 = ((panda$collections$CollectionView*) $tmp4107)->$class->itable;
    while ($tmp4108->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4108 = $tmp4108->next;
    }
    $fn4110 $tmp4109 = $tmp4108->methods[0];
    panda$core$Int64 $tmp4111 = $tmp4109(((panda$collections$CollectionView*) $tmp4107));
    panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4106, ((panda$core$Object*) wrap_panda$core$Int64($tmp4111)));
    panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, &$s4113);
    panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4105, $tmp4114);
    panda$core$String* $tmp4117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4115, &$s4116);
    (($fn4118) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4117);
    return result4074;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp4119 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp4120 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4119, ((panda$core$Int64) { 0 }));
    if ($tmp4120.value) {
    {
        panda$core$Object* $tmp4121 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4121)->selfRef;
    }
    }
    return &$s4122;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4123;
    panda$core$String* $tmp4124 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4123 = $tmp4124;
    panda$core$String* $tmp4126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4125, result4123);
    panda$core$String* $tmp4128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4126, &$s4127);
    org$pandalanguage$pandac$Type* $tmp4129 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp4130 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp4129);
    panda$core$String* $tmp4131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4128, $tmp4130);
    panda$core$String* $tmp4133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4131, &$s4132);
    panda$core$String* $tmp4134 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp4135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4133, $tmp4134);
    (($fn4136) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4135);
    return result4123;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4137;
    org$pandalanguage$pandac$ClassDecl* cl4140;
    panda$core$String* resultValue4143;
    panda$core$String* field4148;
    panda$core$String* result4176;
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
    panda$core$String* value4186;
    org$pandalanguage$pandac$ClassDecl* cl4189;
    panda$core$String* resultValue4192;
    panda$core$String* result4215;
    panda$core$Object* $tmp4187 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4188 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4187), p_out);
    value4186 = $tmp4188;
    panda$core$Object* $tmp4190 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4191 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4190)->type);
    cl4189 = $tmp4191;
    panda$core$Bit $tmp4193 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4189);
    if ($tmp4193.value) {
    {
        panda$core$Object* $tmp4194 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4195 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4194)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4195.value) {
        {
            return &$s4196;
        }
        }
        panda$core$String* $tmp4197 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4192 = $tmp4197;
        panda$core$String* $tmp4199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4198, resultValue4192);
        panda$core$String* $tmp4201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4199, &$s4200);
        panda$core$String* $tmp4202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4201, value4186);
        panda$core$String* $tmp4204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4202, &$s4203);
        (($fn4205) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4204);
    }
    }
    else {
    {
        panda$core$String* $tmp4206 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4192 = $tmp4206;
        panda$core$String* $tmp4208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4207, resultValue4192);
        panda$core$String* $tmp4210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4208, &$s4209);
        panda$core$String* $tmp4211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4210, value4186);
        panda$core$String* $tmp4213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4211, &$s4212);
        (($fn4214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4213);
    }
    }
    panda$core$String* $tmp4216 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4215 = $tmp4216;
    panda$core$String* $tmp4218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4217, result4215);
    panda$core$String* $tmp4220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4218, &$s4219);
    panda$core$String* $tmp4221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4220, resultValue4192);
    panda$core$String* $tmp4223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4221, &$s4222);
    (($fn4224) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4223);
    return result4215;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4225;
    panda$core$Object* $tmp4226 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4227 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4226));
    cl4225 = $tmp4227;
    panda$core$Bit $tmp4228 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4225);
    if ($tmp4228.value) {
    {
        panda$core$Object* $tmp4230 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4231 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4230));
        panda$core$String* $tmp4232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4229, $tmp4231);
        panda$core$String* $tmp4234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4232, &$s4233);
        return $tmp4234;
    }
    }
    else {
    {
        return &$s4235;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4236;
    panda$core$String* result4239;
    panda$core$Int64 $match$733954241;
    panda$core$Object* $tmp4237 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4238 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4237), p_out);
    base4236 = $tmp4238;
    panda$core$String* $tmp4240 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4239 = $tmp4240;
    {
        panda$core$Int64 $tmp4242 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
        $match$733954241 = $tmp4242;
        panda$core$Bit $tmp4243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$733954241, ((panda$core$Int64) { 52 }));
        if ($tmp4243.value) {
        {
            panda$core$String* $tmp4245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4244, result4239);
            panda$core$String* $tmp4247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4245, &$s4246);
            panda$core$String* $tmp4248 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4247, $tmp4248);
            panda$core$String* $tmp4251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4249, &$s4250);
            panda$core$String* $tmp4252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4251, base4236);
            panda$core$String* $tmp4254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4252, &$s4253);
            (($fn4255) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4254);
            return result4239;
        }
        }
        else {
        panda$core$Bit $tmp4257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$733954241, ((panda$core$Int64) { 49 }));
        bool $tmp4256 = $tmp4257.value;
        if ($tmp4256) goto $l4258;
        panda$core$Bit $tmp4259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$733954241, ((panda$core$Int64) { 50 }));
        $tmp4256 = $tmp4259.value;
        $l4258:;
        panda$core$Bit $tmp4260 = { $tmp4256 };
        if ($tmp4260.value) {
        {
            panda$core$String* $tmp4262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4261, result4239);
            panda$core$String* $tmp4264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4262, &$s4263);
            panda$core$String* $tmp4265 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4264, $tmp4265);
            panda$core$String* $tmp4268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4266, &$s4267);
            panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4268, base4236);
            panda$core$String* $tmp4271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4269, &$s4270);
            (($fn4272) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4271);
            return result4239;
        }
        }
        else {
        {
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$739164273;
    panda$core$String* value4299;
    panda$core$String* result4303;
    {
        $match$739164273 = p_expr->kind;
        panda$core$Bit $tmp4274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1023 }));
        if ($tmp4274.value) {
        {
            panda$core$String* $tmp4275 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4275;
        }
        }
        else {
        panda$core$Bit $tmp4276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1005 }));
        if ($tmp4276.value) {
        {
            panda$core$String* $tmp4277 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4277;
        }
        }
        else {
        panda$core$Bit $tmp4278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1009 }));
        if ($tmp4278.value) {
        {
            panda$core$String* $tmp4279 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4279;
        }
        }
        else {
        panda$core$Bit $tmp4280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1004 }));
        if ($tmp4280.value) {
        {
            panda$core$String* $tmp4281 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4281;
        }
        }
        else {
        panda$core$Bit $tmp4282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1032 }));
        if ($tmp4282.value) {
        {
            panda$core$String* $tmp4283 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4283;
        }
        }
        else {
        panda$core$Bit $tmp4284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1011 }));
        if ($tmp4284.value) {
        {
            panda$core$String* $tmp4285 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4285;
        }
        }
        else {
        panda$core$Bit $tmp4286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1010 }));
        if ($tmp4286.value) {
        {
            panda$core$String* $tmp4287 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4287;
        }
        }
        else {
        panda$core$Bit $tmp4288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1016 }));
        if ($tmp4288.value) {
        {
            panda$core$String* $tmp4289 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4289;
        }
        }
        else {
        panda$core$Bit $tmp4290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1026 }));
        if ($tmp4290.value) {
        {
            panda$core$String* $tmp4291 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4291;
        }
        }
        else {
        panda$core$Bit $tmp4292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1033 }));
        if ($tmp4292.value) {
        {
            panda$core$String* $tmp4293 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4293;
        }
        }
        else {
        panda$core$Bit $tmp4294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1025 }));
        if ($tmp4294.value) {
        {
            panda$core$String* $tmp4295 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4295;
        }
        }
        else {
        panda$core$Bit $tmp4296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1024 }));
        if ($tmp4296.value) {
        {
            panda$core$String* $tmp4297 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4297;
        }
        }
        else {
        panda$core$Bit $tmp4298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1027 }));
        if ($tmp4298.value) {
        {
            panda$core$Object* $tmp4300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4301 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4300), p_out);
            value4299 = $tmp4301;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4299));
            return value4299;
        }
        }
        else {
        panda$core$Bit $tmp4302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1028 }));
        if ($tmp4302.value) {
        {
            panda$core$Object* $tmp4304 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4303 = ((panda$core$String*) $tmp4304);
            return result4303;
        }
        }
        else {
        panda$core$Bit $tmp4305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1030 }));
        if ($tmp4305.value) {
        {
            panda$core$String* $tmp4306 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4306;
        }
        }
        else {
        panda$core$Bit $tmp4307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1035 }));
        if ($tmp4307.value) {
        {
            panda$core$String* $tmp4308 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4308;
        }
        }
        else {
        panda$core$Bit $tmp4309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1036 }));
        if ($tmp4309.value) {
        {
            panda$core$String* $tmp4310 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4310;
        }
        }
        else {
        panda$core$Bit $tmp4311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$739164273, ((panda$core$Int64) { 1041 }));
        if ($tmp4311.value) {
        {
            panda$core$String* $tmp4312 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4312;
        }
        }
        else {
        {
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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4314 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4313, $tmp4314);
    panda$core$String* $tmp4317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4315, &$s4316);
    panda$core$String* $tmp4318 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4317, $tmp4318);
    panda$core$String* $tmp4321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4319, &$s4320);
    return $tmp4321;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4323;
    org$pandalanguage$pandac$IRNode* s4335;
    panda$core$Int64 $tmp4322 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4322;
    {
        ITable* $tmp4324 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4324->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4324 = $tmp4324->next;
        }
        $fn4326 $tmp4325 = $tmp4324->methods[0];
        panda$collections$Iterator* $tmp4327 = $tmp4325(((panda$collections$Iterable*) p_block->children));
        s$Iter4323 = $tmp4327;
        $l4328:;
        ITable* $tmp4330 = s$Iter4323->$class->itable;
        while ($tmp4330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4330 = $tmp4330->next;
        }
        $fn4332 $tmp4331 = $tmp4330->methods[0];
        panda$core$Bit $tmp4333 = $tmp4331(s$Iter4323);
        panda$core$Bit $tmp4334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4333);
        if (!$tmp4334.value) goto $l4329;
        {
            ITable* $tmp4336 = s$Iter4323->$class->itable;
            while ($tmp4336->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4336 = $tmp4336->next;
            }
            $fn4338 $tmp4337 = $tmp4336->methods[1];
            panda$core$Object* $tmp4339 = $tmp4337(s$Iter4323);
            s4335 = ((org$pandalanguage$pandac$IRNode*) $tmp4339);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4335, p_out);
        }
        goto $l4328;
        $l4329:;
    }
    panda$core$Int64 $tmp4340 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4340;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4341;
    panda$core$String* $match$764514342;
    panda$core$String* ptr4345;
    panda$core$String* arg4348;
    org$pandalanguage$pandac$Type* baseType4362;
    panda$core$String* base4366;
    panda$core$String* indexStruct4369;
    panda$core$String* index4372;
    panda$core$String* value4382;
    panda$core$String* ptr4386;
    panda$core$String* ptr4423;
    panda$core$String* cast4426;
    m4341 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$764514342 = ((org$pandalanguage$pandac$Symbol*) m4341->value)->name;
        panda$core$Bit $tmp4344 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$764514342, &$s4343);
        if ($tmp4344.value) {
        {
            panda$core$Object* $tmp4346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4347 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4346), p_out);
            ptr4345 = $tmp4347;
            panda$core$Object* $tmp4349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4350 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4349));
            panda$core$String* $tmp4351 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4350, p_out);
            arg4348 = $tmp4351;
            panda$core$String* $tmp4353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4352, arg4348);
            panda$core$String* $tmp4355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4353, &$s4354);
            panda$core$String* $tmp4356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4355, ptr4345);
            panda$core$String* $tmp4358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4356, &$s4357);
            (($fn4359) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4358);
        }
        }
        else {
        panda$core$Bit $tmp4361 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$764514342, &$s4360);
        if ($tmp4361.value) {
        {
            panda$core$Object* $tmp4363 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4364 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4363));
            panda$core$Object* $tmp4365 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T($tmp4364->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4362 = ((org$pandalanguage$pandac$Type*) $tmp4365);
            panda$core$Object* $tmp4367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4368 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4367), p_out);
            base4366 = $tmp4368;
            panda$core$Object* $tmp4370 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4371 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4370), p_out);
            indexStruct4369 = $tmp4371;
            panda$core$String* $tmp4373 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4372 = $tmp4373;
            panda$core$String* $tmp4375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4374, index4372);
            panda$core$String* $tmp4377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4375, &$s4376);
            panda$core$String* $tmp4378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4377, indexStruct4369);
            panda$core$String* $tmp4380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4378, &$s4379);
            (($fn4381) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4380);
            panda$core$Object* $tmp4383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4384 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4383));
            panda$core$String* $tmp4385 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4384, p_out);
            value4382 = $tmp4385;
            panda$core$String* $tmp4387 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4386 = $tmp4387;
            panda$core$String* $tmp4389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4388, ptr4386);
            panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4389, &$s4390);
            panda$core$String* $tmp4392 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4362);
            panda$core$String* $tmp4393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4391, $tmp4392);
            panda$core$String* $tmp4395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4393, &$s4394);
            panda$core$String* $tmp4396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4395, base4366);
            panda$core$String* $tmp4398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4396, &$s4397);
            panda$core$String* $tmp4401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4399, &$s4400);
            panda$core$String* $tmp4403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4401, &$s4402);
            panda$core$String* $tmp4404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4403, index4372);
            panda$core$String* $tmp4406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4404, &$s4405);
            panda$core$String* $tmp4407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4398, $tmp4406);
            (($fn4408) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4407);
            panda$core$String* $tmp4410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4409, value4382);
            panda$core$String* $tmp4412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4410, &$s4411);
            panda$core$String* $tmp4413 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4362);
            panda$core$String* $tmp4414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4412, $tmp4413);
            panda$core$String* $tmp4416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4414, &$s4415);
            panda$core$String* $tmp4417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4416, ptr4386);
            panda$core$String* $tmp4419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4417, &$s4418);
            (($fn4420) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4419);
        }
        }
        else {
        panda$core$Bit $tmp4422 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$764514342, &$s4421);
        if ($tmp4422.value) {
        {
            panda$core$Object* $tmp4424 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4425 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4424), p_out);
            ptr4423 = $tmp4425;
            panda$core$String* $tmp4427 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4426 = $tmp4427;
            panda$core$String* $tmp4429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4428, cast4426);
            panda$core$String* $tmp4431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4429, &$s4430);
            panda$core$String* $tmp4432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4431, ptr4423);
            panda$core$String* $tmp4434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4432, &$s4433);
            (($fn4435) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4434);
            panda$core$String* $tmp4437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4436, cast4426);
            panda$core$String* $tmp4439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4437, &$s4438);
            (($fn4440) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4439);
        }
        }
        else {
        {
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$core$String* p_target, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m4441;
    org$pandalanguage$pandac$Type* actualMethodType4444;
    panda$core$String* actualResultType4445;
    panda$core$Bit isSuper4446;
    panda$collections$Array* args4466;
    panda$core$Int64 offset4469;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4474;
    panda$core$String* arg4494;
    panda$core$String* refTarget4531;
    panda$core$String* methodRef4535;
    panda$core$String* separator4537;
    panda$core$String* indirectVar4541;
    panda$core$String* resultType4544;
    panda$collections$Iterator* a$Iter4589;
    panda$core$String* a4601;
    m4441 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4443 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4441->owner)->name, &$s4442);
    if ($tmp4443.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4441->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4441);
    }
    }
    panda$core$Int64 $tmp4448 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4449 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4448, ((panda$core$Int64) { 1 }));
    bool $tmp4447 = $tmp4449.value;
    if (!$tmp4447) goto $l4450;
    panda$core$Object* $tmp4451 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4451)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4447 = $tmp4452.value;
    $l4450:;
    panda$core$Bit $tmp4453 = { $tmp4447 };
    isSuper4446 = $tmp4453;
    panda$core$Bit $tmp4455 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4446);
    bool $tmp4454 = $tmp4455.value;
    if (!$tmp4454) goto $l4456;
    panda$core$Bit $tmp4457 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4441);
    $tmp4454 = $tmp4457.value;
    $l4456:;
    panda$core$Bit $tmp4458 = { $tmp4454 };
    if ($tmp4458.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4459 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4441);
        actualMethodType4444 = $tmp4459;
        panda$core$Int64 $tmp4460 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType4444->subtypes);
        panda$core$Int64 $tmp4461 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4460, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4462 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4444->subtypes, $tmp4461);
        panda$core$String* $tmp4463 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4462));
        actualResultType4445 = $tmp4463;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4464 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4441);
        actualMethodType4444 = $tmp4464;
        panda$core$String* $tmp4465 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4445 = $tmp4465;
    }
    }
    panda$collections$Array* $tmp4467 = (panda$collections$Array*) malloc(40);
    $tmp4467->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4467->refCount.value = 1;
    panda$collections$Array$init($tmp4467);
    args4466 = $tmp4467;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4466, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4470 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4471 = panda$collections$ImmutableArray$get_count$R$panda$core$Int64(actualMethodType4444->subtypes);
    panda$core$Int64 $tmp4472 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4470, $tmp4471);
    panda$core$Int64 $tmp4473 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4472, ((panda$core$Int64) { 1 }));
    offset4469 = $tmp4473;
    panda$core$Int64 $tmp4475 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp4474, ((panda$core$Int64) { 0 }), $tmp4475, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp4477 = $tmp4474.start.value;
    panda$core$Int64 i4476 = { $tmp4477 };
    int64_t $tmp4479 = $tmp4474.end.value;
    int64_t $tmp4480 = $tmp4474.step.value;
    bool $tmp4481 = $tmp4474.inclusive.value;
    bool $tmp4488 = $tmp4480 > 0;
    if ($tmp4488) goto $l4486; else goto $l4487;
    $l4486:;
    if ($tmp4481) goto $l4489; else goto $l4490;
    $l4489:;
    if ($tmp4477 <= $tmp4479) goto $l4482; else goto $l4484;
    $l4490:;
    if ($tmp4477 < $tmp4479) goto $l4482; else goto $l4484;
    $l4487:;
    if ($tmp4481) goto $l4491; else goto $l4492;
    $l4491:;
    if ($tmp4477 >= $tmp4479) goto $l4482; else goto $l4484;
    $l4492:;
    if ($tmp4477 > $tmp4479) goto $l4482; else goto $l4484;
    $l4482:;
    {
        panda$core$Object* $tmp4495 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4476);
        panda$core$String* $tmp4496 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4495), p_out);
        arg4494 = $tmp4496;
        panda$core$Bit $tmp4498 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4476, offset4469);
        bool $tmp4497 = $tmp4498.value;
        if (!$tmp4497) goto $l4499;
        panda$core$Int64 $tmp4500 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4476, offset4469);
        panda$core$Object* $tmp4501 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4444->subtypes, $tmp4500);
        panda$core$Object* $tmp4502 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4476);
        panda$core$Bit $tmp4503 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4501), ((org$pandalanguage$pandac$IRNode*) $tmp4502)->type);
        $tmp4497 = $tmp4503.value;
        $l4499:;
        panda$core$Bit $tmp4504 = { $tmp4497 };
        if ($tmp4504.value) {
        {
            panda$core$Int64 $tmp4505 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4476, offset4469);
            panda$core$Object* $tmp4506 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4444->subtypes, $tmp4505);
            panda$core$String* $tmp4507 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4506));
            panda$core$String* $tmp4509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4507, &$s4508);
            panda$core$Object* $tmp4510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4476);
            panda$core$Int64 $tmp4511 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4476, offset4469);
            panda$core$Object* $tmp4512 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(actualMethodType4444->subtypes, $tmp4511);
            panda$core$String* $tmp4513 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4494, ((org$pandalanguage$pandac$IRNode*) $tmp4510)->type, ((org$pandalanguage$pandac$Type*) $tmp4512), p_out);
            panda$core$String* $tmp4514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4509, $tmp4513);
            arg4494 = $tmp4514;
        }
        }
        else {
        {
            panda$core$Object* $tmp4515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4476);
            panda$core$String* $tmp4516 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4515)->type);
            panda$core$String* $tmp4518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4516, &$s4517);
            panda$core$String* $tmp4519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4518, arg4494);
            arg4494 = $tmp4519;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4466, ((panda$core$Object*) arg4494));
    }
    $l4485:;
    if ($tmp4488) goto $l4521; else goto $l4522;
    $l4521:;
    int64_t $tmp4523 = $tmp4479 - i4476.value;
    if ($tmp4481) goto $l4524; else goto $l4525;
    $l4524:;
    if ($tmp4523 >= $tmp4480) goto $l4520; else goto $l4484;
    $l4525:;
    if ($tmp4523 > $tmp4480) goto $l4520; else goto $l4484;
    $l4522:;
    int64_t $tmp4527 = i4476.value - $tmp4479;
    if ($tmp4481) goto $l4528; else goto $l4529;
    $l4528:;
    if ($tmp4527 >= -$tmp4480) goto $l4520; else goto $l4484;
    $l4529:;
    if ($tmp4527 > -$tmp4480) goto $l4520; else goto $l4484;
    $l4520:;
    i4476.value += $tmp4480;
    goto $l4482;
    $l4484:;
    panda$core$Int64 $tmp4532 = panda$collections$Array$get_count$R$panda$core$Int64(args4466);
    panda$core$Bit $tmp4533 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4532, ((panda$core$Int64) { 0 }));
    if ($tmp4533.value) {
    {
        panda$core$Object* $tmp4534 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4466, ((panda$core$Int64) { 0 }));
        refTarget4531 = ((panda$core$String*) $tmp4534);
    }
    }
    else {
    {
        refTarget4531 = NULL;
    }
    }
    panda$core$String* $tmp4536 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4531, m4441, isSuper4446, p_out);
    methodRef4535 = $tmp4536;
    separator4537 = &$s4538;
    panda$core$Bit $tmp4539 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4441);
    if ($tmp4539.value) {
    {
        panda$core$Int64 $tmp4540 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4540;
        panda$core$String* $tmp4543 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4542, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4541 = $tmp4543;
        panda$core$String* $tmp4545 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4544 = $tmp4545;
        panda$core$String* $tmp4547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4546, indirectVar4541);
        panda$core$String* $tmp4549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4547, &$s4548);
        panda$core$String* $tmp4550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4549, resultType4544);
        panda$core$String* $tmp4552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4550, &$s4551);
        (($fn4553) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4552);
        panda$core$String* $tmp4555 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4441);
        panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4554, $tmp4555);
        panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, &$s4557);
        panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4559, methodRef4535);
        panda$core$String* $tmp4562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4560, &$s4561);
        panda$core$String* $tmp4563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4562, resultType4544);
        panda$core$String* $tmp4565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4563, &$s4564);
        panda$core$String* $tmp4566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4565, indirectVar4541);
        panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4566, &$s4567);
        panda$core$String* $tmp4569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4558, $tmp4568);
        (($fn4570) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4569);
        separator4537 = &$s4571;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4572 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4573 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4572);
        if ($tmp4573.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4575 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4441);
        panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4574, $tmp4575);
        panda$core$String* $tmp4578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4576, &$s4577);
        panda$core$String* $tmp4579 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4578, $tmp4579);
        panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4580, &$s4581);
        panda$core$String* $tmp4584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4583, methodRef4535);
        panda$core$String* $tmp4586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4584, &$s4585);
        panda$core$String* $tmp4587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4582, $tmp4586);
        (($fn4588) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4587);
    }
    }
    {
        ITable* $tmp4590 = ((panda$collections$Iterable*) args4466)->$class->itable;
        while ($tmp4590->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4590 = $tmp4590->next;
        }
        $fn4592 $tmp4591 = $tmp4590->methods[0];
        panda$collections$Iterator* $tmp4593 = $tmp4591(((panda$collections$Iterable*) args4466));
        a$Iter4589 = $tmp4593;
        $l4594:;
        ITable* $tmp4596 = a$Iter4589->$class->itable;
        while ($tmp4596->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4596 = $tmp4596->next;
        }
        $fn4598 $tmp4597 = $tmp4596->methods[0];
        panda$core$Bit $tmp4599 = $tmp4597(a$Iter4589);
        panda$core$Bit $tmp4600 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4599);
        if (!$tmp4600.value) goto $l4595;
        {
            ITable* $tmp4602 = a$Iter4589->$class->itable;
            while ($tmp4602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4602 = $tmp4602->next;
            }
            $fn4604 $tmp4603 = $tmp4602->methods[1];
            panda$core$Object* $tmp4605 = $tmp4603(a$Iter4589);
            a4601 = ((panda$core$String*) $tmp4605);
            (($fn4606) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4537);
            (($fn4607) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4601);
            separator4537 = &$s4608;
        }
        goto $l4594;
        $l4595:;
    }
    (($fn4610) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4609);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4611;
    panda$core$String* testBit4614;
    panda$core$String* ifTrue4624;
    panda$core$String* ifFalse4626;
    panda$core$String* end4640;
    panda$core$Object* $tmp4612 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4613 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4612), p_out);
    test4611 = $tmp4613;
    panda$core$String* $tmp4615 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4614 = $tmp4615;
    panda$core$String* $tmp4617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4616, testBit4614);
    panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4617, &$s4618);
    panda$core$String* $tmp4620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4619, test4611);
    panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4620, &$s4621);
    (($fn4623) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4622);
    panda$core$String* $tmp4625 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4624 = $tmp4625;
    panda$core$String* $tmp4627 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4626 = $tmp4627;
    panda$core$String* $tmp4629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4628, testBit4614);
    panda$core$String* $tmp4631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4629, &$s4630);
    panda$core$String* $tmp4632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4631, ifTrue4624);
    panda$core$String* $tmp4634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4632, &$s4633);
    panda$core$String* $tmp4635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4634, ifFalse4626);
    panda$core$String* $tmp4637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4635, &$s4636);
    (($fn4638) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4637);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4624, p_out);
    panda$core$Object* $tmp4639 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4639), p_out);
    panda$core$Int64 $tmp4641 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4641, ((panda$core$Int64) { 3 }));
    if ($tmp4642.value) {
    {
        panda$core$String* $tmp4643 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4640 = $tmp4643;
    }
    }
    else {
    {
        end4640 = ifFalse4626;
    }
    }
    panda$core$Object* $tmp4644 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4645 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4644));
    panda$core$Bit $tmp4646 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4645);
    if ($tmp4646.value) {
    {
        panda$core$String* $tmp4648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4647, end4640);
        panda$core$String* $tmp4650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4648, &$s4649);
        (($fn4651) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4650);
    }
    }
    panda$core$Int64 $tmp4652 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4652, ((panda$core$Int64) { 3 }));
    if ($tmp4653.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4626, p_out);
        panda$core$Object* $tmp4654 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4654), p_out);
        panda$core$Object* $tmp4655 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4656 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4655));
        panda$core$Bit $tmp4657 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4656);
        if ($tmp4657.value) {
        {
            panda$core$String* $tmp4659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4658, end4640);
            panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4659, &$s4660);
            (($fn4662) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4661);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4640, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4663;
    panda$core$String* range4665;
    org$pandalanguage$pandac$IRNode* block4668;
    org$pandalanguage$pandac$Type* t4670;
    panda$core$String* llt4673;
    panda$core$String* indexType4675;
    org$pandalanguage$pandac$ClassDecl* cl4679;
    panda$core$String* numberType4681;
    panda$core$String* index4688;
    panda$core$String* start4698;
    panda$core$String* indexValuePtr4708;
    panda$core$String* end4740;
    panda$core$String* rawStep4750;
    panda$core$String* step4760;
    panda$core$String* inclusive4775;
    panda$core$String* loopStart4785;
    panda$core$String* loopBody4787;
    panda$core$String* loopEnd4789;
    panda$core$String* loopTest4791;
    panda$core$String* forwardEntry4795;
    panda$core$String* backwardEntry4797;
    panda$core$String* signPrefix4799;
    panda$core$String* direction4804;
    panda$core$String* forwardEntryInclusive4831;
    panda$core$String* forwardEntryExclusive4833;
    panda$core$String* forwardEntryInclusiveTest4848;
    panda$core$String* forwardEntryExclusiveTest4880;
    panda$core$String* backwardEntryInclusive4912;
    panda$core$String* backwardEntryExclusive4914;
    panda$core$String* backwardEntryInclusiveTest4929;
    panda$core$String* backwardEntryExclusiveTest4961;
    panda$core$String* indexValue4993;
    panda$core$String* loopInc5016;
    panda$core$String* forwardLabel5018;
    panda$core$String* backwardLabel5020;
    panda$core$String* forwardDelta5033;
    panda$core$String* forwardInclusiveLabel5049;
    panda$core$String* forwardExclusiveLabel5051;
    panda$core$String* forwardInclusiveTest5062;
    panda$core$String* forwardExclusiveTest5089;
    panda$core$String* backwardDelta5116;
    panda$core$String* negStep5132;
    panda$core$String* backwardInclusiveLabel5145;
    panda$core$String* backwardExclusiveLabel5147;
    panda$core$String* backwardInclusiveTest5158;
    panda$core$String* backwardExclusiveTest5183;
    panda$core$String* inc5208;
    panda$core$String* incStruct5224;
    panda$core$Object* $tmp4664 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4663 = ((org$pandalanguage$pandac$IRNode*) $tmp4664);
    panda$core$Object* $tmp4666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4667 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4666), p_out);
    range4665 = $tmp4667;
    panda$core$Object* $tmp4669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4668 = ((org$pandalanguage$pandac$IRNode*) $tmp4669);
    panda$core$Object* $tmp4671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4672 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$IRNode*) $tmp4671)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4670 = ((org$pandalanguage$pandac$Type*) $tmp4672);
    panda$core$String* $tmp4674 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4670);
    llt4673 = $tmp4674;
    panda$core$Bit $tmp4676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4670->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4676.value) {
    {
        panda$core$Object* $tmp4677 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(t4670->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4678 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4677));
        indexType4675 = $tmp4678;
    }
    }
    else {
    {
        indexType4675 = llt4673;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4680 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4670);
    cl4679 = $tmp4680;
    panda$collections$ListView* $tmp4682 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4679);
    ITable* $tmp4683 = $tmp4682->$class->itable;
    while ($tmp4683->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4683 = $tmp4683->next;
    }
    $fn4685 $tmp4684 = $tmp4683->methods[0];
    panda$core$Object* $tmp4686 = $tmp4684($tmp4682, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4687 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4686)->type);
    numberType4681 = $tmp4687;
    panda$core$String* $tmp4689 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4663->payload));
    index4688 = $tmp4689;
    panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4690, index4688);
    panda$core$String* $tmp4693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4691, &$s4692);
    panda$core$String* $tmp4694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4693, indexType4675);
    panda$core$String* $tmp4696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4694, &$s4695);
    (($fn4697) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4696);
    panda$core$String* $tmp4699 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4698 = $tmp4699;
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4700, start4698);
    panda$core$String* $tmp4703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, &$s4702);
    panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4703, range4665);
    panda$core$String* $tmp4706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4704, &$s4705);
    (($fn4707) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4706);
    panda$core$String* $tmp4709 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4708 = $tmp4709;
    panda$core$String* $tmp4711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4710, indexValuePtr4708);
    panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, &$s4712);
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4713, indexType4675);
    panda$core$String* $tmp4716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4714, &$s4715);
    panda$core$String* $tmp4717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4716, indexType4675);
    panda$core$String* $tmp4719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4717, &$s4718);
    panda$core$String* $tmp4720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4719, index4688);
    panda$core$String* $tmp4722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4720, &$s4721);
    panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4722, &$s4723);
    (($fn4725) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4724);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4726, numberType4681);
    panda$core$String* $tmp4729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, &$s4728);
    panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4729, start4698);
    panda$core$String* $tmp4732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4730, &$s4731);
    panda$core$String* $tmp4733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4732, numberType4681);
    panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4733, &$s4734);
    panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, indexValuePtr4708);
    panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4736, &$s4737);
    (($fn4739) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4738);
    panda$core$String* $tmp4741 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4740 = $tmp4741;
    panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4742, end4740);
    panda$core$String* $tmp4745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4743, &$s4744);
    panda$core$String* $tmp4746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4745, range4665);
    panda$core$String* $tmp4748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4746, &$s4747);
    (($fn4749) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4748);
    panda$core$String* $tmp4751 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4750 = $tmp4751;
    panda$core$String* $tmp4753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4752, rawStep4750);
    panda$core$String* $tmp4755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4753, &$s4754);
    panda$core$String* $tmp4756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4755, range4665);
    panda$core$String* $tmp4758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4756, &$s4757);
    (($fn4759) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4758);
    panda$core$Bit $tmp4762 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4681, &$s4761);
    if ($tmp4762.value) {
    {
        panda$core$String* $tmp4763 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step4760 = $tmp4763;
        panda$core$String* $tmp4765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4764, step4760);
        panda$core$String* $tmp4767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4765, &$s4766);
        panda$core$String* $tmp4768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4767, rawStep4750);
        panda$core$String* $tmp4770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4768, &$s4769);
        panda$core$String* $tmp4771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4770, numberType4681);
        panda$core$String* $tmp4773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4771, &$s4772);
        (($fn4774) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4773);
    }
    }
    else {
    {
        step4760 = rawStep4750;
    }
    }
    panda$core$String* $tmp4776 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4775 = $tmp4776;
    panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4777, inclusive4775);
    panda$core$String* $tmp4780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4778, &$s4779);
    panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4780, range4665);
    panda$core$String* $tmp4783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4781, &$s4782);
    (($fn4784) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4783);
    panda$core$String* $tmp4786 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4785 = $tmp4786;
    panda$core$String* $tmp4788 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4787 = $tmp4788;
    panda$core$String* $tmp4790 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4789 = $tmp4790;
    panda$core$String* $tmp4792 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4791 = $tmp4792;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4793 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4793->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4793->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4793, ((panda$core$String*) p_f->payload), loopEnd4789, loopTest4791);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4793));
    panda$core$String* $tmp4796 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4795 = $tmp4796;
    panda$core$String* $tmp4798 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4797 = $tmp4798;
    panda$core$Bit $tmp4801 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4670)->name, &$s4800);
    if ($tmp4801.value) {
    {
        signPrefix4799 = &$s4802;
    }
    }
    else {
    {
        signPrefix4799 = &$s4803;
    }
    }
    panda$core$Bit $tmp4806 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4799, &$s4805);
    if ($tmp4806.value) {
    {
        panda$core$String* $tmp4807 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction4804 = $tmp4807;
        panda$core$String* $tmp4809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4808, direction4804);
        panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4809, &$s4810);
        panda$core$String* $tmp4812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, numberType4681);
        panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4812, &$s4813);
        panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, step4760);
        panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4815, &$s4816);
        (($fn4818) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4817);
    }
    }
    else {
    {
        direction4804 = &$s4819;
    }
    }
    panda$core$String* $tmp4821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4820, direction4804);
    panda$core$String* $tmp4823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4821, &$s4822);
    panda$core$String* $tmp4824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4823, forwardEntry4795);
    panda$core$String* $tmp4826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4824, &$s4825);
    panda$core$String* $tmp4827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4826, backwardEntry4797);
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4827, &$s4828);
    (($fn4830) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4829);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry4795, p_out);
    panda$core$String* $tmp4832 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4831 = $tmp4832;
    panda$core$String* $tmp4834 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4833 = $tmp4834;
    panda$core$String* $tmp4836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4835, inclusive4775);
    panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4836, &$s4837);
    panda$core$String* $tmp4839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, forwardEntryInclusive4831);
    panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, &$s4840);
    panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4842, forwardEntryExclusive4833);
    panda$core$String* $tmp4845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4843, &$s4844);
    panda$core$String* $tmp4846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4841, $tmp4845);
    (($fn4847) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4846);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4831, p_out);
    panda$core$String* $tmp4849 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4848 = $tmp4849;
    panda$core$String* $tmp4851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4850, forwardEntryInclusiveTest4848);
    panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, &$s4852);
    panda$core$String* $tmp4854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, signPrefix4799);
    panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4854, &$s4855);
    panda$core$String* $tmp4857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, numberType4681);
    panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4857, &$s4858);
    panda$core$String* $tmp4861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4860, start4698);
    panda$core$String* $tmp4863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4861, &$s4862);
    panda$core$String* $tmp4864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4863, end4740);
    panda$core$String* $tmp4866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4864, &$s4865);
    panda$core$String* $tmp4867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4859, $tmp4866);
    (($fn4868) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4867);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4869, forwardEntryInclusiveTest4848);
    panda$core$String* $tmp4872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4870, &$s4871);
    panda$core$String* $tmp4873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4872, loopStart4785);
    panda$core$String* $tmp4875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4873, &$s4874);
    panda$core$String* $tmp4876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4875, loopEnd4789);
    panda$core$String* $tmp4878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4876, &$s4877);
    (($fn4879) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4878);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4833, p_out);
    panda$core$String* $tmp4881 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4880 = $tmp4881;
    panda$core$String* $tmp4883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4882, forwardEntryExclusiveTest4880);
    panda$core$String* $tmp4885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4883, &$s4884);
    panda$core$String* $tmp4886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4885, signPrefix4799);
    panda$core$String* $tmp4888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4886, &$s4887);
    panda$core$String* $tmp4889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4888, numberType4681);
    panda$core$String* $tmp4891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4889, &$s4890);
    panda$core$String* $tmp4893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4892, start4698);
    panda$core$String* $tmp4895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4893, &$s4894);
    panda$core$String* $tmp4896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4895, end4740);
    panda$core$String* $tmp4898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4896, &$s4897);
    panda$core$String* $tmp4899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4891, $tmp4898);
    (($fn4900) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4899);
    panda$core$String* $tmp4902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4901, forwardEntryExclusiveTest4880);
    panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4902, &$s4903);
    panda$core$String* $tmp4905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4904, loopStart4785);
    panda$core$String* $tmp4907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4905, &$s4906);
    panda$core$String* $tmp4908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4907, loopEnd4789);
    panda$core$String* $tmp4910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4908, &$s4909);
    (($fn4911) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4910);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry4797, p_out);
    panda$core$String* $tmp4913 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive4912 = $tmp4913;
    panda$core$String* $tmp4915 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive4914 = $tmp4915;
    panda$core$String* $tmp4917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4916, inclusive4775);
    panda$core$String* $tmp4919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4917, &$s4918);
    panda$core$String* $tmp4920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4919, backwardEntryInclusive4912);
    panda$core$String* $tmp4922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4920, &$s4921);
    panda$core$String* $tmp4924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4923, backwardEntryExclusive4914);
    panda$core$String* $tmp4926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4924, &$s4925);
    panda$core$String* $tmp4927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4922, $tmp4926);
    (($fn4928) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4927);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive4912, p_out);
    panda$core$String* $tmp4930 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest4929 = $tmp4930;
    panda$core$String* $tmp4932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4931, backwardEntryInclusiveTest4929);
    panda$core$String* $tmp4934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4932, &$s4933);
    panda$core$String* $tmp4935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4934, signPrefix4799);
    panda$core$String* $tmp4937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4935, &$s4936);
    panda$core$String* $tmp4938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4937, numberType4681);
    panda$core$String* $tmp4940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4938, &$s4939);
    panda$core$String* $tmp4942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4941, start4698);
    panda$core$String* $tmp4944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4942, &$s4943);
    panda$core$String* $tmp4945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4944, end4740);
    panda$core$String* $tmp4947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4945, &$s4946);
    panda$core$String* $tmp4948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4940, $tmp4947);
    (($fn4949) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4948);
    panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4950, backwardEntryInclusiveTest4929);
    panda$core$String* $tmp4953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4951, &$s4952);
    panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4953, loopStart4785);
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, &$s4955);
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4956, loopEnd4789);
    panda$core$String* $tmp4959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4957, &$s4958);
    (($fn4960) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4959);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive4914, p_out);
    panda$core$String* $tmp4962 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest4961 = $tmp4962;
    panda$core$String* $tmp4964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4963, backwardEntryExclusiveTest4961);
    panda$core$String* $tmp4966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4964, &$s4965);
    panda$core$String* $tmp4967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, signPrefix4799);
    panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4967, &$s4968);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4969, numberType4681);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, &$s4971);
    panda$core$String* $tmp4974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4973, start4698);
    panda$core$String* $tmp4976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4974, &$s4975);
    panda$core$String* $tmp4977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4976, end4740);
    panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4977, &$s4978);
    panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4972, $tmp4979);
    (($fn4981) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4980);
    panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4982, backwardEntryExclusiveTest4961);
    panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4983, &$s4984);
    panda$core$String* $tmp4986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4985, loopStart4785);
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4986, &$s4987);
    panda$core$String* $tmp4989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, loopEnd4789);
    panda$core$String* $tmp4991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4989, &$s4990);
    (($fn4992) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4991);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4785, p_out);
    panda$core$String* $tmp4994 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4993 = $tmp4994;
    panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4995, indexValue4993);
    panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4996, &$s4997);
    panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4998, numberType4681);
    panda$core$String* $tmp5001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4999, &$s5000);
    panda$core$String* $tmp5002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5001, numberType4681);
    panda$core$String* $tmp5004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5002, &$s5003);
    panda$core$String* $tmp5005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5004, indexValuePtr4708);
    panda$core$String* $tmp5007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5005, &$s5006);
    (($fn5008) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5007);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4668, p_out);
    panda$core$Bit $tmp5009 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4668);
    panda$core$Bit $tmp5010 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5009);
    if ($tmp5010.value) {
    {
        panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5011, loopTest4791);
        panda$core$String* $tmp5014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5012, &$s5013);
        (($fn5015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5014);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4791, p_out);
    panda$core$String* $tmp5017 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5016 = $tmp5017;
    panda$core$String* $tmp5019 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5018 = $tmp5019;
    panda$core$String* $tmp5021 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5020 = $tmp5021;
    panda$core$String* $tmp5023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5022, direction4804);
    panda$core$String* $tmp5025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5023, &$s5024);
    panda$core$String* $tmp5026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5025, forwardLabel5018);
    panda$core$String* $tmp5028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5026, &$s5027);
    panda$core$String* $tmp5029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5028, backwardLabel5020);
    panda$core$String* $tmp5031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5029, &$s5030);
    (($fn5032) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5031);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5018, p_out);
    panda$core$String* $tmp5034 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5033 = $tmp5034;
    panda$core$String* $tmp5036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5035, forwardDelta5033);
    panda$core$String* $tmp5038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5036, &$s5037);
    panda$core$String* $tmp5039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5038, numberType4681);
    panda$core$String* $tmp5041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5039, &$s5040);
    panda$core$String* $tmp5042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5041, end4740);
    panda$core$String* $tmp5044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5042, &$s5043);
    panda$core$String* $tmp5045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5044, indexValue4993);
    panda$core$String* $tmp5047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5045, &$s5046);
    (($fn5048) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5047);
    panda$core$String* $tmp5050 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5049 = $tmp5050;
    panda$core$String* $tmp5052 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5051 = $tmp5052;
    panda$core$String* $tmp5054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5053, inclusive4775);
    panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, &$s5055);
    panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5056, forwardInclusiveLabel5049);
    panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, &$s5058);
    panda$core$String* $tmp5060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, forwardExclusiveLabel5051);
    (($fn5061) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5060);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5049, p_out);
    panda$core$String* $tmp5063 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5062 = $tmp5063;
    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5064, forwardInclusiveTest5062);
    panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, &$s5066);
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5067, numberType4681);
    panda$core$String* $tmp5070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5068, &$s5069);
    panda$core$String* $tmp5071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5070, forwardDelta5033);
    panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5071, &$s5072);
    panda$core$String* $tmp5074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, step4760);
    panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5074, &$s5075);
    (($fn5077) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5076);
    panda$core$String* $tmp5079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5078, forwardInclusiveTest5062);
    panda$core$String* $tmp5081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5079, &$s5080);
    panda$core$String* $tmp5082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5081, loopInc5016);
    panda$core$String* $tmp5084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5082, &$s5083);
    panda$core$String* $tmp5085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5084, loopEnd4789);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5085, &$s5086);
    (($fn5088) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5087);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5051, p_out);
    panda$core$String* $tmp5090 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5089 = $tmp5090;
    panda$core$String* $tmp5092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5091, forwardExclusiveTest5089);
    panda$core$String* $tmp5094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5092, &$s5093);
    panda$core$String* $tmp5095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5094, numberType4681);
    panda$core$String* $tmp5097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5095, &$s5096);
    panda$core$String* $tmp5098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5097, forwardDelta5033);
    panda$core$String* $tmp5100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5098, &$s5099);
    panda$core$String* $tmp5101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5100, step4760);
    panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5101, &$s5102);
    (($fn5104) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5103);
    panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5105, forwardExclusiveTest5089);
    panda$core$String* $tmp5108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5106, &$s5107);
    panda$core$String* $tmp5109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5108, loopInc5016);
    panda$core$String* $tmp5111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5109, &$s5110);
    panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5111, loopEnd4789);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, &$s5113);
    (($fn5115) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5114);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5020, p_out);
    panda$core$String* $tmp5117 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5116 = $tmp5117;
    panda$core$String* $tmp5119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5118, backwardDelta5116);
    panda$core$String* $tmp5121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5119, &$s5120);
    panda$core$String* $tmp5122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5121, numberType4681);
    panda$core$String* $tmp5124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5122, &$s5123);
    panda$core$String* $tmp5125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5124, indexValue4993);
    panda$core$String* $tmp5127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5125, &$s5126);
    panda$core$String* $tmp5128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5127, end4740);
    panda$core$String* $tmp5130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5128, &$s5129);
    (($fn5131) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5130);
    panda$core$String* $tmp5133 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5132 = $tmp5133;
    panda$core$String* $tmp5135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5134, negStep5132);
    panda$core$String* $tmp5137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5135, &$s5136);
    panda$core$String* $tmp5138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5137, numberType4681);
    panda$core$String* $tmp5140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5138, &$s5139);
    panda$core$String* $tmp5141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5140, step4760);
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5141, &$s5142);
    (($fn5144) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5143);
    panda$core$String* $tmp5146 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5145 = $tmp5146;
    panda$core$String* $tmp5148 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5147 = $tmp5148;
    panda$core$String* $tmp5150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5149, inclusive4775);
    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5150, &$s5151);
    panda$core$String* $tmp5153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5152, backwardInclusiveLabel5145);
    panda$core$String* $tmp5155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5153, &$s5154);
    panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5155, backwardExclusiveLabel5147);
    (($fn5157) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5156);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5145, p_out);
    panda$core$String* $tmp5159 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5158 = $tmp5159;
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5160, backwardInclusiveTest5158);
    panda$core$String* $tmp5163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, &$s5162);
    panda$core$String* $tmp5164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5163, numberType4681);
    panda$core$String* $tmp5166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5164, &$s5165);
    panda$core$String* $tmp5167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5166, backwardDelta5116);
    panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5167, &$s5168);
    panda$core$String* $tmp5170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, negStep5132);
    (($fn5171) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5170);
    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5172, backwardInclusiveTest5158);
    panda$core$String* $tmp5175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5173, &$s5174);
    panda$core$String* $tmp5176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5175, loopInc5016);
    panda$core$String* $tmp5178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5176, &$s5177);
    panda$core$String* $tmp5179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5178, loopEnd4789);
    panda$core$String* $tmp5181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5179, &$s5180);
    (($fn5182) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5181);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5147, p_out);
    panda$core$String* $tmp5184 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5183 = $tmp5184;
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5185, backwardExclusiveTest5183);
    panda$core$String* $tmp5188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, &$s5187);
    panda$core$String* $tmp5189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5188, numberType4681);
    panda$core$String* $tmp5191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5189, &$s5190);
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5191, backwardDelta5116);
    panda$core$String* $tmp5194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, &$s5193);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5194, negStep5132);
    (($fn5196) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5195);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5197, backwardExclusiveTest5183);
    panda$core$String* $tmp5200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5198, &$s5199);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5200, loopInc5016);
    panda$core$String* $tmp5203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5201, &$s5202);
    panda$core$String* $tmp5204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5203, loopEnd4789);
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5204, &$s5205);
    (($fn5207) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5206);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5016, p_out);
    panda$core$String* $tmp5209 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5208 = $tmp5209;
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5210, inc5208);
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, &$s5212);
    panda$core$String* $tmp5214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5213, numberType4681);
    panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5214, &$s5215);
    panda$core$String* $tmp5217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5216, indexValue4993);
    panda$core$String* $tmp5219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5217, &$s5218);
    panda$core$String* $tmp5220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, step4760);
    panda$core$String* $tmp5222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5220, &$s5221);
    (($fn5223) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5222);
    panda$core$String* $tmp5225 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5224 = $tmp5225;
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5226, incStruct5224);
    panda$core$String* $tmp5229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, &$s5228);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5229, indexType4675);
    panda$core$String* $tmp5232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, &$s5231);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5232, numberType4681);
    panda$core$String* $tmp5235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, &$s5234);
    (($fn5236) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5235);
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5237, numberType4681);
    panda$core$String* $tmp5240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5238, &$s5239);
    panda$core$String* $tmp5241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5240, inc5208);
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5241, &$s5242);
    (($fn5244) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5243);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5245, indexType4675);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, &$s5247);
    panda$core$String* $tmp5249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, incStruct5224);
    panda$core$String* $tmp5251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5249, &$s5250);
    panda$core$String* $tmp5252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5251, indexType4675);
    panda$core$String* $tmp5254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5252, &$s5253);
    panda$core$String* $tmp5255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5254, index4688);
    panda$core$String* $tmp5257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5255, &$s5256);
    (($fn5258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5257);
    panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5259, loopStart4785);
    panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, &$s5261);
    (($fn5263) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5262);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4789, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5264;
    panda$core$String* loopBody5266;
    panda$core$String* loopEnd5268;
    panda$core$String* test5277;
    panda$core$String* testBit5280;
    panda$core$String* $tmp5265 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5264 = $tmp5265;
    panda$core$String* $tmp5267 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5266 = $tmp5267;
    panda$core$String* $tmp5269 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5268 = $tmp5269;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5270 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5270->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5270->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5270, ((panda$core$String*) p_w->payload), loopEnd5268, loopStart5264);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5270));
    panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5272, loopStart5264);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, &$s5274);
    (($fn5276) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5275);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5264, p_out);
    panda$core$Object* $tmp5278 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5279 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5278), p_out);
    test5277 = $tmp5279;
    panda$core$String* $tmp5281 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5280 = $tmp5281;
    panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5282, testBit5280);
    panda$core$String* $tmp5285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5283, &$s5284);
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5285, test5277);
    panda$core$String* $tmp5288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5286, &$s5287);
    (($fn5289) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5288);
    panda$core$String* $tmp5291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5290, testBit5280);
    panda$core$String* $tmp5293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5291, &$s5292);
    panda$core$String* $tmp5294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5293, loopBody5266);
    panda$core$String* $tmp5296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5294, &$s5295);
    panda$core$String* $tmp5297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5296, loopEnd5268);
    panda$core$String* $tmp5299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5297, &$s5298);
    (($fn5300) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5299);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5266, p_out);
    panda$core$Object* $tmp5301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5301), p_out);
    panda$core$Object* $tmp5302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5303 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5302));
    panda$core$Bit $tmp5304 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5303);
    if ($tmp5304.value) {
    {
        panda$core$String* $tmp5306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5305, loopStart5264);
        panda$core$String* $tmp5308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5306, &$s5307);
        (($fn5309) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5308);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5268, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5310;
    panda$core$String* loopBody5312;
    panda$core$String* loopEnd5314;
    panda$core$String* test5323;
    panda$core$String* testBit5326;
    panda$core$String* $tmp5311 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5310 = $tmp5311;
    panda$core$String* $tmp5313 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5312 = $tmp5313;
    panda$core$String* $tmp5315 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5314 = $tmp5315;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5316 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5316->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5316->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5316, ((panda$core$String*) p_d->payload), loopEnd5314, loopStart5310);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5316));
    panda$core$String* $tmp5319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5318, loopBody5312);
    panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5319, &$s5320);
    (($fn5322) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5321);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5310, p_out);
    panda$core$Object* $tmp5324 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5325 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5324), p_out);
    test5323 = $tmp5325;
    panda$core$String* $tmp5327 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5326 = $tmp5327;
    panda$core$String* $tmp5329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5328, testBit5326);
    panda$core$String* $tmp5331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5329, &$s5330);
    panda$core$String* $tmp5332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5331, test5323);
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, &$s5333);
    (($fn5335) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5334);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5336, testBit5326);
    panda$core$String* $tmp5339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5337, &$s5338);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5339, loopBody5312);
    panda$core$String* $tmp5342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5340, &$s5341);
    panda$core$String* $tmp5343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5342, loopEnd5314);
    panda$core$String* $tmp5345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5343, &$s5344);
    (($fn5346) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5345);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5312, p_out);
    panda$core$Object* $tmp5347 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5347), p_out);
    panda$core$Object* $tmp5348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5349 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5348));
    panda$core$Bit $tmp5350 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5349);
    if ($tmp5350.value) {
    {
        panda$core$String* $tmp5352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5351, loopStart5310);
        panda$core$String* $tmp5354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5352, &$s5353);
        (($fn5355) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5354);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5314, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5356;
    panda$core$String* loopEnd5358;
    panda$core$String* $tmp5357 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5356 = $tmp5357;
    panda$core$String* $tmp5359 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5358 = $tmp5359;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5360 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5360->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5360->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5360, ((panda$core$String*) p_l->payload), loopEnd5358, loopStart5356);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5360));
    panda$core$String* $tmp5363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5362, loopStart5356);
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5363, &$s5364);
    (($fn5366) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5365);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5356, p_out);
    panda$core$Object* $tmp5367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5367), p_out);
    panda$core$Object* $tmp5368 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5369 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5368));
    panda$core$Bit $tmp5370 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5369);
    if ($tmp5370.value) {
    {
        panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5371, loopStart5356);
        panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5372, &$s5373);
        (($fn5375) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5374);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5358, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$952185376;
    org$pandalanguage$pandac$Variable* v5378;
    panda$core$String* ref5389;
    {
        $match$952185376 = p_target->kind;
        panda$core$Bit $tmp5377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$952185376, ((panda$core$Int64) { 1016 }));
        if ($tmp5377.value) {
        {
            v5378 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5380 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5378);
            panda$core$String* $tmp5381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5379, $tmp5380);
            panda$core$String* $tmp5383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5381, &$s5382);
            panda$core$String* $tmp5384 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5378->type);
            panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5383, $tmp5384);
            panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5385, &$s5386);
            (($fn5388) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5387);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5390 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref5389 = $tmp5390;
                panda$core$String* $tmp5392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5391, ref5389);
                panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5392, &$s5393);
                panda$core$String* $tmp5395 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5378->type);
                panda$core$String* $tmp5396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5394, $tmp5395);
                panda$core$String* $tmp5398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5396, &$s5397);
                panda$core$String* $tmp5399 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5378);
                panda$core$String* $tmp5400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5398, $tmp5399);
                panda$core$String* $tmp5402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5400, &$s5401);
                (($fn5403) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5402);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp5404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$952185376, ((panda$core$Int64) { 1022 }));
        if ($tmp5404.value) {
        {
        }
        }
        else {
        {
        }
        }
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* decl$Iter5405;
    org$pandalanguage$pandac$IRNode* decl5417;
    {
        ITable* $tmp5406 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5406->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5406 = $tmp5406->next;
        }
        $fn5408 $tmp5407 = $tmp5406->methods[0];
        panda$collections$Iterator* $tmp5409 = $tmp5407(((panda$collections$Iterable*) p_v->children));
        decl$Iter5405 = $tmp5409;
        $l5410:;
        ITable* $tmp5412 = decl$Iter5405->$class->itable;
        while ($tmp5412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5412 = $tmp5412->next;
        }
        $fn5414 $tmp5413 = $tmp5412->methods[0];
        panda$core$Bit $tmp5415 = $tmp5413(decl$Iter5405);
        panda$core$Bit $tmp5416 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5415);
        if (!$tmp5416.value) goto $l5411;
        {
            ITable* $tmp5418 = decl$Iter5405->$class->itable;
            while ($tmp5418->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5418 = $tmp5418->next;
            }
            $fn5420 $tmp5419 = $tmp5418->methods[1];
            panda$core$Object* $tmp5421 = $tmp5419(decl$Iter5405);
            decl5417 = ((org$pandalanguage$pandac$IRNode*) $tmp5421);
            panda$core$Int64 $tmp5422 = panda$collections$Array$get_count$R$panda$core$Int64(decl5417->children);
            panda$core$Bit $tmp5423 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5422, ((panda$core$Int64) { 1 }));
            if ($tmp5423.value) {
            {
                panda$core$Object* $tmp5424 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5417->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5425 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5417->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5424), ((org$pandalanguage$pandac$IRNode*) $tmp5425), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5426 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5417->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5426), NULL, p_out);
            }
            }
        }
        goto $l5410;
        $l5411:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$964025427;
    panda$core$String* base5434;
    panda$core$String* ptr5437;
    org$pandalanguage$pandac$ClassDecl* cl5439;
    panda$collections$ListView* fields5442;
    panda$core$Int64 index5444;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5445;
    panda$core$String* result5507;
    panda$core$String* reused5510;
    {
        $match$964025427 = p_lvalue->kind;
        panda$core$Bit $tmp5428 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$964025427, ((panda$core$Int64) { 1009 }));
        if ($tmp5428.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp5429 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5430 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5429, p_out);
            return $tmp5430;
        }
        }
        else {
        panda$core$Bit $tmp5431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$964025427, ((panda$core$Int64) { 1016 }));
        if ($tmp5431.value) {
        {
            panda$core$String* $tmp5432 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5432;
        }
        }
        else {
        panda$core$Bit $tmp5433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$964025427, ((panda$core$Int64) { 1026 }));
        if ($tmp5433.value) {
        {
            panda$core$Object* $tmp5435 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5436 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5435), p_out);
            base5434 = $tmp5436;
            panda$core$String* $tmp5438 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr5437 = $tmp5438;
            panda$core$Object* $tmp5440 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5441 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5440)->type);
            cl5439 = $tmp5441;
            panda$collections$ListView* $tmp5443 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5439);
            fields5442 = $tmp5443;
            index5444 = ((panda$core$Int64) { -1 });
            ITable* $tmp5446 = ((panda$collections$CollectionView*) fields5442)->$class->itable;
            while ($tmp5446->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5446 = $tmp5446->next;
            }
            $fn5448 $tmp5447 = $tmp5446->methods[0];
            panda$core$Int64 $tmp5449 = $tmp5447(((panda$collections$CollectionView*) fields5442));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5445, ((panda$core$Int64) { 0 }), $tmp5449, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp5451 = $tmp5445.start.value;
            panda$core$Int64 i5450 = { $tmp5451 };
            int64_t $tmp5453 = $tmp5445.end.value;
            int64_t $tmp5454 = $tmp5445.step.value;
            bool $tmp5455 = $tmp5445.inclusive.value;
            bool $tmp5462 = $tmp5454 > 0;
            if ($tmp5462) goto $l5460; else goto $l5461;
            $l5460:;
            if ($tmp5455) goto $l5463; else goto $l5464;
            $l5463:;
            if ($tmp5451 <= $tmp5453) goto $l5456; else goto $l5458;
            $l5464:;
            if ($tmp5451 < $tmp5453) goto $l5456; else goto $l5458;
            $l5461:;
            if ($tmp5455) goto $l5465; else goto $l5466;
            $l5465:;
            if ($tmp5451 >= $tmp5453) goto $l5456; else goto $l5458;
            $l5466:;
            if ($tmp5451 > $tmp5453) goto $l5456; else goto $l5458;
            $l5456:;
            {
                ITable* $tmp5468 = fields5442->$class->itable;
                while ($tmp5468->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5468 = $tmp5468->next;
                }
                $fn5470 $tmp5469 = $tmp5468->methods[0];
                panda$core$Object* $tmp5471 = $tmp5469(fields5442, i5450);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5471))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name) }).value) {
                {
                    index5444 = i5450;
                    goto $l5458;
                }
                }
            }
            $l5459:;
            if ($tmp5462) goto $l5473; else goto $l5474;
            $l5473:;
            int64_t $tmp5475 = $tmp5453 - i5450.value;
            if ($tmp5455) goto $l5476; else goto $l5477;
            $l5476:;
            if ($tmp5475 >= $tmp5454) goto $l5472; else goto $l5458;
            $l5477:;
            if ($tmp5475 > $tmp5454) goto $l5472; else goto $l5458;
            $l5474:;
            int64_t $tmp5479 = i5450.value - $tmp5453;
            if ($tmp5455) goto $l5480; else goto $l5481;
            $l5480:;
            if ($tmp5479 >= -$tmp5454) goto $l5472; else goto $l5458;
            $l5481:;
            if ($tmp5479 > -$tmp5454) goto $l5472; else goto $l5458;
            $l5472:;
            i5450.value += $tmp5454;
            goto $l5456;
            $l5458:;
            panda$core$String* $tmp5484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5483, ptr5437);
            panda$core$String* $tmp5486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5484, &$s5485);
            org$pandalanguage$pandac$Type* $tmp5487 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5439);
            panda$core$String* $tmp5488 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5487);
            panda$core$String* $tmp5489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5486, $tmp5488);
            panda$core$String* $tmp5491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5489, &$s5490);
            org$pandalanguage$pandac$Type* $tmp5493 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5439);
            panda$core$String* $tmp5494 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5493);
            panda$core$String* $tmp5495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5492, $tmp5494);
            panda$core$String* $tmp5497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5495, &$s5496);
            panda$core$String* $tmp5498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5497, base5434);
            panda$core$String* $tmp5500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5498, &$s5499);
            panda$core$String* $tmp5501 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5500, ((panda$core$Object*) wrap_panda$core$Int64(index5444)));
            panda$core$String* $tmp5503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5501, &$s5502);
            panda$core$String* $tmp5504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5491, $tmp5503);
            (($fn5505) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5504);
            return ptr5437;
        }
        }
        else {
        panda$core$Bit $tmp5506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$964025427, ((panda$core$Int64) { 1027 }));
        if ($tmp5506.value) {
        {
            panda$core$Object* $tmp5508 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5509 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5508), p_out);
            result5507 = $tmp5509;
            panda$core$String* $tmp5511 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5510 = $tmp5511;
            panda$core$String* $tmp5513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5512, reused5510);
            panda$core$String* $tmp5515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5513, &$s5514);
            panda$core$String* $tmp5516 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5515, $tmp5516);
            panda$core$String* $tmp5519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5517, &$s5518);
            panda$core$String* $tmp5521 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5520, $tmp5521);
            panda$core$String* $tmp5524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5522, &$s5523);
            panda$core$String* $tmp5525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5524, result5507);
            panda$core$String* $tmp5527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5525, &$s5526);
            panda$core$String* $tmp5528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5519, $tmp5527);
            (($fn5529) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5528);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5510));
            return result5507;
        }
        }
        else {
        {
        }
        }
        }
        }
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue5530;
    panda$core$String* value5542;
    panda$core$String* t5543;
    panda$core$Int64 op5546;
    panda$core$String* right5548;
    panda$core$Object* $tmp5532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5533 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5532)->type);
    panda$core$String* $tmp5534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5531, $tmp5533);
    panda$core$String* $tmp5536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5534, &$s5535);
    panda$core$Object* $tmp5537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5538 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5537), p_out);
    panda$core$String* $tmp5539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5536, $tmp5538);
    panda$core$String* $tmp5541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5539, &$s5540);
    lvalue5530 = $tmp5541;
    panda$core$Object* $tmp5544 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5545 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5544)->type);
    t5543 = $tmp5545;
    op5546 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5546, ((panda$core$Int64) { 73 }));
    if ($tmp5547.value) {
    {
        panda$core$Object* $tmp5549 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5550 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5549), p_out);
        right5548 = $tmp5550;
        panda$core$String* $tmp5552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5551, t5543);
        panda$core$String* $tmp5554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5552, &$s5553);
        panda$core$String* $tmp5555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5554, right5548);
        panda$core$String* $tmp5557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5555, &$s5556);
        value5542 = $tmp5557;
    }
    }
    else {
    {
    }
    }
    panda$core$String* $tmp5559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5558, value5542);
    panda$core$String* $tmp5561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5559, &$s5560);
    panda$core$String* $tmp5562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5561, lvalue5530);
    panda$core$String* $tmp5564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5562, &$s5563);
    (($fn5565) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5564);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5570;
    panda$core$String* result5572;
    panda$core$Int64 $tmp5566 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5566, ((panda$core$Int64) { 1 }));
    if ($tmp5567.value) {
    {
        panda$core$Int64 $tmp5568 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5569 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5568, ((panda$core$Int64) { 0 }));
        if ($tmp5569.value) {
        {
            panda$core$Object* $tmp5571 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5570 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5571);
            panda$core$Object* $tmp5573 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5574 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5573), p_out);
            result5572 = $tmp5574;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5575 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5575->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5575->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5575, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5572));
            panda$collections$Array$add$panda$collections$Array$T(inline5570->returns, ((panda$core$Object*) $tmp5575));
            panda$core$String* $tmp5578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5577, inline5570->exitLabel);
            panda$core$String* $tmp5580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5578, &$s5579);
            org$pandalanguage$pandac$Position* $tmp5581 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self->compiler, p_r->offset);
            panda$core$String* $tmp5582 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5580, ((panda$core$Object*) $tmp5581));
            panda$core$String* $tmp5584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5582, &$s5583);
            (($fn5585) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5584);
        }
        }
        else {
        {
            panda$core$Object* $tmp5587 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5588 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5587), p_out);
            panda$core$String* $tmp5589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5586, $tmp5588);
            panda$core$String* $tmp5591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5589, &$s5590);
            (($fn5592) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5591);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5593 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5594 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5593, ((panda$core$Int64) { 0 }));
        if ($tmp5594.value) {
        {
            panda$core$Object* $tmp5596 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5595, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5596)->exitLabel);
            panda$core$String* $tmp5599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5597, &$s5598);
            (($fn5600) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5599);
        }
        }
        else {
        {
            (($fn5602) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5601);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5604;
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5603 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5603);
    }
    }
    panda$core$Int64 $tmp5605 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5604, ((panda$core$Int64) { 0 }), $tmp5605, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5607 = $tmp5604.start.value;
    panda$core$Int64 i5606 = { $tmp5607 };
    int64_t $tmp5609 = $tmp5604.end.value;
    int64_t $tmp5610 = $tmp5604.step.value;
    bool $tmp5611 = $tmp5604.inclusive.value;
    bool $tmp5618 = $tmp5610 > 0;
    if ($tmp5618) goto $l5616; else goto $l5617;
    $l5616:;
    if ($tmp5611) goto $l5619; else goto $l5620;
    $l5619:;
    if ($tmp5607 <= $tmp5609) goto $l5612; else goto $l5614;
    $l5620:;
    if ($tmp5607 < $tmp5609) goto $l5612; else goto $l5614;
    $l5617:;
    if ($tmp5611) goto $l5621; else goto $l5622;
    $l5621:;
    if ($tmp5607 >= $tmp5609) goto $l5612; else goto $l5614;
    $l5622:;
    if ($tmp5607 > $tmp5609) goto $l5612; else goto $l5614;
    $l5612:;
    {
        panda$core$Object* $tmp5625 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5606);
        bool $tmp5624 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5625)->loopLabel != NULL }).value;
        if (!$tmp5624) goto $l5626;
        panda$core$Object* $tmp5627 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5606);
        panda$core$Bit $tmp5628 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5627)->loopLabel, p_name);
        $tmp5624 = $tmp5628.value;
        $l5626:;
        panda$core$Bit $tmp5629 = { $tmp5624 };
        if ($tmp5629.value) {
        {
            panda$core$Object* $tmp5630 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5606);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5630);
        }
        }
    }
    $l5615:;
    if ($tmp5618) goto $l5632; else goto $l5633;
    $l5632:;
    int64_t $tmp5634 = $tmp5609 - i5606.value;
    if ($tmp5611) goto $l5635; else goto $l5636;
    $l5635:;
    if ($tmp5634 >= $tmp5610) goto $l5631; else goto $l5614;
    $l5636:;
    if ($tmp5634 > $tmp5610) goto $l5631; else goto $l5614;
    $l5633:;
    int64_t $tmp5638 = i5606.value - $tmp5609;
    if ($tmp5611) goto $l5639; else goto $l5640;
    $l5639:;
    if ($tmp5638 >= -$tmp5610) goto $l5631; else goto $l5614;
    $l5640:;
    if ($tmp5638 > -$tmp5610) goto $l5631; else goto $l5614;
    $l5631:;
    i5606.value += $tmp5610;
    goto $l5612;
    $l5614:;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5642;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5643 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5642 = $tmp5643;
    panda$core$String* $tmp5645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5644, desc5642->breakLabel);
    panda$core$String* $tmp5647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5645, &$s5646);
    (($fn5648) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5647);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5649;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5650 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5649 = $tmp5650;
    panda$core$String* $tmp5652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5651, desc5649->continueLabel);
    panda$core$String* $tmp5654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5652, &$s5653);
    (($fn5655) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5654);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5657;
    panda$core$String* ifTrue5660;
    panda$core$String* ifFalse5662;
    org$pandalanguage$pandac$Position* p5675;
    panda$core$String* name5677;
    panda$core$String$Index$nullable index5678;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5681;
    panda$core$String* nameRef5683;
    panda$core$String* line5685;
    panda$core$String* msg5690;
    panda$collections$Iterator* m$Iter5697;
    org$pandalanguage$pandac$MethodDecl* m5711;
    panda$core$Bit $tmp5656 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5656.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5659 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5658), p_out);
    test5657 = $tmp5659;
    panda$core$String* $tmp5661 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5660 = $tmp5661;
    panda$core$String* $tmp5663 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5662 = $tmp5663;
    panda$core$String* $tmp5665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5664, test5657);
    panda$core$String* $tmp5667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5665, &$s5666);
    panda$core$String* $tmp5668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5667, ifTrue5660);
    panda$core$String* $tmp5670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5668, &$s5669);
    panda$core$String* $tmp5671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5670, ifFalse5662);
    panda$core$String* $tmp5673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5671, &$s5672);
    (($fn5674) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5673);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse5662, p_out);
    org$pandalanguage$pandac$Position* $tmp5676 = org$pandalanguage$pandac$Compiler$position$panda$core$Int64$R$org$pandalanguage$pandac$Position(self->compiler, p_a->offset);
    p5675 = $tmp5676;
    panda$core$String$Index$nullable $tmp5680 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p5675->file, &$s5679);
    index5678 = $tmp5680;
    if (((panda$core$Bit) { !index5678.nonnull }).value) {
    {
        name5677 = p5675->file;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp5681, index5678, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5682 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p5675->file, $tmp5681);
        name5677 = $tmp5682;
    }
    }
    panda$core$String* $tmp5684 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name5677, p_out);
    nameRef5683 = $tmp5684;
    panda$core$String* $tmp5687 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5686, ((panda$core$Object*) wrap_panda$core$Int64(p5675->line)));
    panda$core$String* $tmp5689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5687, &$s5688);
    line5685 = $tmp5689;
    panda$core$Int64 $tmp5691 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5691, ((panda$core$Int64) { 2 }));
    if ($tmp5692.value) {
    {
        panda$core$Object* $tmp5693 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5694 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5693), p_out);
        msg5690 = $tmp5694;
    }
    }
    else {
    {
        msg5690 = NULL;
    }
    }
    (($fn5696) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5695);
    {
        org$pandalanguage$pandac$Type* $tmp5698 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5699 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5698);
        ITable* $tmp5700 = ((panda$collections$Iterable*) $tmp5699->methods)->$class->itable;
        while ($tmp5700->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5700 = $tmp5700->next;
        }
        $fn5702 $tmp5701 = $tmp5700->methods[0];
        panda$collections$Iterator* $tmp5703 = $tmp5701(((panda$collections$Iterable*) $tmp5699->methods));
        m$Iter5697 = $tmp5703;
        $l5704:;
        ITable* $tmp5706 = m$Iter5697->$class->itable;
        while ($tmp5706->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5706 = $tmp5706->next;
        }
        $fn5708 $tmp5707 = $tmp5706->methods[0];
        panda$core$Bit $tmp5709 = $tmp5707(m$Iter5697);
        panda$core$Bit $tmp5710 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5709);
        if (!$tmp5710.value) goto $l5705;
        {
            ITable* $tmp5712 = m$Iter5697->$class->itable;
            while ($tmp5712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5712 = $tmp5712->next;
            }
            $fn5714 $tmp5713 = $tmp5712->methods[1];
            panda$core$Object* $tmp5715 = $tmp5713(m$Iter5697);
            m5711 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5715);
            panda$core$Bit $tmp5717 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5711)->name, &$s5716);
            if ($tmp5717.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5711);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5711);
            }
            }
        }
        goto $l5704;
        $l5705:;
    }
    if (((panda$core$Bit) { msg5690 != NULL }).value) {
    {
        panda$core$String* $tmp5720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5718, &$s5719);
        (($fn5721) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5720);
    }
    }
    else {
    {
        (($fn5723) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5722);
    }
    }
    panda$core$String* $tmp5725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5724, nameRef5683);
    panda$core$String* $tmp5727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5725, &$s5726);
    panda$core$String* $tmp5728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5727, line5685);
    panda$core$String* $tmp5730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5728, &$s5729);
    (($fn5731) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5730);
    if (((panda$core$Bit) { msg5690 != NULL }).value) {
    {
        panda$core$String* $tmp5733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5732, msg5690);
        panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5733, &$s5734);
        (($fn5736) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5735);
    }
    }
    (($fn5738) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5737);
    (($fn5740) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5739);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue5660, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$1040745741;
    {
        $match$1040745741 = p_stmt->kind;
        panda$core$Bit $tmp5742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1023 }));
        if ($tmp5742.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1000 }));
        if ($tmp5743.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1005 }));
        if ($tmp5744.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, p_stmt, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1012 }));
        if ($tmp5745.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1029 }));
        if ($tmp5746.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1013 }));
        if ($tmp5747.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1014 }));
        if ($tmp5748.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1015 }));
        if ($tmp5749.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1017 }));
        bool $tmp5752 = $tmp5753.value;
        if ($tmp5752) goto $l5754;
        panda$core$Bit $tmp5755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1018 }));
        $tmp5752 = $tmp5755.value;
        $l5754:;
        panda$core$Bit $tmp5756 = { $tmp5752 };
        bool $tmp5751 = $tmp5756.value;
        if ($tmp5751) goto $l5757;
        panda$core$Bit $tmp5758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1019 }));
        $tmp5751 = $tmp5758.value;
        $l5757:;
        panda$core$Bit $tmp5759 = { $tmp5751 };
        bool $tmp5750 = $tmp5759.value;
        if ($tmp5750) goto $l5760;
        panda$core$Bit $tmp5761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1020 }));
        $tmp5750 = $tmp5761.value;
        $l5760:;
        panda$core$Bit $tmp5762 = { $tmp5750 };
        if ($tmp5762.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1008 }));
        if ($tmp5763.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1006 }));
        if ($tmp5764.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1007 }));
        if ($tmp5765.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp5766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1040745741, ((panda$core$Int64) { 1034 }));
        if ($tmp5766.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_stmt, p_out);
        }
        }
        else {
        {
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
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* result5767;
    org$pandalanguage$pandac$Type* $tmp5768 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp5769 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5768);
    result5767 = $tmp5769;
    panda$core$Bit $tmp5771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp5770 = $tmp5771.value;
    if (!$tmp5770) goto $l5772;
    panda$core$Bit $tmp5774 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result5767, &$s5773);
    panda$core$Bit $tmp5775 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5774);
    $tmp5770 = $tmp5775.value;
    $l5772:;
    panda$core$Bit $tmp5776 = { $tmp5770 };
    if ($tmp5776.value) {
    {
        panda$core$String* $tmp5778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result5767, &$s5777);
        return $tmp5778;
    }
    }
    return result5767;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name5779;
    panda$core$Bit needsIndirection5788;
    panda$core$String* separator5800;
    panda$collections$Iterator* p$Iter5821;
    org$pandalanguage$pandac$MethodDecl$Parameter* p5833;
    panda$core$String* $tmp5780 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name5779 = $tmp5780;
    panda$core$Bit $tmp5781 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name5779));
    if ($tmp5781.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name5779));
    panda$core$String* $tmp5783 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp5784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5782, $tmp5783);
    panda$core$String* $tmp5786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5784, &$s5785);
    (($fn5787) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp5786);
    panda$core$Bit $tmp5789 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection5788 = $tmp5789;
    if (needsIndirection5788.value) {
    {
        (($fn5791) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s5790);
    }
    }
    else {
    {
        panda$core$String* $tmp5792 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn5793) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp5792);
    }
    }
    panda$core$String* $tmp5795 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp5796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5794, $tmp5795);
    panda$core$String* $tmp5798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5796, &$s5797);
    (($fn5799) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp5798);
    separator5800 = &$s5801;
    if (needsIndirection5788.value) {
    {
        panda$core$String* $tmp5803 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp5804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5802, $tmp5803);
        panda$core$String* $tmp5806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5804, &$s5805);
        (($fn5807) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp5806);
        separator5800 = &$s5808;
    }
    }
    panda$core$Bit $tmp5809 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp5810 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5809);
    if ($tmp5810.value) {
    {
        panda$core$String* $tmp5812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5811, separator5800);
        panda$core$String* $tmp5814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5812, &$s5813);
        panda$core$String* $tmp5815 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp5816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5814, $tmp5815);
        panda$core$String* $tmp5818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5816, &$s5817);
        (($fn5819) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp5818);
        separator5800 = &$s5820;
    }
    }
    {
        ITable* $tmp5822 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp5822->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5822 = $tmp5822->next;
        }
        $fn5824 $tmp5823 = $tmp5822->methods[0];
        panda$collections$Iterator* $tmp5825 = $tmp5823(((panda$collections$Iterable*) p_m->parameters));
        p$Iter5821 = $tmp5825;
        $l5826:;
        ITable* $tmp5828 = p$Iter5821->$class->itable;
        while ($tmp5828->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5828 = $tmp5828->next;
        }
        $fn5830 $tmp5829 = $tmp5828->methods[0];
        panda$core$Bit $tmp5831 = $tmp5829(p$Iter5821);
        panda$core$Bit $tmp5832 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5831);
        if (!$tmp5832.value) goto $l5827;
        {
            ITable* $tmp5834 = p$Iter5821->$class->itable;
            while ($tmp5834->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5834 = $tmp5834->next;
            }
            $fn5836 $tmp5835 = $tmp5834->methods[1];
            panda$core$Object* $tmp5837 = $tmp5835(p$Iter5821);
            p5833 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5837);
            panda$core$String* $tmp5839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5838, separator5800);
            panda$core$String* $tmp5841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5839, &$s5840);
            panda$core$String* $tmp5842 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p5833->type);
            panda$core$String* $tmp5843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5841, $tmp5842);
            panda$core$String* $tmp5845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5843, &$s5844);
            panda$core$String* $tmp5846 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p5833->name);
            panda$core$String* $tmp5847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5845, $tmp5846);
            panda$core$String* $tmp5849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5847, &$s5848);
            (($fn5850) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp5849);
            separator5800 = &$s5851;
        }
        goto $l5826;
        $l5827:;
    }
    (($fn5853) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s5852);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator5875;
    panda$collections$Iterator* p$Iter5886;
    org$pandalanguage$pandac$MethodDecl$Parameter* p5898;
    panda$io$MemoryOutputStream* bodyBuffer5920;
    panda$io$IndentedOutputStream* indentedBody5923;
    panda$collections$Iterator* s$Iter5926;
    org$pandalanguage$pandac$IRNode* s5938;
    self->currentMethod = p_m;
    self->currentBlock = &$s5854;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn5855) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    (($fn5857) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s5856);
    panda$core$Bit $tmp5858 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp5858.value) {
    {
        (($fn5860) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s5859);
    }
    }
    panda$core$String* $tmp5862 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp5863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5861, $tmp5862);
    panda$core$String* $tmp5865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5863, &$s5864);
    panda$core$String* $tmp5866 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp5867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5865, $tmp5866);
    panda$core$String* $tmp5869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5867, &$s5868);
    panda$core$String* $tmp5870 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp5871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5869, $tmp5870);
    panda$core$String* $tmp5873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5871, &$s5872);
    (($fn5874) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp5873);
    separator5875 = &$s5876;
    panda$core$Bit $tmp5877 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp5878 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5877);
    if ($tmp5878.value) {
    {
        panda$core$String* $tmp5880 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp5881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5879, $tmp5880);
        panda$core$String* $tmp5883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5881, &$s5882);
        (($fn5884) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp5883);
        separator5875 = &$s5885;
    }
    }
    {
        ITable* $tmp5887 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp5887->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5887 = $tmp5887->next;
        }
        $fn5889 $tmp5888 = $tmp5887->methods[0];
        panda$collections$Iterator* $tmp5890 = $tmp5888(((panda$collections$Iterable*) p_m->parameters));
        p$Iter5886 = $tmp5890;
        $l5891:;
        ITable* $tmp5893 = p$Iter5886->$class->itable;
        while ($tmp5893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5893 = $tmp5893->next;
        }
        $fn5895 $tmp5894 = $tmp5893->methods[0];
        panda$core$Bit $tmp5896 = $tmp5894(p$Iter5886);
        panda$core$Bit $tmp5897 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5896);
        if (!$tmp5897.value) goto $l5892;
        {
            ITable* $tmp5899 = p$Iter5886->$class->itable;
            while ($tmp5899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5899 = $tmp5899->next;
            }
            $fn5901 $tmp5900 = $tmp5899->methods[1];
            panda$core$Object* $tmp5902 = $tmp5900(p$Iter5886);
            p5898 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp5902);
            panda$core$String* $tmp5904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5903, separator5875);
            panda$core$String* $tmp5906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5904, &$s5905);
            panda$core$String* $tmp5907 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p5898->type);
            panda$core$String* $tmp5908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5906, $tmp5907);
            panda$core$String* $tmp5910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5908, &$s5909);
            panda$core$String* $tmp5911 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p5898->name);
            panda$core$String* $tmp5912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5910, $tmp5911);
            panda$core$String* $tmp5914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5912, &$s5913);
            (($fn5915) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp5914);
            separator5875 = &$s5916;
        }
        goto $l5891;
        $l5892:;
    }
    (($fn5918) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s5917);
    panda$core$Int64 $tmp5919 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp5919;
    panda$io$MemoryOutputStream* $tmp5921 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp5921->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp5921->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp5921);
    bodyBuffer5920 = $tmp5921;
    panda$io$IndentedOutputStream* $tmp5924 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp5924->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp5924->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp5924, ((panda$io$OutputStream*) bodyBuffer5920));
    indentedBody5923 = $tmp5924;
    {
        ITable* $tmp5927 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp5927->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5927 = $tmp5927->next;
        }
        $fn5929 $tmp5928 = $tmp5927->methods[0];
        panda$collections$Iterator* $tmp5930 = $tmp5928(((panda$collections$Iterable*) p_body->children));
        s$Iter5926 = $tmp5930;
        $l5931:;
        ITable* $tmp5933 = s$Iter5926->$class->itable;
        while ($tmp5933->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5933 = $tmp5933->next;
        }
        $fn5935 $tmp5934 = $tmp5933->methods[0];
        panda$core$Bit $tmp5936 = $tmp5934(s$Iter5926);
        panda$core$Bit $tmp5937 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5936);
        if (!$tmp5937.value) goto $l5932;
        {
            ITable* $tmp5939 = s$Iter5926->$class->itable;
            while ($tmp5939->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5939 = $tmp5939->next;
            }
            $fn5941 $tmp5940 = $tmp5939->methods[1];
            panda$core$Object* $tmp5942 = $tmp5940(s$Iter5926);
            s5938 = ((org$pandalanguage$pandac$IRNode*) $tmp5942);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s5938, indentedBody5923);
        }
        goto $l5931;
        $l5932:;
    }
    panda$core$String* $tmp5944 = (($fn5943) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn5945) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp5944);
    panda$core$String* $tmp5947 = (($fn5946) bodyBuffer5920->$class->vtable[0])(bodyBuffer5920);
    (($fn5948) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp5947);
    panda$core$Bit $tmp5949 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp5950 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5949);
    if ($tmp5950.value) {
    {
        org$pandalanguage$pandac$Type* $tmp5951 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp5952 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp5951);
        if ($tmp5952.value) {
        {
            (($fn5954) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s5953);
        }
        }
        else {
        {
            (($fn5956) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s5955);
        }
        }
    }
    }
    panda$core$Int64 $tmp5957 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp5957;
    (($fn5959) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s5958);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp5960 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp5960.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp5961 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp5961);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

