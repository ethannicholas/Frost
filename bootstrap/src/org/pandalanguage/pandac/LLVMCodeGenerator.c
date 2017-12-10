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
typedef void (*$fn285)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn305)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn311)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn317)(panda$collections$Iterator*);
typedef void (*$fn335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn345)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn509)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn515)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn521)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn548)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn587)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn598)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn604)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn610)(panda$collections$Iterator*);
typedef void (*$fn626)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn662)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn673)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn680)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn716)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn761)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn781)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn815)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn827)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn829)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn834)(panda$io$MemoryOutputStream*);
typedef void (*$fn836)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn852)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn855)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn867)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn897)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn911)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn989)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1031)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1040)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1046)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1052)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1079)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1118)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1141)(panda$collections$Iterator*);
typedef void (*$fn1158)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1267)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1287)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1346)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1357)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1363)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1369)(panda$collections$Iterator*);
typedef void (*$fn1385)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1404)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1427)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1493)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1504)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1522)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1547)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1700)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1706)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1712)(panda$collections$Iterator*);
typedef void (*$fn1746)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1762)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1776)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1782)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1798)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1828)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1842)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1848)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1864)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1923)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1940)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1950)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1967)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1977)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2004)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2021)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2046)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2069)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2093)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2116)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2126)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2194)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2257)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2299)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2312)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2326)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2331)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2338)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2355)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2368)(panda$collections$CollectionView*);
typedef void (*$fn2390)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2403)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2419)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2483)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2498)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2524)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2540)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2566)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2579)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2600)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2616)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2633)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2646)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2664)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2722)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2738)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2799)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2811)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2817)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2823)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2829)(panda$collections$Iterator*);
typedef void (*$fn2841)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2843)(panda$io$OutputStream*);
typedef void (*$fn2870)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2890)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2992)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3010)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3024)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3032)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3037)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3043)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3049)(panda$collections$Iterator*);
typedef void (*$fn3058)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3061)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3074)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3098)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3113)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3124)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3146)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3158)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3177)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3195)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3210)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3228)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3251)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3267)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3286)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3308)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3325)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3352)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3374)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3392)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3418)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3470)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3486)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3502)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3527)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3541)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3619)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3676)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3719)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3734)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3758)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3769)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3783)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3811)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3861)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3873)(panda$collections$CollectionView*);
typedef void (*$fn3885)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3892)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3898)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3904)(panda$collections$Iterator*);
typedef void (*$fn3914)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3917)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3955)(panda$collections$CollectionView*);
typedef void (*$fn3963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3981)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4023)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4033)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4065)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4075)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4108)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4120)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4156)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4162)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4168)(panda$collections$Iterator*);
typedef void (*$fn4191)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4219)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4246)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4275)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4384)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4401)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4419)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4423)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4429)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4435)(panda$collections$Iterator*);
typedef void (*$fn4437)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4438)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4465)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4480)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4504)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4540)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4547)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4560)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4570)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4588)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4622)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4686)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4697)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4718)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4729)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4752)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4770)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4783)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4796)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4807)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4820)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4831)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4857)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4879)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4884)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4920)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4927)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4940)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4950)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4968)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4982)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4992)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5002)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5017)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5027)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5068)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5080)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5097)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5129)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5150)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5161)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5210)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5231)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5242)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5265)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5282)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5298)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5311)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5327)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5338)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5354)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5365)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5381)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5394)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5421)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5432)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5446)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5457)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5473)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5486)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5494)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5508)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5513)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5536)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5549)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5560)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5569)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5588)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5601)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5621)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5635)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5644)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5655)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5670)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5687)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5693)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5699)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5724)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5741)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5772)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5795)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5834)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5850)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5857)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5867)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5869)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5907)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5914)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5941)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5963)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5969)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5975)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5981)(panda$collections$Iterator*);
typedef void (*$fn5988)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5990)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5998)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6003)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6007)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6024)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6037)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6053)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6104)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6151)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6182)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6184)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6190)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6198)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6210)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6215)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6221)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6227)(panda$collections$Iterator*);
typedef void (*$fn6241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6247)(panda$io$MemoryOutputStream*);
typedef void (*$fn6249)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6276)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6281)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6287)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6293)(panda$collections$Iterator*);
typedef void (*$fn6307)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6310)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6322)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6328)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6334)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6336)(panda$io$MemoryOutputStream*);
typedef void (*$fn6338)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6339)(panda$io$MemoryOutputStream*);
typedef void (*$fn6341)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6347)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6349)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6352)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, NULL };
static panda$core$String $s354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, NULL };
static panda$core$String $s425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, NULL };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, NULL };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, NULL };
static panda$core$String $s739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s843 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, NULL };
static panda$core$String $s851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, NULL };
static panda$core$String $s1061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, NULL };
static panda$core$String $s1082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, NULL };
static panda$core$String $s1112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, NULL };
static panda$core$String $s1125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s1159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, NULL };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, NULL };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, NULL };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, NULL };
static panda$core$String $s1304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, NULL };
static panda$core$String $s1336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, NULL };
static panda$core$String $s1420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s1461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s1463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, NULL };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s1552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, NULL };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, NULL };
static panda$core$String $s1564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, NULL };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, NULL };
static panda$core$String $s1635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s1650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, NULL };
static panda$core$String $s1671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, NULL };
static panda$core$String $s1687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, NULL };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, NULL };
static panda$core$String $s1725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, NULL };
static panda$core$String $s1871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, NULL };
static panda$core$String $s1873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, NULL };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1930 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 48, NULL };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 30, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s2085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, NULL };
static panda$core$String $s2101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, NULL };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, NULL };
static panda$core$String $s2223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s2225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, NULL };
static panda$core$String $s2239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, NULL };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, NULL };
static panda$core$String $s2296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, NULL };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, NULL };
static panda$core$String $s2476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, NULL };
static panda$core$String $s2510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, NULL };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, NULL };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, NULL };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, NULL };
static panda$core$String $s2803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s2851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s2881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s2994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, NULL };
static panda$core$String $s3000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s3022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, NULL };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, NULL };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, NULL };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, NULL };
static panda$core$String $s3207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, NULL };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, NULL };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, NULL };
static panda$core$String $s3252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s3255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, NULL };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, NULL };
static panda$core$String $s3436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s3438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s3441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, NULL };
static panda$core$String $s3521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, NULL };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, NULL };
static panda$core$String $s3554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, NULL };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, NULL };
static panda$core$String $s3603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s3732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s3801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s3809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, NULL };
static panda$core$String $s3814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, NULL };
static panda$core$String $s3816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, NULL };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s3839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s3840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s3847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, NULL };
static panda$core$String $s3866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, NULL };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, NULL };
static panda$core$String $s3883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s3887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, NULL };
static panda$core$String $s3912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s3920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, NULL };
static panda$core$String $s3922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, NULL };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s3935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 69, NULL };
static panda$core$String $s3943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, NULL };
static panda$core$String $s3945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, NULL };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s3961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 26, NULL };
static panda$core$String $s3967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, NULL };
static panda$core$String $s3995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, NULL };
static panda$core$String $s3998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, NULL };
static panda$core$String $s4012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, NULL };
static panda$core$String $s4016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s4021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s4026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s4031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, NULL };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s4063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s4068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s4085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, NULL };
static panda$core$String $s4087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s4103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s4106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, NULL };
static panda$core$String $s4115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, NULL };
static panda$core$String $s4118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, NULL };
static panda$core$String $s4184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s4212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s4232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s4240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, NULL };
static panda$core$String $s4268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s4273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s4276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, NULL };
static panda$core$String $s4278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s4344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s4377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, NULL };
static panda$core$String $s4390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4502 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s4553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4563 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s4615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s4638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s4640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s4645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s4648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s4653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s4662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s4708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s4737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s4762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s4791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s4815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s4839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s4852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s4855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s4858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s4860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s4933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s4995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s5004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s5007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, NULL };
static panda$core$String $s5012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s5015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, NULL };
static panda$core$String $s5043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s5045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s5047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s5050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s5053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, NULL };
static panda$core$String $s5063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, NULL };
static panda$core$String $s5070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s5108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s5140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5151 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, NULL };
static panda$core$String $s5189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, NULL };
static panda$core$String $s5221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s5392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s5465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s5481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s5484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s5487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s5489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s5653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s5757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, NULL };
static panda$core$String $s5769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s5855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s5903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5936 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s5953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s5955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s5962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, NULL };
static panda$core$String $s5983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, NULL };
static panda$core$String $s5985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, NULL };
static panda$core$String $s5986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, NULL };
static panda$core$String $s5989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, NULL };
static panda$core$String $s5991 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, NULL };
static panda$core$String $s5993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5999 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, NULL };
static panda$core$String $s6001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s6006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s6017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s6022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s6026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, NULL };
static panda$core$String $s6030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, NULL };
static panda$core$String $s6032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s6051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, NULL };
static panda$core$String $s6094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, NULL };
static panda$core$String $s6096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s6102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, NULL };
static panda$core$String $s6147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s6149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, NULL };
static panda$core$String $s6176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s6185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s6246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, NULL };
static panda$core$String $s6248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s6251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s6253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s6346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s6348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s6351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };

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
    panda$core$String* $tmp63 = (($fn62) self->types->$class->vtable[21])(self->types);
    (($fn64) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp63);
    panda$core$String* $tmp66 = (($fn65) self->strings->$class->vtable[21])(self->strings);
    (($fn67) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp66);
    panda$core$String* $tmp69 = (($fn68) self->declarations->$class->vtable[21])(self->declarations);
    (($fn70) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp69);
    panda$core$String* $tmp72 = (($fn71) self->wrapperShimsBuffer->$class->vtable[21])(self->wrapperShimsBuffer);
    (($fn73) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp72);
    panda$core$String* $tmp75 = (($fn74) self->shimsBuffer->$class->vtable[21])(self->shimsBuffer);
    (($fn76) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp75);
    panda$core$String* $tmp78 = (($fn77) self->methodsBuffer->$class->vtable[21])(self->methodsBuffer);
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
    panda$core$String* $tmp284 = panda$core$MutableString$finish$R$panda$core$String(code242);
    (($fn285) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp284);
    panda$core$Bit $tmp286 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl238);
    if ($tmp286.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl238);
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$MutableString* code288;
    org$pandalanguage$pandac$ClassDecl* object296;
    panda$core$String* separator299;
    panda$collections$Iterator* f$Iter301;
    org$pandalanguage$pandac$FieldDecl* f314;
    panda$core$Bit $tmp287 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp287.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    panda$core$MutableString* $tmp289 = (panda$core$MutableString*) malloc(40);
    $tmp289->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp289->refCount.value = 1;
    panda$core$String* $tmp292 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s291, $tmp292);
    panda$core$String* $tmp295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp293, &$s294);
    panda$core$MutableString$init$panda$core$String($tmp289, $tmp295);
    code288 = $tmp289;
    org$pandalanguage$pandac$Type* $tmp297 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp298 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp297);
    object296 = $tmp298;
    PANDA_ASSERT(((panda$core$Bit) { object296 != NULL }).value);
    separator299 = &$s300;
    {
        panda$collections$ListView* $tmp302 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, object296);
        ITable* $tmp303 = ((panda$collections$Iterable*) $tmp302)->$class->itable;
        while ($tmp303->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp303 = $tmp303->next;
        }
        $fn305 $tmp304 = $tmp303->methods[0];
        panda$collections$Iterator* $tmp306 = $tmp304(((panda$collections$Iterable*) $tmp302));
        f$Iter301 = $tmp306;
        $l307:;
        ITable* $tmp309 = f$Iter301->$class->itable;
        while ($tmp309->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp309 = $tmp309->next;
        }
        $fn311 $tmp310 = $tmp309->methods[0];
        panda$core$Bit $tmp312 = $tmp310(f$Iter301);
        panda$core$Bit $tmp313 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp312);
        if (!$tmp313.value) goto $l308;
        {
            ITable* $tmp315 = f$Iter301->$class->itable;
            while ($tmp315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp315 = $tmp315->next;
            }
            $fn317 $tmp316 = $tmp315->methods[1];
            panda$core$Object* $tmp318 = $tmp316(f$Iter301);
            f314 = ((org$pandalanguage$pandac$FieldDecl*) $tmp318);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f314);
            panda$core$String* $tmp320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s319, separator299);
            panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp320, &$s321);
            panda$core$String* $tmp323 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f314->type);
            panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp322, $tmp323);
            panda$core$String* $tmp326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp324, &$s325);
            panda$core$MutableString$append$panda$core$String(code288, $tmp326);
            separator299 = &$s327;
        }
        goto $l307;
        $l308:;
    }
    panda$core$String* $tmp329 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s328, $tmp329);
    panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s331);
    panda$core$MutableString$append$panda$core$String(code288, $tmp332);
    panda$core$MutableString$append$panda$core$String(code288, &$s333);
    panda$core$String* $tmp334 = panda$core$MutableString$finish$R$panda$core$String(code288);
    (($fn335) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp334);
    panda$core$String* $tmp337 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s336, $tmp337);
    panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, &$s339);
    panda$core$String* $tmp341 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, $tmp341);
    panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp342, &$s343);
    (($fn345) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp344);
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp347 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s346, $tmp347);
    return $tmp348;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name357;
    org$pandalanguage$pandac$ClassDecl* cl363;
    org$pandalanguage$pandac$ClassDecl* cl369;
    org$pandalanguage$pandac$ClassDecl* cl382;
    panda$core$String* name385;
    org$pandalanguage$pandac$ClassDecl* cl391;
    panda$core$MutableString* result400;
    panda$core$Range$LTpanda$core$Int64$GT $tmp408;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s349;
        }
        break;
        case 12:
        case 13:
        {
            panda$core$Int64 $tmp351 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp352 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp351, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp353 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s350, ((panda$core$Object*) wrap_panda$core$Int64($tmp352)));
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp353, &$s354);
            return $tmp355;
        }
        break;
        case 19:
        {
            return &$s356;
        }
        break;
        case 10:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, p_t);
            panda$core$String* $tmp359 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s358, $tmp359);
            panda$core$String* $tmp362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp360, &$s361);
            name357 = $tmp362;
            org$pandalanguage$pandac$ClassDecl* $tmp364 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl363 = $tmp364;
            PANDA_ASSERT(((panda$core$Bit) { cl363 != NULL }).value);
            panda$core$Bit $tmp365 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl363);
            panda$core$Bit $tmp366 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp365);
            if ($tmp366.value) {
            {
                panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name357, &$s367);
                return $tmp368;
            }
            }
            return name357;
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp370 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl369 = $tmp370;
            PANDA_ASSERT(((panda$core$Bit) { cl369 != NULL }).value);
            panda$core$Bit $tmp371 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl369);
            if ($tmp371.value) {
            {
                panda$core$String* $tmp372 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                return $tmp372;
            }
            }
            panda$core$Object* $tmp373 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp374 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp373));
            return $tmp374;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp377 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp375))->name, &$s376);
            if ($tmp377.value) {
            {
                panda$core$Object* $tmp378 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp379 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp378));
                panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp379, &$s380);
                return $tmp381;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp383 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl382 = $tmp383;
            panda$core$Bit $tmp384 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl382);
            if ($tmp384.value) {
            {
                panda$core$String* $tmp387 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s386, $tmp387);
                panda$core$String* $tmp390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp388, &$s389);
                name385 = $tmp390;
                org$pandalanguage$pandac$ClassDecl* $tmp392 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl391 = $tmp392;
                PANDA_ASSERT(((panda$core$Bit) { cl391 != NULL }).value);
                panda$core$Bit $tmp393 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl391);
                panda$core$Bit $tmp394 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp393);
                if ($tmp394.value) {
                {
                    panda$core$String* $tmp396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name385, &$s395);
                    return $tmp396;
                }
                }
                return name385;
            }
            }
            panda$core$Object* $tmp397 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp398 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp397));
            return $tmp398;
        }
        break;
        case 22:
        {
            panda$core$String* $tmp399 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp399;
        }
        break;
        case 24:
        case 25:
        {
            panda$core$MutableString* $tmp401 = (panda$core$MutableString*) malloc(40);
            $tmp401->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp401->refCount.value = 1;
            panda$core$Int64 $tmp403 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp404 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp403, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp405 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp404);
            panda$core$String* $tmp406 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp405));
            panda$core$MutableString$init$panda$core$String($tmp401, $tmp406);
            result400 = $tmp401;
            panda$core$MutableString$append$panda$core$String(result400, &$s407);
            panda$core$Int64 $tmp409 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp410 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp409, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp408, ((panda$core$Int64) { 0 }), $tmp410, ((panda$core$Bit) { false }));
            int64_t $tmp412 = $tmp408.min.value;
            panda$core$Int64 i411 = { $tmp412 };
            int64_t $tmp414 = $tmp408.max.value;
            bool $tmp415 = $tmp408.inclusive.value;
            if ($tmp415) goto $l422; else goto $l423;
            $l422:;
            if ($tmp412 <= $tmp414) goto $l416; else goto $l418;
            $l423:;
            if ($tmp412 < $tmp414) goto $l416; else goto $l418;
            $l416:;
            {
                panda$core$Bit $tmp424 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i411, ((panda$core$Int64) { 0 }));
                if ($tmp424.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result400, &$s425);
                }
                }
                panda$core$Object* $tmp426 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i411);
                panda$core$String* $tmp427 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp426));
                panda$core$MutableString$append$panda$core$String(result400, $tmp427);
            }
            $l419:;
            int64_t $tmp429 = $tmp414 - i411.value;
            if ($tmp415) goto $l430; else goto $l431;
            $l430:;
            if ($tmp429 >= 1) goto $l428; else goto $l418;
            $l431:;
            if ($tmp429 > 1) goto $l428; else goto $l418;
            $l428:;
            i411.value += 1;
            goto $l416;
            $l418:;
            panda$core$MutableString$append$panda$core$String(result400, &$s434);
            panda$core$String* $tmp435 = panda$core$MutableString$finish$R$panda$core$String(result400);
            return $tmp435;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp436.value) {
    {
        panda$core$Object* $tmp437 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp438 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp437));
        return $tmp438;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, p_t);
    panda$core$String* $tmp440 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s439, $tmp440);
    panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp441, &$s442);
    return $tmp443;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp444 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp444, &$s445);
    return $tmp446;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType447;
    panda$core$MutableString* result449;
    panda$core$Range$LTpanda$core$Int64$GT $tmp466;
    org$pandalanguage$pandac$Type* $tmp448 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType447 = $tmp448;
    panda$core$MutableString* $tmp450 = (panda$core$MutableString*) malloc(40);
    $tmp450->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp450->refCount.value = 1;
    panda$core$MutableString$init($tmp450);
    result449 = $tmp450;
    panda$core$Int64 $tmp452 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType447->subtypes);
    panda$core$Int64 $tmp453 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp452, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp454 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType447->subtypes, $tmp453);
    panda$core$String* $tmp455 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp454));
    panda$core$MutableString$append$panda$core$String(result449, $tmp455);
    panda$core$MutableString$append$panda$core$String(result449, &$s456);
    panda$core$Bit $tmp457 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp457.value);
    panda$core$String* $tmp459 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s458, $tmp459);
    panda$core$String* $tmp462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp460, &$s461);
    panda$core$MutableString$append$panda$core$String(result449, $tmp462);
    panda$core$Bit $tmp463 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp463.value) {
    {
        panda$core$MutableString$append$panda$core$String(result449, &$s464);
    }
    }
    panda$core$MutableString$append$panda$core$String(result449, &$s465);
    panda$core$Int64 $tmp467 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType447->subtypes);
    panda$core$Int64 $tmp468 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp467, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp466, ((panda$core$Int64) { 0 }), $tmp468, ((panda$core$Bit) { false }));
    int64_t $tmp470 = $tmp466.min.value;
    panda$core$Int64 i469 = { $tmp470 };
    int64_t $tmp472 = $tmp466.max.value;
    bool $tmp473 = $tmp466.inclusive.value;
    if ($tmp473) goto $l480; else goto $l481;
    $l480:;
    if ($tmp470 <= $tmp472) goto $l474; else goto $l476;
    $l481:;
    if ($tmp470 < $tmp472) goto $l474; else goto $l476;
    $l474:;
    {
        panda$core$MutableString$append$panda$core$String(result449, &$s482);
        panda$core$Object* $tmp483 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType447->subtypes, i469);
        panda$core$String* $tmp484 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp483));
        panda$core$MutableString$append$panda$core$String(result449, $tmp484);
    }
    $l477:;
    int64_t $tmp486 = $tmp472 - i469.value;
    if ($tmp473) goto $l487; else goto $l488;
    $l487:;
    if ($tmp486 >= 1) goto $l485; else goto $l476;
    $l488:;
    if ($tmp486 > 1) goto $l485; else goto $l476;
    $l485:;
    i469.value += 1;
    goto $l474;
    $l476:;
    panda$core$MutableString$append$panda$core$String(result449, &$s491);
    panda$core$String* $tmp492 = panda$core$MutableString$finish$R$panda$core$String(result449);
    return $tmp492;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp493.value);
    panda$core$Object* $tmp494 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp494));
    panda$core$Object* $tmp496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp497 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp496));
    panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s495, $tmp497);
    panda$core$String* $tmp500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp498, &$s499);
    return $tmp500;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces501;
    panda$core$String* previous504;
    panda$collections$Iterator* intfType$Iter506;
    org$pandalanguage$pandac$Type* intfType518;
    org$pandalanguage$pandac$ClassDecl* intf523;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC525;
    panda$collections$ListView* methods527;
    panda$core$String* name529;
    panda$core$String* t539;
    panda$core$MutableString* result553;
    panda$core$String* separator593;
    panda$collections$Iterator* m$Iter595;
    org$pandalanguage$pandac$MethodDecl* m607;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry615;
    org$pandalanguage$pandac$Type* $tmp502 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp503 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp502);
    interfaces501 = $tmp503;
    previous504 = &$s505;
    {
        ITable* $tmp507 = ((panda$collections$Iterable*) interfaces501)->$class->itable;
        while ($tmp507->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp507 = $tmp507->next;
        }
        $fn509 $tmp508 = $tmp507->methods[0];
        panda$collections$Iterator* $tmp510 = $tmp508(((panda$collections$Iterable*) interfaces501));
        intfType$Iter506 = $tmp510;
        $l511:;
        ITable* $tmp513 = intfType$Iter506->$class->itable;
        while ($tmp513->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp513 = $tmp513->next;
        }
        $fn515 $tmp514 = $tmp513->methods[0];
        panda$core$Bit $tmp516 = $tmp514(intfType$Iter506);
        panda$core$Bit $tmp517 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp516);
        if (!$tmp517.value) goto $l512;
        {
            ITable* $tmp519 = intfType$Iter506->$class->itable;
            while ($tmp519->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp519 = $tmp519->next;
            }
            $fn521 $tmp520 = $tmp519->methods[1];
            panda$core$Object* $tmp522 = $tmp520(intfType$Iter506);
            intfType518 = ((org$pandalanguage$pandac$Type*) $tmp522);
            org$pandalanguage$pandac$ClassDecl* $tmp524 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType518);
            intf523 = $tmp524;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp526 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf523);
            intfCC525 = $tmp526;
            panda$collections$ListView* $tmp528 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType518);
            methods527 = $tmp528;
            panda$core$String* $tmp531 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s530, $tmp531);
            panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, &$s533);
            panda$core$String* $tmp535 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf523)->name);
            panda$core$String* $tmp536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, $tmp535);
            panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
            name529 = $tmp538;
            org$pandalanguage$pandac$Type* $tmp541 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp542 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp541);
            panda$core$String* $tmp543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s540, $tmp542);
            panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, &$s544);
            ITable* $tmp546 = ((panda$collections$CollectionView*) methods527)->$class->itable;
            while ($tmp546->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp546 = $tmp546->next;
            }
            $fn548 $tmp547 = $tmp546->methods[0];
            panda$core$Int64 $tmp549 = $tmp547(((panda$collections$CollectionView*) methods527));
            panda$core$String* $tmp550 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp545, ((panda$core$Object*) wrap_panda$core$Int64($tmp549)));
            panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp550, &$s551);
            t539 = $tmp552;
            panda$core$MutableString* $tmp554 = (panda$core$MutableString*) malloc(40);
            $tmp554->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp554->refCount.value = 1;
            panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s556, name529);
            panda$core$String* $tmp559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp557, &$s558);
            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp559, t539);
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s561);
            org$pandalanguage$pandac$Type* $tmp563 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp564 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp563);
            panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp562, $tmp564);
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s566);
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s568, intfCC525->type);
            panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, &$s570);
            panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp571, intfCC525->name);
            panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp572, &$s573);
            org$pandalanguage$pandac$Type* $tmp575 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp576 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp575);
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp574, $tmp576);
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, &$s578);
            panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, $tmp579);
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s581, previous504);
            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s583);
            ITable* $tmp585 = ((panda$collections$CollectionView*) methods527)->$class->itable;
            while ($tmp585->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp585 = $tmp585->next;
            }
            $fn587 $tmp586 = $tmp585->methods[0];
            panda$core$Int64 $tmp588 = $tmp586(((panda$collections$CollectionView*) methods527));
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp584, ((panda$core$Object*) wrap_panda$core$Int64($tmp588)));
            panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp589, &$s590);
            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, $tmp591);
            panda$core$MutableString$init$panda$core$String($tmp554, $tmp592);
            result553 = $tmp554;
            separator593 = &$s594;
            {
                ITable* $tmp596 = ((panda$collections$Iterable*) methods527)->$class->itable;
                while ($tmp596->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp596 = $tmp596->next;
                }
                $fn598 $tmp597 = $tmp596->methods[0];
                panda$collections$Iterator* $tmp599 = $tmp597(((panda$collections$Iterable*) methods527));
                m$Iter595 = $tmp599;
                $l600:;
                ITable* $tmp602 = m$Iter595->$class->itable;
                while ($tmp602->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp602 = $tmp602->next;
                }
                $fn604 $tmp603 = $tmp602->methods[0];
                panda$core$Bit $tmp605 = $tmp603(m$Iter595);
                panda$core$Bit $tmp606 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp605);
                if (!$tmp606.value) goto $l601;
                {
                    ITable* $tmp608 = m$Iter595->$class->itable;
                    while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp608 = $tmp608->next;
                    }
                    $fn610 $tmp609 = $tmp608->methods[1];
                    panda$core$Object* $tmp611 = $tmp609(m$Iter595);
                    m607 = ((org$pandalanguage$pandac$MethodDecl*) $tmp611);
                    panda$core$MutableString$append$panda$core$String(result553, separator593);
                    separator593 = &$s612;
                    panda$core$Bit $tmp613 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m607->annotations);
                    if ($tmp613.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result553, &$s614);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp616 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m607);
                        entry615 = $tmp616;
                        panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s617, ((panda$core$String*) entry615->second));
                        panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp618, &$s619);
                        panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, ((panda$core$String*) entry615->first));
                        panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp621, &$s622);
                        panda$core$MutableString$append$panda$core$String(result553, $tmp623);
                    }
                    }
                }
                goto $l600;
                $l601:;
            }
            panda$core$MutableString$append$panda$core$String(result553, &$s624);
            panda$core$String* $tmp625 = panda$core$MutableString$finish$R$panda$core$String(result553);
            (($fn626) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp625);
            panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s627, t539);
            panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
            panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, name529);
            panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, &$s632);
            previous504 = $tmp633;
        }
        goto $l511;
        $l512:;
    }
    return previous504;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer634;
    panda$io$IndentedOutputStream* out637;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found640;
    panda$core$Int64 oldVarCount648;
    org$pandalanguage$pandac$Type* effectiveReturnType649;
    panda$core$String* resultName653;
    panda$core$MutableString* resultType657;
    panda$core$String* self_t674;
    panda$core$Range$LTpanda$core$Int64$GT $tmp682;
    panda$core$String* pType697;
    panda$collections$Array* casts718;
    panda$core$Range$LTpanda$core$Int64$GT $tmp721;
    panda$core$String* p736;
    panda$core$String* returnValue753;
    panda$core$Range$LTpanda$core$Int64$GT $tmp782;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result830;
    panda$io$MemoryOutputStream* $tmp635 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp635->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp635->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp635);
    outBuffer634 = $tmp635;
    panda$io$IndentedOutputStream* $tmp638 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp638->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp638->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp638, ((panda$io$OutputStream*) outBuffer634));
    out637 = $tmp638;
    panda$core$Object* $tmp641 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found640 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp641);
    if (((panda$core$Bit) { found640 != NULL }).value) {
    {
        return found640;
    }
    }
    panda$core$Bit $tmp642 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp642.value);
    panda$core$Int64 $tmp643 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp644 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp645 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp644, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp643, $tmp645);
    PANDA_ASSERT($tmp646.value);
    panda$core$Bit $tmp647 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp647.value);
    oldVarCount648 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp650 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp651 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp650, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp652 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp651);
    effectiveReturnType649 = ((org$pandalanguage$pandac$Type*) $tmp652);
    panda$core$String* $tmp654 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp654, &$s655);
    resultName653 = $tmp656;
    panda$core$MutableString* $tmp658 = (panda$core$MutableString*) malloc(40);
    $tmp658->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp658->refCount.value = 1;
    panda$core$String* $tmp660 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType649);
    panda$core$MutableString$init$panda$core$String($tmp658, $tmp660);
    resultType657 = $tmp658;
    (($fn662) ((panda$io$OutputStream*) out637)->$class->vtable[16])(((panda$io$OutputStream*) out637), &$s661);
    panda$core$Bit $tmp663 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_raw->owner);
    if ($tmp663.value) {
    {
        (($fn665) ((panda$io$OutputStream*) out637)->$class->vtable[16])(((panda$io$OutputStream*) out637), &$s664);
    }
    }
    panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s666, ((panda$core$Object*) resultType657));
    panda$core$String* $tmp669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s668);
    panda$core$String* $tmp670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp669, resultName653);
    panda$core$String* $tmp672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp670, &$s671);
    (($fn673) ((panda$io$OutputStream*) out637)->$class->vtable[16])(((panda$io$OutputStream*) out637), $tmp672);
    panda$core$String* $tmp675 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t674 = $tmp675;
    panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s676, self_t674);
    panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp677, &$s678);
    (($fn680) ((panda$io$OutputStream*) out637)->$class->vtable[16])(((panda$io$OutputStream*) out637), $tmp679);
    panda$core$MutableString$append$panda$core$String(resultType657, &$s681);
    panda$core$MutableString$append$panda$core$String(resultType657, self_t674);
    panda$core$Int64 $tmp683 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp682, ((panda$core$Int64) { 0 }), $tmp683, ((panda$core$Bit) { false }));
    int64_t $tmp685 = $tmp682.min.value;
    panda$core$Int64 i684 = { $tmp685 };
    int64_t $tmp687 = $tmp682.max.value;
    bool $tmp688 = $tmp682.inclusive.value;
    if ($tmp688) goto $l695; else goto $l696;
    $l695:;
    if ($tmp685 <= $tmp687) goto $l689; else goto $l691;
    $l696:;
    if ($tmp685 < $tmp687) goto $l689; else goto $l691;
    $l689:;
    {
        panda$core$Object* $tmp698 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i684);
        panda$core$String* $tmp699 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp698));
        pType697 = $tmp699;
        panda$core$MutableString$append$panda$core$String(resultType657, &$s700);
        panda$core$MutableString$append$panda$core$String(resultType657, pType697);
        panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s701, pType697);
        panda$core$String* $tmp704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, &$s703);
        panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp704, ((panda$core$Object*) wrap_panda$core$Int64(i684)));
        panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp705, &$s706);
        (($fn708) ((panda$io$OutputStream*) out637)->$class->vtable[16])(((panda$io$OutputStream*) out637), $tmp707);
    }
    $l692:;
    int64_t $tmp710 = $tmp687 - i684.value;
    if ($tmp688) goto $l711; else goto $l712;
    $l711:;
    if ($tmp710 >= 1) goto $l709; else goto $l691;
    $l712:;
    if ($tmp710 > 1) goto $l709; else goto $l691;
    $l709:;
    i684.value += 1;
    goto $l689;
    $l691:;
    (($fn716) ((panda$io$OutputStream*) out637)->$class->vtable[19])(((panda$io$OutputStream*) out637), &$s715);
    panda$core$MutableString$append$panda$core$String(resultType657, &$s717);
    panda$collections$Array* $tmp719 = (panda$collections$Array*) malloc(40);
    $tmp719->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp719->refCount.value = 1;
    panda$collections$Array$init($tmp719);
    casts718 = $tmp719;
    panda$core$Int64 $tmp722 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp721, ((panda$core$Int64) { 0 }), $tmp722, ((panda$core$Bit) { false }));
    int64_t $tmp724 = $tmp721.min.value;
    panda$core$Int64 i723 = { $tmp724 };
    int64_t $tmp726 = $tmp721.max.value;
    bool $tmp727 = $tmp721.inclusive.value;
    if ($tmp727) goto $l734; else goto $l735;
    $l734:;
    if ($tmp724 <= $tmp726) goto $l728; else goto $l730;
    $l735:;
    if ($tmp724 < $tmp726) goto $l728; else goto $l730;
    $l728:;
    {
        panda$core$String* $tmp738 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s737, ((panda$core$Object*) wrap_panda$core$Int64(i723)));
        panda$core$String* $tmp740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, &$s739);
        p736 = $tmp740;
        panda$core$Object* $tmp741 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i723);
        panda$core$Object* $tmp742 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i723);
        panda$core$Bit $tmp743 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp741)->type, ((org$pandalanguage$pandac$Type*) $tmp742));
        if ($tmp743.value) {
        {
            panda$core$Object* $tmp744 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i723);
            panda$core$Object* $tmp745 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i723);
            panda$core$String* $tmp746 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p736, ((org$pandalanguage$pandac$Type*) $tmp744), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp745)->type, out637);
            panda$collections$Array$add$panda$collections$Array$T(casts718, ((panda$core$Object*) $tmp746));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts718, ((panda$core$Object*) p736));
        }
        }
    }
    $l731:;
    int64_t $tmp748 = $tmp726 - i723.value;
    if ($tmp727) goto $l749; else goto $l750;
    $l749:;
    if ($tmp748 >= 1) goto $l747; else goto $l730;
    $l750:;
    if ($tmp748 > 1) goto $l747; else goto $l730;
    $l747:;
    i723.value += 1;
    goto $l728;
    $l730:;
    org$pandalanguage$pandac$Type* $tmp754 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp755 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp754);
    if ($tmp755.value) {
    {
        panda$core$String* $tmp756 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue753 = $tmp756;
        panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s757, returnValue753);
        panda$core$String* $tmp760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp758, &$s759);
        (($fn761) ((panda$io$OutputStream*) out637)->$class->vtable[16])(((panda$io$OutputStream*) out637), $tmp760);
    }
    }
    else {
    {
        returnValue753 = &$s762;
    }
    }
    panda$core$String* $tmp764 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s763, $tmp764);
    panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, &$s766);
    panda$core$String* $tmp768 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
    panda$core$String* $tmp769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp767, $tmp768);
    panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp769, &$s770);
    panda$core$String* $tmp772 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, $tmp772);
    panda$core$String* $tmp775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp773, &$s774);
    panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s776, self_t674);
    panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, &$s778);
    panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp775, $tmp779);
    (($fn781) ((panda$io$OutputStream*) out637)->$class->vtable[16])(((panda$io$OutputStream*) out637), $tmp780);
    panda$core$Int64 $tmp783 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp782, ((panda$core$Int64) { 0 }), $tmp783, ((panda$core$Bit) { false }));
    int64_t $tmp785 = $tmp782.min.value;
    panda$core$Int64 i784 = { $tmp785 };
    int64_t $tmp787 = $tmp782.max.value;
    bool $tmp788 = $tmp782.inclusive.value;
    if ($tmp788) goto $l795; else goto $l796;
    $l795:;
    if ($tmp785 <= $tmp787) goto $l789; else goto $l791;
    $l796:;
    if ($tmp785 < $tmp787) goto $l789; else goto $l791;
    $l789:;
    {
        panda$core$Object* $tmp798 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i784);
        panda$core$String* $tmp799 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp798)->type);
        panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s797, $tmp799);
        panda$core$String* $tmp802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp800, &$s801);
        panda$core$Object* $tmp803 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts718, i784);
        panda$core$String* $tmp804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp802, ((panda$core$String*) $tmp803));
        panda$core$String* $tmp806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp804, &$s805);
        (($fn807) ((panda$io$OutputStream*) out637)->$class->vtable[16])(((panda$io$OutputStream*) out637), $tmp806);
    }
    $l792:;
    int64_t $tmp809 = $tmp787 - i784.value;
    if ($tmp788) goto $l810; else goto $l811;
    $l810:;
    if ($tmp809 >= 1) goto $l808; else goto $l791;
    $l811:;
    if ($tmp809 > 1) goto $l808; else goto $l791;
    $l808:;
    i784.value += 1;
    goto $l789;
    $l791:;
    (($fn815) ((panda$io$OutputStream*) out637)->$class->vtable[19])(((panda$io$OutputStream*) out637), &$s814);
    org$pandalanguage$pandac$Type* $tmp816 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp817 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp816);
    if ($tmp817.value) {
    {
        panda$core$String* $tmp818 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType649);
        panda$core$String* $tmp820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp818, &$s819);
        panda$core$String* $tmp821 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, returnValue753, p_raw->returnType, effectiveReturnType649, out637);
        panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp820, $tmp821);
        returnValue753 = $tmp822;
    }
    }
    panda$core$String* $tmp824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s823, returnValue753);
    panda$core$String* $tmp826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp824, &$s825);
    (($fn827) ((panda$io$OutputStream*) out637)->$class->vtable[19])(((panda$io$OutputStream*) out637), $tmp826);
    (($fn829) ((panda$io$OutputStream*) out637)->$class->vtable[19])(((panda$io$OutputStream*) out637), &$s828);
    self->varCount = oldVarCount648;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp831 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp831->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp831->refCount.value = 1;
    panda$core$String* $tmp833 = panda$core$MutableString$finish$R$panda$core$String(resultType657);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp831, resultName653, $tmp833);
    result830 = $tmp831;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result830));
    panda$core$String* $tmp835 = (($fn834) outBuffer634->$class->vtable[21])(outBuffer634);
    (($fn836) p_rawOut->$class->vtable[16])(p_rawOut, $tmp835);
    return result830;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 oldVarCount838;
    panda$core$String* result839;
    panda$core$String* selfType845;
    org$pandalanguage$pandac$Type* actualMethodType868;
    org$pandalanguage$pandac$Type* inheritedMethodType870;
    panda$core$Range$LTpanda$core$Int64$GT $tmp872;
    panda$collections$Array* parameters912;
    panda$core$Range$LTpanda$core$Int64$GT $tmp915;
    panda$collections$Array* children942;
    org$pandalanguage$pandac$Position $tmp947;
    panda$core$String* unwrapped949;
    org$pandalanguage$pandac$Position $tmp952;
    panda$core$String* returnValue955;
    panda$core$Range$LTpanda$core$Int64$GT $tmp990;
    panda$core$Bit $tmp837 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp837.value);
    oldVarCount838 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp841 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s840, $tmp841);
    panda$core$String* $tmp844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp842, &$s843);
    result839 = $tmp844;
    panda$core$String* $tmp847 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s846, $tmp847);
    panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp848, &$s849);
    selfType845 = $tmp850;
    (($fn852) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s851);
    panda$core$Bit $tmp853 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp853.value) {
    {
        (($fn855) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s854);
    }
    }
    panda$core$String* $tmp857 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s856, $tmp857);
    panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, &$s859);
    panda$core$String* $tmp861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp860, result839);
    panda$core$String* $tmp863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp861, &$s862);
    panda$core$String* $tmp864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp863, selfType845);
    panda$core$String* $tmp866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp864, &$s865);
    (($fn867) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp866);
    org$pandalanguage$pandac$Type* $tmp869 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType868 = $tmp869;
    org$pandalanguage$pandac$Type* $tmp871 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType870 = $tmp871;
    panda$core$Int64 $tmp873 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp872, ((panda$core$Int64) { 0 }), $tmp873, ((panda$core$Bit) { false }));
    int64_t $tmp875 = $tmp872.min.value;
    panda$core$Int64 i874 = { $tmp875 };
    int64_t $tmp877 = $tmp872.max.value;
    bool $tmp878 = $tmp872.inclusive.value;
    if ($tmp878) goto $l885; else goto $l886;
    $l885:;
    if ($tmp875 <= $tmp877) goto $l879; else goto $l881;
    $l886:;
    if ($tmp875 < $tmp877) goto $l879; else goto $l881;
    $l879:;
    {
        panda$core$Object* $tmp888 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType870->subtypes, i874);
        panda$core$String* $tmp889 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp888));
        panda$core$String* $tmp890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s887, $tmp889);
        panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp890, &$s891);
        panda$core$Object* $tmp893 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i874);
        panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp892, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp893)->name);
        panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp894, &$s895);
        (($fn897) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp896);
    }
    $l882:;
    int64_t $tmp899 = $tmp877 - i874.value;
    if ($tmp878) goto $l900; else goto $l901;
    $l900:;
    if ($tmp899 >= 1) goto $l898; else goto $l881;
    $l901:;
    if ($tmp899 > 1) goto $l898; else goto $l881;
    $l898:;
    i874.value += 1;
    goto $l879;
    $l881:;
    (($fn905) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s904);
    panda$core$Int64 $tmp906 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp906;
    panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s907, selfType845);
    panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, &$s909);
    (($fn911) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp910);
    panda$collections$Array* $tmp913 = (panda$collections$Array*) malloc(40);
    $tmp913->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp913->refCount.value = 1;
    panda$collections$Array$init($tmp913);
    parameters912 = $tmp913;
    panda$core$Int64 $tmp916 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp915, ((panda$core$Int64) { 0 }), $tmp916, ((panda$core$Bit) { false }));
    int64_t $tmp918 = $tmp915.min.value;
    panda$core$Int64 i917 = { $tmp918 };
    int64_t $tmp920 = $tmp915.max.value;
    bool $tmp921 = $tmp915.inclusive.value;
    if ($tmp921) goto $l928; else goto $l929;
    $l928:;
    if ($tmp918 <= $tmp920) goto $l922; else goto $l924;
    $l929:;
    if ($tmp918 < $tmp920) goto $l922; else goto $l924;
    $l922:;
    {
        panda$core$Object* $tmp931 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i917);
        panda$core$String* $tmp932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s930, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp931)->name);
        panda$core$Object* $tmp933 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType870->subtypes, i917);
        panda$core$Object* $tmp934 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType868->subtypes, i917);
        panda$core$String* $tmp935 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp932, ((org$pandalanguage$pandac$Type*) $tmp933), ((org$pandalanguage$pandac$Type*) $tmp934), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters912, ((panda$core$Object*) $tmp935));
    }
    $l925:;
    int64_t $tmp937 = $tmp920 - i917.value;
    if ($tmp921) goto $l938; else goto $l939;
    $l938:;
    if ($tmp937 >= 1) goto $l936; else goto $l924;
    $l939:;
    if ($tmp937 > 1) goto $l936; else goto $l924;
    $l936:;
    i917.value += 1;
    goto $l922;
    $l924:;
    panda$collections$Array* $tmp943 = (panda$collections$Array*) malloc(40);
    $tmp943->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp943->refCount.value = 1;
    panda$collections$Array$init($tmp943);
    children942 = $tmp943;
    org$pandalanguage$pandac$IRNode* $tmp945 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp945->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp945->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp947);
    org$pandalanguage$pandac$Type* $tmp948 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp945, ((panda$core$Int64) { 1025 }), $tmp947, $tmp948);
    panda$collections$Array$add$panda$collections$Array$T(children942, ((panda$core$Object*) $tmp945));
    org$pandalanguage$pandac$IRNode* $tmp950 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp950->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp950->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp952);
    org$pandalanguage$pandac$Type* $tmp953 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp950, ((panda$core$Int64) { 1009 }), $tmp952, $tmp953, ((panda$collections$ListView*) children942));
    panda$core$String* $tmp954 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp950, p_out);
    unwrapped949 = $tmp954;
    org$pandalanguage$pandac$Type* $tmp956 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp957 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp956);
    if ($tmp957.value) {
    {
        panda$core$String* $tmp958 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue955 = $tmp958;
        panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s959, returnValue955);
        panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp960, &$s961);
        (($fn963) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp962);
        panda$core$String* $tmp965 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s964, $tmp965);
        panda$core$String* $tmp968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp966, &$s967);
        panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, returnValue955);
        panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, &$s970);
        returnValue955 = $tmp971;
    }
    }
    else {
    {
        returnValue955 = &$s972;
    }
    }
    panda$core$String* $tmp974 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s973, $tmp974);
    panda$core$String* $tmp977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp975, &$s976);
    panda$core$String* $tmp978 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp977, $tmp978);
    panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp979, &$s980);
    panda$core$String* $tmp982 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp981, $tmp982);
    panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp983, &$s984);
    panda$core$String* $tmp986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, unwrapped949);
    panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp986, &$s987);
    (($fn989) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp988);
    panda$core$Int64 $tmp991 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp990, ((panda$core$Int64) { 0 }), $tmp991, ((panda$core$Bit) { false }));
    int64_t $tmp993 = $tmp990.min.value;
    panda$core$Int64 i992 = { $tmp993 };
    int64_t $tmp995 = $tmp990.max.value;
    bool $tmp996 = $tmp990.inclusive.value;
    if ($tmp996) goto $l1003; else goto $l1004;
    $l1003:;
    if ($tmp993 <= $tmp995) goto $l997; else goto $l999;
    $l1004:;
    if ($tmp993 < $tmp995) goto $l997; else goto $l999;
    $l997:;
    {
        panda$core$Object* $tmp1006 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType868->subtypes, i992);
        panda$core$String* $tmp1007 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1006));
        panda$core$String* $tmp1008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1005, $tmp1007);
        panda$core$String* $tmp1010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1008, &$s1009);
        panda$core$Object* $tmp1011 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters912, i992);
        panda$core$String* $tmp1012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1010, ((panda$core$String*) $tmp1011));
        panda$core$String* $tmp1014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1012, &$s1013);
        (($fn1015) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1014);
    }
    $l1000:;
    int64_t $tmp1017 = $tmp995 - i992.value;
    if ($tmp996) goto $l1018; else goto $l1019;
    $l1018:;
    if ($tmp1017 >= 1) goto $l1016; else goto $l999;
    $l1019:;
    if ($tmp1017 > 1) goto $l1016; else goto $l999;
    $l1016:;
    i992.value += 1;
    goto $l997;
    $l999:;
    (($fn1023) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1022);
    panda$core$String* $tmp1025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1024, returnValue955);
    panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1025, &$s1026);
    (($fn1028) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1027);
    panda$core$Int64 $tmp1029 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1029;
    (($fn1031) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1030);
    self->varCount = oldVarCount838;
    return result839;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1032;
    panda$core$String* previous1035;
    panda$collections$Iterator* intfType$Iter1037;
    org$pandalanguage$pandac$Type* intfType1049;
    org$pandalanguage$pandac$ClassDecl* intf1054;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1056;
    panda$collections$ListView* methods1058;
    panda$core$String* name1060;
    panda$core$String* t1070;
    panda$core$MutableString* result1084;
    panda$core$String* separator1124;
    panda$collections$Iterator* m$Iter1126;
    org$pandalanguage$pandac$MethodDecl* m1138;
    panda$core$String* shim1146;
    org$pandalanguage$pandac$Type* $tmp1033 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1034 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1033);
    interfaces1032 = $tmp1034;
    previous1035 = &$s1036;
    {
        ITable* $tmp1038 = ((panda$collections$Iterable*) interfaces1032)->$class->itable;
        while ($tmp1038->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1038 = $tmp1038->next;
        }
        $fn1040 $tmp1039 = $tmp1038->methods[0];
        panda$collections$Iterator* $tmp1041 = $tmp1039(((panda$collections$Iterable*) interfaces1032));
        intfType$Iter1037 = $tmp1041;
        $l1042:;
        ITable* $tmp1044 = intfType$Iter1037->$class->itable;
        while ($tmp1044->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1044 = $tmp1044->next;
        }
        $fn1046 $tmp1045 = $tmp1044->methods[0];
        panda$core$Bit $tmp1047 = $tmp1045(intfType$Iter1037);
        panda$core$Bit $tmp1048 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1047);
        if (!$tmp1048.value) goto $l1043;
        {
            ITable* $tmp1050 = intfType$Iter1037->$class->itable;
            while ($tmp1050->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1050 = $tmp1050->next;
            }
            $fn1052 $tmp1051 = $tmp1050->methods[1];
            panda$core$Object* $tmp1053 = $tmp1051(intfType$Iter1037);
            intfType1049 = ((org$pandalanguage$pandac$Type*) $tmp1053);
            org$pandalanguage$pandac$ClassDecl* $tmp1055 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1049);
            intf1054 = $tmp1055;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1057 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1054);
            intfCC1056 = $tmp1057;
            panda$collections$ListView* $tmp1059 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1049);
            methods1058 = $tmp1059;
            panda$core$String* $tmp1062 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1061, $tmp1062);
            panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1063, &$s1064);
            panda$core$String* $tmp1066 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1054)->name);
            panda$core$String* $tmp1067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1065, $tmp1066);
            panda$core$String* $tmp1069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1067, &$s1068);
            name1060 = $tmp1069;
            org$pandalanguage$pandac$Type* $tmp1072 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1073 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1072);
            panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1071, $tmp1073);
            panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, &$s1075);
            ITable* $tmp1077 = ((panda$collections$CollectionView*) methods1058)->$class->itable;
            while ($tmp1077->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1077 = $tmp1077->next;
            }
            $fn1079 $tmp1078 = $tmp1077->methods[0];
            panda$core$Int64 $tmp1080 = $tmp1078(((panda$collections$CollectionView*) methods1058));
            panda$core$String* $tmp1081 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1076, ((panda$core$Object*) wrap_panda$core$Int64($tmp1080)));
            panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1081, &$s1082);
            t1070 = $tmp1083;
            panda$core$MutableString* $tmp1085 = (panda$core$MutableString*) malloc(40);
            $tmp1085->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1085->refCount.value = 1;
            panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1087, name1060);
            panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1088, &$s1089);
            panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1090, t1070);
            panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1092);
            org$pandalanguage$pandac$Type* $tmp1094 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1095 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1094);
            panda$core$String* $tmp1096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1093, $tmp1095);
            panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1096, &$s1097);
            panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1099, intfCC1056->type);
            panda$core$String* $tmp1102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1100, &$s1101);
            panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1102, intfCC1056->name);
            panda$core$String* $tmp1105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1103, &$s1104);
            org$pandalanguage$pandac$Type* $tmp1106 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1107 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1106);
            panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1105, $tmp1107);
            panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1108, &$s1109);
            panda$core$String* $tmp1111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, $tmp1110);
            panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1112, previous1035);
            panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1113, &$s1114);
            ITable* $tmp1116 = ((panda$collections$CollectionView*) methods1058)->$class->itable;
            while ($tmp1116->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1116 = $tmp1116->next;
            }
            $fn1118 $tmp1117 = $tmp1116->methods[0];
            panda$core$Int64 $tmp1119 = $tmp1117(((panda$collections$CollectionView*) methods1058));
            panda$core$String* $tmp1120 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1115, ((panda$core$Object*) wrap_panda$core$Int64($tmp1119)));
            panda$core$String* $tmp1122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1120, &$s1121);
            panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1111, $tmp1122);
            panda$core$MutableString$init$panda$core$String($tmp1085, $tmp1123);
            result1084 = $tmp1085;
            separator1124 = &$s1125;
            {
                ITable* $tmp1127 = ((panda$collections$Iterable*) methods1058)->$class->itable;
                while ($tmp1127->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1127 = $tmp1127->next;
                }
                $fn1129 $tmp1128 = $tmp1127->methods[0];
                panda$collections$Iterator* $tmp1130 = $tmp1128(((panda$collections$Iterable*) methods1058));
                m$Iter1126 = $tmp1130;
                $l1131:;
                ITable* $tmp1133 = m$Iter1126->$class->itable;
                while ($tmp1133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1133 = $tmp1133->next;
                }
                $fn1135 $tmp1134 = $tmp1133->methods[0];
                panda$core$Bit $tmp1136 = $tmp1134(m$Iter1126);
                panda$core$Bit $tmp1137 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1136);
                if (!$tmp1137.value) goto $l1132;
                {
                    ITable* $tmp1139 = m$Iter1126->$class->itable;
                    while ($tmp1139->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1139 = $tmp1139->next;
                    }
                    $fn1141 $tmp1140 = $tmp1139->methods[1];
                    panda$core$Object* $tmp1142 = $tmp1140(m$Iter1126);
                    m1138 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1142);
                    panda$core$MutableString$append$panda$core$String(result1084, separator1124);
                    separator1124 = &$s1143;
                    panda$core$Bit $tmp1144 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1138->annotations);
                    if ($tmp1144.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1084, &$s1145);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1147 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1138, self->wrapperShims);
                        shim1146 = $tmp1147;
                        panda$core$String* $tmp1149 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1138);
                        panda$core$String* $tmp1150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1148, $tmp1149);
                        panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1150, &$s1151);
                        panda$core$String* $tmp1153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1152, shim1146);
                        panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1153, &$s1154);
                        panda$core$MutableString$append$panda$core$String(result1084, $tmp1155);
                    }
                    }
                }
                goto $l1131;
                $l1132:;
            }
            panda$core$MutableString$append$panda$core$String(result1084, &$s1156);
            panda$core$String* $tmp1157 = panda$core$MutableString$finish$R$panda$core$String(result1084);
            (($fn1158) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1157);
            panda$core$String* $tmp1160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1159, t1070);
            panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1160, &$s1161);
            panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1162, name1060);
            panda$core$String* $tmp1165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, &$s1164);
            previous1035 = $tmp1165;
        }
        goto $l1042;
        $l1043:;
    }
    return previous1035;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1168;
    panda$core$Bit $tmp1166 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1167 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1166);
    if ($tmp1167.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1171 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1170 = $tmp1171.value;
    if (!$tmp1170) goto $l1172;
    panda$core$Bit $tmp1173 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1170 = $tmp1173.value;
    $l1172:;
    panda$core$Bit $tmp1174 = { $tmp1170 };
    bool $tmp1169 = $tmp1174.value;
    if (!$tmp1169) goto $l1175;
    org$pandalanguage$pandac$ClassDecl* $tmp1176 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1177 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1176);
    $tmp1169 = $tmp1177.value;
    $l1175:;
    panda$core$Bit $tmp1178 = { $tmp1169 };
    result1168 = $tmp1178;
    panda$core$Bit $tmp1180 = panda$core$Bit$$NOT$R$panda$core$Bit(result1168);
    bool $tmp1179 = $tmp1180.value;
    if ($tmp1179) goto $l1181;
    panda$core$Bit $tmp1183 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1184 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1183);
    bool $tmp1182 = $tmp1184.value;
    if (!$tmp1182) goto $l1185;
    panda$core$Bit $tmp1187 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1186 = $tmp1187.value;
    if ($tmp1186) goto $l1188;
    panda$core$Bit $tmp1189 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1186 = $tmp1189.value;
    $l1188:;
    panda$core$Bit $tmp1190 = { $tmp1186 };
    $tmp1182 = $tmp1190.value;
    $l1185:;
    panda$core$Bit $tmp1191 = { $tmp1182 };
    $tmp1179 = $tmp1191.value;
    $l1181:;
    panda$core$Bit $tmp1192 = { $tmp1179 };
    PANDA_ASSERT($tmp1192.value);
    return result1168;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1193;
    org$pandalanguage$pandac$Type* declared1194;
    org$pandalanguage$pandac$Type* inherited1197;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1200;
    panda$core$MutableString* resultType1205;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1214;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1195 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1196 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1195);
    declared1194 = $tmp1196;
    org$pandalanguage$pandac$Type* $tmp1198 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1197 = $tmp1198;
    panda$core$Bit $tmp1199 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1194, inherited1197);
    if ($tmp1199.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1201 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1202 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1201, ((panda$io$OutputStream*) self->shims));
        shim1200 = $tmp1202;
        resultName1193 = shim1200->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1203 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1193 = $tmp1203;
    }
    }
    panda$core$Bit $tmp1204 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1204.value) {
    {
        panda$core$MutableString* $tmp1206 = (panda$core$MutableString*) malloc(40);
        $tmp1206->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1206->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1206, &$s1208);
        resultType1205 = $tmp1206;
        panda$core$Int64 $tmp1209 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1197->subtypes);
        panda$core$Int64 $tmp1210 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1209, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1211 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1197->subtypes, $tmp1210);
        panda$core$String* $tmp1212 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1211));
        panda$core$MutableString$append$panda$core$String(resultType1205, $tmp1212);
        panda$core$MutableString$append$panda$core$String(resultType1205, &$s1213);
        panda$core$Int64 $tmp1215 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1197->subtypes);
        panda$core$Int64 $tmp1216 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1215, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1214, ((panda$core$Int64) { 0 }), $tmp1216, ((panda$core$Bit) { false }));
        int64_t $tmp1218 = $tmp1214.min.value;
        panda$core$Int64 i1217 = { $tmp1218 };
        int64_t $tmp1220 = $tmp1214.max.value;
        bool $tmp1221 = $tmp1214.inclusive.value;
        if ($tmp1221) goto $l1228; else goto $l1229;
        $l1228:;
        if ($tmp1218 <= $tmp1220) goto $l1222; else goto $l1224;
        $l1229:;
        if ($tmp1218 < $tmp1220) goto $l1222; else goto $l1224;
        $l1222:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1205, &$s1230);
            panda$core$Object* $tmp1231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1197->subtypes, i1217);
            panda$core$String* $tmp1232 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1231));
            panda$core$MutableString$append$panda$core$String(resultType1205, $tmp1232);
        }
        $l1225:;
        int64_t $tmp1234 = $tmp1220 - i1217.value;
        if ($tmp1221) goto $l1235; else goto $l1236;
        $l1235:;
        if ($tmp1234 >= 1) goto $l1233; else goto $l1224;
        $l1236:;
        if ($tmp1234 > 1) goto $l1233; else goto $l1224;
        $l1233:;
        i1217.value += 1;
        goto $l1222;
        $l1224:;
        panda$core$MutableString$append$panda$core$String(resultType1205, &$s1239);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1240 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1240->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1240->refCount.value = 1;
        panda$core$String* $tmp1242 = panda$core$MutableString$finish$R$panda$core$String(resultType1205);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1240, ((panda$core$Object*) resultName1193), ((panda$core$Object*) $tmp1242));
        return $tmp1240;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1243 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1243->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1243->refCount.value = 1;
    panda$core$String* $tmp1245 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1197);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1243, ((panda$core$Object*) resultName1193), ((panda$core$Object*) $tmp1245));
    return $tmp1243;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1248;
    panda$core$String* type1250;
    panda$collections$ListView* vtable1269;
    panda$core$String* superPtr1293;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1294;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1305;
    panda$core$MutableString* code1309;
    panda$core$String* separator1352;
    panda$collections$Iterator* m$Iter1354;
    org$pandalanguage$pandac$MethodDecl* m1366;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1373;
    panda$core$Bit $tmp1246 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1247 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1246);
    PANDA_ASSERT($tmp1247.value);
    panda$core$Object* $tmp1249 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1248 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1249);
    if (((panda$core$Bit) { result1248 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1251 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1251->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1251->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1254 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1255 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1254)->name);
            panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1253, $tmp1255);
            panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, &$s1257);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1251, $tmp1258, &$s1259);
            result1248 = $tmp1251;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1248));
            panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1260, result1248->name);
            panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, &$s1262);
            panda$core$String* $tmp1264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1263, result1248->type);
            panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1264, &$s1265);
            (($fn1267) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1266);
            panda$core$Object* $tmp1268 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1268);
        }
        }
        panda$collections$ListView* $tmp1270 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1269 = $tmp1270;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1271 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1271->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1271->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1274 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1275 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1274)->name);
        panda$core$String* $tmp1276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1273, $tmp1275);
        panda$core$String* $tmp1278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1276, &$s1277);
        panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1279, &$s1280);
        panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1281, &$s1282);
        ITable* $tmp1285 = ((panda$collections$CollectionView*) vtable1269)->$class->itable;
        while ($tmp1285->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1285 = $tmp1285->next;
        }
        $fn1287 $tmp1286 = $tmp1285->methods[0];
        panda$core$Int64 $tmp1288 = $tmp1286(((panda$collections$CollectionView*) vtable1269));
        panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1284, ((panda$core$Object*) wrap_panda$core$Int64($tmp1288)));
        panda$core$String* $tmp1291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1289, &$s1290);
        panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1283, $tmp1291);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1271, $tmp1278, $tmp1292);
        result1248 = $tmp1271;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1248));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1295 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1296 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1295);
            superCC1294 = $tmp1296;
            panda$core$String* $tmp1298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1297, superCC1294->type);
            panda$core$String* $tmp1300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1298, &$s1299);
            panda$core$String* $tmp1301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1300, superCC1294->name);
            panda$core$String* $tmp1303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1301, &$s1302);
            superPtr1293 = $tmp1303;
        }
        }
        else {
        {
            superPtr1293 = &$s1304;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1306 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1307 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1306);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1308 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1307);
        clConstant1305 = $tmp1308;
        panda$core$MutableString* $tmp1310 = (panda$core$MutableString*) malloc(40);
        $tmp1310->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1310->refCount.value = 1;
        panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1312, result1248->name);
        panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1313, &$s1314);
        panda$core$MutableString$init$panda$core$String($tmp1310, $tmp1315);
        code1309 = $tmp1310;
        panda$core$Bit $tmp1316 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1316.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1309, &$s1317);
        }
        }
        panda$core$String* $tmp1319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1318, result1248->type);
        panda$core$String* $tmp1321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1319, &$s1320);
        panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1322, clConstant1305->type);
        panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1324);
        panda$core$String* $tmp1326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1325, clConstant1305->name);
        panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1326, &$s1327);
        panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1321, $tmp1328);
        panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1330, &$s1331);
        panda$core$String* $tmp1334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1332, &$s1333);
        panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1334, superPtr1293);
        panda$core$String* $tmp1337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, &$s1336);
        panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, $tmp1337);
        panda$core$String* $tmp1340 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1339, $tmp1340);
        panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1341, &$s1342);
        ITable* $tmp1344 = ((panda$collections$CollectionView*) vtable1269)->$class->itable;
        while ($tmp1344->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1344 = $tmp1344->next;
        }
        $fn1346 $tmp1345 = $tmp1344->methods[0];
        panda$core$Int64 $tmp1347 = $tmp1345(((panda$collections$CollectionView*) vtable1269));
        panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1343, ((panda$core$Object*) wrap_panda$core$Int64($tmp1347)));
        panda$core$String* $tmp1350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1348, &$s1349);
        panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1338, $tmp1350);
        panda$core$MutableString$append$panda$core$String(code1309, $tmp1351);
        separator1352 = &$s1353;
        {
            ITable* $tmp1355 = ((panda$collections$Iterable*) vtable1269)->$class->itable;
            while ($tmp1355->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1355 = $tmp1355->next;
            }
            $fn1357 $tmp1356 = $tmp1355->methods[0];
            panda$collections$Iterator* $tmp1358 = $tmp1356(((panda$collections$Iterable*) vtable1269));
            m$Iter1354 = $tmp1358;
            $l1359:;
            ITable* $tmp1361 = m$Iter1354->$class->itable;
            while ($tmp1361->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1361 = $tmp1361->next;
            }
            $fn1363 $tmp1362 = $tmp1361->methods[0];
            panda$core$Bit $tmp1364 = $tmp1362(m$Iter1354);
            panda$core$Bit $tmp1365 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1364);
            if (!$tmp1365.value) goto $l1360;
            {
                ITable* $tmp1367 = m$Iter1354->$class->itable;
                while ($tmp1367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1367 = $tmp1367->next;
                }
                $fn1369 $tmp1368 = $tmp1367->methods[1];
                panda$core$Object* $tmp1370 = $tmp1368(m$Iter1354);
                m1366 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1370);
                panda$core$MutableString$append$panda$core$String(code1309, separator1352);
                panda$core$Bit $tmp1371 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1366->annotations);
                if ($tmp1371.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1309, &$s1372);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1374 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1366);
                    entry1373 = $tmp1374;
                    panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1375, ((panda$core$String*) entry1373->second));
                    panda$core$String* $tmp1378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1376, &$s1377);
                    panda$core$String* $tmp1379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1378, ((panda$core$String*) entry1373->first));
                    panda$core$String* $tmp1381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1379, &$s1380);
                    panda$core$MutableString$append$panda$core$String(code1309, $tmp1381);
                }
                }
                separator1352 = &$s1382;
            }
            goto $l1359;
            $l1360:;
        }
        panda$core$MutableString$append$panda$core$String(code1309, &$s1383);
        panda$core$String* $tmp1384 = panda$core$MutableString$finish$R$panda$core$String(code1309);
        (($fn1385) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1384);
    }
    }
    return result1248;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1386;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1392;
    panda$core$String* type1395;
    org$pandalanguage$pandac$ClassDecl* value1407;
    panda$collections$ListView* valueVTable1410;
    panda$collections$ListView* vtable1433;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1435;
    panda$core$String* superCast1438;
    panda$core$String* itable1446;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1448;
    panda$core$MutableString* code1452;
    panda$core$String* separator1499;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1501;
    org$pandalanguage$pandac$MethodDecl* m1519;
    panda$core$String* methodName1524;
    PANDA_ASSERT(p_cl->resolved.value);
    panda$core$String* $tmp1388 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1387, $tmp1388);
    panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, &$s1390);
    name1386 = $tmp1391;
    panda$core$Object* $tmp1393 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1386));
    result1392 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1393);
    if (((panda$core$Bit) { result1392 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1394 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1394);
            type1395 = &$s1396;
            panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1397, name1386);
            panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1398, &$s1399);
            panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1400, type1395);
            panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1401, &$s1402);
            (($fn1404) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1403);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1405 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1405->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1405->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1405, name1386, type1395);
            result1392 = $tmp1405;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1408 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1409 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1408);
            value1407 = $tmp1409;
            panda$collections$ListView* $tmp1411 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1407);
            valueVTable1410 = $tmp1411;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1412 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1412->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1412->refCount.value = 1;
            panda$core$String* $tmp1415 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1414, $tmp1415);
            panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1416, &$s1417);
            panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1419, &$s1420);
            panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1422);
            ITable* $tmp1425 = ((panda$collections$CollectionView*) valueVTable1410)->$class->itable;
            while ($tmp1425->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1425 = $tmp1425->next;
            }
            $fn1427 $tmp1426 = $tmp1425->methods[0];
            panda$core$Int64 $tmp1428 = $tmp1426(((panda$collections$CollectionView*) valueVTable1410));
            panda$core$String* $tmp1429 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1424, ((panda$core$Object*) wrap_panda$core$Int64($tmp1428)));
            panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, &$s1430);
            panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, $tmp1431);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1412, $tmp1418, $tmp1432);
            result1392 = $tmp1412;
            panda$collections$ListView* $tmp1434 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1433 = $tmp1434;
            org$pandalanguage$pandac$ClassDecl* $tmp1436 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1437 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1436);
            superCC1435 = $tmp1437;
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1439, superCC1435->type);
            panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, &$s1441);
            panda$core$String* $tmp1443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1442, superCC1435->name);
            panda$core$String* $tmp1445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1443, &$s1444);
            superCast1438 = $tmp1445;
            panda$core$String* $tmp1447 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1446 = $tmp1447;
            org$pandalanguage$pandac$Type* $tmp1449 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1450 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1449);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1451 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1450);
            clConstant1448 = $tmp1451;
            panda$core$MutableString* $tmp1453 = (panda$core$MutableString*) malloc(40);
            $tmp1453->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1453->refCount.value = 1;
            panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1455, result1392->name);
            panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1456, &$s1457);
            panda$core$MutableString$init$panda$core$String($tmp1453, $tmp1458);
            code1452 = $tmp1453;
            panda$core$Bit $tmp1459 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1459.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1452, &$s1460);
            }
            }
            panda$core$String* $tmp1462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1461, result1392->type);
            panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, &$s1463);
            panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1465, clConstant1448->type);
            panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, &$s1467);
            panda$core$String* $tmp1469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, clConstant1448->name);
            panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1469, &$s1470);
            panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1464, $tmp1471);
            panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1473, &$s1474);
            panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1475, &$s1476);
            org$pandalanguage$pandac$Type* $tmp1478 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1479 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1478);
            panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1477, $tmp1479);
            panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1480, &$s1481);
            panda$core$String* $tmp1483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, superCast1438);
            panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1483, &$s1484);
            panda$core$String* $tmp1486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1472, $tmp1485);
            panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1487, itable1446);
            panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1488, &$s1489);
            ITable* $tmp1491 = ((panda$collections$CollectionView*) valueVTable1410)->$class->itable;
            while ($tmp1491->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1491 = $tmp1491->next;
            }
            $fn1493 $tmp1492 = $tmp1491->methods[0];
            panda$core$Int64 $tmp1494 = $tmp1492(((panda$collections$CollectionView*) valueVTable1410));
            panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1490, ((panda$core$Object*) wrap_panda$core$Int64($tmp1494)));
            panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1495, &$s1496);
            panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1486, $tmp1497);
            panda$core$MutableString$append$panda$core$String(code1452, $tmp1498);
            separator1499 = &$s1500;
            ITable* $tmp1502 = ((panda$collections$CollectionView*) valueVTable1410)->$class->itable;
            while ($tmp1502->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1502 = $tmp1502->next;
            }
            $fn1504 $tmp1503 = $tmp1502->methods[0];
            panda$core$Int64 $tmp1505 = $tmp1503(((panda$collections$CollectionView*) valueVTable1410));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1501, ((panda$core$Int64) { 0 }), $tmp1505, ((panda$core$Bit) { false }));
            int64_t $tmp1507 = $tmp1501.min.value;
            panda$core$Int64 i1506 = { $tmp1507 };
            int64_t $tmp1509 = $tmp1501.max.value;
            bool $tmp1510 = $tmp1501.inclusive.value;
            if ($tmp1510) goto $l1517; else goto $l1518;
            $l1517:;
            if ($tmp1507 <= $tmp1509) goto $l1511; else goto $l1513;
            $l1518:;
            if ($tmp1507 < $tmp1509) goto $l1511; else goto $l1513;
            $l1511:;
            {
                ITable* $tmp1520 = vtable1433->$class->itable;
                while ($tmp1520->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1520 = $tmp1520->next;
                }
                $fn1522 $tmp1521 = $tmp1520->methods[0];
                panda$core$Object* $tmp1523 = $tmp1521(vtable1433, i1506);
                m1519 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1523);
                if (((panda$core$Bit) { ((panda$core$Object*) m1519->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1525 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1519, self->wrapperShims);
                    methodName1524 = $tmp1525;
                }
                }
                else {
                {
                    panda$core$String* $tmp1526 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1519);
                    methodName1524 = $tmp1526;
                    if (m1519->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1519);
                    }
                    }
                }
                }
                panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1527, separator1499);
                panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1528, &$s1529);
                panda$core$String* $tmp1531 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1519);
                panda$core$String* $tmp1532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, $tmp1531);
                panda$core$String* $tmp1534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1532, &$s1533);
                panda$core$String* $tmp1535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1534, methodName1524);
                panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1535, &$s1536);
                panda$core$MutableString$append$panda$core$String(code1452, $tmp1537);
                separator1499 = &$s1538;
            }
            $l1514:;
            int64_t $tmp1540 = $tmp1509 - i1506.value;
            if ($tmp1510) goto $l1541; else goto $l1542;
            $l1541:;
            if ($tmp1540 >= 1) goto $l1539; else goto $l1513;
            $l1542:;
            if ($tmp1540 > 1) goto $l1539; else goto $l1513;
            $l1539:;
            i1506.value += 1;
            goto $l1511;
            $l1513:;
            panda$core$MutableString$append$panda$core$String(code1452, &$s1545);
            panda$core$String* $tmp1546 = panda$core$MutableString$finish$R$panda$core$String(code1452);
            (($fn1547) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1546);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1386), ((panda$core$Object*) result1392));
    }
    }
    return result1392;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1550 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1548, &$s1549);
    panda$core$String* $tmp1553 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1550, &$s1551, &$s1552);
    panda$core$String* $tmp1556 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1553, &$s1554, &$s1555);
    panda$core$String* $tmp1559 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1556, &$s1557, &$s1558);
    panda$core$String* $tmp1562 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1559, &$s1560, &$s1561);
    panda$core$String* $tmp1565 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1562, &$s1563, &$s1564);
    return $tmp1565;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1569;
    panda$core$String* result1597;
    panda$core$Bit $tmp1566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1566.value) {
    {
        panda$core$Int64 $tmp1567 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1568 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1567, ((panda$core$Int64) { 0 }));
        if ($tmp1568.value) {
        {
            panda$core$Int64 $tmp1570 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1569, ((panda$core$Int64) { 0 }), $tmp1570, ((panda$core$Bit) { false }));
            int64_t $tmp1572 = $tmp1569.min.value;
            panda$core$Int64 i1571 = { $tmp1572 };
            int64_t $tmp1574 = $tmp1569.max.value;
            bool $tmp1575 = $tmp1569.inclusive.value;
            if ($tmp1575) goto $l1582; else goto $l1583;
            $l1582:;
            if ($tmp1572 <= $tmp1574) goto $l1576; else goto $l1578;
            $l1583:;
            if ($tmp1572 < $tmp1574) goto $l1576; else goto $l1578;
            $l1576:;
            {
                panda$core$Object* $tmp1584 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1571);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1584)->name) }).value) {
                {
                    panda$core$Object* $tmp1585 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1586 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1585)->argRefs, i1571);
                    return ((panda$core$String*) $tmp1586);
                }
                }
            }
            $l1579:;
            int64_t $tmp1588 = $tmp1574 - i1571.value;
            if ($tmp1575) goto $l1589; else goto $l1590;
            $l1589:;
            if ($tmp1588 >= 1) goto $l1587; else goto $l1578;
            $l1590:;
            if ($tmp1588 > 1) goto $l1587; else goto $l1578;
            $l1587:;
            i1571.value += 1;
            goto $l1576;
            $l1578:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1593, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1594, &$s1595);
        return $tmp1596;
    }
    }
    panda$core$Object* $tmp1598 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1597 = ((panda$core$String*) $tmp1598);
    if (((panda$core$Bit) { result1597 == NULL }).value) {
    {
        panda$core$Int64 $tmp1599 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1599;
        panda$core$String* $tmp1601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1600, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1601, &$s1602);
        panda$core$String* $tmp1604 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1603, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1604, &$s1605);
        result1597 = $tmp1606;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1597));
    }
    }
    panda$core$Int64 $tmp1607 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1608 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1607, ((panda$core$Int64) { 0 }));
    if ($tmp1608.value) {
    {
        panda$core$Object* $tmp1609 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1597, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1609)->varSuffix);
        result1597 = $tmp1610;
    }
    }
    return result1597;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1614;
    panda$core$String* $match$846_91620;
    panda$collections$Iterator* p$Iter1697;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1709;
    panda$core$Bit $tmp1612 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1611);
    if ($tmp1612.value) {
    {
        return &$s1613;
    }
    }
    panda$core$MutableString* $tmp1615 = (panda$core$MutableString*) malloc(40);
    $tmp1615->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1615->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1615, &$s1617);
    result1614 = $tmp1615;
    panda$core$String* $tmp1618 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1614, $tmp1618);
    panda$core$MutableString$append$panda$core$String(result1614, &$s1619);
    {
        $match$846_91620 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1622 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1621);
        if ($tmp1622.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1623);
        }
        }
        else {
        panda$core$Bit $tmp1625 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1624);
        if ($tmp1625.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1626);
        }
        }
        else {
        panda$core$Bit $tmp1628 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1627);
        if ($tmp1628.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1629);
        }
        }
        else {
        panda$core$Bit $tmp1631 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1630);
        if ($tmp1631.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1632);
        }
        }
        else {
        panda$core$Bit $tmp1634 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1633);
        if ($tmp1634.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1635);
        }
        }
        else {
        panda$core$Bit $tmp1637 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1636);
        if ($tmp1637.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1638);
        }
        }
        else {
        panda$core$Bit $tmp1640 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1639);
        if ($tmp1640.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1641);
        }
        }
        else {
        panda$core$Bit $tmp1643 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1642);
        if ($tmp1643.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1644);
        }
        }
        else {
        panda$core$Bit $tmp1646 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1645);
        if ($tmp1646.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1647);
        }
        }
        else {
        panda$core$Bit $tmp1649 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1648);
        if ($tmp1649.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1650);
        }
        }
        else {
        panda$core$Bit $tmp1652 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1651);
        if ($tmp1652.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1653);
        }
        }
        else {
        panda$core$Bit $tmp1655 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1654);
        if ($tmp1655.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1656);
        }
        }
        else {
        panda$core$Bit $tmp1658 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1657);
        if ($tmp1658.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1659);
        }
        }
        else {
        panda$core$Bit $tmp1661 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1660);
        if ($tmp1661.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1662);
        }
        }
        else {
        panda$core$Bit $tmp1664 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1663);
        if ($tmp1664.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1665);
        }
        }
        else {
        panda$core$Bit $tmp1667 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1666);
        if ($tmp1667.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1668);
        }
        }
        else {
        panda$core$Bit $tmp1670 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1669);
        if ($tmp1670.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1671);
        }
        }
        else {
        panda$core$Bit $tmp1673 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1672);
        if ($tmp1673.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1674);
        }
        }
        else {
        panda$core$Bit $tmp1676 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1675);
        if ($tmp1676.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1677);
        }
        }
        else {
        panda$core$Bit $tmp1679 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1678);
        if ($tmp1679.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1680);
        }
        }
        else {
        panda$core$Bit $tmp1682 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1681);
        if ($tmp1682.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1683);
        }
        }
        else {
        panda$core$Bit $tmp1685 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1684);
        if ($tmp1685.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1686);
        }
        }
        else {
        panda$core$Bit $tmp1688 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1687);
        if ($tmp1688.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1689);
        }
        }
        else {
        panda$core$Bit $tmp1691 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1690);
        if ($tmp1691.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1692);
        }
        }
        else {
        panda$core$Bit $tmp1694 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$846_91620, &$s1693);
        if ($tmp1694.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1614, &$s1695);
        }
        }
        else {
        {
            panda$core$String* $tmp1696 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1614, $tmp1696);
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
        ITable* $tmp1698 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1698->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1698 = $tmp1698->next;
        }
        $fn1700 $tmp1699 = $tmp1698->methods[0];
        panda$collections$Iterator* $tmp1701 = $tmp1699(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1697 = $tmp1701;
        $l1702:;
        ITable* $tmp1704 = p$Iter1697->$class->itable;
        while ($tmp1704->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1704 = $tmp1704->next;
        }
        $fn1706 $tmp1705 = $tmp1704->methods[0];
        panda$core$Bit $tmp1707 = $tmp1705(p$Iter1697);
        panda$core$Bit $tmp1708 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1707);
        if (!$tmp1708.value) goto $l1703;
        {
            ITable* $tmp1710 = p$Iter1697->$class->itable;
            while ($tmp1710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1710 = $tmp1710->next;
            }
            $fn1712 $tmp1711 = $tmp1710->methods[1];
            panda$core$Object* $tmp1713 = $tmp1711(p$Iter1697);
            p1709 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1713);
            panda$core$String* $tmp1715 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1709->type)->name);
            panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1714, $tmp1715);
            panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1716, &$s1717);
            panda$core$MutableString$append$panda$core$String(result1614, $tmp1718);
        }
        goto $l1702;
        $l1703:;
    }
    org$pandalanguage$pandac$Type* $tmp1719 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1720 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1719);
    if ($tmp1720.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1614, &$s1721);
        panda$core$String* $tmp1722 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1614, $tmp1722);
    }
    }
    panda$core$String* $tmp1723 = panda$core$MutableString$finish$R$panda$core$String(result1614);
    return $tmp1723;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1724 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1724.value);
    panda$core$String* $tmp1726 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1725, $tmp1726);
    panda$core$String* $tmp1729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, &$s1728);
    panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, &$s1731);
    return $tmp1732;
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
    panda$core$String* leftRef1733;
    panda$core$String* leftField1737;
    panda$core$String* start1747;
    panda$core$String* ifTrue1748;
    panda$core$String* ifFalse1750;
    panda$core$String* rightRef1763;
    panda$core$String* rightField1767;
    panda$core$String* truePred1777;
    panda$core$String* result1783;
    panda$core$String* $tmp1734 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1733 = $tmp1734;
    org$pandalanguage$pandac$Type* $tmp1735 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1736 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1735);
    if ($tmp1736.value) {
    {
        panda$core$String* $tmp1738 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1737 = $tmp1738;
        panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1739, leftField1737);
        panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1740, &$s1741);
        panda$core$String* $tmp1743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1742, leftRef1733);
        panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1743, &$s1744);
        (($fn1746) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1745);
        leftRef1733 = leftField1737;
    }
    }
    start1747 = self->currentBlock;
    panda$core$String* $tmp1749 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1748 = $tmp1749;
    panda$core$String* $tmp1751 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1750 = $tmp1751;
    panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1752, leftRef1733);
    panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1754);
    panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, ifTrue1748);
    panda$core$String* $tmp1758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, &$s1757);
    panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1758, ifFalse1750);
    panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1759, &$s1760);
    (($fn1762) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1761);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1748, p_out);
    panda$core$String* $tmp1764 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1763 = $tmp1764;
    org$pandalanguage$pandac$Type* $tmp1765 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1766 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1765);
    if ($tmp1766.value) {
    {
        panda$core$String* $tmp1768 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1767 = $tmp1768;
        panda$core$String* $tmp1770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1769, rightField1767);
        panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1770, &$s1771);
        panda$core$String* $tmp1773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1772, rightRef1763);
        panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1773, &$s1774);
        (($fn1776) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1775);
        rightRef1763 = rightField1767;
    }
    }
    truePred1777 = self->currentBlock;
    panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1778, ifFalse1750);
    panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1779, &$s1780);
    (($fn1782) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1781);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1750, p_out);
    panda$core$String* $tmp1784 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1783 = $tmp1784;
    panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1785, result1783);
    panda$core$String* $tmp1788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1786, &$s1787);
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1788, start1747);
    panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1789, &$s1790);
    panda$core$String* $tmp1792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1791, rightRef1763);
    panda$core$String* $tmp1794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1792, &$s1793);
    panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1794, truePred1777);
    panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1795, &$s1796);
    (($fn1798) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1797);
    return result1783;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1799;
    panda$core$String* leftField1803;
    panda$core$String* start1813;
    panda$core$String* ifTrue1814;
    panda$core$String* ifFalse1816;
    panda$core$String* rightRef1829;
    panda$core$String* rightField1833;
    panda$core$String* falsePred1843;
    panda$core$String* result1849;
    panda$core$String* $tmp1800 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1799 = $tmp1800;
    org$pandalanguage$pandac$Type* $tmp1801 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1802 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1801);
    if ($tmp1802.value) {
    {
        panda$core$String* $tmp1804 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1803 = $tmp1804;
        panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1805, leftField1803);
        panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1806, &$s1807);
        panda$core$String* $tmp1809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1808, leftRef1799);
        panda$core$String* $tmp1811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1809, &$s1810);
        (($fn1812) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1811);
        leftRef1799 = leftField1803;
    }
    }
    start1813 = self->currentBlock;
    panda$core$String* $tmp1815 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1814 = $tmp1815;
    panda$core$String* $tmp1817 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1816 = $tmp1817;
    panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1818, leftRef1799);
    panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1819, &$s1820);
    panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, ifTrue1814);
    panda$core$String* $tmp1824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1823);
    panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, ifFalse1816);
    panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1825, &$s1826);
    (($fn1828) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1827);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1816, p_out);
    panda$core$String* $tmp1830 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1829 = $tmp1830;
    org$pandalanguage$pandac$Type* $tmp1831 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1832 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1831);
    if ($tmp1832.value) {
    {
        panda$core$String* $tmp1834 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1833 = $tmp1834;
        panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1835, rightField1833);
        panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1836, &$s1837);
        panda$core$String* $tmp1839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1838, rightRef1829);
        panda$core$String* $tmp1841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1839, &$s1840);
        (($fn1842) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1841);
        rightRef1829 = rightField1833;
    }
    }
    falsePred1843 = self->currentBlock;
    panda$core$String* $tmp1845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1844, ifTrue1814);
    panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1845, &$s1846);
    (($fn1848) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1847);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1814, p_out);
    panda$core$String* $tmp1850 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1849 = $tmp1850;
    panda$core$String* $tmp1852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1851, result1849);
    panda$core$String* $tmp1854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1852, &$s1853);
    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1854, start1813);
    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1856);
    panda$core$String* $tmp1858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1857, rightRef1829);
    panda$core$String* $tmp1860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1859);
    panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, falsePred1843);
    panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1862);
    (($fn1864) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1863);
    return result1849;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp1865;
    panda$core$String* result1908;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1865 = &$s1866;
                }
                break;
                case 52:
                {
                    llvmOp1865 = &$s1867;
                }
                break;
                case 53:
                {
                    llvmOp1865 = &$s1868;
                }
                break;
                case 55:
                {
                    llvmOp1865 = &$s1869;
                }
                break;
                case 56:
                {
                    llvmOp1865 = &$s1870;
                }
                break;
                case 72:
                {
                    llvmOp1865 = &$s1871;
                }
                break;
                case 1:
                {
                    llvmOp1865 = &$s1872;
                }
                break;
                case 67:
                {
                    llvmOp1865 = &$s1873;
                }
                break;
                case 69:
                {
                    llvmOp1865 = &$s1874;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1865 = &$s1875;
                }
                break;
                case 58:
                {
                    llvmOp1865 = &$s1876;
                }
                break;
                case 59:
                {
                    llvmOp1865 = &$s1877;
                }
                break;
                case 63:
                {
                    llvmOp1865 = &$s1878;
                }
                break;
                case 62:
                {
                    llvmOp1865 = &$s1879;
                }
                break;
                case 65:
                {
                    llvmOp1865 = &$s1880;
                }
                break;
                case 64:
                {
                    llvmOp1865 = &$s1881;
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
                    llvmOp1865 = &$s1882;
                }
                break;
                case 52:
                {
                    llvmOp1865 = &$s1883;
                }
                break;
                case 53:
                {
                    llvmOp1865 = &$s1884;
                }
                break;
                case 55:
                {
                    llvmOp1865 = &$s1885;
                }
                break;
                case 56:
                {
                    llvmOp1865 = &$s1886;
                }
                break;
                case 72:
                {
                    llvmOp1865 = &$s1887;
                }
                break;
                case 1:
                {
                    llvmOp1865 = &$s1888;
                }
                break;
                case 67:
                {
                    llvmOp1865 = &$s1889;
                }
                break;
                case 69:
                {
                    llvmOp1865 = &$s1890;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1865 = &$s1891;
                }
                break;
                case 58:
                {
                    llvmOp1865 = &$s1892;
                }
                break;
                case 59:
                {
                    llvmOp1865 = &$s1893;
                }
                break;
                case 63:
                {
                    llvmOp1865 = &$s1894;
                }
                break;
                case 62:
                {
                    llvmOp1865 = &$s1895;
                }
                break;
                case 65:
                {
                    llvmOp1865 = &$s1896;
                }
                break;
                case 64:
                {
                    llvmOp1865 = &$s1897;
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
                    llvmOp1865 = &$s1898;
                }
                break;
                case 52:
                {
                    llvmOp1865 = &$s1899;
                }
                break;
                case 53:
                {
                    llvmOp1865 = &$s1900;
                }
                break;
                case 55:
                {
                    llvmOp1865 = &$s1901;
                }
                break;
                case 58:
                {
                    llvmOp1865 = &$s1902;
                }
                break;
                case 59:
                {
                    llvmOp1865 = &$s1903;
                }
                break;
                case 63:
                {
                    llvmOp1865 = &$s1904;
                }
                break;
                case 62:
                {
                    llvmOp1865 = &$s1905;
                }
                break;
                case 65:
                {
                    llvmOp1865 = &$s1906;
                }
                break;
                case 64:
                {
                    llvmOp1865 = &$s1907;
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
    panda$core$String* $tmp1909 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1908 = $tmp1909;
    panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1910, result1908);
    panda$core$String* $tmp1913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, &$s1912);
    panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, llvmOp1865);
    panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1914, &$s1915);
    panda$core$String* $tmp1917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1916, p_leftRef);
    panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, &$s1918);
    panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1919, p_rightRef);
    panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, &$s1921);
    (($fn1923) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1922);
    return result1908;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1924;
    panda$core$String* rightRef1926;
    panda$core$String* raw1928;
    panda$core$String* result1941;
    panda$core$String* $tmp1925 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1924 = $tmp1925;
    panda$core$String* $tmp1927 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1926 = $tmp1927;
    panda$core$String* $tmp1929 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1928 = $tmp1929;
    panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1930, raw1928);
    panda$core$String* $tmp1933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1931, &$s1932);
    panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1933, leftRef1924);
    panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1934, &$s1935);
    panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, rightRef1926);
    panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1938);
    (($fn1940) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1939);
    panda$core$String* $tmp1942 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1941 = $tmp1942;
    panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1943, result1941);
    panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1944, &$s1945);
    panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, raw1928);
    panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1947, &$s1948);
    (($fn1950) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1949);
    return result1941;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1951;
    panda$core$String* rightRef1953;
    panda$core$String* raw1955;
    panda$core$String* result1968;
    panda$core$String* $tmp1952 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1951 = $tmp1952;
    panda$core$String* $tmp1954 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1953 = $tmp1954;
    panda$core$String* $tmp1956 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1955 = $tmp1956;
    panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1957, raw1955);
    panda$core$String* $tmp1960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1958, &$s1959);
    panda$core$String* $tmp1961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1960, leftRef1951);
    panda$core$String* $tmp1963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1961, &$s1962);
    panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1963, rightRef1953);
    panda$core$String* $tmp1966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1964, &$s1965);
    (($fn1967) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1966);
    panda$core$String* $tmp1969 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1968 = $tmp1969;
    panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1970, result1968);
    panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1971, &$s1972);
    panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1973, raw1955);
    panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1975);
    (($fn1977) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1976);
    return result1968;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1983;
    panda$core$String* rightRef1985;
    panda$core$Bit $tmp1978 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1978.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1979 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1979;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1980 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1980;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1981 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1981;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1982 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1982;
        }
        break;
        default:
        {
            panda$core$String* $tmp1984 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1983 = $tmp1984;
            panda$core$String* $tmp1986 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1985 = $tmp1986;
            panda$core$Int64 $tmp1987 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1988 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1987, leftRef1983, p_op, rightRef1985, p_out);
            return $tmp1988;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1989.value);
    panda$core$Int64 $tmp1990 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1990, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp1991.value);
    panda$core$Object* $tmp1992 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp1993 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp1994 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp1992), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp1993), p_out);
    return $tmp1994;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s1995;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc1996;
    panda$core$Int64 index1998;
    panda$collections$ListView* vtable1999;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2001;
    panda$core$String* classPtrPtr2030;
    panda$core$String* classPtr2047;
    panda$core$String* cast2057;
    panda$core$String* ptr2070;
    panda$core$String* load2094;
    panda$core$String* result2104;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1997 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc1996 = $tmp1997;
    index1998 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2000 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable1999 = $tmp2000;
    ITable* $tmp2002 = ((panda$collections$CollectionView*) vtable1999)->$class->itable;
    while ($tmp2002->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2002 = $tmp2002->next;
    }
    $fn2004 $tmp2003 = $tmp2002->methods[0];
    panda$core$Int64 $tmp2005 = $tmp2003(((panda$collections$CollectionView*) vtable1999));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2001, ((panda$core$Int64) { 0 }), $tmp2005, ((panda$core$Bit) { false }));
    int64_t $tmp2007 = $tmp2001.min.value;
    panda$core$Int64 i2006 = { $tmp2007 };
    int64_t $tmp2009 = $tmp2001.max.value;
    bool $tmp2010 = $tmp2001.inclusive.value;
    if ($tmp2010) goto $l2017; else goto $l2018;
    $l2017:;
    if ($tmp2007 <= $tmp2009) goto $l2011; else goto $l2013;
    $l2018:;
    if ($tmp2007 < $tmp2009) goto $l2011; else goto $l2013;
    $l2011:;
    {
        ITable* $tmp2019 = vtable1999->$class->itable;
        while ($tmp2019->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2019 = $tmp2019->next;
        }
        $fn2021 $tmp2020 = $tmp2019->methods[0];
        panda$core$Object* $tmp2022 = $tmp2020(vtable1999, i2006);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2022)) == ((panda$core$Object*) p_m) }).value) {
        {
            index1998 = i2006;
            goto $l2013;
        }
        }
    }
    $l2014:;
    int64_t $tmp2024 = $tmp2009 - i2006.value;
    if ($tmp2010) goto $l2025; else goto $l2026;
    $l2025:;
    if ($tmp2024 >= 1) goto $l2023; else goto $l2013;
    $l2026:;
    if ($tmp2024 > 1) goto $l2023; else goto $l2013;
    $l2023:;
    i2006.value += 1;
    goto $l2011;
    $l2013:;
    panda$core$Bit $tmp2029 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index1998, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2029.value);
    panda$core$String* $tmp2031 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2030 = $tmp2031;
    panda$core$String* $tmp2033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2032, classPtrPtr2030);
    panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2033, &$s2034);
    org$pandalanguage$pandac$Type* $tmp2036 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2037 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2036);
    panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2035, $tmp2037);
    panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, &$s2039);
    panda$core$String* $tmp2042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2041, p_target);
    panda$core$String* $tmp2044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2042, &$s2043);
    panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, $tmp2044);
    (($fn2046) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2045);
    panda$core$String* $tmp2048 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2047 = $tmp2048;
    panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2049, classPtr2047);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, &$s2051);
    panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, classPtrPtr2030);
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, &$s2054);
    (($fn2056) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2055);
    panda$core$String* $tmp2058 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2057 = $tmp2058;
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2059, cast2057);
    panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, &$s2061);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, classPtr2047);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, &$s2064);
    panda$core$String* $tmp2066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2065, cc1996->type);
    panda$core$String* $tmp2068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2066, &$s2067);
    (($fn2069) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2068);
    panda$core$String* $tmp2071 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2070 = $tmp2071;
    panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2072, ptr2070);
    panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, &$s2074);
    panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2075, cc1996->type);
    panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, &$s2077);
    panda$core$String* $tmp2079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2078, cc1996->type);
    panda$core$String* $tmp2081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2079, &$s2080);
    panda$core$String* $tmp2082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2081, cast2057);
    panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2082, &$s2083);
    panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2085, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2086, &$s2087);
    panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2088, ((panda$core$Object*) wrap_panda$core$Int64(index1998)));
    panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, &$s2090);
    panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2084, $tmp2091);
    (($fn2093) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2092);
    panda$core$String* $tmp2095 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2094 = $tmp2095;
    panda$core$String* $tmp2097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2096, load2094);
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2097, &$s2098);
    panda$core$String* $tmp2100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, ptr2070);
    panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2100, &$s2101);
    (($fn2103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2102);
    panda$core$String* $tmp2105 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2104 = $tmp2105;
    panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2106, result2104);
    panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2107, &$s2108);
    panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2109, load2094);
    panda$core$String* $tmp2112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2110, &$s2111);
    org$pandalanguage$pandac$Type* $tmp2113 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2114 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2113);
    panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2112, $tmp2114);
    (($fn2116) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2115);
    return result2104;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2117;
    panda$core$String* entry2120;
    panda$core$String* classPointer2127;
    panda$core$String* loadedClass2151;
    panda$core$String* classType2153;
    panda$core$String* itableFirst2170;
    panda$core$String* next2195;
    panda$core$String* leavingEntryLabel2202;
    panda$core$String* itableNext2204;
    panda$core$String* itablePtrPtr2209;
    panda$core$String* fail2211;
    panda$core$String* itablePtr2232;
    panda$core$String* itableClassPtr2242;
    panda$core$String* itableClass2258;
    panda$core$String* test2274;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2276;
    panda$core$String* success2300;
    panda$core$Int64 index2332;
    panda$collections$ListView* vtable2333;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2335;
    panda$core$String* methodPtrPtr2372;
    panda$core$String* cast2391;
    panda$core$String* methodPtr2404;
    org$pandalanguage$pandac$Type* $tmp2118 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2119 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2118);
    methodType2117 = $tmp2119;
    panda$core$String* $tmp2121 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2120 = $tmp2121;
    panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2122, entry2120);
    panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2123, &$s2124);
    (($fn2126) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2125);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, entry2120, p_out);
    panda$core$String* $tmp2128 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2127 = $tmp2128;
    panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2129, classPointer2127);
    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
    org$pandalanguage$pandac$Type* $tmp2133 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2134 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2133);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, $tmp2134);
    panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2135, &$s2136);
    panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2138, p_target);
    panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2139, &$s2140);
    panda$core$String* $tmp2143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2141, &$s2142);
    panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2143, &$s2144);
    panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2145, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, &$s2147);
    panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2137, $tmp2148);
    (($fn2150) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2149);
    panda$core$String* $tmp2152 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2151 = $tmp2152;
    org$pandalanguage$pandac$Type* $tmp2154 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2155 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2154);
    classType2153 = $tmp2155;
    panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2156, loadedClass2151);
    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2158);
    panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2159, classType2153);
    panda$core$String* $tmp2162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2160, &$s2161);
    panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2162, classType2153);
    panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2163, &$s2164);
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2165, classPointer2127);
    panda$core$String* $tmp2168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2167);
    (($fn2169) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2168);
    panda$core$String* $tmp2171 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2170 = $tmp2171;
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2172, itableFirst2170);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
    panda$core$String* $tmp2176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, classType2153);
    panda$core$String* $tmp2178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2176, &$s2177);
    panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2178, classType2153);
    panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2179, &$s2180);
    panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2182, loadedClass2151);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, &$s2184);
    panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, &$s2186);
    panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2188);
    panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2189, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
    panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2181, $tmp2192);
    (($fn2194) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2193);
    panda$core$String* $tmp2196 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2195 = $tmp2196;
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2197, next2195);
    panda$core$String* $tmp2200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, &$s2199);
    (($fn2201) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2200);
    leavingEntryLabel2202 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, next2195, p_out);
    panda$core$Int64 $tmp2203 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2203;
    panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2205, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, &$s2207);
    itableNext2204 = $tmp2208;
    panda$core$String* $tmp2210 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2209 = $tmp2210;
    panda$core$String* $tmp2212 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2211 = $tmp2212;
    panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2213, itablePtrPtr2209);
    panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, &$s2215);
    panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, itableFirst2170);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, &$s2218);
    panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2219, leavingEntryLabel2202);
    panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2220, &$s2221);
    panda$core$String* $tmp2224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2223, itableNext2204);
    panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2224, &$s2225);
    panda$core$String* $tmp2227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, fail2211);
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2227, &$s2228);
    panda$core$String* $tmp2230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2222, $tmp2229);
    (($fn2231) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2230);
    panda$core$String* $tmp2233 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2232 = $tmp2233;
    panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2234, itablePtr2232);
    panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2235, &$s2236);
    panda$core$String* $tmp2238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, itablePtrPtr2209);
    panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, &$s2239);
    (($fn2241) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2240);
    panda$core$String* $tmp2243 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2242 = $tmp2243;
    panda$core$String* $tmp2245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2244, itableClassPtr2242);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2245, &$s2246);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2248, itablePtr2232);
    panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2250);
    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, &$s2252);
    panda$core$String* $tmp2255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2253, &$s2254);
    panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, $tmp2255);
    (($fn2257) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2256);
    panda$core$String* $tmp2259 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2258 = $tmp2259;
    panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2260, itableClass2258);
    panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, &$s2262);
    panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, classType2153);
    panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2265);
    panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, classType2153);
    panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2268);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, itableClassPtr2242);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
    (($fn2273) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2272);
    panda$core$String* $tmp2275 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2274 = $tmp2275;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2277 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2276 = $tmp2277;
    panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2278, test2274);
    panda$core$String* $tmp2281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2279, &$s2280);
    panda$core$String* $tmp2282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2281, classType2153);
    panda$core$String* $tmp2284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2282, &$s2283);
    panda$core$String* $tmp2285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2284, intfCC2276->type);
    panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2285, &$s2286);
    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, intfCC2276->name);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
    panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2291, classType2153);
    panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, &$s2293);
    panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2294, itableClass2258);
    panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2295, &$s2296);
    panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, $tmp2297);
    (($fn2299) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2298);
    panda$core$String* $tmp2301 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2300 = $tmp2301;
    panda$core$String* $tmp2303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2302, test2274);
    panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2304);
    panda$core$String* $tmp2306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, success2300);
    panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2306, &$s2307);
    panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, fail2211);
    panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2309, &$s2310);
    (($fn2312) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2311);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, fail2211, p_out);
    panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2313, itableNext2204);
    panda$core$String* $tmp2316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2314, &$s2315);
    panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2316, itablePtr2232);
    panda$core$String* $tmp2319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2317, &$s2318);
    panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2320, &$s2321);
    panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2322, &$s2323);
    panda$core$String* $tmp2325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2319, $tmp2324);
    (($fn2326) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2325);
    panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2327, next2195);
    panda$core$String* $tmp2330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2328, &$s2329);
    (($fn2331) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2330);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, success2300, p_out);
    index2332 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2334 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2333 = $tmp2334;
    ITable* $tmp2336 = ((panda$collections$CollectionView*) vtable2333)->$class->itable;
    while ($tmp2336->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2336 = $tmp2336->next;
    }
    $fn2338 $tmp2337 = $tmp2336->methods[0];
    panda$core$Int64 $tmp2339 = $tmp2337(((panda$collections$CollectionView*) vtable2333));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2335, ((panda$core$Int64) { 0 }), $tmp2339, ((panda$core$Bit) { false }));
    int64_t $tmp2341 = $tmp2335.min.value;
    panda$core$Int64 i2340 = { $tmp2341 };
    int64_t $tmp2343 = $tmp2335.max.value;
    bool $tmp2344 = $tmp2335.inclusive.value;
    if ($tmp2344) goto $l2351; else goto $l2352;
    $l2351:;
    if ($tmp2341 <= $tmp2343) goto $l2345; else goto $l2347;
    $l2352:;
    if ($tmp2341 < $tmp2343) goto $l2345; else goto $l2347;
    $l2345:;
    {
        ITable* $tmp2353 = vtable2333->$class->itable;
        while ($tmp2353->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2353 = $tmp2353->next;
        }
        $fn2355 $tmp2354 = $tmp2353->methods[0];
        panda$core$Object* $tmp2356 = $tmp2354(vtable2333, i2340);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2356)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2332 = i2340;
            goto $l2347;
        }
        }
    }
    $l2348:;
    int64_t $tmp2358 = $tmp2343 - i2340.value;
    if ($tmp2344) goto $l2359; else goto $l2360;
    $l2359:;
    if ($tmp2358 >= 1) goto $l2357; else goto $l2347;
    $l2360:;
    if ($tmp2358 > 1) goto $l2357; else goto $l2347;
    $l2357:;
    i2340.value += 1;
    goto $l2345;
    $l2347:;
    org$pandalanguage$pandac$Type* $tmp2363 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2364 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2363);
    panda$collections$ListView* $tmp2365 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2364);
    ITable* $tmp2366 = ((panda$collections$CollectionView*) $tmp2365)->$class->itable;
    while ($tmp2366->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2366 = $tmp2366->next;
    }
    $fn2368 $tmp2367 = $tmp2366->methods[0];
    panda$core$Int64 $tmp2369 = $tmp2367(((panda$collections$CollectionView*) $tmp2365));
    panda$core$Int64 $tmp2370 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2332, $tmp2369);
    index2332 = $tmp2370;
    panda$core$Bit $tmp2371 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2332, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2371.value);
    panda$core$String* $tmp2373 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2372 = $tmp2373;
    panda$core$String* $tmp2375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2374, methodPtrPtr2372);
    panda$core$String* $tmp2377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2375, &$s2376);
    panda$core$String* $tmp2379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2378, itablePtr2232);
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2379, &$s2380);
    panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2381, &$s2382);
    panda$core$String* $tmp2385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, &$s2384);
    panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2385, ((panda$core$Object*) wrap_panda$core$Int64(index2332)));
    panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2386, &$s2387);
    panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2377, $tmp2388);
    (($fn2390) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2389);
    panda$core$String* $tmp2392 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2391 = $tmp2392;
    panda$core$String* $tmp2394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2393, cast2391);
    panda$core$String* $tmp2396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2394, &$s2395);
    panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, methodPtrPtr2372);
    panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, &$s2398);
    panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2399, methodType2117);
    panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2400, &$s2401);
    (($fn2403) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2402);
    panda$core$String* $tmp2405 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2404 = $tmp2405;
    panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2406, methodPtr2404);
    panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, &$s2408);
    panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2409, methodType2117);
    panda$core$String* $tmp2412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2410, &$s2411);
    panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2412, methodType2117);
    panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2413, &$s2414);
    panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2415, cast2391);
    panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2416, &$s2417);
    (($fn2419) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2418);
    return methodPtr2404;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2421 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2420 = $tmp2421.value;
    if (!$tmp2420) goto $l2422;
    panda$core$Bit $tmp2423 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2420 = $tmp2423.value;
    $l2422:;
    panda$core$Bit $tmp2424 = { $tmp2420 };
    if ($tmp2424.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2425.value) {
        {
            panda$core$String* $tmp2426 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2426;
        }
        }
        else {
        {
            panda$core$String* $tmp2427 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2427;
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
        panda$core$String* $tmp2428 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2428;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2429;
    panda$core$String* $match$1189_92430;
    panda$core$String* countStruct2435;
    panda$core$String* count2438;
    panda$core$String* size2448;
    panda$core$Int64 elementSize2450;
    panda$core$String* malloc2470;
    panda$core$String* result2484;
    panda$core$String* ptr2503;
    panda$core$String* baseType2506;
    panda$core$String* ptrType2509;
    panda$core$String* cast2512;
    panda$core$String* load2525;
    panda$core$String* ptr2545;
    panda$core$String* baseType2548;
    panda$core$String* ptrType2551;
    panda$core$String* cast2554;
    panda$core$String* indexStruct2567;
    panda$core$String* index2570;
    panda$core$String* offsetPtr2580;
    panda$core$String* load2601;
    panda$core$String* ptr2621;
    panda$core$String* ptrCast2624;
    panda$core$String* countStruct2634;
    panda$core$String* count2637;
    panda$core$String* size2647;
    panda$core$String* realloc2665;
    panda$core$String* result2684;
    panda$core$String* ptr2703;
    panda$core$String* baseType2706;
    panda$core$String* offsetStruct2710;
    panda$core$String* offset2713;
    panda$core$String* result2723;
    m2429 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1189_92430 = ((org$pandalanguage$pandac$Symbol*) m2429->value)->name;
        panda$core$Bit $tmp2432 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92430, &$s2431);
        if ($tmp2432.value) {
        {
            panda$core$Int64 $tmp2433 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2433, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2434.value);
            panda$core$Object* $tmp2436 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2437 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2436), p_out);
            countStruct2435 = $tmp2437;
            panda$core$String* $tmp2439 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2438 = $tmp2439;
            panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2440, count2438);
            panda$core$String* $tmp2443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2441, &$s2442);
            panda$core$String* $tmp2444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2443, countStruct2435);
            panda$core$String* $tmp2446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2444, &$s2445);
            (($fn2447) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2446);
            panda$core$String* $tmp2449 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2448 = $tmp2449;
            org$pandalanguage$pandac$Type* $tmp2451 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2429);
            panda$core$Object* $tmp2452 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2451->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2453 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2452));
            elementSize2450 = $tmp2453;
            panda$core$Bit $tmp2454 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2450, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2454.value);
            panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2455, size2448);
            panda$core$String* $tmp2458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2456, &$s2457);
            panda$core$String* $tmp2460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2458, &$s2459);
            panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2460, &$s2461);
            panda$core$String* $tmp2463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2462, count2438);
            panda$core$String* $tmp2465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2463, &$s2464);
            panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2465, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2450)));
            panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, &$s2467);
            (($fn2469) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2468);
            panda$core$String* $tmp2471 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2470 = $tmp2471;
            panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2472, malloc2470);
            panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, &$s2474);
            panda$core$String* $tmp2477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2475, &$s2476);
            panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2477, &$s2478);
            panda$core$String* $tmp2480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, size2448);
            panda$core$String* $tmp2482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2480, &$s2481);
            (($fn2483) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2482);
            panda$core$String* $tmp2485 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2484 = $tmp2485;
            panda$core$String* $tmp2487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2486, result2484);
            panda$core$String* $tmp2489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2487, &$s2488);
            panda$core$String* $tmp2490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2489, malloc2470);
            panda$core$String* $tmp2492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2490, &$s2491);
            org$pandalanguage$pandac$Type* $tmp2493 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2429);
            panda$core$String* $tmp2494 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2493);
            panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2492, $tmp2494);
            panda$core$String* $tmp2497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2495, &$s2496);
            (($fn2498) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2497);
            return result2484;
        }
        }
        else {
        panda$core$Bit $tmp2500 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92430, &$s2499);
        if ($tmp2500.value) {
        {
            panda$core$Int64 $tmp2501 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2501, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2502.value);
            panda$core$Object* $tmp2504 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2505 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2504), p_out);
            ptr2503 = $tmp2505;
            org$pandalanguage$pandac$Type* $tmp2507 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2429);
            panda$core$String* $tmp2508 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2507);
            baseType2506 = $tmp2508;
            panda$core$String* $tmp2511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2506, &$s2510);
            ptrType2509 = $tmp2511;
            panda$core$String* $tmp2513 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2512 = $tmp2513;
            panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2514, cast2512);
            panda$core$String* $tmp2517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, &$s2516);
            panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, ptr2503);
            panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2518, &$s2519);
            panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2520, ptrType2509);
            panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, &$s2522);
            (($fn2524) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2523);
            panda$core$String* $tmp2526 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2525 = $tmp2526;
            panda$core$String* $tmp2528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2527, load2525);
            panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2528, &$s2529);
            panda$core$String* $tmp2531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, baseType2506);
            panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2531, &$s2532);
            panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, ptrType2509);
            panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2535);
            panda$core$String* $tmp2537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, cast2512);
            panda$core$String* $tmp2539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2537, &$s2538);
            (($fn2540) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2539);
            return load2525;
        }
        }
        else {
        panda$core$Bit $tmp2542 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92430, &$s2541);
        if ($tmp2542.value) {
        {
            panda$core$Int64 $tmp2543 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2543, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2544.value);
            panda$core$Object* $tmp2546 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2547 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2546), p_out);
            ptr2545 = $tmp2547;
            org$pandalanguage$pandac$Type* $tmp2549 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2429);
            panda$core$String* $tmp2550 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2549);
            baseType2548 = $tmp2550;
            panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2548, &$s2552);
            ptrType2551 = $tmp2553;
            panda$core$String* $tmp2555 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2554 = $tmp2555;
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2556, cast2554);
            panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, &$s2558);
            panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, ptr2545);
            panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, &$s2561);
            panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2562, ptrType2551);
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, &$s2564);
            (($fn2566) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2565);
            panda$core$Object* $tmp2568 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2569 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2568), p_out);
            indexStruct2567 = $tmp2569;
            panda$core$String* $tmp2571 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2570 = $tmp2571;
            panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2572, index2570);
            panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2573, &$s2574);
            panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2575, indexStruct2567);
            panda$core$String* $tmp2578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, &$s2577);
            (($fn2579) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2578);
            panda$core$String* $tmp2581 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2580 = $tmp2581;
            panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2582, offsetPtr2580);
            panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2584);
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, baseType2548);
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2587);
            panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, ptrType2551);
            panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2589, &$s2590);
            panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, cast2554);
            panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2592, &$s2593);
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2595, index2570);
            panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, &$s2597);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, $tmp2598);
            (($fn2600) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2599);
            panda$core$String* $tmp2602 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2601 = $tmp2602;
            panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2603, load2601);
            panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, &$s2605);
            panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, baseType2548);
            panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2607, &$s2608);
            panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, ptrType2551);
            panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2610, &$s2611);
            panda$core$String* $tmp2613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, offsetPtr2580);
            panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2613, &$s2614);
            (($fn2616) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2615);
            return load2601;
        }
        }
        else {
        panda$core$Bit $tmp2618 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92430, &$s2617);
        if ($tmp2618.value) {
        {
            panda$core$Int64 $tmp2619 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2619, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2620.value);
            panda$core$Object* $tmp2622 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2623 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2622), p_out);
            ptr2621 = $tmp2623;
            panda$core$String* $tmp2625 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2624 = $tmp2625;
            panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2626, ptrCast2624);
            panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2628);
            panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, ptr2621);
            panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2630, &$s2631);
            (($fn2633) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2632);
            panda$core$Object* $tmp2635 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2636 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2635), p_out);
            countStruct2634 = $tmp2636;
            panda$core$String* $tmp2638 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2637 = $tmp2638;
            panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2639, count2637);
            panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, &$s2641);
            panda$core$String* $tmp2643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2642, countStruct2634);
            panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2643, &$s2644);
            (($fn2646) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2645);
            panda$core$String* $tmp2648 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2647 = $tmp2648;
            panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2649, size2647);
            panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, &$s2651);
            panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
            panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2655);
            panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, count2637);
            panda$core$String* $tmp2659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, &$s2658);
            org$pandalanguage$pandac$Type* $tmp2660 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2429);
            panda$core$Object* $tmp2661 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2660->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2662 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2661));
            panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2659, ((panda$core$Object*) wrap_panda$core$Int64($tmp2662)));
            (($fn2664) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2663);
            panda$core$String* $tmp2666 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2665 = $tmp2666;
            panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2667, realloc2665);
            panda$core$String* $tmp2670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2668, &$s2669);
            panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2670, ptrCast2624);
            panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, &$s2672);
            panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, &$s2674);
            panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2675, &$s2676);
            panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2678, size2647);
            panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, &$s2680);
            panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, $tmp2681);
            (($fn2683) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2682);
            panda$core$String* $tmp2685 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2684 = $tmp2685;
            panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2686, result2684);
            panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2687, &$s2688);
            panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2689, realloc2665);
            panda$core$String* $tmp2692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2690, &$s2691);
            org$pandalanguage$pandac$Type* $tmp2693 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2429);
            panda$core$String* $tmp2694 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2693);
            panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2692, $tmp2694);
            panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
            (($fn2698) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2697);
            return result2684;
        }
        }
        else {
        panda$core$Bit $tmp2700 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1189_92430, &$s2699);
        if ($tmp2700.value) {
        {
            panda$core$Int64 $tmp2701 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2701, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2702.value);
            panda$core$Object* $tmp2704 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2705 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2704), p_out);
            ptr2703 = $tmp2705;
            panda$core$Object* $tmp2707 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2708 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2707)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2709 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2708));
            baseType2706 = $tmp2709;
            panda$core$Object* $tmp2711 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2712 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2711), p_out);
            offsetStruct2710 = $tmp2712;
            panda$core$String* $tmp2714 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2713 = $tmp2714;
            panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2715, offset2713);
            panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
            panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, offsetStruct2710);
            panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, &$s2720);
            (($fn2722) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2721);
            panda$core$String* $tmp2724 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2723 = $tmp2724;
            panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2725, result2723);
            panda$core$String* $tmp2728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2727);
            panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, baseType2706);
            panda$core$String* $tmp2731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, &$s2730);
            panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2731, ptr2703);
            panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2732, &$s2733);
            panda$core$String* $tmp2735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2734, offset2713);
            panda$core$String* $tmp2737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2735, &$s2736);
            (($fn2738) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2737);
            return result2723;
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
    org$pandalanguage$pandac$MethodDecl* m2739;
    panda$core$String* selfRef2740;
    panda$core$Int64 argStart2742;
    panda$collections$Array* args2746;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2749;
    panda$core$String* end2772;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2781;
    org$pandalanguage$pandac$MethodDecl* old2788;
    panda$core$String* phi2801;
    panda$core$String* separator2812;
    panda$collections$Iterator* ret$Iter2814;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2826;
    m2739 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2739->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2739), ((panda$core$Object*) m2739));
    selfRef2740 = &$s2741;
    panda$core$Bit $tmp2743 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2739);
    if ($tmp2743.value) {
    {
        argStart2742 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2744 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2745 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2744), p_out);
        selfRef2740 = $tmp2745;
    }
    }
    else {
    {
        argStart2742 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2747 = (panda$collections$Array*) malloc(40);
    $tmp2747->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2747->refCount.value = 1;
    panda$collections$Array$init($tmp2747);
    args2746 = $tmp2747;
    panda$core$Int64 $tmp2750 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2749, argStart2742, $tmp2750, ((panda$core$Bit) { false }));
    int64_t $tmp2752 = $tmp2749.min.value;
    panda$core$Int64 i2751 = { $tmp2752 };
    int64_t $tmp2754 = $tmp2749.max.value;
    bool $tmp2755 = $tmp2749.inclusive.value;
    if ($tmp2755) goto $l2762; else goto $l2763;
    $l2762:;
    if ($tmp2752 <= $tmp2754) goto $l2756; else goto $l2758;
    $l2763:;
    if ($tmp2752 < $tmp2754) goto $l2756; else goto $l2758;
    $l2756:;
    {
        panda$core$Object* $tmp2764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2751);
        panda$core$String* $tmp2765 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2764), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2746, ((panda$core$Object*) $tmp2765));
    }
    $l2759:;
    int64_t $tmp2767 = $tmp2754 - i2751.value;
    if ($tmp2755) goto $l2768; else goto $l2769;
    $l2768:;
    if ($tmp2767 >= 1) goto $l2766; else goto $l2758;
    $l2769:;
    if ($tmp2767 > 1) goto $l2766; else goto $l2758;
    $l2766:;
    i2751.value += 1;
    goto $l2756;
    $l2758:;
    panda$core$String* $tmp2773 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2772 = $tmp2773;
    panda$core$Int64 $tmp2774 = panda$collections$Array$get_count$R$panda$core$Int64(args2746);
    panda$core$Int64 $tmp2775 = panda$collections$Array$get_count$R$panda$core$Int64(m2739->parameters);
    panda$core$Bit $tmp2776 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2774, $tmp2775);
    if ($tmp2776.value) {
    {
        panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2777, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2778, &$s2779);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2780));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2782 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2782->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2782->refCount.value = 1;
    panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2784, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2785, &$s2786);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2782, $tmp2787, selfRef2740, ((panda$collections$ListView*) args2746), end2772);
    inline2781 = $tmp2782;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2781));
    old2788 = self->currentMethod;
    self->currentMethod = m2739;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_body, p_out);
    self->currentMethod = old2788;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2789 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2790 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2789);
    if ($tmp2790.value) {
    {
        (($fn2792) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2791);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end2772, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2739));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2793 = panda$collections$Array$get_count$R$panda$core$Int64(inline2781->returns);
    panda$core$Bit $tmp2794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2793, ((panda$core$Int64) { 1 }));
    if ($tmp2794.value) {
    {
        panda$core$Object* $tmp2795 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2781->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2795)->second);
    }
    }
    panda$core$Int64 $tmp2796 = panda$collections$Array$get_count$R$panda$core$Int64(inline2781->returns);
    panda$core$Bit $tmp2797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2796, ((panda$core$Int64) { 0 }));
    if ($tmp2797.value) {
    {
        (($fn2799) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2798);
        return &$s2800;
    }
    }
    panda$core$String* $tmp2802 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2801 = $tmp2802;
    panda$core$String* $tmp2804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2803, phi2801);
    panda$core$String* $tmp2806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2804, &$s2805);
    panda$core$String* $tmp2807 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2739->returnType);
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, $tmp2807);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
    (($fn2811) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2810);
    separator2812 = &$s2813;
    {
        ITable* $tmp2815 = ((panda$collections$Iterable*) inline2781->returns)->$class->itable;
        while ($tmp2815->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2815 = $tmp2815->next;
        }
        $fn2817 $tmp2816 = $tmp2815->methods[0];
        panda$collections$Iterator* $tmp2818 = $tmp2816(((panda$collections$Iterable*) inline2781->returns));
        ret$Iter2814 = $tmp2818;
        $l2819:;
        ITable* $tmp2821 = ret$Iter2814->$class->itable;
        while ($tmp2821->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2821 = $tmp2821->next;
        }
        $fn2823 $tmp2822 = $tmp2821->methods[0];
        panda$core$Bit $tmp2824 = $tmp2822(ret$Iter2814);
        panda$core$Bit $tmp2825 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2824);
        if (!$tmp2825.value) goto $l2820;
        {
            ITable* $tmp2827 = ret$Iter2814->$class->itable;
            while ($tmp2827->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2827 = $tmp2827->next;
            }
            $fn2829 $tmp2828 = $tmp2827->methods[1];
            panda$core$Object* $tmp2830 = $tmp2828(ret$Iter2814);
            ret2826 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2830);
            panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2831, separator2812);
            panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2832, &$s2833);
            panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, ((panda$core$String*) ret2826->second));
            panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
            panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, ((panda$core$String*) ret2826->first));
            panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2838, &$s2839);
            (($fn2841) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2840);
            separator2812 = &$s2842;
        }
        goto $l2819;
        $l2820:;
    }
    (($fn2843) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi2801;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2845;
    panda$core$String* bit2855;
    panda$core$String* result2859;
    panda$core$String* bit2875;
    panda$core$String* result2879;
    org$pandalanguage$pandac$IRNode* block2896;
    panda$collections$Array* args2900;
    org$pandalanguage$pandac$Type* actualMethodType2904;
    panda$core$String* actualResultType2905;
    panda$core$Bit isSuper2906;
    panda$core$Int64 offset2926;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2931;
    panda$core$String* arg2946;
    panda$core$String* target2978;
    panda$core$String* methodRef2982;
    panda$core$String* result2984;
    panda$core$Bit indirect2985;
    panda$core$String* separator3011;
    panda$core$String* indirectVar3013;
    panda$collections$Iterator* arg$Iter3034;
    panda$core$String* arg3046;
    panda$core$Bit $tmp2844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2844.value);
    m2845 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2847 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2845->owner)->name, &$s2846);
    if ($tmp2847.value) {
    {
        panda$core$String* $tmp2848 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2848;
    }
    }
    if (m2845->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2845);
    }
    }
    panda$core$Bit $tmp2850 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2845->owner)->name, &$s2849);
    if ($tmp2850.value) {
    {
        panda$core$Bit $tmp2852 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2845)->name, &$s2851);
        if ($tmp2852.value) {
        {
            panda$core$Int64 $tmp2853 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2853, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2854.value);
            panda$core$Object* $tmp2856 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2857 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2858 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2856), ((org$pandalanguage$pandac$IRNode*) $tmp2857), p_out);
            bit2855 = $tmp2858;
            panda$core$String* $tmp2860 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2859 = $tmp2860;
            panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2861, result2859);
            panda$core$String* $tmp2864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2862, &$s2863);
            panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2865, bit2855);
            panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2866, &$s2867);
            panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, $tmp2868);
            (($fn2870) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2869);
            return result2859;
        }
        }
        panda$core$Bit $tmp2872 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2845)->name, &$s2871);
        if ($tmp2872.value) {
        {
            panda$core$Int64 $tmp2873 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2873, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2874.value);
            panda$core$Object* $tmp2876 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2877 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2878 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2876), ((org$pandalanguage$pandac$IRNode*) $tmp2877), p_out);
            bit2875 = $tmp2878;
            panda$core$String* $tmp2880 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2879 = $tmp2880;
            panda$core$String* $tmp2882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2881, result2879);
            panda$core$String* $tmp2884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2882, &$s2883);
            panda$core$String* $tmp2886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2885, bit2875);
            panda$core$String* $tmp2888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2886, &$s2887);
            panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2884, $tmp2888);
            (($fn2890) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2889);
            return result2879;
        }
        }
    }
    }
    panda$core$Bit $tmp2892 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2845->annotations);
    bool $tmp2891 = $tmp2892.value;
    if (!$tmp2891) goto $l2893;
    panda$core$Object* $tmp2894 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2845));
    $tmp2891 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2894) == NULL }).value;
    $l2893:;
    panda$core$Bit $tmp2895 = { $tmp2891 };
    if ($tmp2895.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2897 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2845);
        block2896 = $tmp2897;
        if (((panda$core$Bit) { block2896 != NULL }).value) {
        {
            panda$core$String* $tmp2898 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, block2896, p_out);
            return $tmp2898;
        }
        }
        return &$s2899;
    }
    }
    panda$collections$Array* $tmp2901 = (panda$collections$Array*) malloc(40);
    $tmp2901->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2901->refCount.value = 1;
    panda$core$Int64 $tmp2903 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2901, $tmp2903);
    args2900 = $tmp2901;
    panda$core$Int64 $tmp2908 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2909 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2908, ((panda$core$Int64) { 1 }));
    bool $tmp2907 = $tmp2909.value;
    if (!$tmp2907) goto $l2910;
    panda$core$Object* $tmp2911 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2911)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2907 = $tmp2912.value;
    $l2910:;
    panda$core$Bit $tmp2913 = { $tmp2907 };
    isSuper2906 = $tmp2913;
    panda$core$Bit $tmp2915 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2906);
    bool $tmp2914 = $tmp2915.value;
    if (!$tmp2914) goto $l2916;
    panda$core$Bit $tmp2917 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2845);
    $tmp2914 = $tmp2917.value;
    $l2916:;
    panda$core$Bit $tmp2918 = { $tmp2914 };
    if ($tmp2918.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2919 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2845);
        actualMethodType2904 = $tmp2919;
        panda$core$Int64 $tmp2920 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2904->subtypes);
        panda$core$Int64 $tmp2921 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2920, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2922 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2904->subtypes, $tmp2921);
        panda$core$String* $tmp2923 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2922));
        actualResultType2905 = $tmp2923;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2924 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2845);
        actualMethodType2904 = $tmp2924;
        panda$core$String* $tmp2925 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2905 = $tmp2925;
    }
    }
    panda$core$Int64 $tmp2927 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2928 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2904->subtypes);
    panda$core$Int64 $tmp2929 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2927, $tmp2928);
    panda$core$Int64 $tmp2930 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2929, ((panda$core$Int64) { 1 }));
    offset2926 = $tmp2930;
    panda$core$Int64 $tmp2932 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2931, ((panda$core$Int64) { 0 }), $tmp2932, ((panda$core$Bit) { false }));
    int64_t $tmp2934 = $tmp2931.min.value;
    panda$core$Int64 i2933 = { $tmp2934 };
    int64_t $tmp2936 = $tmp2931.max.value;
    bool $tmp2937 = $tmp2931.inclusive.value;
    if ($tmp2937) goto $l2944; else goto $l2945;
    $l2944:;
    if ($tmp2934 <= $tmp2936) goto $l2938; else goto $l2940;
    $l2945:;
    if ($tmp2934 < $tmp2936) goto $l2938; else goto $l2940;
    $l2938:;
    {
        panda$core$Object* $tmp2947 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2933);
        panda$core$String* $tmp2948 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2947), p_out);
        arg2946 = $tmp2948;
        panda$core$Bit $tmp2950 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2933, offset2926);
        bool $tmp2949 = $tmp2950.value;
        if (!$tmp2949) goto $l2951;
        panda$core$Int64 $tmp2952 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2933, offset2926);
        panda$core$Object* $tmp2953 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2904->subtypes, $tmp2952);
        panda$core$Object* $tmp2954 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2933);
        panda$core$Bit $tmp2955 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2953), ((org$pandalanguage$pandac$IRNode*) $tmp2954)->type);
        $tmp2949 = $tmp2955.value;
        $l2951:;
        panda$core$Bit $tmp2956 = { $tmp2949 };
        if ($tmp2956.value) {
        {
            panda$core$Int64 $tmp2957 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2933, offset2926);
            panda$core$Object* $tmp2958 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2904->subtypes, $tmp2957);
            panda$core$String* $tmp2959 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2958));
            panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2959, &$s2960);
            panda$core$Object* $tmp2962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2933);
            panda$core$Int64 $tmp2963 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2933, offset2926);
            panda$core$Object* $tmp2964 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2904->subtypes, $tmp2963);
            panda$core$String* $tmp2965 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2946, ((org$pandalanguage$pandac$IRNode*) $tmp2962)->type, ((org$pandalanguage$pandac$Type*) $tmp2964), p_out);
            panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2961, $tmp2965);
            arg2946 = $tmp2966;
        }
        }
        else {
        {
            panda$core$Object* $tmp2967 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2933);
            panda$core$String* $tmp2968 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2967)->type);
            panda$core$String* $tmp2970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2968, &$s2969);
            panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2970, arg2946);
            arg2946 = $tmp2971;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2900, ((panda$core$Object*) arg2946));
    }
    $l2941:;
    int64_t $tmp2973 = $tmp2936 - i2933.value;
    if ($tmp2937) goto $l2974; else goto $l2975;
    $l2974:;
    if ($tmp2973 >= 1) goto $l2972; else goto $l2940;
    $l2975:;
    if ($tmp2973 > 1) goto $l2972; else goto $l2940;
    $l2972:;
    i2933.value += 1;
    goto $l2938;
    $l2940:;
    panda$core$Int64 $tmp2979 = panda$collections$Array$get_count$R$panda$core$Int64(args2900);
    panda$core$Bit $tmp2980 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp2979, ((panda$core$Int64) { 0 }));
    if ($tmp2980.value) {
    {
        panda$core$Object* $tmp2981 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2900, ((panda$core$Int64) { 0 }));
        target2978 = ((panda$core$String*) $tmp2981);
    }
    }
    else {
    {
        target2978 = NULL;
    }
    }
    panda$core$String* $tmp2983 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target2978, m2845, isSuper2906, p_out);
    methodRef2982 = $tmp2983;
    panda$core$Bit $tmp2986 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2845);
    indirect2985 = $tmp2986;
    if (indirect2985.value) {
    {
        panda$core$String* $tmp2988 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2845);
        panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2987, $tmp2988);
        panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, &$s2990);
        (($fn2992) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2991);
    }
    }
    else {
    {
        panda$core$String* $tmp2993 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2984 = $tmp2993;
        panda$core$String* $tmp2995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2994, result2984);
        panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2995, &$s2996);
        panda$core$String* $tmp2998 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2845);
        panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, $tmp2998);
        panda$core$String* $tmp3001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2999, &$s3000);
        panda$core$String* $tmp3002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3001, actualResultType2905);
        panda$core$String* $tmp3004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3002, &$s3003);
        (($fn3005) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3004);
    }
    }
    panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3006, methodRef2982);
    panda$core$String* $tmp3009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3007, &$s3008);
    (($fn3010) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3009);
    separator3011 = &$s3012;
    if (indirect2985.value) {
    {
        panda$core$Int64 $tmp3014 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3014;
        panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3015, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3013 = $tmp3016;
        panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3017, indirectVar3013);
        panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, &$s3019);
        panda$core$String* $tmp3021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, actualResultType2905);
        panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3021, &$s3022);
        (($fn3024) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3023);
        panda$core$String* $tmp3026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3025, actualResultType2905);
        panda$core$String* $tmp3028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3026, &$s3027);
        panda$core$String* $tmp3029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3028, indirectVar3013);
        panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3029, &$s3030);
        (($fn3032) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3031);
        separator3011 = &$s3033;
    }
    }
    {
        ITable* $tmp3035 = ((panda$collections$Iterable*) args2900)->$class->itable;
        while ($tmp3035->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3035 = $tmp3035->next;
        }
        $fn3037 $tmp3036 = $tmp3035->methods[0];
        panda$collections$Iterator* $tmp3038 = $tmp3036(((panda$collections$Iterable*) args2900));
        arg$Iter3034 = $tmp3038;
        $l3039:;
        ITable* $tmp3041 = arg$Iter3034->$class->itable;
        while ($tmp3041->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3041 = $tmp3041->next;
        }
        $fn3043 $tmp3042 = $tmp3041->methods[0];
        panda$core$Bit $tmp3044 = $tmp3042(arg$Iter3034);
        panda$core$Bit $tmp3045 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3044);
        if (!$tmp3045.value) goto $l3040;
        {
            ITable* $tmp3047 = arg$Iter3034->$class->itable;
            while ($tmp3047->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3047 = $tmp3047->next;
            }
            $fn3049 $tmp3048 = $tmp3047->methods[1];
            panda$core$Object* $tmp3050 = $tmp3048(arg$Iter3034);
            arg3046 = ((panda$core$String*) $tmp3050);
            panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3051, separator3011);
            panda$core$String* $tmp3054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, &$s3053);
            panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3054, arg3046);
            panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, &$s3056);
            (($fn3058) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3057);
            separator3011 = &$s3059;
        }
        goto $l3039;
        $l3040:;
    }
    (($fn3061) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3060);
    if (indirect2985.value) {
    {
        panda$core$String* $tmp3062 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result2984 = $tmp3062;
        panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3063, result2984);
        panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, &$s3065);
        panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, actualResultType2905);
        panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, &$s3068);
        panda$core$String* $tmp3070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, actualResultType2905);
        panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3070, &$s3071);
        panda$core$String* $tmp3073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3072, indirectVar3013);
        (($fn3074) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3073);
    }
    }
    panda$core$String* $tmp3075 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3076 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3075, actualResultType2905);
    if ($tmp3076.value) {
    {
        panda$core$Int64 $tmp3077 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2904->subtypes);
        panda$core$Int64 $tmp3078 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3077, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3079 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2904->subtypes, $tmp3078);
        panda$core$String* $tmp3080 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result2984, ((org$pandalanguage$pandac$Type*) $tmp3079), p_call->type, p_out);
        return $tmp3080;
    }
    }
    return result2984;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3081;
    panda$core$String* testStart3084;
    panda$core$String* isNonNull3085;
    panda$core$String* nonNullLabel3099;
    panda$core$String* endLabel3101;
    panda$core$String* unwrapped3114;
    panda$core$String* nonNullValue3117;
    panda$core$String* result3125;
    panda$core$String* mallocRef3147;
    panda$core$String* wrapperTypeName3159;
    panda$core$String* wrapperType3162;
    panda$core$String* wrapperCast3165;
    panda$core$String* classPtr3178;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3196;
    panda$core$String* refCount3211;
    panda$core$String* target3234;
    panda$core$String* result3270;
    org$pandalanguage$pandac$ClassDecl* $tmp3082 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3081 = $tmp3082;
    PANDA_ASSERT(((panda$core$Bit) { src3081 != NULL }).value);
    panda$core$Bit $tmp3083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3083.value) {
    {
        testStart3084 = self->currentBlock;
        panda$core$String* $tmp3086 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3085 = $tmp3086;
        panda$core$String* $tmp3088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3087, isNonNull3085);
        panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3088, &$s3089);
        panda$core$String* $tmp3091 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3090, $tmp3091);
        panda$core$String* $tmp3094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, &$s3093);
        panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3094, p_value);
        panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, &$s3096);
        (($fn3098) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3097);
        panda$core$String* $tmp3100 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3099 = $tmp3100;
        panda$core$String* $tmp3102 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3101 = $tmp3102;
        panda$core$String* $tmp3104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3103, isNonNull3085);
        panda$core$String* $tmp3106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3104, &$s3105);
        panda$core$String* $tmp3107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3106, nonNullLabel3099);
        panda$core$String* $tmp3109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3107, &$s3108);
        panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3109, endLabel3101);
        panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, &$s3111);
        (($fn3113) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3112);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3099, p_out);
        panda$core$Object* $tmp3115 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3116 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3115), p_out);
        unwrapped3114 = $tmp3116;
        panda$core$Object* $tmp3118 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3119 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped3114, ((org$pandalanguage$pandac$Type*) $tmp3118), p_dstType, p_out);
        nonNullValue3117 = $tmp3119;
        panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3120, endLabel3101);
        panda$core$String* $tmp3123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3121, &$s3122);
        (($fn3124) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3123);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3101, p_out);
        panda$core$String* $tmp3126 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3125 = $tmp3126;
        panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3127, result3125);
        panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, &$s3129);
        panda$core$String* $tmp3131 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, $tmp3131);
        panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, &$s3133);
        panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, testStart3084);
        panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, &$s3136);
        panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3138, nonNullValue3117);
        panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, &$s3140);
        panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, nonNullLabel3099);
        panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3142, &$s3143);
        panda$core$String* $tmp3145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, $tmp3144);
        (($fn3146) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3145);
        return result3125;
    }
    }
    panda$core$String* $tmp3148 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3147 = $tmp3148;
    panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3149, mallocRef3147);
    panda$core$String* $tmp3152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3150, &$s3151);
    org$pandalanguage$pandac$Type* $tmp3153 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3081);
    panda$core$Int64 $tmp3154 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3153);
    panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3152, ((panda$core$Object*) wrap_panda$core$Int64($tmp3154)));
    panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, &$s3156);
    (($fn3158) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3157);
    org$pandalanguage$pandac$Type* $tmp3160 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3081);
    panda$core$String* $tmp3161 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3160);
    wrapperTypeName3159 = $tmp3161;
    org$pandalanguage$pandac$Type* $tmp3163 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3081);
    panda$core$String* $tmp3164 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3163);
    wrapperType3162 = $tmp3164;
    panda$core$String* $tmp3166 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3165 = $tmp3166;
    panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3167, wrapperCast3165);
    panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3168, &$s3169);
    panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, mallocRef3147);
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, &$s3172);
    panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, wrapperType3162);
    panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
    (($fn3177) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3176);
    panda$core$String* $tmp3179 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3178 = $tmp3179;
    panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3180, classPtr3178);
    panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, &$s3182);
    panda$core$String* $tmp3184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3183, wrapperTypeName3159);
    panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3184, &$s3185);
    panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3187, wrapperType3162);
    panda$core$String* $tmp3190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, &$s3189);
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3190, wrapperCast3165);
    panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, $tmp3193);
    (($fn3195) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3194);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3197 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3081);
    cc3196 = $tmp3197;
    panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3198, cc3196->type);
    panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, &$s3200);
    panda$core$String* $tmp3202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, cc3196->name);
    panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3202, &$s3203);
    panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3205, classPtr3178);
    panda$core$String* $tmp3208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, &$s3207);
    panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, $tmp3208);
    (($fn3210) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3209);
    panda$core$String* $tmp3212 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3211 = $tmp3212;
    panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3213, refCount3211);
    panda$core$String* $tmp3216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3214, &$s3215);
    panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3216, wrapperTypeName3159);
    panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3217, &$s3218);
    panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3220, wrapperType3162);
    panda$core$String* $tmp3223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, &$s3222);
    panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3223, wrapperCast3165);
    panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, &$s3225);
    panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3219, $tmp3226);
    (($fn3228) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3227);
    panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3229, refCount3211);
    panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, &$s3231);
    (($fn3233) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3232);
    panda$core$String* $tmp3235 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3234 = $tmp3235;
    panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3236, target3234);
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, &$s3238);
    panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, wrapperTypeName3159);
    panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, &$s3241);
    panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3243, wrapperType3162);
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, &$s3245);
    panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, wrapperCast3165);
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, &$s3248);
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3242, $tmp3249);
    (($fn3251) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3250);
    panda$core$String* $tmp3253 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3252, $tmp3253);
    panda$core$String* $tmp3256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3254, &$s3255);
    panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3256, p_value);
    panda$core$String* $tmp3259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3257, &$s3258);
    panda$core$String* $tmp3260 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3259, $tmp3260);
    panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3261, &$s3262);
    panda$core$String* $tmp3264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3263, target3234);
    panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3264, &$s3265);
    (($fn3267) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3266);
    panda$core$String* $tmp3268 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3269 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3162, $tmp3268);
    if ($tmp3269.value) {
    {
        panda$core$String* $tmp3271 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3270 = $tmp3271;
        panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3272, result3270);
        panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, &$s3274);
        panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, wrapperType3162);
        panda$core$String* $tmp3278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3276, &$s3277);
        panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3278, wrapperCast3165);
        panda$core$String* $tmp3281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, &$s3280);
        panda$core$String* $tmp3282 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3281, $tmp3282);
        panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
        (($fn3286) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3285);
        return result3270;
    }
    }
    return wrapperCast3165;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3290;
    panda$core$String* t3291;
    org$pandalanguage$pandac$ClassDecl* cl3295;
    panda$core$String* base3299;
    panda$collections$ListView* fields3302;
    panda$core$Int64$nullable index3304;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3305;
    panda$core$String* result3333;
    panda$core$String* ptr3353;
    panda$core$String* result3362;
    panda$core$Bit $tmp3287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3287.value);
    panda$core$Int64 $tmp3288 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3288, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3289.value);
    field3290 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3292 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3290->type);
    t3291 = $tmp3292;
    panda$core$Bit $tmp3293 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3290->annotations);
    if ($tmp3293.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3290->value != NULL }).value);
        panda$core$String* $tmp3294 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field3290->value, p_out);
        return $tmp3294;
    }
    }
    panda$core$Object* $tmp3296 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3297 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3296)->type);
    cl3295 = $tmp3297;
    PANDA_ASSERT(((panda$core$Bit) { cl3295 != NULL }).value);
    panda$core$Bit $tmp3298 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3295);
    if ($tmp3298.value) {
    {
        panda$core$Object* $tmp3300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3301 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3300), p_out);
        base3299 = $tmp3301;
        panda$collections$ListView* $tmp3303 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3295);
        fields3302 = $tmp3303;
        index3304 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3306 = ((panda$collections$CollectionView*) fields3302)->$class->itable;
        while ($tmp3306->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3306 = $tmp3306->next;
        }
        $fn3308 $tmp3307 = $tmp3306->methods[0];
        panda$core$Int64 $tmp3309 = $tmp3307(((panda$collections$CollectionView*) fields3302));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3305, ((panda$core$Int64) { 0 }), $tmp3309, ((panda$core$Bit) { false }));
        int64_t $tmp3311 = $tmp3305.min.value;
        panda$core$Int64 i3310 = { $tmp3311 };
        int64_t $tmp3313 = $tmp3305.max.value;
        bool $tmp3314 = $tmp3305.inclusive.value;
        if ($tmp3314) goto $l3321; else goto $l3322;
        $l3321:;
        if ($tmp3311 <= $tmp3313) goto $l3315; else goto $l3317;
        $l3322:;
        if ($tmp3311 < $tmp3313) goto $l3315; else goto $l3317;
        $l3315:;
        {
            ITable* $tmp3323 = fields3302->$class->itable;
            while ($tmp3323->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3323 = $tmp3323->next;
            }
            $fn3325 $tmp3324 = $tmp3323->methods[0];
            panda$core$Object* $tmp3326 = $tmp3324(fields3302, i3310);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3326)) == ((panda$core$Object*) field3290) }).value) {
            {
                index3304 = ((panda$core$Int64$nullable) { i3310, true });
                goto $l3317;
            }
            }
        }
        $l3318:;
        int64_t $tmp3328 = $tmp3313 - i3310.value;
        if ($tmp3314) goto $l3329; else goto $l3330;
        $l3329:;
        if ($tmp3328 >= 1) goto $l3327; else goto $l3317;
        $l3330:;
        if ($tmp3328 > 1) goto $l3327; else goto $l3317;
        $l3327:;
        i3310.value += 1;
        goto $l3315;
        $l3317:;
        PANDA_ASSERT(((panda$core$Bit) { index3304.nonnull }).value);
        panda$core$String* $tmp3334 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3333 = $tmp3334;
        panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3335, result3333);
        panda$core$String* $tmp3338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3336, &$s3337);
        panda$core$Object* $tmp3339 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3340 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3339)->type);
        panda$core$String* $tmp3341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3338, $tmp3340);
        panda$core$String* $tmp3343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3341, &$s3342);
        panda$core$String* $tmp3344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3343, base3299);
        panda$core$String* $tmp3346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3344, &$s3345);
        panda$core$String* $tmp3348 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3347, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3304.value))));
        panda$core$String* $tmp3350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3348, &$s3349);
        panda$core$String* $tmp3351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3346, $tmp3350);
        (($fn3352) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3351);
        return result3333;
    }
    }
    panda$core$String* $tmp3355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3354, t3291);
    panda$core$String* $tmp3357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3355, &$s3356);
    panda$core$String* $tmp3358 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3357, $tmp3358);
    panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, &$s3360);
    ptr3353 = $tmp3361;
    panda$core$String* $tmp3363 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3362 = $tmp3363;
    panda$core$String* $tmp3365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3364, result3362);
    panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3365, &$s3366);
    panda$core$String* $tmp3368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3367, t3291);
    panda$core$String* $tmp3370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3368, &$s3369);
    panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3370, ptr3353);
    panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, &$s3372);
    (($fn3374) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3373);
    return result3362;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3375;
    panda$core$String* testStart3378;
    panda$core$String* isNonNull3379;
    panda$core$String* nonNullLabel3393;
    panda$core$String* endLabel3395;
    panda$core$String* wrapped3408;
    panda$core$String* nonNullValue3411;
    panda$core$String* result3419;
    panda$core$String* targetType3448;
    panda$core$String* wrapperTypeName3450;
    panda$core$String* wrapperType3452;
    panda$core$String* srcCast3454;
    panda$core$String* load3471;
    panda$core$String* result3487;
    org$pandalanguage$pandac$ClassDecl* $tmp3376 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3375 = $tmp3376;
    PANDA_ASSERT(((panda$core$Bit) { target3375 != NULL }).value);
    panda$core$Bit $tmp3377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3377.value) {
    {
        testStart3378 = self->currentBlock;
        panda$core$String* $tmp3380 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3379 = $tmp3380;
        panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3381, isNonNull3379);
        panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, &$s3383);
        panda$core$String* $tmp3385 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3384, $tmp3385);
        panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3386, &$s3387);
        panda$core$String* $tmp3389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, p_value);
        panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3389, &$s3390);
        (($fn3392) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3391);
        panda$core$String* $tmp3394 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3393 = $tmp3394;
        panda$core$String* $tmp3396 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3395 = $tmp3396;
        panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3397, isNonNull3379);
        panda$core$String* $tmp3400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3398, &$s3399);
        panda$core$String* $tmp3401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3400, nonNullLabel3393);
        panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3401, &$s3402);
        panda$core$String* $tmp3404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, endLabel3395);
        panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3404, &$s3405);
        (($fn3407) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3406);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3393, p_out);
        panda$core$Object* $tmp3409 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3410 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3409), p_out);
        wrapped3408 = $tmp3410;
        panda$core$Object* $tmp3412 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3413 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3408, ((org$pandalanguage$pandac$Type*) $tmp3412), p_dstType, p_out);
        nonNullValue3411 = $tmp3413;
        panda$core$String* $tmp3415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3414, endLabel3395);
        panda$core$String* $tmp3417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3415, &$s3416);
        (($fn3418) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3417);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3395, p_out);
        panda$core$String* $tmp3420 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3419 = $tmp3420;
        panda$core$String* $tmp3422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3421, result3419);
        panda$core$String* $tmp3424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3422, &$s3423);
        panda$core$String* $tmp3425 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3424, $tmp3425);
        panda$core$String* $tmp3428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3426, &$s3427);
        panda$core$Object* $tmp3430 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3431 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3430));
        panda$core$String* $tmp3432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3429, $tmp3431);
        panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3432, &$s3433);
        panda$core$String* $tmp3435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3428, $tmp3434);
        panda$core$String* $tmp3437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3436, testStart3378);
        panda$core$String* $tmp3439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3437, &$s3438);
        panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3439, nonNullValue3411);
        panda$core$String* $tmp3442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3440, &$s3441);
        panda$core$String* $tmp3443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3442, nonNullLabel3393);
        panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3443, &$s3444);
        panda$core$String* $tmp3446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3435, $tmp3445);
        (($fn3447) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3446);
        return result3419;
    }
    }
    panda$core$String* $tmp3449 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3448 = $tmp3449;
    panda$core$String* $tmp3451 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3450 = $tmp3451;
    panda$core$String* $tmp3453 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3452 = $tmp3453;
    panda$core$String* $tmp3455 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3454 = $tmp3455;
    panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3456, srcCast3454);
    panda$core$String* $tmp3459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3457, &$s3458);
    panda$core$String* $tmp3460 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3459, $tmp3460);
    panda$core$String* $tmp3463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3461, &$s3462);
    panda$core$String* $tmp3464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, p_value);
    panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3464, &$s3465);
    panda$core$String* $tmp3467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, wrapperType3452);
    panda$core$String* $tmp3469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3467, &$s3468);
    (($fn3470) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3469);
    panda$core$String* $tmp3472 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3471 = $tmp3472;
    panda$core$String* $tmp3474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3473, load3471);
    panda$core$String* $tmp3476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3474, &$s3475);
    panda$core$String* $tmp3477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3476, wrapperTypeName3450);
    panda$core$String* $tmp3479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3477, &$s3478);
    panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3479, wrapperType3452);
    panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3480, &$s3481);
    panda$core$String* $tmp3483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3482, srcCast3454);
    panda$core$String* $tmp3485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3483, &$s3484);
    (($fn3486) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3485);
    panda$core$String* $tmp3488 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3487 = $tmp3488;
    panda$core$String* $tmp3490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3489, result3487);
    panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3490, &$s3491);
    panda$core$String* $tmp3493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3492, wrapperTypeName3450);
    panda$core$String* $tmp3495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3493, &$s3494);
    panda$core$String* $tmp3496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3495, load3471);
    panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3496, &$s3497);
    panda$core$String* $tmp3499 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3498, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3499, &$s3500);
    (($fn3502) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3501);
    return result3487;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType3503;
    panda$core$String* result3505;
    panda$core$String* $tmp3504 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3503 = $tmp3504;
    panda$core$String* $tmp3506 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3505 = $tmp3506;
    panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3507, result3505);
    panda$core$String* $tmp3510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3508, &$s3509);
    panda$core$String* $tmp3511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3510, nullableType3503);
    panda$core$String* $tmp3513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3511, &$s3512);
    panda$core$String* $tmp3515 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3514, $tmp3515);
    panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3516, &$s3517);
    panda$core$String* $tmp3519 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3518, $tmp3519);
    panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3520, &$s3521);
    panda$core$String* $tmp3523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, p_value);
    panda$core$String* $tmp3525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3523, &$s3524);
    panda$core$String* $tmp3526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3513, $tmp3525);
    (($fn3527) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3526);
    return result3505;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3528;
    panda$core$String* $tmp3529 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3528 = $tmp3529;
    panda$core$String* $tmp3531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3530, result3528);
    panda$core$String* $tmp3533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3531, &$s3532);
    panda$core$String* $tmp3534 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3533, $tmp3534);
    panda$core$String* $tmp3537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3535, &$s3536);
    panda$core$String* $tmp3538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3537, p_value);
    panda$core$String* $tmp3540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3538, &$s3539);
    (($fn3541) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3540);
    return result3528;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3542;
    panda$core$Int64 size13545;
    panda$core$Int64 size23547;
    org$pandalanguage$pandac$ClassDecl* srcClass3555;
    org$pandalanguage$pandac$ClassDecl* targetClass3557;
    panda$core$String* srcType3596;
    panda$core$String* dstType3598;
    panda$core$String* result3601;
    panda$core$Bit $tmp3543 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3543.value) {
    {
        panda$core$Bit $tmp3544 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3544.value);
        panda$core$Int64 $tmp3546 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13545 = $tmp3546;
        panda$core$Int64 $tmp3548 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23547 = $tmp3548;
        panda$core$Bit $tmp3549 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13545, size23547);
        if ($tmp3549.value) {
        {
            op3542 = &$s3550;
        }
        }
        else {
        panda$core$Bit $tmp3551 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13545, size23547);
        if ($tmp3551.value) {
        {
            panda$core$Bit $tmp3552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3552.value) {
            {
                op3542 = &$s3553;
            }
            }
            else {
            {
                op3542 = &$s3554;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3556 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3555 = $tmp3556;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3555 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3558 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3557 = $tmp3558;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3557 != NULL }).value);
        panda$core$Bit $tmp3560 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3555);
        bool $tmp3559 = $tmp3560.value;
        if (!$tmp3559) goto $l3561;
        panda$core$Bit $tmp3562 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3557);
        panda$core$Bit $tmp3563 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3562);
        $tmp3559 = $tmp3563.value;
        $l3561:;
        panda$core$Bit $tmp3564 = { $tmp3559 };
        if ($tmp3564.value) {
        {
            panda$core$String* $tmp3565 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3565;
        }
        }
        else {
        panda$core$Bit $tmp3567 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3555);
        panda$core$Bit $tmp3568 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3567);
        bool $tmp3566 = $tmp3568.value;
        if (!$tmp3566) goto $l3569;
        panda$core$Bit $tmp3570 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3557);
        $tmp3566 = $tmp3570.value;
        $l3569:;
        panda$core$Bit $tmp3571 = { $tmp3566 };
        if ($tmp3571.value) {
        {
            panda$core$String* $tmp3572 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3572;
        }
        }
        else {
        panda$core$Bit $tmp3575 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3555);
        bool $tmp3574 = $tmp3575.value;
        if (!$tmp3574) goto $l3576;
        panda$core$Bit $tmp3577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3574 = $tmp3577.value;
        $l3576:;
        panda$core$Bit $tmp3578 = { $tmp3574 };
        bool $tmp3573 = $tmp3578.value;
        if (!$tmp3573) goto $l3579;
        panda$core$Object* $tmp3580 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3581 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3580), p_src);
        $tmp3573 = $tmp3581.value;
        $l3579:;
        panda$core$Bit $tmp3582 = { $tmp3573 };
        if ($tmp3582.value) {
        {
            panda$core$String* $tmp3583 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3583;
        }
        }
        else {
        panda$core$Bit $tmp3586 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3557);
        bool $tmp3585 = $tmp3586.value;
        if (!$tmp3585) goto $l3587;
        panda$core$Bit $tmp3588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3585 = $tmp3588.value;
        $l3587:;
        panda$core$Bit $tmp3589 = { $tmp3585 };
        bool $tmp3584 = $tmp3589.value;
        if (!$tmp3584) goto $l3590;
        panda$core$Object* $tmp3591 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3592 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3591), p_target);
        $tmp3584 = $tmp3592.value;
        $l3590:;
        panda$core$Bit $tmp3593 = { $tmp3584 };
        if ($tmp3593.value) {
        {
            panda$core$String* $tmp3594 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3594;
        }
        }
        }
        }
        }
        op3542 = &$s3595;
    }
    }
    panda$core$String* $tmp3597 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3596 = $tmp3597;
    panda$core$String* $tmp3599 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3598 = $tmp3599;
    panda$core$Bit $tmp3600 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3596, dstType3598);
    if ($tmp3600.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3602 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3601 = $tmp3602;
    panda$core$String* $tmp3604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3603, result3601);
    panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3604, &$s3605);
    panda$core$String* $tmp3607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3606, op3542);
    panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3607, &$s3608);
    panda$core$String* $tmp3610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, srcType3596);
    panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3610, &$s3611);
    panda$core$String* $tmp3613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3612, p_value);
    panda$core$String* $tmp3615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3613, &$s3614);
    panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3615, dstType3598);
    panda$core$String* $tmp3618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3616, &$s3617);
    (($fn3619) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3618);
    return result3601;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3623;
    panda$core$Bit $tmp3620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3620.value);
    panda$core$Int64 $tmp3621 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3621, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3622.value);
    panda$core$Object* $tmp3624 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3625 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3624), p_out);
    base3623 = $tmp3625;
    panda$core$Object* $tmp3626 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3627 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3623, ((org$pandalanguage$pandac$IRNode*) $tmp3626)->type, p_cast->type, p_out);
    return $tmp3627;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3631;
    panda$core$String* t3633;
    panda$core$String* value3641;
    panda$core$String* result3652;
    org$pandalanguage$pandac$FieldDecl* lastField3654;
    panda$core$String* value3684;
    panda$core$String* result3695;
    org$pandalanguage$pandac$FieldDecl* lastField3697;
    panda$core$String* alloca3722;
    panda$core$String* result3743;
    panda$core$String* callRef3759;
    panda$core$String* result3770;
    panda$core$String* classPtr3784;
    panda$core$String* className3786;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3812;
    panda$core$Bit $tmp3628 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3628.value);
    panda$core$Int64 $tmp3629 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3630 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3629, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3630.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3632 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3631 = $tmp3632;
    PANDA_ASSERT(((panda$core$Bit) { cl3631 != NULL }).value);
    panda$core$String* $tmp3634 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3633 = $tmp3634;
    panda$core$Bit $tmp3635 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3635.value) {
    {
        panda$core$Int64 $tmp3636 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3636, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3637.value);
        panda$core$Object* $tmp3638 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3639 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3638)->children);
        panda$core$Bit $tmp3640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3639, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3640.value);
        panda$core$Object* $tmp3642 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3643 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3642)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3644 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3643), p_out);
        value3641 = $tmp3644;
        panda$core$Object* $tmp3645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3646 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3645)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3646)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3647.value) {
        {
            panda$core$String* $tmp3649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3648, value3641);
            panda$core$String* $tmp3651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3649, &$s3650);
            return $tmp3651;
        }
        }
        panda$core$String* $tmp3653 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3652 = $tmp3653;
        panda$core$Int64 $tmp3655 = panda$collections$Array$get_count$R$panda$core$Int64(cl3631->fields);
        panda$core$Int64 $tmp3656 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3655, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3657 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3631->fields, $tmp3656);
        lastField3654 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3657);
        panda$core$Bit $tmp3658 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3654->annotations);
        panda$core$Bit $tmp3659 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3658);
        PANDA_ASSERT($tmp3659.value);
        panda$core$String* $tmp3661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3660, result3652);
        panda$core$String* $tmp3663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3661, &$s3662);
        panda$core$String* $tmp3664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3663, t3633);
        panda$core$String* $tmp3666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3664, &$s3665);
        panda$core$String* $tmp3667 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3654->type);
        panda$core$String* $tmp3668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3666, $tmp3667);
        panda$core$String* $tmp3670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3668, &$s3669);
        panda$core$String* $tmp3672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3671, value3641);
        panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3672, &$s3673);
        panda$core$String* $tmp3675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3670, $tmp3674);
        (($fn3676) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3675);
        return result3652;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3677 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3678 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3677);
    if ($tmp3678.value) {
    {
        panda$core$Int64 $tmp3679 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3679, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3680.value);
        panda$core$Object* $tmp3681 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3682 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3681)->children);
        panda$core$Bit $tmp3683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3682, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3683.value);
        panda$core$Object* $tmp3685 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3686 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3685)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3687 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3686), p_out);
        value3684 = $tmp3687;
        panda$core$Object* $tmp3688 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3689 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3688)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3689)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3690.value) {
        {
            panda$core$String* $tmp3692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3691, value3684);
            panda$core$String* $tmp3694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3692, &$s3693);
            return $tmp3694;
        }
        }
        panda$core$String* $tmp3696 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3695 = $tmp3696;
        panda$core$Int64 $tmp3698 = panda$collections$Array$get_count$R$panda$core$Int64(cl3631->fields);
        panda$core$Int64 $tmp3699 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3698, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3700 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3631->fields, $tmp3699);
        lastField3697 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3700);
        panda$core$Bit $tmp3701 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3697->annotations);
        panda$core$Bit $tmp3702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3701);
        PANDA_ASSERT($tmp3702.value);
        panda$core$String* $tmp3704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3703, result3695);
        panda$core$String* $tmp3706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3704, &$s3705);
        panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3706, t3633);
        panda$core$String* $tmp3709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3707, &$s3708);
        panda$core$String* $tmp3710 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3697->type);
        panda$core$String* $tmp3711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3709, $tmp3710);
        panda$core$String* $tmp3713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3711, &$s3712);
        panda$core$String* $tmp3715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3714, value3684);
        panda$core$String* $tmp3717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3715, &$s3716);
        panda$core$String* $tmp3718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3713, $tmp3717);
        (($fn3719) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3718);
        return result3695;
    }
    }
    panda$core$Bit $tmp3720 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3631);
    if ($tmp3720.value) {
    {
        panda$core$Int64 $tmp3721 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3721;
        panda$core$String* $tmp3724 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3723, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3724, &$s3725);
        alloca3722 = $tmp3726;
        panda$core$String* $tmp3728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3727, alloca3722);
        panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3728, &$s3729);
        panda$core$String* $tmp3731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3730, t3633);
        panda$core$String* $tmp3733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3731, &$s3732);
        (($fn3734) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3733);
        panda$core$Object* $tmp3735 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3736, t3633);
        panda$core$String* $tmp3739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3737, &$s3738);
        panda$core$String* $tmp3740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3739, alloca3722);
        panda$core$String* $tmp3742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3740, &$s3741);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3735), $tmp3742, p_out);
        panda$core$String* $tmp3744 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3743 = $tmp3744;
        panda$core$String* $tmp3746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3745, result3743);
        panda$core$String* $tmp3748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3746, &$s3747);
        panda$core$String* $tmp3749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3748, t3633);
        panda$core$String* $tmp3751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3749, &$s3750);
        panda$core$String* $tmp3752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3751, t3633);
        panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3752, &$s3753);
        panda$core$String* $tmp3755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3754, alloca3722);
        panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3755, &$s3756);
        (($fn3758) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3757);
        return result3743;
    }
    }
    panda$core$String* $tmp3760 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3759 = $tmp3760;
    panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3761, callRef3759);
    panda$core$String* $tmp3764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3762, &$s3763);
    panda$core$Int64 $tmp3765 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3764, ((panda$core$Object*) wrap_panda$core$Int64($tmp3765)));
    panda$core$String* $tmp3768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3766, &$s3767);
    (($fn3769) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3768);
    panda$core$String* $tmp3771 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3770 = $tmp3771;
    panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3772, result3770);
    panda$core$String* $tmp3775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3773, &$s3774);
    panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3775, callRef3759);
    panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3776, &$s3777);
    panda$core$String* $tmp3779 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3778, $tmp3779);
    panda$core$String* $tmp3782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3780, &$s3781);
    (($fn3783) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3782);
    panda$core$String* $tmp3785 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3784 = $tmp3785;
    panda$core$Bit $tmp3788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3787 = $tmp3788.value;
    if (!$tmp3787) goto $l3789;
    panda$core$Bit $tmp3790 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3631);
    panda$core$Bit $tmp3791 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3790);
    $tmp3787 = $tmp3791.value;
    $l3789:;
    panda$core$Bit $tmp3792 = { $tmp3787 };
    if ($tmp3792.value) {
    {
        panda$core$Object* $tmp3793 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3794 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3793));
        className3786 = $tmp3794;
    }
    }
    else {
    {
        panda$core$String* $tmp3795 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3786 = $tmp3795;
    }
    }
    panda$core$String* $tmp3797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3796, classPtr3784);
    panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3797, &$s3798);
    panda$core$String* $tmp3800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, className3786);
    panda$core$String* $tmp3802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3800, &$s3801);
    panda$core$String* $tmp3803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3802, t3633);
    panda$core$String* $tmp3805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3803, &$s3804);
    panda$core$String* $tmp3806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3805, result3770);
    panda$core$String* $tmp3808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3806, &$s3807);
    panda$core$String* $tmp3810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3808, &$s3809);
    (($fn3811) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3810);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3813 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3631);
    cc3812 = $tmp3813;
    panda$core$String* $tmp3815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3814, cc3812->type);
    panda$core$String* $tmp3817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3815, &$s3816);
    panda$core$String* $tmp3818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3817, cc3812->name);
    panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3818, &$s3819);
    panda$core$String* $tmp3822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3821, classPtr3784);
    panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3822, &$s3823);
    panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3820, $tmp3824);
    (($fn3826) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3825);
    panda$core$Object* $tmp3827 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3828, t3633);
    panda$core$String* $tmp3831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3829, &$s3830);
    panda$core$String* $tmp3832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3831, result3770);
    panda$core$String* $tmp3834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3832, &$s3833);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3827), $tmp3834, p_out);
    return result3770;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3835 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3835;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3837 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3836, $tmp3837);
    return $tmp3838;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3839;
    }
    }
    return &$s3840;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3843;
    panda$core$String* t3845;
    panda$core$Bit $tmp3841 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3841.value) {
    {
        panda$core$String* $tmp3842 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3842;
    }
    }
    panda$core$String* $tmp3844 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3843 = $tmp3844;
    panda$core$String* $tmp3846 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3845 = $tmp3846;
    panda$core$String* $tmp3848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3847, result3843);
    panda$core$String* $tmp3850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3848, &$s3849);
    panda$core$String* $tmp3851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3850, t3845);
    panda$core$String* $tmp3853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3851, &$s3852);
    panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3853, t3845);
    panda$core$String* $tmp3856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3854, &$s3855);
    panda$core$String* $tmp3857 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3856, $tmp3857);
    panda$core$String* $tmp3860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3858, &$s3859);
    (($fn3861) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3860);
    return result3843;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars3863;
    panda$core$String* charsType3868;
    panda$core$String* separator3886;
    panda$collections$Iterator* c$Iter3888;
    panda$core$Char8 c3901;
    panda$core$String* result3919;
    org$pandalanguage$pandac$ClassDecl* string3924;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3927;
    panda$core$Int64 $tmp3862 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3862;
    panda$core$String* $tmp3865 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3864, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3865, &$s3866);
    chars3863 = $tmp3867;
    panda$collections$ListView* $tmp3870 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3871 = ((panda$collections$CollectionView*) $tmp3870)->$class->itable;
    while ($tmp3871->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3871 = $tmp3871->next;
    }
    $fn3873 $tmp3872 = $tmp3871->methods[0];
    panda$core$Int64 $tmp3874 = $tmp3872(((panda$collections$CollectionView*) $tmp3870));
    panda$core$String* $tmp3875 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3869, ((panda$core$Object*) wrap_panda$core$Int64($tmp3874)));
    panda$core$String* $tmp3877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3875, &$s3876);
    charsType3868 = $tmp3877;
    panda$core$String* $tmp3879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3878, chars3863);
    panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3879, &$s3880);
    panda$core$String* $tmp3882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, charsType3868);
    panda$core$String* $tmp3884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3882, &$s3883);
    (($fn3885) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3884);
    separator3886 = &$s3887;
    {
        panda$collections$ListView* $tmp3889 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3890 = ((panda$collections$Iterable*) $tmp3889)->$class->itable;
        while ($tmp3890->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3890 = $tmp3890->next;
        }
        $fn3892 $tmp3891 = $tmp3890->methods[0];
        panda$collections$Iterator* $tmp3893 = $tmp3891(((panda$collections$Iterable*) $tmp3889));
        c$Iter3888 = $tmp3893;
        $l3894:;
        ITable* $tmp3896 = c$Iter3888->$class->itable;
        while ($tmp3896->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3896 = $tmp3896->next;
        }
        $fn3898 $tmp3897 = $tmp3896->methods[0];
        panda$core$Bit $tmp3899 = $tmp3897(c$Iter3888);
        panda$core$Bit $tmp3900 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3899);
        if (!$tmp3900.value) goto $l3895;
        {
            ITable* $tmp3902 = c$Iter3888->$class->itable;
            while ($tmp3902->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3902 = $tmp3902->next;
            }
            $fn3904 $tmp3903 = $tmp3902->methods[1];
            panda$core$Object* $tmp3905 = $tmp3903(c$Iter3888);
            c3901 = ((panda$core$Char8$wrapper*) $tmp3905)->value;
            panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3906, separator3886);
            panda$core$String* $tmp3909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3907, &$s3908);
            panda$core$Int8 $tmp3910 = panda$core$Char8$convert$R$panda$core$Int8(c3901);
            panda$core$String* $tmp3911 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3909, ((panda$core$Object*) wrap_panda$core$Int8($tmp3910)));
            panda$core$String* $tmp3913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3911, &$s3912);
            (($fn3914) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3913);
            separator3886 = &$s3915;
        }
        goto $l3894;
        $l3895:;
    }
    (($fn3917) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s3916);
    panda$core$Int64 $tmp3918 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3918;
    panda$core$String* $tmp3921 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3920, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3921, &$s3922);
    result3919 = $tmp3923;
    org$pandalanguage$pandac$Type* $tmp3925 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3926 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp3925);
    string3924 = $tmp3926;
    PANDA_ASSERT(((panda$core$Bit) { string3924 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3928 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string3924);
    cc3927 = $tmp3928;
    panda$core$String* $tmp3930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3929, result3919);
    panda$core$String* $tmp3932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3930, &$s3931);
    panda$core$String* $tmp3934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3933, cc3927->type);
    panda$core$String* $tmp3936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3934, &$s3935);
    panda$core$String* $tmp3937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3936, cc3927->name);
    panda$core$String* $tmp3939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3937, &$s3938);
    panda$core$String* $tmp3940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3932, $tmp3939);
    panda$core$String* $tmp3942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3940, &$s3941);
    panda$core$String* $tmp3944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3943, charsType3868);
    panda$core$String* $tmp3946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3944, &$s3945);
    panda$core$String* $tmp3947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3946, chars3863);
    panda$core$String* $tmp3949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3947, &$s3948);
    panda$core$String* $tmp3950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3942, $tmp3949);
    panda$collections$ListView* $tmp3952 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3953 = ((panda$collections$CollectionView*) $tmp3952)->$class->itable;
    while ($tmp3953->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3953 = $tmp3953->next;
    }
    $fn3955 $tmp3954 = $tmp3953->methods[0];
    panda$core$Int64 $tmp3956 = $tmp3954(((panda$collections$CollectionView*) $tmp3952));
    panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3951, ((panda$core$Object*) wrap_panda$core$Int64($tmp3956)));
    panda$core$String* $tmp3959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, &$s3958);
    panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3950, $tmp3959);
    panda$core$String* $tmp3962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, &$s3961);
    (($fn3963) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3962);
    return result3919;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3964 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp3965 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3964, ((panda$core$Int64) { 0 }));
    if ($tmp3965.value) {
    {
        panda$core$Object* $tmp3966 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp3966)->selfRef;
    }
    }
    return &$s3967;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3968;
    panda$core$String* $tmp3969 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3968 = $tmp3969;
    panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3970, result3968);
    panda$core$String* $tmp3973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3971, &$s3972);
    org$pandalanguage$pandac$Type* $tmp3974 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp3975 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3974);
    panda$core$String* $tmp3976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3973, $tmp3975);
    panda$core$String* $tmp3978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3976, &$s3977);
    panda$core$String* $tmp3979 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp3980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3978, $tmp3979);
    (($fn3981) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3980);
    return result3968;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value3985;
    org$pandalanguage$pandac$ClassDecl* cl3988;
    panda$core$String* resultValue3991;
    panda$core$String* field3996;
    panda$core$String* result4024;
    panda$core$Bit $tmp3982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp3982.value);
    panda$core$Int64 $tmp3983 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp3984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3983, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3984.value);
    panda$core$Object* $tmp3986 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3987 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3986), p_out);
    value3985 = $tmp3987;
    panda$core$Object* $tmp3989 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3990 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3989)->type);
    cl3988 = $tmp3990;
    panda$core$Bit $tmp3992 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3988);
    if ($tmp3992.value) {
    {
        panda$core$Object* $tmp3993 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3994 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3993)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp3994.value) {
        {
            return &$s3995;
        }
        }
        panda$core$String* $tmp3997 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field3996 = $tmp3997;
        panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3998, field3996);
        panda$core$String* $tmp4001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3999, &$s4000);
        panda$core$String* $tmp4002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4001, value3985);
        panda$core$String* $tmp4004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4002, &$s4003);
        (($fn4005) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4004);
        panda$core$String* $tmp4006 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3991 = $tmp4006;
        panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4007, resultValue3991);
        panda$core$String* $tmp4010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4008, &$s4009);
        panda$core$String* $tmp4011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4010, field3996);
        panda$core$String* $tmp4013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4011, &$s4012);
        (($fn4014) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4013);
    }
    }
    else {
    {
        panda$core$String* $tmp4015 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue3991 = $tmp4015;
        panda$core$String* $tmp4017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4016, resultValue3991);
        panda$core$String* $tmp4019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4017, &$s4018);
        panda$core$String* $tmp4020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4019, value3985);
        panda$core$String* $tmp4022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4020, &$s4021);
        (($fn4023) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4022);
    }
    }
    panda$core$String* $tmp4025 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4024 = $tmp4025;
    panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4026, result4024);
    panda$core$String* $tmp4029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4027, &$s4028);
    panda$core$String* $tmp4030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4029, resultValue3991);
    panda$core$String* $tmp4032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4030, &$s4031);
    (($fn4033) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4032);
    return result4024;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4037;
    org$pandalanguage$pandac$ClassDecl* cl4040;
    panda$core$String* resultValue4043;
    panda$core$String* result4066;
    panda$core$Bit $tmp4034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4034.value);
    panda$core$Int64 $tmp4035 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4035, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4036.value);
    panda$core$Object* $tmp4038 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4039 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4038), p_out);
    value4037 = $tmp4039;
    panda$core$Object* $tmp4041 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4042 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4041)->type);
    cl4040 = $tmp4042;
    panda$core$Bit $tmp4044 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4040);
    if ($tmp4044.value) {
    {
        panda$core$Object* $tmp4045 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4046 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4045)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4046.value) {
        {
            return &$s4047;
        }
        }
        panda$core$String* $tmp4048 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4043 = $tmp4048;
        panda$core$String* $tmp4050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4049, resultValue4043);
        panda$core$String* $tmp4052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4050, &$s4051);
        panda$core$String* $tmp4053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4052, value4037);
        panda$core$String* $tmp4055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4053, &$s4054);
        (($fn4056) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4055);
    }
    }
    else {
    {
        panda$core$String* $tmp4057 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4043 = $tmp4057;
        panda$core$String* $tmp4059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4058, resultValue4043);
        panda$core$String* $tmp4061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4059, &$s4060);
        panda$core$String* $tmp4062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4061, value4037);
        panda$core$String* $tmp4064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4062, &$s4063);
        (($fn4065) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4064);
    }
    }
    panda$core$String* $tmp4067 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4066 = $tmp4067;
    panda$core$String* $tmp4069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4068, result4066);
    panda$core$String* $tmp4071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4069, &$s4070);
    panda$core$String* $tmp4072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4071, resultValue4043);
    panda$core$String* $tmp4074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4072, &$s4073);
    (($fn4075) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4074);
    return result4066;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4077;
    panda$core$Bit $tmp4076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4076.value);
    panda$core$Object* $tmp4078 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4079 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4078));
    cl4077 = $tmp4079;
    PANDA_ASSERT(((panda$core$Bit) { cl4077 != NULL }).value);
    panda$core$Bit $tmp4080 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4077);
    if ($tmp4080.value) {
    {
        panda$core$Object* $tmp4082 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4083 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4082));
        panda$core$String* $tmp4084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4081, $tmp4083);
        panda$core$String* $tmp4086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4084, &$s4085);
        return $tmp4086;
    }
    }
    else {
    {
        return &$s4087;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4091;
    panda$core$String* result4094;
    panda$core$Bit $tmp4088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4088.value);
    panda$core$Int64 $tmp4089 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4089, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4090.value);
    panda$core$Object* $tmp4092 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4093 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4092), p_out);
    base4091 = $tmp4093;
    panda$core$String* $tmp4095 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4094 = $tmp4095;
    panda$core$Int64 $tmp4096 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4096.value) {
        case 52:
        {
            panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4097, result4094);
            panda$core$String* $tmp4100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4098, &$s4099);
            panda$core$String* $tmp4101 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4100, $tmp4101);
            panda$core$String* $tmp4104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4102, &$s4103);
            panda$core$String* $tmp4105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4104, base4091);
            panda$core$String* $tmp4107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4105, &$s4106);
            (($fn4108) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4107);
            return result4094;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4109, result4094);
            panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, &$s4111);
            panda$core$String* $tmp4113 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, $tmp4113);
            panda$core$String* $tmp4116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4114, &$s4115);
            panda$core$String* $tmp4117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4116, base4091);
            panda$core$String* $tmp4119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4117, &$s4118);
            (($fn4120) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4119);
            return result4094;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4133;
    panda$core$String* result4136;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4121 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4121;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4122 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4122;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4123 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4123;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4124 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4124;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4125 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4125;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4126 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4126;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4127 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4127;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4128 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4128;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4129 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4129;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4130 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4130;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4131 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4131;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4132 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4132;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4134 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4135 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4134), p_out);
            value4133 = $tmp4135;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4133));
            return value4133;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4137 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4136 = ((panda$core$String*) $tmp4137);
            PANDA_ASSERT(((panda$core$Bit) { result4136 != NULL }).value);
            return result4136;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4138 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4138;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4139 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4139;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4140 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4140;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4141 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4141;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4143 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4142, $tmp4143);
    panda$core$String* $tmp4146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4144, &$s4145);
    panda$core$String* $tmp4147 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4146, $tmp4147);
    panda$core$String* $tmp4150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4148, &$s4149);
    return $tmp4150;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4153;
    org$pandalanguage$pandac$IRNode* s4165;
    panda$core$Bit $tmp4151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4151.value);
    panda$core$Int64 $tmp4152 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4152;
    {
        ITable* $tmp4154 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4154->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4154 = $tmp4154->next;
        }
        $fn4156 $tmp4155 = $tmp4154->methods[0];
        panda$collections$Iterator* $tmp4157 = $tmp4155(((panda$collections$Iterable*) p_block->children));
        s$Iter4153 = $tmp4157;
        $l4158:;
        ITable* $tmp4160 = s$Iter4153->$class->itable;
        while ($tmp4160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4160 = $tmp4160->next;
        }
        $fn4162 $tmp4161 = $tmp4160->methods[0];
        panda$core$Bit $tmp4163 = $tmp4161(s$Iter4153);
        panda$core$Bit $tmp4164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4163);
        if (!$tmp4164.value) goto $l4159;
        {
            ITable* $tmp4166 = s$Iter4153->$class->itable;
            while ($tmp4166->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4166 = $tmp4166->next;
            }
            $fn4168 $tmp4167 = $tmp4166->methods[1];
            panda$core$Object* $tmp4169 = $tmp4167(s$Iter4153);
            s4165 = ((org$pandalanguage$pandac$IRNode*) $tmp4169);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4165, p_out);
        }
        goto $l4158;
        $l4159:;
    }
    panda$core$Int64 $tmp4170 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4170;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4171;
    panda$core$String* $match$1879_94172;
    panda$core$String* ptr4177;
    panda$core$String* arg4180;
    org$pandalanguage$pandac$Type* baseType4200;
    panda$core$String* base4204;
    panda$core$String* indexStruct4207;
    panda$core$String* index4210;
    panda$core$String* value4220;
    panda$core$String* ptr4224;
    panda$core$String* ptr4263;
    panda$core$String* cast4266;
    m4171 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1879_94172 = ((org$pandalanguage$pandac$Symbol*) m4171->value)->name;
        panda$core$Bit $tmp4174 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1879_94172, &$s4173);
        if ($tmp4174.value) {
        {
            panda$core$Int64 $tmp4175 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4175, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4176.value);
            panda$core$Object* $tmp4178 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4179 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4178), p_out);
            ptr4177 = $tmp4179;
            panda$core$Object* $tmp4181 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4182 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4181));
            panda$core$String* $tmp4183 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4182, p_out);
            arg4180 = $tmp4183;
            panda$core$String* $tmp4185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4184, arg4180);
            panda$core$String* $tmp4187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4185, &$s4186);
            panda$core$String* $tmp4188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4187, ptr4177);
            panda$core$String* $tmp4190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4188, &$s4189);
            (($fn4191) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4190);
        }
        }
        else {
        panda$core$Bit $tmp4193 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1879_94172, &$s4192);
        if ($tmp4193.value) {
        {
            panda$core$Int64 $tmp4194 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4194, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4195.value);
            panda$core$Object* $tmp4196 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4197 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4196));
            panda$core$Int64 $tmp4198 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4197->type->subtypes);
            panda$core$Bit $tmp4199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4198, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4199.value);
            panda$core$Object* $tmp4201 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4202 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4201));
            panda$core$Object* $tmp4203 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4202->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4200 = ((org$pandalanguage$pandac$Type*) $tmp4203);
            panda$core$Object* $tmp4205 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4206 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4205), p_out);
            base4204 = $tmp4206;
            panda$core$Object* $tmp4208 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4209 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4208), p_out);
            indexStruct4207 = $tmp4209;
            panda$core$String* $tmp4211 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4210 = $tmp4211;
            panda$core$String* $tmp4213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4212, index4210);
            panda$core$String* $tmp4215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4213, &$s4214);
            panda$core$String* $tmp4216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4215, indexStruct4207);
            panda$core$String* $tmp4218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4216, &$s4217);
            (($fn4219) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4218);
            panda$core$Object* $tmp4221 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4222 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4221));
            panda$core$String* $tmp4223 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4222, p_out);
            value4220 = $tmp4223;
            panda$core$String* $tmp4225 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4224 = $tmp4225;
            panda$core$String* $tmp4227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4226, ptr4224);
            panda$core$String* $tmp4229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4227, &$s4228);
            panda$core$String* $tmp4230 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4200);
            panda$core$String* $tmp4231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4229, $tmp4230);
            panda$core$String* $tmp4233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4231, &$s4232);
            panda$core$String* $tmp4234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4233, base4204);
            panda$core$String* $tmp4236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4234, &$s4235);
            panda$core$String* $tmp4239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4237, &$s4238);
            panda$core$String* $tmp4241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4239, &$s4240);
            panda$core$String* $tmp4242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4241, index4210);
            panda$core$String* $tmp4244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4242, &$s4243);
            panda$core$String* $tmp4245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4236, $tmp4244);
            (($fn4246) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4245);
            panda$core$String* $tmp4248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4247, value4220);
            panda$core$String* $tmp4250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4248, &$s4249);
            panda$core$String* $tmp4251 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4200);
            panda$core$String* $tmp4252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4250, $tmp4251);
            panda$core$String* $tmp4254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4252, &$s4253);
            panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4254, ptr4224);
            panda$core$String* $tmp4257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4255, &$s4256);
            (($fn4258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4257);
        }
        }
        else {
        panda$core$Bit $tmp4260 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1879_94172, &$s4259);
        if ($tmp4260.value) {
        {
            panda$core$Int64 $tmp4261 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4261, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4262.value);
            panda$core$Object* $tmp4264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4265 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4264), p_out);
            ptr4263 = $tmp4265;
            panda$core$String* $tmp4267 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4266 = $tmp4267;
            panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4268, cast4266);
            panda$core$String* $tmp4271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4269, &$s4270);
            panda$core$String* $tmp4272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4271, ptr4263);
            panda$core$String* $tmp4274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4272, &$s4273);
            (($fn4275) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4274);
            panda$core$String* $tmp4277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4276, cast4266);
            panda$core$String* $tmp4279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4277, &$s4278);
            (($fn4280) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4279);
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
    org$pandalanguage$pandac$MethodDecl* m4282;
    org$pandalanguage$pandac$Type* actualMethodType4285;
    panda$core$String* actualResultType4286;
    panda$core$Bit isSuper4287;
    panda$collections$Array* args4307;
    panda$core$Int64 offset4310;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4315;
    panda$core$String* arg4330;
    panda$core$String* refTarget4362;
    panda$core$String* methodRef4366;
    panda$core$String* separator4368;
    panda$core$String* indirectVar4372;
    panda$core$String* resultType4375;
    panda$collections$Iterator* a$Iter4420;
    panda$core$String* a4432;
    panda$core$Bit $tmp4281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4281.value);
    m4282 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4284 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4282->owner)->name, &$s4283);
    if ($tmp4284.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4282->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4282);
    }
    }
    panda$core$Int64 $tmp4289 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4290 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4289, ((panda$core$Int64) { 1 }));
    bool $tmp4288 = $tmp4290.value;
    if (!$tmp4288) goto $l4291;
    panda$core$Object* $tmp4292 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4292)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4288 = $tmp4293.value;
    $l4291:;
    panda$core$Bit $tmp4294 = { $tmp4288 };
    isSuper4287 = $tmp4294;
    panda$core$Bit $tmp4296 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4287);
    bool $tmp4295 = $tmp4296.value;
    if (!$tmp4295) goto $l4297;
    panda$core$Bit $tmp4298 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4282);
    $tmp4295 = $tmp4298.value;
    $l4297:;
    panda$core$Bit $tmp4299 = { $tmp4295 };
    if ($tmp4299.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4300 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4282);
        actualMethodType4285 = $tmp4300;
        panda$core$Int64 $tmp4301 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4285->subtypes);
        panda$core$Int64 $tmp4302 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4301, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4303 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4285->subtypes, $tmp4302);
        panda$core$String* $tmp4304 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4303));
        actualResultType4286 = $tmp4304;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4305 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4282);
        actualMethodType4285 = $tmp4305;
        panda$core$String* $tmp4306 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4286 = $tmp4306;
    }
    }
    panda$collections$Array* $tmp4308 = (panda$collections$Array*) malloc(40);
    $tmp4308->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4308->refCount.value = 1;
    panda$collections$Array$init($tmp4308);
    args4307 = $tmp4308;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4307, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4311 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4312 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4285->subtypes);
    panda$core$Int64 $tmp4313 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4311, $tmp4312);
    panda$core$Int64 $tmp4314 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4313, ((panda$core$Int64) { 1 }));
    offset4310 = $tmp4314;
    panda$core$Int64 $tmp4316 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4315, ((panda$core$Int64) { 0 }), $tmp4316, ((panda$core$Bit) { false }));
    int64_t $tmp4318 = $tmp4315.min.value;
    panda$core$Int64 i4317 = { $tmp4318 };
    int64_t $tmp4320 = $tmp4315.max.value;
    bool $tmp4321 = $tmp4315.inclusive.value;
    if ($tmp4321) goto $l4328; else goto $l4329;
    $l4328:;
    if ($tmp4318 <= $tmp4320) goto $l4322; else goto $l4324;
    $l4329:;
    if ($tmp4318 < $tmp4320) goto $l4322; else goto $l4324;
    $l4322:;
    {
        panda$core$Object* $tmp4331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4317);
        panda$core$String* $tmp4332 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4331), p_out);
        arg4330 = $tmp4332;
        panda$core$Bit $tmp4334 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4317, offset4310);
        bool $tmp4333 = $tmp4334.value;
        if (!$tmp4333) goto $l4335;
        panda$core$Int64 $tmp4336 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4317, offset4310);
        panda$core$Object* $tmp4337 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4285->subtypes, $tmp4336);
        panda$core$Object* $tmp4338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4317);
        panda$core$Bit $tmp4339 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4337), ((org$pandalanguage$pandac$IRNode*) $tmp4338)->type);
        $tmp4333 = $tmp4339.value;
        $l4335:;
        panda$core$Bit $tmp4340 = { $tmp4333 };
        if ($tmp4340.value) {
        {
            panda$core$Int64 $tmp4341 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4317, offset4310);
            panda$core$Object* $tmp4342 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4285->subtypes, $tmp4341);
            panda$core$String* $tmp4343 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4342));
            panda$core$String* $tmp4345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4343, &$s4344);
            panda$core$Object* $tmp4346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4317);
            panda$core$Int64 $tmp4347 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4317, offset4310);
            panda$core$Object* $tmp4348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4285->subtypes, $tmp4347);
            panda$core$String* $tmp4349 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4330, ((org$pandalanguage$pandac$IRNode*) $tmp4346)->type, ((org$pandalanguage$pandac$Type*) $tmp4348), p_out);
            panda$core$String* $tmp4350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4345, $tmp4349);
            arg4330 = $tmp4350;
        }
        }
        else {
        {
            panda$core$Object* $tmp4351 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4317);
            panda$core$String* $tmp4352 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4351)->type);
            panda$core$String* $tmp4354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4352, &$s4353);
            panda$core$String* $tmp4355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4354, arg4330);
            arg4330 = $tmp4355;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4307, ((panda$core$Object*) arg4330));
    }
    $l4325:;
    int64_t $tmp4357 = $tmp4320 - i4317.value;
    if ($tmp4321) goto $l4358; else goto $l4359;
    $l4358:;
    if ($tmp4357 >= 1) goto $l4356; else goto $l4324;
    $l4359:;
    if ($tmp4357 > 1) goto $l4356; else goto $l4324;
    $l4356:;
    i4317.value += 1;
    goto $l4322;
    $l4324:;
    panda$core$Int64 $tmp4363 = panda$collections$Array$get_count$R$panda$core$Int64(args4307);
    panda$core$Bit $tmp4364 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4363, ((panda$core$Int64) { 0 }));
    if ($tmp4364.value) {
    {
        panda$core$Object* $tmp4365 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4307, ((panda$core$Int64) { 0 }));
        refTarget4362 = ((panda$core$String*) $tmp4365);
    }
    }
    else {
    {
        refTarget4362 = NULL;
    }
    }
    panda$core$String* $tmp4367 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4362, m4282, isSuper4287, p_out);
    methodRef4366 = $tmp4367;
    separator4368 = &$s4369;
    panda$core$Bit $tmp4370 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4282);
    if ($tmp4370.value) {
    {
        panda$core$Int64 $tmp4371 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4371;
        panda$core$String* $tmp4374 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4373, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4372 = $tmp4374;
        panda$core$String* $tmp4376 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4375 = $tmp4376;
        panda$core$String* $tmp4378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4377, indirectVar4372);
        panda$core$String* $tmp4380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4378, &$s4379);
        panda$core$String* $tmp4381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4380, resultType4375);
        panda$core$String* $tmp4383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4381, &$s4382);
        (($fn4384) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4383);
        panda$core$String* $tmp4386 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4282);
        panda$core$String* $tmp4387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4385, $tmp4386);
        panda$core$String* $tmp4389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4387, &$s4388);
        panda$core$String* $tmp4391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4390, methodRef4366);
        panda$core$String* $tmp4393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4391, &$s4392);
        panda$core$String* $tmp4394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4393, resultType4375);
        panda$core$String* $tmp4396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4394, &$s4395);
        panda$core$String* $tmp4397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4396, indirectVar4372);
        panda$core$String* $tmp4399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4397, &$s4398);
        panda$core$String* $tmp4400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4389, $tmp4399);
        (($fn4401) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4400);
        separator4368 = &$s4402;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4403 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4404 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4403);
        if ($tmp4404.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4406 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4282);
        panda$core$String* $tmp4407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4405, $tmp4406);
        panda$core$String* $tmp4409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4407, &$s4408);
        panda$core$String* $tmp4410 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4409, $tmp4410);
        panda$core$String* $tmp4413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4411, &$s4412);
        panda$core$String* $tmp4415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4414, methodRef4366);
        panda$core$String* $tmp4417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4415, &$s4416);
        panda$core$String* $tmp4418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4413, $tmp4417);
        (($fn4419) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4418);
    }
    }
    {
        ITable* $tmp4421 = ((panda$collections$Iterable*) args4307)->$class->itable;
        while ($tmp4421->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4421 = $tmp4421->next;
        }
        $fn4423 $tmp4422 = $tmp4421->methods[0];
        panda$collections$Iterator* $tmp4424 = $tmp4422(((panda$collections$Iterable*) args4307));
        a$Iter4420 = $tmp4424;
        $l4425:;
        ITable* $tmp4427 = a$Iter4420->$class->itable;
        while ($tmp4427->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4427 = $tmp4427->next;
        }
        $fn4429 $tmp4428 = $tmp4427->methods[0];
        panda$core$Bit $tmp4430 = $tmp4428(a$Iter4420);
        panda$core$Bit $tmp4431 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4430);
        if (!$tmp4431.value) goto $l4426;
        {
            ITable* $tmp4433 = a$Iter4420->$class->itable;
            while ($tmp4433->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4433 = $tmp4433->next;
            }
            $fn4435 $tmp4434 = $tmp4433->methods[1];
            panda$core$Object* $tmp4436 = $tmp4434(a$Iter4420);
            a4432 = ((panda$core$String*) $tmp4436);
            (($fn4437) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4368);
            (($fn4438) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4432);
            separator4368 = &$s4439;
        }
        goto $l4425;
        $l4426:;
    }
    (($fn4441) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4440);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4453;
    panda$core$String* testBit4456;
    panda$core$String* ifTrue4466;
    panda$core$String* ifFalse4468;
    panda$core$String* end4482;
    panda$core$Bit $tmp4442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4442.value);
    panda$core$Int64 $tmp4444 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4444, ((panda$core$Int64) { 2 }));
    bool $tmp4443 = $tmp4445.value;
    if ($tmp4443) goto $l4446;
    panda$core$Int64 $tmp4447 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4447, ((panda$core$Int64) { 3 }));
    $tmp4443 = $tmp4448.value;
    $l4446:;
    panda$core$Bit $tmp4449 = { $tmp4443 };
    PANDA_ASSERT($tmp4449.value);
    panda$core$Object* $tmp4450 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4451 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4452 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4450)->type, $tmp4451);
    PANDA_ASSERT($tmp4452.value);
    panda$core$Object* $tmp4454 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4455 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4454), p_out);
    test4453 = $tmp4455;
    panda$core$String* $tmp4457 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4456 = $tmp4457;
    panda$core$String* $tmp4459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4458, testBit4456);
    panda$core$String* $tmp4461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4459, &$s4460);
    panda$core$String* $tmp4462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4461, test4453);
    panda$core$String* $tmp4464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4462, &$s4463);
    (($fn4465) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4464);
    panda$core$String* $tmp4467 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4466 = $tmp4467;
    panda$core$String* $tmp4469 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4468 = $tmp4469;
    panda$core$String* $tmp4471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4470, testBit4456);
    panda$core$String* $tmp4473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4471, &$s4472);
    panda$core$String* $tmp4474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4473, ifTrue4466);
    panda$core$String* $tmp4476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4474, &$s4475);
    panda$core$String* $tmp4477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4476, ifFalse4468);
    panda$core$String* $tmp4479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4477, &$s4478);
    (($fn4480) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4479);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4466, p_out);
    panda$core$Object* $tmp4481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4481), p_out);
    panda$core$Int64 $tmp4483 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4483, ((panda$core$Int64) { 3 }));
    if ($tmp4484.value) {
    {
        panda$core$String* $tmp4485 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4482 = $tmp4485;
    }
    }
    else {
    {
        end4482 = ifFalse4468;
    }
    }
    panda$core$Object* $tmp4486 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4487 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4486));
    panda$core$Bit $tmp4488 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4487);
    if ($tmp4488.value) {
    {
        panda$core$String* $tmp4490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4489, end4482);
        panda$core$String* $tmp4492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4490, &$s4491);
        (($fn4493) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4492);
    }
    }
    panda$core$Int64 $tmp4494 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4494, ((panda$core$Int64) { 3 }));
    if ($tmp4495.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4468, p_out);
        panda$core$Object* $tmp4496 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4496), p_out);
        panda$core$Object* $tmp4497 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4498 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4497));
        panda$core$Bit $tmp4499 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4498);
        if ($tmp4499.value) {
        {
            panda$core$String* $tmp4501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4500, end4482);
            panda$core$String* $tmp4503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4501, &$s4502);
            (($fn4504) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4503);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4482, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4508;
    panda$core$String* range4519;
    org$pandalanguage$pandac$IRNode* block4522;
    org$pandalanguage$pandac$Type* t4524;
    panda$core$String* llt4527;
    panda$core$String* indexType4529;
    org$pandalanguage$pandac$ClassDecl* cl4535;
    panda$core$String* numberType4543;
    panda$core$String* index4551;
    panda$core$String* start4561;
    panda$core$String* indexValuePtr4571;
    panda$core$String* end4603;
    panda$core$String* inclusive4613;
    panda$core$String* loopStart4623;
    panda$core$String* loopBody4625;
    panda$core$String* loopEnd4627;
    panda$core$String* loopTest4629;
    panda$core$String* forwardEntry4633;
    panda$core$String* backwardEntry4635;
    panda$core$String* signPrefix4637;
    panda$core$String* forwardEntryInclusive4649;
    panda$core$String* forwardEntryExclusive4651;
    panda$core$String* forwardEntryInclusiveTest4666;
    panda$core$String* forwardEntryExclusiveTest4698;
    panda$core$String* indexValue4730;
    panda$core$String* loopInc4753;
    panda$core$String* forwardDelta4755;
    panda$core$String* forwardInclusiveLabel4771;
    panda$core$String* forwardExclusiveLabel4773;
    panda$core$String* forwardInclusiveTest4784;
    panda$core$String* forwardExclusiveTest4808;
    panda$core$String* inc4832;
    panda$core$String* incStruct4845;
    panda$core$Bit $tmp4505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4505.value);
    panda$core$Int64 $tmp4506 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4506, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4507.value);
    panda$core$Object* $tmp4509 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4508 = ((org$pandalanguage$pandac$IRNode*) $tmp4509);
    panda$core$Object* $tmp4510 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4510)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4511.value);
    panda$core$Object* $tmp4512 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4513 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4512)->type->subtypes);
    panda$core$Bit $tmp4514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4513, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4514.value);
    panda$core$Object* $tmp4515 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4516 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4515)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4518 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4516))->name, &$s4517);
    PANDA_ASSERT($tmp4518.value);
    panda$core$Object* $tmp4520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4521 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4520), p_out);
    range4519 = $tmp4521;
    panda$core$Object* $tmp4523 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4522 = ((org$pandalanguage$pandac$IRNode*) $tmp4523);
    panda$core$Object* $tmp4525 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4526 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4525)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4524 = ((org$pandalanguage$pandac$Type*) $tmp4526);
    panda$core$String* $tmp4528 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4524);
    llt4527 = $tmp4528;
    panda$core$Bit $tmp4530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4524->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4530.value) {
    {
        panda$core$Int64 $tmp4531 = panda$collections$Array$get_count$R$panda$core$Int64(t4524->subtypes);
        panda$core$Bit $tmp4532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4531, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4532.value);
        panda$core$Object* $tmp4533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4524->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4534 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4533));
        indexType4529 = $tmp4534;
    }
    }
    else {
    {
        indexType4529 = llt4527;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4536 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4524);
    cl4535 = $tmp4536;
    PANDA_ASSERT(((panda$core$Bit) { cl4535 != NULL }).value);
    panda$collections$ListView* $tmp4537 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4535);
    ITable* $tmp4538 = ((panda$collections$CollectionView*) $tmp4537)->$class->itable;
    while ($tmp4538->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4538 = $tmp4538->next;
    }
    $fn4540 $tmp4539 = $tmp4538->methods[0];
    panda$core$Int64 $tmp4541 = $tmp4539(((panda$collections$CollectionView*) $tmp4537));
    panda$core$Bit $tmp4542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4541, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4542.value);
    panda$collections$ListView* $tmp4544 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4535);
    ITable* $tmp4545 = $tmp4544->$class->itable;
    while ($tmp4545->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4545 = $tmp4545->next;
    }
    $fn4547 $tmp4546 = $tmp4545->methods[0];
    panda$core$Object* $tmp4548 = $tmp4546($tmp4544, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4549 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4548)->type);
    numberType4543 = $tmp4549;
    panda$core$Bit $tmp4550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4508->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4550.value);
    panda$core$String* $tmp4552 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4508->payload));
    index4551 = $tmp4552;
    panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4553, index4551);
    panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4554, &$s4555);
    panda$core$String* $tmp4557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, indexType4529);
    panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4557, &$s4558);
    (($fn4560) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4559);
    panda$core$String* $tmp4562 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4561 = $tmp4562;
    panda$core$String* $tmp4564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4563, start4561);
    panda$core$String* $tmp4566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4564, &$s4565);
    panda$core$String* $tmp4567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4566, range4519);
    panda$core$String* $tmp4569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4567, &$s4568);
    (($fn4570) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4569);
    panda$core$String* $tmp4572 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4571 = $tmp4572;
    panda$core$String* $tmp4574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4573, indexValuePtr4571);
    panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4574, &$s4575);
    panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4576, indexType4529);
    panda$core$String* $tmp4579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4577, &$s4578);
    panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4579, indexType4529);
    panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4580, &$s4581);
    panda$core$String* $tmp4583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4582, index4551);
    panda$core$String* $tmp4585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4583, &$s4584);
    panda$core$String* $tmp4587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4585, &$s4586);
    (($fn4588) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4587);
    panda$core$String* $tmp4590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4589, numberType4543);
    panda$core$String* $tmp4592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4590, &$s4591);
    panda$core$String* $tmp4593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4592, start4561);
    panda$core$String* $tmp4595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4593, &$s4594);
    panda$core$String* $tmp4596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4595, numberType4543);
    panda$core$String* $tmp4598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4596, &$s4597);
    panda$core$String* $tmp4599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4598, indexValuePtr4571);
    panda$core$String* $tmp4601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4599, &$s4600);
    (($fn4602) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4601);
    panda$core$String* $tmp4604 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4603 = $tmp4604;
    panda$core$String* $tmp4606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4605, end4603);
    panda$core$String* $tmp4608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4606, &$s4607);
    panda$core$String* $tmp4609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4608, range4519);
    panda$core$String* $tmp4611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4609, &$s4610);
    (($fn4612) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4611);
    panda$core$String* $tmp4614 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4613 = $tmp4614;
    panda$core$String* $tmp4616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4615, inclusive4613);
    panda$core$String* $tmp4618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, &$s4617);
    panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4618, range4519);
    panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4619, &$s4620);
    (($fn4622) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4621);
    panda$core$String* $tmp4624 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4623 = $tmp4624;
    panda$core$String* $tmp4626 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4625 = $tmp4626;
    panda$core$String* $tmp4628 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4627 = $tmp4628;
    panda$core$String* $tmp4630 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4629 = $tmp4630;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4631 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4631->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4631->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4631, ((panda$core$String*) p_f->payload), loopEnd4627, loopTest4629);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4631));
    panda$core$String* $tmp4634 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4633 = $tmp4634;
    panda$core$String* $tmp4636 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4635 = $tmp4636;
    panda$core$Bit $tmp4639 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4524)->name, &$s4638);
    if ($tmp4639.value) {
    {
        signPrefix4637 = &$s4640;
    }
    }
    else {
    {
        panda$core$Bit $tmp4643 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4524)->name, &$s4642);
        bool $tmp4641 = $tmp4643.value;
        if ($tmp4641) goto $l4644;
        panda$core$Bit $tmp4646 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4524)->name, &$s4645);
        $tmp4641 = $tmp4646.value;
        $l4644:;
        panda$core$Bit $tmp4647 = { $tmp4641 };
        PANDA_ASSERT($tmp4647.value);
        signPrefix4637 = &$s4648;
    }
    }
    panda$core$String* $tmp4650 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4649 = $tmp4650;
    panda$core$String* $tmp4652 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4651 = $tmp4652;
    panda$core$String* $tmp4654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4653, inclusive4613);
    panda$core$String* $tmp4656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4654, &$s4655);
    panda$core$String* $tmp4657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4656, forwardEntryInclusive4649);
    panda$core$String* $tmp4659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4657, &$s4658);
    panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4660, forwardEntryExclusive4651);
    panda$core$String* $tmp4663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4661, &$s4662);
    panda$core$String* $tmp4664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4659, $tmp4663);
    (($fn4665) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4664);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4649, p_out);
    panda$core$String* $tmp4667 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4666 = $tmp4667;
    panda$core$String* $tmp4669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4668, forwardEntryInclusiveTest4666);
    panda$core$String* $tmp4671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4669, &$s4670);
    panda$core$String* $tmp4672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4671, signPrefix4637);
    panda$core$String* $tmp4674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4672, &$s4673);
    panda$core$String* $tmp4675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4674, numberType4543);
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4675, &$s4676);
    panda$core$String* $tmp4679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4678, start4561);
    panda$core$String* $tmp4681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4679, &$s4680);
    panda$core$String* $tmp4682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4681, end4603);
    panda$core$String* $tmp4684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4682, &$s4683);
    panda$core$String* $tmp4685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4677, $tmp4684);
    (($fn4686) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4685);
    panda$core$String* $tmp4688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4687, forwardEntryInclusiveTest4666);
    panda$core$String* $tmp4690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4688, &$s4689);
    panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4690, loopStart4623);
    panda$core$String* $tmp4693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4691, &$s4692);
    panda$core$String* $tmp4694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4693, loopEnd4627);
    panda$core$String* $tmp4696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4694, &$s4695);
    (($fn4697) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4696);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4651, p_out);
    panda$core$String* $tmp4699 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4698 = $tmp4699;
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4700, forwardEntryExclusiveTest4698);
    panda$core$String* $tmp4703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, &$s4702);
    panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4703, signPrefix4637);
    panda$core$String* $tmp4706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4704, &$s4705);
    panda$core$String* $tmp4707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4706, numberType4543);
    panda$core$String* $tmp4709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4707, &$s4708);
    panda$core$String* $tmp4711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4710, start4561);
    panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, &$s4712);
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4713, end4603);
    panda$core$String* $tmp4716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4714, &$s4715);
    panda$core$String* $tmp4717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4709, $tmp4716);
    (($fn4718) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4717);
    panda$core$String* $tmp4720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4719, forwardEntryExclusiveTest4698);
    panda$core$String* $tmp4722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4720, &$s4721);
    panda$core$String* $tmp4723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4722, loopStart4623);
    panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4723, &$s4724);
    panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4725, loopEnd4627);
    panda$core$String* $tmp4728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4726, &$s4727);
    (($fn4729) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4728);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4623, p_out);
    panda$core$String* $tmp4731 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4730 = $tmp4731;
    panda$core$String* $tmp4733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4732, indexValue4730);
    panda$core$String* $tmp4735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4733, &$s4734);
    panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4735, numberType4543);
    panda$core$String* $tmp4738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4736, &$s4737);
    panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4738, numberType4543);
    panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, &$s4740);
    panda$core$String* $tmp4742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, indexValuePtr4571);
    panda$core$String* $tmp4744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4742, &$s4743);
    (($fn4745) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4744);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4522, p_out);
    panda$core$Bit $tmp4746 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4522);
    panda$core$Bit $tmp4747 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4746);
    if ($tmp4747.value) {
    {
        panda$core$String* $tmp4749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4748, loopTest4629);
        panda$core$String* $tmp4751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4749, &$s4750);
        (($fn4752) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4751);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4629, p_out);
    panda$core$String* $tmp4754 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4753 = $tmp4754;
    panda$core$String* $tmp4756 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4755 = $tmp4756;
    panda$core$String* $tmp4758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4757, forwardDelta4755);
    panda$core$String* $tmp4760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4758, &$s4759);
    panda$core$String* $tmp4761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4760, numberType4543);
    panda$core$String* $tmp4763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4761, &$s4762);
    panda$core$String* $tmp4764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4763, end4603);
    panda$core$String* $tmp4766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4764, &$s4765);
    panda$core$String* $tmp4767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4766, indexValue4730);
    panda$core$String* $tmp4769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4767, &$s4768);
    (($fn4770) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4769);
    panda$core$String* $tmp4772 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4771 = $tmp4772;
    panda$core$String* $tmp4774 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4773 = $tmp4774;
    panda$core$String* $tmp4776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4775, inclusive4613);
    panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4776, &$s4777);
    panda$core$String* $tmp4779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4778, forwardInclusiveLabel4771);
    panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4779, &$s4780);
    panda$core$String* $tmp4782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4781, forwardExclusiveLabel4773);
    (($fn4783) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4782);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel4771, p_out);
    panda$core$String* $tmp4785 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4784 = $tmp4785;
    panda$core$String* $tmp4787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4786, forwardInclusiveTest4784);
    panda$core$String* $tmp4789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, &$s4788);
    panda$core$String* $tmp4790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, numberType4543);
    panda$core$String* $tmp4792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, &$s4791);
    panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4792, forwardDelta4755);
    panda$core$String* $tmp4795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, &$s4794);
    (($fn4796) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4795);
    panda$core$String* $tmp4798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4797, forwardInclusiveTest4784);
    panda$core$String* $tmp4800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4798, &$s4799);
    panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4800, loopInc4753);
    panda$core$String* $tmp4803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4801, &$s4802);
    panda$core$String* $tmp4804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4803, loopEnd4627);
    panda$core$String* $tmp4806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4804, &$s4805);
    (($fn4807) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4806);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel4773, p_out);
    panda$core$String* $tmp4809 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4808 = $tmp4809;
    panda$core$String* $tmp4811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4810, forwardExclusiveTest4808);
    panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4811, &$s4812);
    panda$core$String* $tmp4814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, numberType4543);
    panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4814, &$s4815);
    panda$core$String* $tmp4817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, forwardDelta4755);
    panda$core$String* $tmp4819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4817, &$s4818);
    (($fn4820) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4819);
    panda$core$String* $tmp4822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4821, forwardExclusiveTest4808);
    panda$core$String* $tmp4824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4822, &$s4823);
    panda$core$String* $tmp4825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4824, loopInc4753);
    panda$core$String* $tmp4827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4825, &$s4826);
    panda$core$String* $tmp4828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4827, loopEnd4627);
    panda$core$String* $tmp4830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4828, &$s4829);
    (($fn4831) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4830);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc4753, p_out);
    panda$core$String* $tmp4833 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4832 = $tmp4833;
    panda$core$String* $tmp4835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4834, inc4832);
    panda$core$String* $tmp4837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4835, &$s4836);
    panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4837, numberType4543);
    panda$core$String* $tmp4840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, &$s4839);
    panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4840, indexValue4730);
    panda$core$String* $tmp4843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4841, &$s4842);
    (($fn4844) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4843);
    panda$core$String* $tmp4846 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4845 = $tmp4846;
    panda$core$String* $tmp4848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4847, incStruct4845);
    panda$core$String* $tmp4850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4848, &$s4849);
    panda$core$String* $tmp4851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4850, indexType4529);
    panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, &$s4852);
    panda$core$String* $tmp4854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4853, numberType4543);
    panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4854, &$s4855);
    (($fn4857) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4856);
    panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4858, numberType4543);
    panda$core$String* $tmp4861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4859, &$s4860);
    panda$core$String* $tmp4862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4861, inc4832);
    panda$core$String* $tmp4864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4862, &$s4863);
    (($fn4865) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4864);
    panda$core$String* $tmp4867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4866, indexType4529);
    panda$core$String* $tmp4869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4867, &$s4868);
    panda$core$String* $tmp4870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4869, incStruct4845);
    panda$core$String* $tmp4872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4870, &$s4871);
    panda$core$String* $tmp4873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4872, indexType4529);
    panda$core$String* $tmp4875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4873, &$s4874);
    panda$core$String* $tmp4876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4875, index4551);
    panda$core$String* $tmp4878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4876, &$s4877);
    (($fn4879) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4878);
    panda$core$String* $tmp4881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4880, loopStart4623);
    panda$core$String* $tmp4883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4881, &$s4882);
    (($fn4884) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4883);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4627, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4888;
    panda$core$String* range4899;
    org$pandalanguage$pandac$IRNode* block4902;
    org$pandalanguage$pandac$Type* t4904;
    panda$core$String* llt4907;
    panda$core$String* indexType4909;
    org$pandalanguage$pandac$ClassDecl* cl4915;
    panda$core$String* numberType4923;
    panda$core$String* index4931;
    panda$core$String* start4941;
    panda$core$String* indexValuePtr4951;
    panda$core$String* end4983;
    panda$core$String* rawStep4993;
    panda$core$String* step5003;
    panda$core$String* inclusive5018;
    panda$core$String* loopStart5028;
    panda$core$String* loopBody5030;
    panda$core$String* loopEnd5032;
    panda$core$String* loopTest5034;
    panda$core$String* forwardEntry5038;
    panda$core$String* backwardEntry5040;
    panda$core$String* signPrefix5042;
    panda$core$String* direction5054;
    panda$core$String* forwardEntryInclusive5081;
    panda$core$String* forwardEntryExclusive5083;
    panda$core$String* forwardEntryInclusiveTest5098;
    panda$core$String* forwardEntryExclusiveTest5130;
    panda$core$String* backwardEntryInclusive5162;
    panda$core$String* backwardEntryExclusive5164;
    panda$core$String* backwardEntryInclusiveTest5179;
    panda$core$String* backwardEntryExclusiveTest5211;
    panda$core$String* indexValue5243;
    panda$core$String* loopInc5266;
    panda$core$String* forwardLabel5268;
    panda$core$String* backwardLabel5270;
    panda$core$String* forwardDelta5283;
    panda$core$String* forwardInclusiveLabel5299;
    panda$core$String* forwardExclusiveLabel5301;
    panda$core$String* forwardInclusiveTest5312;
    panda$core$String* forwardExclusiveTest5339;
    panda$core$String* backwardDelta5366;
    panda$core$String* negStep5382;
    panda$core$String* backwardInclusiveLabel5395;
    panda$core$String* backwardExclusiveLabel5397;
    panda$core$String* backwardInclusiveTest5408;
    panda$core$String* backwardExclusiveTest5433;
    panda$core$String* inc5458;
    panda$core$String* incStruct5474;
    panda$core$Bit $tmp4885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4885.value);
    panda$core$Int64 $tmp4886 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4886, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4887.value);
    panda$core$Object* $tmp4889 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4888 = ((org$pandalanguage$pandac$IRNode*) $tmp4889);
    panda$core$Object* $tmp4890 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4890)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4891.value);
    panda$core$Object* $tmp4892 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4893 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4892)->type->subtypes);
    panda$core$Bit $tmp4894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4893, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4894.value);
    panda$core$Object* $tmp4895 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4896 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4895)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4898 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4896))->name, &$s4897);
    PANDA_ASSERT($tmp4898.value);
    panda$core$Object* $tmp4900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4901 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4900), p_out);
    range4899 = $tmp4901;
    panda$core$Object* $tmp4903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4902 = ((org$pandalanguage$pandac$IRNode*) $tmp4903);
    panda$core$Object* $tmp4905 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4906 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4905)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4904 = ((org$pandalanguage$pandac$Type*) $tmp4906);
    panda$core$String* $tmp4908 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4904);
    llt4907 = $tmp4908;
    panda$core$Bit $tmp4910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4904->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4910.value) {
    {
        panda$core$Int64 $tmp4911 = panda$collections$Array$get_count$R$panda$core$Int64(t4904->subtypes);
        panda$core$Bit $tmp4912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4911, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4912.value);
        panda$core$Object* $tmp4913 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4904->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4914 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4913));
        indexType4909 = $tmp4914;
    }
    }
    else {
    {
        indexType4909 = llt4907;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4916 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4904);
    cl4915 = $tmp4916;
    PANDA_ASSERT(((panda$core$Bit) { cl4915 != NULL }).value);
    panda$collections$ListView* $tmp4917 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4915);
    ITable* $tmp4918 = ((panda$collections$CollectionView*) $tmp4917)->$class->itable;
    while ($tmp4918->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4918 = $tmp4918->next;
    }
    $fn4920 $tmp4919 = $tmp4918->methods[0];
    panda$core$Int64 $tmp4921 = $tmp4919(((panda$collections$CollectionView*) $tmp4917));
    panda$core$Bit $tmp4922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4921, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4922.value);
    panda$collections$ListView* $tmp4924 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4915);
    ITable* $tmp4925 = $tmp4924->$class->itable;
    while ($tmp4925->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4925 = $tmp4925->next;
    }
    $fn4927 $tmp4926 = $tmp4925->methods[0];
    panda$core$Object* $tmp4928 = $tmp4926($tmp4924, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4929 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4928)->type);
    numberType4923 = $tmp4929;
    panda$core$Bit $tmp4930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4888->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4930.value);
    panda$core$String* $tmp4932 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4888->payload));
    index4931 = $tmp4932;
    panda$core$String* $tmp4934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4933, index4931);
    panda$core$String* $tmp4936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4934, &$s4935);
    panda$core$String* $tmp4937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4936, indexType4909);
    panda$core$String* $tmp4939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4937, &$s4938);
    (($fn4940) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4939);
    panda$core$String* $tmp4942 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4941 = $tmp4942;
    panda$core$String* $tmp4944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4943, start4941);
    panda$core$String* $tmp4946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4944, &$s4945);
    panda$core$String* $tmp4947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4946, range4899);
    panda$core$String* $tmp4949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4947, &$s4948);
    (($fn4950) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4949);
    panda$core$String* $tmp4952 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4951 = $tmp4952;
    panda$core$String* $tmp4954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4953, indexValuePtr4951);
    panda$core$String* $tmp4956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4954, &$s4955);
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4956, indexType4909);
    panda$core$String* $tmp4959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4957, &$s4958);
    panda$core$String* $tmp4960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4959, indexType4909);
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4960, &$s4961);
    panda$core$String* $tmp4963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4962, index4931);
    panda$core$String* $tmp4965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4963, &$s4964);
    panda$core$String* $tmp4967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4965, &$s4966);
    (($fn4968) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4967);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4969, numberType4923);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, &$s4971);
    panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4972, start4941);
    panda$core$String* $tmp4975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4973, &$s4974);
    panda$core$String* $tmp4976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4975, numberType4923);
    panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4976, &$s4977);
    panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4978, indexValuePtr4951);
    panda$core$String* $tmp4981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4979, &$s4980);
    (($fn4982) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4981);
    panda$core$String* $tmp4984 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4983 = $tmp4984;
    panda$core$String* $tmp4986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4985, end4983);
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4986, &$s4987);
    panda$core$String* $tmp4989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, range4899);
    panda$core$String* $tmp4991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4989, &$s4990);
    (($fn4992) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4991);
    panda$core$String* $tmp4994 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep4993 = $tmp4994;
    panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4995, rawStep4993);
    panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4996, &$s4997);
    panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4998, range4899);
    panda$core$String* $tmp5001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4999, &$s5000);
    (($fn5002) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5001);
    panda$core$Bit $tmp5005 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4923, &$s5004);
    if ($tmp5005.value) {
    {
        panda$core$String* $tmp5006 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step5003 = $tmp5006;
        panda$core$String* $tmp5008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5007, step5003);
        panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5008, &$s5009);
        panda$core$String* $tmp5011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5010, rawStep4993);
        panda$core$String* $tmp5013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5011, &$s5012);
        panda$core$String* $tmp5014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5013, numberType4923);
        panda$core$String* $tmp5016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5014, &$s5015);
        (($fn5017) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5016);
    }
    }
    else {
    {
        step5003 = rawStep4993;
    }
    }
    panda$core$String* $tmp5019 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive5018 = $tmp5019;
    panda$core$String* $tmp5021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5020, inclusive5018);
    panda$core$String* $tmp5023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5021, &$s5022);
    panda$core$String* $tmp5024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5023, range4899);
    panda$core$String* $tmp5026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5024, &$s5025);
    (($fn5027) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5026);
    panda$core$String* $tmp5029 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5028 = $tmp5029;
    panda$core$String* $tmp5031 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5030 = $tmp5031;
    panda$core$String* $tmp5033 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5032 = $tmp5033;
    panda$core$String* $tmp5035 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest5034 = $tmp5035;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5036 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5036->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5036->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5036, ((panda$core$String*) p_f->payload), loopEnd5032, loopTest5034);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5036));
    panda$core$String* $tmp5039 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry5038 = $tmp5039;
    panda$core$String* $tmp5041 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry5040 = $tmp5041;
    panda$core$Bit $tmp5044 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4904)->name, &$s5043);
    if ($tmp5044.value) {
    {
        signPrefix5042 = &$s5045;
    }
    }
    else {
    {
        panda$core$Bit $tmp5048 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4904)->name, &$s5047);
        bool $tmp5046 = $tmp5048.value;
        if ($tmp5046) goto $l5049;
        panda$core$Bit $tmp5051 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4904)->name, &$s5050);
        $tmp5046 = $tmp5051.value;
        $l5049:;
        panda$core$Bit $tmp5052 = { $tmp5046 };
        PANDA_ASSERT($tmp5052.value);
        signPrefix5042 = &$s5053;
    }
    }
    panda$core$Bit $tmp5056 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5042, &$s5055);
    if ($tmp5056.value) {
    {
        panda$core$String* $tmp5057 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction5054 = $tmp5057;
        panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5058, direction5054);
        panda$core$String* $tmp5061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5059, &$s5060);
        panda$core$String* $tmp5062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5061, numberType4923);
        panda$core$String* $tmp5064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5062, &$s5063);
        panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5064, step5003);
        panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, &$s5066);
        (($fn5068) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5067);
    }
    }
    else {
    {
        direction5054 = &$s5069;
    }
    }
    panda$core$String* $tmp5071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5070, direction5054);
    panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5071, &$s5072);
    panda$core$String* $tmp5074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, forwardEntry5038);
    panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5074, &$s5075);
    panda$core$String* $tmp5077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5076, backwardEntry5040);
    panda$core$String* $tmp5079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5077, &$s5078);
    (($fn5080) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5079);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry5038, p_out);
    panda$core$String* $tmp5082 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive5081 = $tmp5082;
    panda$core$String* $tmp5084 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive5083 = $tmp5084;
    panda$core$String* $tmp5086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5085, inclusive5018);
    panda$core$String* $tmp5088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5086, &$s5087);
    panda$core$String* $tmp5089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5088, forwardEntryInclusive5081);
    panda$core$String* $tmp5091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5089, &$s5090);
    panda$core$String* $tmp5093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5092, forwardEntryExclusive5083);
    panda$core$String* $tmp5095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5093, &$s5094);
    panda$core$String* $tmp5096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5091, $tmp5095);
    (($fn5097) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5096);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive5081, p_out);
    panda$core$String* $tmp5099 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest5098 = $tmp5099;
    panda$core$String* $tmp5101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5100, forwardEntryInclusiveTest5098);
    panda$core$String* $tmp5103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5101, &$s5102);
    panda$core$String* $tmp5104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5103, signPrefix5042);
    panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5104, &$s5105);
    panda$core$String* $tmp5107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5106, numberType4923);
    panda$core$String* $tmp5109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5107, &$s5108);
    panda$core$String* $tmp5111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5110, start4941);
    panda$core$String* $tmp5113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5111, &$s5112);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5113, end4983);
    panda$core$String* $tmp5116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, &$s5115);
    panda$core$String* $tmp5117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5109, $tmp5116);
    (($fn5118) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5117);
    panda$core$String* $tmp5120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5119, forwardEntryInclusiveTest5098);
    panda$core$String* $tmp5122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5120, &$s5121);
    panda$core$String* $tmp5123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5122, loopStart5028);
    panda$core$String* $tmp5125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5123, &$s5124);
    panda$core$String* $tmp5126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5125, loopEnd5032);
    panda$core$String* $tmp5128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5126, &$s5127);
    (($fn5129) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5128);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive5083, p_out);
    panda$core$String* $tmp5131 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest5130 = $tmp5131;
    panda$core$String* $tmp5133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5132, forwardEntryExclusiveTest5130);
    panda$core$String* $tmp5135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5133, &$s5134);
    panda$core$String* $tmp5136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5135, signPrefix5042);
    panda$core$String* $tmp5138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5136, &$s5137);
    panda$core$String* $tmp5139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5138, numberType4923);
    panda$core$String* $tmp5141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5139, &$s5140);
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5142, start4941);
    panda$core$String* $tmp5145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5143, &$s5144);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5145, end4983);
    panda$core$String* $tmp5148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, &$s5147);
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5141, $tmp5148);
    (($fn5150) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5149);
    panda$core$String* $tmp5152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5151, forwardEntryExclusiveTest5130);
    panda$core$String* $tmp5154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5152, &$s5153);
    panda$core$String* $tmp5155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5154, loopStart5028);
    panda$core$String* $tmp5157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5155, &$s5156);
    panda$core$String* $tmp5158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5157, loopEnd5032);
    panda$core$String* $tmp5160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, &$s5159);
    (($fn5161) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5160);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry5040, p_out);
    panda$core$String* $tmp5163 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5162 = $tmp5163;
    panda$core$String* $tmp5165 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5164 = $tmp5165;
    panda$core$String* $tmp5167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5166, inclusive5018);
    panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5167, &$s5168);
    panda$core$String* $tmp5170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, backwardEntryInclusive5162);
    panda$core$String* $tmp5172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5170, &$s5171);
    panda$core$String* $tmp5174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5173, backwardEntryExclusive5164);
    panda$core$String* $tmp5176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5174, &$s5175);
    panda$core$String* $tmp5177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5172, $tmp5176);
    (($fn5178) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5177);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive5162, p_out);
    panda$core$String* $tmp5180 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5179 = $tmp5180;
    panda$core$String* $tmp5182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5181, backwardEntryInclusiveTest5179);
    panda$core$String* $tmp5184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5182, &$s5183);
    panda$core$String* $tmp5185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5184, signPrefix5042);
    panda$core$String* $tmp5187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5185, &$s5186);
    panda$core$String* $tmp5188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5187, numberType4923);
    panda$core$String* $tmp5190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5188, &$s5189);
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5191, start4941);
    panda$core$String* $tmp5194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, &$s5193);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5194, end4983);
    panda$core$String* $tmp5197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, &$s5196);
    panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5190, $tmp5197);
    (($fn5199) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5198);
    panda$core$String* $tmp5201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5200, backwardEntryInclusiveTest5179);
    panda$core$String* $tmp5203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5201, &$s5202);
    panda$core$String* $tmp5204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5203, loopStart5028);
    panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5204, &$s5205);
    panda$core$String* $tmp5207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5206, loopEnd5032);
    panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, &$s5208);
    (($fn5210) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5209);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive5164, p_out);
    panda$core$String* $tmp5212 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5211 = $tmp5212;
    panda$core$String* $tmp5214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5213, backwardEntryExclusiveTest5211);
    panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5214, &$s5215);
    panda$core$String* $tmp5217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5216, signPrefix5042);
    panda$core$String* $tmp5219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5217, &$s5218);
    panda$core$String* $tmp5220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5219, numberType4923);
    panda$core$String* $tmp5222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5220, &$s5221);
    panda$core$String* $tmp5224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5223, start4941);
    panda$core$String* $tmp5226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5224, &$s5225);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5226, end4983);
    panda$core$String* $tmp5229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, &$s5228);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5222, $tmp5229);
    (($fn5231) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5230);
    panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5232, backwardEntryExclusiveTest5211);
    panda$core$String* $tmp5235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, &$s5234);
    panda$core$String* $tmp5236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5235, loopStart5028);
    panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5236, &$s5237);
    panda$core$String* $tmp5239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5238, loopEnd5032);
    panda$core$String* $tmp5241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5239, &$s5240);
    (($fn5242) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5241);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5028, p_out);
    panda$core$String* $tmp5244 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5243 = $tmp5244;
    panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5245, indexValue5243);
    panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, &$s5247);
    panda$core$String* $tmp5249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5248, numberType4923);
    panda$core$String* $tmp5251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5249, &$s5250);
    panda$core$String* $tmp5252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5251, numberType4923);
    panda$core$String* $tmp5254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5252, &$s5253);
    panda$core$String* $tmp5255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5254, indexValuePtr4951);
    panda$core$String* $tmp5257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5255, &$s5256);
    (($fn5258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5257);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4902, p_out);
    panda$core$Bit $tmp5259 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4902);
    panda$core$Bit $tmp5260 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5259);
    if ($tmp5260.value) {
    {
        panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5261, loopTest5034);
        panda$core$String* $tmp5264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5262, &$s5263);
        (($fn5265) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5264);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest5034, p_out);
    panda$core$String* $tmp5267 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5266 = $tmp5267;
    panda$core$String* $tmp5269 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5268 = $tmp5269;
    panda$core$String* $tmp5271 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5270 = $tmp5271;
    panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5272, direction5054);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, &$s5274);
    panda$core$String* $tmp5276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5275, forwardLabel5268);
    panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5276, &$s5277);
    panda$core$String* $tmp5279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, backwardLabel5270);
    panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5279, &$s5280);
    (($fn5282) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5281);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5268, p_out);
    panda$core$String* $tmp5284 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5283 = $tmp5284;
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5285, forwardDelta5283);
    panda$core$String* $tmp5288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5286, &$s5287);
    panda$core$String* $tmp5289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5288, numberType4923);
    panda$core$String* $tmp5291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5289, &$s5290);
    panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5291, end4983);
    panda$core$String* $tmp5294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5292, &$s5293);
    panda$core$String* $tmp5295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5294, indexValue5243);
    panda$core$String* $tmp5297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5295, &$s5296);
    (($fn5298) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5297);
    panda$core$String* $tmp5300 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5299 = $tmp5300;
    panda$core$String* $tmp5302 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5301 = $tmp5302;
    panda$core$String* $tmp5304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5303, inclusive5018);
    panda$core$String* $tmp5306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5304, &$s5305);
    panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5306, forwardInclusiveLabel5299);
    panda$core$String* $tmp5309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, &$s5308);
    panda$core$String* $tmp5310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5309, forwardExclusiveLabel5301);
    (($fn5311) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5310);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5299, p_out);
    panda$core$String* $tmp5313 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5312 = $tmp5313;
    panda$core$String* $tmp5315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5314, forwardInclusiveTest5312);
    panda$core$String* $tmp5317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5315, &$s5316);
    panda$core$String* $tmp5318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5317, numberType4923);
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5318, &$s5319);
    panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5320, forwardDelta5283);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5321, &$s5322);
    panda$core$String* $tmp5324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, step5003);
    panda$core$String* $tmp5326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5324, &$s5325);
    (($fn5327) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5326);
    panda$core$String* $tmp5329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5328, forwardInclusiveTest5312);
    panda$core$String* $tmp5331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5329, &$s5330);
    panda$core$String* $tmp5332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5331, loopInc5266);
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, &$s5333);
    panda$core$String* $tmp5335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, loopEnd5032);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5335, &$s5336);
    (($fn5338) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5337);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5301, p_out);
    panda$core$String* $tmp5340 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5339 = $tmp5340;
    panda$core$String* $tmp5342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5341, forwardExclusiveTest5339);
    panda$core$String* $tmp5344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5342, &$s5343);
    panda$core$String* $tmp5345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5344, numberType4923);
    panda$core$String* $tmp5347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5345, &$s5346);
    panda$core$String* $tmp5348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5347, forwardDelta5283);
    panda$core$String* $tmp5350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5348, &$s5349);
    panda$core$String* $tmp5351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5350, step5003);
    panda$core$String* $tmp5353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5351, &$s5352);
    (($fn5354) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5353);
    panda$core$String* $tmp5356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5355, forwardExclusiveTest5339);
    panda$core$String* $tmp5358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5356, &$s5357);
    panda$core$String* $tmp5359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5358, loopInc5266);
    panda$core$String* $tmp5361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5359, &$s5360);
    panda$core$String* $tmp5362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5361, loopEnd5032);
    panda$core$String* $tmp5364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5362, &$s5363);
    (($fn5365) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5364);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5270, p_out);
    panda$core$String* $tmp5367 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5366 = $tmp5367;
    panda$core$String* $tmp5369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5368, backwardDelta5366);
    panda$core$String* $tmp5371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5369, &$s5370);
    panda$core$String* $tmp5372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5371, numberType4923);
    panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5372, &$s5373);
    panda$core$String* $tmp5375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, indexValue5243);
    panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5375, &$s5376);
    panda$core$String* $tmp5378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5377, end4983);
    panda$core$String* $tmp5380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5378, &$s5379);
    (($fn5381) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5380);
    panda$core$String* $tmp5383 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5382 = $tmp5383;
    panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5384, negStep5382);
    panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5385, &$s5386);
    panda$core$String* $tmp5388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5387, numberType4923);
    panda$core$String* $tmp5390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5388, &$s5389);
    panda$core$String* $tmp5391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5390, step5003);
    panda$core$String* $tmp5393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5391, &$s5392);
    (($fn5394) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5393);
    panda$core$String* $tmp5396 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5395 = $tmp5396;
    panda$core$String* $tmp5398 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5397 = $tmp5398;
    panda$core$String* $tmp5400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5399, inclusive5018);
    panda$core$String* $tmp5402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5400, &$s5401);
    panda$core$String* $tmp5403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5402, backwardInclusiveLabel5395);
    panda$core$String* $tmp5405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5403, &$s5404);
    panda$core$String* $tmp5406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5405, backwardExclusiveLabel5397);
    (($fn5407) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5406);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5395, p_out);
    panda$core$String* $tmp5409 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5408 = $tmp5409;
    panda$core$String* $tmp5411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5410, backwardInclusiveTest5408);
    panda$core$String* $tmp5413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5411, &$s5412);
    panda$core$String* $tmp5414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5413, numberType4923);
    panda$core$String* $tmp5416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5414, &$s5415);
    panda$core$String* $tmp5417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5416, backwardDelta5366);
    panda$core$String* $tmp5419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5417, &$s5418);
    panda$core$String* $tmp5420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5419, negStep5382);
    (($fn5421) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5420);
    panda$core$String* $tmp5423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5422, backwardInclusiveTest5408);
    panda$core$String* $tmp5425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5423, &$s5424);
    panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5425, loopInc5266);
    panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5426, &$s5427);
    panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5428, loopEnd5032);
    panda$core$String* $tmp5431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5429, &$s5430);
    (($fn5432) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5431);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5397, p_out);
    panda$core$String* $tmp5434 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5433 = $tmp5434;
    panda$core$String* $tmp5436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5435, backwardExclusiveTest5433);
    panda$core$String* $tmp5438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5436, &$s5437);
    panda$core$String* $tmp5439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5438, numberType4923);
    panda$core$String* $tmp5441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5439, &$s5440);
    panda$core$String* $tmp5442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5441, backwardDelta5366);
    panda$core$String* $tmp5444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, &$s5443);
    panda$core$String* $tmp5445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5444, negStep5382);
    (($fn5446) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5445);
    panda$core$String* $tmp5448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5447, backwardExclusiveTest5433);
    panda$core$String* $tmp5450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5448, &$s5449);
    panda$core$String* $tmp5451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5450, loopInc5266);
    panda$core$String* $tmp5453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5451, &$s5452);
    panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5453, loopEnd5032);
    panda$core$String* $tmp5456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5454, &$s5455);
    (($fn5457) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5456);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5266, p_out);
    panda$core$String* $tmp5459 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5458 = $tmp5459;
    panda$core$String* $tmp5461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5460, inc5458);
    panda$core$String* $tmp5463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5461, &$s5462);
    panda$core$String* $tmp5464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5463, numberType4923);
    panda$core$String* $tmp5466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5464, &$s5465);
    panda$core$String* $tmp5467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5466, indexValue5243);
    panda$core$String* $tmp5469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5467, &$s5468);
    panda$core$String* $tmp5470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5469, step5003);
    panda$core$String* $tmp5472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5470, &$s5471);
    (($fn5473) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5472);
    panda$core$String* $tmp5475 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5474 = $tmp5475;
    panda$core$String* $tmp5477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5476, incStruct5474);
    panda$core$String* $tmp5479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5477, &$s5478);
    panda$core$String* $tmp5480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5479, indexType4909);
    panda$core$String* $tmp5482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5480, &$s5481);
    panda$core$String* $tmp5483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5482, numberType4923);
    panda$core$String* $tmp5485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5483, &$s5484);
    (($fn5486) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5485);
    panda$core$String* $tmp5488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5487, numberType4923);
    panda$core$String* $tmp5490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5488, &$s5489);
    panda$core$String* $tmp5491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5490, inc5458);
    panda$core$String* $tmp5493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5491, &$s5492);
    (($fn5494) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5493);
    panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5495, indexType4909);
    panda$core$String* $tmp5498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, &$s5497);
    panda$core$String* $tmp5499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5498, incStruct5474);
    panda$core$String* $tmp5501 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5499, &$s5500);
    panda$core$String* $tmp5502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5501, indexType4909);
    panda$core$String* $tmp5504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5502, &$s5503);
    panda$core$String* $tmp5505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5504, index4931);
    panda$core$String* $tmp5507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5505, &$s5506);
    (($fn5508) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5507);
    panda$core$String* $tmp5510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5509, loopStart5028);
    panda$core$String* $tmp5512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5510, &$s5511);
    (($fn5513) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5512);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5032, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp5514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5515 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5514)->type);
    if ($tmp5515.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5516 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5517 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5516)->type);
    if ($tmp5517.value) {
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
    panda$core$String* loopStart5524;
    panda$core$String* loopBody5526;
    panda$core$String* loopEnd5528;
    panda$core$String* test5537;
    panda$core$String* testBit5540;
    panda$core$Bit $tmp5518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5518.value);
    panda$core$Int64 $tmp5519 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5519, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5520.value);
    panda$core$Object* $tmp5521 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5522 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5523 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5521)->type, $tmp5522);
    PANDA_ASSERT($tmp5523.value);
    panda$core$String* $tmp5525 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5524 = $tmp5525;
    panda$core$String* $tmp5527 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5526 = $tmp5527;
    panda$core$String* $tmp5529 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5528 = $tmp5529;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5530 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5530->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5530->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5530, ((panda$core$String*) p_w->payload), loopEnd5528, loopStart5524);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5530));
    panda$core$String* $tmp5533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5532, loopStart5524);
    panda$core$String* $tmp5535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5533, &$s5534);
    (($fn5536) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5535);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5524, p_out);
    panda$core$Object* $tmp5538 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5539 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5538), p_out);
    test5537 = $tmp5539;
    panda$core$String* $tmp5541 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5540 = $tmp5541;
    panda$core$String* $tmp5543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5542, testBit5540);
    panda$core$String* $tmp5545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5543, &$s5544);
    panda$core$String* $tmp5546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5545, test5537);
    panda$core$String* $tmp5548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5546, &$s5547);
    (($fn5549) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5548);
    panda$core$String* $tmp5551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5550, testBit5540);
    panda$core$String* $tmp5553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5551, &$s5552);
    panda$core$String* $tmp5554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5553, loopBody5526);
    panda$core$String* $tmp5556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5554, &$s5555);
    panda$core$String* $tmp5557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5556, loopEnd5528);
    panda$core$String* $tmp5559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5557, &$s5558);
    (($fn5560) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5559);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5526, p_out);
    panda$core$Object* $tmp5561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5561), p_out);
    panda$core$Object* $tmp5562 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5563 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5562));
    panda$core$Bit $tmp5564 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5563);
    if ($tmp5564.value) {
    {
        panda$core$String* $tmp5566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5565, loopStart5524);
        panda$core$String* $tmp5568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5566, &$s5567);
        (($fn5569) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5568);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5528, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5576;
    panda$core$String* loopBody5578;
    panda$core$String* loopEnd5580;
    panda$core$String* test5589;
    panda$core$String* testBit5592;
    panda$core$Bit $tmp5570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5570.value);
    panda$core$Int64 $tmp5571 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5571, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5572.value);
    panda$core$Object* $tmp5573 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5574 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5575 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5573)->type, $tmp5574);
    PANDA_ASSERT($tmp5575.value);
    panda$core$String* $tmp5577 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5576 = $tmp5577;
    panda$core$String* $tmp5579 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5578 = $tmp5579;
    panda$core$String* $tmp5581 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5580 = $tmp5581;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5582 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5582->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5582->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5582, ((panda$core$String*) p_d->payload), loopEnd5580, loopStart5576);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5582));
    panda$core$String* $tmp5585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5584, loopBody5578);
    panda$core$String* $tmp5587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5585, &$s5586);
    (($fn5588) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5587);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5576, p_out);
    panda$core$Object* $tmp5590 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5591 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5590), p_out);
    test5589 = $tmp5591;
    panda$core$String* $tmp5593 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5592 = $tmp5593;
    panda$core$String* $tmp5595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5594, testBit5592);
    panda$core$String* $tmp5597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5595, &$s5596);
    panda$core$String* $tmp5598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5597, test5589);
    panda$core$String* $tmp5600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5598, &$s5599);
    (($fn5601) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5600);
    panda$core$String* $tmp5603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5602, testBit5592);
    panda$core$String* $tmp5605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5603, &$s5604);
    panda$core$String* $tmp5606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5605, loopBody5578);
    panda$core$String* $tmp5608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5606, &$s5607);
    panda$core$String* $tmp5609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5608, loopEnd5580);
    panda$core$String* $tmp5611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5609, &$s5610);
    (($fn5612) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5611);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5578, p_out);
    panda$core$Object* $tmp5613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5613), p_out);
    panda$core$Object* $tmp5614 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5615 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5614));
    panda$core$Bit $tmp5616 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5615);
    if ($tmp5616.value) {
    {
        panda$core$String* $tmp5618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5617, loopStart5576);
        panda$core$String* $tmp5620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5618, &$s5619);
        (($fn5621) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5620);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5580, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5625;
    panda$core$String* loopEnd5627;
    panda$core$Bit $tmp5622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5622.value);
    panda$core$Int64 $tmp5623 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5623, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5624.value);
    panda$core$String* $tmp5626 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5625 = $tmp5626;
    panda$core$String* $tmp5628 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5627 = $tmp5628;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5629 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5629->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5629->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5629, ((panda$core$String*) p_l->payload), loopEnd5627, loopStart5625);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5629));
    panda$core$String* $tmp5632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5631, loopStart5625);
    panda$core$String* $tmp5634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5632, &$s5633);
    (($fn5635) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5634);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5625, p_out);
    panda$core$Object* $tmp5636 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5636), p_out);
    panda$core$Object* $tmp5637 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5638 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5637));
    panda$core$Bit $tmp5639 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5638);
    if ($tmp5639.value) {
    {
        panda$core$String* $tmp5641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5640, loopStart5625);
        panda$core$String* $tmp5643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5641, &$s5642);
        (($fn5644) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5643);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5627, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5645;
    panda$core$String* ref5656;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5645 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5647 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5645);
            panda$core$String* $tmp5648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5646, $tmp5647);
            panda$core$String* $tmp5650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5648, &$s5649);
            panda$core$String* $tmp5651 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5645->type);
            panda$core$String* $tmp5652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5650, $tmp5651);
            panda$core$String* $tmp5654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5652, &$s5653);
            (($fn5655) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5654);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5657 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref5656 = $tmp5657;
                panda$core$String* $tmp5659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5658, ref5656);
                panda$core$String* $tmp5661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5659, &$s5660);
                panda$core$String* $tmp5662 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5645->type);
                panda$core$String* $tmp5663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5661, $tmp5662);
                panda$core$String* $tmp5665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5663, &$s5664);
                panda$core$String* $tmp5666 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5645);
                panda$core$String* $tmp5667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5665, $tmp5666);
                panda$core$String* $tmp5669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5667, &$s5668);
                (($fn5670) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5669);
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
    panda$collections$Iterator* decl$Iter5684;
    org$pandalanguage$pandac$IRNode* decl5696;
    panda$core$Bit $tmp5674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5673 = $tmp5674.value;
    if ($tmp5673) goto $l5675;
    panda$core$Bit $tmp5676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5673 = $tmp5676.value;
    $l5675:;
    panda$core$Bit $tmp5677 = { $tmp5673 };
    bool $tmp5672 = $tmp5677.value;
    if ($tmp5672) goto $l5678;
    panda$core$Bit $tmp5679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5672 = $tmp5679.value;
    $l5678:;
    panda$core$Bit $tmp5680 = { $tmp5672 };
    bool $tmp5671 = $tmp5680.value;
    if ($tmp5671) goto $l5681;
    panda$core$Bit $tmp5682 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5671 = $tmp5682.value;
    $l5681:;
    panda$core$Bit $tmp5683 = { $tmp5671 };
    PANDA_ASSERT($tmp5683.value);
    {
        ITable* $tmp5685 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5685->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5685 = $tmp5685->next;
        }
        $fn5687 $tmp5686 = $tmp5685->methods[0];
        panda$collections$Iterator* $tmp5688 = $tmp5686(((panda$collections$Iterable*) p_v->children));
        decl$Iter5684 = $tmp5688;
        $l5689:;
        ITable* $tmp5691 = decl$Iter5684->$class->itable;
        while ($tmp5691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5691 = $tmp5691->next;
        }
        $fn5693 $tmp5692 = $tmp5691->methods[0];
        panda$core$Bit $tmp5694 = $tmp5692(decl$Iter5684);
        panda$core$Bit $tmp5695 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5694);
        if (!$tmp5695.value) goto $l5690;
        {
            ITable* $tmp5697 = decl$Iter5684->$class->itable;
            while ($tmp5697->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5697 = $tmp5697->next;
            }
            $fn5699 $tmp5698 = $tmp5697->methods[1];
            panda$core$Object* $tmp5700 = $tmp5698(decl$Iter5684);
            decl5696 = ((org$pandalanguage$pandac$IRNode*) $tmp5700);
            panda$core$Bit $tmp5701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5696->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5701.value);
            panda$core$Int64 $tmp5702 = panda$collections$Array$get_count$R$panda$core$Int64(decl5696->children);
            panda$core$Bit $tmp5703 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5702, ((panda$core$Int64) { 1 }));
            if ($tmp5703.value) {
            {
                panda$core$Object* $tmp5704 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5696->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5705 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5696->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5704), ((org$pandalanguage$pandac$IRNode*) $tmp5705), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5706 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5696->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5706), NULL, p_out);
            }
            }
        }
        goto $l5689;
        $l5690:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base5710;
    panda$core$String* ptr5713;
    org$pandalanguage$pandac$ClassDecl* cl5715;
    panda$collections$ListView* fields5718;
    panda$core$Int64 index5720;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5721;
    panda$core$String* result5773;
    panda$core$String* reused5776;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5707 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5708 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5707, p_out);
            return $tmp5708;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5709 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5709;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5711 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5712 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5711), p_out);
            base5710 = $tmp5712;
            panda$core$String* $tmp5714 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr5713 = $tmp5714;
            panda$core$Object* $tmp5716 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5717 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5716)->type);
            cl5715 = $tmp5717;
            PANDA_ASSERT(((panda$core$Bit) { cl5715 != NULL }).value);
            panda$collections$ListView* $tmp5719 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5715);
            fields5718 = $tmp5719;
            index5720 = ((panda$core$Int64) { -1 });
            ITable* $tmp5722 = ((panda$collections$CollectionView*) fields5718)->$class->itable;
            while ($tmp5722->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5722 = $tmp5722->next;
            }
            $fn5724 $tmp5723 = $tmp5722->methods[0];
            panda$core$Int64 $tmp5725 = $tmp5723(((panda$collections$CollectionView*) fields5718));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5721, ((panda$core$Int64) { 0 }), $tmp5725, ((panda$core$Bit) { false }));
            int64_t $tmp5727 = $tmp5721.min.value;
            panda$core$Int64 i5726 = { $tmp5727 };
            int64_t $tmp5729 = $tmp5721.max.value;
            bool $tmp5730 = $tmp5721.inclusive.value;
            if ($tmp5730) goto $l5737; else goto $l5738;
            $l5737:;
            if ($tmp5727 <= $tmp5729) goto $l5731; else goto $l5733;
            $l5738:;
            if ($tmp5727 < $tmp5729) goto $l5731; else goto $l5733;
            $l5731:;
            {
                ITable* $tmp5739 = fields5718->$class->itable;
                while ($tmp5739->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5739 = $tmp5739->next;
                }
                $fn5741 $tmp5740 = $tmp5739->methods[0];
                panda$core$Object* $tmp5742 = $tmp5740(fields5718, i5726);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5742))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name) }).value) {
                {
                    index5720 = i5726;
                    goto $l5733;
                }
                }
            }
            $l5734:;
            int64_t $tmp5744 = $tmp5729 - i5726.value;
            if ($tmp5730) goto $l5745; else goto $l5746;
            $l5745:;
            if ($tmp5744 >= 1) goto $l5743; else goto $l5733;
            $l5746:;
            if ($tmp5744 > 1) goto $l5743; else goto $l5733;
            $l5743:;
            i5726.value += 1;
            goto $l5731;
            $l5733:;
            panda$core$Bit $tmp5749 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5720, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5749.value);
            panda$core$String* $tmp5751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5750, ptr5713);
            panda$core$String* $tmp5753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5751, &$s5752);
            org$pandalanguage$pandac$Type* $tmp5754 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5715);
            panda$core$String* $tmp5755 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5754);
            panda$core$String* $tmp5756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5753, $tmp5755);
            panda$core$String* $tmp5758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5756, &$s5757);
            org$pandalanguage$pandac$Type* $tmp5760 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5715);
            panda$core$String* $tmp5761 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5760);
            panda$core$String* $tmp5762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5759, $tmp5761);
            panda$core$String* $tmp5764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5762, &$s5763);
            panda$core$String* $tmp5765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5764, base5710);
            panda$core$String* $tmp5767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5765, &$s5766);
            panda$core$String* $tmp5768 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5767, ((panda$core$Object*) wrap_panda$core$Int64(index5720)));
            panda$core$String* $tmp5770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5768, &$s5769);
            panda$core$String* $tmp5771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5758, $tmp5770);
            (($fn5772) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5771);
            return ptr5713;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5774 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5775 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5774), p_out);
            result5773 = $tmp5775;
            panda$core$String* $tmp5777 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5776 = $tmp5777;
            panda$core$String* $tmp5779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5778, reused5776);
            panda$core$String* $tmp5781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5779, &$s5780);
            panda$core$String* $tmp5782 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5781, $tmp5782);
            panda$core$String* $tmp5785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5783, &$s5784);
            panda$core$String* $tmp5787 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5786, $tmp5787);
            panda$core$String* $tmp5790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5788, &$s5789);
            panda$core$String* $tmp5791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5790, result5773);
            panda$core$String* $tmp5793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5791, &$s5792);
            panda$core$String* $tmp5794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5785, $tmp5793);
            (($fn5795) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5794);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5776));
            return result5773;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue5799;
    panda$core$String* value5811;
    panda$core$String* t5812;
    panda$core$Int64 op5815;
    panda$core$String* right5817;
    panda$core$Bit $tmp5796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5796.value);
    panda$core$Int64 $tmp5797 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5797, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5798.value);
    panda$core$Object* $tmp5801 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5802 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5801)->type);
    panda$core$String* $tmp5803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5800, $tmp5802);
    panda$core$String* $tmp5805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5803, &$s5804);
    panda$core$Object* $tmp5806 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5807 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5806), p_out);
    panda$core$String* $tmp5808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5805, $tmp5807);
    panda$core$String* $tmp5810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5808, &$s5809);
    lvalue5799 = $tmp5810;
    panda$core$Object* $tmp5813 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5814 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5813)->type);
    t5812 = $tmp5814;
    op5815 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5815, ((panda$core$Int64) { 73 }));
    if ($tmp5816.value) {
    {
        panda$core$Object* $tmp5818 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5819 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5818), p_out);
        right5817 = $tmp5819;
        panda$core$String* $tmp5821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5820, t5812);
        panda$core$String* $tmp5823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5821, &$s5822);
        panda$core$String* $tmp5824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5823, right5817);
        panda$core$String* $tmp5826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5824, &$s5825);
        value5811 = $tmp5826;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5827, value5811);
    panda$core$String* $tmp5830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5828, &$s5829);
    panda$core$String* $tmp5831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5830, lvalue5799);
    panda$core$String* $tmp5833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5831, &$s5832);
    (($fn5834) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5833);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5839;
    panda$core$String* result5841;
    panda$core$Int64 $tmp5835 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5835, ((panda$core$Int64) { 1 }));
    if ($tmp5836.value) {
    {
        panda$core$Int64 $tmp5837 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5838 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5837, ((panda$core$Int64) { 0 }));
        if ($tmp5838.value) {
        {
            panda$core$Object* $tmp5840 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5839 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5840);
            panda$core$Object* $tmp5842 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5843 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5842), p_out);
            result5841 = $tmp5843;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5844 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5844->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5844->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5844, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5841));
            panda$collections$Array$add$panda$collections$Array$T(inline5839->returns, ((panda$core$Object*) $tmp5844));
            panda$core$String* $tmp5847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5846, inline5839->exitLabel);
            panda$core$String* $tmp5849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5847, &$s5848);
            (($fn5850) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5849);
        }
        }
        else {
        {
            panda$core$Object* $tmp5852 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5853 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5852), p_out);
            panda$core$String* $tmp5854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5851, $tmp5853);
            panda$core$String* $tmp5856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5854, &$s5855);
            (($fn5857) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5856);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5858 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5858, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp5859.value);
        panda$core$Int64 $tmp5860 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5861 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5860, ((panda$core$Int64) { 0 }));
        if ($tmp5861.value) {
        {
            panda$core$Object* $tmp5863 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5862, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5863)->exitLabel);
            panda$core$String* $tmp5866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5864, &$s5865);
            (($fn5867) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5866);
        }
        }
        else {
        {
            (($fn5869) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5868);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5873;
    panda$core$Int64 $tmp5870 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5871 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5870, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5871.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5872 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5872);
    }
    }
    panda$core$Int64 $tmp5874 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5873, ((panda$core$Int64) { 0 }), $tmp5874, ((panda$core$Bit) { false }));
    int64_t $tmp5876 = $tmp5873.min.value;
    panda$core$Int64 i5875 = { $tmp5876 };
    int64_t $tmp5878 = $tmp5873.max.value;
    bool $tmp5879 = $tmp5873.inclusive.value;
    if ($tmp5879) goto $l5886; else goto $l5887;
    $l5886:;
    if ($tmp5876 <= $tmp5878) goto $l5880; else goto $l5882;
    $l5887:;
    if ($tmp5876 < $tmp5878) goto $l5880; else goto $l5882;
    $l5880:;
    {
        panda$core$Object* $tmp5889 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5875);
        bool $tmp5888 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5889)->loopLabel != NULL }).value;
        if (!$tmp5888) goto $l5890;
        panda$core$Object* $tmp5891 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5875);
        panda$core$Bit $tmp5892 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5891)->loopLabel, p_name);
        $tmp5888 = $tmp5892.value;
        $l5890:;
        panda$core$Bit $tmp5893 = { $tmp5888 };
        if ($tmp5893.value) {
        {
            panda$core$Object* $tmp5894 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5875);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5894);
        }
        }
    }
    $l5883:;
    int64_t $tmp5896 = $tmp5878 - i5875.value;
    if ($tmp5879) goto $l5897; else goto $l5898;
    $l5897:;
    if ($tmp5896 >= 1) goto $l5895; else goto $l5882;
    $l5898:;
    if ($tmp5896 > 1) goto $l5895; else goto $l5882;
    $l5895:;
    i5875.value += 1;
    goto $l5880;
    $l5882:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5901;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5902 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5901 = $tmp5902;
    panda$core$String* $tmp5904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5903, desc5901->breakLabel);
    panda$core$String* $tmp5906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5904, &$s5905);
    (($fn5907) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5906);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5908;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5909 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5908 = $tmp5909;
    panda$core$String* $tmp5911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5910, desc5908->continueLabel);
    panda$core$String* $tmp5913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5911, &$s5912);
    (($fn5914) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5913);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5924;
    panda$core$String* ifTrue5927;
    panda$core$String* ifFalse5929;
    panda$core$String* name5942;
    panda$core$String* path5943;
    panda$core$String$Index$nullable index5945;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5948;
    panda$core$String* nameRef5950;
    panda$core$String* line5952;
    panda$core$String* msg5957;
    panda$collections$Iterator* m$Iter5964;
    org$pandalanguage$pandac$MethodDecl* m5978;
    panda$core$Bit $tmp5915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5915.value);
    panda$core$Int64 $tmp5917 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5917, ((panda$core$Int64) { 1 }));
    bool $tmp5916 = $tmp5918.value;
    if ($tmp5916) goto $l5919;
    panda$core$Int64 $tmp5920 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5920, ((panda$core$Int64) { 2 }));
    $tmp5916 = $tmp5921.value;
    $l5919:;
    panda$core$Bit $tmp5922 = { $tmp5916 };
    PANDA_ASSERT($tmp5922.value);
    panda$core$Bit $tmp5923 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5923.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5925 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5926 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5925), p_out);
    test5924 = $tmp5926;
    panda$core$String* $tmp5928 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5927 = $tmp5928;
    panda$core$String* $tmp5930 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5929 = $tmp5930;
    panda$core$String* $tmp5932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5931, test5924);
    panda$core$String* $tmp5934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5932, &$s5933);
    panda$core$String* $tmp5935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5934, ifTrue5927);
    panda$core$String* $tmp5937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5935, &$s5936);
    panda$core$String* $tmp5938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5937, ifFalse5929);
    panda$core$String* $tmp5940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5938, &$s5939);
    (($fn5941) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5940);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse5929, p_out);
    panda$core$Object* $tmp5944 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5943 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5944)->source->path;
    panda$core$String$Index$nullable $tmp5947 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5943, &$s5946);
    index5945 = $tmp5947;
    if (((panda$core$Bit) { !index5945.nonnull }).value) {
    {
        name5942 = path5943;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5948, index5945, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5949 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5943, $tmp5948);
        name5942 = $tmp5949;
    }
    }
    panda$core$String* $tmp5951 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name5942, p_out);
    nameRef5950 = $tmp5951;
    panda$core$String* $tmp5954 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5953, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp5956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5954, &$s5955);
    line5952 = $tmp5956;
    panda$core$Int64 $tmp5958 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5958, ((panda$core$Int64) { 2 }));
    if ($tmp5959.value) {
    {
        panda$core$Object* $tmp5960 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5961 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5960), p_out);
        msg5957 = $tmp5961;
    }
    }
    else {
    {
        msg5957 = NULL;
    }
    }
    (($fn5963) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5962);
    {
        org$pandalanguage$pandac$Type* $tmp5965 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp5966 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp5965);
        ITable* $tmp5967 = ((panda$collections$Iterable*) $tmp5966->methods)->$class->itable;
        while ($tmp5967->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5967 = $tmp5967->next;
        }
        $fn5969 $tmp5968 = $tmp5967->methods[0];
        panda$collections$Iterator* $tmp5970 = $tmp5968(((panda$collections$Iterable*) $tmp5966->methods));
        m$Iter5964 = $tmp5970;
        $l5971:;
        ITable* $tmp5973 = m$Iter5964->$class->itable;
        while ($tmp5973->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5973 = $tmp5973->next;
        }
        $fn5975 $tmp5974 = $tmp5973->methods[0];
        panda$core$Bit $tmp5976 = $tmp5974(m$Iter5964);
        panda$core$Bit $tmp5977 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5976);
        if (!$tmp5977.value) goto $l5972;
        {
            ITable* $tmp5979 = m$Iter5964->$class->itable;
            while ($tmp5979->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5979 = $tmp5979->next;
            }
            $fn5981 $tmp5980 = $tmp5979->methods[1];
            panda$core$Object* $tmp5982 = $tmp5980(m$Iter5964);
            m5978 = ((org$pandalanguage$pandac$MethodDecl*) $tmp5982);
            panda$core$Bit $tmp5984 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5978)->name, &$s5983);
            if ($tmp5984.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m5978);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m5978);
            }
            }
        }
        goto $l5971;
        $l5972:;
    }
    if (((panda$core$Bit) { msg5957 != NULL }).value) {
    {
        panda$core$String* $tmp5987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5985, &$s5986);
        (($fn5988) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5987);
    }
    }
    else {
    {
        (($fn5990) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s5989);
    }
    }
    panda$core$String* $tmp5992 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5991, nameRef5950);
    panda$core$String* $tmp5994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5992, &$s5993);
    panda$core$String* $tmp5995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5994, line5952);
    panda$core$String* $tmp5997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5995, &$s5996);
    (($fn5998) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5997);
    if (((panda$core$Bit) { msg5957 != NULL }).value) {
    {
        panda$core$String* $tmp6000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5999, msg5957);
        panda$core$String* $tmp6002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6000, &$s6001);
        (($fn6003) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6002);
    }
    }
    (($fn6005) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6004);
    (($fn6007) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6006);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue5927, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* valueStruct6009;
    org$pandalanguage$pandac$ClassDecl* numberClass6012;
    panda$core$String* value6015;
    org$pandalanguage$pandac$FieldDecl* f6025;
    panda$core$String* switchType6028;
    panda$core$String* endLabel6038;
    panda$collections$Array* whenLabels6040;
    panda$core$String* otherwiseLabel6043;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6054;
    org$pandalanguage$pandac$IRNode* w6069;
    panda$core$String* label6073;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6075;
    panda$core$UInt64 number6091;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6119;
    org$pandalanguage$pandac$IRNode* w6134;
    org$pandalanguage$pandac$IRNode* block6136;
    panda$core$Bit $tmp6008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp6008.value);
    panda$core$Object* $tmp6010 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6011 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6010), p_out);
    valueStruct6009 = $tmp6011;
    panda$core$Object* $tmp6013 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp6014 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6013)->type);
    numberClass6012 = $tmp6014;
    panda$core$String* $tmp6016 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value6015 = $tmp6016;
    panda$core$String* $tmp6018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6017, value6015);
    panda$core$String* $tmp6020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6018, &$s6019);
    panda$core$String* $tmp6021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6020, valueStruct6009);
    panda$core$String* $tmp6023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6021, &$s6022);
    (($fn6024) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6023);
    org$pandalanguage$pandac$Symbol* $tmp6027 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass6012->symbolTable, &$s6026);
    f6025 = ((org$pandalanguage$pandac$FieldDecl*) $tmp6027);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f6025);
    panda$core$String* $tmp6029 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f6025->type);
    switchType6028 = $tmp6029;
    panda$core$String* $tmp6031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6030, switchType6028);
    panda$core$String* $tmp6033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6031, &$s6032);
    panda$core$String* $tmp6034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6033, value6015);
    panda$core$String* $tmp6036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6034, &$s6035);
    (($fn6037) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6036);
    panda$core$String* $tmp6039 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel6038 = $tmp6039;
    panda$collections$Array* $tmp6041 = (panda$collections$Array*) malloc(40);
    $tmp6041->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6041->refCount.value = 1;
    panda$collections$Array$init($tmp6041);
    whenLabels6040 = $tmp6041;
    panda$core$Int64 $tmp6044 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp6045 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6044, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp6046 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp6045);
    panda$core$Bit $tmp6047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp6046)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp6047.value) {
    {
        panda$core$String* $tmp6048 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel6043 = $tmp6048;
    }
    }
    else {
    {
        otherwiseLabel6043 = endLabel6038;
    }
    }
    panda$core$String* $tmp6050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6049, otherwiseLabel6043);
    panda$core$String* $tmp6052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6050, &$s6051);
    (($fn6053) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6052);
    panda$core$Int64 $tmp6055 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6054, ((panda$core$Int64) { 1 }), $tmp6055, ((panda$core$Bit) { false }));
    int64_t $tmp6057 = $tmp6054.min.value;
    panda$core$Int64 i6056 = { $tmp6057 };
    int64_t $tmp6059 = $tmp6054.max.value;
    bool $tmp6060 = $tmp6054.inclusive.value;
    if ($tmp6060) goto $l6067; else goto $l6068;
    $l6067:;
    if ($tmp6057 <= $tmp6059) goto $l6061; else goto $l6063;
    $l6068:;
    if ($tmp6057 < $tmp6059) goto $l6061; else goto $l6063;
    $l6061:;
    {
        panda$core$Object* $tmp6070 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i6056);
        w6069 = ((org$pandalanguage$pandac$IRNode*) $tmp6070);
        panda$core$Bit $tmp6071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6069->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp6071.value) {
        {
            goto $l6064;
        }
        }
        panda$core$Bit $tmp6072 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6069->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp6072.value);
        panda$core$String* $tmp6074 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label6073 = $tmp6074;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels6040, ((panda$core$Object*) label6073));
        panda$core$Int64 $tmp6076 = panda$collections$Array$get_count$R$panda$core$Int64(w6069->children);
        panda$core$Int64 $tmp6077 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6076, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6075, ((panda$core$Int64) { 0 }), $tmp6077, ((panda$core$Bit) { false }));
        int64_t $tmp6079 = $tmp6075.min.value;
        panda$core$Int64 i6078 = { $tmp6079 };
        int64_t $tmp6081 = $tmp6075.max.value;
        bool $tmp6082 = $tmp6075.inclusive.value;
        if ($tmp6082) goto $l6089; else goto $l6090;
        $l6089:;
        if ($tmp6079 <= $tmp6081) goto $l6083; else goto $l6085;
        $l6090:;
        if ($tmp6079 < $tmp6081) goto $l6083; else goto $l6085;
        $l6083:;
        {
            panda$core$Object* $tmp6092 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w6069->children, i6078);
            panda$core$UInt64 $tmp6093 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6092));
            number6091 = $tmp6093;
            panda$core$String* $tmp6095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6094, switchType6028);
            panda$core$String* $tmp6097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6095, &$s6096);
            panda$core$String* $tmp6098 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6097, ((panda$core$Object*) wrap_panda$core$UInt64(number6091)));
            panda$core$String* $tmp6100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6098, &$s6099);
            panda$core$String* $tmp6101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6100, label6073);
            panda$core$String* $tmp6103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6101, &$s6102);
            (($fn6104) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6103);
        }
        $l6086:;
        int64_t $tmp6106 = $tmp6081 - i6078.value;
        if ($tmp6082) goto $l6107; else goto $l6108;
        $l6107:;
        if ($tmp6106 >= 1) goto $l6105; else goto $l6085;
        $l6108:;
        if ($tmp6106 > 1) goto $l6105; else goto $l6085;
        $l6105:;
        i6078.value += 1;
        goto $l6083;
        $l6085:;
    }
    $l6064:;
    int64_t $tmp6112 = $tmp6059 - i6056.value;
    if ($tmp6060) goto $l6113; else goto $l6114;
    $l6113:;
    if ($tmp6112 >= 1) goto $l6111; else goto $l6063;
    $l6114:;
    if ($tmp6112 > 1) goto $l6111; else goto $l6063;
    $l6111:;
    i6056.value += 1;
    goto $l6061;
    $l6063:;
    (($fn6118) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6117);
    panda$core$Int64 $tmp6120 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6119, ((panda$core$Int64) { 1 }), $tmp6120, ((panda$core$Bit) { false }));
    int64_t $tmp6122 = $tmp6119.min.value;
    panda$core$Int64 i6121 = { $tmp6122 };
    int64_t $tmp6124 = $tmp6119.max.value;
    bool $tmp6125 = $tmp6119.inclusive.value;
    if ($tmp6125) goto $l6132; else goto $l6133;
    $l6132:;
    if ($tmp6122 <= $tmp6124) goto $l6126; else goto $l6128;
    $l6133:;
    if ($tmp6122 < $tmp6124) goto $l6126; else goto $l6128;
    $l6126:;
    {
        panda$core$Object* $tmp6135 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i6121);
        w6134 = ((org$pandalanguage$pandac$IRNode*) $tmp6135);
        panda$core$Int64 $tmp6137 = panda$collections$Array$get_count$R$panda$core$Int64(w6134->children);
        panda$core$Int64 $tmp6138 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6137, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp6139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w6134->children, $tmp6138);
        block6136 = ((org$pandalanguage$pandac$IRNode*) $tmp6139);
        panda$core$Int64 $tmp6140 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6121, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp6141 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels6040);
        panda$core$Bit $tmp6142 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp6140, $tmp6141);
        if ($tmp6142.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, otherwiseLabel6043, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp6143 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6121, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp6144 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels6040, $tmp6143);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ((panda$core$String*) $tmp6144), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block6136, p_out);
        panda$core$Bit $tmp6145 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block6136);
        panda$core$Bit $tmp6146 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6145);
        if ($tmp6146.value) {
        {
            panda$core$String* $tmp6148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6147, endLabel6038);
            panda$core$String* $tmp6150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6148, &$s6149);
            (($fn6151) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6150);
        }
        }
    }
    $l6129:;
    int64_t $tmp6153 = $tmp6124 - i6121.value;
    if ($tmp6125) goto $l6154; else goto $l6155;
    $l6154:;
    if ($tmp6153 >= 1) goto $l6152; else goto $l6128;
    $l6155:;
    if ($tmp6153 > 1) goto $l6152; else goto $l6128;
    $l6152:;
    i6121.value += 1;
    goto $l6126;
    $l6128:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel6038, p_out);
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
    panda$core$String* result6158;
    org$pandalanguage$pandac$Type* $tmp6159 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6160 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6159);
    result6158 = $tmp6160;
    panda$core$Bit $tmp6162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6161 = $tmp6162.value;
    if (!$tmp6161) goto $l6163;
    panda$core$Bit $tmp6165 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6158, &$s6164);
    panda$core$Bit $tmp6166 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6165);
    $tmp6161 = $tmp6166.value;
    $l6163:;
    panda$core$Bit $tmp6167 = { $tmp6161 };
    if ($tmp6167.value) {
    {
        panda$core$String* $tmp6169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6158, &$s6168);
        return $tmp6169;
    }
    }
    return result6158;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6170;
    panda$core$Bit needsIndirection6179;
    panda$core$String* separator6191;
    panda$collections$Iterator* p$Iter6212;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6224;
    panda$core$String* $tmp6171 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6170 = $tmp6171;
    panda$core$Bit $tmp6172 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6170));
    if ($tmp6172.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6170));
    panda$core$String* $tmp6174 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6173, $tmp6174);
    panda$core$String* $tmp6177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6175, &$s6176);
    (($fn6178) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6177);
    panda$core$Bit $tmp6180 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6179 = $tmp6180;
    if (needsIndirection6179.value) {
    {
        (($fn6182) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6181);
    }
    }
    else {
    {
        panda$core$String* $tmp6183 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6184) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6183);
    }
    }
    panda$core$String* $tmp6186 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6185, $tmp6186);
    panda$core$String* $tmp6189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6187, &$s6188);
    (($fn6190) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6189);
    separator6191 = &$s6192;
    if (needsIndirection6179.value) {
    {
        panda$core$String* $tmp6194 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6193, $tmp6194);
        panda$core$String* $tmp6197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6195, &$s6196);
        (($fn6198) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6197);
        separator6191 = &$s6199;
    }
    }
    panda$core$Bit $tmp6200 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6201 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6200);
    if ($tmp6201.value) {
    {
        panda$core$String* $tmp6203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6202, separator6191);
        panda$core$String* $tmp6205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6203, &$s6204);
        panda$core$String* $tmp6206 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6205, $tmp6206);
        panda$core$String* $tmp6209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6207, &$s6208);
        (($fn6210) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6209);
        separator6191 = &$s6211;
    }
    }
    {
        ITable* $tmp6213 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6213->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6213 = $tmp6213->next;
        }
        $fn6215 $tmp6214 = $tmp6213->methods[0];
        panda$collections$Iterator* $tmp6216 = $tmp6214(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6212 = $tmp6216;
        $l6217:;
        ITable* $tmp6219 = p$Iter6212->$class->itable;
        while ($tmp6219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6219 = $tmp6219->next;
        }
        $fn6221 $tmp6220 = $tmp6219->methods[0];
        panda$core$Bit $tmp6222 = $tmp6220(p$Iter6212);
        panda$core$Bit $tmp6223 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6222);
        if (!$tmp6223.value) goto $l6218;
        {
            ITable* $tmp6225 = p$Iter6212->$class->itable;
            while ($tmp6225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6225 = $tmp6225->next;
            }
            $fn6227 $tmp6226 = $tmp6225->methods[1];
            panda$core$Object* $tmp6228 = $tmp6226(p$Iter6212);
            p6224 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6228);
            panda$core$String* $tmp6230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6229, separator6191);
            panda$core$String* $tmp6232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6230, &$s6231);
            panda$core$String* $tmp6233 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6224->type);
            panda$core$String* $tmp6234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6232, $tmp6233);
            panda$core$String* $tmp6236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6234, &$s6235);
            panda$core$String* $tmp6237 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6224->name);
            panda$core$String* $tmp6238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6236, $tmp6237);
            panda$core$String* $tmp6240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6238, &$s6239);
            (($fn6241) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6240);
            separator6191 = &$s6242;
        }
        goto $l6217;
        $l6218:;
    }
    (($fn6244) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6243);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6267;
    panda$collections$Iterator* p$Iter6278;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6290;
    panda$io$MemoryOutputStream* bodyBuffer6313;
    panda$io$IndentedOutputStream* indentedBody6316;
    panda$collections$Iterator* s$Iter6319;
    org$pandalanguage$pandac$IRNode* s6331;
    panda$core$Object* $tmp6245 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6245)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6246;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn6247) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    (($fn6249) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6248);
    panda$core$Bit $tmp6250 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6250.value) {
    {
        (($fn6252) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6251);
    }
    }
    panda$core$String* $tmp6254 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6253, $tmp6254);
    panda$core$String* $tmp6257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6255, &$s6256);
    panda$core$String* $tmp6258 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6257, $tmp6258);
    panda$core$String* $tmp6261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6259, &$s6260);
    panda$core$String* $tmp6262 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6261, $tmp6262);
    panda$core$String* $tmp6265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6263, &$s6264);
    (($fn6266) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6265);
    separator6267 = &$s6268;
    panda$core$Bit $tmp6269 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6270 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6269);
    if ($tmp6270.value) {
    {
        panda$core$String* $tmp6272 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6271, $tmp6272);
        panda$core$String* $tmp6275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6273, &$s6274);
        (($fn6276) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6275);
        separator6267 = &$s6277;
    }
    }
    {
        ITable* $tmp6279 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6279->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6279 = $tmp6279->next;
        }
        $fn6281 $tmp6280 = $tmp6279->methods[0];
        panda$collections$Iterator* $tmp6282 = $tmp6280(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6278 = $tmp6282;
        $l6283:;
        ITable* $tmp6285 = p$Iter6278->$class->itable;
        while ($tmp6285->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6285 = $tmp6285->next;
        }
        $fn6287 $tmp6286 = $tmp6285->methods[0];
        panda$core$Bit $tmp6288 = $tmp6286(p$Iter6278);
        panda$core$Bit $tmp6289 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6288);
        if (!$tmp6289.value) goto $l6284;
        {
            ITable* $tmp6291 = p$Iter6278->$class->itable;
            while ($tmp6291->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6291 = $tmp6291->next;
            }
            $fn6293 $tmp6292 = $tmp6291->methods[1];
            panda$core$Object* $tmp6294 = $tmp6292(p$Iter6278);
            p6290 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6294);
            panda$core$String* $tmp6296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6295, separator6267);
            panda$core$String* $tmp6298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6296, &$s6297);
            panda$core$String* $tmp6299 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6290->type);
            panda$core$String* $tmp6300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6298, $tmp6299);
            panda$core$String* $tmp6302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6300, &$s6301);
            panda$core$String* $tmp6303 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6290->name);
            panda$core$String* $tmp6304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6302, $tmp6303);
            panda$core$String* $tmp6306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6304, &$s6305);
            (($fn6307) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6306);
            separator6267 = &$s6308;
        }
        goto $l6283;
        $l6284:;
    }
    (($fn6310) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6309);
    panda$core$Int64 $tmp6311 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6311;
    panda$core$Bit $tmp6312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6312.value);
    panda$io$MemoryOutputStream* $tmp6314 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6314->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6314->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6314);
    bodyBuffer6313 = $tmp6314;
    panda$io$IndentedOutputStream* $tmp6317 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp6317->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6317->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6317, ((panda$io$OutputStream*) bodyBuffer6313));
    indentedBody6316 = $tmp6317;
    {
        ITable* $tmp6320 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6320->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6320 = $tmp6320->next;
        }
        $fn6322 $tmp6321 = $tmp6320->methods[0];
        panda$collections$Iterator* $tmp6323 = $tmp6321(((panda$collections$Iterable*) p_body->children));
        s$Iter6319 = $tmp6323;
        $l6324:;
        ITable* $tmp6326 = s$Iter6319->$class->itable;
        while ($tmp6326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6326 = $tmp6326->next;
        }
        $fn6328 $tmp6327 = $tmp6326->methods[0];
        panda$core$Bit $tmp6329 = $tmp6327(s$Iter6319);
        panda$core$Bit $tmp6330 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6329);
        if (!$tmp6330.value) goto $l6325;
        {
            ITable* $tmp6332 = s$Iter6319->$class->itable;
            while ($tmp6332->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6332 = $tmp6332->next;
            }
            $fn6334 $tmp6333 = $tmp6332->methods[1];
            panda$core$Object* $tmp6335 = $tmp6333(s$Iter6319);
            s6331 = ((org$pandalanguage$pandac$IRNode*) $tmp6335);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6331, indentedBody6316);
        }
        goto $l6324;
        $l6325:;
    }
    panda$core$String* $tmp6337 = (($fn6336) self->methodHeaderBuffer->$class->vtable[21])(self->methodHeaderBuffer);
    (($fn6338) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6337);
    panda$core$String* $tmp6340 = (($fn6339) bodyBuffer6313->$class->vtable[21])(bodyBuffer6313);
    (($fn6341) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6340);
    panda$core$Bit $tmp6342 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6343 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6342);
    if ($tmp6343.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6344 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6345 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6344);
        if ($tmp6345.value) {
        {
            (($fn6347) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6346);
        }
        }
        else {
        {
            (($fn6349) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6348);
        }
        }
    }
    }
    panda$core$Int64 $tmp6350 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6350;
    (($fn6352) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6351);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6353 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6353.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6354 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6354);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

