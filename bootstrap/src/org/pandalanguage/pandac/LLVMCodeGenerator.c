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
#include "org/pandalanguage/pandac/ClassDecl/GenericParameter.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/Pair.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/MethodShim.h"
#include "org/pandalanguage/pandac/MethodDecl/Parameter.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/InlineContext.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/Console.h"
#include "panda/core/System.h"
#include "panda/core/UInt64.h"
#include "panda/core/Char8.h"
#include "panda/core/Int8.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator/LoopDescriptor.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/io/File.h"
#include "panda/core/String/Index.h"
#include "panda/core/Range.LTpanda/core/String/Index.Q.GT.h"
#include "org/pandalanguage/pandac/SymbolTable.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$finish} };

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl} };

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
typedef panda$collections$Iterator* (*$fn525)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn531)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn537)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn564)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn603)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn614)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn620)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn626)(panda$collections$Iterator*);
typedef void (*$fn641)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn680)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn688)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn695)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn727)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn740)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn794)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn814)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn857)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn869)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn871)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn876)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn895)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn907)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn941)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1021)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1077)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1090)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1095)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1098)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1113)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1119)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1146)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1185)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1196)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1202)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1208)(panda$collections$Iterator*);
typedef void (*$fn1224)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1342)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1362)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1421)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1432)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1438)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1444)(panda$collections$Iterator*);
typedef void (*$fn1459)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1478)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1501)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1567)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1578)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1600)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1629)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1791)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1797)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1803)(panda$collections$Iterator*);
typedef void (*$fn1837)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1853)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1867)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1873)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1889)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1903)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1919)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1933)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1939)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1955)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2031)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2041)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2058)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2068)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2095)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2116)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2146)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2156)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2193)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2203)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2216)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2226)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2269)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2294)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2301)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2331)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2341)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2357)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2399)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2412)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2426)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2431)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2438)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2459)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2477)(panda$collections$CollectionView*);
typedef void (*$fn2499)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2512)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2528)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2556)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2578)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2607)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2633)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2649)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2675)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2688)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2755)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2773)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2831)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2847)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2910)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2917)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2929)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2935)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2941)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2947)(panda$collections$Iterator*);
typedef void (*$fn2959)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2961)(panda$io$OutputStream*);
typedef void (*$fn2988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3008)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3119)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3132)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3137)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3151)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3159)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3164)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3176)(panda$collections$Iterator*);
typedef void (*$fn3185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3188)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3225)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3240)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3251)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3285)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3304)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3337)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3360)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3378)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3413)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3435)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3456)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3510)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3528)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3543)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3554)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3638)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3663)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3755)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3855)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3870)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3894)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3919)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3947)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3962)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3997)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4009)(panda$collections$CollectionView*);
typedef void (*$fn4021)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4028)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4034)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4040)(panda$collections$Iterator*);
typedef void (*$fn4050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4053)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4091)(panda$collections$CollectionView*);
typedef void (*$fn4099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4117)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4141)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4159)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4256)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4292)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4298)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4304)(panda$collections$Iterator*);
typedef void (*$fn4327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4382)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4411)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4416)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4529)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4546)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4564)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4568)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4574)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4580)(panda$collections$Iterator*);
typedef void (*$fn4582)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4586)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4610)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4638)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4649)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4685)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4692)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4705)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4715)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4733)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4747)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4769)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4810)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4822)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4839)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4860)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4871)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4903)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4920)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4941)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4952)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4973)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4984)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5000)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5007)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5024)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5040)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5053)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5080)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5096)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5107)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5123)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5136)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5149)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5163)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5174)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5188)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5215)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5228)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5236)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5250)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5255)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn5291)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5298)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5311)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5321)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5339)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5353)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5363)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5373)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5388)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5398)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5439)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5451)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5468)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5489)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5500)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5521)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5532)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5549)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5570)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5581)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5613)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5629)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5653)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5669)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5682)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5725)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5736)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5752)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5765)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5778)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5803)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5817)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5828)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5857)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5879)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5884)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5907)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5920)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5931)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5940)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5959)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5972)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5983)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5992)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6006)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6026)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6041)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6058)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6064)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6070)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn6095)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn6116)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn6152)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6175)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6237)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6296)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6303)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6330)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6352)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6358)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6364)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6370)(panda$collections$Iterator*);
typedef void (*$fn6377)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6379)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6387)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6396)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6413)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6426)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6442)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6501)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6562)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6594)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6598)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6606)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6626)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6631)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6637)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6643)(panda$collections$Iterator*);
typedef void (*$fn6657)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6660)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6663)(panda$io$MemoryOutputStream*);
typedef void (*$fn6665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6682)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6692)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6697)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6703)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6709)(panda$collections$Iterator*);
typedef void (*$fn6723)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6726)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6738)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6744)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6750)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6752)(panda$io$MemoryOutputStream*);
typedef void (*$fn6754)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6755)(panda$io$MemoryOutputStream*);
typedef void (*$fn6757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6763)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6765)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6768)(panda$io$OutputStream*, panda$core$String*);

