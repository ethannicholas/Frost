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
#include "panda/collections/Key.h"
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
typedef void (*$fn295)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn315)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn321)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn327)(panda$collections$Iterator*);
typedef void (*$fn345)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn355)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn519)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn525)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn531)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn558)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn597)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn608)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn614)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn620)(panda$collections$Iterator*);
typedef void (*$fn636)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn672)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn675)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn690)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn718)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn726)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn771)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn791)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn817)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn825)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn837)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn839)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn844)(panda$io$MemoryOutputStream*);
typedef void (*$fn846)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn862)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn865)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn907)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn915)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn921)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn973)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn999)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1025)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1033)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1038)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1041)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1050)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1056)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1062)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn1089)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1128)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1139)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1145)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1151)(panda$collections$Iterator*);
typedef void (*$fn1168)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1277)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1297)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1356)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1367)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1373)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1379)(panda$collections$Iterator*);
typedef void (*$fn1395)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1414)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn1437)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1503)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1514)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1532)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn1557)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1710)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1716)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1722)(panda$collections$Iterator*);
typedef void (*$fn1756)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1772)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1786)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1808)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1822)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1838)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1852)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1858)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1933)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1950)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1960)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1977)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1987)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2014)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2031)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn2056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2066)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2079)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2113)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2126)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2136)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2160)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2176)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2192)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2217)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2224)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2264)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2280)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2296)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2322)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2335)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2349)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2354)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn2361)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2378)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2391)(panda$collections$CollectionView*);
typedef void (*$fn2413)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2426)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2442)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2470)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2492)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2506)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2521)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2547)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2563)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2589)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2602)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2623)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2639)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2656)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2669)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2687)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2706)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2721)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2745)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2761)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2815)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2822)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2834)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2840)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2846)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2852)(panda$collections$Iterator*);
typedef void (*$fn2864)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2866)(panda$io$OutputStream*);
typedef void (*$fn2893)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2913)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3033)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3047)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3055)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3060)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3066)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3072)(panda$collections$Iterator*);
typedef void (*$fn3081)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3084)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3097)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3121)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3136)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3147)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3169)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3181)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3200)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3218)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3251)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3256)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3274)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3290)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3309)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3331)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3348)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn3375)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3415)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3430)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3441)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3470)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3493)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3525)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3550)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3564)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3642)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3699)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3757)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3781)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3806)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3834)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3849)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3884)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3896)(panda$collections$CollectionView*);
typedef void (*$fn3908)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3915)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3921)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3927)(panda$collections$Iterator*);
typedef void (*$fn3937)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3940)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn3978)(panda$collections$CollectionView*);
typedef void (*$fn3986)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4004)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4037)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4046)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4056)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4079)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4088)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4098)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4131)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4143)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4179)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4185)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4191)(panda$collections$Iterator*);
typedef void (*$fn4214)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4242)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4269)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4281)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4298)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4303)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4424)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4442)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4446)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4452)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4458)(panda$collections$Iterator*);
typedef void (*$fn4460)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4461)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4464)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4488)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4503)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4516)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4527)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4563)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4570)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4593)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4611)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4625)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4635)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4645)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4688)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4720)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4741)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4752)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4768)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4775)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4793)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4806)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4819)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4830)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4843)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4854)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4867)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4880)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4888)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4902)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4907)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4943)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4950)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn4963)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4973)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4991)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5005)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5015)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5025)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5040)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5050)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5091)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5103)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5141)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5152)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5184)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5201)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5222)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5233)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5254)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5265)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5281)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5288)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5305)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5321)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5334)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5350)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5361)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5377)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5388)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5404)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5417)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5430)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5444)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5455)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5469)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5480)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5496)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5509)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5517)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5531)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5536)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5559)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5572)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5583)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5592)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5611)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5624)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5635)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5644)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5658)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5667)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5693)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5710)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5716)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5722)(panda$collections$Iterator*);
typedef panda$core$Int64 (*$fn5748)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn5765)(panda$collections$ListView*, panda$core$Int64);
typedef void (*$fn5796)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5820)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5843)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5898)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5905)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5915)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5917)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5955)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5962)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5989)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6011)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6017)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6023)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6029)(panda$collections$Iterator*);
typedef void (*$fn6036)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6038)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6046)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6051)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6053)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6055)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6072)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6085)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6101)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6152)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6166)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6199)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6226)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6230)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6232)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6238)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6246)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6258)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6263)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6275)(panda$collections$Iterator*);
typedef void (*$fn6289)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6292)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6295)(panda$io$MemoryOutputStream*);
typedef void (*$fn6297)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6300)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6314)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6324)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6329)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6335)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6341)(panda$collections$Iterator*);
typedef void (*$fn6355)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6358)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6370)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6376)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6382)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6384)(panda$io$MemoryOutputStream*);
typedef void (*$fn6386)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6387)(panda$io$MemoryOutputStream*);
typedef void (*$fn6389)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6395)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6397)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6400)(panda$io$OutputStream*, panda$core$String*);

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
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A", 3, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, NULL };
static panda$core$String $s310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, NULL };
static panda$core$String $s435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, NULL };
static panda$core$String $s861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, NULL };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, NULL };
static panda$core$String $s940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };
static panda$core$String $s1046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, NULL };
static panda$core$String $s1071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, NULL };
static panda$core$String $s1078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, NULL };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, NULL };
static panda$core$String $s1122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, NULL };
static panda$core$String $s1135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s1171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, NULL };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s1270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s1328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, NULL };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, NULL };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, NULL };
static panda$core$String $s1363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, NULL };
static panda$core$String $s1397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, NULL };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, NULL };
static panda$core$String $s1429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, NULL };
static panda$core$String $s1430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, NULL };
static panda$core$String $s1484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, NULL };
static panda$core$String $s1510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, NULL };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, NULL };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, NULL };
static panda$core$String $s1564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, NULL };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, NULL };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s1657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, NULL };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, NULL };
static panda$core$String $s1667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, NULL };
static panda$core$String $s1687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, NULL };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, NULL };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, NULL };
static panda$core$String $s1697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, NULL };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, NULL };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, NULL };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, NULL };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, NULL };
static panda$core$String $s1705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s1830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, NULL };
static panda$core$String $s1883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, NULL };
static panda$core$String $s1889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, NULL };
static panda$core$String $s1894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, NULL };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, NULL };
static panda$core$String $s1905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, NULL };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, NULL };
static panda$core$String $s1908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, NULL };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, NULL };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, NULL };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, NULL };
static panda$core$String $s1914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, NULL };
static panda$core$String $s1916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, NULL };
static panda$core$String $s1917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s1945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s1967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, NULL };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, NULL };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, NULL };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A", 2, NULL };
static panda$core$String $s2179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, NULL };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, NULL };
static panda$core$String $s2262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, NULL };
static panda$core$String $s2294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, NULL };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, NULL };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2336 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, NULL };
static panda$core$String $s2350 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s2352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, NULL };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, NULL };
static panda$core$String $s2410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s2421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, NULL };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, NULL };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s2654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s2662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, NULL };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, NULL };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s2699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s2709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s2719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, NULL };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s2743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, NULL };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, NULL };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x72\x61\x6D\x65\x74\x65\x72\x20\x63\x6F\x75\x6E\x74\x20\x6D\x69\x73\x6D\x61\x74\x63\x68\x20\x69\x6E\x20", 28, NULL };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, NULL };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x64\x65\x66", 5, NULL };
static panda$core$String $s2826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s2859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s2862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, NULL };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, NULL };
static panda$core$String $s2884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, NULL };
static panda$core$String $s2904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s2910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s2922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, NULL };
static panda$core$String $s2983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, NULL };
static panda$core$String $s3023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s3035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s3040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s3045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s3126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, NULL };
static panda$core$String $s3159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, NULL };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, NULL };
static panda$core$String $s3221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, NULL };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, NULL };
static panda$core$String $s3230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, NULL };
static panda$core$String $s3252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, NULL };
static panda$core$String $s3254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, NULL };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s3278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s3420 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s3422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s3439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, NULL };
static panda$core$String $s3450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, NULL };
static panda$core$String $s3456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, NULL };
static panda$core$String $s3459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, NULL };
static panda$core$String $s3461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, NULL };
static panda$core$String $s3464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, NULL };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, NULL };
static panda$core$String $s3479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s3485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3530 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, NULL };
static panda$core$String $s3544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s3559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s3573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, NULL };
static panda$core$String $s3576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, NULL };
static panda$core$String $s3577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, NULL };
static panda$core$String $s3618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, NULL };
static panda$core$String $s3626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, NULL };
static panda$core$String $s3631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s3716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s3726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s3731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s3735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, NULL };
static panda$core$String $s3737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, NULL };
static panda$core$String $s3746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s3748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s3755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s3790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s3795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, NULL };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s3824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, NULL };
static panda$core$String $s3832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, NULL };
static panda$core$String $s3837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, NULL };
static panda$core$String $s3839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x69\x38\x2A\x2A\x20", 11, NULL };
static panda$core$String $s3846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s3856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, NULL };
static panda$core$String $s3862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, NULL };
static panda$core$String $s3863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, NULL };
static panda$core$String $s3870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, NULL };
static panda$core$String $s3889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3892 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, NULL };
static panda$core$String $s3899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, NULL };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, NULL };
static panda$core$String $s3906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, NULL };
static panda$core$String $s3910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, NULL };
static panda$core$String $s3935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s3939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, NULL };
static panda$core$String $s3943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, NULL };
static panda$core$String $s3945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, NULL };
static panda$core$String $s3956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, NULL };
static panda$core$String $s3958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s3964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 54, NULL };
static panda$core$String $s3966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, NULL };
static panda$core$String $s3968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s3971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, NULL };
static panda$core$String $s3981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s3984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C\x20\x7D", 10, NULL };
static panda$core$String $s3990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, NULL };
static panda$core$String $s3993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s3995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, NULL };
static panda$core$String $s4018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, NULL };
static panda$core$String $s4021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, NULL };
static panda$core$String $s4035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, NULL };
static panda$core$String $s4039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, NULL };
static panda$core$String $s4044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s4054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, NULL };
static panda$core$String $s4072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, NULL };
static panda$core$String $s4086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, NULL };
static panda$core$String $s4091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, NULL };
static panda$core$String $s4096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, NULL };
static panda$core$String $s4108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, NULL };
static panda$core$String $s4110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, NULL };
static panda$core$String $s4120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4122 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s4126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s4129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, NULL };
static panda$core$String $s4138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, NULL };
static panda$core$String $s4141 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, NULL };
static panda$core$String $s4207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, NULL };
static panda$core$String $s4235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s4255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s4263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, NULL };
static panda$core$String $s4291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, NULL };
static panda$core$String $s4296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, NULL };
static panda$core$String $s4299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, NULL };
static panda$core$String $s4301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, NULL };
static panda$core$String $s4367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, NULL };
static panda$core$String $s4400 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, NULL };
static panda$core$String $s4413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, NULL };
static panda$core$String $s4431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s4462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s4481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x52\x61\x6E\x67\x65", 16, NULL };
static panda$core$String $s4576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s4638 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s4661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s4663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s4665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s4668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s4671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s4685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s4699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s4728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s4731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s4760 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s4814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s4838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s4846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s4852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s4862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, NULL };
static panda$core$String $s4870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s4875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s4878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s4881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s4883 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s4889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s4905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x53\x74\x65\x70\x70\x65\x64\x52\x61\x6E\x67\x65", 23, NULL };
static panda$core$String $s4956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s4961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s4971 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, NULL };
static panda$core$String $s4976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s4978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, NULL };
static panda$core$String $s4981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s4987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s4989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, NULL };
static panda$core$String $s4992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s4994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s4997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, NULL };
static panda$core$String $s5018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, NULL };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, NULL };
static panda$core$String $s5030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, NULL };
static panda$core$String $s5035 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s5038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, NULL };
static panda$core$String $s5066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, NULL };
static panda$core$String $s5068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s5070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x55\x49\x6E\x74", 15, NULL };
static panda$core$String $s5073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x43\x68\x61\x72", 15, NULL };
static panda$core$String $s5076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, NULL };
static panda$core$String $s5078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, NULL };
static panda$core$String $s5081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, NULL };
static panda$core$String $s5086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5092 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, NULL };
static panda$core$String $s5093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, NULL };
static panda$core$String $s5131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, NULL };
static panda$core$String $s5163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s5198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, NULL };
static panda$core$String $s5212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, NULL };
static panda$core$String $s5241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, NULL };
static panda$core$String $s5244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5257 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5270 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5300 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5328 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5342 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, NULL };
static panda$core$String $s5412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, NULL };
static panda$core$String $s5415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, NULL };
static panda$core$String $s5438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, NULL };
static panda$core$String $s5463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5485 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, NULL };
static panda$core$String $s5488 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5494 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, NULL };
static panda$core$String $s5504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, NULL };
static panda$core$String $s5507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, NULL };
static panda$core$String $s5510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, NULL };
static panda$core$String $s5512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5515 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5570 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s5622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s5625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5672 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, NULL };
static panda$core$String $s5676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, NULL };
static panda$core$String $s5781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, NULL };
static panda$core$String $s5793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, NULL };
static panda$core$String $s5814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, NULL };
static panda$core$String $s5818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s5826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, NULL };
static panda$core$String $s5832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, NULL };
static panda$core$String $s5857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s5873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, NULL };
static panda$core$String $s5877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s5880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, NULL };
static panda$core$String $s5903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5916 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s5951 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s5960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, NULL };
static panda$core$String $s5981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s5987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s5994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, NULL };
static panda$core$String $s6001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, NULL };
static panda$core$String $s6003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, NULL };
static panda$core$String $s6010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, NULL };
static panda$core$String $s6031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, NULL };
static panda$core$String $s6033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, NULL };
static panda$core$String $s6034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, NULL };
static panda$core$String $s6037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, NULL };
static panda$core$String $s6039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, NULL };
static panda$core$String $s6041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, NULL };
static panda$core$String $s6049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s6054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s6065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, NULL };
static panda$core$String $s6070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, NULL };
static panda$core$String $s6074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x61\x6C\x75\x65", 5, NULL };
static panda$core$String $s6078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x77\x69\x74\x63\x68\x20", 7, NULL };
static panda$core$String $s6080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, NULL };
static panda$core$String $s6099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B", 2, NULL };
static panda$core$String $s6142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x20\x20\x20\x20", 8, NULL };
static panda$core$String $s6144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, NULL };
static panda$core$String $s6150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x20\x20\x20\x5D", 5, NULL };
static panda$core$String $s6195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, NULL };
static panda$core$String $s6197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, NULL };
static panda$core$String $s6224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, NULL };
static panda$core$String $s6233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6241 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, NULL };
static panda$core$String $s6247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6252 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, NULL };
static panda$core$String $s6294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, NULL };
static panda$core$String $s6296 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, NULL };
static panda$core$String $s6299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, NULL };
static panda$core$String $s6301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, NULL };
static panda$core$String $s6312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, NULL };
static panda$core$String $s6316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, NULL };
static panda$core$String $s6325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, NULL };
static panda$core$String $s6353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, NULL };
static panda$core$String $s6356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, NULL };
static panda$core$String $s6357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, NULL };
static panda$core$String $s6394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, NULL };
static panda$core$String $s6396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, NULL };
static panda$core$String $s6399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, NULL };

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
    org$pandalanguage$pandac$ClassDecl* fCl272;
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
            panda$core$Bit $tmp271 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f265->type);
            if ($tmp271.value) {
            {
                org$pandalanguage$pandac$ClassDecl* $tmp273 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f265->type);
                fCl272 = $tmp273;
                panda$core$Bit $tmp274 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, fCl272);
                panda$core$Bit $tmp275 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp274);
                if ($tmp275.value) {
                {
                    panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s276, separator250);
                    panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp277, &$s278);
                    panda$core$MutableString$append$panda$core$String(code242, $tmp279);
                    separator250 = &$s280;
                    goto $l258;
                }
                }
            }
            }
            panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s281, separator250);
            panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp282, &$s283);
            panda$core$String* $tmp285 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f265->type);
            panda$core$String* $tmp286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp284, $tmp285);
            panda$core$String* $tmp288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp286, &$s287);
            panda$core$MutableString$append$panda$core$String(code242, $tmp288);
            separator250 = &$s289;
        }
        goto $l258;
        $l259:;
    }
    org$pandalanguage$pandac$Type* $tmp290 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp291 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_t, $tmp290);
    if ($tmp291.value) {
    {
        panda$core$MutableString$append$panda$core$String(code242, &$s292);
    }
    }
    panda$core$MutableString$append$panda$core$String(code242, &$s293);
    panda$core$String* $tmp294 = panda$core$MutableString$finish$R$panda$core$String(code242);
    (($fn295) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp294);
    panda$core$Bit $tmp296 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl238);
    if ($tmp296.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl238);
    }
    }
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$MutableString* code298;
    org$pandalanguage$pandac$ClassDecl* object306;
    panda$core$String* separator309;
    panda$collections$Iterator* f$Iter311;
    org$pandalanguage$pandac$FieldDecl* f324;
    panda$core$Bit $tmp297 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp297.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    panda$core$MutableString* $tmp299 = (panda$core$MutableString*) malloc(40);
    $tmp299->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp299->refCount.value = 1;
    panda$core$String* $tmp302 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s301, $tmp302);
    panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, &$s304);
    panda$core$MutableString$init$panda$core$String($tmp299, $tmp305);
    code298 = $tmp299;
    org$pandalanguage$pandac$Type* $tmp307 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp308 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp307);
    object306 = $tmp308;
    PANDA_ASSERT(((panda$core$Bit) { object306 != NULL }).value);
    separator309 = &$s310;
    {
        panda$collections$ListView* $tmp312 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, object306);
        ITable* $tmp313 = ((panda$collections$Iterable*) $tmp312)->$class->itable;
        while ($tmp313->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp313 = $tmp313->next;
        }
        $fn315 $tmp314 = $tmp313->methods[0];
        panda$collections$Iterator* $tmp316 = $tmp314(((panda$collections$Iterable*) $tmp312));
        f$Iter311 = $tmp316;
        $l317:;
        ITable* $tmp319 = f$Iter311->$class->itable;
        while ($tmp319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp319 = $tmp319->next;
        }
        $fn321 $tmp320 = $tmp319->methods[0];
        panda$core$Bit $tmp322 = $tmp320(f$Iter311);
        panda$core$Bit $tmp323 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp322);
        if (!$tmp323.value) goto $l318;
        {
            ITable* $tmp325 = f$Iter311->$class->itable;
            while ($tmp325->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp325 = $tmp325->next;
            }
            $fn327 $tmp326 = $tmp325->methods[1];
            panda$core$Object* $tmp328 = $tmp326(f$Iter311);
            f324 = ((org$pandalanguage$pandac$FieldDecl*) $tmp328);
            org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f324);
            panda$core$String* $tmp330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s329, separator309);
            panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s331);
            panda$core$String* $tmp333 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f324->type);
            panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, $tmp333);
            panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s335);
            panda$core$MutableString$append$panda$core$String(code298, $tmp336);
            separator309 = &$s337;
        }
        goto $l317;
        $l318:;
    }
    panda$core$String* $tmp339 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s338, $tmp339);
    panda$core$String* $tmp342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s341);
    panda$core$MutableString$append$panda$core$String(code298, $tmp342);
    panda$core$MutableString$append$panda$core$String(code298, &$s343);
    panda$core$String* $tmp344 = panda$core$MutableString$finish$R$panda$core$String(code298);
    (($fn345) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp344);
    panda$core$String* $tmp347 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s346, $tmp347);
    panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, &$s349);
    panda$core$String* $tmp351 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, $tmp351);
    panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp352, &$s353);
    (($fn355) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp354);
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp357 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s356, $tmp357);
    return $tmp358;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* name367;
    org$pandalanguage$pandac$ClassDecl* cl373;
    org$pandalanguage$pandac$ClassDecl* cl379;
    org$pandalanguage$pandac$ClassDecl* cl392;
    panda$core$String* name395;
    org$pandalanguage$pandac$ClassDecl* cl401;
    panda$core$MutableString* result410;
    panda$core$Range$LTpanda$core$Int64$GT $tmp418;
    switch (p_t->typeKind.value) {
        case 14:
        {
            return &$s359;
        }
        break;
        case 12:
        case 13:
        {
            panda$core$Int64 $tmp361 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_t);
            panda$core$Int64 $tmp362 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp361, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s360, ((panda$core$Object*) wrap_panda$core$Int64($tmp362)));
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, &$s364);
            return $tmp365;
        }
        break;
        case 19:
        {
            return &$s366;
        }
        break;
        case 10:
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, p_t);
            panda$core$String* $tmp369 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s368, $tmp369);
            panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp370, &$s371);
            name367 = $tmp372;
            org$pandalanguage$pandac$ClassDecl* $tmp374 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl373 = $tmp374;
            PANDA_ASSERT(((panda$core$Bit) { cl373 != NULL }).value);
            panda$core$Bit $tmp375 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl373);
            panda$core$Bit $tmp376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp375);
            if ($tmp376.value) {
            {
                panda$core$String* $tmp378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name367, &$s377);
                return $tmp378;
            }
            }
            return name367;
        }
        break;
        case 11:
        {
            org$pandalanguage$pandac$ClassDecl* $tmp380 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl379 = $tmp380;
            PANDA_ASSERT(((panda$core$Bit) { cl379 != NULL }).value);
            panda$core$Bit $tmp381 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl379);
            if ($tmp381.value) {
            {
                panda$core$String* $tmp382 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
                return $tmp382;
            }
            }
            panda$core$Object* $tmp383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp384 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp383));
            return $tmp384;
        }
        break;
        case 21:
        {
            panda$core$Object* $tmp385 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp387 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp385))->name, &$s386);
            if ($tmp387.value) {
            {
                panda$core$Object* $tmp388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp389 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp388));
                panda$core$String* $tmp391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp389, &$s390);
                return $tmp391;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp393 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
            cl392 = $tmp393;
            panda$core$Bit $tmp394 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl392);
            if ($tmp394.value) {
            {
                panda$core$String* $tmp397 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s396, $tmp397);
                panda$core$String* $tmp400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp398, &$s399);
                name395 = $tmp400;
                org$pandalanguage$pandac$ClassDecl* $tmp402 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_t);
                cl401 = $tmp402;
                PANDA_ASSERT(((panda$core$Bit) { cl401 != NULL }).value);
                panda$core$Bit $tmp403 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl401);
                panda$core$Bit $tmp404 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp403);
                if ($tmp404.value) {
                {
                    panda$core$String* $tmp406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name395, &$s405);
                    return $tmp406;
                }
                }
                return name395;
            }
            }
            panda$core$Object* $tmp407 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp408 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp407));
            return $tmp408;
        }
        break;
        case 22:
        {
            panda$core$String* $tmp409 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t->parameter->bound);
            return $tmp409;
        }
        break;
        case 24:
        case 25:
        {
            panda$core$MutableString* $tmp411 = (panda$core$MutableString*) malloc(40);
            $tmp411->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp411->refCount.value = 1;
            panda$core$Int64 $tmp413 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp414 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp413, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp415 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, $tmp414);
            panda$core$String* $tmp416 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp415));
            panda$core$MutableString$init$panda$core$String($tmp411, $tmp416);
            result410 = $tmp411;
            panda$core$MutableString$append$panda$core$String(result410, &$s417);
            panda$core$Int64 $tmp419 = panda$collections$Array$get_count$R$panda$core$Int64(p_t->subtypes);
            panda$core$Int64 $tmp420 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp419, ((panda$core$Int64) { 1 }));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp418, ((panda$core$Int64) { 0 }), $tmp420, ((panda$core$Bit) { false }));
            int64_t $tmp422 = $tmp418.min.value;
            panda$core$Int64 i421 = { $tmp422 };
            int64_t $tmp424 = $tmp418.max.value;
            bool $tmp425 = $tmp418.inclusive.value;
            if ($tmp425) goto $l432; else goto $l433;
            $l432:;
            if ($tmp422 <= $tmp424) goto $l426; else goto $l428;
            $l433:;
            if ($tmp422 < $tmp424) goto $l426; else goto $l428;
            $l426:;
            {
                panda$core$Bit $tmp434 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i421, ((panda$core$Int64) { 0 }));
                if ($tmp434.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result410, &$s435);
                }
                }
                panda$core$Object* $tmp436 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, i421);
                panda$core$String* $tmp437 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp436));
                panda$core$MutableString$append$panda$core$String(result410, $tmp437);
            }
            $l429:;
            int64_t $tmp439 = $tmp424 - i421.value;
            if ($tmp425) goto $l440; else goto $l441;
            $l440:;
            if ($tmp439 >= 1) goto $l438; else goto $l428;
            $l441:;
            if ($tmp439 > 1) goto $l438; else goto $l428;
            $l438:;
            i421.value += 1;
            goto $l426;
            $l428:;
            panda$core$MutableString$append$panda$core$String(result410, &$s444);
            panda$core$String* $tmp445 = panda$core$MutableString$finish$R$panda$core$String(result410);
            return $tmp445;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp446 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp446.value) {
    {
        panda$core$Object* $tmp447 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp448 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp447));
        return $tmp448;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, p_t);
    panda$core$String* $tmp450 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s449, $tmp450);
    panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp451, &$s452);
    return $tmp453;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp454 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_t);
    panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp454, &$s455);
    return $tmp456;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType457;
    panda$core$MutableString* result459;
    panda$core$Range$LTpanda$core$Int64$GT $tmp476;
    org$pandalanguage$pandac$Type* $tmp458 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedType457 = $tmp458;
    panda$core$MutableString* $tmp460 = (panda$core$MutableString*) malloc(40);
    $tmp460->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp460->refCount.value = 1;
    panda$core$MutableString$init($tmp460);
    result459 = $tmp460;
    panda$core$Int64 $tmp462 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType457->subtypes);
    panda$core$Int64 $tmp463 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp462, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp464 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType457->subtypes, $tmp463);
    panda$core$String* $tmp465 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp464));
    panda$core$MutableString$append$panda$core$String(result459, $tmp465);
    panda$core$MutableString$append$panda$core$String(result459, &$s466);
    panda$core$Bit $tmp467 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp467.value);
    panda$core$String* $tmp469 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s468, $tmp469);
    panda$core$String* $tmp472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp470, &$s471);
    panda$core$MutableString$append$panda$core$String(result459, $tmp472);
    panda$core$Bit $tmp473 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, p_m->owner);
    if ($tmp473.value) {
    {
        panda$core$MutableString$append$panda$core$String(result459, &$s474);
    }
    }
    panda$core$MutableString$append$panda$core$String(result459, &$s475);
    panda$core$Int64 $tmp477 = panda$collections$Array$get_count$R$panda$core$Int64(inheritedType457->subtypes);
    panda$core$Int64 $tmp478 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp477, ((panda$core$Int64) { 1 }));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp476, ((panda$core$Int64) { 0 }), $tmp478, ((panda$core$Bit) { false }));
    int64_t $tmp480 = $tmp476.min.value;
    panda$core$Int64 i479 = { $tmp480 };
    int64_t $tmp482 = $tmp476.max.value;
    bool $tmp483 = $tmp476.inclusive.value;
    if ($tmp483) goto $l490; else goto $l491;
    $l490:;
    if ($tmp480 <= $tmp482) goto $l484; else goto $l486;
    $l491:;
    if ($tmp480 < $tmp482) goto $l484; else goto $l486;
    $l484:;
    {
        panda$core$MutableString$append$panda$core$String(result459, &$s492);
        panda$core$Object* $tmp493 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedType457->subtypes, i479);
        panda$core$String* $tmp494 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp493));
        panda$core$MutableString$append$panda$core$String(result459, $tmp494);
    }
    $l487:;
    int64_t $tmp496 = $tmp482 - i479.value;
    if ($tmp483) goto $l497; else goto $l498;
    $l497:;
    if ($tmp496 >= 1) goto $l495; else goto $l486;
    $l498:;
    if ($tmp496 > 1) goto $l495; else goto $l486;
    $l495:;
    i479.value += 1;
    goto $l484;
    $l486:;
    panda$core$MutableString$append$panda$core$String(result459, &$s501);
    panda$core$String* $tmp502 = panda$core$MutableString$finish$R$panda$core$String(result459);
    return $tmp502;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp503.value);
    panda$core$Object* $tmp504 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(self, ((org$pandalanguage$pandac$Type*) $tmp504));
    panda$core$Object* $tmp506 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp507 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp506));
    panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s505, $tmp507);
    panda$core$String* $tmp510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, &$s509);
    return $tmp510;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces511;
    panda$core$String* previous514;
    panda$collections$Iterator* intfType$Iter516;
    org$pandalanguage$pandac$Type* intfType528;
    org$pandalanguage$pandac$ClassDecl* intf533;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC535;
    panda$collections$ListView* methods537;
    panda$core$String* name539;
    panda$core$String* t549;
    panda$core$MutableString* result563;
    panda$core$String* separator603;
    panda$collections$Iterator* m$Iter605;
    org$pandalanguage$pandac$MethodDecl* m617;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry625;
    org$pandalanguage$pandac$Type* $tmp512 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp513 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp512);
    interfaces511 = $tmp513;
    previous514 = &$s515;
    {
        ITable* $tmp517 = ((panda$collections$Iterable*) interfaces511)->$class->itable;
        while ($tmp517->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp517 = $tmp517->next;
        }
        $fn519 $tmp518 = $tmp517->methods[0];
        panda$collections$Iterator* $tmp520 = $tmp518(((panda$collections$Iterable*) interfaces511));
        intfType$Iter516 = $tmp520;
        $l521:;
        ITable* $tmp523 = intfType$Iter516->$class->itable;
        while ($tmp523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp523 = $tmp523->next;
        }
        $fn525 $tmp524 = $tmp523->methods[0];
        panda$core$Bit $tmp526 = $tmp524(intfType$Iter516);
        panda$core$Bit $tmp527 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp526);
        if (!$tmp527.value) goto $l522;
        {
            ITable* $tmp529 = intfType$Iter516->$class->itable;
            while ($tmp529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp529 = $tmp529->next;
            }
            $fn531 $tmp530 = $tmp529->methods[1];
            panda$core$Object* $tmp532 = $tmp530(intfType$Iter516);
            intfType528 = ((org$pandalanguage$pandac$Type*) $tmp532);
            org$pandalanguage$pandac$ClassDecl* $tmp534 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType528);
            intf533 = $tmp534;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp536 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf533);
            intfCC535 = $tmp536;
            panda$collections$ListView* $tmp538 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType528);
            methods537 = $tmp538;
            panda$core$String* $tmp541 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s540, $tmp541);
            panda$core$String* $tmp544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp542, &$s543);
            panda$core$String* $tmp545 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf533)->name);
            panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, $tmp545);
            panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp546, &$s547);
            name539 = $tmp548;
            org$pandalanguage$pandac$Type* $tmp551 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp552 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp551);
            panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s550, $tmp552);
            panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s554);
            ITable* $tmp556 = ((panda$collections$CollectionView*) methods537)->$class->itable;
            while ($tmp556->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp556 = $tmp556->next;
            }
            $fn558 $tmp557 = $tmp556->methods[0];
            panda$core$Int64 $tmp559 = $tmp557(((panda$collections$CollectionView*) methods537));
            panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp555, ((panda$core$Object*) wrap_panda$core$Int64($tmp559)));
            panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s561);
            t549 = $tmp562;
            panda$core$MutableString* $tmp564 = (panda$core$MutableString*) malloc(40);
            $tmp564->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp564->refCount.value = 1;
            panda$core$String* $tmp567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s566, name539);
            panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, &$s568);
            panda$core$String* $tmp570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp569, t549);
            panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp570, &$s571);
            org$pandalanguage$pandac$Type* $tmp573 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp574 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp573);
            panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp572, $tmp574);
            panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s576);
            panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s578, intfCC535->type);
            panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s580);
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp581, intfCC535->name);
            panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s583);
            org$pandalanguage$pandac$Type* $tmp585 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp586 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp585);
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, $tmp586);
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp587, &$s588);
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp577, $tmp589);
            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s591, previous514);
            panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp592, &$s593);
            ITable* $tmp595 = ((panda$collections$CollectionView*) methods537)->$class->itable;
            while ($tmp595->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp595 = $tmp595->next;
            }
            $fn597 $tmp596 = $tmp595->methods[0];
            panda$core$Int64 $tmp598 = $tmp596(((panda$collections$CollectionView*) methods537));
            panda$core$String* $tmp599 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp594, ((panda$core$Object*) wrap_panda$core$Int64($tmp598)));
            panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s600);
            panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp590, $tmp601);
            panda$core$MutableString$init$panda$core$String($tmp564, $tmp602);
            result563 = $tmp564;
            separator603 = &$s604;
            {
                ITable* $tmp606 = ((panda$collections$Iterable*) methods537)->$class->itable;
                while ($tmp606->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp606 = $tmp606->next;
                }
                $fn608 $tmp607 = $tmp606->methods[0];
                panda$collections$Iterator* $tmp609 = $tmp607(((panda$collections$Iterable*) methods537));
                m$Iter605 = $tmp609;
                $l610:;
                ITable* $tmp612 = m$Iter605->$class->itable;
                while ($tmp612->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp612 = $tmp612->next;
                }
                $fn614 $tmp613 = $tmp612->methods[0];
                panda$core$Bit $tmp615 = $tmp613(m$Iter605);
                panda$core$Bit $tmp616 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp615);
                if (!$tmp616.value) goto $l611;
                {
                    ITable* $tmp618 = m$Iter605->$class->itable;
                    while ($tmp618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp618 = $tmp618->next;
                    }
                    $fn620 $tmp619 = $tmp618->methods[1];
                    panda$core$Object* $tmp621 = $tmp619(m$Iter605);
                    m617 = ((org$pandalanguage$pandac$MethodDecl*) $tmp621);
                    panda$core$MutableString$append$panda$core$String(result563, separator603);
                    separator603 = &$s622;
                    panda$core$Bit $tmp623 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m617->annotations);
                    if ($tmp623.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result563, &$s624);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp626 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m617);
                        entry625 = $tmp626;
                        panda$core$String* $tmp628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s627, ((panda$core$String*) entry625->second));
                        panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp628, &$s629);
                        panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, ((panda$core$String*) entry625->first));
                        panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, &$s632);
                        panda$core$MutableString$append$panda$core$String(result563, $tmp633);
                    }
                    }
                }
                goto $l610;
                $l611:;
            }
            panda$core$MutableString$append$panda$core$String(result563, &$s634);
            panda$core$String* $tmp635 = panda$core$MutableString$finish$R$panda$core$String(result563);
            (($fn636) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp635);
            panda$core$String* $tmp638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s637, t549);
            panda$core$String* $tmp640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp638, &$s639);
            panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp640, name539);
            panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp641, &$s642);
            previous514 = $tmp643;
        }
        goto $l521;
        $l522:;
    }
    return previous514;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer644;
    panda$io$IndentedOutputStream* out647;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found650;
    panda$core$Int64 oldVarCount658;
    org$pandalanguage$pandac$Type* effectiveReturnType659;
    panda$core$String* resultName663;
    panda$core$MutableString* resultType667;
    panda$core$String* self_t684;
    panda$core$Range$LTpanda$core$Int64$GT $tmp692;
    panda$core$String* pType707;
    panda$collections$Array* casts728;
    panda$core$Range$LTpanda$core$Int64$GT $tmp731;
    panda$core$String* p746;
    panda$core$String* returnValue763;
    panda$core$Range$LTpanda$core$Int64$GT $tmp792;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result840;
    panda$io$MemoryOutputStream* $tmp645 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp645->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp645->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp645);
    outBuffer644 = $tmp645;
    panda$io$IndentedOutputStream* $tmp648 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp648->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp648->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp648, ((panda$io$OutputStream*) outBuffer644));
    out647 = $tmp648;
    panda$core$Object* $tmp651 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->methodShims, ((panda$core$Object*) p_raw));
    found650 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp651);
    if (((panda$core$Bit) { found650 != NULL }).value) {
    {
        return found650;
    }
    }
    panda$core$Bit $tmp652 = org$pandalanguage$pandac$Type$isMethod$R$panda$core$Bit(p_effective);
    PANDA_ASSERT($tmp652.value);
    panda$core$Int64 $tmp653 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp654 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Int64 $tmp655 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp654, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp653, $tmp655);
    PANDA_ASSERT($tmp656.value);
    panda$core$Bit $tmp657 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_raw);
    PANDA_ASSERT($tmp657.value);
    oldVarCount658 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp660 = panda$collections$Array$get_count$R$panda$core$Int64(p_effective->subtypes);
    panda$core$Int64 $tmp661 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp660, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp662 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, $tmp661);
    effectiveReturnType659 = ((org$pandalanguage$pandac$Type*) $tmp662);
    panda$core$String* $tmp664 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp664, &$s665);
    resultName663 = $tmp666;
    panda$core$MutableString* $tmp668 = (panda$core$MutableString*) malloc(40);
    $tmp668->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp668->refCount.value = 1;
    panda$core$String* $tmp670 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType659);
    panda$core$MutableString$init$panda$core$String($tmp668, $tmp670);
    resultType667 = $tmp668;
    (($fn672) ((panda$io$OutputStream*) out647)->$class->vtable[16])(((panda$io$OutputStream*) out647), &$s671);
    panda$core$Bit $tmp673 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_raw->owner);
    if ($tmp673.value) {
    {
        (($fn675) ((panda$io$OutputStream*) out647)->$class->vtable[16])(((panda$io$OutputStream*) out647), &$s674);
    }
    }
    panda$core$String* $tmp677 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s676, ((panda$core$Object*) resultType667));
    panda$core$String* $tmp679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp677, &$s678);
    panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp679, resultName663);
    panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, &$s681);
    (($fn683) ((panda$io$OutputStream*) out647)->$class->vtable[16])(((panda$io$OutputStream*) out647), $tmp682);
    panda$core$String* $tmp685 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    self_t684 = $tmp685;
    panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s686, self_t684);
    panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp687, &$s688);
    (($fn690) ((panda$io$OutputStream*) out647)->$class->vtable[16])(((panda$io$OutputStream*) out647), $tmp689);
    panda$core$MutableString$append$panda$core$String(resultType667, &$s691);
    panda$core$MutableString$append$panda$core$String(resultType667, self_t684);
    panda$core$Int64 $tmp693 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp692, ((panda$core$Int64) { 0 }), $tmp693, ((panda$core$Bit) { false }));
    int64_t $tmp695 = $tmp692.min.value;
    panda$core$Int64 i694 = { $tmp695 };
    int64_t $tmp697 = $tmp692.max.value;
    bool $tmp698 = $tmp692.inclusive.value;
    if ($tmp698) goto $l705; else goto $l706;
    $l705:;
    if ($tmp695 <= $tmp697) goto $l699; else goto $l701;
    $l706:;
    if ($tmp695 < $tmp697) goto $l699; else goto $l701;
    $l699:;
    {
        panda$core$Object* $tmp708 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i694);
        panda$core$String* $tmp709 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp708));
        pType707 = $tmp709;
        panda$core$MutableString$append$panda$core$String(resultType667, &$s710);
        panda$core$MutableString$append$panda$core$String(resultType667, pType707);
        panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s711, pType707);
        panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, &$s713);
        panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp714, ((panda$core$Object*) wrap_panda$core$Int64(i694)));
        panda$core$String* $tmp717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp715, &$s716);
        (($fn718) ((panda$io$OutputStream*) out647)->$class->vtable[16])(((panda$io$OutputStream*) out647), $tmp717);
    }
    $l702:;
    int64_t $tmp720 = $tmp697 - i694.value;
    if ($tmp698) goto $l721; else goto $l722;
    $l721:;
    if ($tmp720 >= 1) goto $l719; else goto $l701;
    $l722:;
    if ($tmp720 > 1) goto $l719; else goto $l701;
    $l719:;
    i694.value += 1;
    goto $l699;
    $l701:;
    (($fn726) ((panda$io$OutputStream*) out647)->$class->vtable[19])(((panda$io$OutputStream*) out647), &$s725);
    panda$core$MutableString$append$panda$core$String(resultType667, &$s727);
    panda$collections$Array* $tmp729 = (panda$collections$Array*) malloc(40);
    $tmp729->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp729->refCount.value = 1;
    panda$collections$Array$init($tmp729);
    casts728 = $tmp729;
    panda$core$Int64 $tmp732 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp731, ((panda$core$Int64) { 0 }), $tmp732, ((panda$core$Bit) { false }));
    int64_t $tmp734 = $tmp731.min.value;
    panda$core$Int64 i733 = { $tmp734 };
    int64_t $tmp736 = $tmp731.max.value;
    bool $tmp737 = $tmp731.inclusive.value;
    if ($tmp737) goto $l744; else goto $l745;
    $l744:;
    if ($tmp734 <= $tmp736) goto $l738; else goto $l740;
    $l745:;
    if ($tmp734 < $tmp736) goto $l738; else goto $l740;
    $l738:;
    {
        panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s747, ((panda$core$Object*) wrap_panda$core$Int64(i733)));
        panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp748, &$s749);
        p746 = $tmp750;
        panda$core$Object* $tmp751 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i733);
        panda$core$Object* $tmp752 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i733);
        panda$core$Bit $tmp753 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp751)->type, ((org$pandalanguage$pandac$Type*) $tmp752));
        if ($tmp753.value) {
        {
            panda$core$Object* $tmp754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_effective->subtypes, i733);
            panda$core$Object* $tmp755 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i733);
            panda$core$String* $tmp756 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p746, ((org$pandalanguage$pandac$Type*) $tmp754), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp755)->type, out647);
            panda$collections$Array$add$panda$collections$Array$T(casts728, ((panda$core$Object*) $tmp756));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts728, ((panda$core$Object*) p746));
        }
        }
    }
    $l741:;
    int64_t $tmp758 = $tmp736 - i733.value;
    if ($tmp737) goto $l759; else goto $l760;
    $l759:;
    if ($tmp758 >= 1) goto $l757; else goto $l740;
    $l760:;
    if ($tmp758 > 1) goto $l757; else goto $l740;
    $l757:;
    i733.value += 1;
    goto $l738;
    $l740:;
    org$pandalanguage$pandac$Type* $tmp764 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp765 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp764);
    if ($tmp765.value) {
    {
        panda$core$String* $tmp766 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue763 = $tmp766;
        panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s767, returnValue763);
        panda$core$String* $tmp770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp768, &$s769);
        (($fn771) ((panda$io$OutputStream*) out647)->$class->vtable[16])(((panda$io$OutputStream*) out647), $tmp770);
    }
    }
    else {
    {
        returnValue763 = &$s772;
    }
    }
    panda$core$String* $tmp774 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s773, $tmp774);
    panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp775, &$s776);
    panda$core$String* $tmp778 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_raw->returnType);
    panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, $tmp778);
    panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp779, &$s780);
    panda$core$String* $tmp782 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_raw);
    panda$core$String* $tmp783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp781, $tmp782);
    panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp783, &$s784);
    panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s786, self_t684);
    panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, &$s788);
    panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp785, $tmp789);
    (($fn791) ((panda$io$OutputStream*) out647)->$class->vtable[16])(((panda$io$OutputStream*) out647), $tmp790);
    panda$core$Int64 $tmp793 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp792, ((panda$core$Int64) { 0 }), $tmp793, ((panda$core$Bit) { false }));
    int64_t $tmp795 = $tmp792.min.value;
    panda$core$Int64 i794 = { $tmp795 };
    int64_t $tmp797 = $tmp792.max.value;
    bool $tmp798 = $tmp792.inclusive.value;
    if ($tmp798) goto $l805; else goto $l806;
    $l805:;
    if ($tmp795 <= $tmp797) goto $l799; else goto $l801;
    $l806:;
    if ($tmp795 < $tmp797) goto $l799; else goto $l801;
    $l799:;
    {
        panda$core$Object* $tmp808 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i794);
        panda$core$String* $tmp809 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp808)->type);
        panda$core$String* $tmp810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s807, $tmp809);
        panda$core$String* $tmp812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp810, &$s811);
        panda$core$Object* $tmp813 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts728, i794);
        panda$core$String* $tmp814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp812, ((panda$core$String*) $tmp813));
        panda$core$String* $tmp816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp814, &$s815);
        (($fn817) ((panda$io$OutputStream*) out647)->$class->vtable[16])(((panda$io$OutputStream*) out647), $tmp816);
    }
    $l802:;
    int64_t $tmp819 = $tmp797 - i794.value;
    if ($tmp798) goto $l820; else goto $l821;
    $l820:;
    if ($tmp819 >= 1) goto $l818; else goto $l801;
    $l821:;
    if ($tmp819 > 1) goto $l818; else goto $l801;
    $l818:;
    i794.value += 1;
    goto $l799;
    $l801:;
    (($fn825) ((panda$io$OutputStream*) out647)->$class->vtable[19])(((panda$io$OutputStream*) out647), &$s824);
    org$pandalanguage$pandac$Type* $tmp826 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp827 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_raw->returnType, $tmp826);
    if ($tmp827.value) {
    {
        panda$core$String* $tmp828 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, effectiveReturnType659);
        panda$core$String* $tmp830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp828, &$s829);
        panda$core$String* $tmp831 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, returnValue763, p_raw->returnType, effectiveReturnType659, out647);
        panda$core$String* $tmp832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp830, $tmp831);
        returnValue763 = $tmp832;
    }
    }
    panda$core$String* $tmp834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s833, returnValue763);
    panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp834, &$s835);
    (($fn837) ((panda$io$OutputStream*) out647)->$class->vtable[19])(((panda$io$OutputStream*) out647), $tmp836);
    (($fn839) ((panda$io$OutputStream*) out647)->$class->vtable[19])(((panda$io$OutputStream*) out647), &$s838);
    self->varCount = oldVarCount658;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp841 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp841->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp841->refCount.value = 1;
    panda$core$String* $tmp843 = panda$core$MutableString$finish$R$panda$core$String(resultType667);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp841, resultName663, $tmp843);
    result840 = $tmp841;
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result840));
    panda$core$String* $tmp845 = (($fn844) outBuffer644->$class->vtable[21])(outBuffer644);
    (($fn846) p_rawOut->$class->vtable[16])(p_rawOut, $tmp845);
    return result840;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 oldVarCount848;
    panda$core$String* result849;
    panda$core$String* selfType855;
    org$pandalanguage$pandac$Type* actualMethodType878;
    org$pandalanguage$pandac$Type* inheritedMethodType880;
    panda$core$Range$LTpanda$core$Int64$GT $tmp882;
    panda$collections$Array* parameters922;
    panda$core$Range$LTpanda$core$Int64$GT $tmp925;
    panda$collections$Array* children952;
    org$pandalanguage$pandac$Position $tmp957;
    panda$core$String* unwrapped959;
    org$pandalanguage$pandac$Position $tmp962;
    panda$core$String* returnValue965;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1000;
    panda$core$Bit $tmp847 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(p_m);
    PANDA_ASSERT($tmp847.value);
    oldVarCount848 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp851 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s850, $tmp851);
    panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp852, &$s853);
    result849 = $tmp854;
    panda$core$String* $tmp857 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s856, $tmp857);
    panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp858, &$s859);
    selfType855 = $tmp860;
    (($fn862) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s861);
    panda$core$Bit $tmp863 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp863.value) {
    {
        (($fn865) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s864);
    }
    }
    panda$core$String* $tmp867 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s866, $tmp867);
    panda$core$String* $tmp870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp868, &$s869);
    panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp870, result849);
    panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp871, &$s872);
    panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp873, selfType855);
    panda$core$String* $tmp876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp874, &$s875);
    (($fn877) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp876);
    org$pandalanguage$pandac$Type* $tmp879 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    actualMethodType878 = $tmp879;
    org$pandalanguage$pandac$Type* $tmp881 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inheritedMethodType880 = $tmp881;
    panda$core$Int64 $tmp883 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp882, ((panda$core$Int64) { 0 }), $tmp883, ((panda$core$Bit) { false }));
    int64_t $tmp885 = $tmp882.min.value;
    panda$core$Int64 i884 = { $tmp885 };
    int64_t $tmp887 = $tmp882.max.value;
    bool $tmp888 = $tmp882.inclusive.value;
    if ($tmp888) goto $l895; else goto $l896;
    $l895:;
    if ($tmp885 <= $tmp887) goto $l889; else goto $l891;
    $l896:;
    if ($tmp885 < $tmp887) goto $l889; else goto $l891;
    $l889:;
    {
        panda$core$Object* $tmp898 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType880->subtypes, i884);
        panda$core$String* $tmp899 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp898));
        panda$core$String* $tmp900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s897, $tmp899);
        panda$core$String* $tmp902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp900, &$s901);
        panda$core$Object* $tmp903 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i884);
        panda$core$String* $tmp904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp902, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp903)->name);
        panda$core$String* $tmp906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp904, &$s905);
        (($fn907) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp906);
    }
    $l892:;
    int64_t $tmp909 = $tmp887 - i884.value;
    if ($tmp888) goto $l910; else goto $l911;
    $l910:;
    if ($tmp909 >= 1) goto $l908; else goto $l891;
    $l911:;
    if ($tmp909 > 1) goto $l908; else goto $l891;
    $l908:;
    i884.value += 1;
    goto $l889;
    $l891:;
    (($fn915) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s914);
    panda$core$Int64 $tmp916 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp916;
    panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s917, selfType855);
    panda$core$String* $tmp920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp918, &$s919);
    (($fn921) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp920);
    panda$collections$Array* $tmp923 = (panda$collections$Array*) malloc(40);
    $tmp923->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp923->refCount.value = 1;
    panda$collections$Array$init($tmp923);
    parameters922 = $tmp923;
    panda$core$Int64 $tmp926 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp925, ((panda$core$Int64) { 0 }), $tmp926, ((panda$core$Bit) { false }));
    int64_t $tmp928 = $tmp925.min.value;
    panda$core$Int64 i927 = { $tmp928 };
    int64_t $tmp930 = $tmp925.max.value;
    bool $tmp931 = $tmp925.inclusive.value;
    if ($tmp931) goto $l938; else goto $l939;
    $l938:;
    if ($tmp928 <= $tmp930) goto $l932; else goto $l934;
    $l939:;
    if ($tmp928 < $tmp930) goto $l932; else goto $l934;
    $l932:;
    {
        panda$core$Object* $tmp941 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i927);
        panda$core$String* $tmp942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s940, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp941)->name);
        panda$core$Object* $tmp943 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inheritedMethodType880->subtypes, i927);
        panda$core$Object* $tmp944 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType878->subtypes, i927);
        panda$core$String* $tmp945 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp942, ((org$pandalanguage$pandac$Type*) $tmp943), ((org$pandalanguage$pandac$Type*) $tmp944), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters922, ((panda$core$Object*) $tmp945));
    }
    $l935:;
    int64_t $tmp947 = $tmp930 - i927.value;
    if ($tmp931) goto $l948; else goto $l949;
    $l948:;
    if ($tmp947 >= 1) goto $l946; else goto $l934;
    $l949:;
    if ($tmp947 > 1) goto $l946; else goto $l934;
    $l946:;
    i927.value += 1;
    goto $l932;
    $l934:;
    panda$collections$Array* $tmp953 = (panda$collections$Array*) malloc(40);
    $tmp953->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp953->refCount.value = 1;
    panda$collections$Array$init($tmp953);
    children952 = $tmp953;
    org$pandalanguage$pandac$IRNode* $tmp955 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp955->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp955->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp957);
    org$pandalanguage$pandac$Type* $tmp958 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type($tmp955, ((panda$core$Int64) { 1025 }), $tmp957, $tmp958);
    panda$collections$Array$add$panda$collections$Array$T(children952, ((panda$core$Object*) $tmp955));
    org$pandalanguage$pandac$IRNode* $tmp960 = (org$pandalanguage$pandac$IRNode*) malloc(72);
    $tmp960->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp960->refCount.value = 1;
    org$pandalanguage$pandac$Position$init(&$tmp962);
    org$pandalanguage$pandac$Type* $tmp963 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp960, ((panda$core$Int64) { 1009 }), $tmp962, $tmp963, ((panda$collections$ListView*) children952));
    panda$core$String* $tmp964 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp960, p_out);
    unwrapped959 = $tmp964;
    org$pandalanguage$pandac$Type* $tmp966 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp967 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp966);
    if ($tmp967.value) {
    {
        panda$core$String* $tmp968 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        returnValue965 = $tmp968;
        panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s969, returnValue965);
        panda$core$String* $tmp972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp970, &$s971);
        (($fn973) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp972);
        panda$core$String* $tmp975 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s974, $tmp975);
        panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp976, &$s977);
        panda$core$String* $tmp979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, returnValue965);
        panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp979, &$s980);
        returnValue965 = $tmp981;
    }
    }
    else {
    {
        returnValue965 = &$s982;
    }
    }
    panda$core$String* $tmp984 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s983, $tmp984);
    panda$core$String* $tmp987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp985, &$s986);
    panda$core$String* $tmp988 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp987, $tmp988);
    panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp989, &$s990);
    panda$core$String* $tmp992 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp991, $tmp992);
    panda$core$String* $tmp995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp993, &$s994);
    panda$core$String* $tmp996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp995, unwrapped959);
    panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp996, &$s997);
    (($fn999) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp998);
    panda$core$Int64 $tmp1001 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1000, ((panda$core$Int64) { 0 }), $tmp1001, ((panda$core$Bit) { false }));
    int64_t $tmp1003 = $tmp1000.min.value;
    panda$core$Int64 i1002 = { $tmp1003 };
    int64_t $tmp1005 = $tmp1000.max.value;
    bool $tmp1006 = $tmp1000.inclusive.value;
    if ($tmp1006) goto $l1013; else goto $l1014;
    $l1013:;
    if ($tmp1003 <= $tmp1005) goto $l1007; else goto $l1009;
    $l1014:;
    if ($tmp1003 < $tmp1005) goto $l1007; else goto $l1009;
    $l1007:;
    {
        panda$core$Object* $tmp1016 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType878->subtypes, i1002);
        panda$core$String* $tmp1017 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1016));
        panda$core$String* $tmp1018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1015, $tmp1017);
        panda$core$String* $tmp1020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1018, &$s1019);
        panda$core$Object* $tmp1021 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters922, i1002);
        panda$core$String* $tmp1022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1020, ((panda$core$String*) $tmp1021));
        panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1022, &$s1023);
        (($fn1025) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1024);
    }
    $l1010:;
    int64_t $tmp1027 = $tmp1005 - i1002.value;
    if ($tmp1006) goto $l1028; else goto $l1029;
    $l1028:;
    if ($tmp1027 >= 1) goto $l1026; else goto $l1009;
    $l1029:;
    if ($tmp1027 > 1) goto $l1026; else goto $l1009;
    $l1026:;
    i1002.value += 1;
    goto $l1007;
    $l1009:;
    (($fn1033) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1032);
    panda$core$String* $tmp1035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1034, returnValue965);
    panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1035, &$s1036);
    (($fn1038) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1037);
    panda$core$Int64 $tmp1039 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1039;
    (($fn1041) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1040);
    self->varCount = oldVarCount848;
    return result849;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1042;
    panda$core$String* previous1045;
    panda$collections$Iterator* intfType$Iter1047;
    org$pandalanguage$pandac$Type* intfType1059;
    org$pandalanguage$pandac$ClassDecl* intf1064;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1066;
    panda$collections$ListView* methods1068;
    panda$core$String* name1070;
    panda$core$String* t1080;
    panda$core$MutableString* result1094;
    panda$core$String* separator1134;
    panda$collections$Iterator* m$Iter1136;
    org$pandalanguage$pandac$MethodDecl* m1148;
    panda$core$String* shim1156;
    org$pandalanguage$pandac$Type* $tmp1043 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    panda$collections$Set* $tmp1044 = org$pandalanguage$pandac$Compiler$allInterfaces$org$pandalanguage$pandac$Type$R$panda$collections$Set$LTorg$pandalanguage$pandac$Type$GT(self->compiler, $tmp1043);
    interfaces1042 = $tmp1044;
    previous1045 = &$s1046;
    {
        ITable* $tmp1048 = ((panda$collections$Iterable*) interfaces1042)->$class->itable;
        while ($tmp1048->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1048 = $tmp1048->next;
        }
        $fn1050 $tmp1049 = $tmp1048->methods[0];
        panda$collections$Iterator* $tmp1051 = $tmp1049(((panda$collections$Iterable*) interfaces1042));
        intfType$Iter1047 = $tmp1051;
        $l1052:;
        ITable* $tmp1054 = intfType$Iter1047->$class->itable;
        while ($tmp1054->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1054 = $tmp1054->next;
        }
        $fn1056 $tmp1055 = $tmp1054->methods[0];
        panda$core$Bit $tmp1057 = $tmp1055(intfType$Iter1047);
        panda$core$Bit $tmp1058 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1057);
        if (!$tmp1058.value) goto $l1053;
        {
            ITable* $tmp1060 = intfType$Iter1047->$class->itable;
            while ($tmp1060->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1060 = $tmp1060->next;
            }
            $fn1062 $tmp1061 = $tmp1060->methods[1];
            panda$core$Object* $tmp1063 = $tmp1061(intfType$Iter1047);
            intfType1059 = ((org$pandalanguage$pandac$Type*) $tmp1063);
            org$pandalanguage$pandac$ClassDecl* $tmp1065 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, intfType1059);
            intf1064 = $tmp1065;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1067 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, intf1064);
            intfCC1066 = $tmp1067;
            panda$collections$ListView* $tmp1069 = org$pandalanguage$pandac$Compiler$interfaceMethods$org$pandalanguage$pandac$ClassDecl$org$pandalanguage$pandac$Type$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl, intfType1059);
            methods1068 = $tmp1069;
            panda$core$String* $tmp1072 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1071, $tmp1072);
            panda$core$String* $tmp1075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1073, &$s1074);
            panda$core$String* $tmp1076 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) intf1064)->name);
            panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1075, $tmp1076);
            panda$core$String* $tmp1079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1077, &$s1078);
            name1070 = $tmp1079;
            org$pandalanguage$pandac$Type* $tmp1082 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1083 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1082);
            panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1081, $tmp1083);
            panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1084, &$s1085);
            ITable* $tmp1087 = ((panda$collections$CollectionView*) methods1068)->$class->itable;
            while ($tmp1087->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1087 = $tmp1087->next;
            }
            $fn1089 $tmp1088 = $tmp1087->methods[0];
            panda$core$Int64 $tmp1090 = $tmp1088(((panda$collections$CollectionView*) methods1068));
            panda$core$String* $tmp1091 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1086, ((panda$core$Object*) wrap_panda$core$Int64($tmp1090)));
            panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1092);
            t1080 = $tmp1093;
            panda$core$MutableString* $tmp1095 = (panda$core$MutableString*) malloc(40);
            $tmp1095->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1095->refCount.value = 1;
            panda$core$String* $tmp1098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1097, name1070);
            panda$core$String* $tmp1100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1098, &$s1099);
            panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1100, t1080);
            panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, &$s1102);
            org$pandalanguage$pandac$Type* $tmp1104 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1105 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1104);
            panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1103, $tmp1105);
            panda$core$String* $tmp1108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1106, &$s1107);
            panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1109, intfCC1066->type);
            panda$core$String* $tmp1112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1110, &$s1111);
            panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1112, intfCC1066->name);
            panda$core$String* $tmp1115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1113, &$s1114);
            org$pandalanguage$pandac$Type* $tmp1116 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1117 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1116);
            panda$core$String* $tmp1118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1115, $tmp1117);
            panda$core$String* $tmp1120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1118, &$s1119);
            panda$core$String* $tmp1121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1108, $tmp1120);
            panda$core$String* $tmp1123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1122, previous1045);
            panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1123, &$s1124);
            ITable* $tmp1126 = ((panda$collections$CollectionView*) methods1068)->$class->itable;
            while ($tmp1126->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1126 = $tmp1126->next;
            }
            $fn1128 $tmp1127 = $tmp1126->methods[0];
            panda$core$Int64 $tmp1129 = $tmp1127(((panda$collections$CollectionView*) methods1068));
            panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1125, ((panda$core$Object*) wrap_panda$core$Int64($tmp1129)));
            panda$core$String* $tmp1132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1130, &$s1131);
            panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1121, $tmp1132);
            panda$core$MutableString$init$panda$core$String($tmp1095, $tmp1133);
            result1094 = $tmp1095;
            separator1134 = &$s1135;
            {
                ITable* $tmp1137 = ((panda$collections$Iterable*) methods1068)->$class->itable;
                while ($tmp1137->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1137 = $tmp1137->next;
                }
                $fn1139 $tmp1138 = $tmp1137->methods[0];
                panda$collections$Iterator* $tmp1140 = $tmp1138(((panda$collections$Iterable*) methods1068));
                m$Iter1136 = $tmp1140;
                $l1141:;
                ITable* $tmp1143 = m$Iter1136->$class->itable;
                while ($tmp1143->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1143 = $tmp1143->next;
                }
                $fn1145 $tmp1144 = $tmp1143->methods[0];
                panda$core$Bit $tmp1146 = $tmp1144(m$Iter1136);
                panda$core$Bit $tmp1147 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1146);
                if (!$tmp1147.value) goto $l1142;
                {
                    ITable* $tmp1149 = m$Iter1136->$class->itable;
                    while ($tmp1149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1149 = $tmp1149->next;
                    }
                    $fn1151 $tmp1150 = $tmp1149->methods[1];
                    panda$core$Object* $tmp1152 = $tmp1150(m$Iter1136);
                    m1148 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1152);
                    panda$core$MutableString$append$panda$core$String(result1094, separator1134);
                    separator1134 = &$s1153;
                    panda$core$Bit $tmp1154 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1148->annotations);
                    if ($tmp1154.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1094, &$s1155);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1157 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1148, self->wrapperShims);
                        shim1156 = $tmp1157;
                        panda$core$String* $tmp1159 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1148);
                        panda$core$String* $tmp1160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1158, $tmp1159);
                        panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1160, &$s1161);
                        panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1162, shim1156);
                        panda$core$String* $tmp1165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1163, &$s1164);
                        panda$core$MutableString$append$panda$core$String(result1094, $tmp1165);
                    }
                    }
                }
                goto $l1141;
                $l1142:;
            }
            panda$core$MutableString$append$panda$core$String(result1094, &$s1166);
            panda$core$String* $tmp1167 = panda$core$MutableString$finish$R$panda$core$String(result1094);
            (($fn1168) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1167);
            panda$core$String* $tmp1170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1169, t1080);
            panda$core$String* $tmp1172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1170, &$s1171);
            panda$core$String* $tmp1173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1172, name1070);
            panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1173, &$s1174);
            previous1045 = $tmp1175;
        }
        goto $l1052;
        $l1053:;
    }
    return previous1045;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1178;
    panda$core$Bit $tmp1176 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    panda$core$Bit $tmp1177 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1176);
    if ($tmp1177.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1181 = org$pandalanguage$pandac$Annotations$isExternal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1180 = $tmp1181.value;
    if (!$tmp1180) goto $l1182;
    panda$core$Bit $tmp1183 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(p_m->returnType);
    $tmp1180 = $tmp1183.value;
    $l1182:;
    panda$core$Bit $tmp1184 = { $tmp1180 };
    bool $tmp1179 = $tmp1184.value;
    if (!$tmp1179) goto $l1185;
    org$pandalanguage$pandac$ClassDecl* $tmp1186 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1187 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp1186);
    $tmp1179 = $tmp1187.value;
    $l1185:;
    panda$core$Bit $tmp1188 = { $tmp1179 };
    result1178 = $tmp1188;
    panda$core$Bit $tmp1190 = panda$core$Bit$$NOT$R$panda$core$Bit(result1178);
    bool $tmp1189 = $tmp1190.value;
    if ($tmp1189) goto $l1191;
    panda$core$Bit $tmp1193 = org$pandalanguage$pandac$Annotations$isOverride$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp1194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1193);
    bool $tmp1192 = $tmp1194.value;
    if (!$tmp1192) goto $l1195;
    panda$core$Bit $tmp1197 = org$pandalanguage$pandac$Annotations$isFinal$R$panda$core$Bit(p_m->annotations);
    bool $tmp1196 = $tmp1197.value;
    if ($tmp1196) goto $l1198;
    panda$core$Bit $tmp1199 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    $tmp1196 = $tmp1199.value;
    $l1198:;
    panda$core$Bit $tmp1200 = { $tmp1196 };
    $tmp1192 = $tmp1200.value;
    $l1195:;
    panda$core$Bit $tmp1201 = { $tmp1192 };
    $tmp1189 = $tmp1201.value;
    $l1191:;
    panda$core$Bit $tmp1202 = { $tmp1189 };
    PANDA_ASSERT($tmp1202.value);
    return result1178;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1203;
    org$pandalanguage$pandac$Type* declared1204;
    org$pandalanguage$pandac$Type* inherited1207;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1210;
    panda$core$MutableString* resultType1215;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1224;
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1205 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1206 = org$pandalanguage$pandac$Compiler$declaredTypeWithSelf$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(self->compiler, p_m, $tmp1205);
    declared1204 = $tmp1206;
    org$pandalanguage$pandac$Type* $tmp1208 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    inherited1207 = $tmp1208;
    panda$core$Bit $tmp1209 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(declared1204, inherited1207);
    if ($tmp1209.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1211 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1212 = org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(self, p_m, $tmp1211, ((panda$io$OutputStream*) self->shims));
        shim1210 = $tmp1212;
        resultName1203 = shim1210->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1213 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        resultName1203 = $tmp1213;
    }
    }
    panda$core$Bit $tmp1214 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    if ($tmp1214.value) {
    {
        panda$core$MutableString* $tmp1216 = (panda$core$MutableString*) malloc(40);
        $tmp1216->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1216->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1216, &$s1218);
        resultType1215 = $tmp1216;
        panda$core$Int64 $tmp1219 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1207->subtypes);
        panda$core$Int64 $tmp1220 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1219, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1221 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1207->subtypes, $tmp1220);
        panda$core$String* $tmp1222 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1221));
        panda$core$MutableString$append$panda$core$String(resultType1215, $tmp1222);
        panda$core$MutableString$append$panda$core$String(resultType1215, &$s1223);
        panda$core$Int64 $tmp1225 = panda$collections$Array$get_count$R$panda$core$Int64(inherited1207->subtypes);
        panda$core$Int64 $tmp1226 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1225, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1224, ((panda$core$Int64) { 0 }), $tmp1226, ((panda$core$Bit) { false }));
        int64_t $tmp1228 = $tmp1224.min.value;
        panda$core$Int64 i1227 = { $tmp1228 };
        int64_t $tmp1230 = $tmp1224.max.value;
        bool $tmp1231 = $tmp1224.inclusive.value;
        if ($tmp1231) goto $l1238; else goto $l1239;
        $l1238:;
        if ($tmp1228 <= $tmp1230) goto $l1232; else goto $l1234;
        $l1239:;
        if ($tmp1228 < $tmp1230) goto $l1232; else goto $l1234;
        $l1232:;
        {
            panda$core$MutableString$append$panda$core$String(resultType1215, &$s1240);
            panda$core$Object* $tmp1241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inherited1207->subtypes, i1227);
            panda$core$String* $tmp1242 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp1241));
            panda$core$MutableString$append$panda$core$String(resultType1215, $tmp1242);
        }
        $l1235:;
        int64_t $tmp1244 = $tmp1230 - i1227.value;
        if ($tmp1231) goto $l1245; else goto $l1246;
        $l1245:;
        if ($tmp1244 >= 1) goto $l1243; else goto $l1234;
        $l1246:;
        if ($tmp1244 > 1) goto $l1243; else goto $l1234;
        $l1243:;
        i1227.value += 1;
        goto $l1232;
        $l1234:;
        panda$core$MutableString$append$panda$core$String(resultType1215, &$s1249);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1250 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1250->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1250->refCount.value = 1;
        panda$core$String* $tmp1252 = panda$core$MutableString$finish$R$panda$core$String(resultType1215);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1250, ((panda$core$Object*) resultName1203), ((panda$core$Object*) $tmp1252));
        return $tmp1250;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1253 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1253->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1253->refCount.value = 1;
    panda$core$String* $tmp1255 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, inherited1207);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1253, ((panda$core$Object*) resultName1203), ((panda$core$Object*) $tmp1255));
    return $tmp1253;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1258;
    panda$core$String* type1260;
    panda$collections$ListView* vtable1279;
    panda$core$String* superPtr1303;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1304;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1315;
    panda$core$MutableString* code1319;
    panda$core$String* separator1362;
    panda$collections$Iterator* m$Iter1364;
    org$pandalanguage$pandac$MethodDecl* m1376;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1383;
    panda$core$Bit $tmp1256 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    panda$core$Bit $tmp1257 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1256);
    PANDA_ASSERT($tmp1257.value);
    panda$core$Object* $tmp1259 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
    result1258 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1259);
    if (((panda$core$Bit) { result1258 == NULL }).value) {
    {
        org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$ClassDecl(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1261 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1261->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1261->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1264 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
            panda$core$String* $tmp1265 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1264)->name);
            panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1263, $tmp1265);
            panda$core$String* $tmp1268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1266, &$s1267);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1261, $tmp1268, &$s1269);
            result1258 = $tmp1261;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1258));
            panda$core$String* $tmp1271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1270, result1258->name);
            panda$core$String* $tmp1273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1271, &$s1272);
            panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1273, result1258->type);
            panda$core$String* $tmp1276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, &$s1275);
            (($fn1277) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1276);
            panda$core$Object* $tmp1278 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1278);
        }
        }
        panda$collections$ListView* $tmp1280 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
        vtable1279 = $tmp1280;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1281 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1281->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1281->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1284 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
        panda$core$String* $tmp1285 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) $tmp1284)->name);
        panda$core$String* $tmp1286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1283, $tmp1285);
        panda$core$String* $tmp1288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1286, &$s1287);
        panda$core$String* $tmp1291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1289, &$s1290);
        panda$core$String* $tmp1293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1291, &$s1292);
        ITable* $tmp1295 = ((panda$collections$CollectionView*) vtable1279)->$class->itable;
        while ($tmp1295->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1295 = $tmp1295->next;
        }
        $fn1297 $tmp1296 = $tmp1295->methods[0];
        panda$core$Int64 $tmp1298 = $tmp1296(((panda$collections$CollectionView*) vtable1279));
        panda$core$String* $tmp1299 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1294, ((panda$core$Object*) wrap_panda$core$Int64($tmp1298)));
        panda$core$String* $tmp1301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1299, &$s1300);
        panda$core$String* $tmp1302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1293, $tmp1301);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1281, $tmp1288, $tmp1302);
        result1258 = $tmp1281;
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name), ((panda$core$Object*) result1258));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1305 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1306 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1305);
            superCC1304 = $tmp1306;
            panda$core$String* $tmp1308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1307, superCC1304->type);
            panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1308, &$s1309);
            panda$core$String* $tmp1311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1310, superCC1304->name);
            panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1311, &$s1312);
            superPtr1303 = $tmp1313;
        }
        }
        else {
        {
            superPtr1303 = &$s1314;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1316 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1317 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1316);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1318 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1317);
        clConstant1315 = $tmp1318;
        panda$core$MutableString* $tmp1320 = (panda$core$MutableString*) malloc(40);
        $tmp1320->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1320->refCount.value = 1;
        panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1322, result1258->name);
        panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1324);
        panda$core$MutableString$init$panda$core$String($tmp1320, $tmp1325);
        code1319 = $tmp1320;
        panda$core$Bit $tmp1326 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
        if ($tmp1326.value) {
        {
            panda$core$MutableString$append$panda$core$String(code1319, &$s1327);
        }
        }
        panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1328, result1258->type);
        panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, &$s1330);
        panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1332, clConstant1315->type);
        panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1333, &$s1334);
        panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, clConstant1315->name);
        panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1336, &$s1337);
        panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, $tmp1338);
        panda$core$String* $tmp1342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1340, &$s1341);
        panda$core$String* $tmp1344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1342, &$s1343);
        panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1344, superPtr1303);
        panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1345, &$s1346);
        panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1339, $tmp1347);
        panda$core$String* $tmp1350 = org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
        panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1349, $tmp1350);
        panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1352);
        ITable* $tmp1354 = ((panda$collections$CollectionView*) vtable1279)->$class->itable;
        while ($tmp1354->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1354 = $tmp1354->next;
        }
        $fn1356 $tmp1355 = $tmp1354->methods[0];
        panda$core$Int64 $tmp1357 = $tmp1355(((panda$collections$CollectionView*) vtable1279));
        panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1353, ((panda$core$Object*) wrap_panda$core$Int64($tmp1357)));
        panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, &$s1359);
        panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1348, $tmp1360);
        panda$core$MutableString$append$panda$core$String(code1319, $tmp1361);
        separator1362 = &$s1363;
        {
            ITable* $tmp1365 = ((panda$collections$Iterable*) vtable1279)->$class->itable;
            while ($tmp1365->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1365 = $tmp1365->next;
            }
            $fn1367 $tmp1366 = $tmp1365->methods[0];
            panda$collections$Iterator* $tmp1368 = $tmp1366(((panda$collections$Iterable*) vtable1279));
            m$Iter1364 = $tmp1368;
            $l1369:;
            ITable* $tmp1371 = m$Iter1364->$class->itable;
            while ($tmp1371->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1371 = $tmp1371->next;
            }
            $fn1373 $tmp1372 = $tmp1371->methods[0];
            panda$core$Bit $tmp1374 = $tmp1372(m$Iter1364);
            panda$core$Bit $tmp1375 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1374);
            if (!$tmp1375.value) goto $l1370;
            {
                ITable* $tmp1377 = m$Iter1364->$class->itable;
                while ($tmp1377->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1377 = $tmp1377->next;
                }
                $fn1379 $tmp1378 = $tmp1377->methods[1];
                panda$core$Object* $tmp1380 = $tmp1378(m$Iter1364);
                m1376 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1380);
                panda$core$MutableString$append$panda$core$String(code1319, separator1362);
                panda$core$Bit $tmp1381 = org$pandalanguage$pandac$Annotations$isAbstract$R$panda$core$Bit(m1376->annotations);
                if ($tmp1381.value) {
                {
                    panda$core$MutableString$append$panda$core$String(code1319, &$s1382);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1384 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(self, m1376);
                    entry1383 = $tmp1384;
                    panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1385, ((panda$core$String*) entry1383->second));
                    panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1386, &$s1387);
                    panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1388, ((panda$core$String*) entry1383->first));
                    panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, &$s1390);
                    panda$core$MutableString$append$panda$core$String(code1319, $tmp1391);
                }
                }
                separator1362 = &$s1392;
            }
            goto $l1369;
            $l1370:;
        }
        panda$core$MutableString$append$panda$core$String(code1319, &$s1393);
        panda$core$String* $tmp1394 = panda$core$MutableString$finish$R$panda$core$String(code1319);
        (($fn1395) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1394);
    }
    }
    return result1258;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1396;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1402;
    panda$core$String* type1405;
    org$pandalanguage$pandac$ClassDecl* value1417;
    panda$collections$ListView* valueVTable1420;
    panda$collections$ListView* vtable1443;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1445;
    panda$core$String* superCast1448;
    panda$core$String* itable1456;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1458;
    panda$core$MutableString* code1462;
    panda$core$String* separator1509;
    panda$core$Range$LTpanda$core$Int64$GT $tmp1511;
    org$pandalanguage$pandac$MethodDecl* m1529;
    panda$core$String* methodName1534;
    PANDA_ASSERT(p_cl->resolved.value);
    panda$core$String* $tmp1398 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1397, $tmp1398);
    panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1399, &$s1400);
    name1396 = $tmp1401;
    panda$core$Object* $tmp1403 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->classConstants, ((panda$collections$Key*) name1396));
    result1402 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1403);
    if (((panda$core$Bit) { result1402 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1404 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1404);
            type1405 = &$s1406;
            panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1407, name1396);
            panda$core$String* $tmp1410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1408, &$s1409);
            panda$core$String* $tmp1411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1410, type1405);
            panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1411, &$s1412);
            (($fn1414) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1413);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1415 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1415->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1415->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1415, name1396, type1405);
            result1402 = $tmp1415;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1418 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1419 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1418);
            value1417 = $tmp1419;
            panda$collections$ListView* $tmp1421 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, value1417);
            valueVTable1420 = $tmp1421;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1422 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1422->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1422->refCount.value = 1;
            panda$core$String* $tmp1425 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1424, $tmp1425);
            panda$core$String* $tmp1428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1426, &$s1427);
            panda$core$String* $tmp1431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1429, &$s1430);
            panda$core$String* $tmp1433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, &$s1432);
            ITable* $tmp1435 = ((panda$collections$CollectionView*) valueVTable1420)->$class->itable;
            while ($tmp1435->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1435 = $tmp1435->next;
            }
            $fn1437 $tmp1436 = $tmp1435->methods[0];
            panda$core$Int64 $tmp1438 = $tmp1436(((panda$collections$CollectionView*) valueVTable1420));
            panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1434, ((panda$core$Object*) wrap_panda$core$Int64($tmp1438)));
            panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1439, &$s1440);
            panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, $tmp1441);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1422, $tmp1428, $tmp1442);
            result1402 = $tmp1422;
            panda$collections$ListView* $tmp1444 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_cl);
            vtable1443 = $tmp1444;
            org$pandalanguage$pandac$ClassDecl* $tmp1446 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1447 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1446);
            superCC1445 = $tmp1447;
            panda$core$String* $tmp1450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1449, superCC1445->type);
            panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, &$s1451);
            panda$core$String* $tmp1453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1452, superCC1445->name);
            panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1453, &$s1454);
            superCast1448 = $tmp1455;
            panda$core$String* $tmp1457 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(self, p_cl);
            itable1456 = $tmp1457;
            org$pandalanguage$pandac$Type* $tmp1459 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1460 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp1459);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1461 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, $tmp1460);
            clConstant1458 = $tmp1461;
            panda$core$MutableString* $tmp1463 = (panda$core$MutableString*) malloc(40);
            $tmp1463->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1463->refCount.value = 1;
            panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1465, result1402->name);
            panda$core$String* $tmp1468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, &$s1467);
            panda$core$MutableString$init$panda$core$String($tmp1463, $tmp1468);
            code1462 = $tmp1463;
            panda$core$Bit $tmp1469 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_cl);
            if ($tmp1469.value) {
            {
                panda$core$MutableString$append$panda$core$String(code1462, &$s1470);
            }
            }
            panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1471, result1402->type);
            panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1472, &$s1473);
            panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1475, clConstant1458->type);
            panda$core$String* $tmp1478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1476, &$s1477);
            panda$core$String* $tmp1479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1478, clConstant1458->name);
            panda$core$String* $tmp1481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1479, &$s1480);
            panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1474, $tmp1481);
            panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1483, &$s1484);
            panda$core$String* $tmp1487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1485, &$s1486);
            org$pandalanguage$pandac$Type* $tmp1488 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1489 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp1488);
            panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1487, $tmp1489);
            panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1490, &$s1491);
            panda$core$String* $tmp1493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1492, superCast1448);
            panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1493, &$s1494);
            panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, $tmp1495);
            panda$core$String* $tmp1498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1497, itable1456);
            panda$core$String* $tmp1500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1498, &$s1499);
            ITable* $tmp1501 = ((panda$collections$CollectionView*) valueVTable1420)->$class->itable;
            while ($tmp1501->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1501 = $tmp1501->next;
            }
            $fn1503 $tmp1502 = $tmp1501->methods[0];
            panda$core$Int64 $tmp1504 = $tmp1502(((panda$collections$CollectionView*) valueVTable1420));
            panda$core$String* $tmp1505 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1500, ((panda$core$Object*) wrap_panda$core$Int64($tmp1504)));
            panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, &$s1506);
            panda$core$String* $tmp1508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1496, $tmp1507);
            panda$core$MutableString$append$panda$core$String(code1462, $tmp1508);
            separator1509 = &$s1510;
            ITable* $tmp1512 = ((panda$collections$CollectionView*) valueVTable1420)->$class->itable;
            while ($tmp1512->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1512 = $tmp1512->next;
            }
            $fn1514 $tmp1513 = $tmp1512->methods[0];
            panda$core$Int64 $tmp1515 = $tmp1513(((panda$collections$CollectionView*) valueVTable1420));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1511, ((panda$core$Int64) { 0 }), $tmp1515, ((panda$core$Bit) { false }));
            int64_t $tmp1517 = $tmp1511.min.value;
            panda$core$Int64 i1516 = { $tmp1517 };
            int64_t $tmp1519 = $tmp1511.max.value;
            bool $tmp1520 = $tmp1511.inclusive.value;
            if ($tmp1520) goto $l1527; else goto $l1528;
            $l1527:;
            if ($tmp1517 <= $tmp1519) goto $l1521; else goto $l1523;
            $l1528:;
            if ($tmp1517 < $tmp1519) goto $l1521; else goto $l1523;
            $l1521:;
            {
                ITable* $tmp1530 = vtable1443->$class->itable;
                while ($tmp1530->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1530 = $tmp1530->next;
                }
                $fn1532 $tmp1531 = $tmp1530->methods[0];
                panda$core$Object* $tmp1533 = $tmp1531(vtable1443, i1516);
                m1529 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1533);
                if (((panda$core$Bit) { ((panda$core$Object*) m1529->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1535 = org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, m1529, self->wrapperShims);
                    methodName1534 = $tmp1535;
                }
                }
                else {
                {
                    panda$core$String* $tmp1536 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1529);
                    methodName1534 = $tmp1536;
                    if (m1529->owner->external.value) {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m1529);
                    }
                    }
                }
                }
                panda$core$String* $tmp1538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1537, separator1509);
                panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1538, &$s1539);
                panda$core$String* $tmp1541 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m1529);
                panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1540, $tmp1541);
                panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1542, &$s1543);
                panda$core$String* $tmp1545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1544, methodName1534);
                panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1545, &$s1546);
                panda$core$MutableString$append$panda$core$String(code1462, $tmp1547);
                separator1509 = &$s1548;
            }
            $l1524:;
            int64_t $tmp1550 = $tmp1519 - i1516.value;
            if ($tmp1520) goto $l1551; else goto $l1552;
            $l1551:;
            if ($tmp1550 >= 1) goto $l1549; else goto $l1523;
            $l1552:;
            if ($tmp1550 > 1) goto $l1549; else goto $l1523;
            $l1549:;
            i1516.value += 1;
            goto $l1521;
            $l1523:;
            panda$core$MutableString$append$panda$core$String(code1462, &$s1555);
            panda$core$String* $tmp1556 = panda$core$MutableString$finish$R$panda$core$String(code1462);
            (($fn1557) ((panda$io$OutputStream*) self->types)->$class->vtable[16])(((panda$io$OutputStream*) self->types), $tmp1556);
        }
        }
        panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->classConstants, ((panda$collections$Key*) name1396), ((panda$core$Object*) result1402));
    }
    }
    return result1402;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1560 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1558, &$s1559);
    panda$core$String* $tmp1563 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1560, &$s1561, &$s1562);
    panda$core$String* $tmp1566 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1563, &$s1564, &$s1565);
    panda$core$String* $tmp1569 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1566, &$s1567, &$s1568);
    panda$core$String* $tmp1572 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1569, &$s1570, &$s1571);
    panda$core$String* $tmp1575 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1572, &$s1573, &$s1574);
    return $tmp1575;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp1579;
    panda$core$String* result1607;
    panda$core$Bit $tmp1576 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1576.value) {
    {
        panda$core$Int64 $tmp1577 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp1578 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1577, ((panda$core$Int64) { 0 }));
        if ($tmp1578.value) {
        {
            panda$core$Int64 $tmp1580 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp1579, ((panda$core$Int64) { 0 }), $tmp1580, ((panda$core$Bit) { false }));
            int64_t $tmp1582 = $tmp1579.min.value;
            panda$core$Int64 i1581 = { $tmp1582 };
            int64_t $tmp1584 = $tmp1579.max.value;
            bool $tmp1585 = $tmp1579.inclusive.value;
            if ($tmp1585) goto $l1592; else goto $l1593;
            $l1592:;
            if ($tmp1582 <= $tmp1584) goto $l1586; else goto $l1588;
            $l1593:;
            if ($tmp1582 < $tmp1584) goto $l1586; else goto $l1588;
            $l1586:;
            {
                panda$core$Object* $tmp1594 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1581);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1594)->name) }).value) {
                {
                    panda$core$Object* $tmp1595 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
                    panda$core$Object* $tmp1596 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1595)->argRefs, i1581);
                    return ((panda$core$String*) $tmp1596);
                }
                }
            }
            $l1589:;
            int64_t $tmp1598 = $tmp1584 - i1581.value;
            if ($tmp1585) goto $l1599; else goto $l1600;
            $l1599:;
            if ($tmp1598 >= 1) goto $l1597; else goto $l1588;
            $l1600:;
            if ($tmp1598 > 1) goto $l1597; else goto $l1588;
            $l1597:;
            i1581.value += 1;
            goto $l1586;
            $l1588:;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        panda$core$String* $tmp1604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1603, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1604, &$s1605);
        return $tmp1606;
    }
    }
    panda$core$Object* $tmp1608 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->variableNames, ((panda$core$Object*) p_v));
    result1607 = ((panda$core$String*) $tmp1608);
    if (((panda$core$Bit) { result1607 == NULL }).value) {
    {
        panda$core$Int64 $tmp1609 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1609;
        panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1610, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1611, &$s1612);
        panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1613, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1614, &$s1615);
        result1607 = $tmp1616;
        panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1607));
    }
    }
    panda$core$Int64 $tmp1617 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp1618 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1617, ((panda$core$Int64) { 0 }));
    if ($tmp1618.value) {
    {
        panda$core$Object* $tmp1619 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1607, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1619)->varSuffix);
        result1607 = $tmp1620;
    }
    }
    return result1607;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1624;
    panda$core$String* $match$859_91630;
    panda$collections$Iterator* p$Iter1707;
    org$pandalanguage$pandac$MethodDecl$Parameter* p1719;
    panda$core$Bit $tmp1622 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1621);
    if ($tmp1622.value) {
    {
        return &$s1623;
    }
    }
    panda$core$MutableString* $tmp1625 = (panda$core$MutableString*) malloc(40);
    $tmp1625->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1625->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1625, &$s1627);
    result1624 = $tmp1625;
    panda$core$String* $tmp1628 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$MutableString$append$panda$core$String(result1624, $tmp1628);
    panda$core$MutableString$append$panda$core$String(result1624, &$s1629);
    {
        $match$859_91630 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1632 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1631);
        if ($tmp1632.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1633);
        }
        }
        else {
        panda$core$Bit $tmp1635 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1634);
        if ($tmp1635.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1636);
        }
        }
        else {
        panda$core$Bit $tmp1638 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1637);
        if ($tmp1638.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1639);
        }
        }
        else {
        panda$core$Bit $tmp1641 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1640);
        if ($tmp1641.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1642);
        }
        }
        else {
        panda$core$Bit $tmp1644 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1643);
        if ($tmp1644.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1645);
        }
        }
        else {
        panda$core$Bit $tmp1647 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1646);
        if ($tmp1647.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1648);
        }
        }
        else {
        panda$core$Bit $tmp1650 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1649);
        if ($tmp1650.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1651);
        }
        }
        else {
        panda$core$Bit $tmp1653 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1652);
        if ($tmp1653.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1654);
        }
        }
        else {
        panda$core$Bit $tmp1656 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1655);
        if ($tmp1656.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1657);
        }
        }
        else {
        panda$core$Bit $tmp1659 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1658);
        if ($tmp1659.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1660);
        }
        }
        else {
        panda$core$Bit $tmp1662 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1661);
        if ($tmp1662.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1663);
        }
        }
        else {
        panda$core$Bit $tmp1665 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1664);
        if ($tmp1665.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1666);
        }
        }
        else {
        panda$core$Bit $tmp1668 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1667);
        if ($tmp1668.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1669);
        }
        }
        else {
        panda$core$Bit $tmp1671 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1670);
        if ($tmp1671.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1672);
        }
        }
        else {
        panda$core$Bit $tmp1674 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1673);
        if ($tmp1674.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1675);
        }
        }
        else {
        panda$core$Bit $tmp1677 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1676);
        if ($tmp1677.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1678);
        }
        }
        else {
        panda$core$Bit $tmp1680 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1679);
        if ($tmp1680.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1681);
        }
        }
        else {
        panda$core$Bit $tmp1683 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1682);
        if ($tmp1683.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1684);
        }
        }
        else {
        panda$core$Bit $tmp1686 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1685);
        if ($tmp1686.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1687);
        }
        }
        else {
        panda$core$Bit $tmp1689 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1688);
        if ($tmp1689.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1690);
        }
        }
        else {
        panda$core$Bit $tmp1692 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1691);
        if ($tmp1692.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1693);
        }
        }
        else {
        panda$core$Bit $tmp1695 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1694);
        if ($tmp1695.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1696);
        }
        }
        else {
        panda$core$Bit $tmp1698 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1697);
        if ($tmp1698.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1699);
        }
        }
        else {
        panda$core$Bit $tmp1701 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1700);
        if ($tmp1701.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1702);
        }
        }
        else {
        panda$core$Bit $tmp1704 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$859_91630, &$s1703);
        if ($tmp1704.value) {
        {
            panda$core$MutableString$append$panda$core$String(result1624, &$s1705);
        }
        }
        else {
        {
            panda$core$String* $tmp1706 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            panda$core$MutableString$append$panda$core$String(result1624, $tmp1706);
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
        ITable* $tmp1708 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp1708->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1708 = $tmp1708->next;
        }
        $fn1710 $tmp1709 = $tmp1708->methods[0];
        panda$collections$Iterator* $tmp1711 = $tmp1709(((panda$collections$Iterable*) p_m->parameters));
        p$Iter1707 = $tmp1711;
        $l1712:;
        ITable* $tmp1714 = p$Iter1707->$class->itable;
        while ($tmp1714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1714 = $tmp1714->next;
        }
        $fn1716 $tmp1715 = $tmp1714->methods[0];
        panda$core$Bit $tmp1717 = $tmp1715(p$Iter1707);
        panda$core$Bit $tmp1718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1717);
        if (!$tmp1718.value) goto $l1713;
        {
            ITable* $tmp1720 = p$Iter1707->$class->itable;
            while ($tmp1720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1720 = $tmp1720->next;
            }
            $fn1722 $tmp1721 = $tmp1720->methods[1];
            panda$core$Object* $tmp1723 = $tmp1721(p$Iter1707);
            p1719 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1723);
            panda$core$String* $tmp1725 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p1719->type)->name);
            panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1724, $tmp1725);
            panda$core$String* $tmp1728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, &$s1727);
            panda$core$MutableString$append$panda$core$String(result1624, $tmp1728);
        }
        goto $l1712;
        $l1713:;
    }
    org$pandalanguage$pandac$Type* $tmp1729 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1730 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp1729);
    if ($tmp1730.value) {
    {
        panda$core$MutableString$append$panda$core$String(result1624, &$s1731);
        panda$core$String* $tmp1732 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        panda$core$MutableString$append$panda$core$String(result1624, $tmp1732);
    }
    }
    panda$core$String* $tmp1733 = panda$core$MutableString$finish$R$panda$core$String(result1624);
    return $tmp1733;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$Bit $tmp1734 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_f->annotations);
    PANDA_ASSERT($tmp1734.value);
    panda$core$String* $tmp1736 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1735, $tmp1736);
    panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, &$s1738);
    panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1740, &$s1741);
    return $tmp1742;
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
    panda$core$String* leftRef1743;
    panda$core$String* leftField1747;
    panda$core$String* start1757;
    panda$core$String* ifTrue1758;
    panda$core$String* ifFalse1760;
    panda$core$String* rightRef1773;
    panda$core$String* rightField1777;
    panda$core$String* truePred1787;
    panda$core$String* result1793;
    panda$core$String* $tmp1744 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1743 = $tmp1744;
    org$pandalanguage$pandac$Type* $tmp1745 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1746 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1745);
    if ($tmp1746.value) {
    {
        panda$core$String* $tmp1748 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1747 = $tmp1748;
        panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1749, leftField1747);
        panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1750, &$s1751);
        panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, leftRef1743);
        panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1754);
        (($fn1756) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1755);
        leftRef1743 = leftField1747;
    }
    }
    start1757 = self->currentBlock;
    panda$core$String* $tmp1759 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1758 = $tmp1759;
    panda$core$String* $tmp1761 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1760 = $tmp1761;
    panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1762, leftRef1743);
    panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1763, &$s1764);
    panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1765, ifTrue1758);
    panda$core$String* $tmp1768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1766, &$s1767);
    panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1768, ifFalse1760);
    panda$core$String* $tmp1771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, &$s1770);
    (($fn1772) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1771);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1758, p_out);
    panda$core$String* $tmp1774 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1773 = $tmp1774;
    org$pandalanguage$pandac$Type* $tmp1775 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1776 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1775);
    if ($tmp1776.value) {
    {
        panda$core$String* $tmp1778 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1777 = $tmp1778;
        panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1779, rightField1777);
        panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1780, &$s1781);
        panda$core$String* $tmp1783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1782, rightRef1773);
        panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1783, &$s1784);
        (($fn1786) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1785);
        rightRef1773 = rightField1777;
    }
    }
    truePred1787 = self->currentBlock;
    panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1788, ifFalse1760);
    panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1789, &$s1790);
    (($fn1792) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1791);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1760, p_out);
    panda$core$String* $tmp1794 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1793 = $tmp1794;
    panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1795, result1793);
    panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1796, &$s1797);
    panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1798, start1757);
    panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1799, &$s1800);
    panda$core$String* $tmp1802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, rightRef1773);
    panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1802, &$s1803);
    panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1804, truePred1787);
    panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1805, &$s1806);
    (($fn1808) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1807);
    return result1793;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1809;
    panda$core$String* leftField1813;
    panda$core$String* start1823;
    panda$core$String* ifTrue1824;
    panda$core$String* ifFalse1826;
    panda$core$String* rightRef1839;
    panda$core$String* rightField1843;
    panda$core$String* falsePred1853;
    panda$core$String* result1859;
    panda$core$String* $tmp1810 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1809 = $tmp1810;
    org$pandalanguage$pandac$Type* $tmp1811 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1812 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, $tmp1811);
    if ($tmp1812.value) {
    {
        panda$core$String* $tmp1814 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        leftField1813 = $tmp1814;
        panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1815, leftField1813);
        panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1816, &$s1817);
        panda$core$String* $tmp1819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, leftRef1809);
        panda$core$String* $tmp1821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1819, &$s1820);
        (($fn1822) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1821);
        leftRef1809 = leftField1813;
    }
    }
    start1823 = self->currentBlock;
    panda$core$String* $tmp1825 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue1824 = $tmp1825;
    panda$core$String* $tmp1827 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse1826 = $tmp1827;
    panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1828, leftRef1809);
    panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1829, &$s1830);
    panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1831, ifTrue1824);
    panda$core$String* $tmp1834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, &$s1833);
    panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1834, ifFalse1826);
    panda$core$String* $tmp1837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1835, &$s1836);
    (($fn1838) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1837);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse1826, p_out);
    panda$core$String* $tmp1840 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1839 = $tmp1840;
    org$pandalanguage$pandac$Type* $tmp1841 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1842 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_right->type, $tmp1841);
    if ($tmp1842.value) {
    {
        panda$core$String* $tmp1844 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        rightField1843 = $tmp1844;
        panda$core$String* $tmp1846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1845, rightField1843);
        panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1846, &$s1847);
        panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, rightRef1839);
        panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1850);
        (($fn1852) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1851);
        rightRef1839 = rightField1843;
    }
    }
    falsePred1853 = self->currentBlock;
    panda$core$String* $tmp1855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1854, ifTrue1824);
    panda$core$String* $tmp1857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1855, &$s1856);
    (($fn1858) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1857);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue1824, p_out);
    panda$core$String* $tmp1860 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1859 = $tmp1860;
    panda$core$String* $tmp1862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1861, result1859);
    panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1862, &$s1863);
    panda$core$String* $tmp1865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, start1823);
    panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1865, &$s1866);
    panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, rightRef1839);
    panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1868, &$s1869);
    panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1870, falsePred1853);
    panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, &$s1872);
    (($fn1874) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1873);
    return result1859;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp1875;
    panda$core$String* result1918;
    switch (p_cl.value) {
        case 10121:
        {
            switch (p_op.value) {
                case 51:
                {
                    llvmOp1875 = &$s1876;
                }
                break;
                case 52:
                {
                    llvmOp1875 = &$s1877;
                }
                break;
                case 53:
                {
                    llvmOp1875 = &$s1878;
                }
                break;
                case 55:
                {
                    llvmOp1875 = &$s1879;
                }
                break;
                case 56:
                {
                    llvmOp1875 = &$s1880;
                }
                break;
                case 72:
                {
                    llvmOp1875 = &$s1881;
                }
                break;
                case 1:
                {
                    llvmOp1875 = &$s1882;
                }
                break;
                case 67:
                {
                    llvmOp1875 = &$s1883;
                }
                break;
                case 69:
                {
                    llvmOp1875 = &$s1884;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1875 = &$s1885;
                }
                break;
                case 58:
                {
                    llvmOp1875 = &$s1886;
                }
                break;
                case 59:
                {
                    llvmOp1875 = &$s1887;
                }
                break;
                case 63:
                {
                    llvmOp1875 = &$s1888;
                }
                break;
                case 62:
                {
                    llvmOp1875 = &$s1889;
                }
                break;
                case 65:
                {
                    llvmOp1875 = &$s1890;
                }
                break;
                case 64:
                {
                    llvmOp1875 = &$s1891;
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
                    llvmOp1875 = &$s1892;
                }
                break;
                case 52:
                {
                    llvmOp1875 = &$s1893;
                }
                break;
                case 53:
                {
                    llvmOp1875 = &$s1894;
                }
                break;
                case 55:
                {
                    llvmOp1875 = &$s1895;
                }
                break;
                case 56:
                {
                    llvmOp1875 = &$s1896;
                }
                break;
                case 72:
                {
                    llvmOp1875 = &$s1897;
                }
                break;
                case 1:
                {
                    llvmOp1875 = &$s1898;
                }
                break;
                case 67:
                {
                    llvmOp1875 = &$s1899;
                }
                break;
                case 69:
                {
                    llvmOp1875 = &$s1900;
                }
                break;
                case 70:
                case 71:
                {
                    llvmOp1875 = &$s1901;
                }
                break;
                case 58:
                {
                    llvmOp1875 = &$s1902;
                }
                break;
                case 59:
                {
                    llvmOp1875 = &$s1903;
                }
                break;
                case 63:
                {
                    llvmOp1875 = &$s1904;
                }
                break;
                case 62:
                {
                    llvmOp1875 = &$s1905;
                }
                break;
                case 65:
                {
                    llvmOp1875 = &$s1906;
                }
                break;
                case 64:
                {
                    llvmOp1875 = &$s1907;
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
                    llvmOp1875 = &$s1908;
                }
                break;
                case 52:
                {
                    llvmOp1875 = &$s1909;
                }
                break;
                case 53:
                {
                    llvmOp1875 = &$s1910;
                }
                break;
                case 55:
                {
                    llvmOp1875 = &$s1911;
                }
                break;
                case 58:
                {
                    llvmOp1875 = &$s1912;
                }
                break;
                case 59:
                {
                    llvmOp1875 = &$s1913;
                }
                break;
                case 63:
                {
                    llvmOp1875 = &$s1914;
                }
                break;
                case 62:
                {
                    llvmOp1875 = &$s1915;
                }
                break;
                case 65:
                {
                    llvmOp1875 = &$s1916;
                }
                break;
                case 64:
                {
                    llvmOp1875 = &$s1917;
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
    panda$core$String* $tmp1919 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1918 = $tmp1919;
    panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1920, result1918);
    panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1921, &$s1922);
    panda$core$String* $tmp1924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, llvmOp1875);
    panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1924, &$s1925);
    panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1926, p_leftRef);
    panda$core$String* $tmp1929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, &$s1928);
    panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1929, p_rightRef);
    panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, &$s1931);
    (($fn1933) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1932);
    return result1918;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1934;
    panda$core$String* rightRef1936;
    panda$core$String* raw1938;
    panda$core$String* result1951;
    panda$core$String* $tmp1935 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1934 = $tmp1935;
    panda$core$String* $tmp1937 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1936 = $tmp1937;
    panda$core$String* $tmp1939 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1938 = $tmp1939;
    panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1940, raw1938);
    panda$core$String* $tmp1943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1941, &$s1942);
    panda$core$String* $tmp1944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1943, leftRef1934);
    panda$core$String* $tmp1946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1944, &$s1945);
    panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1946, rightRef1936);
    panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1947, &$s1948);
    (($fn1950) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1949);
    panda$core$String* $tmp1952 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1951 = $tmp1952;
    panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1953, result1951);
    panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1954, &$s1955);
    panda$core$String* $tmp1957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, raw1938);
    panda$core$String* $tmp1959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1957, &$s1958);
    (($fn1960) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1959);
    return result1951;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1961;
    panda$core$String* rightRef1963;
    panda$core$String* raw1965;
    panda$core$String* result1978;
    panda$core$String* $tmp1962 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
    leftRef1961 = $tmp1962;
    panda$core$String* $tmp1964 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
    rightRef1963 = $tmp1964;
    panda$core$String* $tmp1966 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    raw1965 = $tmp1966;
    panda$core$String* $tmp1968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1967, raw1965);
    panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1968, &$s1969);
    panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1970, leftRef1961);
    panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1971, &$s1972);
    panda$core$String* $tmp1974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1973, rightRef1963);
    panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1974, &$s1975);
    (($fn1977) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1976);
    panda$core$String* $tmp1979 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result1978 = $tmp1979;
    panda$core$String* $tmp1981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1980, result1978);
    panda$core$String* $tmp1983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1981, &$s1982);
    panda$core$String* $tmp1984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1983, raw1965);
    panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1984, &$s1985);
    (($fn1987) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1986);
    return result1978;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef1993;
    panda$core$String* rightRef1995;
    panda$core$Bit $tmp1988 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_left->type, p_right->type);
    PANDA_ASSERT($tmp1988.value);
    switch (p_op.value) {
        case 66:
        {
            panda$core$String* $tmp1989 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1989;
        }
        break;
        case 68:
        {
            panda$core$String* $tmp1990 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1990;
        }
        break;
        case 60:
        {
            panda$core$String* $tmp1991 = org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1991;
        }
        break;
        case 61:
        {
            panda$core$String* $tmp1992 = org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_right, p_out);
            return $tmp1992;
        }
        break;
        default:
        {
            panda$core$String* $tmp1994 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_left, p_out);
            leftRef1993 = $tmp1994;
            panda$core$String* $tmp1996 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_right, p_out);
            rightRef1995 = $tmp1996;
            panda$core$Int64 $tmp1997 = org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_left->type);
            panda$core$String* $tmp1998 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp1997, leftRef1993, p_op, rightRef1995, p_out);
            return $tmp1998;
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp1999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_b->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp1999.value);
    panda$core$Int64 $tmp2000 = panda$collections$Array$get_count$R$panda$core$Int64(p_b->children);
    panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2000, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp2001.value);
    panda$core$Object* $tmp2002 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2003 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2004 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2002), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp2003), p_out);
    return $tmp2004;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s2005;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2006;
    panda$core$Int64 index2008;
    panda$collections$ListView* vtable2009;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2011;
    panda$core$String* classPtrPtr2040;
    panda$core$String* classPtr2057;
    panda$core$String* cast2067;
    panda$core$String* ptr2080;
    panda$core$String* load2104;
    panda$core$String* result2114;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2007 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    cc2006 = $tmp2007;
    index2008 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2010 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2009 = $tmp2010;
    ITable* $tmp2012 = ((panda$collections$CollectionView*) vtable2009)->$class->itable;
    while ($tmp2012->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2012 = $tmp2012->next;
    }
    $fn2014 $tmp2013 = $tmp2012->methods[0];
    panda$core$Int64 $tmp2015 = $tmp2013(((panda$collections$CollectionView*) vtable2009));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2011, ((panda$core$Int64) { 0 }), $tmp2015, ((panda$core$Bit) { false }));
    int64_t $tmp2017 = $tmp2011.min.value;
    panda$core$Int64 i2016 = { $tmp2017 };
    int64_t $tmp2019 = $tmp2011.max.value;
    bool $tmp2020 = $tmp2011.inclusive.value;
    if ($tmp2020) goto $l2027; else goto $l2028;
    $l2027:;
    if ($tmp2017 <= $tmp2019) goto $l2021; else goto $l2023;
    $l2028:;
    if ($tmp2017 < $tmp2019) goto $l2021; else goto $l2023;
    $l2021:;
    {
        ITable* $tmp2029 = vtable2009->$class->itable;
        while ($tmp2029->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2029 = $tmp2029->next;
        }
        $fn2031 $tmp2030 = $tmp2029->methods[0];
        panda$core$Object* $tmp2032 = $tmp2030(vtable2009, i2016);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2032)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2008 = i2016;
            goto $l2023;
        }
        }
    }
    $l2024:;
    int64_t $tmp2034 = $tmp2019 - i2016.value;
    if ($tmp2020) goto $l2035; else goto $l2036;
    $l2035:;
    if ($tmp2034 >= 1) goto $l2033; else goto $l2023;
    $l2036:;
    if ($tmp2034 > 1) goto $l2033; else goto $l2023;
    $l2033:;
    i2016.value += 1;
    goto $l2021;
    $l2023:;
    panda$core$Bit $tmp2039 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2008, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2039.value);
    panda$core$String* $tmp2041 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtrPtr2040 = $tmp2041;
    panda$core$String* $tmp2043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2042, classPtrPtr2040);
    panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2043, &$s2044);
    org$pandalanguage$pandac$Type* $tmp2046 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2047 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2046);
    panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2045, $tmp2047);
    panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2048, &$s2049);
    panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2051, p_target);
    panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, &$s2053);
    panda$core$String* $tmp2055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2050, $tmp2054);
    (($fn2056) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2055);
    panda$core$String* $tmp2058 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr2057 = $tmp2058;
    panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2059, classPtr2057);
    panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2060, &$s2061);
    panda$core$String* $tmp2063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2062, classPtrPtr2040);
    panda$core$String* $tmp2065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2063, &$s2064);
    (($fn2066) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2065);
    panda$core$String* $tmp2068 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2067 = $tmp2068;
    panda$core$String* $tmp2070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2069, cast2067);
    panda$core$String* $tmp2072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2070, &$s2071);
    panda$core$String* $tmp2073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2072, classPtr2057);
    panda$core$String* $tmp2075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, &$s2074);
    panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2075, cc2006->type);
    panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2076, &$s2077);
    (($fn2079) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2078);
    panda$core$String* $tmp2081 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    ptr2080 = $tmp2081;
    panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2082, ptr2080);
    panda$core$String* $tmp2085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2083, &$s2084);
    panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2085, cc2006->type);
    panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2086, &$s2087);
    panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2088, cc2006->type);
    panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, &$s2090);
    panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2091, cast2067);
    panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, &$s2093);
    panda$core$String* $tmp2096 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2095, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2096, &$s2097);
    panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2098, ((panda$core$Object*) wrap_panda$core$Int64(index2008)));
    panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, &$s2100);
    panda$core$String* $tmp2102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2094, $tmp2101);
    (($fn2103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2102);
    panda$core$String* $tmp2105 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load2104 = $tmp2105;
    panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2106, load2104);
    panda$core$String* $tmp2109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2107, &$s2108);
    panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2109, ptr2080);
    panda$core$String* $tmp2112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2110, &$s2111);
    (($fn2113) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2112);
    panda$core$String* $tmp2115 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result2114 = $tmp2115;
    panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2116, result2114);
    panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2117, &$s2118);
    panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2119, load2104);
    panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2120, &$s2121);
    org$pandalanguage$pandac$Type* $tmp2123 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2124 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2123);
    panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, $tmp2124);
    (($fn2126) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2125);
    return result2114;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2127;
    panda$core$String* entry2130;
    panda$core$String* rawClassPointer2137;
    panda$core$String* classPointer2161;
    panda$core$String* classType2163;
    panda$core$String* loadedClass2177;
    panda$core$String* itableFirst2193;
    panda$core$String* next2218;
    panda$core$String* leavingEntryLabel2225;
    panda$core$String* itableNext2227;
    panda$core$String* itablePtrPtr2232;
    panda$core$String* fail2234;
    panda$core$String* itablePtr2255;
    panda$core$String* itableClassPtr2265;
    panda$core$String* itableClass2281;
    panda$core$String* test2297;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2299;
    panda$core$String* success2323;
    panda$core$Int64 index2355;
    panda$collections$ListView* vtable2356;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2358;
    panda$core$String* methodPtrPtr2395;
    panda$core$String* cast2414;
    panda$core$String* methodPtr2427;
    org$pandalanguage$pandac$Type* $tmp2128 = org$pandalanguage$pandac$Compiler$inheritedTypeWithSelf$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, p_m);
    panda$core$String* $tmp2129 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2128);
    methodType2127 = $tmp2129;
    panda$core$String* $tmp2131 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    entry2130 = $tmp2131;
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2132, entry2130);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
    (($fn2136) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2135);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, entry2130, p_out);
    panda$core$String* $tmp2138 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawClassPointer2137 = $tmp2138;
    panda$core$String* $tmp2140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2139, rawClassPointer2137);
    panda$core$String* $tmp2142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, &$s2141);
    org$pandalanguage$pandac$Type* $tmp2143 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp2144 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2143);
    panda$core$String* $tmp2145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2142, $tmp2144);
    panda$core$String* $tmp2147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2145, &$s2146);
    panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2148, p_target);
    panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, &$s2150);
    panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2151, &$s2152);
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2153, &$s2154);
    panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2155, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, &$s2157);
    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2147, $tmp2158);
    (($fn2160) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2159);
    panda$core$String* $tmp2162 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPointer2161 = $tmp2162;
    org$pandalanguage$pandac$Type* $tmp2164 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2165 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2164);
    classType2163 = $tmp2165;
    panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2166, classPointer2161);
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, &$s2168);
    panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, rawClassPointer2137);
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, &$s2171);
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, classType2163);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
    (($fn2176) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2175);
    panda$core$String* $tmp2178 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    loadedClass2177 = $tmp2178;
    panda$core$String* $tmp2180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2179, loadedClass2177);
    panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2181);
    panda$core$String* $tmp2183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, classType2163);
    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2183, &$s2184);
    panda$core$String* $tmp2186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2185, classType2163);
    panda$core$String* $tmp2188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2186, &$s2187);
    panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2188, classPointer2161);
    panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, &$s2190);
    (($fn2192) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2191);
    panda$core$String* $tmp2194 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableFirst2193 = $tmp2194;
    panda$core$String* $tmp2196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2195, itableFirst2193);
    panda$core$String* $tmp2198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2196, &$s2197);
    panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2198, classType2163);
    panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, &$s2200);
    panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, classType2163);
    panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2202, &$s2203);
    panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2205, loadedClass2177);
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2206, &$s2207);
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2208, &$s2209);
    panda$core$String* $tmp2212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2210, &$s2211);
    panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2212, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, &$s2214);
    panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, $tmp2215);
    (($fn2217) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2216);
    panda$core$String* $tmp2219 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    next2218 = $tmp2219;
    panda$core$String* $tmp2221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2220, next2218);
    panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2221, &$s2222);
    (($fn2224) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2223);
    leavingEntryLabel2225 = self->currentBlock;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, next2218, p_out);
    panda$core$Int64 $tmp2226 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2226;
    panda$core$String* $tmp2229 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2228, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2229, &$s2230);
    itableNext2227 = $tmp2231;
    panda$core$String* $tmp2233 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtrPtr2232 = $tmp2233;
    panda$core$String* $tmp2235 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    fail2234 = $tmp2235;
    panda$core$String* $tmp2237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2236, itablePtrPtr2232);
    panda$core$String* $tmp2239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, &$s2238);
    panda$core$String* $tmp2240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2239, itableFirst2193);
    panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2240, &$s2241);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2242, leavingEntryLabel2225);
    panda$core$String* $tmp2245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, &$s2244);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2246, itableNext2227);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, &$s2248);
    panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, fail2234);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, &$s2251);
    panda$core$String* $tmp2253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2245, $tmp2252);
    (($fn2254) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2253);
    panda$core$String* $tmp2256 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itablePtr2255 = $tmp2256;
    panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2257, itablePtr2255);
    panda$core$String* $tmp2260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2258, &$s2259);
    panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2260, itablePtrPtr2232);
    panda$core$String* $tmp2263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2261, &$s2262);
    (($fn2264) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2263);
    panda$core$String* $tmp2266 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClassPtr2265 = $tmp2266;
    panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2267, itableClassPtr2265);
    panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2268, &$s2269);
    panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2271, itablePtr2255);
    panda$core$String* $tmp2274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2272, &$s2273);
    panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2274, &$s2275);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, &$s2277);
    panda$core$String* $tmp2279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, $tmp2278);
    (($fn2280) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2279);
    panda$core$String* $tmp2282 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    itableClass2281 = $tmp2282;
    panda$core$String* $tmp2284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2283, itableClass2281);
    panda$core$String* $tmp2286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2284, &$s2285);
    panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2286, classType2163);
    panda$core$String* $tmp2289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, &$s2288);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, classType2163);
    panda$core$String* $tmp2292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, &$s2291);
    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2292, itableClassPtr2265);
    panda$core$String* $tmp2295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, &$s2294);
    (($fn2296) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2295);
    panda$core$String* $tmp2298 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    test2297 = $tmp2298;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2300 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_m->owner);
    intfCC2299 = $tmp2300;
    panda$core$String* $tmp2302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2301, test2297);
    panda$core$String* $tmp2304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2302, &$s2303);
    panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2304, classType2163);
    panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, &$s2306);
    panda$core$String* $tmp2308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2307, intfCC2299->type);
    panda$core$String* $tmp2310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2308, &$s2309);
    panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2310, intfCC2299->name);
    panda$core$String* $tmp2313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2311, &$s2312);
    panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2314, classType2163);
    panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2315, &$s2316);
    panda$core$String* $tmp2318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2317, itableClass2281);
    panda$core$String* $tmp2320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2318, &$s2319);
    panda$core$String* $tmp2321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2313, $tmp2320);
    (($fn2322) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2321);
    panda$core$String* $tmp2324 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    success2323 = $tmp2324;
    panda$core$String* $tmp2326 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2325, test2297);
    panda$core$String* $tmp2328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2326, &$s2327);
    panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2328, success2323);
    panda$core$String* $tmp2331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2329, &$s2330);
    panda$core$String* $tmp2332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2331, fail2234);
    panda$core$String* $tmp2334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2332, &$s2333);
    (($fn2335) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2334);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, fail2234, p_out);
    panda$core$String* $tmp2337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2336, itableNext2227);
    panda$core$String* $tmp2339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2337, &$s2338);
    panda$core$String* $tmp2340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, itablePtr2255);
    panda$core$String* $tmp2342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2340, &$s2341);
    panda$core$String* $tmp2345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2343, &$s2344);
    panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2345, &$s2346);
    panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2342, $tmp2347);
    (($fn2349) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2348);
    panda$core$String* $tmp2351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2350, next2218);
    panda$core$String* $tmp2353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2351, &$s2352);
    (($fn2354) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2353);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, success2323, p_out);
    index2355 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2357 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, p_m->owner);
    vtable2356 = $tmp2357;
    ITable* $tmp2359 = ((panda$collections$CollectionView*) vtable2356)->$class->itable;
    while ($tmp2359->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2359 = $tmp2359->next;
    }
    $fn2361 $tmp2360 = $tmp2359->methods[0];
    panda$core$Int64 $tmp2362 = $tmp2360(((panda$collections$CollectionView*) vtable2356));
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2358, ((panda$core$Int64) { 0 }), $tmp2362, ((panda$core$Bit) { false }));
    int64_t $tmp2364 = $tmp2358.min.value;
    panda$core$Int64 i2363 = { $tmp2364 };
    int64_t $tmp2366 = $tmp2358.max.value;
    bool $tmp2367 = $tmp2358.inclusive.value;
    if ($tmp2367) goto $l2374; else goto $l2375;
    $l2374:;
    if ($tmp2364 <= $tmp2366) goto $l2368; else goto $l2370;
    $l2375:;
    if ($tmp2364 < $tmp2366) goto $l2368; else goto $l2370;
    $l2368:;
    {
        ITable* $tmp2376 = vtable2356->$class->itable;
        while ($tmp2376->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2376 = $tmp2376->next;
        }
        $fn2378 $tmp2377 = $tmp2376->methods[0];
        panda$core$Object* $tmp2379 = $tmp2377(vtable2356, i2363);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2379)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2355 = i2363;
            goto $l2370;
        }
        }
    }
    $l2371:;
    int64_t $tmp2381 = $tmp2366 - i2363.value;
    if ($tmp2367) goto $l2382; else goto $l2383;
    $l2382:;
    if ($tmp2381 >= 1) goto $l2380; else goto $l2370;
    $l2383:;
    if ($tmp2381 > 1) goto $l2380; else goto $l2370;
    $l2380:;
    i2363.value += 1;
    goto $l2368;
    $l2370:;
    org$pandalanguage$pandac$Type* $tmp2386 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2387 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp2386);
    panda$collections$ListView* $tmp2388 = org$pandalanguage$pandac$Compiler$getVTable$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$MethodDecl$GT(self->compiler, $tmp2387);
    ITable* $tmp2389 = ((panda$collections$CollectionView*) $tmp2388)->$class->itable;
    while ($tmp2389->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2389 = $tmp2389->next;
    }
    $fn2391 $tmp2390 = $tmp2389->methods[0];
    panda$core$Int64 $tmp2392 = $tmp2390(((panda$collections$CollectionView*) $tmp2388));
    panda$core$Int64 $tmp2393 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2355, $tmp2392);
    index2355 = $tmp2393;
    panda$core$Bit $tmp2394 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index2355, ((panda$core$Int64) { -1 }));
    PANDA_ASSERT($tmp2394.value);
    panda$core$String* $tmp2396 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtrPtr2395 = $tmp2396;
    panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2397, methodPtrPtr2395);
    panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, &$s2399);
    panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2401, itablePtr2255);
    panda$core$String* $tmp2404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2402, &$s2403);
    panda$core$String* $tmp2406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, &$s2405);
    panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2406, &$s2407);
    panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2408, ((panda$core$Object*) wrap_panda$core$Int64(index2355)));
    panda$core$String* $tmp2411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2409, &$s2410);
    panda$core$String* $tmp2412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2400, $tmp2411);
    (($fn2413) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2412);
    panda$core$String* $tmp2415 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    cast2414 = $tmp2415;
    panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2416, cast2414);
    panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, &$s2418);
    panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2419, methodPtrPtr2395);
    panda$core$String* $tmp2422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2420, &$s2421);
    panda$core$String* $tmp2423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2422, methodType2127);
    panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2423, &$s2424);
    (($fn2426) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2425);
    panda$core$String* $tmp2428 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    methodPtr2427 = $tmp2428;
    panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2429, methodPtr2427);
    panda$core$String* $tmp2432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, &$s2431);
    panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2432, methodType2127);
    panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2433, &$s2434);
    panda$core$String* $tmp2436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2435, methodType2127);
    panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2436, &$s2437);
    panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2438, cast2414);
    panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, &$s2440);
    (($fn2442) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2441);
    return methodPtr2427;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2444 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2443 = $tmp2444.value;
    if (!$tmp2443) goto $l2445;
    panda$core$Bit $tmp2446 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(p_m);
    $tmp2443 = $tmp2446.value;
    $l2445:;
    panda$core$Bit $tmp2447 = { $tmp2443 };
    if ($tmp2447.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { p_target != NULL }).value);
        panda$core$Bit $tmp2448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2448.value) {
        {
            panda$core$String* $tmp2449 = org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2449;
        }
        }
        else {
        {
            panda$core$String* $tmp2450 = org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(self, p_target, p_m, p_out);
            return $tmp2450;
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
        panda$core$String* $tmp2451 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        return $tmp2451;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2452;
    panda$core$String* $match$1204_92453;
    panda$core$String* countStruct2458;
    panda$core$String* count2461;
    panda$core$String* size2471;
    panda$core$Int64 elementSize2473;
    panda$core$String* malloc2493;
    panda$core$String* result2507;
    panda$core$String* ptr2526;
    panda$core$String* baseType2529;
    panda$core$String* ptrType2532;
    panda$core$String* cast2535;
    panda$core$String* load2548;
    panda$core$String* ptr2568;
    panda$core$String* baseType2571;
    panda$core$String* ptrType2574;
    panda$core$String* cast2577;
    panda$core$String* indexStruct2590;
    panda$core$String* index2593;
    panda$core$String* offsetPtr2603;
    panda$core$String* load2624;
    panda$core$String* ptr2644;
    panda$core$String* ptrCast2647;
    panda$core$String* countStruct2657;
    panda$core$String* count2660;
    panda$core$String* size2670;
    panda$core$String* realloc2688;
    panda$core$String* result2707;
    panda$core$String* ptr2726;
    panda$core$String* baseType2729;
    panda$core$String* offsetStruct2733;
    panda$core$String* offset2736;
    panda$core$String* result2746;
    m2452 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$1204_92453 = ((org$pandalanguage$pandac$Symbol*) m2452->value)->name;
        panda$core$Bit $tmp2455 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1204_92453, &$s2454);
        if ($tmp2455.value) {
        {
            panda$core$Int64 $tmp2456 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2456, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2457.value);
            panda$core$Object* $tmp2459 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2460 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2459), p_out);
            countStruct2458 = $tmp2460;
            panda$core$String* $tmp2462 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2461 = $tmp2462;
            panda$core$String* $tmp2464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2463, count2461);
            panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2464, &$s2465);
            panda$core$String* $tmp2467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2466, countStruct2458);
            panda$core$String* $tmp2469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2467, &$s2468);
            (($fn2470) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2469);
            panda$core$String* $tmp2472 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2471 = $tmp2472;
            org$pandalanguage$pandac$Type* $tmp2474 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2452);
            panda$core$Object* $tmp2475 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2474->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2476 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2475));
            elementSize2473 = $tmp2476;
            panda$core$Bit $tmp2477 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(elementSize2473, ((panda$core$Int64) { 0 }));
            PANDA_ASSERT($tmp2477.value);
            panda$core$String* $tmp2479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2478, size2471);
            panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, &$s2480);
            panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2481, &$s2482);
            panda$core$String* $tmp2485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2483, &$s2484);
            panda$core$String* $tmp2486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2485, count2461);
            panda$core$String* $tmp2488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2486, &$s2487);
            panda$core$String* $tmp2489 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2488, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2473)));
            panda$core$String* $tmp2491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2489, &$s2490);
            (($fn2492) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2491);
            panda$core$String* $tmp2494 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            malloc2493 = $tmp2494;
            panda$core$String* $tmp2496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2495, malloc2493);
            panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2496, &$s2497);
            panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2499);
            panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2500, &$s2501);
            panda$core$String* $tmp2503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2502, size2471);
            panda$core$String* $tmp2505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2503, &$s2504);
            (($fn2506) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2505);
            panda$core$String* $tmp2508 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2507 = $tmp2508;
            panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2509, result2507);
            panda$core$String* $tmp2512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2510, &$s2511);
            panda$core$String* $tmp2513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, malloc2493);
            panda$core$String* $tmp2515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2513, &$s2514);
            org$pandalanguage$pandac$Type* $tmp2516 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2452);
            panda$core$String* $tmp2517 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2516);
            panda$core$String* $tmp2518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, $tmp2517);
            panda$core$String* $tmp2520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2518, &$s2519);
            (($fn2521) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2520);
            return result2507;
        }
        }
        else {
        panda$core$Bit $tmp2523 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1204_92453, &$s2522);
        if ($tmp2523.value) {
        {
            panda$core$Int64 $tmp2524 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2524, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp2525.value);
            panda$core$Object* $tmp2527 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2528 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2527), p_out);
            ptr2526 = $tmp2528;
            org$pandalanguage$pandac$Type* $tmp2530 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2452);
            panda$core$String* $tmp2531 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2530);
            baseType2529 = $tmp2531;
            panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2529, &$s2533);
            ptrType2532 = $tmp2534;
            panda$core$String* $tmp2536 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2535 = $tmp2536;
            panda$core$String* $tmp2538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2537, cast2535);
            panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2538, &$s2539);
            panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2540, ptr2526);
            panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
            panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, ptrType2532);
            panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2545);
            (($fn2547) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2546);
            panda$core$String* $tmp2549 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2548 = $tmp2549;
            panda$core$String* $tmp2551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2550, load2548);
            panda$core$String* $tmp2553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2551, &$s2552);
            panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2553, baseType2529);
            panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, &$s2555);
            panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, ptrType2532);
            panda$core$String* $tmp2559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, &$s2558);
            panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, cast2535);
            panda$core$String* $tmp2562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, &$s2561);
            (($fn2563) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2562);
            return load2548;
        }
        }
        else {
        panda$core$Bit $tmp2565 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1204_92453, &$s2564);
        if ($tmp2565.value) {
        {
            panda$core$Int64 $tmp2566 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2566, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2567.value);
            panda$core$Object* $tmp2569 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2570 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2569), p_out);
            ptr2568 = $tmp2570;
            org$pandalanguage$pandac$Type* $tmp2572 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2452);
            panda$core$String* $tmp2573 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2572);
            baseType2571 = $tmp2573;
            panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType2571, &$s2575);
            ptrType2574 = $tmp2576;
            panda$core$String* $tmp2578 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast2577 = $tmp2578;
            panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2579, cast2577);
            panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2581);
            panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, ptr2568);
            panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2584);
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, ptrType2574);
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2586, &$s2587);
            (($fn2589) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2588);
            panda$core$Object* $tmp2591 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2592 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2591), p_out);
            indexStruct2590 = $tmp2592;
            panda$core$String* $tmp2594 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index2593 = $tmp2594;
            panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2595, index2593);
            panda$core$String* $tmp2598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, &$s2597);
            panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2598, indexStruct2590);
            panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, &$s2600);
            (($fn2602) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2601);
            panda$core$String* $tmp2604 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offsetPtr2603 = $tmp2604;
            panda$core$String* $tmp2606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2605, offsetPtr2603);
            panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2606, &$s2607);
            panda$core$String* $tmp2609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, baseType2571);
            panda$core$String* $tmp2611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2609, &$s2610);
            panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2611, ptrType2574);
            panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, &$s2613);
            panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2614, cast2577);
            panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, &$s2616);
            panda$core$String* $tmp2619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2618, index2593);
            panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2619, &$s2620);
            panda$core$String* $tmp2622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2617, $tmp2621);
            (($fn2623) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2622);
            panda$core$String* $tmp2625 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            load2624 = $tmp2625;
            panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2626, load2624);
            panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2628);
            panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, baseType2571);
            panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2630, &$s2631);
            panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2632, ptrType2574);
            panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2633, &$s2634);
            panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, offsetPtr2603);
            panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2636, &$s2637);
            (($fn2639) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2638);
            return load2624;
        }
        }
        else {
        panda$core$Bit $tmp2641 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1204_92453, &$s2640);
        if ($tmp2641.value) {
        {
            panda$core$Int64 $tmp2642 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2642, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2643.value);
            panda$core$Object* $tmp2645 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2646 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2645), p_out);
            ptr2644 = $tmp2646;
            panda$core$String* $tmp2648 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptrCast2647 = $tmp2648;
            panda$core$String* $tmp2650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2649, ptrCast2647);
            panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2650, &$s2651);
            panda$core$String* $tmp2653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, ptr2644);
            panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2653, &$s2654);
            (($fn2656) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2655);
            panda$core$Object* $tmp2658 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2659 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2658), p_out);
            countStruct2657 = $tmp2659;
            panda$core$String* $tmp2661 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            count2660 = $tmp2661;
            panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2662, count2660);
            panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2663, &$s2664);
            panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2665, countStruct2657);
            panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2666, &$s2667);
            (($fn2669) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2668);
            panda$core$String* $tmp2671 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            size2670 = $tmp2671;
            panda$core$String* $tmp2673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2672, size2670);
            panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, &$s2674);
            panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2675, &$s2676);
            panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, &$s2678);
            panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, count2660);
            panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2681);
            org$pandalanguage$pandac$Type* $tmp2683 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2452);
            panda$core$Object* $tmp2684 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp2683->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2685 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, ((org$pandalanguage$pandac$Type*) $tmp2684));
            panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2682, ((panda$core$Object*) wrap_panda$core$Int64($tmp2685)));
            (($fn2687) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2686);
            panda$core$String* $tmp2689 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            realloc2688 = $tmp2689;
            panda$core$String* $tmp2691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2690, realloc2688);
            panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2691, &$s2692);
            panda$core$String* $tmp2694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2693, ptrCast2647);
            panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2694, &$s2695);
            panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, &$s2697);
            panda$core$String* $tmp2700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, &$s2699);
            panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2701, size2670);
            panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, &$s2703);
            panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, $tmp2704);
            (($fn2706) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2705);
            panda$core$String* $tmp2708 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2707 = $tmp2708;
            panda$core$String* $tmp2710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2709, result2707);
            panda$core$String* $tmp2712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, &$s2711);
            panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2712, realloc2688);
            panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
            org$pandalanguage$pandac$Type* $tmp2716 = org$pandalanguage$pandac$MethodRef$returnType$R$org$pandalanguage$pandac$Type(m2452);
            panda$core$String* $tmp2717 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp2716);
            panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, $tmp2717);
            panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, &$s2719);
            (($fn2721) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2720);
            return result2707;
        }
        }
        else {
        panda$core$Bit $tmp2723 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1204_92453, &$s2722);
        if ($tmp2723.value) {
        {
            panda$core$Int64 $tmp2724 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2724, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2725.value);
            panda$core$Object* $tmp2727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2728 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2727), p_out);
            ptr2726 = $tmp2728;
            panda$core$Object* $tmp2730 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2731 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp2730)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2732 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2731));
            baseType2729 = $tmp2732;
            panda$core$Object* $tmp2734 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2735 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2734), p_out);
            offsetStruct2733 = $tmp2735;
            panda$core$String* $tmp2737 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            offset2736 = $tmp2737;
            panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2738, offset2736);
            panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
            panda$core$String* $tmp2742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2741, offsetStruct2733);
            panda$core$String* $tmp2744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2742, &$s2743);
            (($fn2745) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2744);
            panda$core$String* $tmp2747 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2746 = $tmp2747;
            panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2748, result2746);
            panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, &$s2750);
            panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, baseType2729);
            panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2752, &$s2753);
            panda$core$String* $tmp2755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2754, ptr2726);
            panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2755, &$s2756);
            panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2757, offset2736);
            panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2758, &$s2759);
            (($fn2761) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2760);
            return result2746;
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
    org$pandalanguage$pandac$MethodDecl* m2762;
    panda$core$String* selfRef2763;
    panda$core$Int64 argStart2765;
    panda$collections$Array* args2769;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2772;
    panda$core$String* end2795;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline2804;
    org$pandalanguage$pandac$MethodDecl* old2811;
    panda$core$String* phi2824;
    panda$core$String* separator2835;
    panda$collections$Iterator* ret$Iter2837;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret2849;
    m2762 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$collections$Stack$push$panda$collections$Stack$T(self->compiler->currentClass, ((panda$core$Object*) m2762->owner));
    panda$collections$IdentityMap$$IDXEQ$panda$collections$IdentityMap$K$panda$collections$IdentityMap$V(self->currentlyInlining, ((panda$core$Object*) m2762), ((panda$core$Object*) m2762));
    selfRef2763 = &$s2764;
    panda$core$Bit $tmp2766 = org$pandalanguage$pandac$MethodDecl$isInstance$R$panda$core$Bit(m2762);
    if ($tmp2766.value) {
    {
        argStart2765 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp2767 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp2768 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2767), p_out);
        selfRef2763 = $tmp2768;
    }
    }
    else {
    {
        argStart2765 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp2770 = (panda$collections$Array*) malloc(40);
    $tmp2770->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2770->refCount.value = 1;
    panda$collections$Array$init($tmp2770);
    args2769 = $tmp2770;
    panda$core$Int64 $tmp2773 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2772, argStart2765, $tmp2773, ((panda$core$Bit) { false }));
    int64_t $tmp2775 = $tmp2772.min.value;
    panda$core$Int64 i2774 = { $tmp2775 };
    int64_t $tmp2777 = $tmp2772.max.value;
    bool $tmp2778 = $tmp2772.inclusive.value;
    if ($tmp2778) goto $l2785; else goto $l2786;
    $l2785:;
    if ($tmp2775 <= $tmp2777) goto $l2779; else goto $l2781;
    $l2786:;
    if ($tmp2775 < $tmp2777) goto $l2779; else goto $l2781;
    $l2779:;
    {
        panda$core$Object* $tmp2787 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2774);
        panda$core$String* $tmp2788 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2787), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args2769, ((panda$core$Object*) $tmp2788));
    }
    $l2782:;
    int64_t $tmp2790 = $tmp2777 - i2774.value;
    if ($tmp2778) goto $l2791; else goto $l2792;
    $l2791:;
    if ($tmp2790 >= 1) goto $l2789; else goto $l2781;
    $l2792:;
    if ($tmp2790 > 1) goto $l2789; else goto $l2781;
    $l2789:;
    i2774.value += 1;
    goto $l2779;
    $l2781:;
    panda$core$String* $tmp2796 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    end2795 = $tmp2796;
    panda$core$Int64 $tmp2797 = panda$collections$Array$get_count$R$panda$core$Int64(args2769);
    panda$core$Int64 $tmp2798 = panda$collections$Array$get_count$R$panda$core$Int64(m2762->parameters);
    panda$core$Bit $tmp2799 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp2797, $tmp2798);
    if ($tmp2799.value) {
    {
        panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2800, ((panda$core$Object*) p_call));
        panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2801, &$s2802);
        panda$io$Console$printLine$panda$core$Object(((panda$core$Object*) $tmp2803));
        panda$core$System$crash();
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp2805 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp2805->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp2805->refCount.value = 1;
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2807, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp2805, $tmp2810, selfRef2763, ((panda$collections$ListView*) args2769), end2795);
    inline2804 = $tmp2805;
    panda$collections$Stack$push$panda$collections$Stack$T(self->inlineContext, ((panda$core$Object*) inline2804));
    old2811 = self->currentMethod;
    self->currentMethod = m2762;
    org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_body, p_out);
    self->currentMethod = old2811;
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->inlineContext);
    panda$core$Bit $tmp2812 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp2813 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2812);
    if ($tmp2813.value) {
    {
        (($fn2815) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s2814);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end2795, p_out);
    panda$collections$IdentityMap$remove$panda$collections$IdentityMap$K(self->currentlyInlining, ((panda$core$Object*) m2762));
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->compiler->currentClass);
    panda$core$Int64 $tmp2816 = panda$collections$Array$get_count$R$panda$core$Int64(inline2804->returns);
    panda$core$Bit $tmp2817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2816, ((panda$core$Int64) { 1 }));
    if ($tmp2817.value) {
    {
        panda$core$Object* $tmp2818 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline2804->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2818)->second);
    }
    }
    panda$core$Int64 $tmp2819 = panda$collections$Array$get_count$R$panda$core$Int64(inline2804->returns);
    panda$core$Bit $tmp2820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2819, ((panda$core$Int64) { 0 }));
    if ($tmp2820.value) {
    {
        (($fn2822) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s2821);
        return &$s2823;
    }
    }
    panda$core$String* $tmp2825 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    phi2824 = $tmp2825;
    panda$core$String* $tmp2827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2826, phi2824);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2827, &$s2828);
    panda$core$String* $tmp2830 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, m2762->returnType);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, $tmp2830);
    panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, &$s2832);
    (($fn2834) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2833);
    separator2835 = &$s2836;
    {
        ITable* $tmp2838 = ((panda$collections$Iterable*) inline2804->returns)->$class->itable;
        while ($tmp2838->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2838 = $tmp2838->next;
        }
        $fn2840 $tmp2839 = $tmp2838->methods[0];
        panda$collections$Iterator* $tmp2841 = $tmp2839(((panda$collections$Iterable*) inline2804->returns));
        ret$Iter2837 = $tmp2841;
        $l2842:;
        ITable* $tmp2844 = ret$Iter2837->$class->itable;
        while ($tmp2844->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2844 = $tmp2844->next;
        }
        $fn2846 $tmp2845 = $tmp2844->methods[0];
        panda$core$Bit $tmp2847 = $tmp2845(ret$Iter2837);
        panda$core$Bit $tmp2848 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2847);
        if (!$tmp2848.value) goto $l2843;
        {
            ITable* $tmp2850 = ret$Iter2837->$class->itable;
            while ($tmp2850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2850 = $tmp2850->next;
            }
            $fn2852 $tmp2851 = $tmp2850->methods[1];
            panda$core$Object* $tmp2853 = $tmp2851(ret$Iter2837);
            ret2849 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp2853);
            panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2854, separator2835);
            panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, &$s2856);
            panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2857, ((panda$core$String*) ret2849->second));
            panda$core$String* $tmp2860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, &$s2859);
            panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2860, ((panda$core$String*) ret2849->first));
            panda$core$String* $tmp2863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2861, &$s2862);
            (($fn2864) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp2863);
            separator2835 = &$s2865;
        }
        goto $l2842;
        $l2843:;
    }
    (($fn2866) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi2824;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m2868;
    panda$core$String* bit2878;
    panda$core$String* result2882;
    panda$core$String* bit2898;
    panda$core$String* result2902;
    org$pandalanguage$pandac$IRNode* block2919;
    panda$collections$Array* args2923;
    org$pandalanguage$pandac$Type* actualMethodType2927;
    panda$core$String* actualResultType2928;
    panda$core$Bit isSuper2929;
    panda$core$Int64 offset2949;
    panda$core$Range$LTpanda$core$Int64$GT $tmp2954;
    panda$core$String* arg2969;
    panda$core$String* target3001;
    panda$core$String* methodRef3005;
    panda$core$String* result3007;
    panda$core$Bit indirect3008;
    panda$core$String* separator3034;
    panda$core$String* indirectVar3036;
    panda$collections$Iterator* arg$Iter3057;
    panda$core$String* arg3069;
    panda$core$Bit $tmp2867 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp2867.value);
    m2868 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp2870 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2868->owner)->name, &$s2869);
    if ($tmp2870.value) {
    {
        panda$core$String* $tmp2871 = org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, p_out);
        return $tmp2871;
    }
    }
    if (m2868->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m2868);
    }
    }
    panda$core$Bit $tmp2873 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2868->owner)->name, &$s2872);
    if ($tmp2873.value) {
    {
        panda$core$Bit $tmp2875 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2868)->name, &$s2874);
        if ($tmp2875.value) {
        {
            panda$core$Int64 $tmp2876 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2876, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2877.value);
            panda$core$Object* $tmp2879 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2880 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2881 = org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2879), ((org$pandalanguage$pandac$IRNode*) $tmp2880), p_out);
            bit2878 = $tmp2881;
            panda$core$String* $tmp2883 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2882 = $tmp2883;
            panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2884, result2882);
            panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2885, &$s2886);
            panda$core$String* $tmp2889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2888, bit2878);
            panda$core$String* $tmp2891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2889, &$s2890);
            panda$core$String* $tmp2892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2887, $tmp2891);
            (($fn2893) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2892);
            return result2882;
        }
        }
        panda$core$Bit $tmp2895 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m2868)->name, &$s2894);
        if ($tmp2895.value) {
        {
            panda$core$Int64 $tmp2896 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
            panda$core$Bit $tmp2897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2896, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp2897.value);
            panda$core$Object* $tmp2899 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp2900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp2901 = org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2899), ((org$pandalanguage$pandac$IRNode*) $tmp2900), p_out);
            bit2898 = $tmp2901;
            panda$core$String* $tmp2903 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result2902 = $tmp2903;
            panda$core$String* $tmp2905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2904, result2902);
            panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2905, &$s2906);
            panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2908, bit2898);
            panda$core$String* $tmp2911 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2909, &$s2910);
            panda$core$String* $tmp2912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2907, $tmp2911);
            (($fn2913) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2912);
            return result2902;
        }
        }
    }
    }
    panda$core$Bit $tmp2915 = org$pandalanguage$pandac$Annotations$isInline$R$panda$core$Bit(m2868->annotations);
    bool $tmp2914 = $tmp2915.value;
    if (!$tmp2914) goto $l2916;
    panda$core$Object* $tmp2917 = panda$collections$IdentityMap$$IDX$panda$collections$IdentityMap$K$R$panda$collections$IdentityMap$V$Q(self->currentlyInlining, ((panda$core$Object*) m2868));
    $tmp2914 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp2917) == NULL }).value;
    $l2916:;
    panda$core$Bit $tmp2918 = { $tmp2914 };
    if ($tmp2918.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp2920 = org$pandalanguage$pandac$Compiler$compileBody$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$IRNode$Q(self->compiler, m2868);
        block2919 = $tmp2920;
        if (((panda$core$Bit) { block2919 != NULL }).value) {
        {
            panda$core$String* $tmp2921 = org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_call, block2919, p_out);
            return $tmp2921;
        }
        }
        return &$s2922;
    }
    }
    panda$collections$Array* $tmp2924 = (panda$collections$Array*) malloc(40);
    $tmp2924->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp2924->refCount.value = 1;
    panda$core$Int64 $tmp2926 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp2924, $tmp2926);
    args2923 = $tmp2924;
    panda$core$Int64 $tmp2931 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp2932 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp2931, ((panda$core$Int64) { 1 }));
    bool $tmp2930 = $tmp2932.value;
    if (!$tmp2930) goto $l2933;
    panda$core$Object* $tmp2934 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp2935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp2934)->kind, ((panda$core$Int64) { 1024 }));
    $tmp2930 = $tmp2935.value;
    $l2933:;
    panda$core$Bit $tmp2936 = { $tmp2930 };
    isSuper2929 = $tmp2936;
    panda$core$Bit $tmp2938 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper2929);
    bool $tmp2937 = $tmp2938.value;
    if (!$tmp2937) goto $l2939;
    panda$core$Bit $tmp2940 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m2868);
    $tmp2937 = $tmp2940.value;
    $l2939:;
    panda$core$Bit $tmp2941 = { $tmp2937 };
    if ($tmp2941.value) {
    {
        org$pandalanguage$pandac$Type* $tmp2942 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2868);
        actualMethodType2927 = $tmp2942;
        panda$core$Int64 $tmp2943 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2927->subtypes);
        panda$core$Int64 $tmp2944 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2943, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp2945 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2927->subtypes, $tmp2944);
        panda$core$String* $tmp2946 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2945));
        actualResultType2928 = $tmp2946;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp2947 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m2868);
        actualMethodType2927 = $tmp2947;
        panda$core$String* $tmp2948 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType2928 = $tmp2948;
    }
    }
    panda$core$Int64 $tmp2950 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp2951 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2927->subtypes);
    panda$core$Int64 $tmp2952 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp2950, $tmp2951);
    panda$core$Int64 $tmp2953 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp2952, ((panda$core$Int64) { 1 }));
    offset2949 = $tmp2953;
    panda$core$Int64 $tmp2955 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp2954, ((panda$core$Int64) { 0 }), $tmp2955, ((panda$core$Bit) { false }));
    int64_t $tmp2957 = $tmp2954.min.value;
    panda$core$Int64 i2956 = { $tmp2957 };
    int64_t $tmp2959 = $tmp2954.max.value;
    bool $tmp2960 = $tmp2954.inclusive.value;
    if ($tmp2960) goto $l2967; else goto $l2968;
    $l2967:;
    if ($tmp2957 <= $tmp2959) goto $l2961; else goto $l2963;
    $l2968:;
    if ($tmp2957 < $tmp2959) goto $l2961; else goto $l2963;
    $l2961:;
    {
        panda$core$Object* $tmp2970 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2956);
        panda$core$String* $tmp2971 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2970), p_out);
        arg2969 = $tmp2971;
        panda$core$Bit $tmp2973 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i2956, offset2949);
        bool $tmp2972 = $tmp2973.value;
        if (!$tmp2972) goto $l2974;
        panda$core$Int64 $tmp2975 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2956, offset2949);
        panda$core$Object* $tmp2976 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2927->subtypes, $tmp2975);
        panda$core$Object* $tmp2977 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2956);
        panda$core$Bit $tmp2978 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp2976), ((org$pandalanguage$pandac$IRNode*) $tmp2977)->type);
        $tmp2972 = $tmp2978.value;
        $l2974:;
        panda$core$Bit $tmp2979 = { $tmp2972 };
        if ($tmp2979.value) {
        {
            panda$core$Int64 $tmp2980 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2956, offset2949);
            panda$core$Object* $tmp2981 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2927->subtypes, $tmp2980);
            panda$core$String* $tmp2982 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp2981));
            panda$core$String* $tmp2984 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, &$s2983);
            panda$core$Object* $tmp2985 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2956);
            panda$core$Int64 $tmp2986 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i2956, offset2949);
            panda$core$Object* $tmp2987 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2927->subtypes, $tmp2986);
            panda$core$String* $tmp2988 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg2969, ((org$pandalanguage$pandac$IRNode*) $tmp2985)->type, ((org$pandalanguage$pandac$Type*) $tmp2987), p_out);
            panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2984, $tmp2988);
            arg2969 = $tmp2989;
        }
        }
        else {
        {
            panda$core$Object* $tmp2990 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i2956);
            panda$core$String* $tmp2991 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp2990)->type);
            panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, &$s2992);
            panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, arg2969);
            arg2969 = $tmp2994;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args2923, ((panda$core$Object*) arg2969));
    }
    $l2964:;
    int64_t $tmp2996 = $tmp2959 - i2956.value;
    if ($tmp2960) goto $l2997; else goto $l2998;
    $l2997:;
    if ($tmp2996 >= 1) goto $l2995; else goto $l2963;
    $l2998:;
    if ($tmp2996 > 1) goto $l2995; else goto $l2963;
    $l2995:;
    i2956.value += 1;
    goto $l2961;
    $l2963:;
    panda$core$Int64 $tmp3002 = panda$collections$Array$get_count$R$panda$core$Int64(args2923);
    panda$core$Bit $tmp3003 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3002, ((panda$core$Int64) { 0 }));
    if ($tmp3003.value) {
    {
        panda$core$Object* $tmp3004 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args2923, ((panda$core$Int64) { 0 }));
        target3001 = ((panda$core$String*) $tmp3004);
    }
    }
    else {
    {
        target3001 = NULL;
    }
    }
    panda$core$String* $tmp3006 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, target3001, m2868, isSuper2929, p_out);
    methodRef3005 = $tmp3006;
    panda$core$Bit $tmp3009 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m2868);
    indirect3008 = $tmp3009;
    if (indirect3008.value) {
    {
        panda$core$String* $tmp3011 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2868);
        panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3010, $tmp3011);
        panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, &$s3013);
        (($fn3015) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3014);
    }
    }
    else {
    {
        panda$core$String* $tmp3016 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3007 = $tmp3016;
        panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3017, result3007);
        panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3018, &$s3019);
        panda$core$String* $tmp3021 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m2868);
        panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, $tmp3021);
        panda$core$String* $tmp3024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3022, &$s3023);
        panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3024, actualResultType2928);
        panda$core$String* $tmp3027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, &$s3026);
        (($fn3028) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3027);
    }
    }
    panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3029, methodRef3005);
    panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3030, &$s3031);
    (($fn3033) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3032);
    separator3034 = &$s3035;
    if (indirect3008.value) {
    {
        panda$core$Int64 $tmp3037 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3037;
        panda$core$String* $tmp3039 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3038, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3036 = $tmp3039;
        panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3040, indirectVar3036);
        panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
        panda$core$String* $tmp3044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3043, actualResultType2928);
        panda$core$String* $tmp3046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3044, &$s3045);
        (($fn3047) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3046);
        panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3048, actualResultType2928);
        panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, &$s3050);
        panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3051, indirectVar3036);
        panda$core$String* $tmp3054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, &$s3053);
        (($fn3055) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3054);
        separator3034 = &$s3056;
    }
    }
    {
        ITable* $tmp3058 = ((panda$collections$Iterable*) args2923)->$class->itable;
        while ($tmp3058->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3058 = $tmp3058->next;
        }
        $fn3060 $tmp3059 = $tmp3058->methods[0];
        panda$collections$Iterator* $tmp3061 = $tmp3059(((panda$collections$Iterable*) args2923));
        arg$Iter3057 = $tmp3061;
        $l3062:;
        ITable* $tmp3064 = arg$Iter3057->$class->itable;
        while ($tmp3064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3064 = $tmp3064->next;
        }
        $fn3066 $tmp3065 = $tmp3064->methods[0];
        panda$core$Bit $tmp3067 = $tmp3065(arg$Iter3057);
        panda$core$Bit $tmp3068 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3067);
        if (!$tmp3068.value) goto $l3063;
        {
            ITable* $tmp3070 = arg$Iter3057->$class->itable;
            while ($tmp3070->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3070 = $tmp3070->next;
            }
            $fn3072 $tmp3071 = $tmp3070->methods[1];
            panda$core$Object* $tmp3073 = $tmp3071(arg$Iter3057);
            arg3069 = ((panda$core$String*) $tmp3073);
            panda$core$String* $tmp3075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3074, separator3034);
            panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3075, &$s3076);
            panda$core$String* $tmp3078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3077, arg3069);
            panda$core$String* $tmp3080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3078, &$s3079);
            (($fn3081) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3080);
            separator3034 = &$s3082;
        }
        goto $l3062;
        $l3063:;
    }
    (($fn3084) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3083);
    if (indirect3008.value) {
    {
        panda$core$String* $tmp3085 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3007 = $tmp3085;
        panda$core$String* $tmp3087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3086, result3007);
        panda$core$String* $tmp3089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3087, &$s3088);
        panda$core$String* $tmp3090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3089, actualResultType2928);
        panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3090, &$s3091);
        panda$core$String* $tmp3093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3092, actualResultType2928);
        panda$core$String* $tmp3095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3093, &$s3094);
        panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3095, indirectVar3036);
        (($fn3097) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3096);
    }
    }
    panda$core$String* $tmp3098 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
    panda$core$Bit $tmp3099 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3098, actualResultType2928);
    if ($tmp3099.value) {
    {
        panda$core$Int64 $tmp3100 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType2927->subtypes);
        panda$core$Int64 $tmp3101 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3100, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3102 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType2927->subtypes, $tmp3101);
        panda$core$String* $tmp3103 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, result3007, ((org$pandalanguage$pandac$Type*) $tmp3102), p_call->type, p_out);
        return $tmp3103;
    }
    }
    return result3007;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3104;
    panda$core$String* testStart3107;
    panda$core$String* isNonNull3108;
    panda$core$String* nonNullLabel3122;
    panda$core$String* endLabel3124;
    panda$core$String* unwrapped3137;
    panda$core$String* nonNullValue3140;
    panda$core$String* result3148;
    panda$core$String* mallocRef3170;
    panda$core$String* wrapperTypeName3182;
    panda$core$String* wrapperType3185;
    panda$core$String* wrapperCast3188;
    panda$core$String* classPtr3201;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3219;
    panda$core$String* refCount3234;
    panda$core$String* target3257;
    panda$core$String* result3293;
    org$pandalanguage$pandac$ClassDecl* $tmp3105 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_srcType);
    src3104 = $tmp3105;
    PANDA_ASSERT(((panda$core$Bit) { src3104 != NULL }).value);
    panda$core$Bit $tmp3106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3106.value) {
    {
        testStart3107 = self->currentBlock;
        panda$core$String* $tmp3109 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3108 = $tmp3109;
        panda$core$String* $tmp3111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3110, isNonNull3108);
        panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3111, &$s3112);
        panda$core$String* $tmp3114 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, $tmp3114);
        panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, &$s3116);
        panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, p_value);
        panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, &$s3119);
        (($fn3121) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3120);
        panda$core$String* $tmp3123 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3122 = $tmp3123;
        panda$core$String* $tmp3125 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3124 = $tmp3125;
        panda$core$String* $tmp3127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3126, isNonNull3108);
        panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3127, &$s3128);
        panda$core$String* $tmp3130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, nonNullLabel3122);
        panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3130, &$s3131);
        panda$core$String* $tmp3133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, endLabel3124);
        panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3133, &$s3134);
        (($fn3136) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3135);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3122, p_out);
        panda$core$Object* $tmp3138 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3139 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3138), p_out);
        unwrapped3137 = $tmp3139;
        panda$core$Object* $tmp3141 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3142 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, unwrapped3137, ((org$pandalanguage$pandac$Type*) $tmp3141), p_dstType, p_out);
        nonNullValue3140 = $tmp3142;
        panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3143, endLabel3124);
        panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, &$s3145);
        (($fn3147) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3146);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3124, p_out);
        panda$core$String* $tmp3149 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3148 = $tmp3149;
        panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3150, result3148);
        panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, &$s3152);
        panda$core$String* $tmp3154 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, $tmp3154);
        panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3155, &$s3156);
        panda$core$String* $tmp3158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, testStart3107);
        panda$core$String* $tmp3160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3158, &$s3159);
        panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3161, nonNullValue3140);
        panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, &$s3163);
        panda$core$String* $tmp3165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3164, nonNullLabel3122);
        panda$core$String* $tmp3167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3165, &$s3166);
        panda$core$String* $tmp3168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3160, $tmp3167);
        (($fn3169) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3168);
        return result3148;
    }
    }
    panda$core$String* $tmp3171 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    mallocRef3170 = $tmp3171;
    panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3172, mallocRef3170);
    panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, &$s3174);
    org$pandalanguage$pandac$Type* $tmp3176 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3104);
    panda$core$Int64 $tmp3177 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, $tmp3176);
    panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3175, ((panda$core$Object*) wrap_panda$core$Int64($tmp3177)));
    panda$core$String* $tmp3180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, &$s3179);
    (($fn3181) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3180);
    org$pandalanguage$pandac$Type* $tmp3183 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3104);
    panda$core$String* $tmp3184 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3183);
    wrapperTypeName3182 = $tmp3184;
    org$pandalanguage$pandac$Type* $tmp3186 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(src3104);
    panda$core$String* $tmp3187 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3186);
    wrapperType3185 = $tmp3187;
    panda$core$String* $tmp3189 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    wrapperCast3188 = $tmp3189;
    panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3190, wrapperCast3188);
    panda$core$String* $tmp3193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3191, &$s3192);
    panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3193, mallocRef3170);
    panda$core$String* $tmp3196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, &$s3195);
    panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3196, wrapperType3185);
    panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
    (($fn3200) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3199);
    panda$core$String* $tmp3202 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3201 = $tmp3202;
    panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3203, classPtr3201);
    panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
    panda$core$String* $tmp3207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3206, wrapperTypeName3182);
    panda$core$String* $tmp3209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3207, &$s3208);
    panda$core$String* $tmp3211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3210, wrapperType3185);
    panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3211, &$s3212);
    panda$core$String* $tmp3214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3213, wrapperCast3188);
    panda$core$String* $tmp3216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3214, &$s3215);
    panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3209, $tmp3216);
    (($fn3218) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3217);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3220 = org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, src3104);
    cc3219 = $tmp3220;
    panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3221, cc3219->type);
    panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3222, &$s3223);
    panda$core$String* $tmp3225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, cc3219->name);
    panda$core$String* $tmp3227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3225, &$s3226);
    panda$core$String* $tmp3229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3228, classPtr3201);
    panda$core$String* $tmp3231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3229, &$s3230);
    panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3227, $tmp3231);
    (($fn3233) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3232);
    panda$core$String* $tmp3235 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    refCount3234 = $tmp3235;
    panda$core$String* $tmp3237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3236, refCount3234);
    panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3237, &$s3238);
    panda$core$String* $tmp3240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, wrapperTypeName3182);
    panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3240, &$s3241);
    panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3243, wrapperType3185);
    panda$core$String* $tmp3246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, &$s3245);
    panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3246, wrapperCast3188);
    panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, &$s3248);
    panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3242, $tmp3249);
    (($fn3251) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3250);
    panda$core$String* $tmp3253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3252, refCount3234);
    panda$core$String* $tmp3255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3253, &$s3254);
    (($fn3256) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3255);
    panda$core$String* $tmp3258 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    target3257 = $tmp3258;
    panda$core$String* $tmp3260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3259, target3257);
    panda$core$String* $tmp3262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3260, &$s3261);
    panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3262, wrapperTypeName3182);
    panda$core$String* $tmp3265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3263, &$s3264);
    panda$core$String* $tmp3267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3266, wrapperType3185);
    panda$core$String* $tmp3269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3267, &$s3268);
    panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3269, wrapperCast3188);
    panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, &$s3271);
    panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3265, $tmp3272);
    (($fn3274) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3273);
    panda$core$String* $tmp3276 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3275, $tmp3276);
    panda$core$String* $tmp3279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3277, &$s3278);
    panda$core$String* $tmp3280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3279, p_value);
    panda$core$String* $tmp3282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3280, &$s3281);
    panda$core$String* $tmp3283 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3282, $tmp3283);
    panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3284, &$s3285);
    panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, target3257);
    panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3287, &$s3288);
    (($fn3290) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3289);
    panda$core$String* $tmp3291 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    panda$core$Bit $tmp3292 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3185, $tmp3291);
    if ($tmp3292.value) {
    {
        panda$core$String* $tmp3294 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3293 = $tmp3294;
        panda$core$String* $tmp3296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3295, result3293);
        panda$core$String* $tmp3298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3296, &$s3297);
        panda$core$String* $tmp3299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3298, wrapperType3185);
        panda$core$String* $tmp3301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3299, &$s3300);
        panda$core$String* $tmp3302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3301, wrapperCast3188);
        panda$core$String* $tmp3304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3302, &$s3303);
        panda$core$String* $tmp3305 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3304, $tmp3305);
        panda$core$String* $tmp3308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3306, &$s3307);
        (($fn3309) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3308);
        return result3293;
    }
    }
    return wrapperCast3188;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3313;
    panda$core$String* t3314;
    org$pandalanguage$pandac$ClassDecl* cl3318;
    panda$core$String* base3322;
    panda$collections$ListView* fields3325;
    panda$core$Int64$nullable index3327;
    panda$core$Range$LTpanda$core$Int64$GT $tmp3328;
    panda$core$String* result3356;
    panda$core$String* ptr3376;
    panda$core$String* result3385;
    panda$core$Bit $tmp3310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_fieldRef->kind, ((panda$core$Int64) { 1026 }));
    PANDA_ASSERT($tmp3310.value);
    panda$core$Int64 $tmp3311 = panda$collections$Array$get_count$R$panda$core$Int64(p_fieldRef->children);
    panda$core$Bit $tmp3312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3311, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3312.value);
    field3313 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3315 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, field3313->type);
    t3314 = $tmp3315;
    panda$core$Bit $tmp3316 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(field3313->annotations);
    if ($tmp3316.value) {
    {
        PANDA_ASSERT(((panda$core$Bit) { field3313->value != NULL }).value);
        panda$core$String* $tmp3317 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, field3313->value, p_out);
        return $tmp3317;
    }
    }
    panda$core$Object* $tmp3319 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3320 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3319)->type);
    cl3318 = $tmp3320;
    PANDA_ASSERT(((panda$core$Bit) { cl3318 != NULL }).value);
    panda$core$Bit $tmp3321 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3318);
    if ($tmp3321.value) {
    {
        panda$core$Object* $tmp3323 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3324 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3323), p_out);
        base3322 = $tmp3324;
        panda$collections$ListView* $tmp3326 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl3318);
        fields3325 = $tmp3326;
        index3327 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3329 = ((panda$collections$CollectionView*) fields3325)->$class->itable;
        while ($tmp3329->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3329 = $tmp3329->next;
        }
        $fn3331 $tmp3330 = $tmp3329->methods[0];
        panda$core$Int64 $tmp3332 = $tmp3330(((panda$collections$CollectionView*) fields3325));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp3328, ((panda$core$Int64) { 0 }), $tmp3332, ((panda$core$Bit) { false }));
        int64_t $tmp3334 = $tmp3328.min.value;
        panda$core$Int64 i3333 = { $tmp3334 };
        int64_t $tmp3336 = $tmp3328.max.value;
        bool $tmp3337 = $tmp3328.inclusive.value;
        if ($tmp3337) goto $l3344; else goto $l3345;
        $l3344:;
        if ($tmp3334 <= $tmp3336) goto $l3338; else goto $l3340;
        $l3345:;
        if ($tmp3334 < $tmp3336) goto $l3338; else goto $l3340;
        $l3338:;
        {
            ITable* $tmp3346 = fields3325->$class->itable;
            while ($tmp3346->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3346 = $tmp3346->next;
            }
            $fn3348 $tmp3347 = $tmp3346->methods[0];
            panda$core$Object* $tmp3349 = $tmp3347(fields3325, i3333);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3349)) == ((panda$core$Object*) field3313) }).value) {
            {
                index3327 = ((panda$core$Int64$nullable) { i3333, true });
                goto $l3340;
            }
            }
        }
        $l3341:;
        int64_t $tmp3351 = $tmp3336 - i3333.value;
        if ($tmp3337) goto $l3352; else goto $l3353;
        $l3352:;
        if ($tmp3351 >= 1) goto $l3350; else goto $l3340;
        $l3353:;
        if ($tmp3351 > 1) goto $l3350; else goto $l3340;
        $l3350:;
        i3333.value += 1;
        goto $l3338;
        $l3340:;
        PANDA_ASSERT(((panda$core$Bit) { index3327.nonnull }).value);
        panda$core$String* $tmp3357 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3356 = $tmp3357;
        panda$core$String* $tmp3359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3358, result3356);
        panda$core$String* $tmp3361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3359, &$s3360);
        panda$core$Object* $tmp3362 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3363 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3362)->type);
        panda$core$String* $tmp3364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3361, $tmp3363);
        panda$core$String* $tmp3366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3364, &$s3365);
        panda$core$String* $tmp3367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3366, base3322);
        panda$core$String* $tmp3369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3367, &$s3368);
        panda$core$String* $tmp3371 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3370, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3327.value))));
        panda$core$String* $tmp3373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3371, &$s3372);
        panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3369, $tmp3373);
        (($fn3375) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3374);
        return result3356;
    }
    }
    panda$core$String* $tmp3378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3377, t3314);
    panda$core$String* $tmp3380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3378, &$s3379);
    panda$core$String* $tmp3381 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_fieldRef, p_out);
    panda$core$String* $tmp3382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3380, $tmp3381);
    panda$core$String* $tmp3384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3382, &$s3383);
    ptr3376 = $tmp3384;
    panda$core$String* $tmp3386 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3385 = $tmp3386;
    panda$core$String* $tmp3388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3387, result3385);
    panda$core$String* $tmp3390 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3388, &$s3389);
    panda$core$String* $tmp3391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3390, t3314);
    panda$core$String* $tmp3393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3391, &$s3392);
    panda$core$String* $tmp3394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3393, ptr3376);
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3394, &$s3395);
    (($fn3397) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3396);
    return result3385;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target3398;
    panda$core$String* testStart3401;
    panda$core$String* isNonNull3402;
    panda$core$String* nonNullLabel3416;
    panda$core$String* endLabel3418;
    panda$core$String* wrapped3431;
    panda$core$String* nonNullValue3434;
    panda$core$String* result3442;
    panda$core$String* targetType3471;
    panda$core$String* wrapperTypeName3473;
    panda$core$String* wrapperType3475;
    panda$core$String* srcCast3477;
    panda$core$String* load3494;
    panda$core$String* result3510;
    org$pandalanguage$pandac$ClassDecl* $tmp3399 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_dstType);
    target3398 = $tmp3399;
    PANDA_ASSERT(((panda$core$Bit) { target3398 != NULL }).value);
    panda$core$Bit $tmp3400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3400.value) {
    {
        testStart3401 = self->currentBlock;
        panda$core$String* $tmp3403 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        isNonNull3402 = $tmp3403;
        panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3404, isNonNull3402);
        panda$core$String* $tmp3407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, &$s3406);
        panda$core$String* $tmp3408 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
        panda$core$String* $tmp3409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3407, $tmp3408);
        panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3409, &$s3410);
        panda$core$String* $tmp3412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3411, p_value);
        panda$core$String* $tmp3414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3412, &$s3413);
        (($fn3415) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3414);
        panda$core$String* $tmp3417 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        nonNullLabel3416 = $tmp3417;
        panda$core$String* $tmp3419 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        endLabel3418 = $tmp3419;
        panda$core$String* $tmp3421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3420, isNonNull3402);
        panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3421, &$s3422);
        panda$core$String* $tmp3424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, nonNullLabel3416);
        panda$core$String* $tmp3426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3424, &$s3425);
        panda$core$String* $tmp3427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3426, endLabel3418);
        panda$core$String* $tmp3429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3427, &$s3428);
        (($fn3430) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3429);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, nonNullLabel3416, p_out);
        panda$core$Object* $tmp3432 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3433 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3432), p_out);
        wrapped3431 = $tmp3433;
        panda$core$Object* $tmp3435 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3436 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, wrapped3431, ((org$pandalanguage$pandac$Type*) $tmp3435), p_dstType, p_out);
        nonNullValue3434 = $tmp3436;
        panda$core$String* $tmp3438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3437, endLabel3418);
        panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3438, &$s3439);
        (($fn3441) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3440);
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel3418, p_out);
        panda$core$String* $tmp3443 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3442 = $tmp3443;
        panda$core$String* $tmp3445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3444, result3442);
        panda$core$String* $tmp3447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3445, &$s3446);
        panda$core$String* $tmp3448 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
        panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3447, $tmp3448);
        panda$core$String* $tmp3451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3449, &$s3450);
        panda$core$Object* $tmp3453 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3454 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3453));
        panda$core$String* $tmp3455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3452, $tmp3454);
        panda$core$String* $tmp3457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3455, &$s3456);
        panda$core$String* $tmp3458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3451, $tmp3457);
        panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3459, testStart3401);
        panda$core$String* $tmp3462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3460, &$s3461);
        panda$core$String* $tmp3463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3462, nonNullValue3434);
        panda$core$String* $tmp3465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3463, &$s3464);
        panda$core$String* $tmp3466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3465, nonNullLabel3416);
        panda$core$String* $tmp3468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3466, &$s3467);
        panda$core$String* $tmp3469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3458, $tmp3468);
        (($fn3470) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3469);
        return result3442;
    }
    }
    panda$core$String* $tmp3472 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    targetType3471 = $tmp3472;
    panda$core$String* $tmp3474 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperTypeName3473 = $tmp3474;
    panda$core$String* $tmp3476 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    wrapperType3475 = $tmp3476;
    panda$core$String* $tmp3478 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    srcCast3477 = $tmp3478;
    panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3479, srcCast3477);
    panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3480, &$s3481);
    panda$core$String* $tmp3483 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3482, $tmp3483);
    panda$core$String* $tmp3486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3484, &$s3485);
    panda$core$String* $tmp3487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3486, p_value);
    panda$core$String* $tmp3489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3487, &$s3488);
    panda$core$String* $tmp3490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3489, wrapperType3475);
    panda$core$String* $tmp3492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3490, &$s3491);
    (($fn3493) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3492);
    panda$core$String* $tmp3495 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    load3494 = $tmp3495;
    panda$core$String* $tmp3497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3496, load3494);
    panda$core$String* $tmp3499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3497, &$s3498);
    panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3499, wrapperTypeName3473);
    panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3500, &$s3501);
    panda$core$String* $tmp3503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3502, wrapperType3475);
    panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3503, &$s3504);
    panda$core$String* $tmp3506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3505, srcCast3477);
    panda$core$String* $tmp3508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3506, &$s3507);
    (($fn3509) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3508);
    panda$core$String* $tmp3511 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3510 = $tmp3511;
    panda$core$String* $tmp3513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3512, result3510);
    panda$core$String* $tmp3515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3513, &$s3514);
    panda$core$String* $tmp3516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3515, wrapperTypeName3473);
    panda$core$String* $tmp3518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3516, &$s3517);
    panda$core$String* $tmp3519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3518, load3494);
    panda$core$String* $tmp3521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3519, &$s3520);
    panda$core$String* $tmp3522 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3521, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp3524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3522, &$s3523);
    (($fn3525) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3524);
    return result3510;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType3526;
    panda$core$String* result3528;
    panda$core$String* $tmp3527 = org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_dstType);
    nullableType3526 = $tmp3527;
    panda$core$String* $tmp3529 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3528 = $tmp3529;
    panda$core$String* $tmp3531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3530, result3528);
    panda$core$String* $tmp3533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3531, &$s3532);
    panda$core$String* $tmp3534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3533, nullableType3526);
    panda$core$String* $tmp3536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3534, &$s3535);
    panda$core$String* $tmp3538 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3537, $tmp3538);
    panda$core$String* $tmp3541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3539, &$s3540);
    panda$core$String* $tmp3542 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3541, $tmp3542);
    panda$core$String* $tmp3545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3543, &$s3544);
    panda$core$String* $tmp3546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3545, p_value);
    panda$core$String* $tmp3548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3546, &$s3547);
    panda$core$String* $tmp3549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3536, $tmp3548);
    (($fn3550) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3549);
    return result3528;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3551;
    panda$core$String* $tmp3552 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3551 = $tmp3552;
    panda$core$String* $tmp3554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3553, result3551);
    panda$core$String* $tmp3556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3554, &$s3555);
    panda$core$String* $tmp3557 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_srcType);
    panda$core$String* $tmp3558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3556, $tmp3557);
    panda$core$String* $tmp3560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3558, &$s3559);
    panda$core$String* $tmp3561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3560, p_value);
    panda$core$String* $tmp3563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3561, &$s3562);
    (($fn3564) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3563);
    return result3551;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op3565;
    panda$core$Int64 size13568;
    panda$core$Int64 size23570;
    org$pandalanguage$pandac$ClassDecl* srcClass3578;
    org$pandalanguage$pandac$ClassDecl* targetClass3580;
    panda$core$String* srcType3619;
    panda$core$String* dstType3621;
    panda$core$String* result3624;
    panda$core$Bit $tmp3566 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_target);
    if ($tmp3566.value) {
    {
        panda$core$Bit $tmp3567 = org$pandalanguage$pandac$Type$isBuiltinNumber$R$panda$core$Bit(p_src);
        PANDA_ASSERT($tmp3567.value);
        panda$core$Int64 $tmp3569 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_src);
        size13568 = $tmp3569;
        panda$core$Int64 $tmp3571 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_target);
        size23570 = $tmp3571;
        panda$core$Bit $tmp3572 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size13568, size23570);
        if ($tmp3572.value) {
        {
            op3565 = &$s3573;
        }
        }
        else {
        panda$core$Bit $tmp3574 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size13568, size23570);
        if ($tmp3574.value) {
        {
            panda$core$Bit $tmp3575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp3575.value) {
            {
                op3565 = &$s3576;
            }
            }
            else {
            {
                op3565 = &$s3577;
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
        org$pandalanguage$pandac$ClassDecl* $tmp3579 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_src);
        srcClass3578 = $tmp3579;
        PANDA_ASSERT(((panda$core$Bit) { srcClass3578 != NULL }).value);
        org$pandalanguage$pandac$ClassDecl* $tmp3581 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_target);
        targetClass3580 = $tmp3581;
        PANDA_ASSERT(((panda$core$Bit) { targetClass3580 != NULL }).value);
        panda$core$Bit $tmp3583 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3578);
        bool $tmp3582 = $tmp3583.value;
        if (!$tmp3582) goto $l3584;
        panda$core$Bit $tmp3585 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3580);
        panda$core$Bit $tmp3586 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3585);
        $tmp3582 = $tmp3586.value;
        $l3584:;
        panda$core$Bit $tmp3587 = { $tmp3582 };
        if ($tmp3587.value) {
        {
            panda$core$String* $tmp3588 = org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3588;
        }
        }
        else {
        panda$core$Bit $tmp3590 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3578);
        panda$core$Bit $tmp3591 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3590);
        bool $tmp3589 = $tmp3591.value;
        if (!$tmp3589) goto $l3592;
        panda$core$Bit $tmp3593 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3580);
        $tmp3589 = $tmp3593.value;
        $l3592:;
        panda$core$Bit $tmp3594 = { $tmp3589 };
        if ($tmp3594.value) {
        {
            panda$core$String* $tmp3595 = org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3595;
        }
        }
        else {
        panda$core$Bit $tmp3598 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, srcClass3578);
        bool $tmp3597 = $tmp3598.value;
        if (!$tmp3597) goto $l3599;
        panda$core$Bit $tmp3600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3597 = $tmp3600.value;
        $l3599:;
        panda$core$Bit $tmp3601 = { $tmp3597 };
        bool $tmp3596 = $tmp3601.value;
        if (!$tmp3596) goto $l3602;
        panda$core$Object* $tmp3603 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3604 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3603), p_src);
        $tmp3596 = $tmp3604.value;
        $l3602:;
        panda$core$Bit $tmp3605 = { $tmp3596 };
        if ($tmp3605.value) {
        {
            panda$core$String* $tmp3606 = org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3606;
        }
        }
        else {
        panda$core$Bit $tmp3609 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, targetClass3580);
        bool $tmp3608 = $tmp3609.value;
        if (!$tmp3608) goto $l3610;
        panda$core$Bit $tmp3611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp3608 = $tmp3611.value;
        $l3610:;
        panda$core$Bit $tmp3612 = { $tmp3608 };
        bool $tmp3607 = $tmp3612.value;
        if (!$tmp3607) goto $l3613;
        panda$core$Object* $tmp3614 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3615 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp3614), p_target);
        $tmp3607 = $tmp3615.value;
        $l3613:;
        panda$core$Bit $tmp3616 = { $tmp3607 };
        if ($tmp3616.value) {
        {
            panda$core$String* $tmp3617 = org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_src, p_target, p_out);
            return $tmp3617;
        }
        }
        }
        }
        }
        op3565 = &$s3618;
    }
    }
    panda$core$String* $tmp3620 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_src);
    srcType3619 = $tmp3620;
    panda$core$String* $tmp3622 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_target);
    dstType3621 = $tmp3622;
    panda$core$Bit $tmp3623 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType3619, dstType3621);
    if ($tmp3623.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp3625 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3624 = $tmp3625;
    panda$core$String* $tmp3627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3626, result3624);
    panda$core$String* $tmp3629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3627, &$s3628);
    panda$core$String* $tmp3630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3629, op3565);
    panda$core$String* $tmp3632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3630, &$s3631);
    panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3632, srcType3619);
    panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, &$s3634);
    panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3635, p_value);
    panda$core$String* $tmp3638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3636, &$s3637);
    panda$core$String* $tmp3639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3638, dstType3621);
    panda$core$String* $tmp3641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3639, &$s3640);
    (($fn3642) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3641);
    return result3624;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base3646;
    panda$core$Bit $tmp3643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_cast->kind, ((panda$core$Int64) { 1009 }));
    PANDA_ASSERT($tmp3643.value);
    panda$core$Int64 $tmp3644 = panda$collections$Array$get_count$R$panda$core$Int64(p_cast->children);
    panda$core$Bit $tmp3645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3644, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3645.value);
    panda$core$Object* $tmp3647 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3648 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3647), p_out);
    base3646 = $tmp3648;
    panda$core$Object* $tmp3649 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3650 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, base3646, ((org$pandalanguage$pandac$IRNode*) $tmp3649)->type, p_cast->type, p_out);
    return $tmp3650;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl3654;
    panda$core$String* t3656;
    panda$core$String* value3664;
    panda$core$String* result3675;
    org$pandalanguage$pandac$FieldDecl* lastField3677;
    panda$core$String* value3707;
    panda$core$String* result3718;
    org$pandalanguage$pandac$FieldDecl* lastField3720;
    panda$core$String* alloca3745;
    panda$core$String* result3766;
    panda$core$String* callRef3782;
    panda$core$String* result3793;
    panda$core$String* classPtr3807;
    panda$core$String* className3809;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3835;
    panda$core$Bit $tmp3651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->kind, ((panda$core$Int64) { 1010 }));
    PANDA_ASSERT($tmp3651.value);
    panda$core$Int64 $tmp3652 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
    panda$core$Bit $tmp3653 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3652, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp3653.value);
    org$pandalanguage$pandac$ClassDecl* $tmp3655 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, p_construct->type);
    cl3654 = $tmp3655;
    PANDA_ASSERT(((panda$core$Bit) { cl3654 != NULL }).value);
    panda$core$String* $tmp3657 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    t3656 = $tmp3657;
    panda$core$Bit $tmp3658 = org$pandalanguage$pandac$Type$isNumber$R$panda$core$Bit(p_construct->type);
    if ($tmp3658.value) {
    {
        panda$core$Int64 $tmp3659 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3659, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3660.value);
        panda$core$Object* $tmp3661 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3662 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3661)->children);
        panda$core$Bit $tmp3663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3662, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3663.value);
        panda$core$Object* $tmp3665 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3666 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3665)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3667 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3666), p_out);
        value3664 = $tmp3667;
        panda$core$Object* $tmp3668 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3669 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3668)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3669)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp3670.value) {
        {
            panda$core$String* $tmp3672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3671, value3664);
            panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3672, &$s3673);
            return $tmp3674;
        }
        }
        panda$core$String* $tmp3676 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3675 = $tmp3676;
        panda$core$Int64 $tmp3678 = panda$collections$Array$get_count$R$panda$core$Int64(cl3654->fields);
        panda$core$Int64 $tmp3679 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3678, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3680 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3654->fields, $tmp3679);
        lastField3677 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3680);
        panda$core$Bit $tmp3681 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3677->annotations);
        panda$core$Bit $tmp3682 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3681);
        PANDA_ASSERT($tmp3682.value);
        panda$core$String* $tmp3684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3683, result3675);
        panda$core$String* $tmp3686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3684, &$s3685);
        panda$core$String* $tmp3687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3686, t3656);
        panda$core$String* $tmp3689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3687, &$s3688);
        panda$core$String* $tmp3690 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3677->type);
        panda$core$String* $tmp3691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3689, $tmp3690);
        panda$core$String* $tmp3693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3691, &$s3692);
        panda$core$String* $tmp3695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3694, value3664);
        panda$core$String* $tmp3697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3695, &$s3696);
        panda$core$String* $tmp3698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3693, $tmp3697);
        (($fn3699) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3698);
        return result3675;
    }
    }
    org$pandalanguage$pandac$Type* $tmp3700 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp3701 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_construct->type, $tmp3700);
    if ($tmp3701.value) {
    {
        panda$core$Int64 $tmp3702 = panda$collections$Array$get_count$R$panda$core$Int64(p_construct->children);
        panda$core$Bit $tmp3703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3702, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3703.value);
        panda$core$Object* $tmp3704 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Int64 $tmp3705 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp3704)->children);
        panda$core$Bit $tmp3706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3705, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp3706.value);
        panda$core$Object* $tmp3708 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3709 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3708)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3710 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp3709), p_out);
        value3707 = $tmp3710;
        panda$core$Object* $tmp3711 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp3712 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp3711)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp3713 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3712)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp3713.value) {
        {
            panda$core$String* $tmp3715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3714, value3707);
            panda$core$String* $tmp3717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3715, &$s3716);
            return $tmp3717;
        }
        }
        panda$core$String* $tmp3719 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3718 = $tmp3719;
        panda$core$Int64 $tmp3721 = panda$collections$Array$get_count$R$panda$core$Int64(cl3654->fields);
        panda$core$Int64 $tmp3722 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3721, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3723 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl3654->fields, $tmp3722);
        lastField3720 = ((org$pandalanguage$pandac$FieldDecl*) $tmp3723);
        panda$core$Bit $tmp3724 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(lastField3720->annotations);
        panda$core$Bit $tmp3725 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3724);
        PANDA_ASSERT($tmp3725.value);
        panda$core$String* $tmp3727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3726, result3718);
        panda$core$String* $tmp3729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3727, &$s3728);
        panda$core$String* $tmp3730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3729, t3656);
        panda$core$String* $tmp3732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3730, &$s3731);
        panda$core$String* $tmp3733 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, lastField3720->type);
        panda$core$String* $tmp3734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3732, $tmp3733);
        panda$core$String* $tmp3736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3734, &$s3735);
        panda$core$String* $tmp3738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3737, value3707);
        panda$core$String* $tmp3740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3738, &$s3739);
        panda$core$String* $tmp3741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3736, $tmp3740);
        (($fn3742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3741);
        return result3718;
    }
    }
    panda$core$Bit $tmp3743 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl3654);
    if ($tmp3743.value) {
    {
        panda$core$Int64 $tmp3744 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3744;
        panda$core$String* $tmp3747 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3746, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp3749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3747, &$s3748);
        alloca3745 = $tmp3749;
        panda$core$String* $tmp3751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3750, alloca3745);
        panda$core$String* $tmp3753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3751, &$s3752);
        panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3753, t3656);
        panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3754, &$s3755);
        (($fn3757) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3756);
        panda$core$Object* $tmp3758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3759, t3656);
        panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3760, &$s3761);
        panda$core$String* $tmp3763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3762, alloca3745);
        panda$core$String* $tmp3765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3763, &$s3764);
        org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3758), $tmp3765, p_out);
        panda$core$String* $tmp3767 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        result3766 = $tmp3767;
        panda$core$String* $tmp3769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3768, result3766);
        panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3769, &$s3770);
        panda$core$String* $tmp3772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, t3656);
        panda$core$String* $tmp3774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3772, &$s3773);
        panda$core$String* $tmp3775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3774, t3656);
        panda$core$String* $tmp3777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3775, &$s3776);
        panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3777, alloca3745);
        panda$core$String* $tmp3780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3778, &$s3779);
        (($fn3781) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3780);
        return result3766;
    }
    }
    panda$core$String* $tmp3783 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    callRef3782 = $tmp3783;
    panda$core$String* $tmp3785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3784, callRef3782);
    panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3785, &$s3786);
    panda$core$Int64 $tmp3788 = org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(self, p_construct->type);
    panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3787, ((panda$core$Object*) wrap_panda$core$Int64($tmp3788)));
    panda$core$String* $tmp3791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3789, &$s3790);
    (($fn3792) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3791);
    panda$core$String* $tmp3794 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3793 = $tmp3794;
    panda$core$String* $tmp3796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3795, result3793);
    panda$core$String* $tmp3798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3796, &$s3797);
    panda$core$String* $tmp3799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3798, callRef3782);
    panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3799, &$s3800);
    panda$core$String* $tmp3802 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
    panda$core$String* $tmp3803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3801, $tmp3802);
    panda$core$String* $tmp3805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3803, &$s3804);
    (($fn3806) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3805);
    panda$core$String* $tmp3808 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    classPtr3807 = $tmp3808;
    panda$core$Bit $tmp3811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp3810 = $tmp3811.value;
    if (!$tmp3810) goto $l3812;
    panda$core$Bit $tmp3813 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(cl3654);
    panda$core$Bit $tmp3814 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3813);
    $tmp3810 = $tmp3814.value;
    $l3812:;
    panda$core$Bit $tmp3815 = { $tmp3810 };
    if ($tmp3815.value) {
    {
        panda$core$Object* $tmp3816 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3817 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp3816));
        className3809 = $tmp3817;
    }
    }
    else {
    {
        panda$core$String* $tmp3818 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_construct->type);
        className3809 = $tmp3818;
    }
    }
    panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3819, classPtr3807);
    panda$core$String* $tmp3822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3820, &$s3821);
    panda$core$String* $tmp3823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3822, className3809);
    panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3823, &$s3824);
    panda$core$String* $tmp3826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3825, t3656);
    panda$core$String* $tmp3828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3826, &$s3827);
    panda$core$String* $tmp3829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3828, result3793);
    panda$core$String* $tmp3831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3829, &$s3830);
    panda$core$String* $tmp3833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3831, &$s3832);
    (($fn3834) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3833);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3836 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, cl3654);
    cc3835 = $tmp3836;
    panda$core$String* $tmp3838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3837, cc3835->type);
    panda$core$String* $tmp3840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3838, &$s3839);
    panda$core$String* $tmp3841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3840, cc3835->name);
    panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3841, &$s3842);
    panda$core$String* $tmp3845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3844, classPtr3807);
    panda$core$String* $tmp3847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3845, &$s3846);
    panda$core$String* $tmp3848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3843, $tmp3847);
    (($fn3849) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3848);
    panda$core$Object* $tmp3850 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp3852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3851, t3656);
    panda$core$String* $tmp3854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3852, &$s3853);
    panda$core$String* $tmp3855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3854, result3793);
    panda$core$String* $tmp3857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3855, &$s3856);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp3850), $tmp3857, p_out);
    return result3793;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3858 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    return $tmp3858;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp3860 = panda$core$UInt64$convert$R$panda$core$String(((panda$core$UInt64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3859, $tmp3860);
    return $tmp3861;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s3862;
    }
    }
    return &$s3863;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3866;
    panda$core$String* t3868;
    panda$core$Bit $tmp3864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp3864.value) {
    {
        panda$core$String* $tmp3865 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
        return $tmp3865;
    }
    }
    panda$core$String* $tmp3867 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3866 = $tmp3867;
    panda$core$String* $tmp3869 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_v->type);
    t3868 = $tmp3869;
    panda$core$String* $tmp3871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3870, result3866);
    panda$core$String* $tmp3873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3871, &$s3872);
    panda$core$String* $tmp3874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3873, t3868);
    panda$core$String* $tmp3876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3874, &$s3875);
    panda$core$String* $tmp3877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3876, t3868);
    panda$core$String* $tmp3879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3877, &$s3878);
    panda$core$String* $tmp3880 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, p_v);
    panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3879, $tmp3880);
    panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, &$s3882);
    (($fn3884) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3883);
    return result3866;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars3886;
    panda$core$String* charsType3891;
    panda$core$String* separator3909;
    panda$collections$Iterator* c$Iter3911;
    panda$core$Char8 c3924;
    panda$core$String* result3942;
    org$pandalanguage$pandac$ClassDecl* string3947;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3950;
    panda$core$Int64 $tmp3885 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3885;
    panda$core$String* $tmp3888 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3887, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3888, &$s3889);
    chars3886 = $tmp3890;
    panda$collections$ListView* $tmp3893 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3894 = ((panda$collections$CollectionView*) $tmp3893)->$class->itable;
    while ($tmp3894->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3894 = $tmp3894->next;
    }
    $fn3896 $tmp3895 = $tmp3894->methods[0];
    panda$core$Int64 $tmp3897 = $tmp3895(((panda$collections$CollectionView*) $tmp3893));
    panda$core$String* $tmp3898 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3892, ((panda$core$Object*) wrap_panda$core$Int64($tmp3897)));
    panda$core$String* $tmp3900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3898, &$s3899);
    charsType3891 = $tmp3900;
    panda$core$String* $tmp3902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3901, chars3886);
    panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3902, &$s3903);
    panda$core$String* $tmp3905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, charsType3891);
    panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3905, &$s3906);
    (($fn3908) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3907);
    separator3909 = &$s3910;
    {
        panda$collections$ListView* $tmp3912 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp3913 = ((panda$collections$Iterable*) $tmp3912)->$class->itable;
        while ($tmp3913->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3913 = $tmp3913->next;
        }
        $fn3915 $tmp3914 = $tmp3913->methods[0];
        panda$collections$Iterator* $tmp3916 = $tmp3914(((panda$collections$Iterable*) $tmp3912));
        c$Iter3911 = $tmp3916;
        $l3917:;
        ITable* $tmp3919 = c$Iter3911->$class->itable;
        while ($tmp3919->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3919 = $tmp3919->next;
        }
        $fn3921 $tmp3920 = $tmp3919->methods[0];
        panda$core$Bit $tmp3922 = $tmp3920(c$Iter3911);
        panda$core$Bit $tmp3923 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3922);
        if (!$tmp3923.value) goto $l3918;
        {
            ITable* $tmp3925 = c$Iter3911->$class->itable;
            while ($tmp3925->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3925 = $tmp3925->next;
            }
            $fn3927 $tmp3926 = $tmp3925->methods[1];
            panda$core$Object* $tmp3928 = $tmp3926(c$Iter3911);
            c3924 = ((panda$core$Char8$wrapper*) $tmp3928)->value;
            panda$core$String* $tmp3930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3929, separator3909);
            panda$core$String* $tmp3932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3930, &$s3931);
            panda$core$Int8 $tmp3933 = panda$core$Char8$convert$R$panda$core$Int8(c3924);
            panda$core$String* $tmp3934 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3932, ((panda$core$Object*) wrap_panda$core$Int8($tmp3933)));
            panda$core$String* $tmp3936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3934, &$s3935);
            (($fn3937) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp3936);
            separator3909 = &$s3938;
        }
        goto $l3917;
        $l3918:;
    }
    (($fn3940) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s3939);
    panda$core$Int64 $tmp3941 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp3941;
    panda$core$String* $tmp3944 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3943, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp3946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3944, &$s3945);
    result3942 = $tmp3946;
    org$pandalanguage$pandac$Type* $tmp3948 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp3949 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp3948);
    string3947 = $tmp3949;
    PANDA_ASSERT(((panda$core$Bit) { string3947 != NULL }).value);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3951 = org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, string3947);
    cc3950 = $tmp3951;
    panda$core$String* $tmp3953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3952, result3942);
    panda$core$String* $tmp3955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3953, &$s3954);
    panda$core$String* $tmp3957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3956, cc3950->type);
    panda$core$String* $tmp3959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3957, &$s3958);
    panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3959, cc3950->name);
    panda$core$String* $tmp3962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, &$s3961);
    panda$core$String* $tmp3963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3955, $tmp3962);
    panda$core$String* $tmp3965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3963, &$s3964);
    panda$core$String* $tmp3967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3966, charsType3891);
    panda$core$String* $tmp3969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3967, &$s3968);
    panda$core$String* $tmp3970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3969, chars3886);
    panda$core$String* $tmp3972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3970, &$s3971);
    panda$core$String* $tmp3973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3965, $tmp3972);
    panda$collections$ListView* $tmp3975 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp3976 = ((panda$collections$CollectionView*) $tmp3975)->$class->itable;
    while ($tmp3976->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp3976 = $tmp3976->next;
    }
    $fn3978 $tmp3977 = $tmp3976->methods[0];
    panda$core$Int64 $tmp3979 = $tmp3977(((panda$collections$CollectionView*) $tmp3975));
    panda$core$String* $tmp3980 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3974, ((panda$core$Object*) wrap_panda$core$Int64($tmp3979)));
    panda$core$String* $tmp3982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3980, &$s3981);
    panda$core$String* $tmp3983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3973, $tmp3982);
    panda$core$String* $tmp3985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3983, &$s3984);
    (($fn3986) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp3985);
    return result3942;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp3987 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
    panda$core$Bit $tmp3988 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3987, ((panda$core$Int64) { 0 }));
    if ($tmp3988.value) {
    {
        panda$core$Object* $tmp3989 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp3989)->selfRef;
    }
    }
    return &$s3990;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result3991;
    panda$core$String* $tmp3992 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result3991 = $tmp3992;
    panda$core$String* $tmp3994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3993, result3991);
    panda$core$String* $tmp3996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3994, &$s3995);
    org$pandalanguage$pandac$Type* $tmp3997 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(self->currentMethod->owner);
    panda$core$String* $tmp3998 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp3997);
    panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3996, $tmp3998);
    panda$core$String* $tmp4001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3999, &$s4000);
    panda$core$String* $tmp4002 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_s->type);
    panda$core$String* $tmp4003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4001, $tmp4002);
    (($fn4004) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4003);
    return result3991;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4008;
    org$pandalanguage$pandac$ClassDecl* cl4011;
    panda$core$String* resultValue4014;
    panda$core$String* field4019;
    panda$core$String* result4047;
    panda$core$Bit $tmp4005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1035 }));
    PANDA_ASSERT($tmp4005.value);
    panda$core$Int64 $tmp4006 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4006, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4007.value);
    panda$core$Object* $tmp4009 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4010 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4009), p_out);
    value4008 = $tmp4010;
    panda$core$Object* $tmp4012 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4013 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4012)->type);
    cl4011 = $tmp4013;
    panda$core$Bit $tmp4015 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4011);
    if ($tmp4015.value) {
    {
        panda$core$Object* $tmp4016 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4017 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4016)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4017.value) {
        {
            return &$s4018;
        }
        }
        panda$core$String* $tmp4020 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        field4019 = $tmp4020;
        panda$core$String* $tmp4022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4021, field4019);
        panda$core$String* $tmp4024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4022, &$s4023);
        panda$core$String* $tmp4025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4024, value4008);
        panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4025, &$s4026);
        (($fn4028) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4027);
        panda$core$String* $tmp4029 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4014 = $tmp4029;
        panda$core$String* $tmp4031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4030, resultValue4014);
        panda$core$String* $tmp4033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4031, &$s4032);
        panda$core$String* $tmp4034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4033, field4019);
        panda$core$String* $tmp4036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4034, &$s4035);
        (($fn4037) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4036);
    }
    }
    else {
    {
        panda$core$String* $tmp4038 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4014 = $tmp4038;
        panda$core$String* $tmp4040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4039, resultValue4014);
        panda$core$String* $tmp4042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4040, &$s4041);
        panda$core$String* $tmp4043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4042, value4008);
        panda$core$String* $tmp4045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4043, &$s4044);
        (($fn4046) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4045);
    }
    }
    panda$core$String* $tmp4048 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4047 = $tmp4048;
    panda$core$String* $tmp4050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4049, result4047);
    panda$core$String* $tmp4052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4050, &$s4051);
    panda$core$String* $tmp4053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4052, resultValue4014);
    panda$core$String* $tmp4055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4053, &$s4054);
    (($fn4056) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4055);
    return result4047;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4060;
    org$pandalanguage$pandac$ClassDecl* cl4063;
    panda$core$String* resultValue4066;
    panda$core$String* result4089;
    panda$core$Bit $tmp4057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_test->kind, ((panda$core$Int64) { 1036 }));
    PANDA_ASSERT($tmp4057.value);
    panda$core$Int64 $tmp4058 = panda$collections$Array$get_count$R$panda$core$Int64(p_test->children);
    panda$core$Bit $tmp4059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4058, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4059.value);
    panda$core$Object* $tmp4061 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4062 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4061), p_out);
    value4060 = $tmp4062;
    panda$core$Object* $tmp4064 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4065 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4064)->type);
    cl4063 = $tmp4065;
    panda$core$Bit $tmp4067 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4063);
    if ($tmp4067.value) {
    {
        panda$core$Object* $tmp4068 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4069 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4068)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4069.value) {
        {
            return &$s4070;
        }
        }
        panda$core$String* $tmp4071 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4066 = $tmp4071;
        panda$core$String* $tmp4073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4072, resultValue4066);
        panda$core$String* $tmp4075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4073, &$s4074);
        panda$core$String* $tmp4076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4075, value4060);
        panda$core$String* $tmp4078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4076, &$s4077);
        (($fn4079) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4078);
    }
    }
    else {
    {
        panda$core$String* $tmp4080 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        resultValue4066 = $tmp4080;
        panda$core$String* $tmp4082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4081, resultValue4066);
        panda$core$String* $tmp4084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4082, &$s4083);
        panda$core$String* $tmp4085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4084, value4060);
        panda$core$String* $tmp4087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4085, &$s4086);
        (($fn4088) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4087);
    }
    }
    panda$core$String* $tmp4090 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4089 = $tmp4090;
    panda$core$String* $tmp4092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4091, result4089);
    panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4092, &$s4093);
    panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4094, resultValue4066);
    panda$core$String* $tmp4097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4095, &$s4096);
    (($fn4098) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4097);
    return result4089;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4100;
    panda$core$Bit $tmp4099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->type->typeKind, ((panda$core$Int64) { 11 }));
    PANDA_ASSERT($tmp4099.value);
    panda$core$Object* $tmp4101 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4102 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4101));
    cl4100 = $tmp4102;
    PANDA_ASSERT(((panda$core$Bit) { cl4100 != NULL }).value);
    panda$core$Bit $tmp4103 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, cl4100);
    if ($tmp4103.value) {
    {
        panda$core$Object* $tmp4105 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4106 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4105));
        panda$core$String* $tmp4107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4104, $tmp4106);
        panda$core$String* $tmp4109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4107, &$s4108);
        return $tmp4109;
    }
    }
    else {
    {
        return &$s4110;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4114;
    panda$core$String* result4117;
    panda$core$Bit $tmp4111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_expr->kind, ((panda$core$Int64) { 1041 }));
    PANDA_ASSERT($tmp4111.value);
    panda$core$Int64 $tmp4112 = panda$collections$Array$get_count$R$panda$core$Int64(p_expr->children);
    panda$core$Bit $tmp4113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4112, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4113.value);
    panda$core$Object* $tmp4115 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4116 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4115), p_out);
    base4114 = $tmp4116;
    panda$core$String* $tmp4118 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    result4117 = $tmp4118;
    panda$core$Int64 $tmp4119 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
    switch ($tmp4119.value) {
        case 52:
        {
            panda$core$String* $tmp4121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4120, result4117);
            panda$core$String* $tmp4123 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4121, &$s4122);
            panda$core$String* $tmp4124 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4123, $tmp4124);
            panda$core$String* $tmp4127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4125, &$s4126);
            panda$core$String* $tmp4128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4127, base4114);
            panda$core$String* $tmp4130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4128, &$s4129);
            (($fn4131) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4130);
            return result4117;
        }
        break;
        case 49:
        case 50:
        {
            panda$core$String* $tmp4133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4132, result4117);
            panda$core$String* $tmp4135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4133, &$s4134);
            panda$core$String* $tmp4136 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
            panda$core$String* $tmp4137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4135, $tmp4136);
            panda$core$String* $tmp4139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4137, &$s4138);
            panda$core$String* $tmp4140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4139, base4114);
            panda$core$String* $tmp4142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4140, &$s4141);
            (($fn4143) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4142);
            return result4117;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4156;
    panda$core$String* result4159;
    switch (p_expr->kind.value) {
        case 1023:
        {
            panda$core$String* $tmp4144 = org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4144;
        }
        break;
        case 1005:
        {
            panda$core$String* $tmp4145 = org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4145;
        }
        break;
        case 1009:
        {
            panda$core$String* $tmp4146 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4146;
        }
        break;
        case 1004:
        {
            panda$core$String* $tmp4147 = org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4147;
        }
        break;
        case 1032:
        {
            panda$core$String* $tmp4148 = org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4148;
        }
        break;
        case 1011:
        {
            panda$core$String* $tmp4149 = org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4149;
        }
        break;
        case 1010:
        {
            panda$core$String* $tmp4150 = org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4150;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp4151 = org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4151;
        }
        break;
        case 1026:
        {
            panda$core$String* $tmp4152 = org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4152;
        }
        break;
        case 1033:
        {
            panda$core$String* $tmp4153 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4153;
        }
        break;
        case 1025:
        {
            panda$core$String* $tmp4154 = org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4154;
        }
        break;
        case 1024:
        {
            panda$core$String* $tmp4155 = org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4155;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp4157 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4158 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4157), p_out);
            value4156 = $tmp4158;
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)), ((panda$core$Object*) value4156));
            return value4156;
        }
        break;
        case 1028:
        {
            panda$core$Object* $tmp4160 = panda$collections$HashMap$$IDX$panda$collections$HashMap$K$R$panda$collections$HashMap$V$Q(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value)));
            result4159 = ((panda$core$String*) $tmp4160);
            PANDA_ASSERT(((panda$core$Bit) { result4159 != NULL }).value);
            return result4159;
        }
        break;
        case 1030:
        {
            panda$core$String* $tmp4161 = org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4161;
        }
        break;
        case 1035:
        {
            panda$core$String* $tmp4162 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4162;
        }
        break;
        case 1036:
        {
            panda$core$String* $tmp4163 = org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4163;
        }
        break;
        case 1041:
        {
            panda$core$String* $tmp4164 = org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
            return $tmp4164;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4166 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_expr->type);
    panda$core$String* $tmp4167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4165, $tmp4166);
    panda$core$String* $tmp4169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4167, &$s4168);
    panda$core$String* $tmp4170 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_expr, p_out);
    panda$core$String* $tmp4171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4169, $tmp4170);
    panda$core$String* $tmp4173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4171, &$s4172);
    return $tmp4173;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4176;
    org$pandalanguage$pandac$IRNode* s4188;
    panda$core$Bit $tmp4174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_block->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp4174.value);
    panda$core$Int64 $tmp4175 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4175;
    {
        ITable* $tmp4177 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4177->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4177 = $tmp4177->next;
        }
        $fn4179 $tmp4178 = $tmp4177->methods[0];
        panda$collections$Iterator* $tmp4180 = $tmp4178(((panda$collections$Iterable*) p_block->children));
        s$Iter4176 = $tmp4180;
        $l4181:;
        ITable* $tmp4183 = s$Iter4176->$class->itable;
        while ($tmp4183->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4183 = $tmp4183->next;
        }
        $fn4185 $tmp4184 = $tmp4183->methods[0];
        panda$core$Bit $tmp4186 = $tmp4184(s$Iter4176);
        panda$core$Bit $tmp4187 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4186);
        if (!$tmp4187.value) goto $l4182;
        {
            ITable* $tmp4189 = s$Iter4176->$class->itable;
            while ($tmp4189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4189 = $tmp4189->next;
            }
            $fn4191 $tmp4190 = $tmp4189->methods[1];
            panda$core$Object* $tmp4192 = $tmp4190(s$Iter4176);
            s4188 = ((org$pandalanguage$pandac$IRNode*) $tmp4192);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s4188, p_out);
        }
        goto $l4181;
        $l4182:;
    }
    panda$core$Int64 $tmp4193 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4193;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4194;
    panda$core$String* $match$1894_94195;
    panda$core$String* ptr4200;
    panda$core$String* arg4203;
    org$pandalanguage$pandac$Type* baseType4223;
    panda$core$String* base4227;
    panda$core$String* indexStruct4230;
    panda$core$String* index4233;
    panda$core$String* value4243;
    panda$core$String* ptr4247;
    panda$core$String* ptr4286;
    panda$core$String* cast4289;
    m4194 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$1894_94195 = ((org$pandalanguage$pandac$Symbol*) m4194->value)->name;
        panda$core$Bit $tmp4197 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1894_94195, &$s4196);
        if ($tmp4197.value) {
        {
            panda$core$Int64 $tmp4198 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4198, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4199.value);
            panda$core$Object* $tmp4201 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4202 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4201), p_out);
            ptr4200 = $tmp4202;
            panda$core$Object* $tmp4204 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4205 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4204));
            panda$core$String* $tmp4206 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4205, p_out);
            arg4203 = $tmp4206;
            panda$core$String* $tmp4208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4207, arg4203);
            panda$core$String* $tmp4210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4208, &$s4209);
            panda$core$String* $tmp4211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4210, ptr4200);
            panda$core$String* $tmp4213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4211, &$s4212);
            (($fn4214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4213);
        }
        }
        else {
        panda$core$Bit $tmp4216 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1894_94195, &$s4215);
        if ($tmp4216.value) {
        {
            panda$core$Int64 $tmp4217 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4217, ((panda$core$Int64) { 3 }));
            PANDA_ASSERT($tmp4218.value);
            panda$core$Object* $tmp4219 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4220 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4219));
            panda$core$Int64 $tmp4221 = panda$collections$Array$get_count$R$panda$core$Int64($tmp4220->type->subtypes);
            panda$core$Bit $tmp4222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4221, ((panda$core$Int64) { 2 }));
            PANDA_ASSERT($tmp4222.value);
            panda$core$Object* $tmp4224 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4225 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4224));
            panda$core$Object* $tmp4226 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp4225->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4223 = ((org$pandalanguage$pandac$Type*) $tmp4226);
            panda$core$Object* $tmp4228 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4229 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4228), p_out);
            base4227 = $tmp4229;
            panda$core$Object* $tmp4231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4232 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4231), p_out);
            indexStruct4230 = $tmp4232;
            panda$core$String* $tmp4234 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            index4233 = $tmp4234;
            panda$core$String* $tmp4236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4235, index4233);
            panda$core$String* $tmp4238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4236, &$s4237);
            panda$core$String* $tmp4239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4238, indexStruct4230);
            panda$core$String* $tmp4241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4239, &$s4240);
            (($fn4242) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4241);
            panda$core$Object* $tmp4244 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp4245 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4244));
            panda$core$String* $tmp4246 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp4245, p_out);
            value4243 = $tmp4246;
            panda$core$String* $tmp4248 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            ptr4247 = $tmp4248;
            panda$core$String* $tmp4250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4249, ptr4247);
            panda$core$String* $tmp4252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4250, &$s4251);
            panda$core$String* $tmp4253 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4223);
            panda$core$String* $tmp4254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4252, $tmp4253);
            panda$core$String* $tmp4256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4254, &$s4255);
            panda$core$String* $tmp4257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4256, base4227);
            panda$core$String* $tmp4259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4257, &$s4258);
            panda$core$String* $tmp4262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4260, &$s4261);
            panda$core$String* $tmp4264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4262, &$s4263);
            panda$core$String* $tmp4265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4264, index4233);
            panda$core$String* $tmp4267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4265, &$s4266);
            panda$core$String* $tmp4268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4259, $tmp4267);
            (($fn4269) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4268);
            panda$core$String* $tmp4271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4270, value4243);
            panda$core$String* $tmp4273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4271, &$s4272);
            panda$core$String* $tmp4274 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, baseType4223);
            panda$core$String* $tmp4275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4273, $tmp4274);
            panda$core$String* $tmp4277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4275, &$s4276);
            panda$core$String* $tmp4278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4277, ptr4247);
            panda$core$String* $tmp4280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4278, &$s4279);
            (($fn4281) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4280);
        }
        }
        else {
        panda$core$Bit $tmp4283 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$1894_94195, &$s4282);
        if ($tmp4283.value) {
        {
            panda$core$Int64 $tmp4284 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp4285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4284, ((panda$core$Int64) { 1 }));
            PANDA_ASSERT($tmp4285.value);
            panda$core$Object* $tmp4287 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4288 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4287), p_out);
            ptr4286 = $tmp4288;
            panda$core$String* $tmp4290 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            cast4289 = $tmp4290;
            panda$core$String* $tmp4292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4291, cast4289);
            panda$core$String* $tmp4294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4292, &$s4293);
            panda$core$String* $tmp4295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4294, ptr4286);
            panda$core$String* $tmp4297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4295, &$s4296);
            (($fn4298) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4297);
            panda$core$String* $tmp4300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4299, cast4289);
            panda$core$String* $tmp4302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4300, &$s4301);
            (($fn4303) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4302);
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
    org$pandalanguage$pandac$MethodDecl* m4305;
    org$pandalanguage$pandac$Type* actualMethodType4308;
    panda$core$String* actualResultType4309;
    panda$core$Bit isSuper4310;
    panda$collections$Array* args4330;
    panda$core$Int64 offset4333;
    panda$core$Range$LTpanda$core$Int64$GT $tmp4338;
    panda$core$String* arg4353;
    panda$core$String* refTarget4385;
    panda$core$String* methodRef4389;
    panda$core$String* separator4391;
    panda$core$String* indirectVar4395;
    panda$core$String* resultType4398;
    panda$collections$Iterator* a$Iter4443;
    panda$core$String* a4455;
    panda$core$Bit $tmp4304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_call->kind, ((panda$core$Int64) { 1005 }));
    PANDA_ASSERT($tmp4304.value);
    m4305 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp4307 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m4305->owner)->name, &$s4306);
    if ($tmp4307.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_call, p_out);
        return;
    }
    }
    if (m4305->owner->external.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m4305);
    }
    }
    panda$core$Int64 $tmp4312 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp4313 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp4312, ((panda$core$Int64) { 1 }));
    bool $tmp4311 = $tmp4313.value;
    if (!$tmp4311) goto $l4314;
    panda$core$Object* $tmp4315 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4315)->kind, ((panda$core$Int64) { 1024 }));
    $tmp4311 = $tmp4316.value;
    $l4314:;
    panda$core$Bit $tmp4317 = { $tmp4311 };
    isSuper4310 = $tmp4317;
    panda$core$Bit $tmp4319 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper4310);
    bool $tmp4318 = $tmp4319.value;
    if (!$tmp4318) goto $l4320;
    panda$core$Bit $tmp4321 = org$pandalanguage$pandac$MethodDecl$isVirtual$R$panda$core$Bit(m4305);
    $tmp4318 = $tmp4321.value;
    $l4320:;
    panda$core$Bit $tmp4322 = { $tmp4318 };
    if ($tmp4322.value) {
    {
        org$pandalanguage$pandac$Type* $tmp4323 = org$pandalanguage$pandac$Compiler$inheritedType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4305);
        actualMethodType4308 = $tmp4323;
        panda$core$Int64 $tmp4324 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4308->subtypes);
        panda$core$Int64 $tmp4325 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4324, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4326 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4308->subtypes, $tmp4325);
        panda$core$String* $tmp4327 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4326));
        actualResultType4309 = $tmp4327;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4328 = org$pandalanguage$pandac$Compiler$declaredType$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$Type(self->compiler, m4305);
        actualMethodType4308 = $tmp4328;
        panda$core$String* $tmp4329 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        actualResultType4309 = $tmp4329;
    }
    }
    panda$collections$Array* $tmp4331 = (panda$collections$Array*) malloc(40);
    $tmp4331->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp4331->refCount.value = 1;
    panda$collections$Array$init($tmp4331);
    args4330 = $tmp4331;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args4330, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp4334 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp4335 = panda$collections$Array$get_count$R$panda$core$Int64(actualMethodType4308->subtypes);
    panda$core$Int64 $tmp4336 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4334, $tmp4335);
    panda$core$Int64 $tmp4337 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp4336, ((panda$core$Int64) { 1 }));
    offset4333 = $tmp4337;
    panda$core$Int64 $tmp4339 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp4338, ((panda$core$Int64) { 0 }), $tmp4339, ((panda$core$Bit) { false }));
    int64_t $tmp4341 = $tmp4338.min.value;
    panda$core$Int64 i4340 = { $tmp4341 };
    int64_t $tmp4343 = $tmp4338.max.value;
    bool $tmp4344 = $tmp4338.inclusive.value;
    if ($tmp4344) goto $l4351; else goto $l4352;
    $l4351:;
    if ($tmp4341 <= $tmp4343) goto $l4345; else goto $l4347;
    $l4352:;
    if ($tmp4341 < $tmp4343) goto $l4345; else goto $l4347;
    $l4345:;
    {
        panda$core$Object* $tmp4354 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4340);
        panda$core$String* $tmp4355 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4354), p_out);
        arg4353 = $tmp4355;
        panda$core$Bit $tmp4357 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i4340, offset4333);
        bool $tmp4356 = $tmp4357.value;
        if (!$tmp4356) goto $l4358;
        panda$core$Int64 $tmp4359 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4340, offset4333);
        panda$core$Object* $tmp4360 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4308->subtypes, $tmp4359);
        panda$core$Object* $tmp4361 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4340);
        panda$core$Bit $tmp4362 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$Type*) $tmp4360), ((org$pandalanguage$pandac$IRNode*) $tmp4361)->type);
        $tmp4356 = $tmp4362.value;
        $l4358:;
        panda$core$Bit $tmp4363 = { $tmp4356 };
        if ($tmp4363.value) {
        {
            panda$core$Int64 $tmp4364 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4340, offset4333);
            panda$core$Object* $tmp4365 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4308->subtypes, $tmp4364);
            panda$core$String* $tmp4366 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4365));
            panda$core$String* $tmp4368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4366, &$s4367);
            panda$core$Object* $tmp4369 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4340);
            panda$core$Int64 $tmp4370 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i4340, offset4333);
            panda$core$Object* $tmp4371 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(actualMethodType4308->subtypes, $tmp4370);
            panda$core$String* $tmp4372 = org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(self, arg4353, ((org$pandalanguage$pandac$IRNode*) $tmp4369)->type, ((org$pandalanguage$pandac$Type*) $tmp4371), p_out);
            panda$core$String* $tmp4373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4368, $tmp4372);
            arg4353 = $tmp4373;
        }
        }
        else {
        {
            panda$core$Object* $tmp4374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i4340);
            panda$core$String* $tmp4375 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4374)->type);
            panda$core$String* $tmp4377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4375, &$s4376);
            panda$core$String* $tmp4378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4377, arg4353);
            arg4353 = $tmp4378;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args4330, ((panda$core$Object*) arg4353));
    }
    $l4348:;
    int64_t $tmp4380 = $tmp4343 - i4340.value;
    if ($tmp4344) goto $l4381; else goto $l4382;
    $l4381:;
    if ($tmp4380 >= 1) goto $l4379; else goto $l4347;
    $l4382:;
    if ($tmp4380 > 1) goto $l4379; else goto $l4347;
    $l4379:;
    i4340.value += 1;
    goto $l4345;
    $l4347:;
    panda$core$Int64 $tmp4386 = panda$collections$Array$get_count$R$panda$core$Int64(args4330);
    panda$core$Bit $tmp4387 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4386, ((panda$core$Int64) { 0 }));
    if ($tmp4387.value) {
    {
        panda$core$Object* $tmp4388 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args4330, ((panda$core$Int64) { 0 }));
        refTarget4385 = ((panda$core$String*) $tmp4388);
    }
    }
    else {
    {
        refTarget4385 = NULL;
    }
    }
    panda$core$String* $tmp4390 = org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(self, refTarget4385, m4305, isSuper4310, p_out);
    methodRef4389 = $tmp4390;
    separator4391 = &$s4392;
    panda$core$Bit $tmp4393 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, m4305);
    if ($tmp4393.value) {
    {
        panda$core$Int64 $tmp4394 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4394;
        panda$core$String* $tmp4397 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4396, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar4395 = $tmp4397;
        panda$core$String* $tmp4399 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        resultType4398 = $tmp4399;
        panda$core$String* $tmp4401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4400, indirectVar4395);
        panda$core$String* $tmp4403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4401, &$s4402);
        panda$core$String* $tmp4404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4403, resultType4398);
        panda$core$String* $tmp4406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4404, &$s4405);
        (($fn4407) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4406);
        panda$core$String* $tmp4409 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4305);
        panda$core$String* $tmp4410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4408, $tmp4409);
        panda$core$String* $tmp4412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4410, &$s4411);
        panda$core$String* $tmp4414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4413, methodRef4389);
        panda$core$String* $tmp4416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4414, &$s4415);
        panda$core$String* $tmp4417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4416, resultType4398);
        panda$core$String* $tmp4419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4417, &$s4418);
        panda$core$String* $tmp4420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4419, indirectVar4395);
        panda$core$String* $tmp4422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4420, &$s4421);
        panda$core$String* $tmp4423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4412, $tmp4422);
        (($fn4424) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4423);
        separator4391 = &$s4425;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp4426 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp4427 = org$pandalanguage$pandac$Type$$NEQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_call->type, $tmp4426);
        if ($tmp4427.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        }
        }
        panda$core$String* $tmp4429 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, m4305);
        panda$core$String* $tmp4430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4428, $tmp4429);
        panda$core$String* $tmp4432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4430, &$s4431);
        panda$core$String* $tmp4433 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_call->type);
        panda$core$String* $tmp4434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4432, $tmp4433);
        panda$core$String* $tmp4436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4434, &$s4435);
        panda$core$String* $tmp4438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4437, methodRef4389);
        panda$core$String* $tmp4440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4438, &$s4439);
        panda$core$String* $tmp4441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4436, $tmp4440);
        (($fn4442) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp4441);
    }
    }
    {
        ITable* $tmp4444 = ((panda$collections$Iterable*) args4330)->$class->itable;
        while ($tmp4444->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4444 = $tmp4444->next;
        }
        $fn4446 $tmp4445 = $tmp4444->methods[0];
        panda$collections$Iterator* $tmp4447 = $tmp4445(((panda$collections$Iterable*) args4330));
        a$Iter4443 = $tmp4447;
        $l4448:;
        ITable* $tmp4450 = a$Iter4443->$class->itable;
        while ($tmp4450->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4450 = $tmp4450->next;
        }
        $fn4452 $tmp4451 = $tmp4450->methods[0];
        panda$core$Bit $tmp4453 = $tmp4451(a$Iter4443);
        panda$core$Bit $tmp4454 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4453);
        if (!$tmp4454.value) goto $l4449;
        {
            ITable* $tmp4456 = a$Iter4443->$class->itable;
            while ($tmp4456->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4456 = $tmp4456->next;
            }
            $fn4458 $tmp4457 = $tmp4456->methods[1];
            panda$core$Object* $tmp4459 = $tmp4457(a$Iter4443);
            a4455 = ((panda$core$String*) $tmp4459);
            (($fn4460) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator4391);
            (($fn4461) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a4455);
            separator4391 = &$s4462;
        }
        goto $l4448;
        $l4449:;
    }
    (($fn4464) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s4463);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test4476;
    panda$core$String* testBit4479;
    panda$core$String* ifTrue4489;
    panda$core$String* ifFalse4491;
    panda$core$String* end4505;
    panda$core$Bit $tmp4465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_s->kind, ((panda$core$Int64) { 1012 }));
    PANDA_ASSERT($tmp4465.value);
    panda$core$Int64 $tmp4467 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4467, ((panda$core$Int64) { 2 }));
    bool $tmp4466 = $tmp4468.value;
    if ($tmp4466) goto $l4469;
    panda$core$Int64 $tmp4470 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4470, ((panda$core$Int64) { 3 }));
    $tmp4466 = $tmp4471.value;
    $l4469:;
    panda$core$Bit $tmp4472 = { $tmp4466 };
    PANDA_ASSERT($tmp4472.value);
    panda$core$Object* $tmp4473 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp4474 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4475 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4473)->type, $tmp4474);
    PANDA_ASSERT($tmp4475.value);
    panda$core$Object* $tmp4477 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4478 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4477), p_out);
    test4476 = $tmp4478;
    panda$core$String* $tmp4480 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit4479 = $tmp4480;
    panda$core$String* $tmp4482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4481, testBit4479);
    panda$core$String* $tmp4484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4482, &$s4483);
    panda$core$String* $tmp4485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4484, test4476);
    panda$core$String* $tmp4487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4485, &$s4486);
    (($fn4488) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4487);
    panda$core$String* $tmp4490 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue4489 = $tmp4490;
    panda$core$String* $tmp4492 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse4491 = $tmp4492;
    panda$core$String* $tmp4494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4493, testBit4479);
    panda$core$String* $tmp4496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4494, &$s4495);
    panda$core$String* $tmp4497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4496, ifTrue4489);
    panda$core$String* $tmp4499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4497, &$s4498);
    panda$core$String* $tmp4500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4499, ifFalse4491);
    panda$core$String* $tmp4502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4500, &$s4501);
    (($fn4503) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4502);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue4489, p_out);
    panda$core$Object* $tmp4504 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4504), p_out);
    panda$core$Int64 $tmp4506 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4506, ((panda$core$Int64) { 3 }));
    if ($tmp4507.value) {
    {
        panda$core$String* $tmp4508 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        end4505 = $tmp4508;
    }
    }
    else {
    {
        end4505 = ifFalse4491;
    }
    }
    panda$core$Object* $tmp4509 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4510 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4509));
    panda$core$Bit $tmp4511 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4510);
    if ($tmp4511.value) {
    {
        panda$core$String* $tmp4513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4512, end4505);
        panda$core$String* $tmp4515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4513, &$s4514);
        (($fn4516) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4515);
    }
    }
    panda$core$Int64 $tmp4517 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp4518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4517, ((panda$core$Int64) { 3 }));
    if ($tmp4518.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse4491, p_out);
        panda$core$Object* $tmp4519 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp4519), p_out);
        panda$core$Object* $tmp4520 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp4521 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp4520));
        panda$core$Bit $tmp4522 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4521);
        if ($tmp4522.value) {
        {
            panda$core$String* $tmp4524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4523, end4505);
            panda$core$String* $tmp4526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4524, &$s4525);
            (($fn4527) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4526);
        }
        }
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, end4505, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4531;
    panda$core$String* range4542;
    org$pandalanguage$pandac$IRNode* block4545;
    org$pandalanguage$pandac$Type* t4547;
    panda$core$String* llt4550;
    panda$core$String* indexType4552;
    org$pandalanguage$pandac$ClassDecl* cl4558;
    panda$core$String* numberType4566;
    panda$core$String* index4574;
    panda$core$String* start4584;
    panda$core$String* indexValuePtr4594;
    panda$core$String* end4626;
    panda$core$String* inclusive4636;
    panda$core$String* loopStart4646;
    panda$core$String* loopBody4648;
    panda$core$String* loopEnd4650;
    panda$core$String* loopTest4652;
    panda$core$String* forwardEntry4656;
    panda$core$String* backwardEntry4658;
    panda$core$String* signPrefix4660;
    panda$core$String* forwardEntryInclusive4672;
    panda$core$String* forwardEntryExclusive4674;
    panda$core$String* forwardEntryInclusiveTest4689;
    panda$core$String* forwardEntryExclusiveTest4721;
    panda$core$String* indexValue4753;
    panda$core$String* loopInc4776;
    panda$core$String* forwardDelta4778;
    panda$core$String* forwardInclusiveLabel4794;
    panda$core$String* forwardExclusiveLabel4796;
    panda$core$String* forwardInclusiveTest4807;
    panda$core$String* forwardExclusiveTest4831;
    panda$core$String* inc4855;
    panda$core$String* incStruct4868;
    panda$core$Bit $tmp4528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4528.value);
    panda$core$Int64 $tmp4529 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4529, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4530.value);
    panda$core$Object* $tmp4532 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4531 = ((org$pandalanguage$pandac$IRNode*) $tmp4532);
    panda$core$Object* $tmp4533 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4534 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4533)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4534.value);
    panda$core$Object* $tmp4535 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4536 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4535)->type->subtypes);
    panda$core$Bit $tmp4537 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4536, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp4537.value);
    panda$core$Object* $tmp4538 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4538)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4541 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4539))->name, &$s4540);
    PANDA_ASSERT($tmp4541.value);
    panda$core$Object* $tmp4543 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4544 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4543), p_out);
    range4542 = $tmp4544;
    panda$core$Object* $tmp4546 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4545 = ((org$pandalanguage$pandac$IRNode*) $tmp4546);
    panda$core$Object* $tmp4548 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4549 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4548)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4547 = ((org$pandalanguage$pandac$Type*) $tmp4549);
    panda$core$String* $tmp4551 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4547);
    llt4550 = $tmp4551;
    panda$core$Bit $tmp4553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4547->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4553.value) {
    {
        panda$core$Int64 $tmp4554 = panda$collections$Array$get_count$R$panda$core$Int64(t4547->subtypes);
        panda$core$Bit $tmp4555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4554, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4555.value);
        panda$core$Object* $tmp4556 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4547->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4557 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4556));
        indexType4552 = $tmp4557;
    }
    }
    else {
    {
        indexType4552 = llt4550;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4559 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4547);
    cl4558 = $tmp4559;
    PANDA_ASSERT(((panda$core$Bit) { cl4558 != NULL }).value);
    panda$collections$ListView* $tmp4560 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4558);
    ITable* $tmp4561 = ((panda$collections$CollectionView*) $tmp4560)->$class->itable;
    while ($tmp4561->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4561 = $tmp4561->next;
    }
    $fn4563 $tmp4562 = $tmp4561->methods[0];
    panda$core$Int64 $tmp4564 = $tmp4562(((panda$collections$CollectionView*) $tmp4560));
    panda$core$Bit $tmp4565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4564, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4565.value);
    panda$collections$ListView* $tmp4567 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4558);
    ITable* $tmp4568 = $tmp4567->$class->itable;
    while ($tmp4568->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4568 = $tmp4568->next;
    }
    $fn4570 $tmp4569 = $tmp4568->methods[0];
    panda$core$Object* $tmp4571 = $tmp4569($tmp4567, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4572 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4571)->type);
    numberType4566 = $tmp4572;
    panda$core$Bit $tmp4573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4531->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4573.value);
    panda$core$String* $tmp4575 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4531->payload));
    index4574 = $tmp4575;
    panda$core$String* $tmp4577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4576, index4574);
    panda$core$String* $tmp4579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4577, &$s4578);
    panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4579, indexType4552);
    panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4580, &$s4581);
    (($fn4583) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4582);
    panda$core$String* $tmp4585 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4584 = $tmp4585;
    panda$core$String* $tmp4587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4586, start4584);
    panda$core$String* $tmp4589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4587, &$s4588);
    panda$core$String* $tmp4590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4589, range4542);
    panda$core$String* $tmp4592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4590, &$s4591);
    (($fn4593) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4592);
    panda$core$String* $tmp4595 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4594 = $tmp4595;
    panda$core$String* $tmp4597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4596, indexValuePtr4594);
    panda$core$String* $tmp4599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4597, &$s4598);
    panda$core$String* $tmp4600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4599, indexType4552);
    panda$core$String* $tmp4602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4600, &$s4601);
    panda$core$String* $tmp4603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4602, indexType4552);
    panda$core$String* $tmp4605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4603, &$s4604);
    panda$core$String* $tmp4606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4605, index4574);
    panda$core$String* $tmp4608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4606, &$s4607);
    panda$core$String* $tmp4610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4608, &$s4609);
    (($fn4611) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4610);
    panda$core$String* $tmp4613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4612, numberType4566);
    panda$core$String* $tmp4615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4613, &$s4614);
    panda$core$String* $tmp4616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4615, start4584);
    panda$core$String* $tmp4618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, &$s4617);
    panda$core$String* $tmp4619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4618, numberType4566);
    panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4619, &$s4620);
    panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, indexValuePtr4594);
    panda$core$String* $tmp4624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4622, &$s4623);
    (($fn4625) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4624);
    panda$core$String* $tmp4627 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end4626 = $tmp4627;
    panda$core$String* $tmp4629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4628, end4626);
    panda$core$String* $tmp4631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4629, &$s4630);
    panda$core$String* $tmp4632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4631, range4542);
    panda$core$String* $tmp4634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4632, &$s4633);
    (($fn4635) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4634);
    panda$core$String* $tmp4637 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive4636 = $tmp4637;
    panda$core$String* $tmp4639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4638, inclusive4636);
    panda$core$String* $tmp4641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4639, &$s4640);
    panda$core$String* $tmp4642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4641, range4542);
    panda$core$String* $tmp4644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4642, &$s4643);
    (($fn4645) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4644);
    panda$core$String* $tmp4647 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart4646 = $tmp4647;
    panda$core$String* $tmp4649 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody4648 = $tmp4649;
    panda$core$String* $tmp4651 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd4650 = $tmp4651;
    panda$core$String* $tmp4653 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest4652 = $tmp4653;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp4654 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp4654->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp4654->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp4654, ((panda$core$String*) p_f->payload), loopEnd4650, loopTest4652);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp4654));
    panda$core$String* $tmp4657 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry4656 = $tmp4657;
    panda$core$String* $tmp4659 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry4658 = $tmp4659;
    panda$core$Bit $tmp4662 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4547)->name, &$s4661);
    if ($tmp4662.value) {
    {
        signPrefix4660 = &$s4663;
    }
    }
    else {
    {
        panda$core$Bit $tmp4666 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4547)->name, &$s4665);
        bool $tmp4664 = $tmp4666.value;
        if ($tmp4664) goto $l4667;
        panda$core$Bit $tmp4669 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4547)->name, &$s4668);
        $tmp4664 = $tmp4669.value;
        $l4667:;
        panda$core$Bit $tmp4670 = { $tmp4664 };
        PANDA_ASSERT($tmp4670.value);
        signPrefix4660 = &$s4671;
    }
    }
    panda$core$String* $tmp4673 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive4672 = $tmp4673;
    panda$core$String* $tmp4675 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive4674 = $tmp4675;
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4676, inclusive4636);
    panda$core$String* $tmp4679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4677, &$s4678);
    panda$core$String* $tmp4680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4679, forwardEntryInclusive4672);
    panda$core$String* $tmp4682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4680, &$s4681);
    panda$core$String* $tmp4684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4683, forwardEntryExclusive4674);
    panda$core$String* $tmp4686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4684, &$s4685);
    panda$core$String* $tmp4687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4682, $tmp4686);
    (($fn4688) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4687);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive4672, p_out);
    panda$core$String* $tmp4690 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest4689 = $tmp4690;
    panda$core$String* $tmp4692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4691, forwardEntryInclusiveTest4689);
    panda$core$String* $tmp4694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4692, &$s4693);
    panda$core$String* $tmp4695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4694, signPrefix4660);
    panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4695, &$s4696);
    panda$core$String* $tmp4698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4697, numberType4566);
    panda$core$String* $tmp4700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, &$s4699);
    panda$core$String* $tmp4702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4701, start4584);
    panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4702, &$s4703);
    panda$core$String* $tmp4705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4704, end4626);
    panda$core$String* $tmp4707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4705, &$s4706);
    panda$core$String* $tmp4708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4700, $tmp4707);
    (($fn4709) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4708);
    panda$core$String* $tmp4711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4710, forwardEntryInclusiveTest4689);
    panda$core$String* $tmp4713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, &$s4712);
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4713, loopStart4646);
    panda$core$String* $tmp4716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4714, &$s4715);
    panda$core$String* $tmp4717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4716, loopEnd4650);
    panda$core$String* $tmp4719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4717, &$s4718);
    (($fn4720) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4719);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive4674, p_out);
    panda$core$String* $tmp4722 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest4721 = $tmp4722;
    panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4723, forwardEntryExclusiveTest4721);
    panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4724, &$s4725);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4726, signPrefix4660);
    panda$core$String* $tmp4729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4727, &$s4728);
    panda$core$String* $tmp4730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4729, numberType4566);
    panda$core$String* $tmp4732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4730, &$s4731);
    panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4733, start4584);
    panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, &$s4735);
    panda$core$String* $tmp4737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4736, end4626);
    panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4737, &$s4738);
    panda$core$String* $tmp4740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4732, $tmp4739);
    (($fn4741) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4740);
    panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4742, forwardEntryExclusiveTest4721);
    panda$core$String* $tmp4745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4743, &$s4744);
    panda$core$String* $tmp4746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4745, loopStart4646);
    panda$core$String* $tmp4748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4746, &$s4747);
    panda$core$String* $tmp4749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4748, loopEnd4650);
    panda$core$String* $tmp4751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4749, &$s4750);
    (($fn4752) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4751);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart4646, p_out);
    panda$core$String* $tmp4754 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue4753 = $tmp4754;
    panda$core$String* $tmp4756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4755, indexValue4753);
    panda$core$String* $tmp4758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4756, &$s4757);
    panda$core$String* $tmp4759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4758, numberType4566);
    panda$core$String* $tmp4761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4759, &$s4760);
    panda$core$String* $tmp4762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4761, numberType4566);
    panda$core$String* $tmp4764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4762, &$s4763);
    panda$core$String* $tmp4765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4764, indexValuePtr4594);
    panda$core$String* $tmp4767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4765, &$s4766);
    (($fn4768) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4767);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4545, p_out);
    panda$core$Bit $tmp4769 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4545);
    panda$core$Bit $tmp4770 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4769);
    if ($tmp4770.value) {
    {
        panda$core$String* $tmp4772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4771, loopTest4652);
        panda$core$String* $tmp4774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4772, &$s4773);
        (($fn4775) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4774);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest4652, p_out);
    panda$core$String* $tmp4777 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc4776 = $tmp4777;
    panda$core$String* $tmp4779 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta4778 = $tmp4779;
    panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4780, forwardDelta4778);
    panda$core$String* $tmp4783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4781, &$s4782);
    panda$core$String* $tmp4784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4783, numberType4566);
    panda$core$String* $tmp4786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4784, &$s4785);
    panda$core$String* $tmp4787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4786, end4626);
    panda$core$String* $tmp4789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4787, &$s4788);
    panda$core$String* $tmp4790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, indexValue4753);
    panda$core$String* $tmp4792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4790, &$s4791);
    (($fn4793) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4792);
    panda$core$String* $tmp4795 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel4794 = $tmp4795;
    panda$core$String* $tmp4797 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel4796 = $tmp4797;
    panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4798, inclusive4636);
    panda$core$String* $tmp4801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4799, &$s4800);
    panda$core$String* $tmp4802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4801, forwardInclusiveLabel4794);
    panda$core$String* $tmp4804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4802, &$s4803);
    panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4804, forwardExclusiveLabel4796);
    (($fn4806) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4805);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel4794, p_out);
    panda$core$String* $tmp4808 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest4807 = $tmp4808;
    panda$core$String* $tmp4810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4809, forwardInclusiveTest4807);
    panda$core$String* $tmp4812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4810, &$s4811);
    panda$core$String* $tmp4813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4812, numberType4566);
    panda$core$String* $tmp4815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4813, &$s4814);
    panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4815, forwardDelta4778);
    panda$core$String* $tmp4818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, &$s4817);
    (($fn4819) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4818);
    panda$core$String* $tmp4821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4820, forwardInclusiveTest4807);
    panda$core$String* $tmp4823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4821, &$s4822);
    panda$core$String* $tmp4824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4823, loopInc4776);
    panda$core$String* $tmp4826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4824, &$s4825);
    panda$core$String* $tmp4827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4826, loopEnd4650);
    panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4827, &$s4828);
    (($fn4830) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4829);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel4796, p_out);
    panda$core$String* $tmp4832 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest4831 = $tmp4832;
    panda$core$String* $tmp4834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4833, forwardExclusiveTest4831);
    panda$core$String* $tmp4836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4834, &$s4835);
    panda$core$String* $tmp4837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4836, numberType4566);
    panda$core$String* $tmp4839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4837, &$s4838);
    panda$core$String* $tmp4840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, forwardDelta4778);
    panda$core$String* $tmp4842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4840, &$s4841);
    (($fn4843) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4842);
    panda$core$String* $tmp4845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4844, forwardExclusiveTest4831);
    panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4845, &$s4846);
    panda$core$String* $tmp4848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, loopInc4776);
    panda$core$String* $tmp4850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4848, &$s4849);
    panda$core$String* $tmp4851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4850, loopEnd4650);
    panda$core$String* $tmp4853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, &$s4852);
    (($fn4854) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4853);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc4776, p_out);
    panda$core$String* $tmp4856 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc4855 = $tmp4856;
    panda$core$String* $tmp4858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4857, inc4855);
    panda$core$String* $tmp4860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4858, &$s4859);
    panda$core$String* $tmp4861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4860, numberType4566);
    panda$core$String* $tmp4863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4861, &$s4862);
    panda$core$String* $tmp4864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4863, indexValue4753);
    panda$core$String* $tmp4866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4864, &$s4865);
    (($fn4867) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4866);
    panda$core$String* $tmp4869 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct4868 = $tmp4869;
    panda$core$String* $tmp4871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4870, incStruct4868);
    panda$core$String* $tmp4873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4871, &$s4872);
    panda$core$String* $tmp4874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4873, indexType4552);
    panda$core$String* $tmp4876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4874, &$s4875);
    panda$core$String* $tmp4877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4876, numberType4566);
    panda$core$String* $tmp4879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4877, &$s4878);
    (($fn4880) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4879);
    panda$core$String* $tmp4882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4881, numberType4566);
    panda$core$String* $tmp4884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4882, &$s4883);
    panda$core$String* $tmp4885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4884, inc4855);
    panda$core$String* $tmp4887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4885, &$s4886);
    (($fn4888) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4887);
    panda$core$String* $tmp4890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4889, indexType4552);
    panda$core$String* $tmp4892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4890, &$s4891);
    panda$core$String* $tmp4893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4892, incStruct4868);
    panda$core$String* $tmp4895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4893, &$s4894);
    panda$core$String* $tmp4896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4895, indexType4552);
    panda$core$String* $tmp4898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4896, &$s4897);
    panda$core$String* $tmp4899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4898, index4574);
    panda$core$String* $tmp4901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4899, &$s4900);
    (($fn4902) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4901);
    panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4903, loopStart4646);
    panda$core$String* $tmp4906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4904, &$s4905);
    (($fn4907) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4906);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd4650, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeSteppedRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target4911;
    panda$core$String* range4922;
    org$pandalanguage$pandac$IRNode* block4925;
    org$pandalanguage$pandac$Type* t4927;
    panda$core$String* llt4930;
    panda$core$String* indexType4932;
    org$pandalanguage$pandac$ClassDecl* cl4938;
    panda$core$String* numberType4946;
    panda$core$String* index4954;
    panda$core$String* start4964;
    panda$core$String* indexValuePtr4974;
    panda$core$String* end5006;
    panda$core$String* rawStep5016;
    panda$core$String* step5026;
    panda$core$String* inclusive5041;
    panda$core$String* loopStart5051;
    panda$core$String* loopBody5053;
    panda$core$String* loopEnd5055;
    panda$core$String* loopTest5057;
    panda$core$String* forwardEntry5061;
    panda$core$String* backwardEntry5063;
    panda$core$String* signPrefix5065;
    panda$core$String* direction5077;
    panda$core$String* forwardEntryInclusive5104;
    panda$core$String* forwardEntryExclusive5106;
    panda$core$String* forwardEntryInclusiveTest5121;
    panda$core$String* forwardEntryExclusiveTest5153;
    panda$core$String* backwardEntryInclusive5185;
    panda$core$String* backwardEntryExclusive5187;
    panda$core$String* backwardEntryInclusiveTest5202;
    panda$core$String* backwardEntryExclusiveTest5234;
    panda$core$String* indexValue5266;
    panda$core$String* loopInc5289;
    panda$core$String* forwardLabel5291;
    panda$core$String* backwardLabel5293;
    panda$core$String* forwardDelta5306;
    panda$core$String* forwardInclusiveLabel5322;
    panda$core$String* forwardExclusiveLabel5324;
    panda$core$String* forwardInclusiveTest5335;
    panda$core$String* forwardExclusiveTest5362;
    panda$core$String* backwardDelta5389;
    panda$core$String* negStep5405;
    panda$core$String* backwardInclusiveLabel5418;
    panda$core$String* backwardExclusiveLabel5420;
    panda$core$String* backwardInclusiveTest5431;
    panda$core$String* backwardExclusiveTest5456;
    panda$core$String* inc5481;
    panda$core$String* incStruct5497;
    panda$core$Bit $tmp4908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_f->kind, ((panda$core$Int64) { 1029 }));
    PANDA_ASSERT($tmp4908.value);
    panda$core$Int64 $tmp4909 = panda$collections$Array$get_count$R$panda$core$Int64(p_f->children);
    panda$core$Bit $tmp4910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4909, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4910.value);
    panda$core$Object* $tmp4912 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target4911 = ((org$pandalanguage$pandac$IRNode*) $tmp4912);
    panda$core$Object* $tmp4913 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp4914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4913)->type->typeKind, ((panda$core$Int64) { 21 }));
    PANDA_ASSERT($tmp4914.value);
    panda$core$Object* $tmp4915 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Int64 $tmp4916 = panda$collections$Array$get_count$R$panda$core$Int64(((org$pandalanguage$pandac$IRNode*) $tmp4915)->type->subtypes);
    panda$core$Bit $tmp4917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4916, ((panda$core$Int64) { 3 }));
    PANDA_ASSERT($tmp4917.value);
    panda$core$Object* $tmp4918 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4919 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4918)->type->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp4921 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp4919))->name, &$s4920);
    PANDA_ASSERT($tmp4921.value);
    panda$core$Object* $tmp4923 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp4924 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp4923), p_out);
    range4922 = $tmp4924;
    panda$core$Object* $tmp4926 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block4925 = ((org$pandalanguage$pandac$IRNode*) $tmp4926);
    panda$core$Object* $tmp4928 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp4929 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4928)->type->subtypes, ((panda$core$Int64) { 1 }));
    t4927 = ((org$pandalanguage$pandac$Type*) $tmp4929);
    panda$core$String* $tmp4931 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, t4927);
    llt4930 = $tmp4931;
    panda$core$Bit $tmp4933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t4927->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4933.value) {
    {
        panda$core$Int64 $tmp4934 = panda$collections$Array$get_count$R$panda$core$Int64(t4927->subtypes);
        panda$core$Bit $tmp4935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4934, ((panda$core$Int64) { 1 }));
        PANDA_ASSERT($tmp4935.value);
        panda$core$Object* $tmp4936 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(t4927->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4937 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$Type*) $tmp4936));
        indexType4932 = $tmp4937;
    }
    }
    else {
    {
        indexType4932 = llt4930;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp4939 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, t4927);
    cl4938 = $tmp4939;
    PANDA_ASSERT(((panda$core$Bit) { cl4938 != NULL }).value);
    panda$collections$ListView* $tmp4940 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4938);
    ITable* $tmp4941 = ((panda$collections$CollectionView*) $tmp4940)->$class->itable;
    while ($tmp4941->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4941 = $tmp4941->next;
    }
    $fn4943 $tmp4942 = $tmp4941->methods[0];
    panda$core$Int64 $tmp4944 = $tmp4942(((panda$collections$CollectionView*) $tmp4940));
    panda$core$Bit $tmp4945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp4944, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp4945.value);
    panda$collections$ListView* $tmp4947 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl4938);
    ITable* $tmp4948 = $tmp4947->$class->itable;
    while ($tmp4948->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp4948 = $tmp4948->next;
    }
    $fn4950 $tmp4949 = $tmp4948->methods[0];
    panda$core$Object* $tmp4951 = $tmp4949($tmp4947, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4952 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp4951)->type);
    numberType4946 = $tmp4952;
    panda$core$Bit $tmp4953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(target4911->kind, ((panda$core$Int64) { 1016 }));
    PANDA_ASSERT($tmp4953.value);
    panda$core$String* $tmp4955 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) target4911->payload));
    index4954 = $tmp4955;
    panda$core$String* $tmp4957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4956, index4954);
    panda$core$String* $tmp4959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4957, &$s4958);
    panda$core$String* $tmp4960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4959, indexType4932);
    panda$core$String* $tmp4962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4960, &$s4961);
    (($fn4963) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4962);
    panda$core$String* $tmp4965 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    start4964 = $tmp4965;
    panda$core$String* $tmp4967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4966, start4964);
    panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4967, &$s4968);
    panda$core$String* $tmp4970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4969, range4922);
    panda$core$String* $tmp4972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4970, &$s4971);
    (($fn4973) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4972);
    panda$core$String* $tmp4975 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValuePtr4974 = $tmp4975;
    panda$core$String* $tmp4977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4976, indexValuePtr4974);
    panda$core$String* $tmp4979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4977, &$s4978);
    panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4979, indexType4932);
    panda$core$String* $tmp4982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4980, &$s4981);
    panda$core$String* $tmp4983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4982, indexType4932);
    panda$core$String* $tmp4985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4983, &$s4984);
    panda$core$String* $tmp4986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4985, index4954);
    panda$core$String* $tmp4988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4986, &$s4987);
    panda$core$String* $tmp4990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4988, &$s4989);
    (($fn4991) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4990);
    panda$core$String* $tmp4993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4992, numberType4946);
    panda$core$String* $tmp4995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4993, &$s4994);
    panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4995, start4964);
    panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4996, &$s4997);
    panda$core$String* $tmp4999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4998, numberType4946);
    panda$core$String* $tmp5001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4999, &$s5000);
    panda$core$String* $tmp5002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5001, indexValuePtr4974);
    panda$core$String* $tmp5004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5002, &$s5003);
    (($fn5005) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5004);
    panda$core$String* $tmp5007 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    end5006 = $tmp5007;
    panda$core$String* $tmp5009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5008, end5006);
    panda$core$String* $tmp5011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5009, &$s5010);
    panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5011, range4922);
    panda$core$String* $tmp5014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5012, &$s5013);
    (($fn5015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5014);
    panda$core$String* $tmp5017 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    rawStep5016 = $tmp5017;
    panda$core$String* $tmp5019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5018, rawStep5016);
    panda$core$String* $tmp5021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5019, &$s5020);
    panda$core$String* $tmp5022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5021, range4922);
    panda$core$String* $tmp5024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5022, &$s5023);
    (($fn5025) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5024);
    panda$core$Bit $tmp5028 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType4946, &$s5027);
    if ($tmp5028.value) {
    {
        panda$core$String* $tmp5029 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        step5026 = $tmp5029;
        panda$core$String* $tmp5031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5030, step5026);
        panda$core$String* $tmp5033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5031, &$s5032);
        panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5033, rawStep5016);
        panda$core$String* $tmp5036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5034, &$s5035);
        panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5036, numberType4946);
        panda$core$String* $tmp5039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5037, &$s5038);
        (($fn5040) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5039);
    }
    }
    else {
    {
        step5026 = rawStep5016;
    }
    }
    panda$core$String* $tmp5042 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inclusive5041 = $tmp5042;
    panda$core$String* $tmp5044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5043, inclusive5041);
    panda$core$String* $tmp5046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5044, &$s5045);
    panda$core$String* $tmp5047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5046, range4922);
    panda$core$String* $tmp5049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5047, &$s5048);
    (($fn5050) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5049);
    panda$core$String* $tmp5052 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5051 = $tmp5052;
    panda$core$String* $tmp5054 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5053 = $tmp5054;
    panda$core$String* $tmp5056 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5055 = $tmp5056;
    panda$core$String* $tmp5058 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopTest5057 = $tmp5058;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5059 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5059->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5059->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5059, ((panda$core$String*) p_f->payload), loopEnd5055, loopTest5057);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5059));
    panda$core$String* $tmp5062 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntry5061 = $tmp5062;
    panda$core$String* $tmp5064 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntry5063 = $tmp5064;
    panda$core$Bit $tmp5067 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4927)->name, &$s5066);
    if ($tmp5067.value) {
    {
        signPrefix5065 = &$s5068;
    }
    }
    else {
    {
        panda$core$Bit $tmp5071 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4927)->name, &$s5070);
        bool $tmp5069 = $tmp5071.value;
        if ($tmp5069) goto $l5072;
        panda$core$Bit $tmp5074 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t4927)->name, &$s5073);
        $tmp5069 = $tmp5074.value;
        $l5072:;
        panda$core$Bit $tmp5075 = { $tmp5069 };
        PANDA_ASSERT($tmp5075.value);
        signPrefix5065 = &$s5076;
    }
    }
    panda$core$Bit $tmp5079 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5065, &$s5078);
    if ($tmp5079.value) {
    {
        panda$core$String* $tmp5080 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
        direction5077 = $tmp5080;
        panda$core$String* $tmp5082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5081, direction5077);
        panda$core$String* $tmp5084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5082, &$s5083);
        panda$core$String* $tmp5085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5084, numberType4946);
        panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5085, &$s5086);
        panda$core$String* $tmp5088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5087, step5026);
        panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5088, &$s5089);
        (($fn5091) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5090);
    }
    }
    else {
    {
        direction5077 = &$s5092;
    }
    }
    panda$core$String* $tmp5094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5093, direction5077);
    panda$core$String* $tmp5096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5094, &$s5095);
    panda$core$String* $tmp5097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5096, forwardEntry5061);
    panda$core$String* $tmp5099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5097, &$s5098);
    panda$core$String* $tmp5100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5099, backwardEntry5063);
    panda$core$String* $tmp5102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5100, &$s5101);
    (($fn5103) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5102);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntry5061, p_out);
    panda$core$String* $tmp5105 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryInclusive5104 = $tmp5105;
    panda$core$String* $tmp5107 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardEntryExclusive5106 = $tmp5107;
    panda$core$String* $tmp5109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5108, inclusive5041);
    panda$core$String* $tmp5111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5109, &$s5110);
    panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5111, forwardEntryInclusive5104);
    panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, &$s5113);
    panda$core$String* $tmp5116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5115, forwardEntryExclusive5106);
    panda$core$String* $tmp5118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5116, &$s5117);
    panda$core$String* $tmp5119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5114, $tmp5118);
    (($fn5120) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5119);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryInclusive5104, p_out);
    panda$core$String* $tmp5122 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryInclusiveTest5121 = $tmp5122;
    panda$core$String* $tmp5124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5123, forwardEntryInclusiveTest5121);
    panda$core$String* $tmp5126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5124, &$s5125);
    panda$core$String* $tmp5127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5126, signPrefix5065);
    panda$core$String* $tmp5129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5127, &$s5128);
    panda$core$String* $tmp5130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5129, numberType4946);
    panda$core$String* $tmp5132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5130, &$s5131);
    panda$core$String* $tmp5134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5133, start4964);
    panda$core$String* $tmp5136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5134, &$s5135);
    panda$core$String* $tmp5137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5136, end5006);
    panda$core$String* $tmp5139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5137, &$s5138);
    panda$core$String* $tmp5140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5132, $tmp5139);
    (($fn5141) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5140);
    panda$core$String* $tmp5143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5142, forwardEntryInclusiveTest5121);
    panda$core$String* $tmp5145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5143, &$s5144);
    panda$core$String* $tmp5146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5145, loopStart5051);
    panda$core$String* $tmp5148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5146, &$s5147);
    panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5148, loopEnd5055);
    panda$core$String* $tmp5151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5149, &$s5150);
    (($fn5152) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5151);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardEntryExclusive5106, p_out);
    panda$core$String* $tmp5154 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardEntryExclusiveTest5153 = $tmp5154;
    panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5155, forwardEntryExclusiveTest5153);
    panda$core$String* $tmp5158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5156, &$s5157);
    panda$core$String* $tmp5159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5158, signPrefix5065);
    panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
    panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, numberType4946);
    panda$core$String* $tmp5164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5162, &$s5163);
    panda$core$String* $tmp5166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5165, start4964);
    panda$core$String* $tmp5168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5166, &$s5167);
    panda$core$String* $tmp5169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5168, end5006);
    panda$core$String* $tmp5171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5169, &$s5170);
    panda$core$String* $tmp5172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5164, $tmp5171);
    (($fn5173) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5172);
    panda$core$String* $tmp5175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5174, forwardEntryExclusiveTest5153);
    panda$core$String* $tmp5177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5175, &$s5176);
    panda$core$String* $tmp5178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5177, loopStart5051);
    panda$core$String* $tmp5180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5178, &$s5179);
    panda$core$String* $tmp5181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5180, loopEnd5055);
    panda$core$String* $tmp5183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5181, &$s5182);
    (($fn5184) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5183);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntry5063, p_out);
    panda$core$String* $tmp5186 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryInclusive5185 = $tmp5186;
    panda$core$String* $tmp5188 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardEntryExclusive5187 = $tmp5188;
    panda$core$String* $tmp5190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5189, inclusive5041);
    panda$core$String* $tmp5192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5190, &$s5191);
    panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5192, backwardEntryInclusive5185);
    panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5193, &$s5194);
    panda$core$String* $tmp5197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5196, backwardEntryExclusive5187);
    panda$core$String* $tmp5199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5197, &$s5198);
    panda$core$String* $tmp5200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, $tmp5199);
    (($fn5201) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5200);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryInclusive5185, p_out);
    panda$core$String* $tmp5203 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryInclusiveTest5202 = $tmp5203;
    panda$core$String* $tmp5205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5204, backwardEntryInclusiveTest5202);
    panda$core$String* $tmp5207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5205, &$s5206);
    panda$core$String* $tmp5208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, signPrefix5065);
    panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5208, &$s5209);
    panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5210, numberType4946);
    panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, &$s5212);
    panda$core$String* $tmp5215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5214, start4964);
    panda$core$String* $tmp5217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5215, &$s5216);
    panda$core$String* $tmp5218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5217, end5006);
    panda$core$String* $tmp5220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5218, &$s5219);
    panda$core$String* $tmp5221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5213, $tmp5220);
    (($fn5222) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5221);
    panda$core$String* $tmp5224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5223, backwardEntryInclusiveTest5202);
    panda$core$String* $tmp5226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5224, &$s5225);
    panda$core$String* $tmp5227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5226, loopStart5051);
    panda$core$String* $tmp5229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5227, &$s5228);
    panda$core$String* $tmp5230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5229, loopEnd5055);
    panda$core$String* $tmp5232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5230, &$s5231);
    (($fn5233) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5232);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardEntryExclusive5187, p_out);
    panda$core$String* $tmp5235 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardEntryExclusiveTest5234 = $tmp5235;
    panda$core$String* $tmp5237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5236, backwardEntryExclusiveTest5234);
    panda$core$String* $tmp5239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5237, &$s5238);
    panda$core$String* $tmp5240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5239, signPrefix5065);
    panda$core$String* $tmp5242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5240, &$s5241);
    panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5242, numberType4946);
    panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, &$s5244);
    panda$core$String* $tmp5247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5246, start4964);
    panda$core$String* $tmp5249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5247, &$s5248);
    panda$core$String* $tmp5250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5249, end5006);
    panda$core$String* $tmp5252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5250, &$s5251);
    panda$core$String* $tmp5253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, $tmp5252);
    (($fn5254) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5253);
    panda$core$String* $tmp5256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5255, backwardEntryExclusiveTest5234);
    panda$core$String* $tmp5258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5256, &$s5257);
    panda$core$String* $tmp5259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5258, loopStart5051);
    panda$core$String* $tmp5261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5259, &$s5260);
    panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5261, loopEnd5055);
    panda$core$String* $tmp5264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5262, &$s5263);
    (($fn5265) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5264);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5051, p_out);
    panda$core$String* $tmp5267 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    indexValue5266 = $tmp5267;
    panda$core$String* $tmp5269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5268, indexValue5266);
    panda$core$String* $tmp5271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5269, &$s5270);
    panda$core$String* $tmp5272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5271, numberType4946);
    panda$core$String* $tmp5274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, &$s5273);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5274, numberType4946);
    panda$core$String* $tmp5277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5275, &$s5276);
    panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5277, indexValuePtr4974);
    panda$core$String* $tmp5280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, &$s5279);
    (($fn5281) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5280);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block4925, p_out);
    panda$core$Bit $tmp5282 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block4925);
    panda$core$Bit $tmp5283 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5282);
    if ($tmp5283.value) {
    {
        panda$core$String* $tmp5285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5284, loopTest5057);
        panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5285, &$s5286);
        (($fn5288) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5287);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopTest5057, p_out);
    panda$core$String* $tmp5290 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopInc5289 = $tmp5290;
    panda$core$String* $tmp5292 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardLabel5291 = $tmp5292;
    panda$core$String* $tmp5294 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardLabel5293 = $tmp5294;
    panda$core$String* $tmp5296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5295, direction5077);
    panda$core$String* $tmp5298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5296, &$s5297);
    panda$core$String* $tmp5299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5298, forwardLabel5291);
    panda$core$String* $tmp5301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5299, &$s5300);
    panda$core$String* $tmp5302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5301, backwardLabel5293);
    panda$core$String* $tmp5304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5302, &$s5303);
    (($fn5305) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5304);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardLabel5291, p_out);
    panda$core$String* $tmp5307 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardDelta5306 = $tmp5307;
    panda$core$String* $tmp5309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5308, forwardDelta5306);
    panda$core$String* $tmp5311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5309, &$s5310);
    panda$core$String* $tmp5312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5311, numberType4946);
    panda$core$String* $tmp5314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5312, &$s5313);
    panda$core$String* $tmp5315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5314, end5006);
    panda$core$String* $tmp5317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5315, &$s5316);
    panda$core$String* $tmp5318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5317, indexValue5266);
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5318, &$s5319);
    (($fn5321) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5320);
    panda$core$String* $tmp5323 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardInclusiveLabel5322 = $tmp5323;
    panda$core$String* $tmp5325 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    forwardExclusiveLabel5324 = $tmp5325;
    panda$core$String* $tmp5327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5326, inclusive5041);
    panda$core$String* $tmp5329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5327, &$s5328);
    panda$core$String* $tmp5330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5329, forwardInclusiveLabel5322);
    panda$core$String* $tmp5332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5330, &$s5331);
    panda$core$String* $tmp5333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5332, forwardExclusiveLabel5324);
    (($fn5334) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5333);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardInclusiveLabel5322, p_out);
    panda$core$String* $tmp5336 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardInclusiveTest5335 = $tmp5336;
    panda$core$String* $tmp5338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5337, forwardInclusiveTest5335);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5338, &$s5339);
    panda$core$String* $tmp5341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5340, numberType4946);
    panda$core$String* $tmp5343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5341, &$s5342);
    panda$core$String* $tmp5344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5343, forwardDelta5306);
    panda$core$String* $tmp5346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5344, &$s5345);
    panda$core$String* $tmp5347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5346, step5026);
    panda$core$String* $tmp5349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5347, &$s5348);
    (($fn5350) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5349);
    panda$core$String* $tmp5352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5351, forwardInclusiveTest5335);
    panda$core$String* $tmp5354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5352, &$s5353);
    panda$core$String* $tmp5355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5354, loopInc5289);
    panda$core$String* $tmp5357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5355, &$s5356);
    panda$core$String* $tmp5358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5357, loopEnd5055);
    panda$core$String* $tmp5360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5358, &$s5359);
    (($fn5361) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5360);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, forwardExclusiveLabel5324, p_out);
    panda$core$String* $tmp5363 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    forwardExclusiveTest5362 = $tmp5363;
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5364, forwardExclusiveTest5362);
    panda$core$String* $tmp5367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5365, &$s5366);
    panda$core$String* $tmp5368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5367, numberType4946);
    panda$core$String* $tmp5370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5368, &$s5369);
    panda$core$String* $tmp5371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5370, forwardDelta5306);
    panda$core$String* $tmp5373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5371, &$s5372);
    panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5373, step5026);
    panda$core$String* $tmp5376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, &$s5375);
    (($fn5377) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5376);
    panda$core$String* $tmp5379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5378, forwardExclusiveTest5362);
    panda$core$String* $tmp5381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5379, &$s5380);
    panda$core$String* $tmp5382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5381, loopInc5289);
    panda$core$String* $tmp5384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5382, &$s5383);
    panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5384, loopEnd5055);
    panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5385, &$s5386);
    (($fn5388) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5387);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardLabel5293, p_out);
    panda$core$String* $tmp5390 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardDelta5389 = $tmp5390;
    panda$core$String* $tmp5392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5391, backwardDelta5389);
    panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5392, &$s5393);
    panda$core$String* $tmp5395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5394, numberType4946);
    panda$core$String* $tmp5397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5395, &$s5396);
    panda$core$String* $tmp5398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5397, indexValue5266);
    panda$core$String* $tmp5400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5398, &$s5399);
    panda$core$String* $tmp5401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5400, end5006);
    panda$core$String* $tmp5403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5401, &$s5402);
    (($fn5404) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5403);
    panda$core$String* $tmp5406 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    negStep5405 = $tmp5406;
    panda$core$String* $tmp5408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5407, negStep5405);
    panda$core$String* $tmp5410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5408, &$s5409);
    panda$core$String* $tmp5411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5410, numberType4946);
    panda$core$String* $tmp5413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5411, &$s5412);
    panda$core$String* $tmp5414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5413, step5026);
    panda$core$String* $tmp5416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5414, &$s5415);
    (($fn5417) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5416);
    panda$core$String* $tmp5419 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardInclusiveLabel5418 = $tmp5419;
    panda$core$String* $tmp5421 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    backwardExclusiveLabel5420 = $tmp5421;
    panda$core$String* $tmp5423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5422, inclusive5041);
    panda$core$String* $tmp5425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5423, &$s5424);
    panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5425, backwardInclusiveLabel5418);
    panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5426, &$s5427);
    panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5428, backwardExclusiveLabel5420);
    (($fn5430) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5429);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardInclusiveLabel5418, p_out);
    panda$core$String* $tmp5432 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardInclusiveTest5431 = $tmp5432;
    panda$core$String* $tmp5434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5433, backwardInclusiveTest5431);
    panda$core$String* $tmp5436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5434, &$s5435);
    panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5436, numberType4946);
    panda$core$String* $tmp5439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5437, &$s5438);
    panda$core$String* $tmp5440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5439, backwardDelta5389);
    panda$core$String* $tmp5442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5440, &$s5441);
    panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5442, negStep5405);
    (($fn5444) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5443);
    panda$core$String* $tmp5446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5445, backwardInclusiveTest5431);
    panda$core$String* $tmp5448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5446, &$s5447);
    panda$core$String* $tmp5449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5448, loopInc5289);
    panda$core$String* $tmp5451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5449, &$s5450);
    panda$core$String* $tmp5452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5451, loopEnd5055);
    panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5452, &$s5453);
    (($fn5455) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5454);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, backwardExclusiveLabel5420, p_out);
    panda$core$String* $tmp5457 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    backwardExclusiveTest5456 = $tmp5457;
    panda$core$String* $tmp5459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5458, backwardExclusiveTest5456);
    panda$core$String* $tmp5461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5459, &$s5460);
    panda$core$String* $tmp5462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5461, numberType4946);
    panda$core$String* $tmp5464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5462, &$s5463);
    panda$core$String* $tmp5465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5464, backwardDelta5389);
    panda$core$String* $tmp5467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5465, &$s5466);
    panda$core$String* $tmp5468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5467, negStep5405);
    (($fn5469) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5468);
    panda$core$String* $tmp5471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5470, backwardExclusiveTest5456);
    panda$core$String* $tmp5473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5471, &$s5472);
    panda$core$String* $tmp5474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5473, loopInc5289);
    panda$core$String* $tmp5476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5474, &$s5475);
    panda$core$String* $tmp5477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5476, loopEnd5055);
    panda$core$String* $tmp5479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5477, &$s5478);
    (($fn5480) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5479);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopInc5289, p_out);
    panda$core$String* $tmp5482 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    inc5481 = $tmp5482;
    panda$core$String* $tmp5484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5483, inc5481);
    panda$core$String* $tmp5486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5484, &$s5485);
    panda$core$String* $tmp5487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5486, numberType4946);
    panda$core$String* $tmp5489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5487, &$s5488);
    panda$core$String* $tmp5490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5489, indexValue5266);
    panda$core$String* $tmp5492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5490, &$s5491);
    panda$core$String* $tmp5493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5492, step5026);
    panda$core$String* $tmp5495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5493, &$s5494);
    (($fn5496) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5495);
    panda$core$String* $tmp5498 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    incStruct5497 = $tmp5498;
    panda$core$String* $tmp5500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5499, incStruct5497);
    panda$core$String* $tmp5502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5500, &$s5501);
    panda$core$String* $tmp5503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5502, indexType4932);
    panda$core$String* $tmp5505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5503, &$s5504);
    panda$core$String* $tmp5506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5505, numberType4946);
    panda$core$String* $tmp5508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5506, &$s5507);
    (($fn5509) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5508);
    panda$core$String* $tmp5511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5510, numberType4946);
    panda$core$String* $tmp5513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5511, &$s5512);
    panda$core$String* $tmp5514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5513, inc5481);
    panda$core$String* $tmp5516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5514, &$s5515);
    (($fn5517) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5516);
    panda$core$String* $tmp5519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5518, indexType4932);
    panda$core$String* $tmp5521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5519, &$s5520);
    panda$core$String* $tmp5522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5521, incStruct5497);
    panda$core$String* $tmp5524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5522, &$s5523);
    panda$core$String* $tmp5525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5524, indexType4932);
    panda$core$String* $tmp5527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5525, &$s5526);
    panda$core$String* $tmp5528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5527, index4954);
    panda$core$String* $tmp5530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5528, &$s5529);
    (($fn5531) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5530);
    panda$core$String* $tmp5533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5532, loopStart5051);
    panda$core$String* $tmp5535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5533, &$s5534);
    (($fn5536) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5535);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5055, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp5537 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5538 = org$pandalanguage$pandac$Type$isRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5537)->type);
    if ($tmp5538.value) {
    {
        org$pandalanguage$pandac$LLVMCodeGenerator$writeSimpleRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, p_f, p_out);
    }
    }
    else {
    panda$core$Object* $tmp5539 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5540 = org$pandalanguage$pandac$Type$isSteppedRange$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5539)->type);
    if ($tmp5540.value) {
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
    panda$core$String* loopStart5547;
    panda$core$String* loopBody5549;
    panda$core$String* loopEnd5551;
    panda$core$String* test5560;
    panda$core$String* testBit5563;
    panda$core$Bit $tmp5541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_w->kind, ((panda$core$Int64) { 1013 }));
    PANDA_ASSERT($tmp5541.value);
    panda$core$Int64 $tmp5542 = panda$collections$Array$get_count$R$panda$core$Int64(p_w->children);
    panda$core$Bit $tmp5543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5542, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5543.value);
    panda$core$Object* $tmp5544 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$Type* $tmp5545 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5546 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5544)->type, $tmp5545);
    PANDA_ASSERT($tmp5546.value);
    panda$core$String* $tmp5548 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5547 = $tmp5548;
    panda$core$String* $tmp5550 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5549 = $tmp5550;
    panda$core$String* $tmp5552 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5551 = $tmp5552;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5553 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5553->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5553->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5553, ((panda$core$String*) p_w->payload), loopEnd5551, loopStart5547);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5553));
    panda$core$String* $tmp5556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5555, loopStart5547);
    panda$core$String* $tmp5558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5556, &$s5557);
    (($fn5559) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5558);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5547, p_out);
    panda$core$Object* $tmp5561 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5562 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5561), p_out);
    test5560 = $tmp5562;
    panda$core$String* $tmp5564 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5563 = $tmp5564;
    panda$core$String* $tmp5566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5565, testBit5563);
    panda$core$String* $tmp5568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5566, &$s5567);
    panda$core$String* $tmp5569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5568, test5560);
    panda$core$String* $tmp5571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5569, &$s5570);
    (($fn5572) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5571);
    panda$core$String* $tmp5574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5573, testBit5563);
    panda$core$String* $tmp5576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5574, &$s5575);
    panda$core$String* $tmp5577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5576, loopBody5549);
    panda$core$String* $tmp5579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5577, &$s5578);
    panda$core$String* $tmp5580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5579, loopEnd5551);
    panda$core$String* $tmp5582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5580, &$s5581);
    (($fn5583) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5582);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5549, p_out);
    panda$core$Object* $tmp5584 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5584), p_out);
    panda$core$Object* $tmp5585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5586 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5585));
    panda$core$Bit $tmp5587 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5586);
    if ($tmp5587.value) {
    {
        panda$core$String* $tmp5589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5588, loopStart5547);
        panda$core$String* $tmp5591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5589, &$s5590);
        (($fn5592) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5591);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5551, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5599;
    panda$core$String* loopBody5601;
    panda$core$String* loopEnd5603;
    panda$core$String* test5612;
    panda$core$String* testBit5615;
    panda$core$Bit $tmp5593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_d->kind, ((panda$core$Int64) { 1014 }));
    PANDA_ASSERT($tmp5593.value);
    panda$core$Int64 $tmp5594 = panda$collections$Array$get_count$R$panda$core$Int64(p_d->children);
    panda$core$Bit $tmp5595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5594, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5595.value);
    panda$core$Object* $tmp5596 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    org$pandalanguage$pandac$Type* $tmp5597 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp5598 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5596)->type, $tmp5597);
    PANDA_ASSERT($tmp5598.value);
    panda$core$String* $tmp5600 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5599 = $tmp5600;
    panda$core$String* $tmp5602 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopBody5601 = $tmp5602;
    panda$core$String* $tmp5604 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5603 = $tmp5604;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5605 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5605->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5605->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5605, ((panda$core$String*) p_d->payload), loopEnd5603, loopStart5599);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5605));
    panda$core$String* $tmp5608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5607, loopBody5601);
    panda$core$String* $tmp5610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5608, &$s5609);
    (($fn5611) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5610);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5599, p_out);
    panda$core$Object* $tmp5613 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5614 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5613), p_out);
    test5612 = $tmp5614;
    panda$core$String* $tmp5616 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    testBit5615 = $tmp5616;
    panda$core$String* $tmp5618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5617, testBit5615);
    panda$core$String* $tmp5620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5618, &$s5619);
    panda$core$String* $tmp5621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5620, test5612);
    panda$core$String* $tmp5623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5621, &$s5622);
    (($fn5624) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5623);
    panda$core$String* $tmp5626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5625, testBit5615);
    panda$core$String* $tmp5628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5626, &$s5627);
    panda$core$String* $tmp5629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5628, loopBody5601);
    panda$core$String* $tmp5631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5629, &$s5630);
    panda$core$String* $tmp5632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5631, loopEnd5603);
    panda$core$String* $tmp5634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5632, &$s5633);
    (($fn5635) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5634);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopBody5601, p_out);
    panda$core$Object* $tmp5636 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5636), p_out);
    panda$core$Object* $tmp5637 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5638 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5637));
    panda$core$Bit $tmp5639 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5638);
    if ($tmp5639.value) {
    {
        panda$core$String* $tmp5641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5640, loopStart5599);
        panda$core$String* $tmp5643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5641, &$s5642);
        (($fn5644) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5643);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5603, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart5648;
    panda$core$String* loopEnd5650;
    panda$core$Bit $tmp5645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_l->kind, ((panda$core$Int64) { 1015 }));
    PANDA_ASSERT($tmp5645.value);
    panda$core$Int64 $tmp5646 = panda$collections$Array$get_count$R$panda$core$Int64(p_l->children);
    panda$core$Bit $tmp5647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5646, ((panda$core$Int64) { 1 }));
    PANDA_ASSERT($tmp5647.value);
    panda$core$String* $tmp5649 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopStart5648 = $tmp5649;
    panda$core$String* $tmp5651 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    loopEnd5650 = $tmp5651;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5652 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5652->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5652->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5652, ((panda$core$String*) p_l->payload), loopEnd5650, loopStart5648);
    panda$collections$Stack$push$panda$collections$Stack$T(self->loopDescriptors, ((panda$core$Object*) $tmp5652));
    panda$core$String* $tmp5655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5654, loopStart5648);
    panda$core$String* $tmp5657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5655, &$s5656);
    (($fn5658) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5657);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopStart5648, p_out);
    panda$core$Object* $tmp5659 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5659), p_out);
    panda$core$Object* $tmp5660 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5661 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, ((org$pandalanguage$pandac$IRNode*) $tmp5660));
    panda$core$Bit $tmp5662 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5661);
    if ($tmp5662.value) {
    {
        panda$core$String* $tmp5664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5663, loopStart5648);
        panda$core$String* $tmp5666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5664, &$s5665);
        (($fn5667) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5666);
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, loopEnd5650, p_out);
    panda$collections$Stack$pop$R$panda$collections$Stack$T(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$Variable* v5668;
    panda$core$String* ref5679;
    switch (p_target->kind.value) {
        case 1016:
        {
            v5668 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp5670 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5668);
            panda$core$String* $tmp5671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5669, $tmp5670);
            panda$core$String* $tmp5673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5671, &$s5672);
            panda$core$String* $tmp5674 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5668->type);
            panda$core$String* $tmp5675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5673, $tmp5674);
            panda$core$String* $tmp5677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5675, &$s5676);
            (($fn5678) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5677);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp5680 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, p_value, p_out);
                ref5679 = $tmp5680;
                panda$core$String* $tmp5682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5681, ref5679);
                panda$core$String* $tmp5684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5682, &$s5683);
                panda$core$String* $tmp5685 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, v5668->type);
                panda$core$String* $tmp5686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5684, $tmp5685);
                panda$core$String* $tmp5688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5686, &$s5687);
                panda$core$String* $tmp5689 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, v5668);
                panda$core$String* $tmp5690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5688, $tmp5689);
                panda$core$String* $tmp5692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5690, &$s5691);
                (($fn5693) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5692);
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
    panda$collections$Iterator* decl$Iter5707;
    org$pandalanguage$pandac$IRNode* decl5719;
    panda$core$Bit $tmp5697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1017 }));
    bool $tmp5696 = $tmp5697.value;
    if ($tmp5696) goto $l5698;
    panda$core$Bit $tmp5699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1018 }));
    $tmp5696 = $tmp5699.value;
    $l5698:;
    panda$core$Bit $tmp5700 = { $tmp5696 };
    bool $tmp5695 = $tmp5700.value;
    if ($tmp5695) goto $l5701;
    panda$core$Bit $tmp5702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1020 }));
    $tmp5695 = $tmp5702.value;
    $l5701:;
    panda$core$Bit $tmp5703 = { $tmp5695 };
    bool $tmp5694 = $tmp5703.value;
    if ($tmp5694) goto $l5704;
    panda$core$Bit $tmp5705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->kind, ((panda$core$Int64) { 1019 }));
    $tmp5694 = $tmp5705.value;
    $l5704:;
    panda$core$Bit $tmp5706 = { $tmp5694 };
    PANDA_ASSERT($tmp5706.value);
    {
        ITable* $tmp5708 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp5708->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5708 = $tmp5708->next;
        }
        $fn5710 $tmp5709 = $tmp5708->methods[0];
        panda$collections$Iterator* $tmp5711 = $tmp5709(((panda$collections$Iterable*) p_v->children));
        decl$Iter5707 = $tmp5711;
        $l5712:;
        ITable* $tmp5714 = decl$Iter5707->$class->itable;
        while ($tmp5714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5714 = $tmp5714->next;
        }
        $fn5716 $tmp5715 = $tmp5714->methods[0];
        panda$core$Bit $tmp5717 = $tmp5715(decl$Iter5707);
        panda$core$Bit $tmp5718 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5717);
        if (!$tmp5718.value) goto $l5713;
        {
            ITable* $tmp5720 = decl$Iter5707->$class->itable;
            while ($tmp5720->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5720 = $tmp5720->next;
            }
            $fn5722 $tmp5721 = $tmp5720->methods[1];
            panda$core$Object* $tmp5723 = $tmp5721(decl$Iter5707);
            decl5719 = ((org$pandalanguage$pandac$IRNode*) $tmp5723);
            panda$core$Bit $tmp5724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(decl5719->kind, ((panda$core$Int64) { 1021 }));
            PANDA_ASSERT($tmp5724.value);
            panda$core$Int64 $tmp5725 = panda$collections$Array$get_count$R$panda$core$Int64(decl5719->children);
            panda$core$Bit $tmp5726 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5725, ((panda$core$Int64) { 1 }));
            if ($tmp5726.value) {
            {
                panda$core$Object* $tmp5727 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5719->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp5728 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5719->children, ((panda$core$Int64) { 1 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5727), ((org$pandalanguage$pandac$IRNode*) $tmp5728), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp5729 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl5719->children, ((panda$core$Int64) { 0 }));
                org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(self, ((org$pandalanguage$pandac$IRNode*) $tmp5729), NULL, p_out);
            }
            }
        }
        goto $l5712;
        $l5713:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base5733;
    panda$core$String* raw5736;
    org$pandalanguage$pandac$ClassDecl* cl5738;
    org$pandalanguage$pandac$FieldDecl* f5741;
    panda$collections$ListView* fields5742;
    panda$core$Int64 index5744;
    panda$core$Range$LTpanda$core$Int64$GT $tmp5745;
    panda$core$String* result5807;
    panda$core$String* result5821;
    panda$core$String* reused5824;
    switch (p_lvalue->kind.value) {
        case 1009:
        {
            org$pandalanguage$pandac$IRNode* $tmp5730 = org$pandalanguage$pandac$Compiler$unwrapCast$org$pandalanguage$pandac$IRNode$R$org$pandalanguage$pandac$IRNode(self->compiler, p_lvalue);
            panda$core$String* $tmp5731 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, $tmp5730, p_out);
            return $tmp5731;
        }
        break;
        case 1016:
        {
            panda$core$String* $tmp5732 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp5732;
        }
        break;
        case 1026:
        {
            panda$core$Object* $tmp5734 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5735 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5734), p_out);
            base5733 = $tmp5735;
            panda$core$String* $tmp5737 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            raw5736 = $tmp5737;
            panda$core$Object* $tmp5739 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp5740 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5739)->type);
            cl5738 = $tmp5740;
            PANDA_ASSERT(((panda$core$Bit) { cl5738 != NULL }).value);
            f5741 = ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload);
            panda$collections$ListView* $tmp5743 = org$pandalanguage$pandac$Compiler$instanceFields$org$pandalanguage$pandac$ClassDecl$R$panda$collections$ListView$LTorg$pandalanguage$pandac$FieldDecl$GT(self->compiler, cl5738);
            fields5742 = $tmp5743;
            index5744 = ((panda$core$Int64) { -1 });
            ITable* $tmp5746 = ((panda$collections$CollectionView*) fields5742)->$class->itable;
            while ($tmp5746->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp5746 = $tmp5746->next;
            }
            $fn5748 $tmp5747 = $tmp5746->methods[0];
            panda$core$Int64 $tmp5749 = $tmp5747(((panda$collections$CollectionView*) fields5742));
            panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5745, ((panda$core$Int64) { 0 }), $tmp5749, ((panda$core$Bit) { false }));
            int64_t $tmp5751 = $tmp5745.min.value;
            panda$core$Int64 i5750 = { $tmp5751 };
            int64_t $tmp5753 = $tmp5745.max.value;
            bool $tmp5754 = $tmp5745.inclusive.value;
            if ($tmp5754) goto $l5761; else goto $l5762;
            $l5761:;
            if ($tmp5751 <= $tmp5753) goto $l5755; else goto $l5757;
            $l5762:;
            if ($tmp5751 < $tmp5753) goto $l5755; else goto $l5757;
            $l5755:;
            {
                ITable* $tmp5763 = fields5742->$class->itable;
                while ($tmp5763->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp5763 = $tmp5763->next;
                }
                $fn5765 $tmp5764 = $tmp5763->methods[0];
                panda$core$Object* $tmp5766 = $tmp5764(fields5742, i5750);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp5766))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) f5741)->name) }).value) {
                {
                    index5744 = i5750;
                    goto $l5757;
                }
                }
            }
            $l5758:;
            int64_t $tmp5768 = $tmp5753 - i5750.value;
            if ($tmp5754) goto $l5769; else goto $l5770;
            $l5769:;
            if ($tmp5768 >= 1) goto $l5767; else goto $l5757;
            $l5770:;
            if ($tmp5768 > 1) goto $l5767; else goto $l5757;
            $l5767:;
            i5750.value += 1;
            goto $l5755;
            $l5757:;
            panda$core$Bit $tmp5773 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(index5744, ((panda$core$Int64) { -1 }));
            PANDA_ASSERT($tmp5773.value);
            panda$core$String* $tmp5775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5774, raw5736);
            panda$core$String* $tmp5777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5775, &$s5776);
            org$pandalanguage$pandac$Type* $tmp5778 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5738);
            panda$core$String* $tmp5779 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5778);
            panda$core$String* $tmp5780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5777, $tmp5779);
            panda$core$String* $tmp5782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5780, &$s5781);
            org$pandalanguage$pandac$Type* $tmp5784 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(cl5738);
            panda$core$String* $tmp5785 = org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp5784);
            panda$core$String* $tmp5786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5783, $tmp5785);
            panda$core$String* $tmp5788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5786, &$s5787);
            panda$core$String* $tmp5789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5788, base5733);
            panda$core$String* $tmp5791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5789, &$s5790);
            panda$core$String* $tmp5792 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5791, ((panda$core$Object*) wrap_panda$core$Int64(index5744)));
            panda$core$String* $tmp5794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5792, &$s5793);
            panda$core$String* $tmp5795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5782, $tmp5794);
            (($fn5796) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5795);
            panda$core$Bit $tmp5798 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, f5741->owner);
            bool $tmp5797 = $tmp5798.value;
            if ($tmp5797) goto $l5799;
            panda$core$Bit $tmp5801 = org$pandalanguage$pandac$Type$isClass$R$panda$core$Bit(f5741->type);
            bool $tmp5800 = $tmp5801.value;
            if (!$tmp5800) goto $l5802;
            org$pandalanguage$pandac$ClassDecl* $tmp5803 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, f5741->type);
            panda$core$Bit $tmp5804 = org$pandalanguage$pandac$Compiler$isValue$org$pandalanguage$pandac$ClassDecl$R$panda$core$Bit(self->compiler, $tmp5803);
            $tmp5800 = $tmp5804.value;
            $l5802:;
            panda$core$Bit $tmp5805 = { $tmp5800 };
            $tmp5797 = $tmp5805.value;
            $l5799:;
            panda$core$Bit $tmp5806 = { $tmp5797 };
            if ($tmp5806.value) {
            {
                return raw5736;
            }
            }
            panda$core$String* $tmp5808 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            result5807 = $tmp5808;
            panda$core$String* $tmp5810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5809, result5807);
            panda$core$String* $tmp5812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5810, &$s5811);
            panda$core$String* $tmp5813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5812, raw5736);
            panda$core$String* $tmp5815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5813, &$s5814);
            panda$core$String* $tmp5816 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5815, $tmp5816);
            panda$core$String* $tmp5819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5817, &$s5818);
            (($fn5820) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5819);
            return result5807;
        }
        break;
        case 1027:
        {
            panda$core$Object* $tmp5822 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5823 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5822), p_out);
            result5821 = $tmp5823;
            panda$core$String* $tmp5825 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
            reused5824 = $tmp5825;
            panda$core$String* $tmp5827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5826, reused5824);
            panda$core$String* $tmp5829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5827, &$s5828);
            panda$core$String* $tmp5830 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5829, $tmp5830);
            panda$core$String* $tmp5833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5831, &$s5832);
            panda$core$String* $tmp5835 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_lvalue->type);
            panda$core$String* $tmp5836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5834, $tmp5835);
            panda$core$String* $tmp5838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5836, &$s5837);
            panda$core$String* $tmp5839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5838, result5821);
            panda$core$String* $tmp5841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5839, &$s5840);
            panda$core$String* $tmp5842 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5833, $tmp5841);
            (($fn5843) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5842);
            panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V(self->reusedValues, ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value)), ((panda$core$Object*) reused5824));
            return result5821;
        }
        break;
        default:
        {
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* lvalue5847;
    panda$core$String* value5859;
    panda$core$String* t5860;
    panda$core$Int64 op5863;
    panda$core$String* right5865;
    panda$core$Bit $tmp5844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1023 }));
    PANDA_ASSERT($tmp5844.value);
    panda$core$Int64 $tmp5845 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5845, ((panda$core$Int64) { 2 }));
    PANDA_ASSERT($tmp5846.value);
    panda$core$Object* $tmp5849 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5850 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5849)->type);
    panda$core$String* $tmp5851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5848, $tmp5850);
    panda$core$String* $tmp5853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5851, &$s5852);
    panda$core$Object* $tmp5854 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5855 = org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5854), p_out);
    panda$core$String* $tmp5856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5853, $tmp5855);
    panda$core$String* $tmp5858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5856, &$s5857);
    lvalue5847 = $tmp5858;
    panda$core$Object* $tmp5861 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5862 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5861)->type);
    t5860 = $tmp5862;
    op5863 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp5864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op5863, ((panda$core$Int64) { 73 }));
    if ($tmp5864.value) {
    {
        panda$core$Object* $tmp5866 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp5867 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5866), p_out);
        right5865 = $tmp5867;
        panda$core$String* $tmp5869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5868, t5860);
        panda$core$String* $tmp5871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5869, &$s5870);
        panda$core$String* $tmp5872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5871, right5865);
        panda$core$String* $tmp5874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5872, &$s5873);
        value5859 = $tmp5874;
    }
    }
    else {
    {
        PANDA_ASSERT(((panda$core$Bit) { false }).value);
    }
    }
    panda$core$String* $tmp5876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5875, value5859);
    panda$core$String* $tmp5878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5876, &$s5877);
    panda$core$String* $tmp5879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5878, lvalue5847);
    panda$core$String* $tmp5881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5879, &$s5880);
    (($fn5882) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5881);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline5887;
    panda$core$String* result5889;
    panda$core$Int64 $tmp5883 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp5884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5883, ((panda$core$Int64) { 1 }));
    if ($tmp5884.value) {
    {
        panda$core$Int64 $tmp5885 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5886 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5885, ((panda$core$Int64) { 0 }));
        if ($tmp5886.value) {
        {
            panda$core$Object* $tmp5888 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            inline5887 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5888);
            panda$core$Object* $tmp5890 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5891 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5890), p_out);
            result5889 = $tmp5891;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp5892 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp5892->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp5892->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp5892, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result5889));
            panda$collections$Array$add$panda$collections$Array$T(inline5887->returns, ((panda$core$Object*) $tmp5892));
            panda$core$String* $tmp5895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5894, inline5887->exitLabel);
            panda$core$String* $tmp5897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5895, &$s5896);
            (($fn5898) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5897);
        }
        }
        else {
        {
            panda$core$Object* $tmp5900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5901 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5900), p_out);
            panda$core$String* $tmp5902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5899, $tmp5901);
            panda$core$String* $tmp5904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5902, &$s5903);
            (($fn5905) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5904);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp5906 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
        panda$core$Bit $tmp5907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5906, ((panda$core$Int64) { 0 }));
        PANDA_ASSERT($tmp5907.value);
        panda$core$Int64 $tmp5908 = panda$collections$Stack$get_count$R$panda$core$Int64(self->inlineContext);
        panda$core$Bit $tmp5909 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5908, ((panda$core$Int64) { 0 }));
        if ($tmp5909.value) {
        {
            panda$core$Object* $tmp5911 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->inlineContext);
            panda$core$String* $tmp5912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5910, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp5911)->exitLabel);
            panda$core$String* $tmp5914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5912, &$s5913);
            (($fn5915) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5914);
        }
        }
        else {
        {
            (($fn5917) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5916);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range$LTpanda$core$Int64$GT $tmp5921;
    panda$core$Int64 $tmp5918 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Bit $tmp5919 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5918, ((panda$core$Int64) { 0 }));
    PANDA_ASSERT($tmp5919.value);
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp5920 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5920);
    }
    }
    panda$core$Int64 $tmp5922 = panda$collections$Stack$get_count$R$panda$core$Int64(self->loopDescriptors);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp5921, ((panda$core$Int64) { 0 }), $tmp5922, ((panda$core$Bit) { false }));
    int64_t $tmp5924 = $tmp5921.min.value;
    panda$core$Int64 i5923 = { $tmp5924 };
    int64_t $tmp5926 = $tmp5921.max.value;
    bool $tmp5927 = $tmp5921.inclusive.value;
    if ($tmp5927) goto $l5934; else goto $l5935;
    $l5934:;
    if ($tmp5924 <= $tmp5926) goto $l5928; else goto $l5930;
    $l5935:;
    if ($tmp5924 < $tmp5926) goto $l5928; else goto $l5930;
    $l5928:;
    {
        panda$core$Object* $tmp5937 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5923);
        bool $tmp5936 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5937)->loopLabel != NULL }).value;
        if (!$tmp5936) goto $l5938;
        panda$core$Object* $tmp5939 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5923);
        panda$core$Bit $tmp5940 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5939)->loopLabel, p_name);
        $tmp5936 = $tmp5940.value;
        $l5938:;
        panda$core$Bit $tmp5941 = { $tmp5936 };
        if ($tmp5941.value) {
        {
            panda$core$Object* $tmp5942 = panda$collections$Stack$peek$panda$core$Int64$R$panda$collections$Stack$T(self->loopDescriptors, i5923);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp5942);
        }
        }
    }
    $l5931:;
    int64_t $tmp5944 = $tmp5926 - i5923.value;
    if ($tmp5927) goto $l5945; else goto $l5946;
    $l5945:;
    if ($tmp5944 >= 1) goto $l5943; else goto $l5930;
    $l5946:;
    if ($tmp5944 > 1) goto $l5943; else goto $l5930;
    $l5943:;
    i5923.value += 1;
    goto $l5928;
    $l5930:;
    PANDA_ASSERT(((panda$core$Bit) { false }).value);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5949;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5950 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_b->payload));
    desc5949 = $tmp5950;
    panda$core$String* $tmp5952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5951, desc5949->breakLabel);
    panda$core$String* $tmp5954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5952, &$s5953);
    (($fn5955) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5954);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc5956;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5957 = org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(self, ((panda$core$String*) p_c->payload));
    desc5956 = $tmp5957;
    panda$core$String* $tmp5959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5958, desc5956->continueLabel);
    panda$core$String* $tmp5961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5959, &$s5960);
    (($fn5962) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5961);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5972;
    panda$core$String* ifTrue5975;
    panda$core$String* ifFalse5977;
    panda$core$String* name5990;
    panda$core$String* path5991;
    panda$core$String$Index$nullable index5993;
    panda$core$Range$LTpanda$core$String$Index$Q$GT $tmp5996;
    panda$core$String* nameRef5998;
    panda$core$String* line6000;
    panda$core$String* msg6005;
    panda$collections$Iterator* m$Iter6012;
    org$pandalanguage$pandac$MethodDecl* m6026;
    panda$core$Bit $tmp5963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_a->kind, ((panda$core$Int64) { 1034 }));
    PANDA_ASSERT($tmp5963.value);
    panda$core$Int64 $tmp5965 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5965, ((panda$core$Int64) { 1 }));
    bool $tmp5964 = $tmp5966.value;
    if ($tmp5964) goto $l5967;
    panda$core$Int64 $tmp5968 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp5969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5968, ((panda$core$Int64) { 2 }));
    $tmp5964 = $tmp5969.value;
    $l5967:;
    panda$core$Bit $tmp5970 = { $tmp5964 };
    PANDA_ASSERT($tmp5970.value);
    panda$core$Bit $tmp5971 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp5971.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp5973 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5974 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp5973), p_out);
    test5972 = $tmp5974;
    panda$core$String* $tmp5976 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifTrue5975 = $tmp5976;
    panda$core$String* $tmp5978 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    ifFalse5977 = $tmp5978;
    panda$core$String* $tmp5980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5979, test5972);
    panda$core$String* $tmp5982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5980, &$s5981);
    panda$core$String* $tmp5983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5982, ifTrue5975);
    panda$core$String* $tmp5985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5983, &$s5984);
    panda$core$String* $tmp5986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5985, ifFalse5977);
    panda$core$String* $tmp5988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5986, &$s5987);
    (($fn5989) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5988);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifFalse5977, p_out);
    panda$core$Object* $tmp5992 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    path5991 = ((org$pandalanguage$pandac$ClassDecl*) $tmp5992)->source->path;
    panda$core$String$Index$nullable $tmp5995 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(path5991, &$s5994);
    index5993 = $tmp5995;
    if (((panda$core$Bit) { !index5993.nonnull }).value) {
    {
        name5990 = path5991;
    }
    }
    else {
    {
        panda$core$Range$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Bit(&$tmp5996, index5993, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp5997 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(path5991, $tmp5996);
        name5990 = $tmp5997;
    }
    }
    panda$core$String* $tmp5999 = org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(self, name5990, p_out);
    nameRef5998 = $tmp5999;
    panda$core$String* $tmp6002 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s6001, ((panda$core$Object*) wrap_panda$core$Int64(p_a->position.line)));
    panda$core$String* $tmp6004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6002, &$s6003);
    line6000 = $tmp6004;
    panda$core$Int64 $tmp6006 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6006, ((panda$core$Int64) { 2 }));
    if ($tmp6007.value) {
    {
        panda$core$Object* $tmp6008 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6009 = org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6008), p_out);
        msg6005 = $tmp6009;
    }
    }
    else {
    {
        msg6005 = NULL;
    }
    }
    (($fn6011) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s6010);
    {
        org$pandalanguage$pandac$Type* $tmp6013 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp6014 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, $tmp6013);
        ITable* $tmp6015 = ((panda$collections$Iterable*) $tmp6014->methods)->$class->itable;
        while ($tmp6015->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6015 = $tmp6015->next;
        }
        $fn6017 $tmp6016 = $tmp6015->methods[0];
        panda$collections$Iterator* $tmp6018 = $tmp6016(((panda$collections$Iterable*) $tmp6014->methods));
        m$Iter6012 = $tmp6018;
        $l6019:;
        ITable* $tmp6021 = m$Iter6012->$class->itable;
        while ($tmp6021->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6021 = $tmp6021->next;
        }
        $fn6023 $tmp6022 = $tmp6021->methods[0];
        panda$core$Bit $tmp6024 = $tmp6022(m$Iter6012);
        panda$core$Bit $tmp6025 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6024);
        if (!$tmp6025.value) goto $l6020;
        {
            ITable* $tmp6027 = m$Iter6012->$class->itable;
            while ($tmp6027->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6027 = $tmp6027->next;
            }
            $fn6029 $tmp6028 = $tmp6027->methods[1];
            panda$core$Object* $tmp6030 = $tmp6028(m$Iter6012);
            m6026 = ((org$pandalanguage$pandac$MethodDecl*) $tmp6030);
            panda$core$Bit $tmp6032 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m6026)->name, &$s6031);
            if ($tmp6032.value) {
            {
                org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$MethodDecl(self->compiler, m6026);
                org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(self, m6026);
            }
            }
        }
        goto $l6019;
        $l6020:;
    }
    if (((panda$core$Bit) { msg6005 != NULL }).value) {
    {
        panda$core$String* $tmp6035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6033, &$s6034);
        (($fn6036) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6035);
    }
    }
    else {
    {
        (($fn6038) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s6037);
    }
    }
    panda$core$String* $tmp6040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6039, nameRef5998);
    panda$core$String* $tmp6042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6040, &$s6041);
    panda$core$String* $tmp6043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6042, line6000);
    panda$core$String* $tmp6045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6043, &$s6044);
    (($fn6046) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6045);
    if (((panda$core$Bit) { msg6005 != NULL }).value) {
    {
        panda$core$String* $tmp6048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6047, msg6005);
        panda$core$String* $tmp6050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6048, &$s6049);
        (($fn6051) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6050);
    }
    }
    (($fn6053) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6052);
    (($fn6055) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6054);
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ifTrue5975, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeMatch$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* valueStruct6057;
    org$pandalanguage$pandac$ClassDecl* numberClass6060;
    panda$core$String* value6063;
    org$pandalanguage$pandac$FieldDecl* f6073;
    panda$core$String* switchType6076;
    panda$core$String* endLabel6086;
    panda$collections$Array* whenLabels6088;
    panda$core$String* otherwiseLabel6091;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6102;
    org$pandalanguage$pandac$IRNode* w6117;
    panda$core$String* label6121;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6123;
    panda$core$UInt64 number6139;
    panda$core$Range$LTpanda$core$Int64$GT $tmp6167;
    org$pandalanguage$pandac$IRNode* w6182;
    org$pandalanguage$pandac$IRNode* block6184;
    panda$core$Bit $tmp6056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->kind, ((panda$core$Int64) { 1042 }));
    PANDA_ASSERT($tmp6056.value);
    panda$core$Object* $tmp6058 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6059 = org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(self, ((org$pandalanguage$pandac$IRNode*) $tmp6058), p_out);
    valueStruct6057 = $tmp6059;
    panda$core$Object* $tmp6061 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp6062 = org$pandalanguage$pandac$Compiler$getClass$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$ClassDecl$Q(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6061)->type);
    numberClass6060 = $tmp6062;
    panda$core$String* $tmp6064 = org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(self);
    value6063 = $tmp6064;
    panda$core$String* $tmp6066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6065, value6063);
    panda$core$String* $tmp6068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6066, &$s6067);
    panda$core$String* $tmp6069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6068, valueStruct6057);
    panda$core$String* $tmp6071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6069, &$s6070);
    (($fn6072) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6071);
    org$pandalanguage$pandac$Symbol* $tmp6075 = org$pandalanguage$pandac$SymbolTable$$IDX$panda$core$String$R$org$pandalanguage$pandac$Symbol$Q(numberClass6060->symbolTable, &$s6074);
    f6073 = ((org$pandalanguage$pandac$FieldDecl*) $tmp6075);
    org$pandalanguage$pandac$Compiler$resolve$org$pandalanguage$pandac$FieldDecl(self->compiler, f6073);
    panda$core$String* $tmp6077 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, f6073->type);
    switchType6076 = $tmp6077;
    panda$core$String* $tmp6079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6078, switchType6076);
    panda$core$String* $tmp6081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6079, &$s6080);
    panda$core$String* $tmp6082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6081, value6063);
    panda$core$String* $tmp6084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6082, &$s6083);
    (($fn6085) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6084);
    panda$core$String* $tmp6087 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
    endLabel6086 = $tmp6087;
    panda$collections$Array* $tmp6089 = (panda$collections$Array*) malloc(40);
    $tmp6089->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6089->refCount.value = 1;
    panda$collections$Array$init($tmp6089);
    whenLabels6088 = $tmp6089;
    panda$core$Int64 $tmp6092 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Int64 $tmp6093 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6092, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp6094 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, $tmp6093);
    panda$core$Bit $tmp6095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp6094)->kind, ((panda$core$Int64) { 1043 }));
    if ($tmp6095.value) {
    {
        panda$core$String* $tmp6096 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        otherwiseLabel6091 = $tmp6096;
    }
    }
    else {
    {
        otherwiseLabel6091 = endLabel6086;
    }
    }
    panda$core$String* $tmp6098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6097, otherwiseLabel6091);
    panda$core$String* $tmp6100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6098, &$s6099);
    (($fn6101) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6100);
    panda$core$Int64 $tmp6103 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6102, ((panda$core$Int64) { 1 }), $tmp6103, ((panda$core$Bit) { false }));
    int64_t $tmp6105 = $tmp6102.min.value;
    panda$core$Int64 i6104 = { $tmp6105 };
    int64_t $tmp6107 = $tmp6102.max.value;
    bool $tmp6108 = $tmp6102.inclusive.value;
    if ($tmp6108) goto $l6115; else goto $l6116;
    $l6115:;
    if ($tmp6105 <= $tmp6107) goto $l6109; else goto $l6111;
    $l6116:;
    if ($tmp6105 < $tmp6107) goto $l6109; else goto $l6111;
    $l6109:;
    {
        panda$core$Object* $tmp6118 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i6104);
        w6117 = ((org$pandalanguage$pandac$IRNode*) $tmp6118);
        panda$core$Bit $tmp6119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6117->kind, ((panda$core$Int64) { 1043 }));
        if ($tmp6119.value) {
        {
            goto $l6112;
        }
        }
        panda$core$Bit $tmp6120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(w6117->kind, ((panda$core$Int64) { 1042 }));
        PANDA_ASSERT($tmp6120.value);
        panda$core$String* $tmp6122 = org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(self);
        label6121 = $tmp6122;
        panda$collections$Array$add$panda$collections$Array$T(whenLabels6088, ((panda$core$Object*) label6121));
        panda$core$Int64 $tmp6124 = panda$collections$Array$get_count$R$panda$core$Int64(w6117->children);
        panda$core$Int64 $tmp6125 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6124, ((panda$core$Int64) { 1 }));
        panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6123, ((panda$core$Int64) { 0 }), $tmp6125, ((panda$core$Bit) { false }));
        int64_t $tmp6127 = $tmp6123.min.value;
        panda$core$Int64 i6126 = { $tmp6127 };
        int64_t $tmp6129 = $tmp6123.max.value;
        bool $tmp6130 = $tmp6123.inclusive.value;
        if ($tmp6130) goto $l6137; else goto $l6138;
        $l6137:;
        if ($tmp6127 <= $tmp6129) goto $l6131; else goto $l6133;
        $l6138:;
        if ($tmp6127 < $tmp6129) goto $l6131; else goto $l6133;
        $l6131:;
        {
            panda$core$Object* $tmp6140 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w6117->children, i6126);
            panda$core$UInt64 $tmp6141 = org$pandalanguage$pandac$Compiler$getConstantInt$org$pandalanguage$pandac$IRNode$R$panda$core$UInt64(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6140));
            number6139 = $tmp6141;
            panda$core$String* $tmp6143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6142, switchType6076);
            panda$core$String* $tmp6145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6143, &$s6144);
            panda$core$String* $tmp6146 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6145, ((panda$core$Object*) wrap_panda$core$UInt64(number6139)));
            panda$core$String* $tmp6148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6146, &$s6147);
            panda$core$String* $tmp6149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6148, label6121);
            panda$core$String* $tmp6151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6149, &$s6150);
            (($fn6152) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6151);
        }
        $l6134:;
        int64_t $tmp6154 = $tmp6129 - i6126.value;
        if ($tmp6130) goto $l6155; else goto $l6156;
        $l6155:;
        if ($tmp6154 >= 1) goto $l6153; else goto $l6133;
        $l6156:;
        if ($tmp6154 > 1) goto $l6153; else goto $l6133;
        $l6153:;
        i6126.value += 1;
        goto $l6131;
        $l6133:;
    }
    $l6112:;
    int64_t $tmp6160 = $tmp6107 - i6104.value;
    if ($tmp6108) goto $l6161; else goto $l6162;
    $l6161:;
    if ($tmp6160 >= 1) goto $l6159; else goto $l6111;
    $l6162:;
    if ($tmp6160 > 1) goto $l6159; else goto $l6111;
    $l6159:;
    i6104.value += 1;
    goto $l6109;
    $l6111:;
    (($fn6166) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6165);
    panda$core$Int64 $tmp6168 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->children);
    panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit(&$tmp6167, ((panda$core$Int64) { 1 }), $tmp6168, ((panda$core$Bit) { false }));
    int64_t $tmp6170 = $tmp6167.min.value;
    panda$core$Int64 i6169 = { $tmp6170 };
    int64_t $tmp6172 = $tmp6167.max.value;
    bool $tmp6173 = $tmp6167.inclusive.value;
    if ($tmp6173) goto $l6180; else goto $l6181;
    $l6180:;
    if ($tmp6170 <= $tmp6172) goto $l6174; else goto $l6176;
    $l6181:;
    if ($tmp6170 < $tmp6172) goto $l6174; else goto $l6176;
    $l6174:;
    {
        panda$core$Object* $tmp6183 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->children, i6169);
        w6182 = ((org$pandalanguage$pandac$IRNode*) $tmp6183);
        panda$core$Int64 $tmp6185 = panda$collections$Array$get_count$R$panda$core$Int64(w6182->children);
        panda$core$Int64 $tmp6186 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp6185, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp6187 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(w6182->children, $tmp6186);
        block6184 = ((org$pandalanguage$pandac$IRNode*) $tmp6187);
        panda$core$Int64 $tmp6188 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6169, ((panda$core$Int64) { 1 }));
        panda$core$Int64 $tmp6189 = panda$collections$Array$get_count$R$panda$core$Int64(whenLabels6088);
        panda$core$Bit $tmp6190 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp6188, $tmp6189);
        if ($tmp6190.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, otherwiseLabel6091, p_out);
        }
        }
        else {
        {
            panda$core$Int64 $tmp6191 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i6169, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp6192 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(whenLabels6088, $tmp6191);
            org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, ((panda$core$String*) $tmp6192), p_out);
        }
        }
        org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, block6184, p_out);
        panda$core$Bit $tmp6193 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, block6184);
        panda$core$Bit $tmp6194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6193);
        if ($tmp6194.value) {
        {
            panda$core$String* $tmp6196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6195, endLabel6086);
            panda$core$String* $tmp6198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6196, &$s6197);
            (($fn6199) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6198);
        }
        }
    }
    $l6177:;
    int64_t $tmp6201 = $tmp6172 - i6169.value;
    if ($tmp6173) goto $l6202; else goto $l6203;
    $l6202:;
    if ($tmp6201 >= 1) goto $l6200; else goto $l6176;
    $l6203:;
    if ($tmp6201 > 1) goto $l6200; else goto $l6176;
    $l6200:;
    i6169.value += 1;
    goto $l6174;
    $l6176:;
    org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(self, endLabel6086, p_out);
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
    panda$core$String* result6206;
    org$pandalanguage$pandac$Type* $tmp6207 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_m->owner);
    panda$core$String* $tmp6208 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, $tmp6207);
    result6206 = $tmp6208;
    panda$core$Bit $tmp6210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6209 = $tmp6210.value;
    if (!$tmp6209) goto $l6211;
    panda$core$Bit $tmp6213 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6206, &$s6212);
    panda$core$Bit $tmp6214 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6213);
    $tmp6209 = $tmp6214.value;
    $l6211:;
    panda$core$Bit $tmp6215 = { $tmp6209 };
    if ($tmp6215.value) {
    {
        panda$core$String* $tmp6217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6206, &$s6216);
        return $tmp6217;
    }
    }
    return result6206;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6218;
    panda$core$Bit needsIndirection6227;
    panda$core$String* separator6239;
    panda$collections$Iterator* p$Iter6260;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6272;
    panda$core$String* $tmp6219 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    name6218 = $tmp6219;
    panda$core$Bit $tmp6220 = panda$collections$Set$contains$panda$collections$Set$T$R$panda$core$Bit(self->declared, ((panda$collections$Key*) name6218));
    if ($tmp6220.value) {
    {
        return;
    }
    }
    panda$collections$Set$add$panda$collections$Set$T(self->declared, ((panda$collections$Key*) name6218));
    panda$core$String* $tmp6222 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6221, $tmp6222);
    panda$core$String* $tmp6225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6223, &$s6224);
    (($fn6226) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6225);
    panda$core$Bit $tmp6228 = org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(self, p_m);
    needsIndirection6227 = $tmp6228;
    if (needsIndirection6227.value) {
    {
        (($fn6230) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6229);
    }
    }
    else {
    {
        panda$core$String* $tmp6231 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        (($fn6232) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6231);
    }
    }
    panda$core$String* $tmp6234 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6233, $tmp6234);
    panda$core$String* $tmp6237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6235, &$s6236);
    (($fn6238) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6237);
    separator6239 = &$s6240;
    if (needsIndirection6227.value) {
    {
        panda$core$String* $tmp6242 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
        panda$core$String* $tmp6243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6241, $tmp6242);
        panda$core$String* $tmp6245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6243, &$s6244);
        (($fn6246) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6245);
        separator6239 = &$s6247;
    }
    }
    panda$core$Bit $tmp6248 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6248);
    if ($tmp6249.value) {
    {
        panda$core$String* $tmp6251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6250, separator6239);
        panda$core$String* $tmp6253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6251, &$s6252);
        panda$core$String* $tmp6254 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6253, $tmp6254);
        panda$core$String* $tmp6257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6255, &$s6256);
        (($fn6258) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6257);
        separator6239 = &$s6259;
    }
    }
    {
        ITable* $tmp6261 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6261->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6261 = $tmp6261->next;
        }
        $fn6263 $tmp6262 = $tmp6261->methods[0];
        panda$collections$Iterator* $tmp6264 = $tmp6262(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6260 = $tmp6264;
        $l6265:;
        ITable* $tmp6267 = p$Iter6260->$class->itable;
        while ($tmp6267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6267 = $tmp6267->next;
        }
        $fn6269 $tmp6268 = $tmp6267->methods[0];
        panda$core$Bit $tmp6270 = $tmp6268(p$Iter6260);
        panda$core$Bit $tmp6271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6270);
        if (!$tmp6271.value) goto $l6266;
        {
            ITable* $tmp6273 = p$Iter6260->$class->itable;
            while ($tmp6273->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6273 = $tmp6273->next;
            }
            $fn6275 $tmp6274 = $tmp6273->methods[1];
            panda$core$Object* $tmp6276 = $tmp6274(p$Iter6260);
            p6272 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6276);
            panda$core$String* $tmp6278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6277, separator6239);
            panda$core$String* $tmp6280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6278, &$s6279);
            panda$core$String* $tmp6281 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6272->type);
            panda$core$String* $tmp6282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6280, $tmp6281);
            panda$core$String* $tmp6284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6282, &$s6283);
            panda$core$String* $tmp6285 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6272->name);
            panda$core$String* $tmp6286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6284, $tmp6285);
            panda$core$String* $tmp6288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6286, &$s6287);
            (($fn6289) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6288);
            separator6239 = &$s6290;
        }
        goto $l6265;
        $l6266:;
    }
    (($fn6292) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6291);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6315;
    panda$collections$Iterator* p$Iter6326;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6338;
    panda$io$MemoryOutputStream* bodyBuffer6361;
    panda$io$IndentedOutputStream* indentedBody6364;
    panda$collections$Iterator* s$Iter6367;
    org$pandalanguage$pandac$IRNode* s6379;
    panda$core$Object* $tmp6293 = panda$collections$Stack$peek$R$panda$collections$Stack$T(self->compiler->currentClass);
    PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp6293)) == ((panda$core$Object*) p_m->owner) }).value);
    self->currentMethod = p_m;
    self->currentBlock = &$s6294;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn6295) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    (($fn6297) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6296);
    panda$core$Bit $tmp6298 = org$pandalanguage$pandac$ClassDecl$isSpecialization$R$panda$core$Bit(p_m->owner);
    if ($tmp6298.value) {
    {
        (($fn6300) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6299);
    }
    }
    panda$core$String* $tmp6302 = org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6301, $tmp6302);
    panda$core$String* $tmp6305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6303, &$s6304);
    panda$core$String* $tmp6306 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p_m->returnType);
    panda$core$String* $tmp6307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6305, $tmp6306);
    panda$core$String* $tmp6309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6307, &$s6308);
    panda$core$String* $tmp6310 = org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
    panda$core$String* $tmp6311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6309, $tmp6310);
    panda$core$String* $tmp6313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6311, &$s6312);
    (($fn6314) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6313);
    separator6315 = &$s6316;
    panda$core$Bit $tmp6317 = org$pandalanguage$pandac$Annotations$isClass$R$panda$core$Bit(p_m->annotations);
    panda$core$Bit $tmp6318 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6317);
    if ($tmp6318.value) {
    {
        panda$core$String* $tmp6320 = org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(self, p_m);
        panda$core$String* $tmp6321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6319, $tmp6320);
        panda$core$String* $tmp6323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6321, &$s6322);
        (($fn6324) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6323);
        separator6315 = &$s6325;
    }
    }
    {
        ITable* $tmp6327 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6327->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6327 = $tmp6327->next;
        }
        $fn6329 $tmp6328 = $tmp6327->methods[0];
        panda$collections$Iterator* $tmp6330 = $tmp6328(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6326 = $tmp6330;
        $l6331:;
        ITable* $tmp6333 = p$Iter6326->$class->itable;
        while ($tmp6333->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6333 = $tmp6333->next;
        }
        $fn6335 $tmp6334 = $tmp6333->methods[0];
        panda$core$Bit $tmp6336 = $tmp6334(p$Iter6326);
        panda$core$Bit $tmp6337 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6336);
        if (!$tmp6337.value) goto $l6332;
        {
            ITable* $tmp6339 = p$Iter6326->$class->itable;
            while ($tmp6339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6339 = $tmp6339->next;
            }
            $fn6341 $tmp6340 = $tmp6339->methods[1];
            panda$core$Object* $tmp6342 = $tmp6340(p$Iter6326);
            p6338 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6342);
            panda$core$String* $tmp6344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6343, separator6315);
            panda$core$String* $tmp6346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6344, &$s6345);
            panda$core$String* $tmp6347 = org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(self, p6338->type);
            panda$core$String* $tmp6348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6346, $tmp6347);
            panda$core$String* $tmp6350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6348, &$s6349);
            panda$core$String* $tmp6351 = org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(self, p6338->name);
            panda$core$String* $tmp6352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6350, $tmp6351);
            panda$core$String* $tmp6354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6352, &$s6353);
            (($fn6355) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6354);
            separator6315 = &$s6356;
        }
        goto $l6331;
        $l6332:;
    }
    (($fn6358) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6357);
    panda$core$Int64 $tmp6359 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6359;
    panda$core$Bit $tmp6360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_body->kind, ((panda$core$Int64) { 1000 }));
    PANDA_ASSERT($tmp6360.value);
    panda$io$MemoryOutputStream* $tmp6362 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6362->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6362->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6362);
    bodyBuffer6361 = $tmp6362;
    panda$io$IndentedOutputStream* $tmp6365 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp6365->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6365->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6365, ((panda$io$OutputStream*) bodyBuffer6361));
    indentedBody6364 = $tmp6365;
    {
        ITable* $tmp6368 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6368->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6368 = $tmp6368->next;
        }
        $fn6370 $tmp6369 = $tmp6368->methods[0];
        panda$collections$Iterator* $tmp6371 = $tmp6369(((panda$collections$Iterable*) p_body->children));
        s$Iter6367 = $tmp6371;
        $l6372:;
        ITable* $tmp6374 = s$Iter6367->$class->itable;
        while ($tmp6374->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6374 = $tmp6374->next;
        }
        $fn6376 $tmp6375 = $tmp6374->methods[0];
        panda$core$Bit $tmp6377 = $tmp6375(s$Iter6367);
        panda$core$Bit $tmp6378 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6377);
        if (!$tmp6378.value) goto $l6373;
        {
            ITable* $tmp6380 = s$Iter6367->$class->itable;
            while ($tmp6380->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6380 = $tmp6380->next;
            }
            $fn6382 $tmp6381 = $tmp6380->methods[1];
            panda$core$Object* $tmp6383 = $tmp6381(s$Iter6367);
            s6379 = ((org$pandalanguage$pandac$IRNode*) $tmp6383);
            org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(self, s6379, indentedBody6364);
        }
        goto $l6372;
        $l6373:;
    }
    panda$core$String* $tmp6385 = (($fn6384) self->methodHeaderBuffer->$class->vtable[21])(self->methodHeaderBuffer);
    (($fn6386) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6385);
    panda$core$String* $tmp6388 = (($fn6387) bodyBuffer6361->$class->vtable[21])(bodyBuffer6361);
    (($fn6389) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6388);
    panda$core$Bit $tmp6390 = org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(self, p_body);
    panda$core$Bit $tmp6391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6390);
    if ($tmp6391.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6392 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6393 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit(p_m->returnType, $tmp6392);
        if ($tmp6393.value) {
        {
            (($fn6395) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6394);
        }
        }
        else {
        {
            (($fn6397) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6396);
        }
        }
    }
    }
    panda$core$Int64 $tmp6398 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6398;
    (($fn6400) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6399);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6401 = org$pandalanguage$pandac$Annotations$isSpecialize$R$panda$core$Bit(p_cl->annotations);
    if ($tmp6401.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6402 = org$pandalanguage$pandac$ClassDecl$type$R$org$pandalanguage$pandac$Type(p_cl);
    org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(self, $tmp6402);
    org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