static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x64\x61\x74\x61\x6C\x61\x79\x6F\x75\x74\x20\x3D\x20\x22\x65\x2D\x70\x3A\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x69\x31\x3A\x38\x3A\x38\x2D\x69\x38\x3A\x38\x3A\x38\x2D\x69\x31\x36\x3A\x31\x36\x3A\x31\x36\x2D\x69\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x69\x36\x34\x3A", 72, NULL };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34\x3A\x36\x34\x2D\x66\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x66\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x31\x32\x38\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D\x61\x30\x3A\x30\x3A\x36\x34\x2D\x73\x30\x3A\x36\x34\x3A\x36\x34\x2D\x66\x38\x30\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D", 78, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x38\x3A\x31\x36\x3A\x33\x32\x3A\x36\x34\x2D\x53\x31\x32\x38\x22", 17, NULL };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6C\x65\x20\x3D\x20\x22\x78\x38\x36\x5F\x36\x34\x2D\x61\x70\x70\x6C\x65\x2D\x6D\x61\x63\x6F\x73\x78\x31\x30\x2E\x38\x2E\x30\x22", 43, NULL };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x29", 24, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x2C\x20\x69\x36\x34\x29", 30, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x29", 23, NULL };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 60, NULL };
static panda$core$String $s82 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s84 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s87 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, NULL };
static panda$core$String $s89 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, NULL };
static panda$core$String $s105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, NULL };
static panda$core$String $s109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34", 2, NULL };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10, NULL };
static panda$core$String $s251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, NULL };
static panda$core$String $s344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, NULL };
static panda$core$String $s352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, NULL };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, NULL };
static panda$core$String $s546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, NULL };
static panda$core$String $s931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s1142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, NULL };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, NULL };
static panda$core$String $s1192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s1227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, NULL };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s1537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, NULL };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, NULL };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, NULL };
static panda$core$String $s1726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, NULL };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, NULL };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, NULL };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, NULL };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, NULL };
static panda$core$String $s1768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, NULL };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, NULL };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s1777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s1783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, NULL };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, NULL };
static panda$core$String $s1947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, NULL };
static panda$core$String $s1961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, NULL };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, NULL };
static panda$core$String $s1971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, NULL };
static panda$core$String $s1973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, NULL };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, NULL };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, NULL };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, NULL };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, NULL };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, NULL };
static panda$core$String $s1991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, NULL };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, NULL };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, NULL };
static panda$core$String $s2001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 48, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 30, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s2185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, NULL };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, NULL };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, NULL };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, NULL };
static panda$core$String $s2360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, NULL };
static panda$core$String $s2386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, NULL };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s2507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, NULL };
static panda$core$String $s2549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, NULL };
static panda$core$String $s2619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, NULL };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, NULL };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, NULL };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, NULL };
static panda$core$String $s2824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, NULL };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, NULL };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, NULL };
static panda$core$String $s2904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, NULL };
static panda$core$String $s2921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s2927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s2954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s2999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s3117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s3121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s3144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3178 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, NULL };
static panda$core$String $s3263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, NULL };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s3325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, NULL };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, NULL };
static panda$core$String $s3334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, NULL };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, NULL };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s3382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s3533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, NULL };
static panda$core$String $s3569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, NULL };
static panda$core$String $s3572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s3574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s3577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, NULL };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, NULL };
static panda$core$String $s3689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, NULL };
static panda$core$String $s3690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, NULL };
static panda$core$String $s3731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, NULL };
static panda$core$String $s3739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s3861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s3868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s3937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s3945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, NULL };
static panda$core$String $s3950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, NULL };
static panda$core$String $s3952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, NULL };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s3975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s3976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s3983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, NULL };
static panda$core$String $s4002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s4012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, NULL };
static panda$core$String $s4014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, NULL };
static panda$core$String $s4019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s4023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, NULL };
static panda$core$String $s4048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s4056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, NULL };
static panda$core$String $s4058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, NULL };
static panda$core$String $s4069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s4071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 69, NULL };
static panda$core$String $s4079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, NULL };
static panda$core$String $s4081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, NULL };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 26, NULL };
static panda$core$String $s4103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s4106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, NULL };
static panda$core$String $s4131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, NULL };
static panda$core$String $s4148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, NULL };
static panda$core$String $s4152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s4157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s4162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s4167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, NULL };
static panda$core$String $s4185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s4199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s4204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s4209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s4221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, NULL };
static panda$core$String $s4223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s4233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s4239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s4242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, NULL };
static panda$core$String $s4251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, NULL };
static panda$core$String $s4254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, NULL };
static panda$core$String $s4320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s4348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s4368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s4376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, NULL };
static panda$core$String $s4404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s4409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s4412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, NULL };
static panda$core$String $s4414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s4484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s4522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, NULL };
static panda$core$String $s4535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s4698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s4759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, NULL };
static panda$core$String $s4762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s4787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s4792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s4795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, NULL };
static panda$core$String $s4805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, NULL };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s4836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s4850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s4882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s4917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, NULL };
static panda$core$String $s4931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, NULL };
static panda$core$String $s4963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s4992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s5134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s5207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s5223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s5226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s5229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s5231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s5304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s5309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s5324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s5329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s5340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s5366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s5375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s5378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, NULL };
static panda$core$String $s5383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, NULL };
static panda$core$String $s5414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s5416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s5418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s5421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s5424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s5426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s5429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, NULL };
static panda$core$String $s5434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, NULL };
static panda$core$String $s5441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s5479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s5511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, NULL };
static panda$core$String $s5560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, NULL };
static panda$core$String $s5592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s5763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s5836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s5852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s5855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s5858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s5860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s6004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s6013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s6024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s6031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s6039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s6137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s6146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, NULL };
static panda$core$String $s6149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s6164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s6172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s6189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s6209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s6228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s6235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s6245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s6292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s6294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s6301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s6322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s6325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s6328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s6342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s6344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s6351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, NULL };
static panda$core$String $s6372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, NULL };
static panda$core$String $s6374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, NULL };
static panda$core$String $s6375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, NULL };
static panda$core$String $s6378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, NULL };
static panda$core$String $s6380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, NULL };
static panda$core$String $s6382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, NULL };
static panda$core$String $s6390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s6395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s6406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s6411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s6415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, NULL };
static panda$core$String $s6419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, NULL };
static panda$core$String $s6421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s6440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, NULL };
static panda$core$String $s6491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, NULL };
static panda$core$String $s6493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s6499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, NULL };
static panda$core$String $s6558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s6560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, NULL };
static panda$core$String $s6592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s6601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s6662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, NULL };
static panda$core$String $s6664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s6667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s6669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s6762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s6764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s6767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };

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
            panda$core$Object* $tmp371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp372 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp371));
            return $tmp372;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp373 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp375 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp373))->name, &$s374);
            if ($tmp375.value) {
            {
                panda$core$Object* $tmp376 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
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
            panda$core$Object* $tmp395 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
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
            panda$core$Int64 $tmp401 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp402 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp401, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp403 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp402);
            panda$core$String* $tmp404 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp403));
            panda$core$MutableString$init$panda$core$String($tmp399, $tmp404);
            result398 = $tmp399;
            panda$core$MutableString$append$panda$core$String(result398, &$s405);
            panda$core$Int64 $tmp407 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp408 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp407, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp406, ((panda$core$Int64) { 0 }), $tmp408, ((panda$core$Bit) { false }));
            int64_t $tmp410 = $tmp406.min.value;
            panda$core$Int64 i409 = { $tmp410 };
            int64_t $tmp412 = $tmp406.max.value;
            bool $tmp413 = $tmp406.inclusive.value;
            bool $tmp420 = 1 > 0;
            if ($tmp420) goto $l418; else goto $l419;
            $l418:;
            if ($tmp413) goto $l421; else goto $l422;
            $l421:;
            if ($tmp410 <= $tmp412) goto $l414; else goto $l416;
            $l422:;
            if ($tmp410 < $tmp412) goto $l414; else goto $l416;
            $l419:;
            if ($tmp413) goto $l423; else goto $l424;
            $l423:;
            if ($tmp410 >= $tmp412) goto $l414; else goto $l416;
            $l424:;
            if ($tmp410 > $tmp412) goto $l414; else goto $l416;
            $l414:;
            {
                panda$core$Bit $tmp426 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i409, ((panda$core$Int64) { 0 }));
                if ($tmp426.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result398, &$s427);
                }
                }
                panda$core$Object* $tmp428 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i409);
                panda$core$String* $tmp429 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp428));
                panda$core$MutableString$append$panda$core$String(result398, $tmp429);
            }
            $l417:;
            if ($tmp420) goto $l431; else goto $l432;
            $l431:;
            int64_t $tmp433 = $tmp412 - i409.value;
            if ($tmp413) goto $l434; else goto $l435;
            $l434:;
            if ($tmp433 >= 1) goto $l430; else goto $l416;
            $l435:;
            if ($tmp433 > 1) goto $l430; else goto $l416;
            $l432:;
            int64_t $tmp437 = i409.value - $tmp412;
            if ($tmp413) goto $l438; else goto $l439;
            $l438:;
            if ($tmp437 >= -1) goto $l430; else goto $l416;
            $l439:;
            if ($tmp437 > -1) goto $l430; else goto $l416;
            $l430:;
            i409.value += 1;
            goto $l414;
            $l416:;
            panda$core$MutableString$append$panda$core$String(result398, &$s441);
            panda$core$String* $tmp442 = panda$core$MutableString$convert$R$panda$core$String(result398);
            return $tmp442;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp443.value) {
    {
        panda$core$Object* $tmp444 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp445 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp444));
        return $tmp445;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, p_t);
    panda$core$String* $tmp447 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s446, $tmp447);
    panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, &$s449);
    return $tmp450;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp451 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s452);
    return $tmp453;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType454;
    panda$core$MutableString* result456;
    panda$core$Range$LTpanda$core$Int64$GT $tmp473;
    org$pandalanguage$pandac$Type* $tmp455 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType454 = $tmp455;
    panda$core$MutableString* $tmp457 = (panda$core$MutableString*) malloc(40);
    $tmp457->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp457->refCount.value = 1;
    panda$core$MutableString$init($tmp457);
    result456 = $tmp457;
    panda$core$Int64 $tmp459 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType454->subtypes);
    panda$core$Int64 $tmp460 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp459, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp461 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType454->subtypes, $tmp460);
    panda$core$String* $tmp462 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp461));
    panda$core$MutableString$append$panda$core$String(result456, $tmp462);
    panda$core$MutableString$append$panda$core$String(result456, &$s463);
    panda$core$Bit $tmp464 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp464.value);
    panda$core$String* $tmp466 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s465, $tmp466);
    panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp467, &$s468);
    panda$core$MutableString$append$panda$core$String(result456, $tmp469);
    panda$core$Bit $tmp470 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp470.value) {
    {
        panda$core$MutableString$append$panda$core$String(result456, &$s471);
    }
    }
    panda$core$MutableString$append$panda$core$String(result456, &$s472);
    panda$core$Int64 $tmp474 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType454->subtypes);
    panda$core$Int64 $tmp475 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp474, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp473, ((panda$core$Int64) { 0 }), $tmp475, ((panda$core$Bit) { false }));
    int64_t $tmp477 = $tmp473.min.value;
    panda$core$Int64 i476 = { $tmp477 };
    int64_t $tmp479 = $tmp473.max.value;
    bool $tmp480 = $tmp473.inclusive.value;
    bool $tmp487 = 1 > 0;
    if ($tmp487) goto $l485; else goto $l486;
    $l485:;
    if ($tmp480) goto $l488; else goto $l489;
    $l488:;
    if ($tmp477 <= $tmp479) goto $l481; else goto $l483;
    $l489:;
    if ($tmp477 < $tmp479) goto $l481; else goto $l483;
    $l486:;
    if ($tmp480) goto $l490; else goto $l491;
    $l490:;
    if ($tmp477 >= $tmp479) goto $l481; else goto $l483;
    $l491:;
    if ($tmp477 > $tmp479) goto $l481; else goto $l483;
    $l481:;
    {
        panda$core$MutableString$append$panda$core$String(result456, &$s493);
        panda$core$Object* $tmp494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType454->subtypes, i476);
        panda$core$String* $tmp495 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp494));
        panda$core$MutableString$append$panda$core$String(result456, $tmp495);
    }
    $l484:;
    if ($tmp487) goto $l497; else goto $l498;
    $l497:;
    int64_t $tmp499 = $tmp479 - i476.value;
    if ($tmp480) goto $l500; else goto $l501;
    $l500:;
    if ($tmp499 >= 1) goto $l496; else goto $l483;
    $l501:;
    if ($tmp499 > 1) goto $l496; else goto $l483;
    $l498:;
    int64_t $tmp503 = i476.value - $tmp479;
    if ($tmp480) goto $l504; else goto $l505;
    $l504:;
    if ($tmp503 >= -1) goto $l496; else goto $l483;
    $l505:;
    if ($tmp503 > -1) goto $l496; else goto $l483;
    $l496:;
    i476.value += 1;
    goto $l481;
    $l483:;
    panda$core$MutableString$append$panda$core$String(result456, &$s507);
    panda$core$String* $tmp508 = panda$core$MutableString$convert$R$panda$core$String(result456);
    return $tmp508;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp509.value);
    panda$core$Object* $tmp510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp510));
    panda$core$Object* $tmp512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp513 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp512));
    panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s511, $tmp513);
    panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp514, &$s515);
    return $tmp516;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces517;
    panda$core$String* previous520;
    panda$collections$Iterator* intfType$Iter522;
    org$pandalanguage$pandac$Type* intfType534;
    org$pandalanguage$pandac$ClassDecl* intf539;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC541;
    panda$collections$ListView* methods543;
    panda$core$String* name545;
    panda$core$String* t555;
    panda$core$MutableString* result569;
    panda$core$String* separator609;
    panda$collections$Iterator* m$Iter611;
    org$pandalanguage$pandac$MethodDecl* m623;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry631;
    org$pandalanguage$pandac$Type* $tmp518 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp519 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp518);
    interfaces517 = $tmp519;
    previous520 = &$s521;
    {
        ITable* $tmp523 = ((panda$collections$Iterable*) interfaces517)->$class->itable;
        while ($tmp523->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp523 = $tmp523->next;
        }
        $fn525 $tmp524 = $tmp523->methods[0];
        panda$collections$Iterator* $tmp526 = $tmp524(((panda$collections$Iterable*) interfaces517));
        intfType$Iter522 = $tmp526;
        $l527:;
        ITable* $tmp529 = intfType$Iter522->$class->itable;
        while ($tmp529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp529 = $tmp529->next;
        }
        $fn531 $tmp530 = $tmp529->methods[0];
        panda$core$Bit $tmp532 = $tmp530(intfType$Iter522);
        panda$core$Bit $tmp533 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp532);
        if (!$tmp533.value) goto $l528;
        {
            ITable* $tmp535 = intfType$Iter522->$class->itable;
            while ($tmp535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp535 = $tmp535->next;
            }
            $fn537 $tmp536 = $tmp535->methods[1];
            panda$core$Object* $tmp538 = $tmp536(intfType$Iter522);
            intfType534 = ((org$pandalanguage$pandac$Type*) $tmp538);
            org$pandalanguage$pandac$ClassDecl* $tmp540 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType534);
            intf539 = $tmp540;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp542 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf539);
            intfCC541 = $tmp542;
            panda$collections$ListView* $tmp544 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType534);
            methods543 = $tmp544;
            panda$core$String* $tmp547 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s546, $tmp547);
            panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, &$s549);
            panda$core$String* $tmp551 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf539)->name);
            panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, $tmp551);
            panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s553);
            name545 = $tmp554;
            org$pandalanguage$pandac$Type* $tmp557 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp558 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp557);
            panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s556, $tmp558);
            panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, &$s560);
            ITable* $tmp562 = ((panda$collections$CollectionView*) methods543)->$class->itable;
            while ($tmp562->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp562 = $tmp562->next;
            }
            $fn564 $tmp563 = $tmp562->methods[0];
            panda$core$Int64 $tmp565 = $tmp563(((panda$collections$CollectionView*) methods543));
            panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp561, ((panda$core$Object*) wrap_panda$core$Int64($tmp565)));
            panda$core$String* $tmp568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp566, &$s567);
            t555 = $tmp568;
            panda$core$MutableString* $tmp570 = (panda$core$MutableString*) malloc(40);
            $tmp570->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp570->refCount.value = 1;
            panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s572, name545);
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s574);
            panda$core$String* $tmp576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, t555);
            panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, &$s577);
            org$pandalanguage$pandac$Type* $tmp579 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp580 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp579);
            panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, $tmp580);
            panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, &$s582);
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s584, intfCC541->type);
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp585, &$s586);
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, intfCC541->name);
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, &$s589);
            org$pandalanguage$pandac$Type* $tmp591 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp592 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp591);
            panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, $tmp592);
            panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, &$s594);
            panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp583, $tmp595);
            panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s597, previous520);
            panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s599);
            ITable* $tmp601 = ((panda$collections$CollectionView*) methods543)->$class->itable;
            while ($tmp601->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp601 = $tmp601->next;
            }
            $fn603 $tmp602 = $tmp601->methods[0];
            panda$core$Int64 $tmp604 = $tmp602(((panda$collections$CollectionView*) methods543));
            panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp600, ((panda$core$Object*) wrap_panda$core$Int64($tmp604)));
            panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s606);
            panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, $tmp607);
            panda$core$MutableString$init$panda$core$String($tmp570, $tmp608);
            result569 = $tmp570;
            separator609 = &$s610;
            {
                ITable* $tmp612 = ((panda$collections$Iterable*) methods543)->$class->itable;
                while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp612 = $tmp612->next;
                }
                $fn614 $tmp613 = $tmp612->methods[0];
                panda$collections$Iterator* $tmp615 = $tmp613(((panda$collections$Iterable*) methods543));
                m$Iter611 = $tmp615;
                $l616:;
                ITable* $tmp618 = m$Iter611->$class->itable;
                while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp618 = $tmp618->next;
                }
                $fn620 $tmp619 = $tmp618->methods[0];
                panda$core$Bit $tmp621 = $tmp619(m$Iter611);
                panda$core$Bit $tmp622 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp621);
                if (!$tmp622.value) goto $l617;
                {
                    ITable* $tmp624 = m$Iter611->$class->itable;
                    while ($tmp624->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp624 = $tmp624->next;
                    }
                    $fn626 $tmp625 = $tmp624->methods[1];
                    panda$core$Object* $tmp627 = $tmp625(m$Iter611);
                    m623 = ((org$pandalanguage$pandac$MethodDecl*) $tmp627);
                    panda$core$MutableString$append$panda$core$String(result569, separator609);
                    separator609 = &$s628;
                    panda$core$Bit $tmp629 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m623->annotations);
                    if ($tmp629.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result569, &$s630);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp632 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m623);
                        entry631 = $tmp632;
                        panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s633, ((panda$core$String*) entry631->second));
                        panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp634, &$s635);
                        panda$core$String* $tmp637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp636, ((panda$core$String*) entry631->first));
                        panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp637, &$s638);
                        panda$core$MutableString$append$panda$core$String(result569, $tmp639);
                    }
                    }
                }
                goto $l616;
                $l617:;
            }
            panda$core$MutableString$append$panda$core$String(result569, &$s640);
            (($fn641) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result569));
            panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s642, t555);
            panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp643, &$s644);
            panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp645, name545);
            panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, &$s647);
            previous520 = $tmp648;
        }
        goto $l527;
        $l528:;
    }
    return previous520;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer649;
    panda$io$IndentedOutputStream* out652;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found655;
    panda$core$Int64 oldVarCount663;
    org$pandalanguage$pandac$Type* effectiveReturnType664;
    panda$core$String* resultName668;
    panda$core$MutableString* resultType672;
    panda$core$String* self_t689;
    panda$core$Range$LTpanda$core$Int64$GT $tmp697;
    panda$core$String* pType716;
    panda$collections$Array* casts742;
    panda$core$Range$LTpanda$core$Int64$GT $tmp745;
    panda$core$String* p764;
    panda$core$String* returnValue786;
    panda$core$Range$LTpanda$core$Int64$GT $tmp815;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result872;
    panda$io$MemoryOutputStream* $tmp650 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp650->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp650->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp650);
    outBuffer649 = $tmp650;
    panda$io$IndentedOutputStream* $tmp653 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp653->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp653->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp653, ((panda$io$OutputStream*) outBuffer649));
    out652 = $tmp653;
    panda$core$Object* $tmp656 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found655 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp656);
    if (((panda$core$Bit) { found655 != NULL }).value) {
    {
        return found655;
    }
    }
    panda$core$Bit $tmp657 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp657.value);
    panda$core$Int64 $tmp658 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp659 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp660 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp659, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp658, $tmp660);
    PANDA_ASSERT($tmp661.value);
    panda$core$Bit $tmp662 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp662.value);
    oldVarCount663 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp665 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp666 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp665, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp667 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp666);
    effectiveReturnType664 = ((org$pandalanguage$pandac$Type*) $tmp667);
    panda$core$String* $tmp669 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp669, &$s670);
    resultName668 = $tmp671;
    panda$core$MutableString* $tmp673 = (panda$core$MutableString*) malloc(40);
    $tmp673->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp673->refCount.value = 1;
    panda$core$String* $tmp675 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType664);
    panda$core$MutableString$init$panda$core$String($tmp673, $tmp675);
    resultType672 = $tmp673;
    (($fn677) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), &$s676);
    panda$core$Bit $tmp678 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_raw->owner);
    if ($tmp678.value) {
    {
        (($fn680) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), &$s679);
    }
    }
    panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s681, ((panda$core$Object*) resultType672));
    panda$core$String* $tmp684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp682, &$s683);
    panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp684, resultName668);
    panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp685, &$s686);
    (($fn688) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp687);
    panda$core$String* $tmp690 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t689 = $tmp690;
    panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s691, self_t689);
    panda$core$String* $tmp694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp692, &$s693);
    (($fn695) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp694);
    panda$core$MutableString$append$panda$core$String(resultType672, &$s696);
    panda$core$MutableString$append$panda$core$String(resultType672, self_t689);
    panda$core$Int64 $tmp698 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp697, ((panda$core$Int64) { 0 }), $tmp698, ((panda$core$Bit) { false }));
    int64_t $tmp700 = $tmp697.min.value;
    panda$core$Int64 i699 = { $tmp700 };
    int64_t $tmp702 = $tmp697.max.value;
    bool $tmp703 = $tmp697.inclusive.value;
    bool $tmp710 = 1 > 0;
    if ($tmp710) goto $l708; else goto $l709;
    $l708:;
    if ($tmp703) goto $l711; else goto $l712;
    $l711:;
    if ($tmp700 <= $tmp702) goto $l704; else goto $l706;
    $l712:;
    if ($tmp700 < $tmp702) goto $l704; else goto $l706;
    $l709:;
    if ($tmp703) goto $l713; else goto $l714;
    $l713:;
    if ($tmp700 >= $tmp702) goto $l704; else goto $l706;
    $l714:;
    if ($tmp700 > $tmp702) goto $l704; else goto $l706;
    $l704:;
    {
        panda$core$Object* $tmp717 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i699);
        panda$core$String* $tmp718 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp717));
        pType716 = $tmp718;
        panda$core$MutableString$append$panda$core$String(resultType672, &$s719);
        panda$core$MutableString$append$panda$core$String(resultType672, pType716);
        panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s720, pType716);
        panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp721, &$s722);
        panda$core$String* $tmp724 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp723, ((panda$core$Object*) wrap_panda$core$Int64(i699)));
        panda$core$String* $tmp726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp724, &$s725);
        (($fn727) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp726);
    }
    $l707:;
    if ($tmp710) goto $l729; else goto $l730;
    $l729:;
    int64_t $tmp731 = $tmp702 - i699.value;
    if ($tmp703) goto $l732; else goto $l733;
    $l732:;
    if ($tmp731 >= 1) goto $l728; else goto $l706;
    $l733:;
    if ($tmp731 > 1) goto $l728; else goto $l706;
    $l730:;
    int64_t $tmp735 = i699.value - $tmp702;
    if ($tmp703) goto $l736; else goto $l737;
    $l736:;
    if ($tmp735 >= -1) goto $l728; else goto $l706;
    $l737:;
    if ($tmp735 > -1) goto $l728; else goto $l706;
    $l728:;
    i699.value += 1;
    goto $l704;
    $l706:;
    (($fn740) ((panda$io$OutputStream*) out652)->$class->vtable[19])(((panda$io$OutputStream*) out652), &$s739);
    panda$core$MutableString$append$panda$core$String(resultType672, &$s741);
    panda$collections$Array* $tmp743 = (panda$collections$Array*) malloc(40);
    $tmp743->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp743->refCount.value = 1;
    panda$collections$Array$init($tmp743);
    casts742 = $tmp743;
    panda$core$Int64 $tmp746 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp745, ((panda$core$Int64) { 0 }), $tmp746, ((panda$core$Bit) { false }));
    int64_t $tmp748 = $tmp745.min.value;
    panda$core$Int64 i747 = { $tmp748 };
    int64_t $tmp750 = $tmp745.max.value;
    bool $tmp751 = $tmp745.inclusive.value;
    bool $tmp758 = 1 > 0;
    if ($tmp758) goto $l756; else goto $l757;
    $l756:;
    if ($tmp751) goto $l759; else goto $l760;
    $l759:;
    if ($tmp748 <= $tmp750) goto $l752; else goto $l754;
    $l760:;
    if ($tmp748 < $tmp750) goto $l752; else goto $l754;
    $l757:;
    if ($tmp751) goto $l761; else goto $l762;
    $l761:;
    if ($tmp748 >= $tmp750) goto $l752; else goto $l754;
    $l762:;
    if ($tmp748 > $tmp750) goto $l752; else goto $l754;
    $l752:;
    {
        panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s765, ((panda$core$Object*) wrap_panda$core$Int64(i747)));
        panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, &$s767);
        p764 = $tmp768;
        panda$core$Object* $tmp769 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i747);
        panda$core$Object* $tmp770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i747);
        panda$core$Bit $tmp771 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp769)->type, ((org$pandalanguage$pandac$Type*) $tmp770));
        if ($tmp771.value) {
        {
            panda$core$Object* $tmp772 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i747);
            panda$core$Object* $tmp773 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i747);
            panda$core$String* $tmp774 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p764, ((org$pandalanguage$pandac$Type*) $tmp772), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp773)->type, out652);
            panda$collections$Array$add$panda$collections$Array$T(casts742, ((panda$core$Object*) $tmp774));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts742, ((panda$core$Object*) p764));
        }
        }
    }
    $l755:;
    if ($tmp758) goto $l776; else goto $l777;
    $l776:;
    int64_t $tmp778 = $tmp750 - i747.value;
    if ($tmp751) goto $l779; else goto $l780;
    $l779:;
    if ($tmp778 >= 1) goto $l775; else goto $l754;
    $l780:;
    if ($tmp778 > 1) goto $l775; else goto $l754;
    $l777:;
    int64_t $tmp782 = i747.value - $tmp750;
    if ($tmp751) goto $l783; else goto $l784;
    $l783:;
    if ($tmp782 >= -1) goto $l775; else goto $l754;
    $l784:;
    if ($tmp782 > -1) goto $l775; else goto $l754;
    $l775:;
    i747.value += 1;
    goto $l752;
    $l754:;
    org$pandalanguage$pandac$Type* $tmp787 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp788 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp787);
    if ($tmp788.value) {
    {
        panda$core$String* $tmp789 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue786 = $tmp789;
        panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s790, returnValue786);
        panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp791, &$s792);
        (($fn794) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp793);
    }
    }
    else {
    {
        returnValue786 = &$s795;
    }
    }
    panda$core$String* $tmp797 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s796, $tmp797);
    panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp798, &$s799);
    panda$core$String* $tmp801 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
    panda$core$String* $tmp802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp800, $tmp801);
    panda$core$String* $tmp804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp802, &$s803);
    panda$core$String* $tmp805 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp804, $tmp805);
    panda$core$String* $tmp808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp806, &$s807);
    panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s809, self_t689);
    panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp810, &$s811);
    panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp808, $tmp812);
    (($fn814) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp813);
    panda$core$Int64 $tmp816 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp815, ((panda$core$Int64) { 0 }), $tmp816, ((panda$core$Bit) { false }));
    int64_t $tmp818 = $tmp815.min.value;
    panda$core$Int64 i817 = { $tmp818 };
    int64_t $tmp820 = $tmp815.max.value;
    bool $tmp821 = $tmp815.inclusive.value;
    bool $tmp828 = 1 > 0;
    if ($tmp828) goto $l826; else goto $l827;
    $l826:;
    if ($tmp821) goto $l829; else goto $l830;
    $l829:;
    if ($tmp818 <= $tmp820) goto $l822; else goto $l824;
    $l830:;
    if ($tmp818 < $tmp820) goto $l822; else goto $l824;
    $l827:;
    if ($tmp821) goto $l831; else goto $l832;
    $l831:;
    if ($tmp818 >= $tmp820) goto $l822; else goto $l824;
    $l832:;
    if ($tmp818 > $tmp820) goto $l822; else goto $l824;
    $l822:;
    {
        panda$core$Object* $tmp835 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i817);
        panda$core$String* $tmp836 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp835)->type);
        panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s834, $tmp836);
        panda$core$String* $tmp839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp837, &$s838);
        panda$core$Object* $tmp840 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts742, i817);
        panda$core$String* $tmp841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp839, ((panda$core$String*) $tmp840));
        panda$core$String* $tmp843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp841, &$s842);
        (($fn844) ((panda$io$OutputStream*) out652)->$class->vtable[16])(((panda$io$OutputStream*) out652), $tmp843);
    }
    $l825:;
    if ($tmp828) goto $l846; else goto $l847;
    $l846:;
    int64_t $tmp848 = $tmp820 - i817.value;
    if ($tmp821) goto $l849; else goto $l850;
    $l849:;
    if ($tmp848 >= 1) goto $l845; else goto $l824;
    $l850:;
    if ($tmp848 > 1) goto $l845; else goto $l824;
    $l847:;
    int64_t $tmp852 = i817.value - $tmp820;
    if ($tmp821) goto $l853; else goto $l854;
    $l853:;
    if ($tmp852 >= -1) goto $l845; else goto $l824;
    $l854:;
    if ($tmp852 > -1) goto $l845; else goto $l824;
    $l845:;
    i817.value += 1;
    goto $l822;
    $l824:;
    (($fn857) ((panda$io$OutputStream*) out652)->$class->vtable[19])(((panda$io$OutputStream*) out652), &$s856);
    org$pandalanguage$pandac$Type* $tmp858 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp859 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp858);
    if ($tmp859.value) {
    {
        panda$core$String* $tmp860 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType664);
        panda$core$String* $tmp862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, &$s861);
        panda$core$String* $tmp863 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, returnValue786, p_raw->returnType, effectiveReturnType664, out652);
        panda$core$String* $tmp864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp862, $tmp863);
        returnValue786 = $tmp864;
    }
    }
    panda$core$String* $tmp866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s865, returnValue786);
    panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp866, &$s867);
    (($fn869) ((panda$io$OutputStream*) out652)->$class->vtable[19])(((panda$io$OutputStream*) out652), $tmp868);
    (($fn871) ((panda$io$OutputStream*) out652)->$class->vtable[19])(((panda$io$OutputStream*) out652), &$s870);
    self->varCount = oldVarCount663;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp873 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp873->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp873->refCount.value = 1;
    panda$core$String* $tmp875 = panda$core$MutableString$convert$R$panda$core$String(resultType672);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp873, resultName668, $tmp875);
    result872 = $tmp873;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result872));
    (($fn876) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer649));
    return result872;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 oldVarCount878;
    panda$core$String* result879;
    panda$core$String* selfType885;
    org$pandalanguage$pandac$Type* actualMethodType908;
    org$pandalanguage$pandac$Type* inheritedMethodType910;
    panda$core$Range$LTpanda$core$Int64$GT $tmp912;
    panda$collections$Array* parameters961;
    panda$core$Range$LTpanda$core$Int64$GT $tmp964;
    panda$collections$Array* children1000;
    org$pandalanguage$pandac$Position $tmp1005;
    panda$core$String* unwrapped1007;
    org$pandalanguage$pandac$Position $tmp1010;
    panda$core$String* returnValue1013;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1048;
    panda$core$Bit $tmp877 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp877.value);
    oldVarCount878 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp881 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s880, $tmp881);
    panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp882, &$s883);
    result879 = $tmp884;
    panda$core$String* $tmp887 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s886, $tmp887);
    panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp888, &$s889);
    selfType885 = $tmp890;
    (($fn892) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s891);
    panda$core$Bit $tmp893 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp893.value) {
    {
        (($fn895) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s894);
    }
    }
    panda$core$String* $tmp897 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s896, $tmp897);
    panda$core$String* $tmp900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp898, &$s899);
    panda$core$String* $tmp901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp900, result879);
    panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp901, &$s902);
    panda$core$String* $tmp904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp903, selfType885);
    panda$core$String* $tmp906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp904, &$s905);
    (($fn907) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp906);
    org$pandalanguage$pandac$Type* $tmp909 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType908 = $tmp909;
    org$pandalanguage$pandac$Type* $tmp911 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType910 = $tmp911;
    panda$core$Int64 $tmp913 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp912, ((panda$core$Int64) { 0 }), $tmp913, ((panda$core$Bit) { false }));
    int64_t $tmp915 = $tmp912.min.value;
    panda$core$Int64 i914 = { $tmp915 };
    int64_t $tmp917 = $tmp912.max.value;
    bool $tmp918 = $tmp912.inclusive.value;
    bool $tmp925 = 1 > 0;
    if ($tmp925) goto $l923; else goto $l924;
    $l923:;
    if ($tmp918) goto $l926; else goto $l927;
    $l926:;
    if ($tmp915 <= $tmp917) goto $l919; else goto $l921;
    $l927:;
    if ($tmp915 < $tmp917) goto $l919; else goto $l921;
    $l924:;
    if ($tmp918) goto $l928; else goto $l929;
    $l928:;
    if ($tmp915 >= $tmp917) goto $l919; else goto $l921;
    $l929:;
    if ($tmp915 > $tmp917) goto $l919; else goto $l921;
    $l919:;
    {
        panda$core$Object* $tmp932 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType910->subtypes, i914);
        panda$core$String* $tmp933 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp932));
        panda$core$String* $tmp934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s931, $tmp933);
        panda$core$String* $tmp936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp934, &$s935);
        panda$core$Object* $tmp937 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i914);
        panda$core$String* $tmp938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp936, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp937)->name);
        panda$core$String* $tmp940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp938, &$s939);
        (($fn941) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp940);
    }
    $l922:;
    if ($tmp925) goto $l943; else goto $l944;
    $l943:;
    int64_t $tmp945 = $tmp917 - i914.value;
    if ($tmp918) goto $l946; else goto $l947;
    $l946:;
    if ($tmp945 >= 1) goto $l942; else goto $l921;
    $l947:;
    if ($tmp945 > 1) goto $l942; else goto $l921;
    $l944:;
    int64_t $tmp949 = i914.value - $tmp917;
    if ($tmp918) goto $l950; else goto $l951;
    $l950:;
    if ($tmp949 >= -1) goto $l942; else goto $l921;
    $l951:;
    if ($tmp949 > -1) goto $l942; else goto $l921;
    $l942:;
    i914.value += 1;
    goto $l919;
    $l921:;
    (($fn954) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s953);
    panda$core$Int64 $tmp955 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp955;
    panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s956, selfType885);
    panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, &$s958);
    (($fn960) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp959);
    panda$collections$Array* $tmp962 = (panda$collections$Array*) malloc(40);
    $tmp962->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp962->refCount.value = 1;
    panda$collections$Array$init($tmp962);
    parameters961 = $tmp962;
    panda$core$Int64 $tmp965 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp964, ((panda$core$Int64) { 0 }), $tmp965, ((panda$core$Bit) { false }));
    int64_t $tmp967 = $tmp964.min.value;
    panda$core$Int64 i966 = { $tmp967 };
    int64_t $tmp969 = $tmp964.max.value;
    bool $tmp970 = $tmp964.inclusive.value;
    bool $tmp977 = 1 > 0;
    if ($tmp977) goto $l975; else goto $l976;
    $l975:;
    if ($tmp970) goto $l978; else goto $l979;
    $l978:;
    if ($tmp967 <= $tmp969) goto $l971; else goto $l973;
    $l979:;
    if ($tmp967 < $tmp969) goto $l971; else goto $l973;
    $l976:;
    if ($tmp970) goto $l980; else goto $l981;
    $l980:;
    if ($tmp967 >= $tmp969) goto $l971; else goto $l973;
    $l981:;
    if ($tmp967 > $tmp969) goto $l971; else goto $l973;
    $l971:;
    {
        panda$core$Object* $tmp984 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i966);
        panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s983, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp984)->name);
        panda$core$Object* $tmp986 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType910->subtypes, i966);
        panda$core$Object* $tmp987 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType908->subtypes, i966);
        panda$core$String* $tmp988 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp985, ((org$pandalanguage$pandac$Type*) $tmp986), ((org$pandalanguage$pandac$Type*) $tmp987), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters961, ((panda$core$Object*) $tmp988));
    }
    $l974:;
    if ($tmp977) goto $l990; else goto $l991;
    $l990:;
    int64_t $tmp992 = $tmp969 - i966.value;
    if ($tmp970) goto $l993; else goto $l994;
    $l993:;
    if ($tmp992 >= 1) goto $l989; else goto $l973;
    $l994:;
    if ($tmp992 > 1) goto $l989; else goto $l973;
    $l991:;
    int64_t $tmp996 = i966.value - $tmp969;
    if ($tmp970) goto $l997; else goto $l998;
    $l997:;
    if ($tmp996 >= -1) goto $l989; else goto $l973;
    $l998:;
    if ($tmp996 > -1) goto $l989; else goto $l973;
    $l989:;
    i966.value += 1;
    goto $l971;
    $l973:;
    panda$collections$Array* $tmp1001 = (panda$collections$Array*) malloc(40);
    $tmp1001->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1001->refCount.value = 1;
    panda$collections$Array$init($tmp1001);
    children1000 = $tmp1001;
    org$pandalanguage$pandac$IRNode* $tmp1003 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1003->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1003->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1005);
    org$pandalanguage$pandac$Type* $tmp1006 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp1003, ((panda$core$Int64) { 1025 }), $tmp1005, $tmp1006);
    panda$collections$Array$add$panda$collections$Array$T(children1000, ((panda$core$Object*) $tmp1003));
    org$pandalanguage$pandac$IRNode* $tmp1008 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp1008->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1008->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp1010);
    org$pandalanguage$pandac$Type* $tmp1011 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1008, ((panda$core$Int64) { 1009 }), $tmp1010, $tmp1011, ((panda$collections$ListView*) children1000));
    panda$core$String* $tmp1012 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1008, p_out);
    unwrapped1007 = $tmp1012;
    org$pandalanguage$pandac$Type* $tmp1014 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1015 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1014);
    if ($tmp1015.value) {
    {
        panda$core$String* $tmp1016 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue1013 = $tmp1016;
        panda$core$String* $tmp1018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1017, returnValue1013);
        panda$core$String* $tmp1020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1018, &$s1019);
        (($fn1021) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1020);
        panda$core$String* $tmp1023 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1022, $tmp1023);
        panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1024, &$s1025);
        panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1026, returnValue1013);
        panda$core$String* $tmp1029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1027, &$s1028);
        returnValue1013 = $tmp1029;
    }
    }
    else {
    {
        returnValue1013 = &$s1030;
    }
    }
    panda$core$String* $tmp1032 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1031, $tmp1032);
    panda$core$String* $tmp1035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1033, &$s1034);
    panda$core$String* $tmp1036 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1035, $tmp1036);
    panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1037, &$s1038);
    panda$core$String* $tmp1040 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1039, $tmp1040);
    panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, &$s1042);
    panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, unwrapped1007);
    panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, &$s1045);
    (($fn1047) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1046);
    panda$core$Int64 $tmp1049 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1048, ((panda$core$Int64) { 0 }), $tmp1049, ((panda$core$Bit) { false }));
    int64_t $tmp1051 = $tmp1048.min.value;
    panda$core$Int64 i1050 = { $tmp1051 };
    int64_t $tmp1053 = $tmp1048.max.value;
    bool $tmp1054 = $tmp1048.inclusive.value;
    bool $tmp1061 = 1 > 0;
    if ($tmp1061) goto $l1059; else goto $l1060;
    $l1059:;
    if ($tmp1054) goto $l1062; else goto $l1063;
    $l1062:;
    if ($tmp1051 <= $tmp1053) goto $l1055; else goto $l1057;
    $l1063:;
    if ($tmp1051 < $tmp1053) goto $l1055; else goto $l1057;
    $l1060:;
    if ($tmp1054) goto $l1064; else goto $l1065;
    $l1064:;
    if ($tmp1051 >= $tmp1053) goto $l1055; else goto $l1057;
    $l1065:;
    if ($tmp1051 > $tmp1053) goto $l1055; else goto $l1057;
    $l1055:;
    {
        panda$core$Object* $tmp1068 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType908->subtypes, i1050);
        panda$core$String* $tmp1069 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1068));
        panda$core$String* $tmp1070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1067, $tmp1069);
        panda$core$String* $tmp1072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1070, &$s1071);
        panda$core$Object* $tmp1073 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters961, i1050);
        panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1072, ((panda$core$String*) $tmp1073));
        panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, &$s1075);
        (($fn1077) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1076);
    }
    $l1058:;
    if ($tmp1061) goto $l1079; else goto $l1080;
    $l1079:;
    int64_t $tmp1081 = $tmp1053 - i1050.value;
    if ($tmp1054) goto $l1082; else goto $l1083;
    $l1082:;
    if ($tmp1081 >= 1) goto $l1078; else goto $l1057;
    $l1083:;
    if ($tmp1081 > 1) goto $l1078; else goto $l1057;
    $l1080:;
    int64_t $tmp1085 = i1050.value - $tmp1053;
    if ($tmp1054) goto $l1086; else goto $l1087;
    $l1086:;
    if ($tmp1085 >= -1) goto $l1078; else goto $l1057;
    $l1087:;
    if ($tmp1085 > -1) goto $l1078; else goto $l1057;
    $l1078:;
    i1050.value += 1;
    goto $l1055;
    $l1057:;
    (($fn1090) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1089);
    panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1091, returnValue1013);
    panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1092, &$s1093);
    (($fn1095) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1094);
    panda$core$Int64 $tmp1096 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1096;
    (($fn1098) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1097);
    self->varCount = oldVarCount878;
    return result879;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1099;
    panda$core$String* previous1102;
    panda$collections$Iterator* intfType$Iter1104;
    org$pandalanguage$pandac$Type* intfType1116;
    org$pandalanguage$pandac$ClassDecl* intf1121;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1123;
    panda$collections$ListView* methods1125;
    panda$core$String* name1127;
    panda$core$String* t1137;
    panda$core$MutableString* result1151;
    panda$core$String* separator1191;
    panda$collections$Iterator* m$Iter1193;
    org$pandalanguage$pandac$MethodDecl* m1205;
    panda$core$String* shim1213;
    org$pandalanguage$pandac$Type* $tmp1100 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1101 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1100);
    interfaces1099 = $tmp1101;
    previous1102 = &$s1103;
    {
        ITable* $tmp1105 = ((panda$collections$Iterable*) interfaces1099)->$class->itable;
        while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1105 = $tmp1105->next;
        }
        $fn1107 $tmp1106 = $tmp1105->methods[0];
        panda$collections$Iterator* $tmp1108 = $tmp1106(((panda$collections$Iterable*) interfaces1099));
        intfType$Iter1104 = $tmp1108;
        $l1109:;
        ITable* $tmp1111 = intfType$Iter1104->$class->itable;
        while ($tmp1111->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1111 = $tmp1111->next;
        }
        $fn1113 $tmp1112 = $tmp1111->methods[0];
        panda$core$Bit $tmp1114 = $tmp1112(intfType$Iter1104);
        panda$core$Bit $tmp1115 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1114);
        if (!$tmp1115.value) goto $l1110;
        {
            ITable* $tmp1117 = intfType$Iter1104->$class->itable;
            while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1117 = $tmp1117->next;
            }
            $fn1119 $tmp1118 = $tmp1117->methods[1];
            panda$core$Object* $tmp1120 = $tmp1118(intfType$Iter1104);
            intfType1116 = ((org$pandalanguage$pandac$Type*) $tmp1120);
            org$pandalanguage$pandac$ClassDecl* $tmp1122 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1116);
            intf1121 = $tmp1122;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1124 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1121);
            intfCC1123 = $tmp1124;
            panda$collections$ListView* $tmp1126 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1116);
            methods1125 = $tmp1126;
            panda$core$String* $tmp1129 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1128, $tmp1129);
            panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, &$s1131);
            panda$core$String* $tmp1133 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1121)->name);
            panda$core$String* $tmp1134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1132, $tmp1133);
            panda$core$String* $tmp1136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1134, &$s1135);
            name1127 = $tmp1136;
            org$pandalanguage$pandac$Type* $tmp1139 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1140 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1139);
            panda$core$String* $tmp1141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1138, $tmp1140);
            panda$core$String* $tmp1143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1141, &$s1142);
            ITable* $tmp1144 = ((panda$collections$CollectionView*) methods1125)->$class->itable;
            while ($tmp1144->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1144 = $tmp1144->next;
            }
            $fn1146 $tmp1145 = $tmp1144->methods[0];
            panda$core$Int64 $tmp1147 = $tmp1145(((panda$collections$CollectionView*) methods1125));
            panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1143, ((panda$core$Object*) wrap_panda$core$Int64($tmp1147)));
            panda$core$String* $tmp1150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1148, &$s1149);
            t1137 = $tmp1150;
            panda$core$MutableString* $tmp1152 = (panda$core$MutableString*) malloc(40);
            $tmp1152->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1152->refCount.value = 1;
            panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1154, name1127);
            panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1155, &$s1156);
            panda$core$String* $tmp1158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1157, t1137);
            panda$core$String* $tmp1160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1158, &$s1159);
            org$pandalanguage$pandac$Type* $tmp1161 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1162 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1161);
            panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1160, $tmp1162);
            panda$core$String* $tmp1165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, &$s1164);
            panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1166, intfCC1123->type);
            panda$core$String* $tmp1169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1167, &$s1168);
            panda$core$String* $tmp1170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1169, intfCC1123->name);
            panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1170, &$s1171);
            org$pandalanguage$pandac$Type* $tmp1173 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1174 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1173);
            panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1172, $tmp1174);
            panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1176);
            panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1165, $tmp1177);
            panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1179, previous1102);
            panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1180, &$s1181);
            ITable* $tmp1183 = ((panda$collections$CollectionView*) methods1125)->$class->itable;
            while ($tmp1183->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1183 = $tmp1183->next;
            }
            $fn1185 $tmp1184 = $tmp1183->methods[0];
            panda$core$Int64 $tmp1186 = $tmp1184(((panda$collections$CollectionView*) methods1125));
            panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1182, ((panda$core$Object*) wrap_panda$core$Int64($tmp1186)));
            panda$core$String* $tmp1189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1187, &$s1188);
            panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1178, $tmp1189);
            panda$core$MutableString$init$panda$core$String($tmp1152, $tmp1190);
            result1151 = $tmp1152;
            separator1191 = &$s1192;
            {
                ITable* $tmp1194 = ((panda$collections$Iterable*) methods1125)->$class->itable;
                while ($tmp1194->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1194 = $tmp1194->next;
                }
                $fn1196 $tmp1195 = $tmp1194->methods[0];
                panda$collections$Iterator* $tmp1197 = $tmp1195(((panda$collections$Iterable*) methods1125));
                m$Iter1193 = $tmp1197;
                $l1198:;
                ITable* $tmp1200 = m$Iter1193->$class->itable;
                while ($tmp1200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1200 = $tmp1200->next;
                }
                $fn1202 $tmp1201 = $tmp1200->methods[0];
                panda$core$Bit $tmp1203 = $tmp1201(m$Iter1193);
                panda$core$Bit $tmp1204 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1203);
                if (!$tmp1204.value) goto $l1199;
                {
                    ITable* $tmp1206 = m$Iter1193->$class->itable;
                    while ($tmp1206->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1206 = $tmp1206->next;
                    }
                    $fn1208 $tmp1207 = $tmp1206->methods[1];
                    panda$core$Object* $tmp1209 = $tmp1207(m$Iter1193);
                    m1205 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1209);
                    panda$core$MutableString$append$panda$core$String(result1151, separator1191);
                    separator1191 = &$s1210;
                    panda$core$Bit $tmp1211 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1205->annotations);
                    if ($tmp1211.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1151, &$s1212);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1214 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1205, self->wrapperShims);
                        shim1213 = $tmp1214;
                        panda$core$String* $tmp1216 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1205);
                        panda$core$String* $tmp1217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1215, $tmp1216);
                        panda$core$String* $tmp1219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1217, &$s1218);
                        panda$core$String* $tmp1220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1219, shim1213);
                        panda$core$String* $tmp1222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1220, &$s1221);
                        panda$core$MutableString$append$panda$core$String(result1151, $tmp1222);
                    }
                    }
                }
                goto $l1198;
                $l1199:;
            }
            panda$core$MutableString$append$panda$core$String(result1151, &$s1223);
            (($fn1224) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result1151));
            panda$core$String* $tmp1226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1225, t1137);
            panda$core$String* $tmp1228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1226, &$s1227);
            panda$core$String* $tmp1229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, name1127);
            panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1229, &$s1230);
            previous1102 = $tmp1231;
        }
        goto $l1109;
        $l1110:;
    }
    return previous1102;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1234;
    panda$core$Bit $tmp1232 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1233 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1232);
    if ($tmp1233.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1237 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1236 = $tmp1237.value;
    if (!$tmp1236) goto $l1238;
    panda$core$Bit $tmp1239 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1236 = $tmp1239.value;
    $l1238:;
    panda$core$Bit $tmp1240 = { $tmp1236 };
    bool $tmp1235 = $tmp1240.value;
    if (!$tmp1235) goto $l1241;
    org$pandalanguage$pandac$ClassDecl* $tmp1242 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1243 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1242);
    $tmp1235 = $tmp1243.value;
    $l1241:;
    panda$core$Bit $tmp1244 = { $tmp1235 };
    result1234 = $tmp1244;
    panda$core$Bit $tmp1246 = panda$core$Bit$$NOT$R$panda$core$Bit(result1234);
    bool $tmp1245 = $tmp1246.value;
    if ($tmp1245) goto $l1247;
    panda$core$Bit $tmp1249 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1250 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1249);
    bool $tmp1248 = $tmp1250.value;
    if (!$tmp1248) goto $l1251;
    panda$core$Bit $tmp1253 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1252 = $tmp1253.value;
    if ($tmp1252) goto $l1254;
    panda$core$Bit $tmp1255 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1252 = $tmp1255.value;
    $l1254:;
    panda$core$Bit $tmp1256 = { $tmp1252 };
    $tmp1248 = $tmp1256.value;
    $l1251:;
    panda$core$Bit $tmp1257 = { $tmp1248 };
    $tmp1245 = $tmp1257.value;
    $l1247:;
    panda$core$Bit $tmp1258 = { $tmp1245 };
    PANDA_ASSERT($tmp1258.value);
    return result1234;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1259;
    org$pandalanguage$pandac$Type* declared1260;
    org$pandalanguage$pandac$Type* inherited1263;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1266;
    panda$core$MutableString* resultType1271;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1280;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1261 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1262 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1261);
    declared1260 = $tmp1262;
    org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1263 = $tmp1264;
    panda$core$Bit $tmp1265 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1260, inherited1263);
    if ($tmp1265.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1267 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1268 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1267, ((panda$io$OutputStream*) self->shims));
        shim1266 = $tmp1268;
        resultName1259 = shim1266->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1269 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1259 = $tmp1269;
    }
    }
    panda$core$Bit $tmp1270 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1270.value) {
    {
        panda$core$MutableString* $tmp1272 = (panda$core$MutableString*) malloc(40);
        $tmp1272->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1272->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1272, &$s1274);
        resultType1271 = $tmp1272;
        panda$core$Int64 $tmp1275 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1263->subtypes);
        panda$core$Int64 $tmp1276 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1275, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1277 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1263->subtypes, $tmp1276);
        panda$core$String* $tmp1278 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1277));
        panda$core$MutableString$append$panda$core$String(resultType1271, $tmp1278);
        panda$core$MutableString$append$panda$core$String(resultType1271, &$s1279);
        panda$core$Int64 $tmp1281 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1263->subtypes);
        panda$core$Int64 $tmp1282 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1281, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1280, ((panda$core$Int64) { 0 }), $tmp1282, ((panda$core$Bit) { false }));
        int64_t $tmp1284 = $tmp1280.min.value;
        panda$core$Int64 i1283 = { $tmp1284 };
        int64_t $tmp1286 = $tmp1280.max.value;
        bool $tmp1287 = $tmp1280.inclusive.value;
        bool $tmp1294 = 1 > 0;
        if ($tmp1294) goto $l1292; else goto $l1293;
        $l1292:;
        if ($tmp1287) goto $l1295; else goto $l1296;
        $l1295:;
        if ($tmp1284 <= $tmp1286) goto $l1288; else goto $l1290;
        $l1296:;
        if ($tmp1284 < $tmp1286) goto $l1288; else goto $l1290;
        $l1293:;
        if ($tmp1287) goto $l1297; else goto $l1298;
        $l1297:;
        if ($tmp1284 >= $tmp1286) goto $l1288; else goto $l1290;
        $l1298:;
        if ($tmp1284 > $tmp1286) goto $l1288; else goto $l1290;
        $l1288:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1271, &$s1300);
            panda$core$Object* $tmp1301 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1263->subtypes, i1283);
            panda$core$String* $tmp1302 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1301));
            panda$core$MutableString$append$panda$core$String(resultType1271, $tmp1302);
        }
        $l1291:;
        if ($tmp1294) goto $l1304; else goto $l1305;
        $l1304:;
        int64_t $tmp1306 = $tmp1286 - i1283.value;
        if ($tmp1287) goto $l1307; else goto $l1308;
        $l1307:;
        if ($tmp1306 >= 1) goto $l1303; else goto $l1290;
        $l1308:;
        if ($tmp1306 > 1) goto $l1303; else goto $l1290;
        $l1305:;
        int64_t $tmp1310 = i1283.value - $tmp1286;
        if ($tmp1287) goto $l1311; else goto $l1312;
        $l1311:;
        if ($tmp1310 >= -1) goto $l1303; else goto $l1290;
        $l1312:;
        if ($tmp1310 > -1) goto $l1303; else goto $l1290;
        $l1303:;
        i1283.value += 1;
        goto $l1288;
        $l1290:;
        panda$core$MutableString$append$panda$core$String(resultType1271, &$s1314);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1315 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1315->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1315->refCount.value = 1;
        panda$core$String* $tmp1317 = panda$core$MutableString$convert$R$panda$core$String(resultType1271);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1315, ((panda$core$Object*) resultName1259), ((panda$core$Object*) $tmp1317));
        return $tmp1315;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1318 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1318->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1318->refCount.value = 1;
    panda$core$String* $tmp1320 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1263);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1318, ((panda$core$Object*) resultName1259), ((panda$core$Object*) $tmp1320));
    return $tmp1318;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1323;
    panda$core$String* type1325;
    panda$collections$ListView* vtable1344;
    panda$core$String* superPtr1368;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1369;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1380;
    panda$core$MutableString* code1384;
    panda$core$String* separator1427;
    panda$collections$Iterator* m$Iter1429;
    org$pandalanguage$pandac$MethodDecl* m1441;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1448;
    panda$core$Bit $tmp1321 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1322 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1321);
    PANDA_ASSERT($tmp1322.value);
    panda$core$Object* $tmp1324 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1323 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1324);
    if (((panda$core$Bit) { result1323 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1326 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1326->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1326->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1329 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1330 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1329)->name);
            panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1328, $tmp1330);
            panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, &$s1332);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1326, $tmp1333, &$s1334);
            result1323 = $tmp1326;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1323));
            panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1335, result1323->name);
            panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1336, &$s1337);
            panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1338, result1323->type);
            panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1339, &$s1340);
            (($fn1342) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1341);
            panda$core$Object* $tmp1343 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1343);
        }
        }
        panda$collections$ListView* $tmp1345 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1344 = $tmp1345;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1346 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1346->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1346->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1349 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1350 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1349)->name);
        panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1348, $tmp1350);
        panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1352);
        panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1354, &$s1355);
        panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1356, &$s1357);
        ITable* $tmp1360 = ((panda$collections$CollectionView*) vtable1344)->$class->itable;
        while ($tmp1360->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1360 = $tmp1360->next;
        }
        $fn1362 $tmp1361 = $tmp1360->methods[0];
        panda$core$Int64 $tmp1363 = $tmp1361(((panda$collections$CollectionView*) vtable1344));
        panda$core$String* $tmp1364 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1359, ((panda$core$Object*) wrap_panda$core$Int64($tmp1363)));
        panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, &$s1365);
        panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, $tmp1366);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1346, $tmp1353, $tmp1367);
        result1323 = $tmp1346;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1323));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1370 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1371 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1370);
            superCC1369 = $tmp1371;
            panda$core$String* $tmp1373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1372, superCC1369->type);
            panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1373, &$s1374);
            panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1375, superCC1369->name);
            panda$core$String* $tmp1378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1376, &$s1377);
            superPtr1368 = $tmp1378;
        }
        }
        else {
        {
            superPtr1368 = &$s1379;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1381 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1382 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1381);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1383 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1382);
        clConstant1380 = $tmp1383;
        panda$core$MutableString* $tmp1385 = (panda$core$MutableString*) malloc(40);
        $tmp1385->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1385->refCount.value = 1;
        panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1387, result1323->name);
        panda$core$String* $tmp1390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, &$s1389);
        panda$core$MutableString$init$panda$core$String($tmp1385, $tmp1390);
        code1384 = $tmp1385;
        panda$core$Bit $tmp1391 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1391.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1384, &$s1392);
        }
        }
        panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1393, result1323->type);
        panda$core$String* $tmp1396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, &$s1395);
        panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1397, clConstant1380->type);
        panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1398, &$s1399);
        panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1400, clConstant1380->name);
        panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, &$s1402);
        panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1396, $tmp1403);
        panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1405, &$s1406);
        panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1407, &$s1408);
        panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1409, superPtr1368);
        panda$core$String* $tmp1412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, &$s1411);
        panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1404, $tmp1412);
        panda$core$String* $tmp1415 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1414, $tmp1415);
        panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1417);
        ITable* $tmp1419 = ((panda$collections$CollectionView*) vtable1344)->$class->itable;
        while ($tmp1419->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1419 = $tmp1419->next;
        }
        $fn1421 $tmp1420 = $tmp1419->methods[0];
        panda$core$Int64 $tmp1422 = $tmp1420(((panda$collections$CollectionView*) vtable1344));
        panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1418, ((panda$core$Object*) wrap_panda$core$Int64($tmp1422)));
        panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, &$s1424);
        panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1413, $tmp1425);
        panda$core$MutableString$append$panda$core$String(code1384, $tmp1426);
        separator1427 = &$s1428;
        {
            ITable* $tmp1430 = ((panda$collections$Iterable*) vtable1344)->$class->itable;
            while ($tmp1430->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1430 = $tmp1430->next;
            }
            $fn1432 $tmp1431 = $tmp1430->methods[0];
            panda$collections$Iterator* $tmp1433 = $tmp1431(((panda$collections$Iterable*) vtable1344));
            m$Iter1429 = $tmp1433;
            $l1434:;
            ITable* $tmp1436 = m$Iter1429->$class->itable;
            while ($tmp1436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1436 = $tmp1436->next;
            }
            $fn1438 $tmp1437 = $tmp1436->methods[0];
            panda$core$Bit $tmp1439 = $tmp1437(m$Iter1429);
            panda$core$Bit $tmp1440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1439);
            if (!$tmp1440.value) goto $l1435;
            {
                ITable* $tmp1442 = m$Iter1429->$class->itable;
                while ($tmp1442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1442 = $tmp1442->next;
                }
                $fn1444 $tmp1443 = $tmp1442->methods[1];
                panda$core$Object* $tmp1445 = $tmp1443(m$Iter1429);
                m1441 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1445);
                panda$core$MutableString$append$panda$core$String(code1384, separator1427);
                panda$core$Bit $tmp1446 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1441->annotations);
                if ($tmp1446.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1384, &$s1447);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1449 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1441);
                    entry1448 = $tmp1449;
                    panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1450, ((panda$core$String*) entry1448->second));
                    panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1451, &$s1452);
                    panda$core$String* $tmp1454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, ((panda$core$String*) entry1448->first));
                    panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1454, &$s1455);
                    panda$core$MutableString$append$panda$core$String(code1384, $tmp1456);
                }
                }
                separator1427 = &$s1457;
            }
            goto $l1434;
            $l1435:;
        }
        panda$core$MutableString$append$panda$core$String(code1384, &$s1458);
        (($fn1459) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1384));
    }
    }
    return result1323;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1460;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1466;
    panda$core$String* type1469;
    org$pandalanguage$pandac$ClassDecl* value1481;
    panda$collections$ListView* valueVTable1484;
    panda$collections$ListView* vtable1507;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1509;
    panda$core$String* superCast1512;
    panda$core$String* itable1520;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1522;
    panda$core$MutableString* code1526;
    panda$core$String* separator1573;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1575;
    org$pandalanguage$pandac$MethodDecl* m1597;
    panda$core$String* methodName1602;
    PANDA_ASSERT(p_cl->resolved.value);
    panda$core$String* $tmp1462 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1461, $tmp1462);
    panda$core$String* $tmp1465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, &$s1464);
    name1460 = $tmp1465;
    panda$core$Object* $tmp1467 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1460));
    result1466 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1467);
    if (((panda$core$Bit) { result1466 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1468 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1468);
            type1469 = &$s1470;
            panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1471, name1460);
            panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1472, &$s1473);
            panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, type1469);
            panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1475, &$s1476);
            (($fn1478) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1477);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1479 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1479->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1479->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1479, name1460, type1469);
            result1466 = $tmp1479;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1482 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1483 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1482);
            value1481 = $tmp1483;
            panda$collections$ListView* $tmp1485 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1481);
            valueVTable1484 = $tmp1485;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1486 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1486->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1486->refCount.value = 1;
            panda$core$String* $tmp1489 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1488, $tmp1489);
            panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1490, &$s1491);
            panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1493, &$s1494);
            panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1496);
            ITable* $tmp1499 = ((panda$collections$CollectionView*) valueVTable1484)->$class->itable;
            while ($tmp1499->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1499 = $tmp1499->next;
            }
            $fn1501 $tmp1500 = $tmp1499->methods[0];
            panda$core$Int64 $tmp1502 = $tmp1500(((panda$collections$CollectionView*) valueVTable1484));
            panda$core$String* $tmp1503 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1498, ((panda$core$Object*) wrap_panda$core$Int64($tmp1502)));
            panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1503, &$s1504);
            panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, $tmp1505);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1486, $tmp1492, $tmp1506);
            result1466 = $tmp1486;
            panda$collections$ListView* $tmp1508 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1507 = $tmp1508;
            org$pandalanguage$pandac$ClassDecl* $tmp1510 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1511 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1510);
            superCC1509 = $tmp1511;
            panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1513, superCC1509->type);
            panda$core$String* $tmp1516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1514, &$s1515);
            panda$core$String* $tmp1517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1516, superCC1509->name);
            panda$core$String* $tmp1519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1517, &$s1518);
            superCast1512 = $tmp1519;
            panda$core$String* $tmp1521 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1520 = $tmp1521;
            org$pandalanguage$pandac$Type* $tmp1523 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1524 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1523);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1525 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1524);
            clConstant1522 = $tmp1525;
            panda$core$MutableString* $tmp1527 = (panda$core$MutableString*) malloc(40);
            $tmp1527->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1527->refCount.value = 1;
            panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1529, result1466->name);
            panda$core$String* $tmp1532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, &$s1531);
            panda$core$MutableString$init$panda$core$String($tmp1527, $tmp1532);
            code1526 = $tmp1527;
            panda$core$Bit $tmp1533 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1533.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1526, &$s1534);
            }
            }
            panda$core$String* $tmp1536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1535, result1466->type);
            panda$core$String* $tmp1538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1536, &$s1537);
            panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1539, clConstant1522->type);
            panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1540, &$s1541);
            panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1542, clConstant1522->name);
            panda$core$String* $tmp1545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1543, &$s1544);
            panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1538, $tmp1545);
            panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1547, &$s1548);
            panda$core$String* $tmp1551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1549, &$s1550);
            org$pandalanguage$pandac$Type* $tmp1552 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1553 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1552);
            panda$core$String* $tmp1554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1551, $tmp1553);
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1554, &$s1555);
            panda$core$String* $tmp1557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1556, superCast1512);
            panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1557, &$s1558);
            panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1546, $tmp1559);
            panda$core$String* $tmp1562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1561, itable1520);
            panda$core$String* $tmp1564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1562, &$s1563);
            ITable* $tmp1565 = ((panda$collections$CollectionView*) valueVTable1484)->$class->itable;
            while ($tmp1565->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1565 = $tmp1565->next;
            }
            $fn1567 $tmp1566 = $tmp1565->methods[0];
            panda$core$Int64 $tmp1568 = $tmp1566(((panda$collections$CollectionView*) valueVTable1484));
            panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1564, ((panda$core$Object*) wrap_panda$core$Int64($tmp1568)));
            panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, &$s1570);
            panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1560, $tmp1571);
            panda$core$MutableString$append$panda$core$String(code1526, $tmp1572);
            separator1573 = &$s1574;
            ITable* $tmp1576 = ((panda$collections$CollectionView*) valueVTable1484)->$class->itable;
            while ($tmp1576->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1576 = $tmp1576->next;
            }
            $fn1578 $tmp1577 = $tmp1576->methods[0];
            panda$core$Int64 $tmp1579 = $tmp1577(((panda$collections$CollectionView*) valueVTable1484));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1575, ((panda$core$Int64) { 0 }), $tmp1579, ((panda$core$Bit) { false }));
            int64_t $tmp1581 = $tmp1575.min.value;
            panda$core$Int64 i1580 = { $tmp1581 };
            int64_t $tmp1583 = $tmp1575.max.value;
            bool $tmp1584 = $tmp1575.inclusive.value;
            bool $tmp1591 = 1 > 0;
            if ($tmp1591) goto $l1589; else goto $l1590;
            $l1589:;
            if ($tmp1584) goto $l1592; else goto $l1593;
            $l1592:;
            if ($tmp1581 <= $tmp1583) goto $l1585; else goto $l1587;
            $l1593:;
            if ($tmp1581 < $tmp1583) goto $l1585; else goto $l1587;
            $l1590:;
            if ($tmp1584) goto $l1594; else goto $l1595;
            $l1594:;
            if ($tmp1581 >= $tmp1583) goto $l1585; else goto $l1587;
            $l1595:;
            if ($tmp1581 > $tmp1583) goto $l1585; else goto $l1587;
            $l1585:;
            {
                ITable* $tmp1598 = vtable1507->$class->itable;
                while ($tmp1598->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1598 = $tmp1598->next;
                }
                $fn1600 $tmp1599 = $tmp1598->methods[0];
                panda$core$Object* $tmp1601 = $tmp1599(vtable1507, i1580);
                m1597 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1601);
                if (((panda$core$Bit) { ((panda$core$Object*) m1597->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1603 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1597, self->wrapperShims);
                    methodName1602 = $tmp1603;
                }
                }
                else {
                {
                    panda$core$String* $tmp1604 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1597);
                    methodName1602 = $tmp1604;
                    if (m1597->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1597);
                    }
                    }
                }
                }
                panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1605, separator1573);
                panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1606, &$s1607);
                panda$core$String* $tmp1609 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1597);
                panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1608, $tmp1609);
                panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1610, &$s1611);
                panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1612, methodName1602);
                panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1613, &$s1614);
                panda$core$MutableString$append$panda$core$String(code1526, $tmp1615);
                separator1573 = &$s1616;
            }
            $l1588:;
            if ($tmp1591) goto $l1618; else goto $l1619;
            $l1618:;
            int64_t $tmp1620 = $tmp1583 - i1580.value;
            if ($tmp1584) goto $l1621; else goto $l1622;
            $l1621:;
            if ($tmp1620 >= 1) goto $l1617; else goto $l1587;
            $l1622:;
            if ($tmp1620 > 1) goto $l1617; else goto $l1587;
            $l1619:;
            int64_t $tmp1624 = i1580.value - $tmp1583;
            if ($tmp1584) goto $l1625; else goto $l1626;
            $l1625:;
            if ($tmp1624 >= -1) goto $l1617; else goto $l1587;
            $l1626:;
            if ($tmp1624 > -1) goto $l1617; else goto $l1587;
            $l1617:;
            i1580.value += 1;
            goto $l1585;
            $l1587:;
            panda$core$MutableString$append$panda$core$String(code1526, &$s1628);
            (($fn1629) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1526));
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1460), ((panda$core$Object*) result1466));
    }
    }
    return result1466;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1632 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1630, &$s1631);
    panda$core$String* $tmp1635 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1632, &$s1633, &$s1634);
    panda$core$String* $tmp1638 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1635, &$s1636, &$s1637);
    panda$core$String* $tmp1641 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1638, &$s1639, &$s1640);
    panda$core$String* $tmp1644 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1641, &$s1642, &$s1643);
    panda$core$String* $tmp1647 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1644, &$s1645, &$s1646);
    return $tmp1647;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1651;
    panda$core$String* result1688;
    panda$core$Bit $tmp1648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1648.value) {
    {
        panda$core$Int64 $tmp1649 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1650 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1649, ((panda$core$Int64) { 0 }));
        if ($tmp1650.value) {
        {
            panda$core$Int64 $tmp1652 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1651, ((panda$core$Int64) { 0 }), $tmp1652, ((panda$core$Bit) { false }));
            int64_t $tmp1654 = $tmp1651.min.value;
            panda$core$Int64 i1653 = { $tmp1654 };
            int64_t $tmp1656 = $tmp1651.max.value;
            bool $tmp1657 = $tmp1651.inclusive.value;
            bool $tmp1664 = 1 > 0;
            if ($tmp1664) goto $l1662; else goto $l1663;
            $l1662:;
            if ($tmp1657) goto $l1665; else goto $l1666;
            $l1665:;
            if ($tmp1654 <= $tmp1656) goto $l1658; else goto $l1660;
            $l1666:;
            if ($tmp1654 < $tmp1656) goto $l1658; else goto $l1660;
            $l1663:;
            if ($tmp1657) goto $l1667; else goto $l1668;
            $l1667:;
            if ($tmp1654 >= $tmp1656) goto $l1658; else goto $l1660;
            $l1668:;
            if ($tmp1654 > $tmp1656) goto $l1658; else goto $l1660;
            $l1658:;
            {
                panda$core$Object* $tmp1670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1653);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1670)->name) }).value) {
                {
                    panda$core$Object* $tmp1671 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1672 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1671)->argRefs, i1653);
                    return ((panda$core$String*) $tmp1672);
                }
                }
            }
            $l1661:;
            if ($tmp1664) goto $l1674; else goto $l1675;
            $l1674:;
            int64_t $tmp1676 = $tmp1656 - i1653.value;
            if ($tmp1657) goto $l1677; else goto $l1678;
            $l1677:;
            if ($tmp1676 >= 1) goto $l1673; else goto $l1660;
            $l1678:;
            if ($tmp1676 > 1) goto $l1673; else goto $l1660;
            $l1675:;
            int64_t $tmp1680 = i1653.value - $tmp1656;
            if ($tmp1657) goto $l1681; else goto $l1682;
            $l1681:;
            if ($tmp1680 >= -1) goto $l1673; else goto $l1660;
            $l1682:;
            if ($tmp1680 > -1) goto $l1673; else goto $l1660;
            $l1673:;
            i1653.value += 1;
            goto $l1658;
            $l1660:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1684, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, &$s1686);
        return $tmp1687;
    }
    }
    panda$core$Object* $tmp1689 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1688 = ((panda$core$String*) $tmp1689);
    if (((panda$core$Bit) { result1688 == NULL }).value) {
    {
        panda$core$Int64 $tmp1690 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1690;
        panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1691, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1692, &$s1693);
        panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1694, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1695, &$s1696);
        result1688 = $tmp1697;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1688));
    }
    }
    panda$core$Int64 $tmp1698 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1699 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1698, ((panda$core$Int64) { 0 }));
    if ($tmp1699.value) {
    {
        panda$core$Object* $tmp1700 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1688, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1700)->varSuffix);
        result1688 = $tmp1701;
    }
    }
    return result1688;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1705;
    panda$core$String* $match$846_91711;
    panda$collections$Iterator* p$Iter1788;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1800;
    panda$core$Bit $tmp1703 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1702);
    if ($tmp1703.value) {
    {
        return &$s1704;
    }
    }
    panda$core$MutableString* $tmp1706 = (panda$core$MutableString*) malloc(40);
    $tmp1706->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1706->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1706, &$s1708);
    result1705 = $tmp1706;
    panda$core$String* $tmp1709 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1705, $tmp1709);
    panda$core$MutableString$append$panda$core$String(result1705, &$s1710);
    {
        $match$846_91711 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1713 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1712);
        if ($tmp1713.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1714);
        }
        }
        else {
        panda$core$Bit $tmp1716 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1715);
        if ($tmp1716.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1717);
        }
        }
        else {
        panda$core$Bit $tmp1719 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1718);
        if ($tmp1719.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1720);
        }
        }
        else {
        panda$core$Bit $tmp1722 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1721);
        if ($tmp1722.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1723);
        }
        }
        else {
        panda$core$Bit $tmp1725 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1724);
        if ($tmp1725.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1726);
        }
        }
        else {
        panda$core$Bit $tmp1728 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1727);
        if ($tmp1728.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1729);
        }
        }
        else {
        panda$core$Bit $tmp1731 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1730);
        if ($tmp1731.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1732);
        }
        }
        else {
        panda$core$Bit $tmp1734 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1733);
        if ($tmp1734.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1735);
        }
        }
        else {
        panda$core$Bit $tmp1737 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1736);
        if ($tmp1737.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1738);
        }
        }
        else {
        panda$core$Bit $tmp1740 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1739);
        if ($tmp1740.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1741);
        }
        }
        else {
        panda$core$Bit $tmp1743 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1742);
        if ($tmp1743.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1744);
        }
        }
        else {
        panda$core$Bit $tmp1746 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1745);
        if ($tmp1746.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1747);
        }
        }
        else {
        panda$core$Bit $tmp1749 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1748);
        if ($tmp1749.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1750);
        }
        }
        else {
        panda$core$Bit $tmp1752 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1751);
        if ($tmp1752.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1753);
        }
        }
        else {
        panda$core$Bit $tmp1755 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1754);
        if ($tmp1755.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1756);
        }
        }
        else {
        panda$core$Bit $tmp1758 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1757);
        if ($tmp1758.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1759);
        }
        }
        else {
        panda$core$Bit $tmp1761 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1760);
        if ($tmp1761.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1762);
        }
        }
        else {
        panda$core$Bit $tmp1764 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1763);
        if ($tmp1764.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1765);
        }
        }
        else {
        panda$core$Bit $tmp1767 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1766);
        if ($tmp1767.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1768);
        }
        }
        else {
        panda$core$Bit $tmp1770 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1769);
        if ($tmp1770.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1771);
        }
        }
        else {
        panda$core$Bit $tmp1773 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1772);
        if ($tmp1773.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1774);
        }
        }
        else {
        panda$core$Bit $tmp1776 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1775);
        if ($tmp1776.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1777);
        }
        }
        else {
        panda$core$Bit $tmp1779 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1778);
        if ($tmp1779.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1780);
        }
        }
        else {
        panda$core$Bit $tmp1782 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1781);
        if ($tmp1782.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1783);
        }
        }
        else {
        panda$core$Bit $tmp1785 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91711, &$s1784);
        if ($tmp1785.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1705, &$s1786);
        }
        }
        else {
        {
            panda$core$String* $tmp1787 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1705, $tmp1787);
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
        ITable* $tmp1789 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1789->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1789 = $tmp1789->next;
        }
        $fn1791 $tmp1790 = $tmp1789->methods[0];
        panda$collections$Iterator* $tmp1792 = $tmp1790(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1788 = $tmp1792;
        $l1793:;
        ITable* $tmp1795 = p$Iter1788->$class->itable;
        while ($tmp1795->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1795 = $tmp1795->next;
        }
        $fn1797 $tmp1796 = $tmp1795->methods[0];
        panda$core$Bit $tmp1798 = $tmp1796(p$Iter1788);
        panda$core$Bit $tmp1799 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1798);
        if (!$tmp1799.value) goto $l1794;
        {
            ITable* $tmp1801 = p$Iter1788->$class->itable;
            while ($tmp1801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1801 = $tmp1801->next;
            }
            $fn1803 $tmp1802 = $tmp1801->methods[1];
            panda$core$Object* $tmp1804 = $tmp1802(p$Iter1788);
            p1800 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1804);
            panda$core$String* $tmp1806 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1800->type)->name);
            panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1805, $tmp1806);
            panda$core$String* $tmp1809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1807, &$s1808);
            panda$core$MutableString$append$panda$core$String(result1705, $tmp1809);
        }
        goto $l1793;
        $l1794:;
    }
    org$pandalanguage$pandac$Type* $tmp1810 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1811 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1810);
    if ($tmp1811.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1705, &$s1812);
        panda$core$String* $tmp1813 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1705, $tmp1813);
    }
    }
    panda$core$String* $tmp1814 = panda$core$MutableString$convert$R$panda$core$String(result1705);
    return $tmp1814;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1815 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1815.value);
    panda$core$String* $tmp1817 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1816, $tmp1817);
    panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, &$s1819);
    panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, &$s1822);
    return $tmp1823;
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
    panda$core$String* leftRef1824;
    panda$core$String* leftField1828;
    panda$core$String* start1838;
    panda$core$String* ifTrue1839;
    panda$core$String* ifFalse1841;
    panda$core$String* rightRef1854;
    panda$core$String* rightField1858;
    panda$core$String* truePred1868;
    panda$core$String* result1874;
    panda$core$String* $tmp1825 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1824 = $tmp1825;
    org$pandalanguage$pandac$Type* $tmp1826 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1827 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1826);
    if ($tmp1827.value) {
    {
        panda$core$String* $tmp1829 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1828 = $tmp1829;
        panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1830, leftField1828);
        panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, &$s1832);
        panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1833, leftRef1824);
        panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1834, &$s1835);
        (($fn1837) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1836);
        leftRef1824 = leftField1828;
    }
    }
    start1838 = self->currentBlock;
    panda$core$String* $tmp1840 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1839 = $tmp1840;
    panda$core$String* $tmp1842 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1841 = $tmp1842;
    panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1843, leftRef1824);
    panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1844, &$s1845);
    panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1846, ifTrue1839);
    panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1847, &$s1848);
    panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, ifFalse1841);
    panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1850, &$s1851);
    (($fn1853) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1852);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1839, p_out);
    panda$core$String* $tmp1855 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1854 = $tmp1855;
    org$pandalanguage$pandac$Type* $tmp1856 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1857 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1856);
    if ($tmp1857.value) {
    {
        panda$core$String* $tmp1859 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1858 = $tmp1859;
        panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1860, rightField1858);
        panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
        panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, rightRef1854);
        panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1865);
        (($fn1867) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1866);
        rightRef1854 = rightField1858;
    }
    }
    truePred1868 = self->currentBlock;
    panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1869, ifFalse1841);
    panda$core$String* $tmp1872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1870, &$s1871);
    (($fn1873) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1872);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1841, p_out);
    panda$core$String* $tmp1875 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1874 = $tmp1875;
    panda$core$String* $tmp1877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1876, result1874);
    panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, &$s1878);
    panda$core$String* $tmp1880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1879, start1838);
    panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1880, &$s1881);
    panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1882, rightRef1854);
    panda$core$String* $tmp1885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1883, &$s1884);
    panda$core$String* $tmp1886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1885, truePred1868);
    panda$core$String* $tmp1888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1886, &$s1887);
    (($fn1889) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1888);
    return result1874;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1890;
    panda$core$String* leftField1894;
    panda$core$String* start1904;
    panda$core$String* ifTrue1905;
    panda$core$String* ifFalse1907;
    panda$core$String* rightRef1920;
    panda$core$String* rightField1924;
    panda$core$String* falsePred1934;
    panda$core$String* result1940;
    panda$core$String* $tmp1891 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1890 = $tmp1891;
    org$pandalanguage$pandac$Type* $tmp1892 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1893 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1892);
    if ($tmp1893.value) {
    {
        panda$core$String* $tmp1895 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1894 = $tmp1895;
        panda$core$String* $tmp1897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1896, leftField1894);
        panda$core$String* $tmp1899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1898);
        panda$core$String* $tmp1900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1899, leftRef1890);
        panda$core$String* $tmp1902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1900, &$s1901);
        (($fn1903) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1902);
        leftRef1890 = leftField1894;
    }
    }
    start1904 = self->currentBlock;
    panda$core$String* $tmp1906 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1905 = $tmp1906;
    panda$core$String* $tmp1908 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1907 = $tmp1908;
    panda$core$String* $tmp1910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1909, leftRef1890);
    panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1910, &$s1911);
    panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, ifTrue1905);
    panda$core$String* $tmp1915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, &$s1914);
    panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, ifFalse1907);
    panda$core$String* $tmp1918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, &$s1917);
    (($fn1919) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1918);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1907, p_out);
    panda$core$String* $tmp1921 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1920 = $tmp1921;
    org$pandalanguage$pandac$Type* $tmp1922 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1923 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1922);
    if ($tmp1923.value) {
    {
        panda$core$String* $tmp1925 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1924 = $tmp1925;
        panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1926, rightField1924);
        panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, &$s1928);
        panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1929, rightRef1920);
        panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, &$s1931);
        (($fn1933) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1932);
        rightRef1920 = rightField1924;
    }
    }
    falsePred1934 = self->currentBlock;
    panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1935, ifTrue1905);
    panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, &$s1937);
    (($fn1939) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1938);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1905, p_out);
    panda$core$String* $tmp1941 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1940 = $tmp1941;
    panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1942, result1940);
    panda$core$String* $tmp1945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1943, &$s1944);
    panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1945, start1904);
    panda$core$String* $tmp1948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, &$s1947);
    panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1948, rightRef1920);
    panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1949, &$s1950);
    panda$core$String* $tmp1952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, falsePred1934);
    panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, &$s1953);
    (($fn1955) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1954);
    return result1940;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp1956;
    panda$core$String* result1999;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1956 = &$s1957;
                }
                break;
                case 52:
                {
                    llvmOp1956 = &$s1958;
                }
                break;
                case 53:
                {
                    llvmOp1956 = &$s1959;
                }
                break;
                case 55:
                {
                    llvmOp1956 = &$s1960;
                }
                break;
                case 56:
                {
                    llvmOp1956 = &$s1961;
                }
                break;
                case 72:
                {
                    llvmOp1956 = &$s1962;
                }
                break;
                case 1:
                {
                    llvmOp1956 = &$s1963;
                }
                break;
                case 67:
                {
                    llvmOp1956 = &$s1964;
                }
                break;
                case 69:
                {
                    llvmOp1956 = &$s1965;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1956 = &$s1966;
                }
                break;
                case 58:
                {
                    llvmOp1956 = &$s1967;
                }
                break;
                case 59:
                {
                    llvmOp1956 = &$s1968;
                }
                break;
                case 63:
                {
                    llvmOp1956 = &$s1969;
                }
                break;
                case 62:
                {
                    llvmOp1956 = &$s1970;
                }
                break;
                case 65:
                {
                    llvmOp1956 = &$s1971;
                }
                break;
                case 64:
                {
                    llvmOp1956 = &$s1972;
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
                    llvmOp1956 = &$s1973;
                }
                break;
                case 52:
                {
                    llvmOp1956 = &$s1974;
                }
                break;
                case 53:
                {
                    llvmOp1956 = &$s1975;
                }
                break;
                case 55:
                {
                    llvmOp1956 = &$s1976;
                }
                break;
                case 56:
                {
                    llvmOp1956 = &$s1977;
                }
                break;
                case 72:
                {
                    llvmOp1956 = &$s1978;
                }
                break;
                case 1:
                {
                    llvmOp1956 = &$s1979;
                }
                break;
                case 67:
                {
                    llvmOp1956 = &$s1980;
                }
                break;
                case 69:
                {
                    llvmOp1956 = &$s1981;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1956 = &$s1982;
                }
                break;
                case 58:
                {
                    llvmOp1956 = &$s1983;
                }
                break;
                case 59:
                {
                    llvmOp1956 = &$s1984;
                }
                break;
                case 63:
                {
                    llvmOp1956 = &$s1985;
                }
                break;
                case 62:
                {
                    llvmOp1956 = &$s1986;
                }
                break;
                case 65:
                {
                    llvmOp1956 = &$s1987;
                }
                break;
                case 64:
                {
                    llvmOp1956 = &$s1988;
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
                    llvmOp1956 = &$s1989;
                }
                break;
                case 52:
                {
                    llvmOp1956 = &$s1990;
                }
                break;
                case 53:
                {
                    llvmOp1956 = &$s1991;
                }
                break;
                case 55:
                {
                    llvmOp1956 = &$s1992;
                }
                break;
                case 58:
                {
                    llvmOp1956 = &$s1993;
                }
                break;
                case 59:
                {
                    llvmOp1956 = &$s1994;
                }
                break;
                case 63:
                {
                    llvmOp1956 = &$s1995;
                }
                break;
                case 62:
                {
                    llvmOp1956 = &$s1996;
                }
                break;
                case 65:
                {
                    llvmOp1956 = &$s1997;
                }
                break;
                case 64:
                {
                    llvmOp1956 = &$s1998;
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
    panda$core$String* $tmp2000 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1999 = $tmp2000;
    panda$core$String* $tmp2002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2001, result1999);
    panda$core$String* $tmp2004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2002, &$s2003);
    panda$core$String* $tmp2005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2004, llvmOp1956);
    panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, &$s2006);
    panda$core$String* $tmp2008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, p_leftRef);
    panda$core$String* $tmp2010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2009);
    panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2010, p_rightRef);
    panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2011, &$s2012);
    (($fn2014) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2013);
    return result1999;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2015;
    panda$core$String* rightRef2017;
    panda$core$String* raw2019;
    panda$core$String* result2032;
    panda$core$String* $tmp2016 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef2015 = $tmp2016;
    panda$core$String* $tmp2018 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef2017 = $tmp2018;
    panda$core$String* $tmp2020 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw2019 = $tmp2020;
    panda$core$String* $tmp2022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2021, raw2019);
    panda$core$String* $tmp2024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2022, &$s2023);
    panda$core$String* $tmp2025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2024, leftRef2015);
    panda$core$String* $tmp2027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, &$s2026);
    panda$core$String* $tmp2028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2027, rightRef2017);
    panda$core$String* $tmp2030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2028, &$s2029);
    (($fn2031) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2030);
    panda$core$String* $tmp2033 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2032 = $tmp2033;
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2034, result2032);
    panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2035, &$s2036);
    panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2037, raw2019);
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, &$s2039);
    (($fn2041) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2040);
    return result2032;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2042;
    panda$core$String* rightRef2044;
    panda$core$String* raw2046;
    panda$core$String* result2059;
    panda$core$String* $tmp2043 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef2042 = $tmp2043;
    panda$core$String* $tmp2045 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef2044 = $tmp2045;
    panda$core$String* $tmp2047 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw2046 = $tmp2047;
    panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2048, raw2046);
    panda$core$String* $tmp2051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, &$s2050);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2051, leftRef2042);
    panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, &$s2053);
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2054, rightRef2044);
    panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2055, &$s2056);
    (($fn2058) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2057);
    panda$core$String* $tmp2060 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2059 = $tmp2060;
    panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2061, result2059);
    panda$core$String* $tmp2064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, &$s2063);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2064, raw2046);
    panda$core$String* $tmp2067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, &$s2066);
    (($fn2068) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2067);
    return result2059;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2074;
    panda$core$String* rightRef2076;
    panda$core$Bit $tmp2069 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp2069.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp2070 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2070;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp2071 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2071;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp2072 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2072;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp2073 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp2073;
        }
        break;
        default:
        {
            panda$core$String* $tmp2075 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef2074 = $tmp2075;
            panda$core$String* $tmp2077 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef2076 = $tmp2077;
            panda$core$Int64 $tmp2078 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp2079 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp2078, leftRef2074, p_op, rightRef2076, p_out);
            return $tmp2079;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp2080.value);
    panda$core$Int64 $tmp2081 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp2082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2081, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2082.value);
    panda$core$Object* $tmp2083 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2085 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2083), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp2084), p_out);
    return $tmp2085;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s2086;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2087;
    panda$core$Int64 index2089;
    panda$collections$ListView* vtable2090;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2092;
    panda$core$String* classPtrPtr2130;
    panda$core$String* classPtr2147;
    panda$core$String* cast2157;
    panda$core$String* ptr2170;
    panda$core$String* load2194;
    panda$core$String* result2204;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2088 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc2087 = $tmp2088;
    index2089 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2091 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2090 = $tmp2091;
    ITable* $tmp2093 = ((panda$collections$CollectionView*) vtable2090)->$class->itable;
    while ($tmp2093->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2093 = $tmp2093->next;
    }
    $fn2095 $tmp2094 = $tmp2093->methods[0];
    panda$core$Int64 $tmp2096 = $tmp2094(((panda$collections$CollectionView*) vtable2090));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2092, ((panda$core$Int64) { 0 }), $tmp2096, ((panda$core$Bit) { false }));
    int64_t $tmp2098 = $tmp2092.min.value;
    panda$core$Int64 i2097 = { $tmp2098 };
    int64_t $tmp2100 = $tmp2092.max.value;
    bool $tmp2101 = $tmp2092.inclusive.value;
    bool $tmp2108 = 1 > 0;
    if ($tmp2108) goto $l2106; else goto $l2107;
    $l2106:;
    if ($tmp2101) goto $l2109; else goto $l2110;
    $l2109:;
    if ($tmp2098 <= $tmp2100) goto $l2102; else goto $l2104;
    $l2110:;
    if ($tmp2098 < $tmp2100) goto $l2102; else goto $l2104;
    $l2107:;
    if ($tmp2101) goto $l2111; else goto $l2112;
    $l2111:;
    if ($tmp2098 >= $tmp2100) goto $l2102; else goto $l2104;
    $l2112:;
    if ($tmp2098 > $tmp2100) goto $l2102; else goto $l2104;
    $l2102:;
    {
        ITable* $tmp2114 = vtable2090->$class->itable;
        while ($tmp2114->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2114 = $tmp2114->next;
        }
        $fn2116 $tmp2115 = $tmp2114->methods[0];
        panda$core$Object* $tmp2117 = $tmp2115(vtable2090, i2097);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2117)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2089 = i2097;
            goto $l2104;
        }
        }
    }
    $l2105:;
    if ($tmp2108) goto $l2119; else goto $l2120;
    $l2119:;
    int64_t $tmp2121 = $tmp2100 - i2097.value;
    if ($tmp2101) goto $l2122; else goto $l2123;
    $l2122:;
    if ($tmp2121 >= 1) goto $l2118; else goto $l2104;
    $l2123:;
    if ($tmp2121 > 1) goto $l2118; else goto $l2104;
    $l2120:;
    int64_t $tmp2125 = i2097.value - $tmp2100;
    if ($tmp2101) goto $l2126; else goto $l2127;
    $l2126:;
    if ($tmp2125 >= -1) goto $l2118; else goto $l2104;
    $l2127:;
    if ($tmp2125 > -1) goto $l2118; else goto $l2104;
    $l2118:;
    i2097.value += 1;
    goto $l2102;
    $l2104:;
    panda$core$Bit $tmp2129 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2089, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2129.value);
    panda$core$String* $tmp2131 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2130 = $tmp2131;
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2132, classPtrPtr2130);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
    org$pandalanguage$pandac$Type* $tmp2136 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2137 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2136);
    panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, $tmp2137);
    panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2138, &$s2139);
    panda$core$String* $tmp2142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2141, p_target);
    panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2142, &$s2143);
    panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, $tmp2144);
    (($fn2146) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2145);
    panda$core$String* $tmp2148 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2147 = $tmp2148;
    panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2149, classPtr2147);
    panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2150, &$s2151);
    panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2152, classPtrPtr2130);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
    (($fn2156) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2155);
    panda$core$String* $tmp2158 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2157 = $tmp2158;
    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2159, cast2157);
    panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, &$s2161);
    panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, classPtr2147);
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, &$s2164);
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, cc2087->type);
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2167);
    (($fn2169) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2168);
    panda$core$String* $tmp2171 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2170 = $tmp2171;
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2172, ptr2170);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
    panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, cc2087->type);
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
    panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, cc2087->type);
    panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2179, &$s2180);
    panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2181, cast2157);
    panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, &$s2183);
    panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2185, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, &$s2187);
    panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2188, ((panda$core$Object*) wrap_panda$core$Int64(index2089)));
    panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2184, $tmp2191);
    (($fn2193) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2192);
    panda$core$String* $tmp2195 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2194 = $tmp2195;
    panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2196, load2194);
    panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2197, &$s2198);
    panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, ptr2170);
    panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2200, &$s2201);
    (($fn2203) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2202);
    panda$core$String* $tmp2205 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2204 = $tmp2205;
    panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2206, result2204);
    panda$core$String* $tmp2209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2207, &$s2208);
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2209, load2194);
    panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2210, &$s2211);
    org$pandalanguage$pandac$Type* $tmp2213 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2214 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2213);
    panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2212, $tmp2214);
    (($fn2216) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2215);
    return result2204;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2217;
    panda$core$String* entry2220;
    panda$core$String* classPointer2227;
    panda$core$String* loadedClass2251;
    panda$core$String* classType2253;
    panda$core$String* itableFirst2270;
    panda$core$String* next2295;
    panda$core$String* leavingEntryLabel2302;
    panda$core$String* itableNext2304;
    panda$core$String* itablePtrPtr2309;
    panda$core$String* fail2311;
    panda$core$String* itablePtr2332;
    panda$core$String* itableClassPtr2342;
    panda$core$String* itableClass2358;
    panda$core$String* test2374;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2376;
    panda$core$String* success2400;
    panda$core$Int64 index2432;
    panda$collections$ListView* vtable2433;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2435;
    panda$core$String* methodPtrPtr2481;
    panda$core$String* cast2500;
    panda$core$String* methodPtr2513;
    org$pandalanguage$pandac$Type* $tmp2218 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2219 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2218);
    methodType2217 = $tmp2219;
    panda$core$String* $tmp2221 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2220 = $tmp2221;
    panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2222, entry2220);
    panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2223, &$s2224);
    (($fn2226) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2225);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, entry2220, p_out);
    panda$core$String* $tmp2228 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2227 = $tmp2228;
    panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2229, classPointer2227);
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2230, &$s2231);
    org$pandalanguage$pandac$Type* $tmp2233 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2234 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2233);
    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, $tmp2234);
    panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
    panda$core$String* $tmp2239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2238, p_target);
    panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, &$s2240);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, &$s2242);
    panda$core$String* $tmp2245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, &$s2244);
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2245, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, &$s2247);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, $tmp2248);
    (($fn2250) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2249);
    panda$core$String* $tmp2252 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2251 = $tmp2252;
    org$pandalanguage$pandac$Type* $tmp2254 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2255 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2254);
    classType2253 = $tmp2255;
    panda$core$String* $tmp2257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2256, loadedClass2251);
    panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2257, &$s2258);
    panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2259, classType2253);
    panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2260, &$s2261);
    panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2262, classType2253);
    panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, &$s2264);
    panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2265, classPointer2227);
    panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, &$s2267);
    (($fn2269) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2268);
    panda$core$String* $tmp2271 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2270 = $tmp2271;
    panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2272, itableFirst2270);
    panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2273, &$s2274);
    panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2275, classType2253);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, &$s2277);
    panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2278, classType2253);
    panda$core$String* $tmp2281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2279, &$s2280);
    panda$core$String* $tmp2283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2282, loadedClass2251);
    panda$core$String* $tmp2285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2283, &$s2284);
    panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2285, &$s2286);
    panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2288);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2289, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, &$s2291);
    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2281, $tmp2292);
    (($fn2294) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2293);
    panda$core$String* $tmp2296 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2295 = $tmp2296;
    panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2297, next2295);
    panda$core$String* $tmp2300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2298, &$s2299);
    (($fn2301) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2300);
    leavingEntryLabel2302 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, next2295, p_out);
    panda$core$Int64 $tmp2303 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2303;
    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2305, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, &$s2307);
    itableNext2304 = $tmp2308;
    panda$core$String* $tmp2310 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2309 = $tmp2310;
    panda$core$String* $tmp2312 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2311 = $tmp2312;
    panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2313, itablePtrPtr2309);
    panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2314, &$s2315);
    panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2316, itableFirst2270);
    panda$core$String* $tmp2319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2317, &$s2318);
    panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2319, leavingEntryLabel2302);
    panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2320, &$s2321);
    panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2323, itableNext2304);
    panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2324, &$s2325);
    panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2326, fail2311);
    panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2327, &$s2328);
    panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, $tmp2329);
    (($fn2331) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2330);
    panda$core$String* $tmp2333 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2332 = $tmp2333;
    panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2334, itablePtr2332);
    panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2335, &$s2336);
    panda$core$String* $tmp2338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, itablePtrPtr2309);
    panda$core$String* $tmp2340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2338, &$s2339);
    (($fn2341) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2340);
    panda$core$String* $tmp2343 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2342 = $tmp2343;
    panda$core$String* $tmp2345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2344, itableClassPtr2342);
    panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2345, &$s2346);
    panda$core$String* $tmp2349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2348, itablePtr2332);
    panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2349, &$s2350);
    panda$core$String* $tmp2353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2351, &$s2352);
    panda$core$String* $tmp2355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2353, &$s2354);
    panda$core$String* $tmp2356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2347, $tmp2355);
    (($fn2357) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2356);
    panda$core$String* $tmp2359 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2358 = $tmp2359;
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2360, itableClass2358);
    panda$core$String* $tmp2363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2362);
    panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, classType2253);
    panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, &$s2365);
    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, classType2253);
    panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2368);
    panda$core$String* $tmp2370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, itableClassPtr2342);
    panda$core$String* $tmp2372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2370, &$s2371);
    (($fn2373) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2372);
    panda$core$String* $tmp2375 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2374 = $tmp2375;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2377 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2376 = $tmp2377;
    panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2378, test2374);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2379, &$s2380);
    panda$core$String* $tmp2382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2381, classType2253);
    panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2382, &$s2383);
    panda$core$String* $tmp2385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2384, intfCC2376->type);
    panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2385, &$s2386);
    panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2387, intfCC2376->name);
    panda$core$String* $tmp2390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2388, &$s2389);
    panda$core$String* $tmp2392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2391, classType2253);
    panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2392, &$s2393);
    panda$core$String* $tmp2395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2394, itableClass2358);
    panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2395, &$s2396);
    panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2390, $tmp2397);
    (($fn2399) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2398);
    panda$core$String* $tmp2401 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2400 = $tmp2401;
    panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2402, test2374);
    panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2403, &$s2404);
    panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, success2400);
    panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, &$s2407);
    panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, fail2311);
    panda$core$String* $tmp2411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2409, &$s2410);
    (($fn2412) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2411);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, fail2311, p_out);
    panda$core$String* $tmp2414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2413, itableNext2304);
    panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2414, &$s2415);
    panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, itablePtr2332);
    panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, &$s2418);
    panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2420, &$s2421);
    panda$core$String* $tmp2424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2422, &$s2423);
    panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, $tmp2424);
    (($fn2426) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2425);
    panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2427, next2295);
    panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2429);
    (($fn2431) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2430);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, success2400, p_out);
    index2432 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2434 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2433 = $tmp2434;
    ITable* $tmp2436 = ((panda$collections$CollectionView*) vtable2433)->$class->itable;
    while ($tmp2436->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2436 = $tmp2436->next;
    }
    $fn2438 $tmp2437 = $tmp2436->methods[0];
    panda$core$Int64 $tmp2439 = $tmp2437(((panda$collections$CollectionView*) vtable2433));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2435, ((panda$core$Int64) { 0 }), $tmp2439, ((panda$core$Bit) { false }));
    int64_t $tmp2441 = $tmp2435.min.value;
    panda$core$Int64 i2440 = { $tmp2441 };
    int64_t $tmp2443 = $tmp2435.max.value;
    bool $tmp2444 = $tmp2435.inclusive.value;
    bool $tmp2451 = 1 > 0;
    if ($tmp2451) goto $l2449; else goto $l2450;
    $l2449:;
    if ($tmp2444) goto $l2452; else goto $l2453;
    $l2452:;
    if ($tmp2441 <= $tmp2443) goto $l2445; else goto $l2447;
    $l2453:;
    if ($tmp2441 < $tmp2443) goto $l2445; else goto $l2447;
    $l2450:;
    if ($tmp2444) goto $l2454; else goto $l2455;
    $l2454:;
    if ($tmp2441 >= $tmp2443) goto $l2445; else goto $l2447;
    $l2455:;
    if ($tmp2441 > $tmp2443) goto $l2445; else goto $l2447;
    $l2445:;
    {
        ITable* $tmp2457 = vtable2433->$class->itable;
        while ($tmp2457->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2457 = $tmp2457->next;
        }
        $fn2459 $tmp2458 = $tmp2457->methods[0];
        panda$core$Object* $tmp2460 = $tmp2458(vtable2433, i2440);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2460)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2432 = i2440;
            goto $l2447;
        }
        }
    }
    $l2448:;
    if ($tmp2451) goto $l2462; else goto $l2463;
    $l2462:;
    int64_t $tmp2464 = $tmp2443 - i2440.value;
    if ($tmp2444) goto $l2465; else goto $l2466;
    $l2465:;
    if ($tmp2464 >= 1) goto $l2461; else goto $l2447;
    $l2466:;
    if ($tmp2464 > 1) goto $l2461; else goto $l2447;
    $l2463:;
    int64_t $tmp2468 = i2440.value - $tmp2443;
    if ($tmp2444) goto $l2469; else goto $l2470;
    $l2469:;
    if ($tmp2468 >= -1) goto $l2461; else goto $l2447;
    $l2470:;
    if ($tmp2468 > -1) goto $l2461; else goto $l2447;
    $l2461:;
    i2440.value += 1;
    goto $l2445;
    $l2447:;
    org$pandalanguage$pandac$Type* $tmp2472 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2473 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2472);
    panda$collections$ListView* $tmp2474 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2473);
    ITable* $tmp2475 = ((panda$collections$CollectionView*) $tmp2474)->$class->itable;
    while ($tmp2475->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2475 = $tmp2475->next;
    }
    $fn2477 $tmp2476 = $tmp2475->methods[0];
    panda$core$Int64 $tmp2478 = $tmp2476(((panda$collections$CollectionView*) $tmp2474));
    panda$core$Int64 $tmp2479 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2432, $tmp2478);
    index2432 = $tmp2479;
    panda$core$Bit $tmp2480 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2432, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2480.value);
    panda$core$String* $tmp2482 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2481 = $tmp2482;
    panda$core$String* $tmp2484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2483, methodPtrPtr2481);
    panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2484, &$s2485);
    panda$core$String* $tmp2488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2487, itablePtr2332);
    panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2488, &$s2489);
    panda$core$String* $tmp2492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2490, &$s2491);
    panda$core$String* $tmp2494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2492, &$s2493);
    panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2494, ((panda$core$Object*) wrap_panda$core$Int64(index2432)));
    panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, &$s2496);
    panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2486, $tmp2497);
    (($fn2499) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2498);
    panda$core$String* $tmp2501 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2500 = $tmp2501;
    panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2502, cast2500);
    panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2503, &$s2504);
    panda$core$String* $tmp2506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2505, methodPtrPtr2481);
    panda$core$String* $tmp2508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2506, &$s2507);
    panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2508, methodType2217);
    panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2509, &$s2510);
    (($fn2512) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2511);
    panda$core$String* $tmp2514 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2513 = $tmp2514;
    panda$core$String* $tmp2516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2515, methodPtr2513);
    panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2516, &$s2517);
    panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2518, methodType2217);
    panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, &$s2520);
    panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, methodType2217);
    panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2522, &$s2523);
    panda$core$String* $tmp2525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2524, cast2500);
    panda$core$String* $tmp2527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2525, &$s2526);
    (($fn2528) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2527);
    return methodPtr2513;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2530 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2529 = $tmp2530.value;
    if (!$tmp2529) goto $l2531;
    panda$core$Bit $tmp2532 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2529 = $tmp2532.value;
    $l2531:;
    panda$core$Bit $tmp2533 = { $tmp2529 };
    if ($tmp2533.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2534.value) {
        {
            panda$core$String* $tmp2535 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2535;
        }
        }
        else {
        {
            panda$core$String* $tmp2536 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2536;
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
        panda$core$String* $tmp2537 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2537;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2538;
    panda$core$String* $match$1189_92539;
    panda$core$String* countStruct2544;
    panda$core$String* count2547;
    panda$core$String* size2557;
    panda$core$Int64 elementSize2559;
    panda$core$String* malloc2579;
    panda$core$String* result2593;
    panda$core$String* ptr2612;
    panda$core$String* baseType2615;
    panda$core$String* ptrType2618;
    panda$core$String* cast2621;
    panda$core$String* load2634;
    panda$core$String* ptr2654;
    panda$core$String* baseType2657;
    panda$core$String* ptrType2660;
    panda$core$String* cast2663;
    panda$core$String* indexStruct2676;
    panda$core$String* index2679;
    panda$core$String* offsetPtr2689;
    panda$core$String* load2710;
    panda$core$String* ptr2730;
    panda$core$String* ptrCast2733;
    panda$core$String* countStruct2743;
    panda$core$String* count2746;
    panda$core$String* size2756;
    panda$core$String* realloc2774;
    panda$core$String* result2793;
    panda$core$String* ptr2812;
    panda$core$String* baseType2815;
    panda$core$String* offsetStruct2819;
    panda$core$String* offset2822;
    panda$core$String* result2832;
    m2538 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1189_92539 = ((org$pandalanguage$pandac$Symbol*) m2538->value)->name;
        panda$core$Bit $tmp2541 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92539, &$s2540);
        if ($tmp2541.value) {
        {
            panda$core$Int64 $tmp2542 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2542, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2543.value);
            panda$core$Object* $tmp2545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2546 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2545), p_out);
            countStruct2544 = $tmp2546;
            panda$core$String* $tmp2548 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2547 = $tmp2548;
            panda$core$String* $tmp2550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2549, count2547);
            panda$core$String* $tmp2552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2550, &$s2551);
            panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2552, countStruct2544);
            panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, &$s2554);
            (($fn2556) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2555);
            panda$core$String* $tmp2558 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2557 = $tmp2558;
            org$pandalanguage$pandac$Type* $tmp2560 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2538);
            panda$core$Object* $tmp2561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2560->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2562 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2561));
            elementSize2559 = $tmp2562;
            panda$core$Bit $tmp2563 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2559, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2563.value);
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2564, size2557);
            panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, &$s2566);
            panda$core$String* $tmp2569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2567, &$s2568);
            panda$core$String* $tmp2571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2569, &$s2570);
            panda$core$String* $tmp2572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2571, count2547);
            panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2572, &$s2573);
            panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2574, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2559)));
            panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, &$s2576);
            (($fn2578) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2577);
            panda$core$String* $tmp2580 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2579 = $tmp2580;
            panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2581, malloc2579);
            panda$core$String* $tmp2584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2583);
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2585);
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2587);
            panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, size2557);
            panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, &$s2590);
            (($fn2592) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2591);
            panda$core$String* $tmp2594 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2593 = $tmp2594;
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2595, result2593);
            panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, &$s2597);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2598, malloc2579);
            panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, &$s2600);
            org$pandalanguage$pandac$Type* $tmp2602 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2538);
            panda$core$String* $tmp2603 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2602);
            panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, $tmp2603);
            panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, &$s2605);
            (($fn2607) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2606);
            return result2593;
        }
        }
        else {
        panda$core$Bit $tmp2609 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92539, &$s2608);
        if ($tmp2609.value) {
        {
            panda$core$Int64 $tmp2610 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2610, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2611.value);
            panda$core$Object* $tmp2613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2614 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2613), p_out);
            ptr2612 = $tmp2614;
            org$pandalanguage$pandac$Type* $tmp2616 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2538);
            panda$core$String* $tmp2617 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2616);
            baseType2615 = $tmp2617;
            panda$core$String* $tmp2620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2615, &$s2619);
            ptrType2618 = $tmp2620;
            panda$core$String* $tmp2622 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2621 = $tmp2622;
            panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2623, cast2621);
            panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, &$s2625);
            panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2626, ptr2612);
            panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2628);
            panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, ptrType2618);
            panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2630, &$s2631);
            (($fn2633) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2632);
            panda$core$String* $tmp2635 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2634 = $tmp2635;
            panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2636, load2634);
            panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, &$s2638);
            panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, baseType2615);
            panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2641);
            panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, ptrType2618);
            panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2643, &$s2644);
            panda$core$String* $tmp2646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2645, cast2621);
            panda$core$String* $tmp2648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, &$s2647);
            (($fn2649) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2648);
            return load2634;
        }
        }
        else {
        panda$core$Bit $tmp2651 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92539, &$s2650);
        if ($tmp2651.value) {
        {
            panda$core$Int64 $tmp2652 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2652, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2653.value);
            panda$core$Object* $tmp2655 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2656 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2655), p_out);
            ptr2654 = $tmp2656;
            org$pandalanguage$pandac$Type* $tmp2658 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2538);
            panda$core$String* $tmp2659 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2658);
            baseType2657 = $tmp2659;
            panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2657, &$s2661);
            ptrType2660 = $tmp2662;
            panda$core$String* $tmp2664 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2663 = $tmp2664;
            panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2665, cast2663);
            panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, &$s2667);
            panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, ptr2654);
            panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, &$s2670);
            panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, ptrType2660);
            panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2673);
            (($fn2675) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2674);
            panda$core$Object* $tmp2677 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2678 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2677), p_out);
            indexStruct2676 = $tmp2678;
            panda$core$String* $tmp2680 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2679 = $tmp2680;
            panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2681, index2679);
            panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, &$s2683);
            panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2684, indexStruct2676);
            panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2685, &$s2686);
            (($fn2688) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2687);
            panda$core$String* $tmp2690 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2689 = $tmp2690;
            panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2691, offsetPtr2689);
            panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2692, &$s2693);
            panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, baseType2657);
            panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
            panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, ptrType2660);
            panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
            panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, cast2663);
            panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, &$s2702);
            panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2704, index2679);
            panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, &$s2706);
            panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2703, $tmp2707);
            (($fn2709) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2708);
            panda$core$String* $tmp2711 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2710 = $tmp2711;
            panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2712, load2710);
            panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
            panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, baseType2657);
            panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
            panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, ptrType2660);
            panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, &$s2720);
            panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, offsetPtr2689);
            panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, &$s2723);
            (($fn2725) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2724);
            return load2710;
        }
        }
        else {
        panda$core$Bit $tmp2727 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92539, &$s2726);
        if ($tmp2727.value) {
        {
            panda$core$Int64 $tmp2728 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2728, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2729.value);
            panda$core$Object* $tmp2731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2732 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2731), p_out);
            ptr2730 = $tmp2732;
            panda$core$String* $tmp2734 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2733 = $tmp2734;
            panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2735, ptrCast2733);
            panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
            panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, ptr2730);
            panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
            (($fn2742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2741);
            panda$core$Object* $tmp2744 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2745 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2744), p_out);
            countStruct2743 = $tmp2745;
            panda$core$String* $tmp2747 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2746 = $tmp2747;
            panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2748, count2746);
            panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
            panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, countStruct2743);
            panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, &$s2753);
            (($fn2755) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2754);
            panda$core$String* $tmp2757 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2756 = $tmp2757;
            panda$core$String* $tmp2759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2758, size2756);
            panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2759, &$s2760);
            panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2761, &$s2762);
            panda$core$String* $tmp2765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, &$s2764);
            panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2765, count2746);
            panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, &$s2767);
            org$pandalanguage$pandac$Type* $tmp2769 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2538);
            panda$core$Object* $tmp2770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2769->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2771 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2770));
            panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2768, ((panda$core$Object*) wrap_panda$core$Int64($tmp2771)));
            (($fn2773) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2772);
            panda$core$String* $tmp2775 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2774 = $tmp2775;
            panda$core$String* $tmp2777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2776, realloc2774);
            panda$core$String* $tmp2779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2777, &$s2778);
            panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2779, ptrCast2733);
            panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, &$s2781);
            panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, &$s2783);
            panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, &$s2785);
            panda$core$String* $tmp2788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2787, size2756);
            panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2788, &$s2789);
            panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, $tmp2790);
            (($fn2792) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2791);
            panda$core$String* $tmp2794 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2793 = $tmp2794;
            panda$core$String* $tmp2796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2795, result2793);
            panda$core$String* $tmp2798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2796, &$s2797);
            panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2798, realloc2774);
            panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, &$s2800);
            org$pandalanguage$pandac$Type* $tmp2802 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2538);
            panda$core$String* $tmp2803 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2802);
            panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, $tmp2803);
            panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2805);
            (($fn2807) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2806);
            return result2793;
        }
        }
        else {
        panda$core$Bit $tmp2809 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92539, &$s2808);
        if ($tmp2809.value) {
        {
            panda$core$Int64 $tmp2810 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2810, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2811.value);
            panda$core$Object* $tmp2813 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2814 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2813), p_out);
            ptr2812 = $tmp2814;
            panda$core$Object* $tmp2816 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2817 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2816)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2818 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2817));
            baseType2815 = $tmp2818;
            panda$core$Object* $tmp2820 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2821 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2820), p_out);
            offsetStruct2819 = $tmp2821;
            panda$core$String* $tmp2823 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2822 = $tmp2823;
            panda$core$String* $tmp2825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2824, offset2822);
            panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2825, &$s2826);
            panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, offsetStruct2819);
            panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, &$s2829);
            (($fn2831) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2830);
            panda$core$String* $tmp2833 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2832 = $tmp2833;
            panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2834, result2832);
            panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
            panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, baseType2815);
            panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
            panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, ptr2812);
            panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2842);
            panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2843, offset2822);
            panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2844, &$s2845);
            (($fn2847) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2846);
            return result2832;
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
    org$pandalanguage$pandac$MethodDecl* m2848;
    panda$core$String* selfRef2849;
    panda$core$Int64 argStart2851;
    panda$collections$Array* args2855;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2858;
    panda$core$String* end2890;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2899;
    org$pandalanguage$pandac$MethodDecl* old2906;
    panda$core$String* phi2919;
    panda$core$String* separator2930;
    panda$collections$Iterator* ret$Iter2932;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2944;
    m2848 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2848->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2848), ((panda$core$Object*) m2848));
    selfRef2849 = &$s2850;
    panda$core$Bit $tmp2852 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2848);
    if ($tmp2852.value) {
    {
        argStart2851 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2853 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2854 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2853), p_out);
        selfRef2849 = $tmp2854;
    }
    }
    else {
    {
        argStart2851 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2856 = (panda$collections$Array*) malloc(40);
    $tmp2856->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2856->refCount.value = 1;
    panda$collections$Array$init($tmp2856);
    args2855 = $tmp2856;
    panda$core$Int64 $tmp2859 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2858, argStart2851, $tmp2859, ((panda$core$Bit) { false }));
    int64_t $tmp2861 = $tmp2858.min.value;
    panda$core$Int64 i2860 = { $tmp2861 };
    int64_t $tmp2863 = $tmp2858.max.value;
    bool $tmp2864 = $tmp2858.inclusive.value;
    bool $tmp2871 = 1 > 0;
    if ($tmp2871) goto $l2869; else goto $l2870;
    $l2869:;
    if ($tmp2864) goto $l2872; else goto $l2873;
    $l2872:;
    if ($tmp2861 <= $tmp2863) goto $l2865; else goto $l2867;
    $l2873:;
    if ($tmp2861 < $tmp2863) goto $l2865; else goto $l2867;
    $l2870:;
    if ($tmp2864) goto $l2874; else goto $l2875;
    $l2874:;
    if ($tmp2861 >= $tmp2863) goto $l2865; else goto $l2867;
    $l2875:;
    if ($tmp2861 > $tmp2863) goto $l2865; else goto $l2867;
    $l2865:;
    {
        panda$core$Object* $tmp2877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2860);
        panda$core$String* $tmp2878 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2877), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2855, ((panda$core$Object*) $tmp2878));
    }
    $l2868:;
    if ($tmp2871) goto $l2880; else goto $l2881;
    $l2880:;
    int64_t $tmp2882 = $tmp2863 - i2860.value;
    if ($tmp2864) goto $l2883; else goto $l2884;
    $l2883:;
    if ($tmp2882 >= 1) goto $l2879; else goto $l2867;
    $l2884:;
    if ($tmp2882 > 1) goto $l2879; else goto $l2867;
    $l2881:;
    int64_t $tmp2886 = i2860.value - $tmp2863;
    if ($tmp2864) goto $l2887; else goto $l2888;
    $l2887:;
    if ($tmp2886 >= -1) goto $l2879; else goto $l2867;
    $l2888:;
    if ($tmp2886 > -1) goto $l2879; else goto $l2867;
    $l2879:;
    i2860.value += 1;
    goto $l2865;
    $l2867:;
    panda$core$String* $tmp2891 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2890 = $tmp2891;
    panda$core$Int64 $tmp2892 = panda$collections$Array$get_count$R$panda$core$Int64(args2855);
    panda$core$Int64 $tmp2893 = panda$collections$Array$get_count$R$panda$core$Int64(m2848->parameters);
    panda$core$Bit $tmp2894 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2892, $tmp2893);
    if ($tmp2894.value) {
    {
        panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2895, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2898));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2900 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2900->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2900->refCount.value = 1;
    panda$core$String* $tmp2903 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2902, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2903, &$s2904);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2900, $tmp2905, selfRef2849, ((panda$collections$ListView*) args2855), end2890);
    inline2899 = $tmp2900;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2899));
    old2906 = self->currentMethod;
    self->currentMethod = m2848;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_body, p_out);
    self->currentMethod = old2906;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2907 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2908 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2907);
    if ($tmp2908.value) {
    {
        (($fn2910) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2909);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end2890, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2848));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2911 = panda$collections$Array$get_count$R$panda$core$Int64(inline2899->returns);
    panda$core$Bit $tmp2912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2911, ((panda$core$Int64) { 1 }));
    if ($tmp2912.value) {
    {
        panda$core$Object* $tmp2913 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2899->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2913)->second);
    }
    }
    panda$core$Int64 $tmp2914 = panda$collections$Array$get_count$R$panda$core$Int64(inline2899->returns);
    panda$core$Bit $tmp2915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2914, ((panda$core$Int64) { 0 }));
    if ($tmp2915.value) {
    {
        (($fn2917) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2916);
        return &$s2918;
    }
    }
    panda$core$String* $tmp2920 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2919 = $tmp2920;
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2921, phi2919);
    panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, &$s2923);
    panda$core$String* $tmp2925 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2848->returnType);
    panda$core$String* $tmp2926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2924, $tmp2925);
    panda$core$String* $tmp2928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, &$s2927);
    (($fn2929) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2928);
    separator2930 = &$s2931;
    {
        ITable* $tmp2933 = ((panda$collections$Iterable*) inline2899->returns)->$class->itable;
        while ($tmp2933->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2933 = $tmp2933->next;
        }
        $fn2935 $tmp2934 = $tmp2933->methods[0];
        panda$collections$Iterator* $tmp2936 = $tmp2934(((panda$collections$Iterable*) inline2899->returns));
        ret$Iter2932 = $tmp2936;
        $l2937:;
        ITable* $tmp2939 = ret$Iter2932->$class->itable;
        while ($tmp2939->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2939 = $tmp2939->next;
        }
        $fn2941 $tmp2940 = $tmp2939->methods[0];
        panda$core$Bit $tmp2942 = $tmp2940(ret$Iter2932);
        panda$core$Bit $tmp2943 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2942);
        if (!$tmp2943.value) goto $l2938;
        {
            ITable* $tmp2945 = ret$Iter2932->$class->itable;
            while ($tmp2945->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2945 = $tmp2945->next;
            }
            $fn2947 $tmp2946 = $tmp2945->methods[1];
            panda$core$Object* $tmp2948 = $tmp2946(ret$Iter2932);
            ret2944 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2948);
            panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2949, separator2930);
            panda$core$String* $tmp2952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2950, &$s2951);
            panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2952, ((panda$core$String*) ret2944->second));
            panda$core$String* $tmp2955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2953, &$s2954);
            panda$core$String* $tmp2956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2955, ((panda$core$String*) ret2944->first));
            panda$core$String* $tmp2958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2956, &$s2957);
            (($fn2959) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2958);
            separator2930 = &$s2960;
        }
        goto $l2937;
        $l2938:;
    }
    (($fn2961) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi2919;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2963;
    panda$core$String* bit2973;
    panda$core$String* result2977;
    panda$core$String* bit2993;
    panda$core$String* result2997;
    org$pandalanguage$pandac$IRNode* block3014;
    panda$collections$Array* args3018;
    org$pandalanguage$pandac$Type* actualMethodType3022;
    panda$core$String* actualResultType3023;
    panda$core$Bit isSuper3024;
    panda$core$Int64 offset3044;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3049;
    panda$core$String* arg3068;
    panda$core$String* target3105;
    panda$core$String* methodRef3109;
    panda$core$String* result3111;
    panda$core$Bit indirect3112;
    panda$core$String* separator3138;
    panda$core$String* indirectVar3140;
    panda$collections$Iterator* arg$Iter3161;
    panda$core$String* arg3173;
    panda$core$Bit $tmp2962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2962.value);
    m2963 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2965 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2963->owner)->name, &$s2964);
    if ($tmp2965.value) {
    {
        panda$core$String* $tmp2966 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2966;
    }
    }
    if (m2963->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2963);
    }
    }
    panda$core$Bit $tmp2968 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2963->owner)->name, &$s2967);
    if ($tmp2968.value) {
    {
        panda$core$Bit $tmp2970 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2963)->name, &$s2969);
        if ($tmp2970.value) {
        {
            panda$core$Int64 $tmp2971 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2971, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2972.value);
            panda$core$Object* $tmp2974 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2975 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2976 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2974), ((org$pandalanguage$pandac$IRNode*) $tmp2975), p_out);
            bit2973 = $tmp2976;
            panda$core$String* $tmp2978 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2977 = $tmp2978;
            panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2979, result2977);
            panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, &$s2981);
            panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2983, bit2973);
            panda$core$String* $tmp2986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, &$s2985);
            panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, $tmp2986);
            (($fn2988) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2987);
            return result2977;
        }
        }
        panda$core$Bit $tmp2990 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2963)->name, &$s2989);
        if ($tmp2990.value) {
        {
            panda$core$Int64 $tmp2991 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2991, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2992.value);
            panda$core$Object* $tmp2994 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2995 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2996 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2994), ((org$pandalanguage$pandac$IRNode*) $tmp2995), p_out);
            bit2993 = $tmp2996;
            panda$core$String* $tmp2998 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2997 = $tmp2998;
            panda$core$String* $tmp3000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2999, result2997);
            panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3000, &$s3001);
            panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3003, bit2993);
            panda$core$String* $tmp3006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3004, &$s3005);
            panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, $tmp3006);
            (($fn3008) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3007);
            return result2997;
        }
        }
    }
    }
    panda$core$Bit $tmp3010 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2963->annotations);
    bool $tmp3009 = $tmp3010.value;
    if (!$tmp3009) goto $l3011;
    panda$core$Object* $tmp3012 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2963));
    $tmp3009 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp3012) == NULL }).value;
    $l3011:;
    panda$core$Bit $tmp3013 = { $tmp3009 };
    if ($tmp3013.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3015 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2963);
        block3014 = $tmp3015;
        if (((panda$core$Bit) { block3014 != NULL }).value) {
        {
            panda$core$String* $tmp3016 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, block3014, p_out);
            return $tmp3016;
        }
        }
        return &$s3017;
    }
    }
    panda$collections$Array* $tmp3019 = (panda$collections$Array*) malloc(40);
    $tmp3019->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3019->refCount.value = 1;
    panda$core$Int64 $tmp3021 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp3019, $tmp3021);
    args3018 = $tmp3019;
    panda$core$Int64 $tmp3026 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp3027 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3026, ((panda$core$Int64) { 1 }));
    bool $tmp3025 = $tmp3027.value;
    if (!$tmp3025) goto $l3028;
    panda$core$Object* $tmp3029 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3029)->kind, ((panda$core$Int64) { 1024 }));
    $tmp3025 = $tmp3030.value;
    $l3028:;
    panda$core$Bit $tmp3031 = { $tmp3025 };
    isSuper3024 = $tmp3031;
    panda$core$Bit $tmp3033 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper3024);
    bool $tmp3032 = $tmp3033.value;
    if (!$tmp3032) goto $l3034;
    panda$core$Bit $tmp3035 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2963);
    $tmp3032 = $tmp3035.value;
    $l3034:;
    panda$core$Bit $tmp3036 = { $tmp3032 };
    if ($tmp3036.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3037 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2963);
        actualMethodType3022 = $tmp3037;
        panda$core$Int64 $tmp3038 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType3022->subtypes);
        panda$core$Int64 $tmp3039 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3038, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3040 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType3022->subtypes, $tmp3039);
        panda$core$String* $tmp3041 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3040));
        actualResultType3023 = $tmp3041;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3042 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2963);
        actualMethodType3022 = $tmp3042;
        panda$core$String* $tmp3043 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType3023 = $tmp3043;
    }
    }
    panda$core$Int64 $tmp3045 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3046 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType3022->subtypes);
    panda$core$Int64 $tmp3047 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3045, $tmp3046);
    panda$core$Int64 $tmp3048 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3047, ((panda$core$Int64) { 1 }));
    offset3044 = $tmp3048;
    panda$core$Int64 $tmp3050 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3049, ((panda$core$Int64) { 0 }), $tmp3050, ((panda$core$Bit) { false }));
    int64_t $tmp3052 = $tmp3049.min.value;
    panda$core$Int64 i3051 = { $tmp3052 };
    int64_t $tmp3054 = $tmp3049.max.value;
    bool $tmp3055 = $tmp3049.inclusive.value;
    bool $tmp3062 = 1 > 0;
    if ($tmp3062) goto $l3060; else goto $l3061;
    $l3060:;
    if ($tmp3055) goto $l3063; else goto $l3064;
    $l3063:;
    if ($tmp3052 <= $tmp3054) goto $l3056; else goto $l3058;
    $l3064:;
    if ($tmp3052 < $tmp3054) goto $l3056; else goto $l3058;
    $l3061:;
    if ($tmp3055) goto $l3065; else goto $l3066;
    $l3065:;
    if ($tmp3052 >= $tmp3054) goto $l3056; else goto $l3058;
    $l3066:;
    if ($tmp3052 > $tmp3054) goto $l3056; else goto $l3058;
    $l3056:;
    {
        panda$core$Object* $tmp3069 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3051);
        panda$core$String* $tmp3070 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3069), p_out);
        arg3068 = $tmp3070;
        panda$core$Bit $tmp3072 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3051, offset3044);
        bool $tmp3071 = $tmp3072.value;
        if (!$tmp3071) goto $l3073;
        panda$core$Int64 $tmp3074 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3051, offset3044);
        panda$core$Object* $tmp3075 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType3022->subtypes, $tmp3074);
        panda$core$Object* $tmp3076 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3051);
        panda$core$Bit $tmp3077 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3075), ((org$pandalanguage$pandac$IRNode*) $tmp3076)->type);
        $tmp3071 = $tmp3077.value;
        $l3073:;
        panda$core$Bit $tmp3078 = { $tmp3071 };
        if ($tmp3078.value) {
        {
            panda$core$Int64 $tmp3079 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3051, offset3044);
            panda$core$Object* $tmp3080 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType3022->subtypes, $tmp3079);
            panda$core$String* $tmp3081 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3080));
            panda$core$String* $tmp3083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3081, &$s3082);
            panda$core$Object* $tmp3084 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3051);
            panda$core$Int64 $tmp3085 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3051, offset3044);
            panda$core$Object* $tmp3086 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType3022->subtypes, $tmp3085);
            panda$core$String* $tmp3087 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg3068, ((org$pandalanguage$pandac$IRNode*) $tmp3084)->type, ((org$pandalanguage$pandac$Type*) $tmp3086), p_out);
            panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3083, $tmp3087);
            arg3068 = $tmp3088;
        }
        }
        else {
        {
            panda$core$Object* $tmp3089 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3051);
            panda$core$String* $tmp3090 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3089)->type);
            panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3090, &$s3091);
            panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, arg3068);
            arg3068 = $tmp3093;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args3018, ((panda$core$Object*) arg3068));
    }
    $l3059:;
    if ($tmp3062) goto $l3095; else goto $l3096;
    $l3095:;
    int64_t $tmp3097 = $tmp3054 - i3051.value;
    if ($tmp3055) goto $l3098; else goto $l3099;
    $l3098:;
    if ($tmp3097 >= 1) goto $l3094; else goto $l3058;
    $l3099:;
    if ($tmp3097 > 1) goto $l3094; else goto $l3058;
    $l3096:;
    int64_t $tmp3101 = i3051.value - $tmp3054;
    if ($tmp3055) goto $l3102; else goto $l3103;
    $l3102:;
    if ($tmp3101 >= -1) goto $l3094; else goto $l3058;
    $l3103:;
    if ($tmp3101 > -1) goto $l3094; else goto $l3058;
    $l3094:;
    i3051.value += 1;
    goto $l3056;
    $l3058:;
    panda$core$Int64 $tmp3106 = panda$collections$Array$get_count$R$panda$core$Int64(args3018);
    panda$core$Bit $tmp3107 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3106, ((panda$core$Int64) { 0 }));
    if ($tmp3107.value) {
    {
        panda$core$Object* $tmp3108 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args3018, ((panda$core$Int64) { 0 }));
        target3105 = ((panda$core$String*) $tmp3108);
    }
    }
    else {
    {
        target3105 = NULL;
    }
    }
    panda$core$String* $tmp3110 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target3105, m2963, isSuper3024, p_out);
    methodRef3109 = $tmp3110;
    panda$core$Bit $tmp3113 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2963);
    indirect3112 = $tmp3113;
    if (indirect3112.value) {
    {
        panda$core$String* $tmp3115 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2963);
        panda$core$String* $tmp3116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3114, $tmp3115);
        panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3116, &$s3117);
        (($fn3119) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3118);
    }
    }
    else {
    {
        panda$core$String* $tmp3120 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3111 = $tmp3120;
        panda$core$String* $tmp3122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3121, result3111);
        panda$core$String* $tmp3124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3122, &$s3123);
        panda$core$String* $tmp3125 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2963);
        panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3124, $tmp3125);
        panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, &$s3127);
        panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, actualResultType3023);
        panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3130);
        (($fn3132) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3131);
    }
    }
    panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3133, methodRef3109);
    panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, &$s3135);
    (($fn3137) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3136);
    separator3138 = &$s3139;
    if (indirect3112.value) {
    {
        panda$core$Int64 $tmp3141 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3141;
        panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3142, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3140 = $tmp3143;
        panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3144, indirectVar3140);
        panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3145, &$s3146);
        panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, actualResultType3023);
        panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, &$s3149);
        (($fn3151) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3150);
        panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3152, actualResultType3023);
        panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, &$s3154);
        panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, indirectVar3140);
        panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, &$s3157);
        (($fn3159) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3158);
        separator3138 = &$s3160;
    }
    }
    {
        ITable* $tmp3162 = ((panda$collections$Iterable*) args3018)->$class->itable;
        while ($tmp3162->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3162 = $tmp3162->next;
        }
        $fn3164 $tmp3163 = $tmp3162->methods[0];
        panda$collections$Iterator* $tmp3165 = $tmp3163(((panda$collections$Iterable*) args3018));
        arg$Iter3161 = $tmp3165;
        $l3166:;
        ITable* $tmp3168 = arg$Iter3161->$class->itable;
        while ($tmp3168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3168 = $tmp3168->next;
        }
        $fn3170 $tmp3169 = $tmp3168->methods[0];
        panda$core$Bit $tmp3171 = $tmp3169(arg$Iter3161);
        panda$core$Bit $tmp3172 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3171);
        if (!$tmp3172.value) goto $l3167;
        {
            ITable* $tmp3174 = arg$Iter3161->$class->itable;
            while ($tmp3174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3174 = $tmp3174->next;
            }
            $fn3176 $tmp3175 = $tmp3174->methods[1];
            panda$core$Object* $tmp3177 = $tmp3175(arg$Iter3161);
            arg3173 = ((panda$core$String*) $tmp3177);
            panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3178, separator3138);
            panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3179, &$s3180);
            panda$core$String* $tmp3182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, arg3173);
            panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3182, &$s3183);
            (($fn3185) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3184);
            separator3138 = &$s3186;
        }
        goto $l3166;
        $l3167:;
    }
    (($fn3188) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3187);
    if (indirect3112.value) {
    {
        panda$core$String* $tmp3189 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3111 = $tmp3189;
        panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3190, result3111);
        panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
        panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, actualResultType3023);
        panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, &$s3195);
        panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, actualResultType3023);
        panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
        panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, indirectVar3140);
        (($fn3201) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3200);
    }
    }
    panda$core$String* $tmp3202 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3203 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3202, actualResultType3023);
    if ($tmp3203.value) {
    {
        panda$core$Int64 $tmp3204 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType3022->subtypes);
        panda$core$Int64 $tmp3205 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3204, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3206 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType3022->subtypes, $tmp3205);
        panda$core$String* $tmp3207 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result3111, ((org$pandalanguage$pandac$Type*) $tmp3206), p_call->type, p_out);
        return $tmp3207;
    }
    }
    return result3111;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3208;
    panda$core$String* testStart3211;
    panda$core$String* isNonNull3212;
    panda$core$String* nonNullLabel3226;
    panda$core$String* endLabel3228;
    panda$core$String* unwrapped3241;
    panda$core$String* nonNullValue3244;
    panda$core$String* result3252;
    panda$core$String* mallocRef3274;
    panda$core$String* wrapperTypeName3286;
    panda$core$String* wrapperType3289;
    panda$core$String* wrapperCast3292;
    panda$core$String* classPtr3305;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3323;
    panda$core$String* refCount3338;
    panda$core$String* target3361;
    panda$core$String* result3397;
    org$pandalanguage$pandac$ClassDecl* $tmp3209 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3208 = $tmp3209;
    PANDA_ASSERT(((panda$core$Bit) { src3208 != NULL }).value);
    panda$core$Bit $tmp3210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3210.value) {
    {
        testStart3211 = self->currentBlock;
        panda$core$String* $tmp3213 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3212 = $tmp3213;
        panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3214, isNonNull3212);
        panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3215, &$s3216);
        panda$core$String* $tmp3218 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3217, $tmp3218);
        panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3219, &$s3220);
        panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, p_value);
        panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3222, &$s3223);
        (($fn3225) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3224);
        panda$core$String* $tmp3227 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3226 = $tmp3227;
        panda$core$String* $tmp3229 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3228 = $tmp3229;
        panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3230, isNonNull3212);
        panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3231, &$s3232);
        panda$core$String* $tmp3234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3233, nonNullLabel3226);
        panda$core$String* $tmp3236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3234, &$s3235);
        panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3236, endLabel3228);
        panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, &$s3238);
        (($fn3240) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3239);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3226, p_out);
        panda$core$Object* $tmp3242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3243 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3242), p_out);
        unwrapped3241 = $tmp3243;
        panda$core$Object* $tmp3245 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3246 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped3241, ((org$pandalanguage$pandac$Type*) $tmp3245), p_dstType, p_out);
        nonNullValue3244 = $tmp3246;
        panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3247, endLabel3228);
        panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, &$s3249);
        (($fn3251) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3250);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3228, p_out);
        panda$core$String* $tmp3253 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3252 = $tmp3253;
        panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3254, result3252);
        panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3255, &$s3256);
        panda$core$String* $tmp3258 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, $tmp3258);
        panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, &$s3260);
        panda$core$String* $tmp3262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, testStart3211);
        panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3262, &$s3263);
        panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3265, nonNullValue3244);
        panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, &$s3267);
        panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, nonNullLabel3226);
        panda$core$String* $tmp3271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, &$s3270);
        panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, $tmp3271);
        (($fn3273) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3272);
        return result3252;
    }
    }
    panda$core$String* $tmp3275 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3274 = $tmp3275;
    panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3276, mallocRef3274);
    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3277, &$s3278);
    org$pandalanguage$pandac$Type* $tmp3280 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3208);
    panda$core$Int64 $tmp3281 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3280);
    panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3279, ((panda$core$Object*) wrap_panda$core$Int64($tmp3281)));
    panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, &$s3283);
    (($fn3285) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3284);
    org$pandalanguage$pandac$Type* $tmp3287 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3208);
    panda$core$String* $tmp3288 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3287);
    wrapperTypeName3286 = $tmp3288;
    org$pandalanguage$pandac$Type* $tmp3290 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3208);
    panda$core$String* $tmp3291 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3290);
    wrapperType3289 = $tmp3291;
    panda$core$String* $tmp3293 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3292 = $tmp3293;
    panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3294, wrapperCast3292);
    panda$core$String* $tmp3297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3295, &$s3296);
    panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3297, mallocRef3274);
    panda$core$String* $tmp3300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, &$s3299);
    panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3300, wrapperType3289);
    panda$core$String* $tmp3303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3301, &$s3302);
    (($fn3304) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3303);
    panda$core$String* $tmp3306 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3305 = $tmp3306;
    panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3307, classPtr3305);
    panda$core$String* $tmp3310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3308, &$s3309);
    panda$core$String* $tmp3311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3310, wrapperTypeName3286);
    panda$core$String* $tmp3313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3311, &$s3312);
    panda$core$String* $tmp3315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3314, wrapperType3289);
    panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3315, &$s3316);
    panda$core$String* $tmp3318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3317, wrapperCast3292);
    panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3318, &$s3319);
    panda$core$String* $tmp3321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3313, $tmp3320);
    (($fn3322) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3321);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3324 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3208);
    cc3323 = $tmp3324;
    panda$core$String* $tmp3326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3325, cc3323->type);
    panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3326, &$s3327);
    panda$core$String* $tmp3329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, cc3323->name);
    panda$core$String* $tmp3331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3329, &$s3330);
    panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3332, classPtr3305);
    panda$core$String* $tmp3335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, &$s3334);
    panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3331, $tmp3335);
    (($fn3337) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3336);
    panda$core$String* $tmp3339 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3338 = $tmp3339;
    panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3340, refCount3338);
    panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
    panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, wrapperTypeName3286);
    panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, &$s3345);
    panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3347, wrapperType3289);
    panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, &$s3349);
    panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3350, wrapperCast3292);
    panda$core$String* $tmp3353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3351, &$s3352);
    panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, $tmp3353);
    (($fn3355) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3354);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3356, refCount3338);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, &$s3358);
    (($fn3360) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3359);
    panda$core$String* $tmp3362 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3361 = $tmp3362;
    panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3363, target3361);
    panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, &$s3365);
    panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, wrapperTypeName3286);
    panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3367, &$s3368);
    panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3370, wrapperType3289);
    panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, &$s3372);
    panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3373, wrapperCast3292);
    panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3374, &$s3375);
    panda$core$String* $tmp3377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3369, $tmp3376);
    (($fn3378) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3377);
    panda$core$String* $tmp3380 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3379, $tmp3380);
    panda$core$String* $tmp3383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3381, &$s3382);
    panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3383, p_value);
    panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, &$s3385);
    panda$core$String* $tmp3387 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, $tmp3387);
    panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
    panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, target3361);
    panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3391, &$s3392);
    (($fn3394) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3393);
    panda$core$String* $tmp3395 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3396 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3289, $tmp3395);
    if ($tmp3396.value) {
    {
        panda$core$String* $tmp3398 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3397 = $tmp3398;
        panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3399, result3397);
        panda$core$String* $tmp3402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, &$s3401);
        panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3402, wrapperType3289);
        panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, &$s3404);
        panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, wrapperCast3292);
        panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3406, &$s3407);
        panda$core$String* $tmp3409 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3408, $tmp3409);
        panda$core$String* $tmp3412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3410, &$s3411);
        (($fn3413) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3412);
        return result3397;
    }
    }
    return wrapperCast3292;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3417;
    panda$core$String* t3418;
    org$pandalanguage$pandac$ClassDecl* cl3422;
    panda$core$String* base3426;
    panda$collections$ListView* fields3429;
    panda$core$Int64$nullable index3431;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3432;
    panda$core$String* result3469;
    panda$core$String* ptr3489;
    panda$core$String* result3498;
    panda$core$Bit $tmp3414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3414.value);
    panda$core$Int64 $tmp3415 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3415, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3416.value);
    field3417 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3419 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3417->type);
    t3418 = $tmp3419;
    panda$core$Bit $tmp3420 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3417->annotations);
    if ($tmp3420.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3417->value != NULL }).value);
        panda$core$String* $tmp3421 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field3417->value, p_out);
        return $tmp3421;
    }
    }
    panda$core$Object* $tmp3423 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3424 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3423)->type);
    cl3422 = $tmp3424;
    PANDA_ASSERT(((panda$core$Bit) { cl3422 != NULL }).value);
    panda$core$Bit $tmp3425 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3422);
    if ($tmp3425.value) {
    {
        panda$core$Object* $tmp3427 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3428 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3427), p_out);
        base3426 = $tmp3428;
        panda$collections$ListView* $tmp3430 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3422);
        fields3429 = $tmp3430;
        index3431 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3433 = ((panda$collections$CollectionView*) fields3429)->$class->itable;
        while ($tmp3433->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3433 = $tmp3433->next;
        }
        $fn3435 $tmp3434 = $tmp3433->methods[0];
        panda$core$Int64 $tmp3436 = $tmp3434(((panda$collections$CollectionView*) fields3429));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3432, ((panda$core$Int64) { 0 }), $tmp3436, ((panda$core$Bit) { false }));
        int64_t $tmp3438 = $tmp3432.min.value;
        panda$core$Int64 i3437 = { $tmp3438 };
        int64_t $tmp3440 = $tmp3432.max.value;
        bool $tmp3441 = $tmp3432.inclusive.value;
        bool $tmp3448 = 1 > 0;
        if ($tmp3448) goto $l3446; else goto $l3447;
        $l3446:;
        if ($tmp3441) goto $l3449; else goto $l3450;
        $l3449:;
        if ($tmp3438 <= $tmp3440) goto $l3442; else goto $l3444;
        $l3450:;
        if ($tmp3438 < $tmp3440) goto $l3442; else goto $l3444;
        $l3447:;
        if ($tmp3441) goto $l3451; else goto $l3452;
        $l3451:;
        if ($tmp3438 >= $tmp3440) goto $l3442; else goto $l3444;
        $l3452:;
        if ($tmp3438 > $tmp3440) goto $l3442; else goto $l3444;
        $l3442:;
        {
            ITable* $tmp3454 = fields3429->$class->itable;
            while ($tmp3454->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3454 = $tmp3454->next;
            }
            $fn3456 $tmp3455 = $tmp3454->methods[0];
            panda$core$Object* $tmp3457 = $tmp3455(fields3429, i3437);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3457)) == ((panda$core$Object*) field3417) }).value) {
            {
                index3431 = ((panda$core$Int64$nullable) { i3437, true });
                goto $l3444;
            }
            }
        }
        $l3445:;
        if ($tmp3448) goto $l3459; else goto $l3460;
        $l3459:;
        int64_t $tmp3461 = $tmp3440 - i3437.value;
        if ($tmp3441) goto $l3462; else goto $l3463;
        $l3462:;
        if ($tmp3461 >= 1) goto $l3458; else goto $l3444;
        $l3463:;
        if ($tmp3461 > 1) goto $l3458; else goto $l3444;
        $l3460:;
        int64_t $tmp3465 = i3437.value - $tmp3440;
        if ($tmp3441) goto $l3466; else goto $l3467;
        $l3466:;
        if ($tmp3465 >= -1) goto $l3458; else goto $l3444;
        $l3467:;
        if ($tmp3465 > -1) goto $l3458; else goto $l3444;
        $l3458:;
        i3437.value += 1;
        goto $l3442;
        $l3444:;
        PANDA_ASSERT(((panda$core$Bit) { index3431.nonnull }).value);
        panda$core$String* $tmp3470 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3469 = $tmp3470;
        panda$core$String* $tmp3472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3471, result3469);
        panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3472, &$s3473);
        panda$core$Object* $tmp3475 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3476 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3475)->type);
        panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, $tmp3476);
        panda$core$String* $tmp3479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3477, &$s3478);
        panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3479, base3426);
        panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3480, &$s3481);
        panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3483, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3431.value))));
        panda$core$String* $tmp3486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3484, &$s3485);
        panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3482, $tmp3486);
        (($fn3488) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3487);
        return result3469;
    }
    }
    panda$core$String* $tmp3491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3490, t3418);
    panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3491, &$s3492);
    panda$core$String* $tmp3494 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3493, $tmp3494);
    panda$core$String* $tmp3497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3495, &$s3496);
    ptr3489 = $tmp3497;
    panda$core$String* $tmp3499 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3498 = $tmp3499;
    panda$core$String* $tmp3501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3500, result3498);
    panda$core$String* $tmp3503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3501, &$s3502);
    panda$core$String* $tmp3504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3503, t3418);
    panda$core$String* $tmp3506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3504, &$s3505);
    panda$core$String* $tmp3507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3506, ptr3489);
    panda$core$String* $tmp3509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3507, &$s3508);
    (($fn3510) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3509);
    return result3498;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3511;
    panda$core$String* testStart3514;
    panda$core$String* isNonNull3515;
    panda$core$String* nonNullLabel3529;
    panda$core$String* endLabel3531;
    panda$core$String* wrapped3544;
    panda$core$String* nonNullValue3547;
    panda$core$String* result3555;
    panda$core$String* targetType3584;
    panda$core$String* wrapperTypeName3586;
    panda$core$String* wrapperType3588;
    panda$core$String* srcCast3590;
    panda$core$String* load3607;
    panda$core$String* result3623;
    org$pandalanguage$pandac$ClassDecl* $tmp3512 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3511 = $tmp3512;
    PANDA_ASSERT(((panda$core$Bit) { target3511 != NULL }).value);
    panda$core$Bit $tmp3513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3513.value) {
    {
        testStart3514 = self->currentBlock;
        panda$core$String* $tmp3516 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3515 = $tmp3516;
        panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3517, isNonNull3515);
        panda$core$String* $tmp3520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3518, &$s3519);
        panda$core$String* $tmp3521 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3520, $tmp3521);
        panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, &$s3523);
        panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3524, p_value);
        panda$core$String* $tmp3527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3525, &$s3526);
        (($fn3528) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3527);
        panda$core$String* $tmp3530 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3529 = $tmp3530;
        panda$core$String* $tmp3532 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3531 = $tmp3532;
        panda$core$String* $tmp3534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3533, isNonNull3515);
        panda$core$String* $tmp3536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3534, &$s3535);
        panda$core$String* $tmp3537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3536, nonNullLabel3529);
        panda$core$String* $tmp3539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3537, &$s3538);
        panda$core$String* $tmp3540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3539, endLabel3531);
        panda$core$String* $tmp3542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3540, &$s3541);
        (($fn3543) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3542);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3529, p_out);
        panda$core$Object* $tmp3545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3546 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3545), p_out);
        wrapped3544 = $tmp3546;
        panda$core$Object* $tmp3548 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3549 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3544, ((org$pandalanguage$pandac$Type*) $tmp3548), p_dstType, p_out);
        nonNullValue3547 = $tmp3549;
        panda$core$String* $tmp3551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3550, endLabel3531);
        panda$core$String* $tmp3553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3551, &$s3552);
        (($fn3554) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3553);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3531, p_out);
        panda$core$String* $tmp3556 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3555 = $tmp3556;
        panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3557, result3555);
        panda$core$String* $tmp3560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3558, &$s3559);
        panda$core$String* $tmp3561 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3560, $tmp3561);
        panda$core$String* $tmp3564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3562, &$s3563);
        panda$core$Object* $tmp3566 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3567 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3566));
        panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3565, $tmp3567);
        panda$core$String* $tmp3570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3568, &$s3569);
        panda$core$String* $tmp3571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3564, $tmp3570);
        panda$core$String* $tmp3573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3572, testStart3514);
        panda$core$String* $tmp3575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3573, &$s3574);
        panda$core$String* $tmp3576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3575, nonNullValue3547);
        panda$core$String* $tmp3578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3576, &$s3577);
        panda$core$String* $tmp3579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3578, nonNullLabel3529);
        panda$core$String* $tmp3581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3579, &$s3580);
        panda$core$String* $tmp3582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3571, $tmp3581);
        (($fn3583) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3582);
        return result3555;
    }
    }
    panda$core$String* $tmp3585 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3584 = $tmp3585;
    panda$core$String* $tmp3587 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3586 = $tmp3587;
    panda$core$String* $tmp3589 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3588 = $tmp3589;
    panda$core$String* $tmp3591 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3590 = $tmp3591;
    panda$core$String* $tmp3593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3592, srcCast3590);
    panda$core$String* $tmp3595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3593, &$s3594);
    panda$core$String* $tmp3596 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3595, $tmp3596);
    panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, &$s3598);
    panda$core$String* $tmp3600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, p_value);
    panda$core$String* $tmp3602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3600, &$s3601);
    panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3602, wrapperType3588);
    panda$core$String* $tmp3605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3603, &$s3604);
    (($fn3606) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3605);
    panda$core$String* $tmp3608 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3607 = $tmp3608;
    panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3609, load3607);
    panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3610, &$s3611);
    panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3612, wrapperTypeName3586);
    panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, &$s3614);
    panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, wrapperType3588);
    panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3616, &$s3617);
    panda$core$String* $tmp3619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3618, srcCast3590);
    panda$core$String* $tmp3621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3619, &$s3620);
    (($fn3622) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3621);
    panda$core$String* $tmp3624 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3623 = $tmp3624;
    panda$core$String* $tmp3626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3625, result3623);
    panda$core$String* $tmp3628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3626, &$s3627);
    panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3628, wrapperTypeName3586);
    panda$core$String* $tmp3631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3629, &$s3630);
    panda$core$String* $tmp3632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3631, load3607);
    panda$core$String* $tmp3634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3632, &$s3633);
    panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3634, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3635, &$s3636);
    (($fn3638) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3637);
    return result3623;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType3639;
    panda$core$String* result3641;
    panda$core$String* $tmp3640 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3639 = $tmp3640;
    panda$core$String* $tmp3642 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3641 = $tmp3642;
    panda$core$String* $tmp3644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3643, result3641);
    panda$core$String* $tmp3646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3644, &$s3645);
    panda$core$String* $tmp3647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3646, nullableType3639);
    panda$core$String* $tmp3649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3647, &$s3648);
    panda$core$String* $tmp3651 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3650, $tmp3651);
    panda$core$String* $tmp3654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3652, &$s3653);
    panda$core$String* $tmp3655 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3654, $tmp3655);
    panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3656, &$s3657);
    panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3658, p_value);
    panda$core$String* $tmp3661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3659, &$s3660);
    panda$core$String* $tmp3662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3649, $tmp3661);
    (($fn3663) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3662);
    return result3641;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3664;
    panda$core$String* $tmp3665 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3664 = $tmp3665;
    panda$core$String* $tmp3667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3666, result3664);
    panda$core$String* $tmp3669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3667, &$s3668);
    panda$core$String* $tmp3670 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3669, $tmp3670);
    panda$core$String* $tmp3673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3671, &$s3672);
    panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3673, p_value);
    panda$core$String* $tmp3676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3674, &$s3675);
    (($fn3677) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3676);
    return result3664;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3678;
    panda$core$Int64 size13681;
    panda$core$Int64 size23683;
    org$pandalanguage$pandac$ClassDecl* srcClass3691;
    org$pandalanguage$pandac$ClassDecl* targetClass3693;
    panda$core$String* srcType3732;
    panda$core$String* dstType3734;
    panda$core$String* result3737;
    panda$core$Bit $tmp3679 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3679.value) {
    {
        panda$core$Bit $tmp3680 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3680.value);
        panda$core$Int64 $tmp3682 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13681 = $tmp3682;
        panda$core$Int64 $tmp3684 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23683 = $tmp3684;
        panda$core$Bit $tmp3685 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13681, size23683);
        if ($tmp3685.value) {
        {
            op3678 = &$s3686;
        }
        }
        else {
        panda$core$Bit $tmp3687 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13681, size23683);
        if ($tmp3687.value) {
        {
            panda$core$Bit $tmp3688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3688.value) {
            {
                op3678 = &$s3689;
            }
            }
            else {
            {
                op3678 = &$s3690;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3692 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3691 = $tmp3692;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3691 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3694 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3693 = $tmp3694;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3693 != NULL }).value);
        panda$core$Bit $tmp3696 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3691);
        bool $tmp3695 = $tmp3696.value;
        if (!$tmp3695) goto $l3697;
        panda$core$Bit $tmp3698 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3693);
        panda$core$Bit $tmp3699 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3698);
        $tmp3695 = $tmp3699.value;
        $l3697:;
        panda$core$Bit $tmp3700 = { $tmp3695 };
        if ($tmp3700.value) {
        {
            panda$core$String* $tmp3701 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3701;
        }
        }
        else {
        panda$core$Bit $tmp3703 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3691);
        panda$core$Bit $tmp3704 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3703);
        bool $tmp3702 = $tmp3704.value;
        if (!$tmp3702) goto $l3705;
        panda$core$Bit $tmp3706 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3693);
        $tmp3702 = $tmp3706.value;
        $l3705:;
        panda$core$Bit $tmp3707 = { $tmp3702 };
        if ($tmp3707.value) {
        {
            panda$core$String* $tmp3708 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3708;
        }
        }
        else {
        panda$core$Bit $tmp3711 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3691);
        bool $tmp3710 = $tmp3711.value;
        if (!$tmp3710) goto $l3712;
        panda$core$Bit $tmp3713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3710 = $tmp3713.value;
        $l3712:;
        panda$core$Bit $tmp3714 = { $tmp3710 };
        bool $tmp3709 = $tmp3714.value;
        if (!$tmp3709) goto $l3715;
        panda$core$Object* $tmp3716 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3717 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3716), p_src);
        $tmp3709 = $tmp3717.value;
        $l3715:;
        panda$core$Bit $tmp3718 = { $tmp3709 };
        if ($tmp3718.value) {
        {
            panda$core$String* $tmp3719 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3719;
        }
        }
        else {
        panda$core$Bit $tmp3722 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3693);
        bool $tmp3721 = $tmp3722.value;
        if (!$tmp3721) goto $l3723;
        panda$core$Bit $tmp3724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3721 = $tmp3724.value;
        $l3723:;
        panda$core$Bit $tmp3725 = { $tmp3721 };
        bool $tmp3720 = $tmp3725.value;
        if (!$tmp3720) goto $l3726;
        panda$core$Object* $tmp3727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3728 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3727), p_target);
        $tmp3720 = $tmp3728.value;
        $l3726:;
        panda$core$Bit $tmp3729 = { $tmp3720 };
        if ($tmp3729.value) {
        {
            panda$core$String* $tmp3730 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3730;
        }
        }
        }
        }
        }
        op3678 = &$s3731;
    }
    }
    panda$core$String* $tmp3733 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3732 = $tmp3733;
    panda$core$String* $tmp3735 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3734 = $tmp3735;
    panda$core$Bit $tmp3736 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3732, dstType3734);
    if ($tmp3736.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3738 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3737 = $tmp3738;
    panda$core$String* $tmp3740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3739, result3737);
    panda$core$String* $tmp3742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3740, &$s3741);
    panda$core$String* $tmp3743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3742, op3678);
    panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3743, &$s3744);
    panda$core$String* $tmp3746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3745, srcType3732);
    panda$core$String* $tmp3748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3746, &$s3747);
    panda$core$String* $tmp3749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3748, p_value);
    panda$core$String* $tmp3751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3749, &$s3750);
    panda$core$String* $tmp3752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3751, dstType3734);
    panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3752, &$s3753);
    (($fn3755) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3754);
    return result3737;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3759;
    panda$core$Bit $tmp3756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3756.value);
    panda$core$Int64 $tmp3757 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3757, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3758.value);
    panda$core$Object* $tmp3760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3761 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3760), p_out);
    base3759 = $tmp3761;
    panda$core$Object* $tmp3762 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3763 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3759, ((org$pandalanguage$pandac$IRNode*) $tmp3762)->type, p_cast->type, p_out);
    return $tmp3763;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3767;
    panda$core$String* t3769;
    panda$core$String* value3777;
    panda$core$String* result3788;
    org$pandalanguage$pandac$FieldDecl* lastField3790;
    panda$core$String* value3820;
    panda$core$String* result3831;
    org$pandalanguage$pandac$FieldDecl* lastField3833;
    panda$core$String* alloca3858;
    panda$core$String* result3879;
    panda$core$String* callRef3895;
    panda$core$String* result3906;
    panda$core$String* classPtr3920;
    panda$core$String* className3922;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3948;
    panda$core$Bit $tmp3764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3764.value);
    panda$core$Int64 $tmp3765 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3766 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3765, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3766.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3768 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3767 = $tmp3768;
    PANDA_ASSERT(((panda$core$Bit) { cl3767 != NULL }).value);
    panda$core$String* $tmp3770 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3769 = $tmp3770;
    panda$core$Bit $tmp3771 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3771.value) {
    {
        panda$core$Int64 $tmp3772 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3772, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3773.value);
        panda$core$Object* $tmp3774 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3775 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3774)->children);
        panda$core$Bit $tmp3776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3775, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3776.value);
        panda$core$Object* $tmp3778 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3779 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3778)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3780 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3779), p_out);
        value3777 = $tmp3780;
        panda$core$Object* $tmp3781 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3782 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3781)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3782)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3783.value) {
        {
            panda$core$String* $tmp3785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3784, value3777);
            panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3785, &$s3786);
            return $tmp3787;
        }
        }
        panda$core$String* $tmp3789 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3788 = $tmp3789;
        panda$core$Int64 $tmp3791 = panda$collections$Array$get_count$R$panda$core$Int64(cl3767->fields);
        panda$core$Int64 $tmp3792 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3791, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3767->fields, $tmp3792);
        lastField3790 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3793);
        panda$core$Bit $tmp3794 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3790->annotations);
        panda$core$Bit $tmp3795 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3794);
        PANDA_ASSERT($tmp3795.value);
        panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3796, result3788);
        panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3797, &$s3798);
        panda$core$String* $tmp3800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, t3769);
        panda$core$String* $tmp3802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, &$s3801);
        panda$core$String* $tmp3803 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3790->type);
        panda$core$String* $tmp3804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3802, $tmp3803);
        panda$core$String* $tmp3806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3804, &$s3805);
        panda$core$String* $tmp3808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3807, value3777);
        panda$core$String* $tmp3810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3808, &$s3809);
        panda$core$String* $tmp3811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3806, $tmp3810);
        (($fn3812) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3811);
        return result3788;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3813 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3814 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3813);
    if ($tmp3814.value) {
    {
        panda$core$Int64 $tmp3815 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3815, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3816.value);
        panda$core$Object* $tmp3817 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3818 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3817)->children);
        panda$core$Bit $tmp3819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3818, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3819.value);
        panda$core$Object* $tmp3821 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3822 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3821)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3823 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3822), p_out);
        value3820 = $tmp3823;
        panda$core$Object* $tmp3824 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3825 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3824)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3825)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3826.value) {
        {
            panda$core$String* $tmp3828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3827, value3820);
            panda$core$String* $tmp3830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3828, &$s3829);
            return $tmp3830;
        }
        }
        panda$core$String* $tmp3832 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3831 = $tmp3832;
        panda$core$Int64 $tmp3834 = panda$collections$Array$get_count$R$panda$core$Int64(cl3767->fields);
        panda$core$Int64 $tmp3835 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3834, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3836 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3767->fields, $tmp3835);
        lastField3833 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3836);
        panda$core$Bit $tmp3837 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3833->annotations);
        panda$core$Bit $tmp3838 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3837);
        PANDA_ASSERT($tmp3838.value);
        panda$core$String* $tmp3840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3839, result3831);
        panda$core$String* $tmp3842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3840, &$s3841);
        panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3842, t3769);
        panda$core$String* $tmp3845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3843, &$s3844);
        panda$core$String* $tmp3846 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3833->type);
        panda$core$String* $tmp3847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3845, $tmp3846);
        panda$core$String* $tmp3849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3847, &$s3848);
        panda$core$String* $tmp3851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3850, value3820);
        panda$core$String* $tmp3853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3851, &$s3852);
        panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3849, $tmp3853);
        (($fn3855) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3854);
        return result3831;
    }
    }
    panda$core$Bit $tmp3856 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3767);
    if ($tmp3856.value) {
    {
        panda$core$Int64 $tmp3857 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3857;
        panda$core$String* $tmp3860 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3859, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3860, &$s3861);
        alloca3858 = $tmp3862;
        panda$core$String* $tmp3864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3863, alloca3858);
        panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3864, &$s3865);
        panda$core$String* $tmp3867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, t3769);
        panda$core$String* $tmp3869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3867, &$s3868);
        (($fn3870) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3869);
        panda$core$Object* $tmp3871 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3872, t3769);
        panda$core$String* $tmp3875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3873, &$s3874);
        panda$core$String* $tmp3876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3875, alloca3858);
        panda$core$String* $tmp3878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3876, &$s3877);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3871), $tmp3878, p_out);
        panda$core$String* $tmp3880 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3879 = $tmp3880;
        panda$core$String* $tmp3882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3881, result3879);
        panda$core$String* $tmp3884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3882, &$s3883);
        panda$core$String* $tmp3885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3884, t3769);
        panda$core$String* $tmp3887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3885, &$s3886);
        panda$core$String* $tmp3888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3887, t3769);
        panda$core$String* $tmp3890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3888, &$s3889);
        panda$core$String* $tmp3891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3890, alloca3858);
        panda$core$String* $tmp3893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3891, &$s3892);
        (($fn3894) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3893);
        return result3879;
    }
    }
    panda$core$String* $tmp3896 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3895 = $tmp3896;
    panda$core$String* $tmp3898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3897, callRef3895);
    panda$core$String* $tmp3900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3898, &$s3899);
    panda$core$Int64 $tmp3901 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3902 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3900, ((panda$core$Object*) wrap_panda$core$Int64($tmp3901)));
    panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3902, &$s3903);
    (($fn3905) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3904);
    panda$core$String* $tmp3907 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3906 = $tmp3907;
    panda$core$String* $tmp3909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3908, result3906);
    panda$core$String* $tmp3911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3909, &$s3910);
    panda$core$String* $tmp3912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3911, callRef3895);
    panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3912, &$s3913);
    panda$core$String* $tmp3915 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3914, $tmp3915);
    panda$core$String* $tmp3918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3916, &$s3917);
    (($fn3919) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3918);
    panda$core$String* $tmp3921 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3920 = $tmp3921;
    panda$core$Bit $tmp3924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3923 = $tmp3924.value;
    if (!$tmp3923) goto $l3925;
    panda$core$Bit $tmp3926 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3767);
    panda$core$Bit $tmp3927 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3926);
    $tmp3923 = $tmp3927.value;
    $l3925:;
    panda$core$Bit $tmp3928 = { $tmp3923 };
    if ($tmp3928.value) {
    {
        panda$core$Object* $tmp3929 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3930 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3929));
        className3922 = $tmp3930;
    }
    }
    else {
    {
        panda$core$String* $tmp3931 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3922 = $tmp3931;
    }
    }
    panda$core$String* $tmp3933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3932, classPtr3920);
    panda$core$String* $tmp3935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3933, &$s3934);
    panda$core$String* $tmp3936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3935, className3922);
    panda$core$String* $tmp3938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3936, &$s3937);
    panda$core$String* $tmp3939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3938, t3769);
    panda$core$String* $tmp3941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3939, &$s3940);
    panda$core$String* $tmp3942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3941, result3906);
    panda$core$String* $tmp3944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3942, &$s3943);
    panda$core$String* $tmp3946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3944, &$s3945);
    (($fn3947) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3946);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3949 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3767);
    cc3948 = $tmp3949;
    panda$core$String* $tmp3951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3950, cc3948->type);
    panda$core$String* $tmp3953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3951, &$s3952);
    panda$core$String* $tmp3954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3953, cc3948->name);
    panda$core$String* $tmp3956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3954, &$s3955);
    panda$core$String* $tmp3958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3957, classPtr3920);
    panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3958, &$s3959);
    panda$core$String* $tmp3961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3956, $tmp3960);
    (($fn3962) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3961);
    panda$core$Object* $tmp3963 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3964, t3769);
    panda$core$String* $tmp3967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3965, &$s3966);
    panda$core$String* $tmp3968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3967, result3906);
    panda$core$String* $tmp3970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3968, &$s3969);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3963), $tmp3970, p_out);
    return result3906;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3971 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3971;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3973 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3972, $tmp3973);
    return $tmp3974;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3975;
    }
    }
    return &$s3976;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3979;
    panda$core$String* t3981;
    panda$core$Bit $tmp3977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3977.value) {
    {
        panda$core$String* $tmp3978 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3978;
    }
    }
    panda$core$String* $tmp3980 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3979 = $tmp3980;
    panda$core$String* $tmp3982 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3981 = $tmp3982;
    panda$core$String* $tmp3984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3983, result3979);
    panda$core$String* $tmp3986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3984, &$s3985);
    panda$core$String* $tmp3987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3986, t3981);
    panda$core$String* $tmp3989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3987, &$s3988);
    panda$core$String* $tmp3990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3989, t3981);
    panda$core$String* $tmp3992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3990, &$s3991);
    panda$core$String* $tmp3993 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3992, $tmp3993);
    panda$core$String* $tmp3996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3994, &$s3995);
    (($fn3997) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3996);
    return result3979;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars3999;
    panda$core$String* charsType4004;
    panda$core$String* separator4022;
    panda$collections$Iterator* c$Iter4024;
    panda$core$Char8 c4037;
    panda$core$String* result4055;
    org$pandalanguage$pandac$ClassDecl* string4060;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4063;
    panda$core$Int64 $tmp3998 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3998;
    panda$core$String* $tmp4001 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4000, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4001, &$s4002);
    chars3999 = $tmp4003;
    panda$collections$ListView* $tmp4006 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4007 = ((panda$collections$CollectionView*) $tmp4006)->$class->itable;
    while ($tmp4007->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4007 = $tmp4007->next;
    }
    $fn4009 $tmp4008 = $tmp4007->methods[0];
    panda$core$Int64 $tmp4010 = $tmp4008(((panda$collections$CollectionView*) $tmp4006));
    panda$core$String* $tmp4011 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4005, ((panda$core$Object*) wrap_panda$core$Int64($tmp4010)));
    panda$core$String* $tmp4013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4011, &$s4012);
    charsType4004 = $tmp4013;
    panda$core$String* $tmp4015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4014, chars3999);
    panda$core$String* $tmp4017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4015, &$s4016);
    panda$core$String* $tmp4018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4017, charsType4004);
    panda$core$String* $tmp4020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4018, &$s4019);
    (($fn4021) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4020);
    separator4022 = &$s4023;
    {
        panda$collections$ListView* $tmp4025 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp4026 = ((panda$collections$Iterable*) $tmp4025)->$class->itable;
        while ($tmp4026->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4026 = $tmp4026->next;
        }
        $fn4028 $tmp4027 = $tmp4026->methods[0];
        panda$collections$Iterator* $tmp4029 = $tmp4027(((panda$collections$Iterable*) $tmp4025));
        c$Iter4024 = $tmp4029;
        $l4030:;
        ITable* $tmp4032 = c$Iter4024->$class->itable;
        while ($tmp4032->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4032 = $tmp4032->next;
        }
        $fn4034 $tmp4033 = $tmp4032->methods[0];
        panda$core$Bit $tmp4035 = $tmp4033(c$Iter4024);
        panda$core$Bit $tmp4036 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4035);
        if (!$tmp4036.value) goto $l4031;
        {
            ITable* $tmp4038 = c$Iter4024->$class->itable;
            while ($tmp4038->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4038 = $tmp4038->next;
            }
            $fn4040 $tmp4039 = $tmp4038->methods[1];
            panda$core$Object* $tmp4041 = $tmp4039(c$Iter4024);
            c4037 = ((panda$core$Char8$wrapper*) $tmp4041)->value;
            panda$core$String* $tmp4043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4042, separator4022);
            panda$core$String* $tmp4045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4043, &$s4044);
            panda$core$Int8 $tmp4046 = panda$core$Char8$convert$R$panda$core$Int8(c4037);
            panda$core$String* $tmp4047 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4045, ((panda$core$Object*) wrap_panda$core$Int8($tmp4046)));
            panda$core$String* $tmp4049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4047, &$s4048);
            (($fn4050) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4049);
            separator4022 = &$s4051;
        }
        goto $l4030;
        $l4031:;
    }
    (($fn4053) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s4052);
    panda$core$Int64 $tmp4054 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4054;
    panda$core$String* $tmp4057 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4056, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4057, &$s4058);
    result4055 = $tmp4059;
    org$pandalanguage$pandac$Type* $tmp4061 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4062 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp4061);
    string4060 = $tmp4062;
    PANDA_ASSERT(((panda$core$Bit) { string4060 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4064 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string4060);
    cc4063 = $tmp4064;
    panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4065, result4055);
    panda$core$String* $tmp4068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4066, &$s4067);
    panda$core$String* $tmp4070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4069, cc4063->type);
    panda$core$String* $tmp4072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4070, &$s4071);
    panda$core$String* $tmp4073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4072, cc4063->name);
    panda$core$String* $tmp4075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4073, &$s4074);
    panda$core$String* $tmp4076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4068, $tmp4075);
    panda$core$String* $tmp4078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4076, &$s4077);
    panda$core$String* $tmp4080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4079, charsType4004);
    panda$core$String* $tmp4082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4080, &$s4081);
    panda$core$String* $tmp4083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4082, chars3999);
    panda$core$String* $tmp4085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4083, &$s4084);
    panda$core$String* $tmp4086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4078, $tmp4085);
    panda$collections$ListView* $tmp4088 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4089 = ((panda$collections$CollectionView*) $tmp4088)->$class->itable;
    while ($tmp4089->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4089 = $tmp4089->next;
    }
    $fn4091 $tmp4090 = $tmp4089->methods[0];
    panda$core$Int64 $tmp4092 = $tmp4090(((panda$collections$CollectionView*) $tmp4088));
    panda$core$String* $tmp4093 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4087, ((panda$core$Object*) wrap_panda$core$Int64($tmp4092)));
    panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4093, &$s4094);
    panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4086, $tmp4095);
    panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, &$s4097);
    (($fn4099) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4098);
    return result4055;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp4100 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp4101 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4100, ((panda$core$Int64) { 0 }));
    if ($tmp4101.value) {
    {
        panda$core$Object* $tmp4102 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4102)->selfRef;
    }
    }
    return &$s4103;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4104;
    panda$core$String* $tmp4105 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4104 = $tmp4105;
    panda$core$String* $tmp4107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4106, result4104);
    panda$core$String* $tmp4109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4107, &$s4108);
    org$pandalanguage$pandac$Type* $tmp4110 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp4111 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp4110);
    panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4109, $tmp4111);
    panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, &$s4113);
    panda$core$String* $tmp4115 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp4116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4114, $tmp4115);
    (($fn4117) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4116);
    return result4104;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4121;
    org$pandalanguage$pandac$ClassDecl* cl4124;
    panda$core$String* resultValue4127;
    panda$core$String* field4132;
    panda$core$String* result4160;
    panda$core$Bit $tmp4118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp4118.value);
    panda$core$Int64 $tmp4119 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4119, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4120.value);
    panda$core$Object* $tmp4122 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4123 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4122), p_out);
    value4121 = $tmp4123;
    panda$core$Object* $tmp4125 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4126 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4125)->type);
    cl4124 = $tmp4126;
    panda$core$Bit $tmp4128 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4124);
    if ($tmp4128.value) {
    {
        panda$core$Object* $tmp4129 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4130 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4129)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4130.value) {
        {
            return &$s4131;
        }
        }
        panda$core$String* $tmp4133 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field4132 = $tmp4133;
        panda$core$String* $tmp4135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4134, field4132);
        panda$core$String* $tmp4137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4135, &$s4136);
        panda$core$String* $tmp4138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4137, value4121);
        panda$core$String* $tmp4140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4138, &$s4139);
        (($fn4141) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4140);
        panda$core$String* $tmp4142 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4127 = $tmp4142;
        panda$core$String* $tmp4144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4143, resultValue4127);
        panda$core$String* $tmp4146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4144, &$s4145);
        panda$core$String* $tmp4147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4146, field4132);
        panda$core$String* $tmp4149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4147, &$s4148);
        (($fn4150) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4149);
    }
    }
    else {
    {
        panda$core$String* $tmp4151 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4127 = $tmp4151;
        panda$core$String* $tmp4153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4152, resultValue4127);
        panda$core$String* $tmp4155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4153, &$s4154);
        panda$core$String* $tmp4156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4155, value4121);
        panda$core$String* $tmp4158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4156, &$s4157);
        (($fn4159) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4158);
    }
    }
    panda$core$String* $tmp4161 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4160 = $tmp4161;
    panda$core$String* $tmp4163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4162, result4160);
    panda$core$String* $tmp4165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4163, &$s4164);
    panda$core$String* $tmp4166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4165, resultValue4127);
    panda$core$String* $tmp4168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4166, &$s4167);
    (($fn4169) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4168);
    return result4160;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4173;
    org$pandalanguage$pandac$ClassDecl* cl4176;
    panda$core$String* resultValue4179;
    panda$core$String* result4202;
    panda$core$Bit $tmp4170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4170.value);
    panda$core$Int64 $tmp4171 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4171, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4172.value);
    panda$core$Object* $tmp4174 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4175 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4174), p_out);
    value4173 = $tmp4175;
    panda$core$Object* $tmp4177 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4178 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4177)->type);
    cl4176 = $tmp4178;
    panda$core$Bit $tmp4180 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4176);
    if ($tmp4180.value) {
    {
        panda$core$Object* $tmp4181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4182 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4181)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4182.value) {
        {
            return &$s4183;
        }
        }
        panda$core$String* $tmp4184 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4179 = $tmp4184;
        panda$core$String* $tmp4186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4185, resultValue4179);
        panda$core$String* $tmp4188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4186, &$s4187);
        panda$core$String* $tmp4189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4188, value4173);
        panda$core$String* $tmp4191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4189, &$s4190);
        (($fn4192) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4191);
    }
    }
    else {
    {
        panda$core$String* $tmp4193 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4179 = $tmp4193;
        panda$core$String* $tmp4195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4194, resultValue4179);
        panda$core$String* $tmp4197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4195, &$s4196);
        panda$core$String* $tmp4198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4197, value4173);
        panda$core$String* $tmp4200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4198, &$s4199);
        (($fn4201) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4200);
    }
    }
    panda$core$String* $tmp4203 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4202 = $tmp4203;
    panda$core$String* $tmp4205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4204, result4202);
    panda$core$String* $tmp4207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4205, &$s4206);
    panda$core$String* $tmp4208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4207, resultValue4179);
    panda$core$String* $tmp4210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4208, &$s4209);
    (($fn4211) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4210);
    return result4202;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4213;
    panda$core$Bit $tmp4212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4212.value);
    panda$core$Object* $tmp4214 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4215 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4214));
    cl4213 = $tmp4215;
    PANDA_ASSERT(((panda$core$Bit) { cl4213 != NULL }).value);
    panda$core$Bit $tmp4216 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4213);
    if ($tmp4216.value) {
    {
        panda$core$Object* $tmp4218 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4219 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4218));
        panda$core$String* $tmp4220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4217, $tmp4219);
        panda$core$String* $tmp4222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4220, &$s4221);
        return $tmp4222;
    }
    }
    else {
    {
        return &$s4223;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4227;
    panda$core$String* result4230;
    panda$core$Bit $tmp4224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4224.value);
    panda$core$Int64 $tmp4225 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4225, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4226.value);
    panda$core$Object* $tmp4228 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4229 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4228), p_out);
    base4227 = $tmp4229;
    panda$core$String* $tmp4231 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4230 = $tmp4231;
    panda$core$Int64 $tmp4232 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4232.value) {
        case 52:
        {
            panda$core$String* $tmp4234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4233, result4230);
            panda$core$String* $tmp4236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4234, &$s4235);
            panda$core$String* $tmp4237 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4236, $tmp4237);
            panda$core$String* $tmp4240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4238, &$s4239);
            panda$core$String* $tmp4241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4240, base4227);
            panda$core$String* $tmp4243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4241, &$s4242);
            (($fn4244) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4243);
            return result4230;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4245, result4230);
            panda$core$String* $tmp4248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4246, &$s4247);
            panda$core$String* $tmp4249 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4248, $tmp4249);
            panda$core$String* $tmp4252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4250, &$s4251);
            panda$core$String* $tmp4253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4252, base4227);
            panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4253, &$s4254);
            (($fn4256) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4255);
            return result4230;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4269;
    panda$core$String* result4272;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4257 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4257;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4258 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4258;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4259 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4259;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4260 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4260;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4261 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4261;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4262 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4262;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4263 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4263;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4264 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4264;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4265 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4265;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4266 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4266;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4267 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4267;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4268 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4268;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4270 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4271 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4270), p_out);
            value4269 = $tmp4271;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4269));
            return value4269;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4273 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4272 = ((panda$core$String*) $tmp4273);
            PANDA_ASSERT(((panda$core$Bit) { result4272 != NULL }).value);
            return result4272;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4274 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4274;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4275 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4275;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4276 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4276;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4277 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4277;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4279 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4278, $tmp4279);
    panda$core$String* $tmp4282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4280, &$s4281);
    panda$core$String* $tmp4283 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4282, $tmp4283);
    panda$core$String* $tmp4286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4284, &$s4285);
    return $tmp4286;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4289;
    org$pandalanguage$pandac$IRNode* s4301;
    panda$core$Bit $tmp4287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4287.value);
    panda$core$Int64 $tmp4288 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4288;
    {
        ITable* $tmp4290 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4290->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4290 = $tmp4290->next;
        }
        $fn4292 $tmp4291 = $tmp4290->methods[0];
        panda$collections$Iterator* $tmp4293 = $tmp4291(((panda$collections$Iterable*) p_block->children));
        s$Iter4289 = $tmp4293;
        $l4294:;
        ITable* $tmp4296 = s$Iter4289->$class->itable;
        while ($tmp4296->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4296 = $tmp4296->next;
        }
        $fn4298 $tmp4297 = $tmp4296->methods[0];
        panda$core$Bit $tmp4299 = $tmp4297(s$Iter4289);
        panda$core$Bit $tmp4300 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4299);
        if (!$tmp4300.value) goto $l4295;
        {
            ITable* $tmp4302 = s$Iter4289->$class->itable;
            while ($tmp4302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4302 = $tmp4302->next;
            }
            $fn4304 $tmp4303 = $tmp4302->methods[1];
            panda$core$Object* $tmp4305 = $tmp4303(s$Iter4289);
            s4301 = ((org$pandalanguage$pandac$IRNode*) $tmp4305);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4301, p_out);
        }
        goto $l4294;
        $l4295:;
    }
    panda$core$Int64 $tmp4306 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4306;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4307;
    panda$core$String* $match$1879_94308;
    panda$core$String* ptr4313;
    panda$core$String* arg4316;
    org$pandalanguage$pandac$Type* baseType4336;
    panda$core$String* base4340;
    panda$core$String* indexStruct4343;
    panda$core$String* index4346;
    panda$core$String* value4356;
    panda$core$String* ptr4360;
    panda$core$String* ptr4399;
    panda$core$String* cast4402;
    m4307 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1879_94308 = ((org$pandalanguage$pandac$Symbol*) m4307->value)->name;
        panda$core$Bit $tmp4310 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1879_94308, &$s4309);
        if ($tmp4310.value) {
        {
            panda$core$Int64 $tmp4311 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4311, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4312.value);
            panda$core$Object* $tmp4314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4315 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4314), p_out);
            ptr4313 = $tmp4315;
            panda$core$Object* $tmp4317 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4318 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4317));
            panda$core$String* $tmp4319 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4318, p_out);
            arg4316 = $tmp4319;
            panda$core$String* $tmp4321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4320, arg4316);
            panda$core$String* $tmp4323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4321, &$s4322);
            panda$core$String* $tmp4324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4323, ptr4313);
            panda$core$String* $tmp4326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4324, &$s4325);
            (($fn4327) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4326);
        }
        }
        else {
        panda$core$Bit $tmp4329 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1879_94308, &$s4328);
        if ($tmp4329.value) {
        {
            panda$core$Int64 $tmp4330 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4330, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4331.value);
            panda$core$Object* $tmp4332 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4333 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4332));
            panda$core$Int64 $tmp4334 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4333->type->subtypes);
            panda$core$Bit $tmp4335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4334, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4335.value);
            panda$core$Object* $tmp4337 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4338 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4337));
            panda$core$Object* $tmp4339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4338->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4336 = ((org$pandalanguage$pandac$Type*) $tmp4339);
            panda$core$Object* $tmp4341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4342 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4341), p_out);
            base4340 = $tmp4342;
            panda$core$Object* $tmp4344 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4345 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4344), p_out);
            indexStruct4343 = $tmp4345;
            panda$core$String* $tmp4347 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4346 = $tmp4347;
            panda$core$String* $tmp4349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4348, index4346);
            panda$core$String* $tmp4351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4349, &$s4350);
            panda$core$String* $tmp4352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4351, indexStruct4343);
            panda$core$String* $tmp4354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4352, &$s4353);
            (($fn4355) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4354);
            panda$core$Object* $tmp4357 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4358 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4357));
            panda$core$String* $tmp4359 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4358, p_out);
            value4356 = $tmp4359;
            panda$core$String* $tmp4361 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4360 = $tmp4361;
            panda$core$String* $tmp4363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4362, ptr4360);
            panda$core$String* $tmp4365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4363, &$s4364);
            panda$core$String* $tmp4366 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4336);
            panda$core$String* $tmp4367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4365, $tmp4366);
            panda$core$String* $tmp4369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4367, &$s4368);
            panda$core$String* $tmp4370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4369, base4340);
            panda$core$String* $tmp4372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4370, &$s4371);
            panda$core$String* $tmp4375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4373, &$s4374);
            panda$core$String* $tmp4377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4375, &$s4376);
            panda$core$String* $tmp4378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4377, index4346);
            panda$core$String* $tmp4380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4378, &$s4379);
            panda$core$String* $tmp4381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4372, $tmp4380);
            (($fn4382) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4381);
            panda$core$String* $tmp4384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4383, value4356);
            panda$core$String* $tmp4386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4384, &$s4385);
            panda$core$String* $tmp4387 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4336);
            panda$core$String* $tmp4388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4386, $tmp4387);
            panda$core$String* $tmp4390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4388, &$s4389);
            panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4390, ptr4360);
            panda$core$String* $tmp4393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4391, &$s4392);
            (($fn4394) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4393);
        }
        }
        else {
        panda$core$Bit $tmp4396 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1879_94308, &$s4395);
        if ($tmp4396.value) {
        {
            panda$core$Int64 $tmp4397 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4397, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4398.value);
            panda$core$Object* $tmp4400 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4401 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4400), p_out);
            ptr4399 = $tmp4401;
            panda$core$String* $tmp4403 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4402 = $tmp4403;
            panda$core$String* $tmp4405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4404, cast4402);
            panda$core$String* $tmp4407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4405, &$s4406);
            panda$core$String* $tmp4408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4407, ptr4399);
            panda$core$String* $tmp4410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4408, &$s4409);
            (($fn4411) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4410);
            panda$core$String* $tmp4413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4412, cast4402);
            panda$core$String* $tmp4415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4413, &$s4414);
            (($fn4416) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4415);
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
    org$pandalanguage$pandac$MethodDecl* m4418;
    org$pandalanguage$pandac$Type* actualMethodType4421;
    panda$core$String* actualResultType4422;
    panda$core$Bit isSuper4423;
    panda$collections$Array* args4443;
    panda$core$Int64 offset4446;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4451;
    panda$core$String* arg4470;
    panda$core$String* refTarget4507;
    panda$core$String* methodRef4511;
    panda$core$String* separator4513;
    panda$core$String* indirectVar4517;
    panda$core$String* resultType4520;
    panda$collections$Iterator* a$Iter4565;
    panda$core$String* a4577;
    panda$core$Bit $tmp4417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4417.value);
    m4418 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4420 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4418->owner)->name, &$s4419);
    if ($tmp4420.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4418->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4418);
    }
    }
    panda$core$Int64 $tmp4425 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4426 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4425, ((panda$core$Int64) { 1 }));
    bool $tmp4424 = $tmp4426.value;
    if (!$tmp4424) goto $l4427;
    panda$core$Object* $tmp4428 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4428)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4424 = $tmp4429.value;
    $l4427:;
    panda$core$Bit $tmp4430 = { $tmp4424 };
    isSuper4423 = $tmp4430;
    panda$core$Bit $tmp4432 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4423);
    bool $tmp4431 = $tmp4432.value;
    if (!$tmp4431) goto $l4433;
    panda$core$Bit $tmp4434 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4418);
    $tmp4431 = $tmp4434.value;
    $l4433:;
    panda$core$Bit $tmp4435 = { $tmp4431 };
    if ($tmp4435.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4436 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4418);
        actualMethodType4421 = $tmp4436;
        panda$core$Int64 $tmp4437 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4421->subtypes);
        panda$core$Int64 $tmp4438 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4437, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4439 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4421->subtypes, $tmp4438);
        panda$core$String* $tmp4440 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4439));
        actualResultType4422 = $tmp4440;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4441 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4418);
        actualMethodType4421 = $tmp4441;
        panda$core$String* $tmp4442 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4422 = $tmp4442;
    }
    }
    panda$collections$Array* $tmp4444 = (panda$collections$Array*) malloc(40);
    $tmp4444->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4444->refCount.value = 1;
    panda$collections$Array$init($tmp4444);
    args4443 = $tmp4444;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4443, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4447 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4448 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4421->subtypes);
    panda$core$Int64 $tmp4449 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4447, $tmp4448);
    panda$core$Int64 $tmp4450 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4449, ((panda$core$Int64) { 1 }));
    offset4446 = $tmp4450;
    panda$core$Int64 $tmp4452 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4451, ((panda$core$Int64) { 0 }), $tmp4452, ((panda$core$Bit) { false }));
    int64_t $tmp4454 = $tmp4451.min.value;
    panda$core$Int64 i4453 = { $tmp4454 };
    int64_t $tmp4456 = $tmp4451.max.value;
    bool $tmp4457 = $tmp4451.inclusive.value;
    bool $tmp4464 = 1 > 0;
    if ($tmp4464) goto $l4462; else goto $l4463;
    $l4462:;
    if ($tmp4457) goto $l4465; else goto $l4466;
    $l4465:;
    if ($tmp4454 <= $tmp4456) goto $l4458; else goto $l4460;
    $l4466:;
    if ($tmp4454 < $tmp4456) goto $l4458; else goto $l4460;
    $l4463:;
    if ($tmp4457) goto $l4467; else goto $l4468;
    $l4467:;
    if ($tmp4454 >= $tmp4456) goto $l4458; else goto $l4460;
    $l4468:;
    if ($tmp4454 > $tmp4456) goto $l4458; else goto $l4460;
    $l4458:;
    {
        panda$core$Object* $tmp4471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4453);
        panda$core$String* $tmp4472 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4471), p_out);
        arg4470 = $tmp4472;
        panda$core$Bit $tmp4474 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4453, offset4446);
        bool $tmp4473 = $tmp4474.value;
        if (!$tmp4473) goto $l4475;
        panda$core$Int64 $tmp4476 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4453, offset4446);
        panda$core$Object* $tmp4477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4421->subtypes, $tmp4476);
        panda$core$Object* $tmp4478 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4453);
        panda$core$Bit $tmp4479 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4477), ((org$pandalanguage$pandac$IRNode*) $tmp4478)->type);
        $tmp4473 = $tmp4479.value;
        $l4475:;
        panda$core$Bit $tmp4480 = { $tmp4473 };
        if ($tmp4480.value) {
        {
            panda$core$Int64 $tmp4481 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4453, offset4446);
            panda$core$Object* $tmp4482 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4421->subtypes, $tmp4481);
            panda$core$String* $tmp4483 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4482));
            panda$core$String* $tmp4485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4483, &$s4484);
            panda$core$Object* $tmp4486 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4453);
            panda$core$Int64 $tmp4487 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4453, offset4446);
            panda$core$Object* $tmp4488 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4421->subtypes, $tmp4487);
            panda$core$String* $tmp4489 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4470, ((org$pandalanguage$pandac$IRNode*) $tmp4486)->type, ((org$pandalanguage$pandac$Type*) $tmp4488), p_out);
            panda$core$String* $tmp4490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4485, $tmp4489);
            arg4470 = $tmp4490;
        }
        }
        else {
        {
            panda$core$Object* $tmp4491 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4453);
            panda$core$String* $tmp4492 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4491)->type);
            panda$core$String* $tmp4494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4492, &$s4493);
            panda$core$String* $tmp4495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4494, arg4470);
            arg4470 = $tmp4495;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4443, ((panda$core$Object*) arg4470));
    }
    $l4461:;
    if ($tmp4464) goto $l4497; else goto $l4498;
    $l4497:;
    int64_t $tmp4499 = $tmp4456 - i4453.value;
    if ($tmp4457) goto $l4500; else goto $l4501;
    $l4500:;
    if ($tmp4499 >= 1) goto $l4496; else goto $l4460;
    $l4501:;
    if ($tmp4499 > 1) goto $l4496; else goto $l4460;
    $l4498:;
    int64_t $tmp4503 = i4453.value - $tmp4456;
    if ($tmp4457) goto $l4504; else goto $l4505;
    $l4504:;
    if ($tmp4503 >= -1) goto $l4496; else goto $l4460;
    $l4505:;
    if ($tmp4503 > -1) goto $l4496; else goto $l4460;
    $l4496:;
    i4453.value += 1;
    goto $l4458;
    $l4460:;
    panda$core$Int64 $tmp4508 = panda$collections$Array$get_count$R$panda$core$Int64(args4443);
    panda$core$Bit $tmp4509 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4508, ((panda$core$Int64) { 0 }));
    if ($tmp4509.value) {
    {
        panda$core$Object* $tmp4510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4443, ((panda$core$Int64) { 0 }));
        refTarget4507 = ((panda$core$String*) $tmp4510);
    }
    }
    else {
    {
        refTarget4507 = NULL;
    }
    }
    panda$core$String* $tmp4512 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4507, m4418, isSuper4423, p_out);
    methodRef4511 = $tmp4512;
    separator4513 = &$s4514;
    panda$core$Bit $tmp4515 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4418);
    if ($tmp4515.value) {
    {
        panda$core$Int64 $tmp4516 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4516;
        panda$core$String* $tmp4519 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4518, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4517 = $tmp4519;
        panda$core$String* $tmp4521 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4520 = $tmp4521;
        panda$core$String* $tmp4523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4522, indirectVar4517);
        panda$core$String* $tmp4525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4523, &$s4524);
        panda$core$String* $tmp4526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4525, resultType4520);
        panda$core$String* $tmp4528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4526, &$s4527);
        (($fn4529) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4528);
        panda$core$String* $tmp4531 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4418);
        panda$core$String* $tmp4532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4530, $tmp4531);
        panda$core$String* $tmp4534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4532, &$s4533);
        panda$core$String* $tmp4536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4535, methodRef4511);
        panda$core$String* $tmp4538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4536, &$s4537);
        panda$core$String* $tmp4539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4538, resultType4520);
        panda$core$String* $tmp4541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4539, &$s4540);
        panda$core$String* $tmp4542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4541, indirectVar4517);
        panda$core$String* $tmp4544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4542, &$s4543);
        panda$core$String* $tmp4545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4534, $tmp4544);
        (($fn4546) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4545);
        separator4513 = &$s4547;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4548 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4549 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4548);
        if ($tmp4549.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4551 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4418);
        panda$core$String* $tmp4552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4550, $tmp4551);
        panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4552, &$s4553);
        panda$core$String* $tmp4555 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4554, $tmp4555);
        panda$core$String* $tmp4558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, &$s4557);
        panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4559, methodRef4511);
        panda$core$String* $tmp4562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4560, &$s4561);
        panda$core$String* $tmp4563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4558, $tmp4562);
        (($fn4564) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4563);
    }
    }
    {
        ITable* $tmp4566 = ((panda$collections$Iterable*) args4443)->$class->itable;
        while ($tmp4566->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4566 = $tmp4566->next;
        }
        $fn4568 $tmp4567 = $tmp4566->methods[0];
        panda$collections$Iterator* $tmp4569 = $tmp4567(((panda$collections$Iterable*) args4443));
        a$Iter4565 = $tmp4569;
        $l4570:;
        ITable* $tmp4572 = a$Iter4565->$class->itable;
        while ($tmp4572->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4572 = $tmp4572->next;
        }
        $fn4574 $tmp4573 = $tmp4572->methods[0];
        panda$core$Bit $tmp4575 = $tmp4573(a$Iter4565);
        panda$core$Bit $tmp4576 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4575);
        if (!$tmp4576.value) goto $l4571;
        {
            ITable* $tmp4578 = a$Iter4565->$class->itable;
            while ($tmp4578->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4578 = $tmp4578->next;
            }
            $fn4580 $tmp4579 = $tmp4578->methods[1];
            panda$core$Object* $tmp4581 = $tmp4579(a$Iter4565);
            a4577 = ((panda$core$String*) $tmp4581);
            (($fn4582) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4513);
            (($fn4583) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4577);
            separator4513 = &$s4584;
        }
        goto $l4570;
        $l4571:;
    }
    (($fn4586) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4585);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4598;
    panda$core$String* testBit4601;
    panda$core$String* ifTrue4611;
    panda$core$String* ifFalse4613;
    panda$core$String* end4627;
    panda$core$Bit $tmp4587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4587.value);
    panda$core$Int64 $tmp4589 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4589, ((panda$core$Int64) { 2 }));
    bool $tmp4588 = $tmp4590.value;
    if ($tmp4588) goto $l4591;
    panda$core$Int64 $tmp4592 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4592, ((panda$core$Int64) { 3 }));
    $tmp4588 = $tmp4593.value;
    $l4591:;
    panda$core$Bit $tmp4594 = { $tmp4588 };
    PANDA_ASSERT($tmp4594.value);
    panda$core$Object* $tmp4595 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4596 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4597 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4595)->type, $tmp4596);
    PANDA_ASSERT($tmp4597.value);
    panda$core$Object* $tmp4599 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4600 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4599), p_out);
    test4598 = $tmp4600;
    panda$core$String* $tmp4602 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4601 = $tmp4602;
    panda$core$String* $tmp4604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4603, testBit4601);
    panda$core$String* $tmp4606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4604, &$s4605);
    panda$core$String* $tmp4607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4606, test4598);
    panda$core$String* $tmp4609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4607, &$s4608);
    (($fn4610) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4609);
    panda$core$String* $tmp4612 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4611 = $tmp4612;
    panda$core$String* $tmp4614 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4613 = $tmp4614;
    panda$core$String* $tmp4616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4615, testBit4601);
    panda$core$String* $tmp4618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, &$s4617);
    panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4618, ifTrue4611);
    panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4619, &$s4620);
    panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, ifFalse4613);
    panda$core$String* $tmp4624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4622, &$s4623);
    (($fn4625) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4624);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4611, p_out);
    panda$core$Object* $tmp4626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4626), p_out);
    panda$core$Int64 $tmp4628 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4628, ((panda$core$Int64) { 3 }));
    if ($tmp4629.value) {
    {
        panda$core$String* $tmp4630 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4627 = $tmp4630;
    }
    }
    else {
    {
        end4627 = ifFalse4613;
    }
    }
    panda$core$Object* $tmp4631 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4632 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4631));
    panda$core$Bit $tmp4633 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4632);
    if ($tmp4633.value) {
    {
        panda$core$String* $tmp4635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4634, end4627);
        panda$core$String* $tmp4637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4635, &$s4636);
        (($fn4638) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4637);
    }
    }
    panda$core$Int64 $tmp4639 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4639, ((panda$core$Int64) { 3 }));
    if ($tmp4640.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4613, p_out);
        panda$core$Object* $tmp4641 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4641), p_out);
        panda$core$Object* $tmp4642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4643 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4642));
        panda$core$Bit $tmp4644 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4643);
        if ($tmp4644.value) {
        {
            panda$core$String* $tmp4646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4645, end4627);
            panda$core$String* $tmp4648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4646, &$s4647);
            (($fn4649) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4648);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4627, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4653;
    panda$core$String* range4664;
    org$pandalanguage$pandac$IRNode* block4667;
    org$pandalanguage$pandac$Type* t4669;
    panda$core$String* llt4672;
    panda$core$String* indexType4674;
    org$pandalanguage$pandac$ClassDecl* cl4680;
    panda$core$String* numberType4688;
    panda$core$String* index4696;
    panda$core$String* start4706;
    panda$core$String* indexValuePtr4716;
    panda$core$String* end4748;
    panda$core$String* step4758;
    panda$core$String* inclusive4760;
    panda$core$String* loopStart4770;
    panda$core$String* loopBody4772;
    panda$core$String* loopEnd4774;
    panda$core$String* loopTest4776;
    panda$core$String* forwardEntry4780;
    panda$core$String* backwardEntry4782;
    panda$core$String* signPrefix4784;
    panda$core$String* direction4796;
    panda$core$String* forwardEntryInclusive4823;
    panda$core$String* forwardEntryExclusive4825;
    panda$core$String* forwardEntryInclusiveTest4840;
    panda$core$String* forwardEntryExclusiveTest4872;
    panda$core$String* backwardEntryInclusive4904;
    panda$core$String* backwardEntryExclusive4906;
    panda$core$String* backwardEntryInclusiveTest4921;
    panda$core$String* backwardEntryExclusiveTest4953;
    panda$core$String* indexValue4985;
    panda$core$String* loopInc5008;
    panda$core$String* forwardLabel5010;
    panda$core$String* backwardLabel5012;
    panda$core$String* forwardDelta5025;
    panda$core$String* forwardInclusiveLabel5041;
    panda$core$String* forwardExclusiveLabel5043;
    panda$core$String* forwardInclusiveTest5054;
    panda$core$String* forwardExclusiveTest5081;
    panda$core$String* backwardDelta5108;
    panda$core$String* negStep5124;
    panda$core$String* backwardInclusiveLabel5137;
    panda$core$String* backwardExclusiveLabel5139;
    panda$core$String* backwardInclusiveTest5150;
    panda$core$String* backwardExclusiveTest5175;
    panda$core$String* inc5200;
    panda$core$String* incStruct5216;
    panda$core$Bit $tmp4650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4650.value);
    panda$core$Int64 $tmp4651 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4651, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4652.value);
    panda$core$Object* $tmp4654 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4653 = ((org$pandalanguage$pandac$IRNode*) $tmp4654);
    panda$core$Object* $tmp4655 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4655)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4656.value);
    panda$core$Object* $tmp4657 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4658 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4657)->type->subtypes);
    panda$core$Bit $tmp4659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4658, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4659.value);
    panda$core$Object* $tmp4660 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4661 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4660)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4663 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4661))->name, &$s4662);
    PANDA_ASSERT($tmp4663.value);
    panda$core$Object* $tmp4665 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4666 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4665), p_out);
    range4664 = $tmp4666;
    panda$core$Object* $tmp4668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4667 = ((org$pandalanguage$pandac$IRNode*) $tmp4668);
    panda$core$Object* $tmp4670 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4671 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4670)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4669 = ((org$pandalanguage$pandac$Type*) $tmp4671);
    panda$core$String* $tmp4673 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4669);
    llt4672 = $tmp4673;
    panda$core$Bit $tmp4675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4669->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4675.value) {
    {
        panda$core$Int64 $tmp4676 = panda$collections$Array$get_count$R$panda$core$Int64(t4669->subtypes);
        panda$core$Bit $tmp4677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4676, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4677.value);
        panda$core$Object* $tmp4678 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4669->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4679 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4678));
        indexType4674 = $tmp4679;
    }
    }
    else {
    {
        indexType4674 = llt4672;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4681 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4669);
    cl4680 = $tmp4681;
    PANDA_ASSERT(((panda$core$Bit) { cl4680 != NULL }).value);
    panda$collections$ListView* $tmp4682 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4680);
    ITable* $tmp4683 = ((panda$collections$CollectionView*) $tmp4682)->$class->itable;
    while ($tmp4683->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4683 = $tmp4683->next;
    }
    $fn4685 $tmp4684 = $tmp4683->methods[0];
    panda$core$Int64 $tmp4686 = $tmp4684(((panda$collections$CollectionView*) $tmp4682));
    panda$core$Bit $tmp4687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4686, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4687.value);
    panda$collections$ListView* $tmp4689 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4680);
    ITable* $tmp4690 = $tmp4689->$class->itable;
    while ($tmp4690->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4690 = $tmp4690->next;
    }
    $fn4692 $tmp4691 = $tmp4690->methods[0];
    panda$core$Object* $tmp4693 = $tmp4691($tmp4689, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4694 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4693)->type);
    numberType4688 = $tmp4694;
    panda$core$Bit $tmp4695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4653->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4695.value);
    panda$core$String* $tmp4697 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4653->payload));
    index4696 = $tmp4697;
    panda$core$String* $tmp4699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4698, index4696);
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4699, &$s4700);
    panda$core$String* $tmp4702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, indexType4674);
    panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4702, &$s4703);
    (($fn4705) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4704);
    panda$core$String* $tmp4707 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4706 = $tmp4707;
    panda$core$String* $tmp4709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4708, start4706);
    panda$core$String* $tmp4711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4709, &$s4710);
    panda$core$String* $tmp4712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, range4664);
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4712, &$s4713);
    (($fn4715) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4714);
    panda$core$String* $tmp4717 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4716 = $tmp4717;
    panda$core$String* $tmp4719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4718, indexValuePtr4716);
    panda$core$String* $tmp4721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4719, &$s4720);
    panda$core$String* $tmp4722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4721, indexType4674);
    panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4722, &$s4723);
    panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4724, indexType4674);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4725, &$s4726);
    panda$core$String* $tmp4728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, index4696);
    panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4728, &$s4729);
    panda$core$String* $tmp4732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4730, &$s4731);
    (($fn4733) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4732);
    panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4734, numberType4688);
    panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, &$s4736);
    panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, start4706);
    panda$core$String* $tmp4740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, &$s4739);
    panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4740, numberType4688);
    panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, &$s4742);
    panda$core$String* $tmp4744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4743, indexValuePtr4716);
    panda$core$String* $tmp4746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4744, &$s4745);
    (($fn4747) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4746);
    panda$core$String* $tmp4749 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4748 = $tmp4749;
    panda$core$String* $tmp4751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4750, end4748);
    panda$core$String* $tmp4753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4751, &$s4752);
    panda$core$String* $tmp4754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4753, range4664);
    panda$core$String* $tmp4756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4754, &$s4755);
    (($fn4757) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4756);
    step4758 = &$s4759;
    panda$core$String* $tmp4761 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4760 = $tmp4761;
    panda$core$String* $tmp4763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4762, inclusive4760);
    panda$core$String* $tmp4765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4763, &$s4764);
    panda$core$String* $tmp4766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4765, range4664);
    panda$core$String* $tmp4768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4766, &$s4767);
    (($fn4769) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4768);
    panda$core$String* $tmp4771 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4770 = $tmp4771;
    panda$core$String* $tmp4773 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4772 = $tmp4773;
    panda$core$String* $tmp4775 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4774 = $tmp4775;
    panda$core$String* $tmp4777 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4776 = $tmp4777;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4778 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4778->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4778->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4778, ((panda$core$String*) p_f->payload), loopEnd4774, loopTest4776);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4778));
    panda$core$String* $tmp4781 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4780 = $tmp4781;
    panda$core$String* $tmp4783 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4782 = $tmp4783;
    panda$core$Bit $tmp4786 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4669)->name, &$s4785);
    if ($tmp4786.value) {
    {
        signPrefix4784 = &$s4787;
    }
    }
    else {
    {
        panda$core$Bit $tmp4790 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4669)->name, &$s4789);
        bool $tmp4788 = $tmp4790.value;
        if ($tmp4788) goto $l4791;
        panda$core$Bit $tmp4793 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4669)->name, &$s4792);
        $tmp4788 = $tmp4793.value;
        $l4791:;
        panda$core$Bit $tmp4794 = { $tmp4788 };
        PANDA_ASSERT($tmp4794.value);
        signPrefix4784 = &$s4795;
    }
    }
    panda$core$Bit $tmp4798 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix4784, &$s4797);
    if ($tmp4798.value) {
    {
        panda$core$String* $tmp4799 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction4796 = $tmp4799;
        panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4800, direction4796);
        panda$core$String* $tmp4803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4801, &$s4802);
        panda$core$String* $tmp4804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4803, numberType4688);
        panda$core$String* $tmp4806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4804, &$s4805);
        panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4806, step4758);
        panda$core$String* $tmp4809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4807, &$s4808);
        (($fn4810) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4809);
    }
    }
    else {
    {
        direction4796 = &$s4811;
    }
    }
    panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4812, direction4796);
    panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, &$s4814);
    panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4815, forwardEntry4780);
    panda$core$String* $tmp4818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, &$s4817);
    panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4818, backwardEntry4782);
    panda$core$String* $tmp4821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4819, &$s4820);
    (($fn4822) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4821);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry4780, p_out);
    panda$core$String* $tmp4824 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4823 = $tmp4824;
    panda$core$String* $tmp4826 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4825 = $tmp4826;
    panda$core$String* $tmp4828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4827, inclusive4760);
    panda$core$String* $tmp4830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4828, &$s4829);
    panda$core$String* $tmp4831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4830, forwardEntryInclusive4823);
    panda$core$String* $tmp4833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4831, &$s4832);
    panda$core$String* $tmp4835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4834, forwardEntryExclusive4825);
    panda$core$String* $tmp4837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4835, &$s4836);
    panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4833, $tmp4837);
    (($fn4839) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4838);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4823, p_out);
    panda$core$String* $tmp4841 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4840 = $tmp4841;
    panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4842, forwardEntryInclusiveTest4840);
    panda$core$String* $tmp4845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4843, &$s4844);
    panda$core$String* $tmp4846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4845, signPrefix4784);
    panda$core$String* $tmp4848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4846, &$s4847);
    panda$core$String* $tmp4849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4848, numberType4688);
    panda$core$String* $tmp4851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4849, &$s4850);
    panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4852, start4706);
    panda$core$String* $tmp4855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, &$s4854);
    panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4855, end4748);
    panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, &$s4857);
    panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, $tmp4858);
    (($fn4860) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4859);
    panda$core$String* $tmp4862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4861, forwardEntryInclusiveTest4840);
    panda$core$String* $tmp4864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4862, &$s4863);
    panda$core$String* $tmp4865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4864, loopStart4770);
    panda$core$String* $tmp4867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4865, &$s4866);
    panda$core$String* $tmp4868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4867, loopEnd4774);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4868, &$s4869);
    (($fn4871) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4870);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4825, p_out);
    panda$core$String* $tmp4873 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4872 = $tmp4873;
    panda$core$String* $tmp4875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4874, forwardEntryExclusiveTest4872);
    panda$core$String* $tmp4877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4875, &$s4876);
    panda$core$String* $tmp4878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4877, signPrefix4784);
    panda$core$String* $tmp4880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4878, &$s4879);
    panda$core$String* $tmp4881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4880, numberType4688);
    panda$core$String* $tmp4883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4881, &$s4882);
    panda$core$String* $tmp4885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4884, start4706);
    panda$core$String* $tmp4887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4885, &$s4886);
    panda$core$String* $tmp4888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4887, end4748);
    panda$core$String* $tmp4890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4888, &$s4889);
    panda$core$String* $tmp4891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4883, $tmp4890);
    (($fn4892) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4891);
    panda$core$String* $tmp4894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4893, forwardEntryExclusiveTest4872);
    panda$core$String* $tmp4896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4894, &$s4895);
    panda$core$String* $tmp4897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4896, loopStart4770);
    panda$core$String* $tmp4899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4897, &$s4898);
    panda$core$String* $tmp4900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4899, loopEnd4774);
    panda$core$String* $tmp4902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4900, &$s4901);
    (($fn4903) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4902);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry4782, p_out);
    panda$core$String* $tmp4905 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive4904 = $tmp4905;
    panda$core$String* $tmp4907 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive4906 = $tmp4907;
    panda$core$String* $tmp4909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4908, inclusive4760);
    panda$core$String* $tmp4911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4909, &$s4910);
    panda$core$String* $tmp4912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4911, backwardEntryInclusive4904);
    panda$core$String* $tmp4914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4912, &$s4913);
    panda$core$String* $tmp4916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4915, backwardEntryExclusive4906);
    panda$core$String* $tmp4918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4916, &$s4917);
    panda$core$String* $tmp4919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4914, $tmp4918);
    (($fn4920) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4919);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive4904, p_out);
    panda$core$String* $tmp4922 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest4921 = $tmp4922;
    panda$core$String* $tmp4924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4923, backwardEntryInclusiveTest4921);
    panda$core$String* $tmp4926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4924, &$s4925);
    panda$core$String* $tmp4927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4926, signPrefix4784);
    panda$core$String* $tmp4929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4927, &$s4928);
    panda$core$String* $tmp4930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4929, numberType4688);
    panda$core$String* $tmp4932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4930, &$s4931);
    panda$core$String* $tmp4934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4933, start4706);
    panda$core$String* $tmp4936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4934, &$s4935);
    panda$core$String* $tmp4937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4936, end4748);
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4937, &$s4938);
    panda$core$String* $tmp4940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4932, $tmp4939);
    (($fn4941) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4940);
    panda$core$String* $tmp4943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4942, backwardEntryInclusiveTest4921);
    panda$core$String* $tmp4945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4943, &$s4944);
    panda$core$String* $tmp4946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4945, loopStart4770);
    panda$core$String* $tmp4948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4946, &$s4947);
    panda$core$String* $tmp4949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4948, loopEnd4774);
    panda$core$String* $tmp4951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4949, &$s4950);
    (($fn4952) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4951);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive4906, p_out);
    panda$core$String* $tmp4954 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest4953 = $tmp4954;
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4955, backwardEntryExclusiveTest4953);
    panda$core$String* $tmp4958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4956, &$s4957);
    panda$core$String* $tmp4959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4958, signPrefix4784);
    panda$core$String* $tmp4961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4959, &$s4960);
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4961, numberType4688);
    panda$core$String* $tmp4964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4962, &$s4963);
    panda$core$String* $tmp4966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4965, start4706);
    panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, &$s4967);
    panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4968, end4748);
    panda$core$String* $tmp4971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4969, &$s4970);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4964, $tmp4971);
    (($fn4973) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4972);
    panda$core$String* $tmp4975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4974, backwardEntryExclusiveTest4953);
    panda$core$String* $tmp4977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4975, &$s4976);
    panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4977, loopStart4770);
    panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4978, &$s4979);
    panda$core$String* $tmp4981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4980, loopEnd4774);
    panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4981, &$s4982);
    (($fn4984) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4983);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4770, p_out);
    panda$core$String* $tmp4986 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4985 = $tmp4986;
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4987, indexValue4985);
    panda$core$String* $tmp4990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, &$s4989);
    panda$core$String* $tmp4991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4990, numberType4688);
    panda$core$String* $tmp4993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4991, &$s4992);
    panda$core$String* $tmp4994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4993, numberType4688);
    panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4994, &$s4995);
    panda$core$String* $tmp4997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4996, indexValuePtr4716);
    panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4997, &$s4998);
    (($fn5000) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4999);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4667, p_out);
    panda$core$Bit $tmp5001 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4667);
    panda$core$Bit $tmp5002 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5001);
    if ($tmp5002.value) {
    {
        panda$core$String* $tmp5004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5003, loopTest4776);
        panda$core$String* $tmp5006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5004, &$s5005);
        (($fn5007) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5006);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4776, p_out);
    panda$core$String* $tmp5009 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5008 = $tmp5009;
    panda$core$String* $tmp5011 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5010 = $tmp5011;
    panda$core$String* $tmp5013 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5012 = $tmp5013;
    panda$core$String* $tmp5015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5014, direction4796);
    panda$core$String* $tmp5017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5015, &$s5016);
    panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5017, forwardLabel5010);
    panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5018, &$s5019);
    panda$core$String* $tmp5021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5020, backwardLabel5012);
    panda$core$String* $tmp5023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5021, &$s5022);
    (($fn5024) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5023);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5010, p_out);
    panda$core$String* $tmp5026 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5025 = $tmp5026;
    panda$core$String* $tmp5028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5027, forwardDelta5025);
    panda$core$String* $tmp5030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5028, &$s5029);
    panda$core$String* $tmp5031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5030, numberType4688);
    panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5031, &$s5032);
    panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5033, end4748);
    panda$core$String* $tmp5036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5034, &$s5035);
    panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5036, indexValue4985);
    panda$core$String* $tmp5039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5037, &$s5038);
    (($fn5040) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5039);
    panda$core$String* $tmp5042 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5041 = $tmp5042;
    panda$core$String* $tmp5044 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5043 = $tmp5044;
    panda$core$String* $tmp5046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5045, inclusive4760);
    panda$core$String* $tmp5048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5046, &$s5047);
    panda$core$String* $tmp5049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5048, forwardInclusiveLabel5041);
    panda$core$String* $tmp5051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5049, &$s5050);
    panda$core$String* $tmp5052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5051, forwardExclusiveLabel5043);
    (($fn5053) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5052);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5041, p_out);
    panda$core$String* $tmp5055 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5054 = $tmp5055;
    panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5056, forwardInclusiveTest5054);
    panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, &$s5058);
    panda$core$String* $tmp5060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, numberType4688);
    panda$core$String* $tmp5062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5060, &$s5061);
    panda$core$String* $tmp5063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5062, forwardDelta5025);
    panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5063, &$s5064);
    panda$core$String* $tmp5066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, step4758);
    panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5066, &$s5067);
    (($fn5069) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5068);
    panda$core$String* $tmp5071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5070, forwardInclusiveTest5054);
    panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5071, &$s5072);
    panda$core$String* $tmp5074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, loopInc5008);
    panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5074, &$s5075);
    panda$core$String* $tmp5077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5076, loopEnd4774);
    panda$core$String* $tmp5079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5077, &$s5078);
    (($fn5080) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5079);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5043, p_out);
    panda$core$String* $tmp5082 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5081 = $tmp5082;
    panda$core$String* $tmp5084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5083, forwardExclusiveTest5081);
    panda$core$String* $tmp5086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5084, &$s5085);
    panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5086, numberType4688);
    panda$core$String* $tmp5089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5087, &$s5088);
    panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5089, forwardDelta5025);
    panda$core$String* $tmp5092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5090, &$s5091);
    panda$core$String* $tmp5093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5092, step4758);
    panda$core$String* $tmp5095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5093, &$s5094);
    (($fn5096) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5095);
    panda$core$String* $tmp5098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5097, forwardExclusiveTest5081);
    panda$core$String* $tmp5100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5098, &$s5099);
    panda$core$String* $tmp5101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5100, loopInc5008);
    panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5101, &$s5102);
    panda$core$String* $tmp5104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, loopEnd4774);
    panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5104, &$s5105);
    (($fn5107) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5106);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5012, p_out);
    panda$core$String* $tmp5109 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5108 = $tmp5109;
    panda$core$String* $tmp5111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5110, backwardDelta5108);
    panda$core$String* $tmp5113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5111, &$s5112);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5113, numberType4688);
    panda$core$String* $tmp5116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, &$s5115);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5116, indexValue4985);
    panda$core$String* $tmp5119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5117, &$s5118);
    panda$core$String* $tmp5120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5119, end4748);
    panda$core$String* $tmp5122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5120, &$s5121);
    (($fn5123) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5122);
    panda$core$String* $tmp5125 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5124 = $tmp5125;
    panda$core$String* $tmp5127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5126, negStep5124);
    panda$core$String* $tmp5129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5127, &$s5128);
    panda$core$String* $tmp5130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5129, numberType4688);
    panda$core$String* $tmp5132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5130, &$s5131);
    panda$core$String* $tmp5133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, step4758);
    panda$core$String* $tmp5135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5133, &$s5134);
    (($fn5136) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5135);
    panda$core$String* $tmp5138 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5137 = $tmp5138;
    panda$core$String* $tmp5140 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5139 = $tmp5140;
    panda$core$String* $tmp5142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5141, inclusive4760);
    panda$core$String* $tmp5144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5142, &$s5143);
    panda$core$String* $tmp5145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5144, backwardInclusiveLabel5137);
    panda$core$String* $tmp5147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5145, &$s5146);
    panda$core$String* $tmp5148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5147, backwardExclusiveLabel5139);
    (($fn5149) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5148);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5137, p_out);
    panda$core$String* $tmp5151 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5150 = $tmp5151;
    panda$core$String* $tmp5153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5152, backwardInclusiveTest5150);
    panda$core$String* $tmp5155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5153, &$s5154);
    panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5155, numberType4688);
    panda$core$String* $tmp5158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, &$s5157);
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, backwardDelta5108);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
    panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, negStep5124);
    (($fn5163) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5162);
    panda$core$String* $tmp5165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5164, backwardInclusiveTest5150);
    panda$core$String* $tmp5167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5165, &$s5166);
    panda$core$String* $tmp5168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5167, loopInc5008);
    panda$core$String* $tmp5170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5168, &$s5169);
    panda$core$String* $tmp5171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5170, loopEnd4774);
    panda$core$String* $tmp5173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5171, &$s5172);
    (($fn5174) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5173);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5139, p_out);
    panda$core$String* $tmp5176 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5175 = $tmp5176;
    panda$core$String* $tmp5178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5177, backwardExclusiveTest5175);
    panda$core$String* $tmp5180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5178, &$s5179);
    panda$core$String* $tmp5181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5180, numberType4688);
    panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5181, &$s5182);
    panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5183, backwardDelta5108);
    panda$core$String* $tmp5186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, &$s5185);
    panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5186, negStep5124);
    (($fn5188) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5187);
    panda$core$String* $tmp5190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5189, backwardExclusiveTest5175);
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5190, &$s5191);
    panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, loopInc5008);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5193, &$s5194);
    panda$core$String* $tmp5196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, loopEnd4774);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5196, &$s5197);
    (($fn5199) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5198);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5008, p_out);
    panda$core$String* $tmp5201 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5200 = $tmp5201;
    panda$core$String* $tmp5203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5202, inc5200);
    panda$core$String* $tmp5205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5203, &$s5204);
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5205, numberType4688);
    panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5206, &$s5207);
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5208, indexValue4985);
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5209, &$s5210);
    panda$core$String* $tmp5212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, step4758);
    panda$core$String* $tmp5214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5212, &$s5213);
    (($fn5215) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5214);
    panda$core$String* $tmp5217 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5216 = $tmp5217;
    panda$core$String* $tmp5219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5218, incStruct5216);
    panda$core$String* $tmp5221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, &$s5220);
    panda$core$String* $tmp5222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5221, indexType4674);
    panda$core$String* $tmp5224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5222, &$s5223);
    panda$core$String* $tmp5225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5224, numberType4688);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5225, &$s5226);
    (($fn5228) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5227);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5229, numberType4688);
    panda$core$String* $tmp5232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, &$s5231);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5232, inc5200);
    panda$core$String* $tmp5235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, &$s5234);
    (($fn5236) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5235);
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5237, indexType4674);
    panda$core$String* $tmp5240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5238, &$s5239);
    panda$core$String* $tmp5241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5240, incStruct5216);
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5241, &$s5242);
    panda$core$String* $tmp5244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, indexType4674);
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5244, &$s5245);
    panda$core$String* $tmp5247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, index4696);
    panda$core$String* $tmp5249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5247, &$s5248);
    (($fn5250) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5249);
    panda$core$String* $tmp5252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5251, loopStart4770);
    panda$core$String* $tmp5254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5252, &$s5253);
    (($fn5255) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5254);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4774, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target5259;
    panda$core$String* range5270;
    org$pandalanguage$pandac$IRNode* block5273;
    org$pandalanguage$pandac$Type* t5275;
    panda$core$String* llt5278;
    panda$core$String* indexType5280;
    org$pandalanguage$pandac$ClassDecl* cl5286;
    panda$core$String* numberType5294;
    panda$core$String* index5302;
    panda$core$String* start5312;
    panda$core$String* indexValuePtr5322;
    panda$core$String* end5354;
    panda$core$String* rawStep5364;
    panda$core$String* step5374;
    panda$core$String* inclusive5389;
    panda$core$String* loopStart5399;
    panda$core$String* loopBody5401;
    panda$core$String* loopEnd5403;
    panda$core$String* loopTest5405;
    panda$core$String* forwardEntry5409;
    panda$core$String* backwardEntry5411;
    panda$core$String* signPrefix5413;
    panda$core$String* direction5425;
    panda$core$String* forwardEntryInclusive5452;
    panda$core$String* forwardEntryExclusive5454;
    panda$core$String* forwardEntryInclusiveTest5469;
    panda$core$String* forwardEntryExclusiveTest5501;
    panda$core$String* backwardEntryInclusive5533;
    panda$core$String* backwardEntryExclusive5535;
    panda$core$String* backwardEntryInclusiveTest5550;
    panda$core$String* backwardEntryExclusiveTest5582;
    panda$core$String* indexValue5614;
    panda$core$String* loopInc5637;
    panda$core$String* forwardLabel5639;
    panda$core$String* backwardLabel5641;
    panda$core$String* forwardDelta5654;
    panda$core$String* forwardInclusiveLabel5670;
    panda$core$String* forwardExclusiveLabel5672;
    panda$core$String* forwardInclusiveTest5683;
    panda$core$String* forwardExclusiveTest5710;
    panda$core$String* backwardDelta5737;
    panda$core$String* negStep5753;
    panda$core$String* backwardInclusiveLabel5766;
    panda$core$String* backwardExclusiveLabel5768;
    panda$core$String* backwardInclusiveTest5779;
    panda$core$String* backwardExclusiveTest5804;
    panda$core$String* inc5829;
    panda$core$String* incStruct5845;
    panda$core$Bit $tmp5256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp5256.value);
    panda$core$Int64 $tmp5257 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp5258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5257, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp5258.value);
    panda$core$Object* $tmp5260 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target5259 = ((org$pandalanguage$pandac$IRNode*) $tmp5260);
    panda$core$Object* $tmp5261 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5261)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp5262.value);
    panda$core$Object* $tmp5263 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp5264 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp5263)->type->subtypes);
    panda$core$Bit $tmp5265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5264, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp5265.value);
    panda$core$Object* $tmp5266 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5267 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp5266)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5269 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp5267))->name, &$s5268);
    PANDA_ASSERT($tmp5269.value);
    panda$core$Object* $tmp5271 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5272 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5271), p_out);
    range5270 = $tmp5272;
    panda$core$Object* $tmp5274 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block5273 = ((org$pandalanguage$pandac$IRNode*) $tmp5274);
    panda$core$Object* $tmp5276 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5277 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp5276)->type->subtypes, ((panda$core$Int64) { 1 }));
    t5275 = ((org$pandalanguage$pandac$Type*) $tmp5277);
    panda$core$String* $tmp5279 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t5275);
    llt5278 = $tmp5279;
    panda$core$Bit $tmp5281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t5275->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp5281.value) {
    {
        panda$core$Int64 $tmp5282 = panda$collections$Array$get_count$R$panda$core$Int64(t5275->subtypes);
        panda$core$Bit $tmp5283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5282, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp5283.value);
        panda$core$Object* $tmp5284 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t5275->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp5285 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp5284));
        indexType5280 = $tmp5285;
    }
    }
    else {
    {
        indexType5280 = llt5278;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp5287 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t5275);
    cl5286 = $tmp5287;
    PANDA_ASSERT(((panda$core$Bit) { cl5286 != NULL }).value);
    panda$collections$ListView* $tmp5288 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5286);
    ITable* $tmp5289 = ((panda$collections$CollectionView*) $tmp5288)->$class->itable;
    while ($tmp5289->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp5289 = $tmp5289->next;
    }
    $fn5291 $tmp5290 = $tmp5289->methods[0];
    panda$core$Int64 $tmp5292 = $tmp5290(((panda$collections$CollectionView*) $tmp5288));
    panda$core$Bit $tmp5293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5292, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5293.value);
    panda$collections$ListView* $tmp5295 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5286);
    ITable* $tmp5296 = $tmp5295->$class->itable;
    while ($tmp5296->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp5296 = $tmp5296->next;
    }
    $fn5298 $tmp5297 = $tmp5296->methods[0];
    panda$core$Object* $tmp5299 = $tmp5297($tmp5295, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5300 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp5299)->type);
    numberType5294 = $tmp5300;
    panda$core$Bit $tmp5301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target5259->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp5301.value);
    panda$core$String* $tmp5303 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target5259->payload));
    index5302 = $tmp5303;
    panda$core$String* $tmp5305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5304, index5302);
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5305, &$s5306);
    panda$core$String* $tmp5308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, indexType5280);
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5308, &$s5309);
    (($fn5311) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5310);
    panda$core$String* $tmp5313 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start5312 = $tmp5313;
    panda$core$String* $tmp5315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5314, start5312);
    panda$core$String* $tmp5317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5315, &$s5316);
    panda$core$String* $tmp5318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5317, range5270);
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5318, &$s5319);
    (($fn5321) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5320);
    panda$core$String* $tmp5323 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr5322 = $tmp5323;
    panda$core$String* $tmp5325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5324, indexValuePtr5322);
    panda$core$String* $tmp5327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5325, &$s5326);
    panda$core$String* $tmp5328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5327, indexType5280);
    panda$core$String* $tmp5330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5328, &$s5329);
    panda$core$String* $tmp5331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5330, indexType5280);
    panda$core$String* $tmp5333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5331, &$s5332);
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5333, index5302);
    panda$core$String* $tmp5336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, &$s5335);
    panda$core$String* $tmp5338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5336, &$s5337);
    (($fn5339) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5338);
    panda$core$String* $tmp5341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5340, numberType5294);
    panda$core$String* $tmp5343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5341, &$s5342);
    panda$core$String* $tmp5344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5343, start5312);
    panda$core$String* $tmp5346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5344, &$s5345);
    panda$core$String* $tmp5347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5346, numberType5294);
    panda$core$String* $tmp5349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5347, &$s5348);
    panda$core$String* $tmp5350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5349, indexValuePtr5322);
    panda$core$String* $tmp5352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5350, &$s5351);
    (($fn5353) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5352);
    panda$core$String* $tmp5355 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end5354 = $tmp5355;
    panda$core$String* $tmp5357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5356, end5354);
    panda$core$String* $tmp5359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5357, &$s5358);
    panda$core$String* $tmp5360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5359, range5270);
    panda$core$String* $tmp5362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5360, &$s5361);
    (($fn5363) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5362);
    panda$core$String* $tmp5365 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep5364 = $tmp5365;
    panda$core$String* $tmp5367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5366, rawStep5364);
    panda$core$String* $tmp5369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5367, &$s5368);
    panda$core$String* $tmp5370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5369, range5270);
    panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5370, &$s5371);
    (($fn5373) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5372);
    panda$core$Bit $tmp5376 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType5294, &$s5375);
    if ($tmp5376.value) {
    {
        panda$core$String* $tmp5377 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step5374 = $tmp5377;
        panda$core$String* $tmp5379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5378, step5374);
        panda$core$String* $tmp5381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5379, &$s5380);
        panda$core$String* $tmp5382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5381, rawStep5364);
        panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5382, &$s5383);
        panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5384, numberType5294);
        panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5385, &$s5386);
        (($fn5388) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5387);
    }
    }
    else {
    {
        step5374 = rawStep5364;
    }
    }
    panda$core$String* $tmp5390 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive5389 = $tmp5390;
    panda$core$String* $tmp5392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5391, inclusive5389);
    panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5392, &$s5393);
    panda$core$String* $tmp5395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5394, range5270);
    panda$core$String* $tmp5397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5395, &$s5396);
    (($fn5398) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5397);
    panda$core$String* $tmp5400 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5399 = $tmp5400;
    panda$core$String* $tmp5402 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5401 = $tmp5402;
    panda$core$String* $tmp5404 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5403 = $tmp5404;
    panda$core$String* $tmp5406 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest5405 = $tmp5406;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5407 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5407->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5407->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5407, ((panda$core$String*) p_f->payload), loopEnd5403, loopTest5405);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5407));
    panda$core$String* $tmp5410 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry5409 = $tmp5410;
    panda$core$String* $tmp5412 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry5411 = $tmp5412;
    panda$core$Bit $tmp5415 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5275)->name, &$s5414);
    if ($tmp5415.value) {
    {
        signPrefix5413 = &$s5416;
    }
    }
    else {
    {
        panda$core$Bit $tmp5419 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5275)->name, &$s5418);
        bool $tmp5417 = $tmp5419.value;
        if ($tmp5417) goto $l5420;
        panda$core$Bit $tmp5422 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5275)->name, &$s5421);
        $tmp5417 = $tmp5422.value;
        $l5420:;
        panda$core$Bit $tmp5423 = { $tmp5417 };
        PANDA_ASSERT($tmp5423.value);
        signPrefix5413 = &$s5424;
    }
    }
    panda$core$Bit $tmp5427 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5413, &$s5426);
    if ($tmp5427.value) {
    {
        panda$core$String* $tmp5428 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction5425 = $tmp5428;
        panda$core$String* $tmp5430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5429, direction5425);
        panda$core$String* $tmp5432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5430, &$s5431);
        panda$core$String* $tmp5433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5432, numberType5294);
        panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5433, &$s5434);
        panda$core$String* $tmp5436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5435, step5374);
        panda$core$String* $tmp5438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5436, &$s5437);
        (($fn5439) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5438);
    }
    }
    else {
    {
        direction5425 = &$s5440;
    }
    }
    panda$core$String* $tmp5442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5441, direction5425);
    panda$core$String* $tmp5444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, &$s5443);
    panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5444, forwardEntry5409);
    panda$core$String* $tmp5447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5445, &$s5446);
    panda$core$String* $tmp5448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5447, backwardEntry5411);
    panda$core$String* $tmp5450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5448, &$s5449);
    (($fn5451) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5450);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry5409, p_out);
    panda$core$String* $tmp5453 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive5452 = $tmp5453;
    panda$core$String* $tmp5455 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive5454 = $tmp5455;
    panda$core$String* $tmp5457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5456, inclusive5389);
    panda$core$String* $tmp5459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5457, &$s5458);
    panda$core$String* $tmp5460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5459, forwardEntryInclusive5452);
    panda$core$String* $tmp5462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5460, &$s5461);
    panda$core$String* $tmp5464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5463, forwardEntryExclusive5454);
    panda$core$String* $tmp5466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5464, &$s5465);
    panda$core$String* $tmp5467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5462, $tmp5466);
    (($fn5468) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5467);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive5452, p_out);
    panda$core$String* $tmp5470 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest5469 = $tmp5470;
    panda$core$String* $tmp5472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5471, forwardEntryInclusiveTest5469);
    panda$core$String* $tmp5474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5472, &$s5473);
    panda$core$String* $tmp5475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5474, signPrefix5413);
    panda$core$String* $tmp5477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5475, &$s5476);
    panda$core$String* $tmp5478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5477, numberType5294);
    panda$core$String* $tmp5480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5478, &$s5479);
    panda$core$String* $tmp5482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5481, start5312);
    panda$core$String* $tmp5484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5482, &$s5483);
    panda$core$String* $tmp5485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5484, end5354);
    panda$core$String* $tmp5487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5485, &$s5486);
    panda$core$String* $tmp5488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5480, $tmp5487);
    (($fn5489) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5488);
    panda$core$String* $tmp5491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5490, forwardEntryInclusiveTest5469);
    panda$core$String* $tmp5493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5491, &$s5492);
    panda$core$String* $tmp5494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5493, loopStart5399);
    panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5494, &$s5495);
    panda$core$String* $tmp5497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, loopEnd5403);
    panda$core$String* $tmp5499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5497, &$s5498);
    (($fn5500) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5499);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive5454, p_out);
    panda$core$String* $tmp5502 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest5501 = $tmp5502;
    panda$core$String* $tmp5504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5503, forwardEntryExclusiveTest5501);
    panda$core$String* $tmp5506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5504, &$s5505);
    panda$core$String* $tmp5507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5506, signPrefix5413);
    panda$core$String* $tmp5509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5507, &$s5508);
    panda$core$String* $tmp5510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5509, numberType5294);
    panda$core$String* $tmp5512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5510, &$s5511);
    panda$core$String* $tmp5514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5513, start5312);
    panda$core$String* $tmp5516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5514, &$s5515);
    panda$core$String* $tmp5517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5516, end5354);
    panda$core$String* $tmp5519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5517, &$s5518);
    panda$core$String* $tmp5520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5512, $tmp5519);
    (($fn5521) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5520);
    panda$core$String* $tmp5523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5522, forwardEntryExclusiveTest5501);
    panda$core$String* $tmp5525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5523, &$s5524);
    panda$core$String* $tmp5526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5525, loopStart5399);
    panda$core$String* $tmp5528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5526, &$s5527);
    panda$core$String* $tmp5529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5528, loopEnd5403);
    panda$core$String* $tmp5531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5529, &$s5530);
    (($fn5532) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5531);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry5411, p_out);
    panda$core$String* $tmp5534 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5533 = $tmp5534;
    panda$core$String* $tmp5536 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5535 = $tmp5536;
    panda$core$String* $tmp5538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5537, inclusive5389);
    panda$core$String* $tmp5540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5538, &$s5539);
    panda$core$String* $tmp5541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5540, backwardEntryInclusive5533);
    panda$core$String* $tmp5543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5541, &$s5542);
    panda$core$String* $tmp5545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5544, backwardEntryExclusive5535);
    panda$core$String* $tmp5547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5545, &$s5546);
    panda$core$String* $tmp5548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5543, $tmp5547);
    (($fn5549) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5548);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive5533, p_out);
    panda$core$String* $tmp5551 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5550 = $tmp5551;
    panda$core$String* $tmp5553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5552, backwardEntryInclusiveTest5550);
    panda$core$String* $tmp5555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5553, &$s5554);
    panda$core$String* $tmp5556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5555, signPrefix5413);
    panda$core$String* $tmp5558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5556, &$s5557);
    panda$core$String* $tmp5559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5558, numberType5294);
    panda$core$String* $tmp5561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5559, &$s5560);
    panda$core$String* $tmp5563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5562, start5312);
    panda$core$String* $tmp5565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5563, &$s5564);
    panda$core$String* $tmp5566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5565, end5354);
    panda$core$String* $tmp5568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5566, &$s5567);
    panda$core$String* $tmp5569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5561, $tmp5568);
    (($fn5570) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5569);
    panda$core$String* $tmp5572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5571, backwardEntryInclusiveTest5550);
    panda$core$String* $tmp5574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5572, &$s5573);
    panda$core$String* $tmp5575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5574, loopStart5399);
    panda$core$String* $tmp5577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5575, &$s5576);
    panda$core$String* $tmp5578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5577, loopEnd5403);
    panda$core$String* $tmp5580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5578, &$s5579);
    (($fn5581) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5580);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive5535, p_out);
    panda$core$String* $tmp5583 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5582 = $tmp5583;
    panda$core$String* $tmp5585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5584, backwardEntryExclusiveTest5582);
    panda$core$String* $tmp5587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5585, &$s5586);
    panda$core$String* $tmp5588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5587, signPrefix5413);
    panda$core$String* $tmp5590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5588, &$s5589);
    panda$core$String* $tmp5591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5590, numberType5294);
    panda$core$String* $tmp5593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5591, &$s5592);
    panda$core$String* $tmp5595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5594, start5312);
    panda$core$String* $tmp5597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5595, &$s5596);
    panda$core$String* $tmp5598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5597, end5354);
    panda$core$String* $tmp5600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5598, &$s5599);
    panda$core$String* $tmp5601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5593, $tmp5600);
    (($fn5602) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5601);
    panda$core$String* $tmp5604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5603, backwardEntryExclusiveTest5582);
    panda$core$String* $tmp5606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5604, &$s5605);
    panda$core$String* $tmp5607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5606, loopStart5399);
    panda$core$String* $tmp5609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5607, &$s5608);
    panda$core$String* $tmp5610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5609, loopEnd5403);
    panda$core$String* $tmp5612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5610, &$s5611);
    (($fn5613) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5612);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5399, p_out);
    panda$core$String* $tmp5615 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5614 = $tmp5615;
    panda$core$String* $tmp5617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5616, indexValue5614);
    panda$core$String* $tmp5619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5617, &$s5618);
    panda$core$String* $tmp5620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5619, numberType5294);
    panda$core$String* $tmp5622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5620, &$s5621);
    panda$core$String* $tmp5623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5622, numberType5294);
    panda$core$String* $tmp5625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5623, &$s5624);
    panda$core$String* $tmp5626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5625, indexValuePtr5322);
    panda$core$String* $tmp5628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5626, &$s5627);
    (($fn5629) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5628);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block5273, p_out);
    panda$core$Bit $tmp5630 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block5273);
    panda$core$Bit $tmp5631 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5630);
    if ($tmp5631.value) {
    {
        panda$core$String* $tmp5633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5632, loopTest5405);
        panda$core$String* $tmp5635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5633, &$s5634);
        (($fn5636) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5635);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest5405, p_out);
    panda$core$String* $tmp5638 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5637 = $tmp5638;
    panda$core$String* $tmp5640 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5639 = $tmp5640;
    panda$core$String* $tmp5642 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5641 = $tmp5642;
    panda$core$String* $tmp5644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5643, direction5425);
    panda$core$String* $tmp5646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5644, &$s5645);
    panda$core$String* $tmp5647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5646, forwardLabel5639);
    panda$core$String* $tmp5649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5647, &$s5648);
    panda$core$String* $tmp5650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5649, backwardLabel5641);
    panda$core$String* $tmp5652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5650, &$s5651);
    (($fn5653) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5652);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5639, p_out);
    panda$core$String* $tmp5655 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5654 = $tmp5655;
    panda$core$String* $tmp5657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5656, forwardDelta5654);
    panda$core$String* $tmp5659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5657, &$s5658);
    panda$core$String* $tmp5660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5659, numberType5294);
    panda$core$String* $tmp5662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5660, &$s5661);
    panda$core$String* $tmp5663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5662, end5354);
    panda$core$String* $tmp5665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5663, &$s5664);
    panda$core$String* $tmp5666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5665, indexValue5614);
    panda$core$String* $tmp5668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5666, &$s5667);
    (($fn5669) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5668);
    panda$core$String* $tmp5671 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5670 = $tmp5671;
    panda$core$String* $tmp5673 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5672 = $tmp5673;
    panda$core$String* $tmp5675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5674, inclusive5389);
    panda$core$String* $tmp5677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5675, &$s5676);
    panda$core$String* $tmp5678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5677, forwardInclusiveLabel5670);
    panda$core$String* $tmp5680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5678, &$s5679);
    panda$core$String* $tmp5681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5680, forwardExclusiveLabel5672);
    (($fn5682) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5681);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5670, p_out);
    panda$core$String* $tmp5684 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5683 = $tmp5684;
    panda$core$String* $tmp5686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5685, forwardInclusiveTest5683);
    panda$core$String* $tmp5688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5686, &$s5687);
    panda$core$String* $tmp5689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5688, numberType5294);
    panda$core$String* $tmp5691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5689, &$s5690);
    panda$core$String* $tmp5692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5691, forwardDelta5654);
    panda$core$String* $tmp5694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5692, &$s5693);
    panda$core$String* $tmp5695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5694, step5374);
    panda$core$String* $tmp5697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5695, &$s5696);
    (($fn5698) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5697);
    panda$core$String* $tmp5700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5699, forwardInclusiveTest5683);
    panda$core$String* $tmp5702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5700, &$s5701);
    panda$core$String* $tmp5703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5702, loopInc5637);
    panda$core$String* $tmp5705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5703, &$s5704);
    panda$core$String* $tmp5706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5705, loopEnd5403);
    panda$core$String* $tmp5708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5706, &$s5707);
    (($fn5709) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5708);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5672, p_out);
    panda$core$String* $tmp5711 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5710 = $tmp5711;
    panda$core$String* $tmp5713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5712, forwardExclusiveTest5710);
    panda$core$String* $tmp5715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5713, &$s5714);
    panda$core$String* $tmp5716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5715, numberType5294);
    panda$core$String* $tmp5718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5716, &$s5717);
    panda$core$String* $tmp5719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5718, forwardDelta5654);
    panda$core$String* $tmp5721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5719, &$s5720);
    panda$core$String* $tmp5722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5721, step5374);
    panda$core$String* $tmp5724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5722, &$s5723);
    (($fn5725) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5724);
    panda$core$String* $tmp5727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5726, forwardExclusiveTest5710);
    panda$core$String* $tmp5729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5727, &$s5728);
    panda$core$String* $tmp5730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5729, loopInc5637);
    panda$core$String* $tmp5732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5730, &$s5731);
    panda$core$String* $tmp5733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5732, loopEnd5403);
    panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5733, &$s5734);
    (($fn5736) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5735);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5641, p_out);
    panda$core$String* $tmp5738 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5737 = $tmp5738;
    panda$core$String* $tmp5740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5739, backwardDelta5737);
    panda$core$String* $tmp5742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5740, &$s5741);
    panda$core$String* $tmp5743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5742, numberType5294);
    panda$core$String* $tmp5745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5743, &$s5744);
    panda$core$String* $tmp5746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5745, indexValue5614);
    panda$core$String* $tmp5748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5746, &$s5747);
    panda$core$String* $tmp5749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5748, end5354);
    panda$core$String* $tmp5751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5749, &$s5750);
    (($fn5752) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5751);
    panda$core$String* $tmp5754 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5753 = $tmp5754;
    panda$core$String* $tmp5756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5755, negStep5753);
    panda$core$String* $tmp5758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5756, &$s5757);
    panda$core$String* $tmp5759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5758, numberType5294);
    panda$core$String* $tmp5761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5759, &$s5760);
    panda$core$String* $tmp5762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5761, step5374);
    panda$core$String* $tmp5764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5762, &$s5763);
    (($fn5765) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5764);
    panda$core$String* $tmp5767 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5766 = $tmp5767;
    panda$core$String* $tmp5769 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5768 = $tmp5769;
    panda$core$String* $tmp5771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5770, inclusive5389);
    panda$core$String* $tmp5773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5771, &$s5772);
    panda$core$String* $tmp5774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5773, backwardInclusiveLabel5766);
    panda$core$String* $tmp5776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5774, &$s5775);
    panda$core$String* $tmp5777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5776, backwardExclusiveLabel5768);
    (($fn5778) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5777);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5766, p_out);
    panda$core$String* $tmp5780 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5779 = $tmp5780;
    panda$core$String* $tmp5782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5781, backwardInclusiveTest5779);
    panda$core$String* $tmp5784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5782, &$s5783);
    panda$core$String* $tmp5785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5784, numberType5294);
    panda$core$String* $tmp5787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5785, &$s5786);
    panda$core$String* $tmp5788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5787, backwardDelta5737);
    panda$core$String* $tmp5790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5788, &$s5789);
    panda$core$String* $tmp5791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5790, negStep5753);
    (($fn5792) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5791);
    panda$core$String* $tmp5794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5793, backwardInclusiveTest5779);
    panda$core$String* $tmp5796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5794, &$s5795);
    panda$core$String* $tmp5797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5796, loopInc5637);
    panda$core$String* $tmp5799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5797, &$s5798);
    panda$core$String* $tmp5800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5799, loopEnd5403);
    panda$core$String* $tmp5802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5800, &$s5801);
    (($fn5803) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5802);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5768, p_out);
    panda$core$String* $tmp5805 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5804 = $tmp5805;
    panda$core$String* $tmp5807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5806, backwardExclusiveTest5804);
    panda$core$String* $tmp5809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5807, &$s5808);
    panda$core$String* $tmp5810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5809, numberType5294);
    panda$core$String* $tmp5812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5810, &$s5811);
    panda$core$String* $tmp5813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5812, backwardDelta5737);
    panda$core$String* $tmp5815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5813, &$s5814);
    panda$core$String* $tmp5816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5815, negStep5753);
    (($fn5817) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5816);
    panda$core$String* $tmp5819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5818, backwardExclusiveTest5804);
    panda$core$String* $tmp5821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5819, &$s5820);
    panda$core$String* $tmp5822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5821, loopInc5637);
    panda$core$String* $tmp5824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5822, &$s5823);
    panda$core$String* $tmp5825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5824, loopEnd5403);
    panda$core$String* $tmp5827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5825, &$s5826);
    (($fn5828) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5827);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5637, p_out);
    panda$core$String* $tmp5830 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5829 = $tmp5830;
    panda$core$String* $tmp5832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5831, inc5829);
    panda$core$String* $tmp5834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5832, &$s5833);
    panda$core$String* $tmp5835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5834, numberType5294);
    panda$core$String* $tmp5837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5835, &$s5836);
    panda$core$String* $tmp5838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5837, indexValue5614);
    panda$core$String* $tmp5840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5838, &$s5839);
    panda$core$String* $tmp5841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5840, step5374);
    panda$core$String* $tmp5843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5841, &$s5842);
    (($fn5844) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5843);
    panda$core$String* $tmp5846 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5845 = $tmp5846;
    panda$core$String* $tmp5848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5847, incStruct5845);
    panda$core$String* $tmp5850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5848, &$s5849);
    panda$core$String* $tmp5851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5850, indexType5280);
    panda$core$String* $tmp5853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5851, &$s5852);
    panda$core$String* $tmp5854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5853, numberType5294);
    panda$core$String* $tmp5856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5854, &$s5855);
    (($fn5857) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5856);
    panda$core$String* $tmp5859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5858, numberType5294);
    panda$core$String* $tmp5861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5859, &$s5860);
    panda$core$String* $tmp5862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5861, inc5829);
    panda$core$String* $tmp5864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5862, &$s5863);
    (($fn5865) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5864);
    panda$core$String* $tmp5867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5866, indexType5280);
    panda$core$String* $tmp5869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5867, &$s5868);
    panda$core$String* $tmp5870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5869, incStruct5845);
    panda$core$String* $tmp5872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5870, &$s5871);
    panda$core$String* $tmp5873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5872, indexType5280);
    panda$core$String* $tmp5875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5873, &$s5874);
    panda$core$String* $tmp5876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5875, index5302);
    panda$core$String* $tmp5878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5876, &$s5877);
    (($fn5879) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5878);
    panda$core$String* $tmp5881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5880, loopStart5399);
    panda$core$String* $tmp5883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5881, &$s5882);
    (($fn5884) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5883);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5403, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp5885 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5886 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5885)->type);
    if ($tmp5886.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5887 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5888 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5887)->type);
    if ($tmp5888.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5895;
    panda$core$String* loopBody5897;
    panda$core$String* loopEnd5899;
    panda$core$String* test5908;
    panda$core$String* testBit5911;
    panda$core$Bit $tmp5889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5889.value);
    panda$core$Int64 $tmp5890 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5890, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5891.value);
    panda$core$Object* $tmp5892 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5893 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5894 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5892)->type, $tmp5893);
    PANDA_ASSERT($tmp5894.value);
    panda$core$String* $tmp5896 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5895 = $tmp5896;
    panda$core$String* $tmp5898 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5897 = $tmp5898;
    panda$core$String* $tmp5900 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5899 = $tmp5900;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5901 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5901->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5901->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5901, ((panda$core$String*) p_w->payload), loopEnd5899, loopStart5895);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5901));
    panda$core$String* $tmp5904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5903, loopStart5895);
    panda$core$String* $tmp5906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5904, &$s5905);
    (($fn5907) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5906);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5895, p_out);
    panda$core$Object* $tmp5909 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5910 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5909), p_out);
    test5908 = $tmp5910;
    panda$core$String* $tmp5912 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5911 = $tmp5912;
    panda$core$String* $tmp5914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5913, testBit5911);
    panda$core$String* $tmp5916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5914, &$s5915);
    panda$core$String* $tmp5917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5916, test5908);
    panda$core$String* $tmp5919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5917, &$s5918);
    (($fn5920) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5919);
    panda$core$String* $tmp5922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5921, testBit5911);
    panda$core$String* $tmp5924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5922, &$s5923);
    panda$core$String* $tmp5925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5924, loopBody5897);
    panda$core$String* $tmp5927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5925, &$s5926);
    panda$core$String* $tmp5928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5927, loopEnd5899);
    panda$core$String* $tmp5930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5928, &$s5929);
    (($fn5931) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5930);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5897, p_out);
    panda$core$Object* $tmp5932 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5932), p_out);
    panda$core$Object* $tmp5933 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5934 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5933));
    panda$core$Bit $tmp5935 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5934);
    if ($tmp5935.value) {
    {
        panda$core$String* $tmp5937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5936, loopStart5895);
        panda$core$String* $tmp5939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5937, &$s5938);
        (($fn5940) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5939);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5899, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5947;
    panda$core$String* loopBody5949;
    panda$core$String* loopEnd5951;
    panda$core$String* test5960;
    panda$core$String* testBit5963;
    panda$core$Bit $tmp5941 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5941.value);
    panda$core$Int64 $tmp5942 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5942, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5943.value);
    panda$core$Object* $tmp5944 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5945 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5946 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5944)->type, $tmp5945);
    PANDA_ASSERT($tmp5946.value);
    panda$core$String* $tmp5948 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5947 = $tmp5948;
    panda$core$String* $tmp5950 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5949 = $tmp5950;
    panda$core$String* $tmp5952 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5951 = $tmp5952;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5953 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5953->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5953->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5953, ((panda$core$String*) p_d->payload), loopEnd5951, loopStart5947);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5953));
    panda$core$String* $tmp5956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5955, loopBody5949);
    panda$core$String* $tmp5958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5956, &$s5957);
    (($fn5959) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5958);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5947, p_out);
    panda$core$Object* $tmp5961 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5962 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5961), p_out);
    test5960 = $tmp5962;
    panda$core$String* $tmp5964 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5963 = $tmp5964;
    panda$core$String* $tmp5966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5965, testBit5963);
    panda$core$String* $tmp5968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5966, &$s5967);
    panda$core$String* $tmp5969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5968, test5960);
    panda$core$String* $tmp5971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5969, &$s5970);
    (($fn5972) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5971);
    panda$core$String* $tmp5974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5973, testBit5963);
    panda$core$String* $tmp5976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5974, &$s5975);
    panda$core$String* $tmp5977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5976, loopBody5949);
    panda$core$String* $tmp5979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5977, &$s5978);
    panda$core$String* $tmp5980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5979, loopEnd5951);
    panda$core$String* $tmp5982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5980, &$s5981);
    (($fn5983) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5982);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5949, p_out);
    panda$core$Object* $tmp5984 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5984), p_out);
    panda$core$Object* $tmp5985 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5986 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5985));
    panda$core$Bit $tmp5987 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5986);
    if ($tmp5987.value) {
    {
        panda$core$String* $tmp5989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5988, loopStart5947);
        panda$core$String* $tmp5991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5989, &$s5990);
        (($fn5992) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5991);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5951, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5996;
    panda$core$String* loopEnd5998;
    panda$core$Bit $tmp5993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5993.value);
    panda$core$Int64 $tmp5994 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5995 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5994, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5995.value);
    panda$core$String* $tmp5997 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5996 = $tmp5997;
    panda$core$String* $tmp5999 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5998 = $tmp5999;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6000 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp6000->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp6000->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp6000, ((panda$core$String*) p_l->payload), loopEnd5998, loopStart5996);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp6000));
    panda$core$String* $tmp6003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6002, loopStart5996);
    panda$core$String* $tmp6005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6003, &$s6004);
    (($fn6006) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6005);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5996, p_out);
    panda$core$Object* $tmp6007 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp6007), p_out);
    panda$core$Object* $tmp6008 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp6009 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp6008));
    panda$core$Bit $tmp6010 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6009);
    if ($tmp6010.value) {
    {
        panda$core$String* $tmp6012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6011, loopStart5996);
        panda$core$String* $tmp6014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6012, &$s6013);
        (($fn6015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6014);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5998, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v6016;
    panda$core$String* ref6027;
    switch (p_target->kind.value) {
        case 1016:
        {
            v6016 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp6018 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v6016);
            panda$core$String* $tmp6019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6017, $tmp6018);
            panda$core$String* $tmp6021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6019, &$s6020);
            panda$core$String* $tmp6022 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v6016->type);
            panda$core$String* $tmp6023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6021, $tmp6022);
            panda$core$String* $tmp6025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6023, &$s6024);
            (($fn6026) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp6025);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp6028 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref6027 = $tmp6028;
                panda$core$String* $tmp6030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6029, ref6027);
                panda$core$String* $tmp6032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6030, &$s6031);
                panda$core$String* $tmp6033 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v6016->type);
                panda$core$String* $tmp6034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6032, $tmp6033);
                panda$core$String* $tmp6036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6034, &$s6035);
                panda$core$String* $tmp6037 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v6016);
                panda$core$String* $tmp6038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6036, $tmp6037);
                panda$core$String* $tmp6040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6038, &$s6039);
                (($fn6041) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6040);
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
    panda$collections$Iterator* decl$Iter6055;
    org$pandalanguage$pandac$IRNode* decl6067;
    panda$core$Bit $tmp6045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp6044 = $tmp6045.value;
    if ($tmp6044) goto $l6046;
    panda$core$Bit $tmp6047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp6044 = $tmp6047.value;
    $l6046:;
    panda$core$Bit $tmp6048 = { $tmp6044 };
    bool $tmp6043 = $tmp6048.value;
    if ($tmp6043) goto $l6049;
    panda$core$Bit $tmp6050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp6043 = $tmp6050.value;
    $l6049:;
    panda$core$Bit $tmp6051 = { $tmp6043 };
    bool $tmp6042 = $tmp6051.value;
    if ($tmp6042) goto $l6052;
    panda$core$Bit $tmp6053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp6042 = $tmp6053.value;
    $l6052:;
    panda$core$Bit $tmp6054 = { $tmp6042 };
    PANDA_ASSERT($tmp6054.value);
    {
        ITable* $tmp6056 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp6056->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6056 = $tmp6056->next;
        }
        $fn6058 $tmp6057 = $tmp6056->methods[0];
        panda$collections$Iterator* $tmp6059 = $tmp6057(((panda$collections$Iterable*) p_v->children));
        decl$Iter6055 = $tmp6059;
        $l6060:;
        ITable* $tmp6062 = decl$Iter6055->$class->itable;
        while ($tmp6062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6062 = $tmp6062->next;
        }
        $fn6064 $tmp6063 = $tmp6062->methods[0];
        panda$core$Bit $tmp6065 = $tmp6063(decl$Iter6055);
        panda$core$Bit $tmp6066 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6065);
        if (!$tmp6066.value) goto $l6061;
        {
            ITable* $tmp6068 = decl$Iter6055->$class->itable;
            while ($tmp6068->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6068 = $tmp6068->next;
            }
            $fn6070 $tmp6069 = $tmp6068->methods[1];
            panda$core$Object* $tmp6071 = $tmp6069(decl$Iter6055);
            decl6067 = ((org$pandalanguage$pandac$IRNode*) $tmp6071);
            panda$core$Bit $tmp6072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl6067->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp6072.value);
            panda$core$Int64 $tmp6073 = panda$collections$Array$get_count$R$panda$core$Int64(decl6067->children);
            panda$core$Bit $tmp6074 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6073, ((panda$core$Int64) { 1 }));
            if ($tmp6074.value) {
            {
                panda$core$Object* $tmp6075 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6067->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp6076 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6067->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp6075), ((org$pandalanguage$pandac$IRNode*) $tmp6076), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp6077 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6067->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp6077), NULL, p_out);
            }
            }
        }
        goto $l6060;
        $l6061:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base6081;
    panda$core$String* ptr6084;
    org$pandalanguage$pandac$ClassDecl* cl6086;
    panda$collections$ListView* fields6089;
    panda$core$Int64 index6091;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6092;
    panda$core$String* result6153;
    panda$core$String* reused6156;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp6078 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp6079 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp6078, p_out);
            return $tmp6079;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp6080 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp6080;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp6082 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6083 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6082), p_out);
            base6081 = $tmp6083;
            panda$core$String* $tmp6085 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr6084 = $tmp6085;
            panda$core$Object* $tmp6087 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp6088 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6087)->type);
            cl6086 = $tmp6088;
            PANDA_ASSERT(((panda$core$Bit) { cl6086 != NULL }).value);
            panda$collections$ListView* $tmp6090 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl6086);
            fields6089 = $tmp6090;
            index6091 = ((panda$core$Int64) { -1 });
            ITable* $tmp6093 = ((panda$collections$CollectionView*) fields6089)->$class->itable;
            while ($tmp6093->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp6093 = $tmp6093->next;
            }
            $fn6095 $tmp6094 = $tmp6093->methods[0];
            panda$core$Int64 $tmp6096 = $tmp6094(((panda$collections$CollectionView*) fields6089));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6092, ((panda$core$Int64) { 0 }), $tmp6096, ((panda$core$Bit) { false }));
            int64_t $tmp6098 = $tmp6092.min.value;
            panda$core$Int64 i6097 = { $tmp6098 };
            int64_t $tmp6100 = $tmp6092.max.value;
            bool $tmp6101 = $tmp6092.inclusive.value;
            bool $tmp6108 = 1 > 0;
            if ($tmp6108) goto $l6106; else goto $l6107;
            $l6106:;
            if ($tmp6101) goto $l6109; else goto $l6110;
            $l6109:;
            if ($tmp6098 <= $tmp6100) goto $l6102; else goto $l6104;
            $l6110:;
            if ($tmp6098 < $tmp6100) goto $l6102; else goto $l6104;
            $l6107:;
            if ($tmp6101) goto $l6111; else goto $l6112;
            $l6111:;
            if ($tmp6098 >= $tmp6100) goto $l6102; else goto $l6104;
            $l6112:;
            if ($tmp6098 > $tmp6100) goto $l6102; else goto $l6104;
            $l6102:;
            {
                ITable* $tmp6114 = fields6089->$class->itable;
                while ($tmp6114->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp6114 = $tmp6114->next;
                }
                $fn6116 $tmp6115 = $tmp6114->methods[0];
                panda$core$Object* $tmp6117 = $tmp6115(fields6089, i6097);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp6117))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name) }).value) {
                {
                    index6091 = i6097;
                    goto $l6104;
                }
                }
            }
            $l6105:;
            if ($tmp6108) goto $l6119; else goto $l6120;
            $l6119:;
            int64_t $tmp6121 = $tmp6100 - i6097.value;
            if ($tmp6101) goto $l6122; else goto $l6123;
            $l6122:;
            if ($tmp6121 >= 1) goto $l6118; else goto $l6104;
            $l6123:;
            if ($tmp6121 > 1) goto $l6118; else goto $l6104;
            $l6120:;
            int64_t $tmp6125 = i6097.value - $tmp6100;
            if ($tmp6101) goto $l6126; else goto $l6127;
            $l6126:;
            if ($tmp6125 >= -1) goto $l6118; else goto $l6104;
            $l6127:;
            if ($tmp6125 > -1) goto $l6118; else goto $l6104;
            $l6118:;
            i6097.value += 1;
            goto $l6102;
            $l6104:;
            panda$core$Bit $tmp6129 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index6091, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp6129.value);
            panda$core$String* $tmp6131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6130, ptr6084);
            panda$core$String* $tmp6133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6131, &$s6132);
            org$pandalanguage$pandac$Type* $tmp6134 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl6086);
            panda$core$String* $tmp6135 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6134);
            panda$core$String* $tmp6136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6133, $tmp6135);
            panda$core$String* $tmp6138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6136, &$s6137);
            org$pandalanguage$pandac$Type* $tmp6140 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl6086);
            panda$core$String* $tmp6141 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6140);
            panda$core$String* $tmp6142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6139, $tmp6141);
            panda$core$String* $tmp6144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6142, &$s6143);
            panda$core$String* $tmp6145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6144, base6081);
            panda$core$String* $tmp6147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6145, &$s6146);
            panda$core$String* $tmp6148 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6147, ((panda$core$Object*) wrap_panda$core$Int64(index6091)));
            panda$core$String* $tmp6150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6148, &$s6149);
            panda$core$String* $tmp6151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6138, $tmp6150);
            (($fn6152) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6151);
            return ptr6084;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp6154 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6155 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6154), p_out);
            result6153 = $tmp6155;
            panda$core$String* $tmp6157 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused6156 = $tmp6157;
            panda$core$String* $tmp6159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6158, reused6156);
            panda$core$String* $tmp6161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6159, &$s6160);
            panda$core$String* $tmp6162 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp6163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6161, $tmp6162);
            panda$core$String* $tmp6165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6163, &$s6164);
            panda$core$String* $tmp6167 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp6168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6166, $tmp6167);
            panda$core$String* $tmp6170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6168, &$s6169);
            panda$core$String* $tmp6171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6170, result6153);
            panda$core$String* $tmp6173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6171, &$s6172);
            panda$core$String* $tmp6174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6165, $tmp6173);
            (($fn6175) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6174);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused6156));
            return result6153;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue6179;
    panda$core$String* value6191;
    panda$core$String* t6192;
    panda$core$Int64 op6195;
    panda$core$String* right6197;
    panda$core$Bit $tmp6176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp6176.value);
    panda$core$Int64 $tmp6177 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6177, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp6178.value);
    panda$core$Object* $tmp6181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6182 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6181)->type);
    panda$core$String* $tmp6183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6180, $tmp6182);
    panda$core$String* $tmp6185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6183, &$s6184);
    panda$core$Object* $tmp6186 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6187 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6186), p_out);
    panda$core$String* $tmp6188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6185, $tmp6187);
    panda$core$String* $tmp6190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6188, &$s6189);
    lvalue6179 = $tmp6190;
    panda$core$Object* $tmp6193 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6194 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6193)->type);
    t6192 = $tmp6194;
    op6195 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp6196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op6195, ((panda$core$Int64) { 73 }));
    if ($tmp6196.value) {
    {
        panda$core$Object* $tmp6198 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6199 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6198), p_out);
        right6197 = $tmp6199;
        panda$core$String* $tmp6201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6200, t6192);
        panda$core$String* $tmp6203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6201, &$s6202);
        panda$core$String* $tmp6204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6203, right6197);
        panda$core$String* $tmp6206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6204, &$s6205);
        value6191 = $tmp6206;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp6208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6207, value6191);
    panda$core$String* $tmp6210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6208, &$s6209);
    panda$core$String* $tmp6211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6210, lvalue6179);
    panda$core$String* $tmp6213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6211, &$s6212);
    (($fn6214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6213);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline6219;
    panda$core$String* result6221;
    panda$core$Int64 $tmp6215 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp6216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6215, ((panda$core$Int64) { 1 }));
    if ($tmp6216.value) {
    {
        panda$core$Int64 $tmp6217 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp6218 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6217, ((panda$core$Int64) { 0 }));
        if ($tmp6218.value) {
        {
            panda$core$Object* $tmp6220 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline6219 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp6220);
            panda$core$Object* $tmp6222 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6223 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6222), p_out);
            result6221 = $tmp6223;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp6224 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp6224->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp6224->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp6224, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result6221));
            panda$collections$Array$add$panda$collections$Array$T(inline6219->returns, ((panda$core$Object*) $tmp6224));
            panda$core$String* $tmp6227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6226, inline6219->exitLabel);
            panda$core$String* $tmp6229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6227, &$s6228);
            (($fn6230) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6229);
        }
        }
        else {
        {
            panda$core$Object* $tmp6232 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6233 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6232), p_out);
            panda$core$String* $tmp6234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6231, $tmp6233);
            panda$core$String* $tmp6236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6234, &$s6235);
            (($fn6237) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6236);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp6238 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp6239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6238, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp6239.value);
        panda$core$Int64 $tmp6240 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp6241 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6240, ((panda$core$Int64) { 0 }));
        if ($tmp6241.value) {
        {
            panda$core$Object* $tmp6243 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp6244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6242, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp6243)->exitLabel);
            panda$core$String* $tmp6246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6244, &$s6245);
            (($fn6247) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6246);
        }
        }
        else {
        {
            (($fn6249) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6248);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp6253;
    panda$core$Int64 $tmp6250 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp6251 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6250, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp6251.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp6252 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6252);
    }
    }
    panda$core$Int64 $tmp6254 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6253, ((panda$core$Int64) { 0 }), $tmp6254, ((panda$core$Bit) { false }));
    int64_t $tmp6256 = $tmp6253.min.value;
    panda$core$Int64 i6255 = { $tmp6256 };
    int64_t $tmp6258 = $tmp6253.max.value;
    bool $tmp6259 = $tmp6253.inclusive.value;
    bool $tmp6266 = 1 > 0;
    if ($tmp6266) goto $l6264; else goto $l6265;
    $l6264:;
    if ($tmp6259) goto $l6267; else goto $l6268;
    $l6267:;
    if ($tmp6256 <= $tmp6258) goto $l6260; else goto $l6262;
    $l6268:;
    if ($tmp6256 < $tmp6258) goto $l6260; else goto $l6262;
    $l6265:;
    if ($tmp6259) goto $l6269; else goto $l6270;
    $l6269:;
    if ($tmp6256 >= $tmp6258) goto $l6260; else goto $l6262;
    $l6270:;
    if ($tmp6256 > $tmp6258) goto $l6260; else goto $l6262;
    $l6260:;
    {
        panda$core$Object* $tmp6273 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i6255);
        bool $tmp6272 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6273)->loopLabel != NULL }).value;
        if (!$tmp6272) goto $l6274;
        panda$core$Object* $tmp6275 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i6255);
        panda$core$Bit $tmp6276 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6275)->loopLabel, p_name);
        $tmp6272 = $tmp6276.value;
        $l6274:;
        panda$core$Bit $tmp6277 = { $tmp6272 };
        if ($tmp6277.value) {
        {
            panda$core$Object* $tmp6278 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i6255);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6278);
        }
        }
    }
    $l6263:;
    if ($tmp6266) goto $l6280; else goto $l6281;
    $l6280:;
    int64_t $tmp6282 = $tmp6258 - i6255.value;
    if ($tmp6259) goto $l6283; else goto $l6284;
    $l6283:;
    if ($tmp6282 >= 1) goto $l6279; else goto $l6262;
    $l6284:;
    if ($tmp6282 > 1) goto $l6279; else goto $l6262;
    $l6281:;
    int64_t $tmp6286 = i6255.value - $tmp6258;
    if ($tmp6259) goto $l6287; else goto $l6288;
    $l6287:;
    if ($tmp6286 >= -1) goto $l6279; else goto $l6262;
    $l6288:;
    if ($tmp6286 > -1) goto $l6279; else goto $l6262;
    $l6279:;
    i6255.value += 1;
    goto $l6260;
    $l6262:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6290;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6291 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc6290 = $tmp6291;
    panda$core$String* $tmp6293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6292, desc6290->breakLabel);
    panda$core$String* $tmp6295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6293, &$s6294);
    (($fn6296) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6295);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6297;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6298 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc6297 = $tmp6298;
    panda$core$String* $tmp6300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6299, desc6297->continueLabel);
    panda$core$String* $tmp6302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6300, &$s6301);
    (($fn6303) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6302);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test6313;
    panda$core$String* ifTrue6316;
    panda$core$String* ifFalse6318;
    panda$core$String* name6331;
    panda$core$String* path6332;
    panda$core$String$Index$nullable index6334;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp6337;
    panda$core$String* nameRef6339;
    panda$core$String* line6341;
    panda$core$String* msg6346;
    panda$collections$Iterator* m$Iter6353;
    org$pandalanguage$pandac$MethodDecl* m6367;
    panda$core$Bit $tmp6304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp6304.value);
    panda$core$Int64 $tmp6306 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6306, ((panda$core$Int64) { 1 }));
    bool $tmp6305 = $tmp6307.value;
    if ($tmp6305) goto $l6308;
    panda$core$Int64 $tmp6309 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6309, ((panda$core$Int64) { 2 }));
    $tmp6305 = $tmp6310.value;
    $l6308:;
    panda$core$Bit $tmp6311 = { $tmp6305 };
    PANDA_ASSERT($tmp6311.value);
    panda$core$Bit $tmp6312 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp6312.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp6314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6315 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6314), p_out);
    test6313 = $tmp6315;
    panda$core$String* $tmp6317 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue6316 = $tmp6317;
    panda$core$String* $tmp6319 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse6318 = $tmp6319;
    panda$core$String* $tmp6321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6320, test6313);
    panda$core$String* $tmp6323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6321, &$s6322);
    panda$core$String* $tmp6324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6323, ifTrue6316);
    panda$core$String* $tmp6326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6324, &$s6325);
    panda$core$String* $tmp6327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6326, ifFalse6318);
    panda$core$String* $tmp6329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6327, &$s6328);
    (($fn6330) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6329);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse6318, p_out);
    panda$core$Object* $tmp6333 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path6332 = ((org$pandalanguage$pandac$ClassDecl*) $tmp6333)->source->path;
    panda$core$String$Index$nullable $tmp6336 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path6332, &$s6335);
    index6334 = $tmp6336;
    if (((panda$core$Bit) { !index6334.nonnull }).value) {
    {
        name6331 = path6332;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp6337, index6334, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp6338 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path6332, $tmp6337);
        name6331 = $tmp6338;
    }
    }
    panda$core$String* $tmp6340 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name6331, p_out);
    nameRef6339 = $tmp6340;
    panda$core$String* $tmp6343 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s6342, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp6345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6343, &$s6344);
    line6341 = $tmp6345;
    panda$core$Int64 $tmp6347 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6347, ((panda$core$Int64) { 2 }));
    if ($tmp6348.value) {
    {
        panda$core$Object* $tmp6349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6350 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6349), p_out);
        msg6346 = $tmp6350;
    }
    }
    else {
    {
        msg6346 = NULL;
    }
    }
    (($fn6352) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s6351);
    {
        org$pandalanguage$pandac$Type* $tmp6354 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp6355 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp6354);
        ITable* $tmp6356 = ((panda$collections$Iterable*) $tmp6355->methods)->$class->itable;
        while ($tmp6356->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6356 = $tmp6356->next;
        }
        $fn6358 $tmp6357 = $tmp6356->methods[0];
        panda$collections$Iterator* $tmp6359 = $tmp6357(((panda$collections$Iterable*) $tmp6355->methods));
        m$Iter6353 = $tmp6359;
        $l6360:;
        ITable* $tmp6362 = m$Iter6353->$class->itable;
        while ($tmp6362->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6362 = $tmp6362->next;
        }
        $fn6364 $tmp6363 = $tmp6362->methods[0];
        panda$core$Bit $tmp6365 = $tmp6363(m$Iter6353);
        panda$core$Bit $tmp6366 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6365);
        if (!$tmp6366.value) goto $l6361;
        {
            ITable* $tmp6368 = m$Iter6353->$class->itable;
            while ($tmp6368->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6368 = $tmp6368->next;
            }
            $fn6370 $tmp6369 = $tmp6368->methods[1];
            panda$core$Object* $tmp6371 = $tmp6369(m$Iter6353);
            m6367 = ((org$pandalanguage$pandac$MethodDecl*) $tmp6371);
            panda$core$Bit $tmp6373 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m6367)->name, &$s6372);
            if ($tmp6373.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m6367);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m6367);
            }
            }
        }
        goto $l6360;
        $l6361:;
    }
    if (((panda$core$Bit) { msg6346 != NULL }).value) {
    {
        panda$core$String* $tmp6376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6374, &$s6375);
        (($fn6377) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6376);
    }
    }
    else {
    {
        (($fn6379) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s6378);
    }
    }
    panda$core$String* $tmp6381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6380, nameRef6339);
    panda$core$String* $tmp6383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6381, &$s6382);
    panda$core$String* $tmp6384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6383, line6341);
    panda$core$String* $tmp6386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6384, &$s6385);
    (($fn6387) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6386);
    if (((panda$core$Bit) { msg6346 != NULL }).value) {
    {
        panda$core$String* $tmp6389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6388, msg6346);
        panda$core$String* $tmp6391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6389, &$s6390);
        (($fn6392) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6391);
    }
    }
    (($fn6394) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6393);
    (($fn6396) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6395);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue6316, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* valueStruct6398;
    org$pandalanguage$pandac$ClassDecl* numberClass6401;
    panda$core$String* value6404;
    org$pandalanguage$pandac$FieldDecl* f6414;
    panda$core$String* switchType6417;
    panda$core$String* endLabel6427;
    panda$collections$Array* whenLabels6429;
    panda$core$String* otherwiseLabel6432;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6443;
    org$pandalanguage$pandac$IRNode* w6462;
    panda$core$String* label6466;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6468;
    panda$core$UInt64 number6488;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6526;
    org$pandalanguage$pandac$IRNode* w6545;
    org$pandalanguage$pandac$IRNode* block6547;
    panda$core$Bit $tmp6397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp6397.value);
    panda$core$Object* $tmp6399 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6400 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6399), p_out);
    valueStruct6398 = $tmp6400;
    panda$core$Object* $tmp6402 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp6403 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6402)->type);
    numberClass6401 = $tmp6403;
    panda$core$String* $tmp6405 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value6404 = $tmp6405;
    panda$core$String* $tmp6407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6406, value6404);
    panda$core$String* $tmp6409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6407, &$s6408);
    panda$core$String* $tmp6410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6409, valueStruct6398);
    panda$core$String* $tmp6412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6410, &$s6411);
    (($fn6413) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6412);
    org$pandalanguage$pandac$Symbol* $tmp6416 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass6401->symbolTable, &$s6415);
    f6414 = ((org$pandalanguage$pandac$FieldDecl*) $tmp6416);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f6414);
    panda$core$String* $tmp6418 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f6414->type);
    switchType6417 = $tmp6418;
    panda$core$String* $tmp6420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6419, switchType6417);
    panda$core$String* $tmp6422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6420, &$s6421);
    panda$core$String* $tmp6423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6422, value6404);
    panda$core$String* $tmp6425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6423, &$s6424);
    (($fn6426) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6425);
    panda$core$String* $tmp6428 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel6427 = $tmp6428;
    panda$collections$Array* $tmp6430 = (panda$collections$Array*) malloc(40);
    $tmp6430->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6430->refCount.value = 1;
    panda$collections$Array$init($tmp6430);
    whenLabels6429 = $tmp6430;
    panda$core$Int64 $tmp6433 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp6434 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6433, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp6435 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp6434);
    panda$core$Bit $tmp6436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp6435)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp6436.value) {
    {
        panda$core$String* $tmp6437 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel6432 = $tmp6437;
    }
    }
    else {
    {
        otherwiseLabel6432 = endLabel6427;
    }
    }
    panda$core$String* $tmp6439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6438, otherwiseLabel6432);
    panda$core$String* $tmp6441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6439, &$s6440);
    (($fn6442) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6441);
    panda$core$Int64 $tmp6444 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6443, ((panda$core$Int64) { 1 }), $tmp6444, ((panda$core$Bit) { false }));
    int64_t $tmp6446 = $tmp6443.min.value;
    panda$core$Int64 i6445 = { $tmp6446 };
    int64_t $tmp6448 = $tmp6443.max.value;
    bool $tmp6449 = $tmp6443.inclusive.value;
    bool $tmp6456 = 1 > 0;
    if ($tmp6456) goto $l6454; else goto $l6455;
    $l6454:;
    if ($tmp6449) goto $l6457; else goto $l6458;
    $l6457:;
    if ($tmp6446 <= $tmp6448) goto $l6450; else goto $l6452;
    $l6458:;
    if ($tmp6446 < $tmp6448) goto $l6450; else goto $l6452;
    $l6455:;
    if ($tmp6449) goto $l6459; else goto $l6460;
    $l6459:;
    if ($tmp6446 >= $tmp6448) goto $l6450; else goto $l6452;
    $l6460:;
    if ($tmp6446 > $tmp6448) goto $l6450; else goto $l6452;
    $l6450:;
    {
        panda$core$Object* $tmp6463 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i6445);
        w6462 = ((org$pandalanguage$pandac$IRNode*) $tmp6463);
        panda$core$Bit $tmp6464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6462->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp6464.value) {
        {
            goto $l6453;
        }
        }
        panda$core$Bit $tmp6465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6462->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp6465.value);
        panda$core$String* $tmp6467 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label6466 = $tmp6467;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels6429, ((panda$core$Object*) label6466));
        panda$core$Int64 $tmp6469 = panda$collections$Array$get_count$R$panda$core$Int64(w6462->children);
        panda$core$Int64 $tmp6470 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6469, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6468, ((panda$core$Int64) { 0 }), $tmp6470, ((panda$core$Bit) { false }));
        int64_t $tmp6472 = $tmp6468.min.value;
        panda$core$Int64 i6471 = { $tmp6472 };
        int64_t $tmp6474 = $tmp6468.max.value;
        bool $tmp6475 = $tmp6468.inclusive.value;
        bool $tmp6482 = 1 > 0;
        if ($tmp6482) goto $l6480; else goto $l6481;
        $l6480:;
        if ($tmp6475) goto $l6483; else goto $l6484;
        $l6483:;
        if ($tmp6472 <= $tmp6474) goto $l6476; else goto $l6478;
        $l6484:;
        if ($tmp6472 < $tmp6474) goto $l6476; else goto $l6478;
        $l6481:;
        if ($tmp6475) goto $l6485; else goto $l6486;
        $l6485:;
        if ($tmp6472 >= $tmp6474) goto $l6476; else goto $l6478;
        $l6486:;
        if ($tmp6472 > $tmp6474) goto $l6476; else goto $l6478;
        $l6476:;
        {
            panda$core$Object* $tmp6489 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w6462->children, i6471);
            panda$core$UInt64 $tmp6490 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6489));
            number6488 = $tmp6490;
            panda$core$String* $tmp6492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6491, switchType6417);
            panda$core$String* $tmp6494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6492, &$s6493);
            panda$core$String* $tmp6495 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6494, ((panda$core$Object*) wrap_panda$core$UInt64(number6488)));
            panda$core$String* $tmp6497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6495, &$s6496);
            panda$core$String* $tmp6498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6497, label6466);
            panda$core$String* $tmp6500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6498, &$s6499);
            (($fn6501) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6500);
        }
        $l6479:;
        if ($tmp6482) goto $l6503; else goto $l6504;
        $l6503:;
        int64_t $tmp6505 = $tmp6474 - i6471.value;
        if ($tmp6475) goto $l6506; else goto $l6507;
        $l6506:;
        if ($tmp6505 >= 1) goto $l6502; else goto $l6478;
        $l6507:;
        if ($tmp6505 > 1) goto $l6502; else goto $l6478;
        $l6504:;
        int64_t $tmp6509 = i6471.value - $tmp6474;
        if ($tmp6475) goto $l6510; else goto $l6511;
        $l6510:;
        if ($tmp6509 >= -1) goto $l6502; else goto $l6478;
        $l6511:;
        if ($tmp6509 > -1) goto $l6502; else goto $l6478;
        $l6502:;
        i6471.value += 1;
        goto $l6476;
        $l6478:;
    }
    $l6453:;
    if ($tmp6456) goto $l6514; else goto $l6515;
    $l6514:;
    int64_t $tmp6516 = $tmp6448 - i6445.value;
    if ($tmp6449) goto $l6517; else goto $l6518;
    $l6517:;
    if ($tmp6516 >= 1) goto $l6513; else goto $l6452;
    $l6518:;
    if ($tmp6516 > 1) goto $l6513; else goto $l6452;
    $l6515:;
    int64_t $tmp6520 = i6445.value - $tmp6448;
    if ($tmp6449) goto $l6521; else goto $l6522;
    $l6521:;
    if ($tmp6520 >= -1) goto $l6513; else goto $l6452;
    $l6522:;
    if ($tmp6520 > -1) goto $l6513; else goto $l6452;
    $l6513:;
    i6445.value += 1;
    goto $l6450;
    $l6452:;
    (($fn6525) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6524);
    panda$core$Int64 $tmp6527 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6526, ((panda$core$Int64) { 1 }), $tmp6527, ((panda$core$Bit) { false }));
    int64_t $tmp6529 = $tmp6526.min.value;
    panda$core$Int64 i6528 = { $tmp6529 };
    int64_t $tmp6531 = $tmp6526.max.value;
    bool $tmp6532 = $tmp6526.inclusive.value;
    bool $tmp6539 = 1 > 0;
    if ($tmp6539) goto $l6537; else goto $l6538;
    $l6537:;
    if ($tmp6532) goto $l6540; else goto $l6541;
    $l6540:;
    if ($tmp6529 <= $tmp6531) goto $l6533; else goto $l6535;
    $l6541:;
    if ($tmp6529 < $tmp6531) goto $l6533; else goto $l6535;
    $l6538:;
    if ($tmp6532) goto $l6542; else goto $l6543;
    $l6542:;
    if ($tmp6529 >= $tmp6531) goto $l6533; else goto $l6535;
    $l6543:;
    if ($tmp6529 > $tmp6531) goto $l6533; else goto $l6535;
    $l6533:;
    {
        panda$core$Object* $tmp6546 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i6528);
        w6545 = ((org$pandalanguage$pandac$IRNode*) $tmp6546);
        panda$core$Int64 $tmp6548 = panda$collections$Array$get_count$R$panda$core$Int64(w6545->children);
        panda$core$Int64 $tmp6549 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6548, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp6550 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w6545->children, $tmp6549);
        block6547 = ((org$pandalanguage$pandac$IRNode*) $tmp6550);
        panda$core$Int64 $tmp6551 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6528, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp6552 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels6429);
        panda$core$Bit $tmp6553 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp6551, $tmp6552);
        if ($tmp6553.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, otherwiseLabel6432, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp6554 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6528, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp6555 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels6429, $tmp6554);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ((panda$core$String*) $tmp6555), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block6547, p_out);
        panda$core$Bit $tmp6556 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block6547);
        panda$core$Bit $tmp6557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6556);
        if ($tmp6557.value) {
        {
            panda$core$String* $tmp6559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6558, endLabel6427);
            panda$core$String* $tmp6561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6559, &$s6560);
            (($fn6562) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6561);
        }
        }
    }
    $l6536:;
    if ($tmp6539) goto $l6564; else goto $l6565;
    $l6564:;
    int64_t $tmp6566 = $tmp6531 - i6528.value;
    if ($tmp6532) goto $l6567; else goto $l6568;
    $l6567:;
    if ($tmp6566 >= 1) goto $l6563; else goto $l6535;
    $l6568:;
    if ($tmp6566 > 1) goto $l6563; else goto $l6535;
    $l6565:;
    int64_t $tmp6570 = i6528.value - $tmp6531;
    if ($tmp6532) goto $l6571; else goto $l6572;
    $l6571:;
    if ($tmp6570 >= -1) goto $l6563; else goto $l6535;
    $l6572:;
    if ($tmp6570 > -1) goto $l6563; else goto $l6535;
    $l6563:;
    i6528.value += 1;
    goto $l6533;
    $l6535:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel6427, p_out);
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
    panda$core$String* result6574;
    org$pandalanguage$pandac$Type* $tmp6575 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6576 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6575);
    result6574 = $tmp6576;
    panda$core$Bit $tmp6578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6577 = $tmp6578.value;
    if (!$tmp6577) goto $l6579;
    panda$core$Bit $tmp6581 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6574, &$s6580);
    panda$core$Bit $tmp6582 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6581);
    $tmp6577 = $tmp6582.value;
    $l6579:;
    panda$core$Bit $tmp6583 = { $tmp6577 };
    if ($tmp6583.value) {
    {
        panda$core$String* $tmp6585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6574, &$s6584);
        return $tmp6585;
    }
    }
    return result6574;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6586;
    panda$core$Bit needsIndirection6595;
    panda$core$String* separator6607;
    panda$collections$Iterator* p$Iter6628;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6640;
    panda$core$String* $tmp6587 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6586 = $tmp6587;
    panda$core$Bit $tmp6588 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6586));
    if ($tmp6588.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6586));
    panda$core$String* $tmp6590 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6589, $tmp6590);
    panda$core$String* $tmp6593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6591, &$s6592);
    (($fn6594) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6593);
    panda$core$Bit $tmp6596 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6595 = $tmp6596;
    if (needsIndirection6595.value) {
    {
        (($fn6598) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6597);
    }
    }
    else {
    {
        panda$core$String* $tmp6599 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6600) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6599);
    }
    }
    panda$core$String* $tmp6602 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6601, $tmp6602);
    panda$core$String* $tmp6605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6603, &$s6604);
    (($fn6606) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6605);
    separator6607 = &$s6608;
    if (needsIndirection6595.value) {
    {
        panda$core$String* $tmp6610 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6609, $tmp6610);
        panda$core$String* $tmp6613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6611, &$s6612);
        (($fn6614) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6613);
        separator6607 = &$s6615;
    }
    }
    panda$core$Bit $tmp6616 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6617 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6616);
    if ($tmp6617.value) {
    {
        panda$core$String* $tmp6619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6618, separator6607);
        panda$core$String* $tmp6621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6619, &$s6620);
        panda$core$String* $tmp6622 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6621, $tmp6622);
        panda$core$String* $tmp6625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6623, &$s6624);
        (($fn6626) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6625);
        separator6607 = &$s6627;
    }
    }
    {
        ITable* $tmp6629 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6629->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6629 = $tmp6629->next;
        }
        $fn6631 $tmp6630 = $tmp6629->methods[0];
        panda$collections$Iterator* $tmp6632 = $tmp6630(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6628 = $tmp6632;
        $l6633:;
        ITable* $tmp6635 = p$Iter6628->$class->itable;
        while ($tmp6635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6635 = $tmp6635->next;
        }
        $fn6637 $tmp6636 = $tmp6635->methods[0];
        panda$core$Bit $tmp6638 = $tmp6636(p$Iter6628);
        panda$core$Bit $tmp6639 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6638);
        if (!$tmp6639.value) goto $l6634;
        {
            ITable* $tmp6641 = p$Iter6628->$class->itable;
            while ($tmp6641->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6641 = $tmp6641->next;
            }
            $fn6643 $tmp6642 = $tmp6641->methods[1];
            panda$core$Object* $tmp6644 = $tmp6642(p$Iter6628);
            p6640 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6644);
            panda$core$String* $tmp6646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6645, separator6607);
            panda$core$String* $tmp6648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6646, &$s6647);
            panda$core$String* $tmp6649 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6640->type);
            panda$core$String* $tmp6650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6648, $tmp6649);
            panda$core$String* $tmp6652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6650, &$s6651);
            panda$core$String* $tmp6653 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6640->name);
            panda$core$String* $tmp6654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6652, $tmp6653);
            panda$core$String* $tmp6656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6654, &$s6655);
            (($fn6657) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6656);
            separator6607 = &$s6658;
        }
        goto $l6633;
        $l6634:;
    }
    (($fn6660) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6659);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6683;
    panda$collections$Iterator* p$Iter6694;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6706;
    panda$io$MemoryOutputStream* bodyBuffer6729;
    panda$io$IndentedOutputStream* indentedBody6732;
    panda$collections$Iterator* s$Iter6735;
    org$pandalanguage$pandac$IRNode* s6747;
    panda$core$Object* $tmp6661 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6661)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6662;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn6663) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    (($fn6665) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6664);
    panda$core$Bit $tmp6666 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6666.value) {
    {
        (($fn6668) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6667);
    }
    }
    panda$core$String* $tmp6670 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6669, $tmp6670);
    panda$core$String* $tmp6673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6671, &$s6672);
    panda$core$String* $tmp6674 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6673, $tmp6674);
    panda$core$String* $tmp6677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6675, &$s6676);
    panda$core$String* $tmp6678 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6677, $tmp6678);
    panda$core$String* $tmp6681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6679, &$s6680);
    (($fn6682) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6681);
    separator6683 = &$s6684;
    panda$core$Bit $tmp6685 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6686 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6685);
    if ($tmp6686.value) {
    {
        panda$core$String* $tmp6688 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6687, $tmp6688);
        panda$core$String* $tmp6691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6689, &$s6690);
        (($fn6692) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6691);
        separator6683 = &$s6693;
    }
    }
    {
        ITable* $tmp6695 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6695->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6695 = $tmp6695->next;
        }
        $fn6697 $tmp6696 = $tmp6695->methods[0];
        panda$collections$Iterator* $tmp6698 = $tmp6696(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6694 = $tmp6698;
        $l6699:;
        ITable* $tmp6701 = p$Iter6694->$class->itable;
        while ($tmp6701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6701 = $tmp6701->next;
        }
        $fn6703 $tmp6702 = $tmp6701->methods[0];
        panda$core$Bit $tmp6704 = $tmp6702(p$Iter6694);
        panda$core$Bit $tmp6705 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6704);
        if (!$tmp6705.value) goto $l6700;
        {
            ITable* $tmp6707 = p$Iter6694->$class->itable;
            while ($tmp6707->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6707 = $tmp6707->next;
            }
            $fn6709 $tmp6708 = $tmp6707->methods[1];
            panda$core$Object* $tmp6710 = $tmp6708(p$Iter6694);
            p6706 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6710);
            panda$core$String* $tmp6712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6711, separator6683);
            panda$core$String* $tmp6714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6712, &$s6713);
            panda$core$String* $tmp6715 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6706->type);
            panda$core$String* $tmp6716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6714, $tmp6715);
            panda$core$String* $tmp6718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6716, &$s6717);
            panda$core$String* $tmp6719 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6706->name);
            panda$core$String* $tmp6720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6718, $tmp6719);
            panda$core$String* $tmp6722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6720, &$s6721);
            (($fn6723) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6722);
            separator6683 = &$s6724;
        }
        goto $l6699;
        $l6700:;
    }
    (($fn6726) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6725);
    panda$core$Int64 $tmp6727 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6727;
    panda$core$Bit $tmp6728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6728.value);
    panda$io$MemoryOutputStream* $tmp6730 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6730->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6730->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6730);
    bodyBuffer6729 = $tmp6730;
    panda$io$IndentedOutputStream* $tmp6733 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp6733->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6733->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6733, ((panda$io$OutputStream*) bodyBuffer6729));
    indentedBody6732 = $tmp6733;
    {
        ITable* $tmp6736 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6736->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6736 = $tmp6736->next;
        }
        $fn6738 $tmp6737 = $tmp6736->methods[0];
        panda$collections$Iterator* $tmp6739 = $tmp6737(((panda$collections$Iterable*) p_body->children));
        s$Iter6735 = $tmp6739;
        $l6740:;
        ITable* $tmp6742 = s$Iter6735->$class->itable;
        while ($tmp6742->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6742 = $tmp6742->next;
        }
        $fn6744 $tmp6743 = $tmp6742->methods[0];
        panda$core$Bit $tmp6745 = $tmp6743(s$Iter6735);
        panda$core$Bit $tmp6746 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6745);
        if (!$tmp6746.value) goto $l6741;
        {
            ITable* $tmp6748 = s$Iter6735->$class->itable;
            while ($tmp6748->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6748 = $tmp6748->next;
            }
            $fn6750 $tmp6749 = $tmp6748->methods[1];
            panda$core$Object* $tmp6751 = $tmp6749(s$Iter6735);
            s6747 = ((org$pandalanguage$pandac$IRNode*) $tmp6751);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6747, indentedBody6732);
        }
        goto $l6740;
        $l6741:;
    }
    panda$core$String* $tmp6753 = (($fn6752) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn6754) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6753);
    panda$core$String* $tmp6756 = (($fn6755) bodyBuffer6729->$class->vtable[0])(bodyBuffer6729);
    (($fn6757) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6756);
    panda$core$Bit $tmp6758 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6759 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6758);
    if ($tmp6759.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6760 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6761 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6760);
        if ($tmp6761.value) {
        {
            (($fn6763) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6762);
        }
        }
        else {
        {
            (($fn6765) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6764);
        }
        }
    }
    }
    panda$core$Int64 $tmp6766 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6766;
    (($fn6768) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6767);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6769 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6769.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6770 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6770);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

