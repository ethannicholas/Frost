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
#include "panda/core/SpecializedRange.LTpanda/core/Int64.GT.h"
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
#include "panda/core/SpecializedRange.LTpanda/core/String/Index.Q.GT.h"


struct { panda$core$Class* cl; ITable* next; void* methods[6]; } org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$finish} };

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl} };

typedef void (*$fn50)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn54)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn56)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn58)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn60)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn62)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn63)(panda$io$MemoryOutputStream*);
typedef void (*$fn65)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn66)(panda$io$MemoryOutputStream*);
typedef void (*$fn68)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn69)(panda$io$MemoryOutputStream*);
typedef void (*$fn71)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn72)(panda$io$MemoryOutputStream*);
typedef void (*$fn74)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn75)(panda$io$MemoryOutputStream*);
typedef void (*$fn77)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn78)(panda$io$MemoryOutputStream*);
typedef void (*$fn80)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn81)(panda$core$Object*);
typedef void (*$fn96)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn104)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn115)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn124)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn127)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn130)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn139)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn143)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn149)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn155)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn157)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn159)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Int64 (*$fn161)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn171)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn174)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn177)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn180)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn186)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn190)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn196)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn202)(panda$collections$Iterator*);
typedef void (*$fn204)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Int64 (*$fn206)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn215)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn222)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn226)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn229)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn233)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn239)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn245)(panda$collections$Iterator*);
typedef void (*$fn247)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$Int64 (*$fn249)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn259)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn261)(panda$collections$Set*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn263)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn269)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn274)(panda$collections$Stack*, panda$core$Object*);
typedef panda$collections$ListView* (*$fn278)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn282)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn288)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn294)(panda$collections$Iterator*);
typedef void (*$fn296)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$String* (*$fn301)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn306)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn309)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn312)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn314)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn315)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Bit (*$fn316)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn318)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn319)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn320)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn322)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$String* (*$fn327)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn334)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn339)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Iterator* (*$fn343)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn349)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn355)(panda$collections$Iterator*);
typedef void (*$fn357)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$FieldDecl*);
typedef panda$core$String* (*$fn362)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn367)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn370)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn375)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn377)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn378)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$String* (*$fn380)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn385)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn390)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn392)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$Int64 (*$fn404)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn413)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn416)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn422)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn424)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn431)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn433)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn435)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn437)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn439)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn442)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn446)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn448)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn453)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn455)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn459)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn465)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn467)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn472)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn474)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn477)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn479)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn489)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn492)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn494)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn497)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn499)(panda$collections$ImmutableArray*);
typedef void (*$fn522)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn523)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn525)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn527)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn540)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn541)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn544)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn546)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn548)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn550)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn555)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn560)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn565)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn568)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn570)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn572)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn574)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn576)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn581)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn582)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn585)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn587)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn589)(panda$collections$ImmutableArray*);
typedef void (*$fn611)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn612)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn614)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn616)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn629)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn630)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn632)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn634)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn636)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn638)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn644)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Set* (*$fn646)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn653)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn659)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn665)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn668)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn671)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn674)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn678)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn683)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn691)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn698)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn714)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn727)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn739)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn750)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn756)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn762)(panda$collections$Iterator*);
typedef void (*$fn764)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn766)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn769)(panda$core$MutableString*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$Pair* (*$fn771)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn780)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn782)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn783)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn798)(panda$collections$IdentityMap*, panda$core$Object*);
typedef panda$core$Int64 (*$fn802)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn805)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn808)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn815)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn818)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn819)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn822)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn830)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn832)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn838)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn840)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn841)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn863)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn865)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn868)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn869)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn890)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn892)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn922)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn924)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn926)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn929)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn944)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn946)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn952)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn955)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn960)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn965)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn975)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn998)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1007)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1020)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1022)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn1024)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1028)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef void (*$fn1035)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1037)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn1041)(panda$core$MutableString*);
typedef void (*$fn1043)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn1044)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$String* (*$fn1048)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn1055)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn1061)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn1062)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1065)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn1067)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1078)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1080)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1083)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn1106)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn1108)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1117)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1130)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1136)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1163)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1165)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn1167)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Type* (*$fn1189)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1191)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn1195)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn1197)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn1203)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn1205)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1215)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn1220)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1225)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1233)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1255)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn1257)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1266)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1284)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1287)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1289)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Set* (*$fn1291)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1298)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1304)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1310)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1313)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn1316)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn1319)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1323)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn1328)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn1336)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1343)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1359)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1372)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1384)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1395)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1401)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1407)(panda$collections$Iterator*);
typedef void (*$fn1409)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn1411)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1414)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1416)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn1419)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1427)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1429)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1430)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Bit (*$fn1438)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1444)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn1447)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1451)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1453)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1456)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1457)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1460)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1462)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1465)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn1467)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1470)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* (*$fn1472)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*, panda$io$OutputStream*);
typedef panda$core$String* (*$fn1474)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn1476)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn1482)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1485)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn1487)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1489)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1491)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn1493)(panda$collections$ImmutableArray*);
typedef void (*$fn1515)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn1516)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn1518)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1520)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1533)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1536)(panda$core$MutableString*);
typedef panda$core$String* (*$fn1540)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1543)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn1545)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1550)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1552)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn1558)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn1566)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1567)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$collections$ListView* (*$fn1570)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1575)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1577)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$Int64 (*$fn1590)(panda$collections$CollectionView*);
typedef void (*$fn1596)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1599)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn1601)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1613)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn1615)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn1624)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1627)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1650)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn1657)(panda$collections$CollectionView*);
typedef void (*$fn1663)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1669)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1675)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1681)(panda$collections$Iterator*);
typedef void (*$fn1683)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn1684)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1687)(panda$core$MutableString*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$Pair* (*$fn1689)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1698)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1701)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1702)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$String* (*$fn1705)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$Object* (*$fn1711)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$core$String* (*$fn1714)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1724)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1729)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn1732)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1737)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$Int64 (*$fn1750)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn1757)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1760)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn1762)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1773)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1777)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn1779)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn1788)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1791)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1810)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1825)(panda$collections$CollectionView*);
typedef void (*$fn1831)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn1837)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1860)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1863)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn1865)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1867)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn1872)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1880)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1894)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1895)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1896)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Int64 (*$fn1916)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1940)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1942)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1960)(panda$collections$IdentityMap*, panda$core$Object*);
typedef void (*$fn1970)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Int64 (*$fn1971)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1974)(panda$collections$Stack*);
typedef panda$core$String* (*$fn1984)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn1986)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1988)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1993)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1997)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2001)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2005)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2009)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2013)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2017)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2021)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2025)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2029)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2033)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2037)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2041)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2045)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2049)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2053)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2057)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2061)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2065)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2069)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2073)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2077)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2081)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2085)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn2089)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2090)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn2092)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2096)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2102)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2108)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2111)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn2116)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn2118)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn2121)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2122)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn2124)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2125)(panda$core$MutableString*);
typedef panda$core$String* (*$fn2128)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn2145)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn2148)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn2151)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2160)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2163)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn2166)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2178)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2179)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2181)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn2184)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn2187)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2196)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2203)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2205)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2220)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2222)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn2225)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn2228)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2237)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2240)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn2243)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2255)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2256)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2258)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn2261)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn2264)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2273)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2279)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2280)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2282)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2297)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2399)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2414)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2416)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2419)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2422)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2434)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2436)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2445)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2447)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2450)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2453)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2465)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2467)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2476)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2479)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2482)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2485)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2488)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2491)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2494)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Int64 (*$fn2496)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn2498)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$Int64, panda$core$String*, panda$core$Int64, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2502)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn2506)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn2510)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn2515)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2537)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2551)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn2557)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn2559)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn2569)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2571)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2580)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2582)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2594)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2596)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2619)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2621)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2630)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2632)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn2641)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2643)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn2646)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2648)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2650)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn2653)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2659)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2660)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2662)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn2668)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn2670)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn2687)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2689)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn2693)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn2708)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2710)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2734)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2736)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2744)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2752)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn2755)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2775)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2777)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2786)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2788)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2803)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2805)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2820)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2822)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn2825)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2848)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2850)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2862)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2863)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn2877)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2882)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2883)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$collections$ListView* (*$fn2886)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn2891)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2913)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2927)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn2929)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn2933)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2937)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2955)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2957)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2969)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2971)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2986)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2990)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2994)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$MethodDecl*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2996)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$MethodDecl*, panda$io$IndentedOutputStream*);
typedef void (*$fn2998)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2999)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3007)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3010)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3019)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3021)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn3024)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn3026)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn3028)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3044)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3046)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3059)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3061)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn3070)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$String* (*$fn3072)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3077)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3082)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Type* (*$fn3085)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$String* (*$fn3087)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3093)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3105)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3107)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3122)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3127)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Type* (*$fn3130)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$String* (*$fn3132)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3138)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3150)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3153)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3156)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3165)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3167)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3187)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3189)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3204)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3209)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3212)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3221)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3224)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3227)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3236)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3238)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn3251)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn3253)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn3255)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3258)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3260)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3278)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3280)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn3289)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$String* (*$fn3291)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3296)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3301)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3305)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3307)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3311)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3314)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3323)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3325)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3340)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3342)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3343)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn3347)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3350)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3376)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3390)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3399)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3401)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3402)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3403)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3407)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3408)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn3409)(panda$collections$IdentityMap*, panda$core$Object*);
typedef panda$core$Object* (*$fn3410)(panda$collections$Stack*);
typedef panda$core$String* (*$fn3415)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3421)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3426)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3432)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3438)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3444)(panda$collections$Iterator*);
typedef void (*$fn3456)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3458)(panda$io$OutputStream*);
typedef panda$core$String* (*$fn3462)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn3464)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3472)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3475)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3486)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3492)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3495)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3506)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3508)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn3511)(panda$collections$IdentityMap*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3515)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3517)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn3537)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn3540)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn3542)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3545)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3547)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn3549)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3551)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn3555)(panda$collections$ImmutableArray*);
typedef panda$core$String* (*$fn3581)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3587)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn3590)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn3594)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3596)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3602)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3604)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3608)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3629)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$MethodDecl*, panda$core$Bit, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn3633)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3636)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn3641)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3642)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3648)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn3656)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3661)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3675)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3683)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3688)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3694)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3700)(panda$collections$Iterator*);
typedef void (*$fn3709)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3712)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3713)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3726)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3727)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn3730)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3733)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3735)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3738)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3743)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3749)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3757)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3759)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3762)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3774)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3775)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3777)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3779)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3782)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3784)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef void (*$fn3790)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3791)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3793)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3799)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3815)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3817)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn3823)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn3825)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3830)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3832)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn3834)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn3837)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn3839)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3842)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3854)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3856)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3873)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn3875)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3889)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3891)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3908)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3913)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3915)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3932)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3934)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3942)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3950)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3951)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3955)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3967)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3972)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3975)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3977)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$String* (*$fn3979)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3983)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3985)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn3989)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$collections$ListView* (*$fn3992)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn3998)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn4020)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn4034)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4041)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4054)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4060)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4066)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4078)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4080)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4085)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4091)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4099)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4101)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4104)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4116)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4117)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn4119)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4121)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn4124)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4126)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef void (*$fn4132)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4133)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4135)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4141)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn4147)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4149)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4166)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4168)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4171)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4174)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4177)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4183)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4194)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4196)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4211)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4213)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4228)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4230)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4233)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4243)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4248)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4257)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4259)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4265)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4273)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4275)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn4278)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn4281)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4290)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4293)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4296)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn4299)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4303)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn4306)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn4310)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4313)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn4317)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4323)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn4325)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn4328)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn4332)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4338)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn4340)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn4343)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4347)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4350)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4354)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4372)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4375)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4378)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4381)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4384)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4386)(org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4391)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4401)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4414)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4424)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4426)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn4431)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4441)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4454)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4464)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4465)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4480)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4489)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4491)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4506)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4508)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$Int64 (*$fn4514)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4519)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4521)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4530)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4535)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4537)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$Bit (*$fn4543)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4547)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4549)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4551)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4568)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn4570)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4584)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4593)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4601)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef panda$core$String* (*$fn4604)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4607)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4619)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef void (*$fn4624)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4636)(panda$collections$CollectionView*);
typedef void (*$fn4648)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4655)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4661)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4667)(panda$collections$Iterator*);
typedef void (*$fn4677)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4680)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4689)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn4692)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn4720)(panda$collections$CollectionView*);
typedef void (*$fn4728)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4729)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn4732)(panda$collections$Stack*);
typedef panda$core$String* (*$fn4736)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn4742)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4744)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4749)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4752)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4755)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4759)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4762)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4768)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4777)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4778)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4787)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4788)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4797)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4799)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4808)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4811)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4815)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4818)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4823)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4832)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4833)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4842)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4844)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4853)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn4855)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4857)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4859)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4862)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4864)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4872)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4875)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4884)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4892)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4902)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4910)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4913)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4916)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4919)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4922)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4925)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4928)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4931)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4934)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4937)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4940)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4943)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4946)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4951)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn4953)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn4956)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$core$String* (*$fn4959)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4962)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4965)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4968)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4971)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4976)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$collections$Iterator* (*$fn4985)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4991)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4997)(panda$collections$Iterator*);
typedef void (*$fn4999)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5007)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$IRNode* (*$fn5011)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn5013)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn5022)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn5027)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn5029)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5033)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5037)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5040)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5049)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn5052)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn5054)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5057)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5063)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5080)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5085)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5093)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5098)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5101)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5110)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5115)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5119)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn5120)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn5134)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn5137)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn5139)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn5142)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5144)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn5146)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn5148)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn5155)(panda$collections$ImmutableArray*);
typedef panda$core$String* (*$fn5181)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn5187)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn5190)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn5194)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5196)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn5202)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5204)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5208)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5229)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$MethodDecl*, panda$core$Bit, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn5233)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn5240)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5249)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5251)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn5267)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn5270)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn5272)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5274)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn5279)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5289)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5293)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5299)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5305)(panda$collections$Iterator*);
typedef void (*$fn5307)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5308)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5311)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5314)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5317)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5326)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5328)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5331)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5343)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5344)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn5346)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5350)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$Bit (*$fn5353)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5360)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5363)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn5365)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn5367)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5374)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5375)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5380)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn5386)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5389)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn5393)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5395)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn5398)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn5401)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn5405)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn5407)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5410)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef void (*$fn5419)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5421)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5430)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5432)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5449)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5463)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5465)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5474)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5476)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5485)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5489)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5501)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5503)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5512)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5514)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5517)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5520)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5523)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5527)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$String* (*$fn5529)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5532)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5542)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5554)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5566)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5567)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5569)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5572)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5586)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5587)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5589)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5609)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5620)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5621)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5623)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5643)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5654)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5655)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5657)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5660)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5674)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5675)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5677)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5697)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5708)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5709)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5711)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5731)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5742)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5743)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5745)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5760)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5761)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn5762)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5769)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5770)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5772)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5775)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5778)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5790)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5791)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5793)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5808)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5810)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5813)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5823)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5824)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5826)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5841)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5852)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5853)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5855)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5870)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5881)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5882)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5884)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5899)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5901)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5913)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5915)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5918)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5928)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5929)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5931)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5944)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5955)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5956)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5958)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5971)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5982)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5983)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5985)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6000)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6002)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6014)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6022)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6036)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6041)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6042)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6043)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6045)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6048)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6051)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6055)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn6060)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6061)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6064)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6067)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6076)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6087)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6088)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6090)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn6092)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn6099)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6100)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6101)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6103)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6106)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6109)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6113)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn6118)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6119)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6122)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6125)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6145)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6146)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6148)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn6150)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn6157)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6158)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6159)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6161)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6164)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6168)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn6173)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6174)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6176)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn6178)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn6185)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6186)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6187)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6192)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef panda$core$String* (*$fn6197)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6202)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6204)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6210)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6215)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef void (*$fn6220)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6225)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6231)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6237)(panda$collections$Iterator*);
typedef void (*$fn6243)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6245)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$IRNode* (*$fn6248)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn6250)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6253)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef panda$core$String* (*$fn6258)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6261)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn6265)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn6268)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn6274)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn6296)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn6313)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn6315)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn6321)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn6323)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6335)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6339)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6342)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6348)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6354)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6363)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6364)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$String* (*$fn6368)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6374)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6382)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6388)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6404)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn6407)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn6411)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6415)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Position* (*$fn6423)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef void (*$fn6428)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6431)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6436)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn6437)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn6441)(panda$collections$Stack*);
typedef void (*$fn6446)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6448)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn6449)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn6452)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn6473)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn6476)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn6480)(panda$collections$Stack*, panda$core$Int64);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* (*$fn6494)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6500)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* (*$fn6502)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6508)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6512)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6515)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6518)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6530)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6531)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Position* (*$fn6533)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$String* (*$fn6542)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6553)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6556)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn6559)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn6563)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6569)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6575)(panda$collections$Iterator*);
typedef void (*$fn6579)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6580)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6584)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6586)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6594)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6599)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6601)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6603)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6604)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6607)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6609)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6611)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6613)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6615)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6617)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6619)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6621)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6635)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6637)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6639)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6641)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6643)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Type* (*$fn6645)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn6647)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6659)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn6661)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn6663)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$String* (*$fn6665)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6670)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6672)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6675)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6676)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6678)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6680)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6685)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6689)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6694)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6696)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$String* (*$fn6703)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6708)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6713)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6719)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6725)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6731)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6736)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6741)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6744)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6746)(panda$io$MemoryOutputStream*);
typedef void (*$fn6748)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6749)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn6752)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6754)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn6759)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6764)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6769)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6772)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$String* (*$fn6776)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6781)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6786)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6792)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6798)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6804)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6809)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6814)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6817)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6828)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6834)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6840)(panda$collections$Iterator*);
typedef void (*$fn6842)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6843)(panda$io$MemoryOutputStream*);
typedef void (*$fn6845)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6846)(panda$io$MemoryOutputStream*);
typedef void (*$fn6848)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6849)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn6853)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn6856)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6858)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6861)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6862)(org$pandalanguage$pandac$Annotations*);
typedef org$pandalanguage$pandac$Type* (*$fn6864)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn6866)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn6867)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);

static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x64\x61\x74\x61\x6C\x61\x79\x6F\x75\x74\x20\x3D\x20\x22\x65\x2D\x70\x3A\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x69\x31\x3A\x38\x3A\x38\x2D\x69\x38\x3A\x38\x3A\x38\x2D\x69\x31\x36\x3A\x31\x36\x3A\x31\x36\x2D\x69\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x69\x36\x34\x3A", 72, 1 };
static panda$core$String $s46 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x36\x34\x3A\x36\x34\x2D\x66\x33\x32\x3A\x33\x32\x3A\x33\x32\x2D\x66\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x36\x34\x3A\x36\x34\x3A\x36\x34\x2D\x76\x31\x32\x38\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D\x61\x30\x3A\x30\x3A\x36\x34\x2D\x73\x30\x3A\x36\x34\x3A\x36\x34\x2D\x66\x38\x30\x3A\x31\x32\x38\x3A\x31\x32\x38\x2D", 78, 1 };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x38\x3A\x31\x36\x3A\x33\x32\x3A\x36\x34\x2D\x53\x31\x32\x38\x22", 17, 1 };
static panda$core$String $s51 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x61\x72\x67\x65\x74\x20\x74\x72\x69\x70\x6C\x65\x20\x3D\x20\x22\x78\x38\x36\x5F\x36\x34\x2D\x61\x70\x70\x6C\x65\x2D\x6D\x61\x63\x6F\x73\x78\x31\x30\x2E\x38\x2E\x30\x22", 43, 1 };
static panda$core$String $s53 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x29", 24, 1 };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x2C\x20\x69\x36\x34\x29", 30, 1 };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x29", 23, 1 };
static panda$core$String $s59 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 60, 1 };
static panda$core$String $s83 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s85 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s88 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6C", 2, 1 };
static panda$core$String $s90 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x0A", 1, 1 };
static panda$core$String $s94 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3A", 1, 1 };
static panda$core$String $s117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x38", 1, 1 };
static panda$core$String $s119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31\x36", 2, 1 };
static panda$core$String $s121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x33\x32", 2, 1 };
static panda$core$String $s134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10, 1 };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B\x30\x20\x78\x20\x69\x38\x2A\x5D", 42, 1 };
static panda$core$String $s313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 18, 1 };
static panda$core$String $s337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s376 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 19, 1 };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x31\x20\x7D", 6, 1 };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69", 1, 1 };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x31", 2, 1 };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s539 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, 1 };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 1 };
static panda$core$String $s817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, 1 };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, 1 };
static panda$core$String $s919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, 1 };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1 };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s1064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, 1 };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, 1 };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, 1 };
static panda$core$String $s1160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s1218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, 1 };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s1339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s1391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1418 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, 1 };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, 1 };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 9, 1 };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1804 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, 1 };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, 1 };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 1 };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1906 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1910 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, 1 };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 1 };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 1 };
static panda$core$String $s1979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, 1 };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 1 };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 1 };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 1 };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 1 };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 1 };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 1 };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 1 };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 1 };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1 };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1 };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 1 };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1 };
static panda$core$String $s2046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1 };
static panda$core$String $s2050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1 };
static panda$core$String $s2054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 1 };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 1 };
static panda$core$String $s2062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 1 };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 1 };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 1 };
static panda$core$String $s2074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 1 };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2080 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 1 };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 1 };
static panda$core$String $s2086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 1 };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1 };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s2194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, 1 };
static panda$core$String $s2212 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s2215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s2230 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s2247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, 1 };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s2292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2295 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 1 };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 1 };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s2315 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 1 };
static panda$core$String $s2317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 1 };
static panda$core$String $s2333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 1 };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 1 };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 1 };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 1 };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 1 };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 1 };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s2363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s2367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 1 };
static panda$core$String $s2371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 1 };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 1 };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 1 };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 1 };
static panda$core$String $s2381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 1 };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 1 };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 1 };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 1 };
static panda$core$String $s2389 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 1 };
static panda$core$String $s2391 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 1 };
static panda$core$String $s2393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 1 };
static panda$core$String $s2395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 1 };
static panda$core$String $s2397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 1 };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s2573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 48, 1 };
static panda$core$String $s2578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 30, 1 };
static panda$core$String $s2589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 1 };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s2616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 1 };
static panda$core$String $s2628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2712 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 1 };
static panda$core$String $s2749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2759 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 1 };
static panda$core$String $s2762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 1 };
static panda$core$String $s2767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s2769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s2779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2781 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, 1 };
static panda$core$String $s2784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1 };
static panda$core$String $s2807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 1 };
static panda$core$String $s2835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 1 };
static panda$core$String $s2845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s2854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2874 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1 };
static panda$core$String $s2878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 1 };
static panda$core$String $s2952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2961 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, 1 };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s3012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s3036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3048 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, 1 };
static panda$core$String $s3052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s3054 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3057 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3075 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3078 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s3090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3120 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s3135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3177 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3180 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 1 };
static panda$core$String $s3184 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s3214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s3244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s3246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3249 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 1 };
static panda$core$String $s3267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s3271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s3316 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s3338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 1 };
static panda$core$String $s3395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 1 };
static panda$core$String $s3397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3406 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s3417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3446 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3448 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s3451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s3465 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s3467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s3477 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s3481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s3501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s3598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s3639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s3644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 1 };
static panda$core$String $s3651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3654 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s3668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s3764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s3766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3786 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s3788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1 };
static panda$core$String $s3805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1 };
static panda$core$String $s3807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s3809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s3828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3852 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3870 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s3877 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s3879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s3886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3902 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, 1 };
static panda$core$String $s3909 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, 1 };
static panda$core$String $s3911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, 1 };
static panda$core$String $s3933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s3937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4068 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4089 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s4094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4106 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s4130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4139 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s4144 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4146 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1 };
static panda$core$String $s4152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, 1 };
static panda$core$String $s4155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s4157 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s4160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s4163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s4179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4189 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4215 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4226 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4235 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s4240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 1 };
static panda$core$String $s4251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 1 };
static panda$core$String $s4287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 1 };
static panda$core$String $s4288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 1 };
static panda$core$String $s4345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 1 };
static panda$core$String $s4356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s4361 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4398 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s4407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4409 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s4412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s4417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s4419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s4436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s4447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s4452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s4457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s4459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s4469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s4471 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s4478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s4517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s4523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s4528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s4558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s4566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 1 };
static panda$core$String $s4572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s4574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s4581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4586 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s4598 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s4599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s4609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4614 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4617 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 1 };
static panda$core$String $s4629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s4639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1 };
static panda$core$String $s4641 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4643 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, 1 };
static panda$core$String $s4646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 1 };
static panda$core$String $s4675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s4683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 1 };
static panda$core$String $s4685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, 1 };
static panda$core$String $s4698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s4700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 69, 1 };
static panda$core$String $s4708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, 1 };
static panda$core$String $s4710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, 1 };
static panda$core$String $s4723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s4726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x31\x20\x7D\x20\x7D", 26, 1 };
static panda$core$String $s4734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s4738 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, 1 };
static panda$core$String $s4766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 1 };
static panda$core$String $s4770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, 1 };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 1 };
static panda$core$String $s4790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4792 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s4795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 1 };
static panda$core$String $s4825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 1 };
static panda$core$String $s4869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s4880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s4887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s4890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4898 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4900 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 1 };
static panda$core$String $s4905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 1 };
static panda$core$String $s4908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s5015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s5042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5047 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s5066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5072 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s5074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5081 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5094 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s5103 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5105 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s5108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s5111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 1 };
static panda$core$String $s5113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5117 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s5198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s5242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s5247 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s5254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 1 };
static panda$core$String $s5256 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5258 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s5261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5264 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5268 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s5277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5282 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5286 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s5309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5310 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5333 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5338 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5356 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5358 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5370 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5372 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5412 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5414 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s5417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x2C\x20\x30", 6, 1 };
static panda$core$String $s5434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s5439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 1 };
static panda$core$String $s5450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5452 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31\x2C\x20\x30", 6, 1 };
static panda$core$String $s5478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5480 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1 };
static panda$core$String $s5487 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s5491 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5493 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, 1 };
static panda$core$String $s5496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s5499 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5507 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1 };
static panda$core$String $s5535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s5537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s5538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s5540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s5544 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5546 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 1 };
static panda$core$String $s5549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5552 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 1 };
static panda$core$String $s5556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5558 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5574 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s5583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s5596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 1 };
static panda$core$String $s5599 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5601 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5618 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s5630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 1 };
static panda$core$String $s5633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5649 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s5671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s5684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 1 };
static panda$core$String $s5687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5689 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5700 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s5718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 1 };
static panda$core$String $s5721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5749 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5795 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5803 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5806 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5847 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5871 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5876 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5886 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5888 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s5911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5925 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5945 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5947 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5977 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 1 };
static panda$core$String $s5992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s6009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s6012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1 };
static panda$core$String $s6015 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s6017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s6023 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s6025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s6034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6039 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6069 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s6074 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s6077 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s6079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6085 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s6132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s6135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s6137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6143 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6183 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6195 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s6200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s6208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s6218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s6318 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s6329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 1 };
static panda$core$String $s6332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6344 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s6351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s6360 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6366 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6371 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s6377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s6399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3B\x20\x69\x6E\x6C\x69\x6E\x65\x20\x72\x65\x74\x75\x72\x6E\x20\x28", 18, 1 };
static panda$core$String $s6426 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s6429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s6434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6447 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s6496 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6498 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6504 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s6522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s6545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s6547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s6555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20", 10, 1 };
static panda$core$String $s6577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1 };
static panda$core$String $s6581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, 1 };
static panda$core$String $s6582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, 1 };
static panda$core$String $s6585 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, 1 };
static panda$core$String $s6587 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, 1 };
static panda$core$String $s6589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 1 };
static panda$core$String $s6597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s6602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s6652 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6664 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 1 };
static panda$core$String $s6668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s6679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s6687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6692 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6695 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6706 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s6709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6734 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s6739 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6743 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s6745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s6747 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s6751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x69\x6E\x6B\x6F\x6E\x63\x65\x5F\x6F\x64\x72\x20", 13, 1 };
static panda$core$String $s6753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6757 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s6771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s6782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s6812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6815 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s6855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s6857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s6860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };

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
    (($fn62) self->$class->vtable[15])(self, $tmp61);
    panda$core$String* $tmp64 = (($fn63) self->types->$class->vtable[0])(self->types);
    (($fn65) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp64);
    panda$core$String* $tmp67 = (($fn66) self->strings->$class->vtable[0])(self->strings);
    (($fn68) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp67);
    panda$core$String* $tmp70 = (($fn69) self->declarations->$class->vtable[0])(self->declarations);
    (($fn71) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp70);
    panda$core$String* $tmp73 = (($fn72) self->wrapperShimsBuffer->$class->vtable[0])(self->wrapperShimsBuffer);
    (($fn74) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp73);
    panda$core$String* $tmp76 = (($fn75) self->shimsBuffer->$class->vtable[0])(self->shimsBuffer);
    (($fn77) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp76);
    panda$core$String* $tmp79 = (($fn78) self->methodsBuffer->$class->vtable[0])(self->methodsBuffer);
    (($fn80) ((panda$io$OutputStream*) self->out)->$class->vtable[16])(((panda$io$OutputStream*) self->out), $tmp79);
    (($fn81) ((panda$core$Object*) self->out->out)->$class->vtable[1])(((panda$core$Object*) self->out->out));
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    panda$core$Int64 $tmp82 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->varCount, ((panda$core$Int64) { 1 }));
    self->varCount = $tmp82;
    panda$core$String* $tmp84 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s83, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp86 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp84, &$s85);
    return $tmp86;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self) {
    panda$core$Int64 $tmp87 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp87;
    panda$core$String* $tmp89 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s88, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp91 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp89, &$s90);
    return $tmp91;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_label, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp93 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s92, p_label);
    panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp93, &$s94);
    (($fn96) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp95);
    self->currentBlock = p_label;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt) {
    panda$core$Int64 $match$644197;
    {
        $match$644197 = p_stmt->kind;
        panda$core$Bit $tmp98 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644197, ((panda$core$Int64) { 1000 }));
        if ($tmp98.value) {
        {
            panda$core$Int64 $tmp99 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Bit $tmp100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp99, ((panda$core$Int64) { 0 }));
            if ($tmp100.value) {
            {
                return ((panda$core$Bit) { false });
            }
            }
            panda$core$Int64 $tmp101 = panda$collections$Array$get_count$R$panda$core$Int64(p_stmt->children);
            panda$core$Int64 $tmp102 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp101, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp103 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, $tmp102);
            panda$core$Bit $tmp105 = (($fn104) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp103));
            return $tmp105;
        }
        }
        else {
        panda$core$Bit $tmp108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644197, ((panda$core$Int64) { 1006 }));
        bool $tmp107 = $tmp108.value;
        if ($tmp107) goto $l109;
        panda$core$Bit $tmp110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644197, ((panda$core$Int64) { 1007 }));
        $tmp107 = $tmp110.value;
        $l109:;
        panda$core$Bit $tmp111 = { $tmp107 };
        bool $tmp106 = $tmp111.value;
        if ($tmp106) goto $l112;
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$644197, ((panda$core$Int64) { 1008 }));
        $tmp106 = $tmp113.value;
        $l112:;
        panda$core$Bit $tmp114 = { $tmp106 };
        if ($tmp114.value) {
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
    org$pandalanguage$pandac$ClassDecl* cl126;
    panda$core$Int64 result137;
    panda$collections$Iterator* f$Iter138;
    org$pandalanguage$pandac$FieldDecl* f152;
    panda$core$Int64 size160;
    panda$core$Int64 align163;
    panda$core$Bit $tmp116 = (($fn115) p_t->$class->vtable[7])(p_t);
    if ($tmp116.value) {
    {
        panda$core$Bit $tmp118 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s117);
        if ($tmp118.value) {
        {
            return ((panda$core$Int64) { 1 });
        }
        }
        panda$core$Bit $tmp120 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s119);
        if ($tmp120.value) {
        {
            return ((panda$core$Int64) { 2 });
        }
        }
        panda$core$Bit $tmp122 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_t)->name, &$s121);
        if ($tmp122.value) {
        {
            return ((panda$core$Int64) { 4 });
        }
        }
        return ((panda$core$Int64) { 8 });
    }
    }
    org$pandalanguage$pandac$Type* $tmp123 = org$pandalanguage$pandac$Type$BuiltinBit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp125 = (($fn124) p_t->$class->vtable[4])(p_t, ((panda$core$Object*) $tmp123));
    if ($tmp125.value) {
    {
        return ((panda$core$Int64) { 1 });
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp128 = (($fn127) self->compiler->$class->vtable[14])(self->compiler, p_t);
    cl126 = $tmp128;
    panda$core$Bit $tmp131 = (($fn130) self->compiler->$class->vtable[9])(self->compiler, cl126);
    panda$core$Bit $tmp132 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp131);
    bool $tmp129 = $tmp132.value;
    if ($tmp129) goto $l133;
    panda$core$Bit $tmp135 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl126)->name, &$s134);
    $tmp129 = $tmp135.value;
    $l133:;
    panda$core$Bit $tmp136 = { $tmp129 };
    if ($tmp136.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result137 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp140 = (($fn139) self->compiler->$class->vtable[10])(self->compiler, cl126);
        ITable* $tmp141 = ((panda$collections$Iterable*) $tmp140)->$class->itable;
        while ($tmp141->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp141 = $tmp141->next;
        }
        $fn143 $tmp142 = $tmp141->methods[0];
        panda$collections$Iterator* $tmp144 = $tmp142(((panda$collections$Iterable*) $tmp140));
        f$Iter138 = $tmp144;
        $l145:;
        ITable* $tmp147 = f$Iter138->$class->itable;
        while ($tmp147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp147 = $tmp147->next;
        }
        $fn149 $tmp148 = $tmp147->methods[0];
        panda$core$Bit $tmp150 = $tmp148(f$Iter138);
        panda$core$Bit $tmp151 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp150);
        if (!$tmp151.value) goto $l146;
        {
            ITable* $tmp153 = f$Iter138->$class->itable;
            while ($tmp153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp153 = $tmp153->next;
            }
            $fn155 $tmp154 = $tmp153->methods[1];
            panda$core$Object* $tmp156 = $tmp154(f$Iter138);
            f152 = ((org$pandalanguage$pandac$FieldDecl*) $tmp156);
            panda$core$Bit $tmp158 = (($fn157) f152->annotations->$class->vtable[5])(f152->annotations);
            if ($tmp158.value) {
            {
                goto $l145;
            }
            }
            (($fn159) self->compiler->$class->vtable[7])(self->compiler, f152);
            panda$core$Int64 $tmp162 = (($fn161) self->$class->vtable[8])(self, f152->type);
            size160 = $tmp162;
            panda$core$Int64 $tmp164 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result137, size160);
            align163 = $tmp164;
            panda$core$Bit $tmp165 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align163, ((panda$core$Int64) { 0 }));
            if ($tmp165.value) {
            {
                panda$core$Int64 $tmp166 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size160, align163);
                panda$core$Int64 $tmp167 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result137, $tmp166);
                result137 = $tmp167;
            }
            }
            panda$core$Int64 $tmp168 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result137, size160);
            result137 = $tmp168;
        }
        goto $l145;
        $l146:;
    }
    panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp169.value) {
    {
        panda$core$Int64 $tmp170 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result137, ((panda$core$Int64) { 1 }));
        result137 = $tmp170;
    }
    }
    return result137;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $tmp172 = (($fn171) self->$class->vtable[8])(self, p_t);
    panda$core$Int64 $tmp173 = panda$core$Int64$min$panda$core$Int64$R$panda$core$Int64($tmp172, ((panda$core$Int64) { 8 }));
    return $tmp173;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl179;
    panda$core$Int64 result184;
    panda$collections$Iterator* f$Iter185;
    org$pandalanguage$pandac$FieldDecl* f199;
    panda$core$Int64 size205;
    panda$core$Int64 align208;
    panda$core$Bit $tmp175 = (($fn174) p_t->$class->vtable[8])(p_t);
    panda$core$Bit $tmp176 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp175);
    if ($tmp176.value) {
    {
        panda$core$Int64 $tmp178 = (($fn177) self->$class->vtable[8])(self, p_t);
        return $tmp178;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp181 = (($fn180) self->compiler->$class->vtable[14])(self->compiler, p_t);
    cl179 = $tmp181;
    panda$core$Bit $tmp183 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) cl179)->name, &$s182);
    if ($tmp183.value) {
    {
        return ((panda$core$Int64) { 8 });
    }
    }
    result184 = ((panda$core$Int64) { 0 });
    {
        panda$collections$ListView* $tmp187 = (($fn186) self->compiler->$class->vtable[10])(self->compiler, cl179);
        ITable* $tmp188 = ((panda$collections$Iterable*) $tmp187)->$class->itable;
        while ($tmp188->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp188 = $tmp188->next;
        }
        $fn190 $tmp189 = $tmp188->methods[0];
        panda$collections$Iterator* $tmp191 = $tmp189(((panda$collections$Iterable*) $tmp187));
        f$Iter185 = $tmp191;
        $l192:;
        ITable* $tmp194 = f$Iter185->$class->itable;
        while ($tmp194->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp194 = $tmp194->next;
        }
        $fn196 $tmp195 = $tmp194->methods[0];
        panda$core$Bit $tmp197 = $tmp195(f$Iter185);
        panda$core$Bit $tmp198 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp197);
        if (!$tmp198.value) goto $l193;
        {
            ITable* $tmp200 = f$Iter185->$class->itable;
            while ($tmp200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp200 = $tmp200->next;
            }
            $fn202 $tmp201 = $tmp200->methods[1];
            panda$core$Object* $tmp203 = $tmp201(f$Iter185);
            f199 = ((org$pandalanguage$pandac$FieldDecl*) $tmp203);
            (($fn204) self->compiler->$class->vtable[7])(self->compiler, f199);
            panda$core$Int64 $tmp207 = (($fn206) self->$class->vtable[8])(self, f199->type);
            size205 = $tmp207;
            panda$core$Int64 $tmp209 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result184, size205);
            align208 = $tmp209;
            panda$core$Bit $tmp210 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align208, ((panda$core$Int64) { 0 }));
            if ($tmp210.value) {
            {
                panda$core$Int64 $tmp211 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size205, align208);
                panda$core$Int64 $tmp212 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result184, $tmp211);
                result184 = $tmp212;
            }
            }
            panda$core$Int64 $tmp213 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result184, size205);
            result184 = $tmp213;
        }
        goto $l192;
        $l193:;
    }
    panda$core$Bit $tmp216 = (($fn215) self->compiler->$class->vtable[9])(self->compiler, cl179);
    bool $tmp214 = $tmp216.value;
    if (!$tmp214) goto $l217;
    panda$core$Bit $tmp218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    $tmp214 = $tmp218.value;
    $l217:;
    panda$core$Bit $tmp219 = { $tmp214 };
    if ($tmp219.value) {
    {
        panda$core$Int64 $tmp220 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result184, ((panda$core$Int64) { 1 }));
        result184 = $tmp220;
    }
    }
    return result184;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl221;
    panda$core$Int64 result224;
    panda$collections$Iterator* f$Iter228;
    org$pandalanguage$pandac$FieldDecl* f242;
    panda$core$Int64 size248;
    panda$core$Int64 align251;
    org$pandalanguage$pandac$ClassDecl* $tmp223 = (($fn222) self->compiler->$class->vtable[14])(self->compiler, p_t);
    cl221 = $tmp223;
    org$pandalanguage$pandac$Type* $tmp225 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$Int64 $tmp227 = (($fn226) self->$class->vtable[10])(self, $tmp225);
    result224 = $tmp227;
    {
        panda$collections$ListView* $tmp230 = (($fn229) self->compiler->$class->vtable[10])(self->compiler, cl221);
        ITable* $tmp231 = ((panda$collections$Iterable*) $tmp230)->$class->itable;
        while ($tmp231->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp231 = $tmp231->next;
        }
        $fn233 $tmp232 = $tmp231->methods[0];
        panda$collections$Iterator* $tmp234 = $tmp232(((panda$collections$Iterable*) $tmp230));
        f$Iter228 = $tmp234;
        $l235:;
        ITable* $tmp237 = f$Iter228->$class->itable;
        while ($tmp237->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp237 = $tmp237->next;
        }
        $fn239 $tmp238 = $tmp237->methods[0];
        panda$core$Bit $tmp240 = $tmp238(f$Iter228);
        panda$core$Bit $tmp241 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp240);
        if (!$tmp241.value) goto $l236;
        {
            ITable* $tmp243 = f$Iter228->$class->itable;
            while ($tmp243->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp243 = $tmp243->next;
            }
            $fn245 $tmp244 = $tmp243->methods[1];
            panda$core$Object* $tmp246 = $tmp244(f$Iter228);
            f242 = ((org$pandalanguage$pandac$FieldDecl*) $tmp246);
            (($fn247) self->compiler->$class->vtable[7])(self->compiler, f242);
            panda$core$Int64 $tmp250 = (($fn249) self->$class->vtable[8])(self, f242->type);
            size248 = $tmp250;
            panda$core$Int64 $tmp252 = panda$core$Int64$$REM$panda$core$Int64$R$panda$core$Int64(result224, size248);
            align251 = $tmp252;
            panda$core$Bit $tmp253 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(align251, ((panda$core$Int64) { 0 }));
            if ($tmp253.value) {
            {
                panda$core$Int64 $tmp254 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(size248, align251);
                panda$core$Int64 $tmp255 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result224, $tmp254);
                result224 = $tmp255;
            }
            }
            panda$core$Int64 $tmp256 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result224, size248);
            result224 = $tmp256;
        }
        goto $l235;
        $l236:;
    }
    panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp257.value) {
    {
        panda$core$Int64 $tmp258 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(result224, ((panda$core$Int64) { 1 }));
        result224 = $tmp258;
    }
    }
    return result224;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    org$pandalanguage$pandac$ClassDecl* cl262;
    panda$core$MutableString* code265;
    panda$core$String* separator275;
    panda$collections$Iterator* f$Iter277;
    org$pandalanguage$pandac$FieldDecl* f291;
    panda$core$Bit $tmp260 = (($fn259) self->writtenTypes->$class->vtable[7])(self->writtenTypes, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp260.value) {
    {
        return;
    }
    }
    (($fn261) self->writtenTypes->$class->vtable[2])(self->writtenTypes, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name)));
    org$pandalanguage$pandac$ClassDecl* $tmp264 = (($fn263) self->compiler->$class->vtable[14])(self->compiler, p_t);
    cl262 = $tmp264;
    panda$core$MutableString* $tmp266 = (panda$core$MutableString*) malloc(40);
    $tmp266->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp266->refCount.value = 1;
    panda$core$String* $tmp270 = (($fn269) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp271 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s268, $tmp270);
    panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp271, &$s272);
    panda$core$MutableString$init$panda$core$String($tmp266, $tmp273);
    code265 = $tmp266;
    (($fn274) self->compiler->currentClass->$class->vtable[2])(self->compiler->currentClass, ((panda$core$Object*) cl262));
    separator275 = &$s276;
    {
        panda$collections$ListView* $tmp279 = (($fn278) self->compiler->$class->vtable[10])(self->compiler, cl262);
        ITable* $tmp280 = ((panda$collections$Iterable*) $tmp279)->$class->itable;
        while ($tmp280->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp280 = $tmp280->next;
        }
        $fn282 $tmp281 = $tmp280->methods[0];
        panda$collections$Iterator* $tmp283 = $tmp281(((panda$collections$Iterable*) $tmp279));
        f$Iter277 = $tmp283;
        $l284:;
        ITable* $tmp286 = f$Iter277->$class->itable;
        while ($tmp286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp286 = $tmp286->next;
        }
        $fn288 $tmp287 = $tmp286->methods[0];
        panda$core$Bit $tmp289 = $tmp287(f$Iter277);
        panda$core$Bit $tmp290 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp289);
        if (!$tmp290.value) goto $l285;
        {
            ITable* $tmp292 = f$Iter277->$class->itable;
            while ($tmp292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp292 = $tmp292->next;
            }
            $fn294 $tmp293 = $tmp292->methods[1];
            panda$core$Object* $tmp295 = $tmp293(f$Iter277);
            f291 = ((org$pandalanguage$pandac$FieldDecl*) $tmp295);
            (($fn296) self->compiler->$class->vtable[7])(self->compiler, f291);
            panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s297, separator275);
            panda$core$String* $tmp300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s299);
            panda$core$String* $tmp302 = (($fn301) self->$class->vtable[15])(self, f291->type);
            panda$core$String* $tmp303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp300, $tmp302);
            panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, &$s304);
            (($fn306) code265->$class->vtable[3])(code265, $tmp305);
            separator275 = &$s307;
        }
        goto $l284;
        $l285:;
    }
    org$pandalanguage$pandac$Type* $tmp308 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp310 = (($fn309) p_t->$class->vtable[4])(p_t, ((panda$core$Object*) $tmp308));
    if ($tmp310.value) {
    {
        (($fn312) code265->$class->vtable[3])(code265, &$s311);
    }
    }
    (($fn314) code265->$class->vtable[3])(code265, &$s313);
    (($fn315) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code265));
    panda$core$Bit $tmp317 = (($fn316) self->compiler->$class->vtable[9])(self->compiler, cl262);
    if ($tmp317.value) {
    {
        (($fn318) self->$class->vtable[27])(self, cl262);
    }
    }
    (($fn319) self->compiler->currentClass->$class->vtable[3])(self->compiler->currentClass);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$MutableString* code323;
    org$pandalanguage$pandac$ClassDecl* object332;
    panda$core$String* separator336;
    panda$collections$Iterator* f$Iter338;
    org$pandalanguage$pandac$FieldDecl* f352;
    panda$core$Bit $tmp321 = (($fn320) self->writtenWrappers->$class->vtable[7])(self->writtenWrappers, ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name));
    if ($tmp321.value) {
    {
        return;
    }
    }
    (($fn322) self->writtenWrappers->$class->vtable[2])(self->writtenWrappers, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_t)->name)));
    panda$core$MutableString* $tmp324 = (panda$core$MutableString*) malloc(40);
    $tmp324->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp324->refCount.value = 1;
    panda$core$String* $tmp328 = (($fn327) self->$class->vtable[15])(self, p_t);
    panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s326, $tmp328);
    panda$core$String* $tmp331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp329, &$s330);
    panda$core$MutableString$init$panda$core$String($tmp324, $tmp331);
    code323 = $tmp324;
    org$pandalanguage$pandac$Type* $tmp333 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp335 = (($fn334) self->compiler->$class->vtable[14])(self->compiler, $tmp333);
    object332 = $tmp335;
    separator336 = &$s337;
    {
        panda$collections$ListView* $tmp340 = (($fn339) self->compiler->$class->vtable[10])(self->compiler, object332);
        ITable* $tmp341 = ((panda$collections$Iterable*) $tmp340)->$class->itable;
        while ($tmp341->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp341 = $tmp341->next;
        }
        $fn343 $tmp342 = $tmp341->methods[0];
        panda$collections$Iterator* $tmp344 = $tmp342(((panda$collections$Iterable*) $tmp340));
        f$Iter338 = $tmp344;
        $l345:;
        ITable* $tmp347 = f$Iter338->$class->itable;
        while ($tmp347->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp347 = $tmp347->next;
        }
        $fn349 $tmp348 = $tmp347->methods[0];
        panda$core$Bit $tmp350 = $tmp348(f$Iter338);
        panda$core$Bit $tmp351 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp350);
        if (!$tmp351.value) goto $l346;
        {
            ITable* $tmp353 = f$Iter338->$class->itable;
            while ($tmp353->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp353 = $tmp353->next;
            }
            $fn355 $tmp354 = $tmp353->methods[1];
            panda$core$Object* $tmp356 = $tmp354(f$Iter338);
            f352 = ((org$pandalanguage$pandac$FieldDecl*) $tmp356);
            (($fn357) self->compiler->$class->vtable[7])(self->compiler, f352);
            panda$core$String* $tmp359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s358, separator336);
            panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s360);
            panda$core$String* $tmp363 = (($fn362) self->$class->vtable[15])(self, f352->type);
            panda$core$String* $tmp364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, $tmp363);
            panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp364, &$s365);
            (($fn367) code323->$class->vtable[3])(code323, $tmp366);
            separator336 = &$s368;
        }
        goto $l345;
        $l346:;
    }
    panda$core$String* $tmp371 = (($fn370) self->$class->vtable[15])(self, p_t);
    panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s369, $tmp371);
    panda$core$String* $tmp374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp372, &$s373);
    (($fn375) code323->$class->vtable[3])(code323, $tmp374);
    (($fn377) code323->$class->vtable[3])(code323, &$s376);
    (($fn378) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code323));
    panda$core$String* $tmp381 = (($fn380) self->$class->vtable[15])(self, p_t);
    panda$core$String* $tmp382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s379, $tmp381);
    panda$core$String* $tmp384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp382, &$s383);
    panda$core$String* $tmp386 = (($fn385) self->$class->vtable[15])(self, p_t);
    panda$core$String* $tmp387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp384, $tmp386);
    panda$core$String* $tmp389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp387, &$s388);
    (($fn390) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp389);
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp393 = (($fn392) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s391, $tmp393);
    return $tmp394;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$11067395;
    panda$core$String* name414;
    org$pandalanguage$pandac$ClassDecl* cl421;
    org$pandalanguage$pandac$ClassDecl* cl430;
    org$pandalanguage$pandac$ClassDecl* cl452;
    panda$core$String* name457;
    org$pandalanguage$pandac$ClassDecl* cl464;
    panda$core$MutableString* result486;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp498;
    {
        $match$11067395 = p_t->typeKind;
        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11067395, ((panda$core$Int64) { 14 }));
        if ($tmp396.value) {
        {
            return &$s397;
        }
        }
        else {
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11067395, ((panda$core$Int64) { 12 }));
        bool $tmp398 = $tmp399.value;
        if ($tmp398) goto $l400;
        panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11067395, ((panda$core$Int64) { 13 }));
        $tmp398 = $tmp401.value;
        $l400:;
        panda$core$Bit $tmp402 = { $tmp398 };
        if ($tmp402.value) {
        {
            panda$core$Int64 $tmp405 = (($fn404) self->$class->vtable[10])(self, p_t);
            panda$core$Int64 $tmp406 = panda$core$Int64$$MUL$panda$core$Int64$R$panda$core$Int64($tmp405, ((panda$core$Int64) { 8 }));
            panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s403, ((panda$core$Object*) wrap_panda$core$Int64($tmp406)));
            panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp407, &$s408);
            return $tmp409;
        }
        }
        else {
        panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11067395, ((panda$core$Int64) { 19 }));
        if ($tmp410.value) {
        {
            return &$s411;
        }
        }
        else {
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11067395, ((panda$core$Int64) { 10 }));
        if ($tmp412.value) {
        {
            (($fn413) self->$class->vtable[12])(self, p_t);
            panda$core$String* $tmp417 = (($fn416) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s415, $tmp417);
            panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, &$s419);
            name414 = $tmp420;
            org$pandalanguage$pandac$ClassDecl* $tmp423 = (($fn422) self->compiler->$class->vtable[14])(self->compiler, p_t);
            cl421 = $tmp423;
            panda$core$Bit $tmp425 = (($fn424) self->compiler->$class->vtable[9])(self->compiler, cl421);
            panda$core$Bit $tmp426 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp425);
            if ($tmp426.value) {
            {
                panda$core$String* $tmp428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name414, &$s427);
                return $tmp428;
            }
            }
            return name414;
        }
        }
        else {
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11067395, ((panda$core$Int64) { 11 }));
        if ($tmp429.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp432 = (($fn431) self->compiler->$class->vtable[14])(self->compiler, p_t);
            cl430 = $tmp432;
            panda$core$Bit $tmp434 = (($fn433) self->compiler->$class->vtable[9])(self->compiler, cl430);
            if ($tmp434.value) {
            {
                panda$core$String* $tmp436 = (($fn435) self->$class->vtable[19])(self, p_t);
                return $tmp436;
            }
            }
            panda$core$Object* $tmp438 = (($fn437) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp440 = (($fn439) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp438));
            return $tmp440;
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11067395, ((panda$core$Int64) { 21 }));
        if ($tmp441.value) {
        {
            panda$core$Object* $tmp443 = (($fn442) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$Bit $tmp445 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$Type*) $tmp443))->name, &$s444);
            if ($tmp445.value) {
            {
                panda$core$Object* $tmp447 = (($fn446) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 1 }));
                panda$core$String* $tmp449 = (($fn448) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp447));
                panda$core$String* $tmp451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp449, &$s450);
                return $tmp451;
            }
            }
            org$pandalanguage$pandac$ClassDecl* $tmp454 = (($fn453) self->compiler->$class->vtable[14])(self->compiler, p_t);
            cl452 = $tmp454;
            panda$core$Bit $tmp456 = (($fn455) cl452->$class->vtable[5])(cl452);
            if ($tmp456.value) {
            {
                panda$core$String* $tmp460 = (($fn459) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
                panda$core$String* $tmp461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s458, $tmp460);
                panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp461, &$s462);
                name457 = $tmp463;
                org$pandalanguage$pandac$ClassDecl* $tmp466 = (($fn465) self->compiler->$class->vtable[14])(self->compiler, p_t);
                cl464 = $tmp466;
                panda$core$Bit $tmp468 = (($fn467) self->compiler->$class->vtable[9])(self->compiler, cl464);
                panda$core$Bit $tmp469 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp468);
                if ($tmp469.value) {
                {
                    panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(name457, &$s470);
                    return $tmp471;
                }
                }
                return name457;
            }
            }
            panda$core$Object* $tmp473 = (($fn472) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp475 = (($fn474) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp473));
            return $tmp475;
        }
        }
        else {
        panda$core$Bit $tmp476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11067395, ((panda$core$Int64) { 22 }));
        if ($tmp476.value) {
        {
            panda$core$Object* $tmp478 = (($fn477) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp480 = (($fn479) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp478));
            return $tmp480;
        }
        }
        else {
        panda$core$Bit $tmp482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11067395, ((panda$core$Int64) { 24 }));
        bool $tmp481 = $tmp482.value;
        if ($tmp481) goto $l483;
        panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11067395, ((panda$core$Int64) { 25 }));
        $tmp481 = $tmp484.value;
        $l483:;
        panda$core$Bit $tmp485 = { $tmp481 };
        if ($tmp485.value) {
        {
            panda$core$MutableString* $tmp487 = (panda$core$MutableString*) malloc(40);
            $tmp487->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp487->refCount.value = 1;
            panda$core$Int64 $tmp490 = (($fn489) p_t->subtypes->$class->vtable[3])(p_t->subtypes);
            panda$core$Int64 $tmp491 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp490, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp493 = (($fn492) p_t->subtypes->$class->vtable[2])(p_t->subtypes, $tmp491);
            panda$core$String* $tmp495 = (($fn494) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp493));
            panda$core$MutableString$init$panda$core$String($tmp487, $tmp495);
            result486 = $tmp487;
            (($fn497) result486->$class->vtable[3])(result486, &$s496);
            panda$core$Int64 $tmp500 = (($fn499) p_t->subtypes->$class->vtable[3])(p_t->subtypes);
            panda$core$Int64 $tmp501 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp500, ((panda$core$Int64) { 1 }));
            panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp498, ((panda$core$Int64) { 0 }), $tmp501, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp503 = $tmp498.start.value;
            panda$core$Int64 i502 = { $tmp503 };
            int64_t $tmp505 = $tmp498.end.value;
            int64_t $tmp506 = $tmp498.step.value;
            bool $tmp507 = $tmp498.inclusive.value;
            bool $tmp514 = $tmp506 > 0;
            if ($tmp514) goto $l512; else goto $l513;
            $l512:;
            if ($tmp507) goto $l515; else goto $l516;
            $l515:;
            if ($tmp503 <= $tmp505) goto $l508; else goto $l510;
            $l516:;
            if ($tmp503 < $tmp505) goto $l508; else goto $l510;
            $l513:;
            if ($tmp507) goto $l517; else goto $l518;
            $l517:;
            if ($tmp503 >= $tmp505) goto $l508; else goto $l510;
            $l518:;
            if ($tmp503 > $tmp505) goto $l508; else goto $l510;
            $l508:;
            {
                panda$core$Bit $tmp520 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i502, ((panda$core$Int64) { 0 }));
                if ($tmp520.value) {
                {
                    (($fn522) result486->$class->vtable[3])(result486, &$s521);
                }
                }
                panda$core$Object* $tmp524 = (($fn523) p_t->subtypes->$class->vtable[2])(p_t->subtypes, i502);
                panda$core$String* $tmp526 = (($fn525) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp524));
                (($fn527) result486->$class->vtable[3])(result486, $tmp526);
            }
            $l511:;
            if ($tmp514) goto $l529; else goto $l530;
            $l529:;
            int64_t $tmp531 = $tmp505 - i502.value;
            if ($tmp507) goto $l532; else goto $l533;
            $l532:;
            if ($tmp531 >= $tmp506) goto $l528; else goto $l510;
            $l533:;
            if ($tmp531 > $tmp506) goto $l528; else goto $l510;
            $l530:;
            int64_t $tmp535 = i502.value - $tmp505;
            if ($tmp507) goto $l536; else goto $l537;
            $l536:;
            if ($tmp535 >= -$tmp506) goto $l528; else goto $l510;
            $l537:;
            if ($tmp535 > -$tmp506) goto $l528; else goto $l510;
            $l528:;
            i502.value += $tmp506;
            goto $l508;
            $l510:;
            (($fn540) result486->$class->vtable[3])(result486, &$s539);
            panda$core$String* $tmp542 = (($fn541) result486->$class->vtable[0])(result486);
            return $tmp542;
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
    panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp543.value) {
    {
        panda$core$Object* $tmp545 = (($fn544) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp547 = (($fn546) self->$class->vtable[16])(self, ((org$pandalanguage$pandac$Type*) $tmp545));
        return $tmp547;
    }
    }
    (($fn548) self->$class->vtable[13])(self, p_t);
    panda$core$String* $tmp551 = (($fn550) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s549, $tmp551);
    panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp552, &$s553);
    return $tmp554;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp556 = (($fn555) self->$class->vtable[16])(self, p_t);
    panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, &$s557);
    return $tmp558;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType559;
    panda$core$MutableString* result562;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp588;
    org$pandalanguage$pandac$Type* $tmp561 = (($fn560) self->compiler->$class->vtable[46])(self->compiler, p_m);
    inheritedType559 = $tmp561;
    panda$core$MutableString* $tmp563 = (panda$core$MutableString*) malloc(40);
    $tmp563->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp563->refCount.value = 1;
    panda$core$MutableString$init($tmp563);
    result562 = $tmp563;
    panda$core$Int64 $tmp566 = (($fn565) inheritedType559->subtypes->$class->vtable[3])(inheritedType559->subtypes);
    panda$core$Int64 $tmp567 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp566, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp569 = (($fn568) inheritedType559->subtypes->$class->vtable[2])(inheritedType559->subtypes, $tmp567);
    panda$core$String* $tmp571 = (($fn570) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp569));
    (($fn572) result562->$class->vtable[3])(result562, $tmp571);
    (($fn574) result562->$class->vtable[3])(result562, &$s573);
    panda$core$String* $tmp577 = (($fn576) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s575, $tmp577);
    panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s579);
    (($fn581) result562->$class->vtable[3])(result562, $tmp580);
    panda$core$Bit $tmp583 = (($fn582) self->compiler->$class->vtable[9])(self->compiler, p_m->owner);
    if ($tmp583.value) {
    {
        (($fn585) result562->$class->vtable[3])(result562, &$s584);
    }
    }
    (($fn587) result562->$class->vtable[3])(result562, &$s586);
    panda$core$Int64 $tmp590 = (($fn589) inheritedType559->subtypes->$class->vtable[3])(inheritedType559->subtypes);
    panda$core$Int64 $tmp591 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp590, ((panda$core$Int64) { 1 }));
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp588, ((panda$core$Int64) { 0 }), $tmp591, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp593 = $tmp588.start.value;
    panda$core$Int64 i592 = { $tmp593 };
    int64_t $tmp595 = $tmp588.end.value;
    int64_t $tmp596 = $tmp588.step.value;
    bool $tmp597 = $tmp588.inclusive.value;
    bool $tmp604 = $tmp596 > 0;
    if ($tmp604) goto $l602; else goto $l603;
    $l602:;
    if ($tmp597) goto $l605; else goto $l606;
    $l605:;
    if ($tmp593 <= $tmp595) goto $l598; else goto $l600;
    $l606:;
    if ($tmp593 < $tmp595) goto $l598; else goto $l600;
    $l603:;
    if ($tmp597) goto $l607; else goto $l608;
    $l607:;
    if ($tmp593 >= $tmp595) goto $l598; else goto $l600;
    $l608:;
    if ($tmp593 > $tmp595) goto $l598; else goto $l600;
    $l598:;
    {
        (($fn611) result562->$class->vtable[3])(result562, &$s610);
        panda$core$Object* $tmp613 = (($fn612) inheritedType559->subtypes->$class->vtable[2])(inheritedType559->subtypes, i592);
        panda$core$String* $tmp615 = (($fn614) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp613));
        (($fn616) result562->$class->vtable[3])(result562, $tmp615);
    }
    $l601:;
    if ($tmp604) goto $l618; else goto $l619;
    $l618:;
    int64_t $tmp620 = $tmp595 - i592.value;
    if ($tmp597) goto $l621; else goto $l622;
    $l621:;
    if ($tmp620 >= $tmp596) goto $l617; else goto $l600;
    $l622:;
    if ($tmp620 > $tmp596) goto $l617; else goto $l600;
    $l619:;
    int64_t $tmp624 = i592.value - $tmp595;
    if ($tmp597) goto $l625; else goto $l626;
    $l625:;
    if ($tmp624 >= -$tmp596) goto $l617; else goto $l600;
    $l626:;
    if ($tmp624 > -$tmp596) goto $l617; else goto $l600;
    $l617:;
    i592.value += $tmp596;
    goto $l598;
    $l600:;
    (($fn629) result562->$class->vtable[3])(result562, &$s628);
    panda$core$String* $tmp631 = (($fn630) result562->$class->vtable[0])(result562);
    return $tmp631;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Object* $tmp633 = (($fn632) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
    (($fn634) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$Type*) $tmp633));
    panda$core$Object* $tmp637 = (($fn636) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp639 = (($fn638) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp637));
    panda$core$String* $tmp640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s635, $tmp639);
    panda$core$String* $tmp642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp640, &$s641);
    return $tmp642;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces643;
    panda$core$String* previous648;
    panda$collections$Iterator* intfType$Iter650;
    org$pandalanguage$pandac$Type* intfType662;
    org$pandalanguage$pandac$ClassDecl* intf667;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC670;
    panda$collections$ListView* methods673;
    panda$core$String* name676;
    panda$core$String* t688;
    panda$core$MutableString* result703;
    panda$core$String* separator745;
    panda$collections$Iterator* m$Iter747;
    org$pandalanguage$pandac$MethodDecl* m759;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry770;
    org$pandalanguage$pandac$Type* $tmp645 = (($fn644) p_cl->$class->vtable[3])(p_cl);
    panda$collections$Set* $tmp647 = (($fn646) self->compiler->$class->vtable[15])(self->compiler, $tmp645);
    interfaces643 = $tmp647;
    previous648 = &$s649;
    {
        ITable* $tmp651 = ((panda$collections$Iterable*) interfaces643)->$class->itable;
        while ($tmp651->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp651 = $tmp651->next;
        }
        $fn653 $tmp652 = $tmp651->methods[0];
        panda$collections$Iterator* $tmp654 = $tmp652(((panda$collections$Iterable*) interfaces643));
        intfType$Iter650 = $tmp654;
        $l655:;
        ITable* $tmp657 = intfType$Iter650->$class->itable;
        while ($tmp657->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp657 = $tmp657->next;
        }
        $fn659 $tmp658 = $tmp657->methods[0];
        panda$core$Bit $tmp660 = $tmp658(intfType$Iter650);
        panda$core$Bit $tmp661 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp660);
        if (!$tmp661.value) goto $l656;
        {
            ITable* $tmp663 = intfType$Iter650->$class->itable;
            while ($tmp663->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp663 = $tmp663->next;
            }
            $fn665 $tmp664 = $tmp663->methods[1];
            panda$core$Object* $tmp666 = $tmp664(intfType$Iter650);
            intfType662 = ((org$pandalanguage$pandac$Type*) $tmp666);
            org$pandalanguage$pandac$ClassDecl* $tmp669 = (($fn668) self->compiler->$class->vtable[14])(self->compiler, intfType662);
            intf667 = $tmp669;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp672 = (($fn671) self->$class->vtable[26])(self, intf667);
            intfCC670 = $tmp672;
            panda$collections$ListView* $tmp675 = (($fn674) self->compiler->$class->vtable[19])(self->compiler, p_cl, intfType662);
            methods673 = $tmp675;
            panda$core$String* $tmp679 = (($fn678) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s677, $tmp679);
            panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, &$s681);
            panda$core$String* $tmp684 = (($fn683) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) intf667)->name);
            panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp682, $tmp684);
            panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp685, &$s686);
            name676 = $tmp687;
            org$pandalanguage$pandac$Type* $tmp690 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp692 = (($fn691) self->$class->vtable[15])(self, $tmp690);
            panda$core$String* $tmp693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s689, $tmp692);
            panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp693, &$s694);
            ITable* $tmp696 = ((panda$collections$CollectionView*) methods673)->$class->itable;
            while ($tmp696->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp696 = $tmp696->next;
            }
            $fn698 $tmp697 = $tmp696->methods[0];
            panda$core$Int64 $tmp699 = $tmp697(((panda$collections$CollectionView*) methods673));
            panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp695, ((panda$core$Object*) wrap_panda$core$Int64($tmp699)));
            panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s701);
            t688 = $tmp702;
            panda$core$MutableString* $tmp704 = (panda$core$MutableString*) malloc(40);
            $tmp704->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp704->refCount.value = 1;
            panda$core$String* $tmp707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s706, name676);
            panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, &$s708);
            panda$core$String* $tmp710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp709, t688);
            panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp710, &$s711);
            org$pandalanguage$pandac$Type* $tmp713 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp715 = (($fn714) self->$class->vtable[15])(self, $tmp713);
            panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, $tmp715);
            panda$core$String* $tmp718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp716, &$s717);
            panda$core$String* $tmp720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s719, intfCC670->type);
            panda$core$String* $tmp722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp720, &$s721);
            panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp722, intfCC670->name);
            panda$core$String* $tmp725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp723, &$s724);
            org$pandalanguage$pandac$Type* $tmp726 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp728 = (($fn727) self->$class->vtable[15])(self, $tmp726);
            panda$core$String* $tmp729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp725, $tmp728);
            panda$core$String* $tmp731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, &$s730);
            panda$core$String* $tmp732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp718, $tmp731);
            panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s733, previous648);
            panda$core$String* $tmp736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp734, &$s735);
            ITable* $tmp737 = ((panda$collections$CollectionView*) methods673)->$class->itable;
            while ($tmp737->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp737 = $tmp737->next;
            }
            $fn739 $tmp738 = $tmp737->methods[0];
            panda$core$Int64 $tmp740 = $tmp738(((panda$collections$CollectionView*) methods673));
            panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp736, ((panda$core$Object*) wrap_panda$core$Int64($tmp740)));
            panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp741, &$s742);
            panda$core$String* $tmp744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp732, $tmp743);
            panda$core$MutableString$init$panda$core$String($tmp704, $tmp744);
            result703 = $tmp704;
            separator745 = &$s746;
            {
                ITable* $tmp748 = ((panda$collections$Iterable*) methods673)->$class->itable;
                while ($tmp748->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp748 = $tmp748->next;
                }
                $fn750 $tmp749 = $tmp748->methods[0];
                panda$collections$Iterator* $tmp751 = $tmp749(((panda$collections$Iterable*) methods673));
                m$Iter747 = $tmp751;
                $l752:;
                ITable* $tmp754 = m$Iter747->$class->itable;
                while ($tmp754->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp754 = $tmp754->next;
                }
                $fn756 $tmp755 = $tmp754->methods[0];
                panda$core$Bit $tmp757 = $tmp755(m$Iter747);
                panda$core$Bit $tmp758 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp757);
                if (!$tmp758.value) goto $l753;
                {
                    ITable* $tmp760 = m$Iter747->$class->itable;
                    while ($tmp760->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp760 = $tmp760->next;
                    }
                    $fn762 $tmp761 = $tmp760->methods[1];
                    panda$core$Object* $tmp763 = $tmp761(m$Iter747);
                    m759 = ((org$pandalanguage$pandac$MethodDecl*) $tmp763);
                    (($fn764) result703->$class->vtable[3])(result703, separator745);
                    separator745 = &$s765;
                    panda$core$Bit $tmp767 = (($fn766) m759->annotations->$class->vtable[10])(m759->annotations);
                    if ($tmp767.value) {
                    {
                        (($fn769) result703->$class->vtable[3])(result703, &$s768);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp772 = (($fn771) self->$class->vtable[25])(self, m759);
                        entry770 = $tmp772;
                        panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s773, ((panda$core$String*) entry770->second));
                        panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp774, &$s775);
                        panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp776, ((panda$core$String*) entry770->first));
                        panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp777, &$s778);
                        (($fn780) result703->$class->vtable[3])(result703, $tmp779);
                    }
                    }
                }
                goto $l752;
                $l753:;
            }
            (($fn782) result703->$class->vtable[3])(result703, &$s781);
            (($fn783) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result703));
            panda$core$String* $tmp785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s784, t688);
            panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp785, &$s786);
            panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, name676);
            panda$core$String* $tmp790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp788, &$s789);
            previous648 = $tmp790;
        }
        goto $l655;
        $l656:;
    }
    return previous648;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer791;
    panda$io$IndentedOutputStream* out794;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found797;
    panda$core$Int64 oldVarCount800;
    org$pandalanguage$pandac$Type* effectiveReturnType801;
    panda$core$String* resultName807;
    panda$core$MutableString* resultType812;
    panda$core$String* self_t831;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp842;
    panda$core$String* pType862;
    panda$collections$Array* casts893;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp896;
    panda$core$String* p916;
    panda$core$String* returnValue942;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp976;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result1038;
    panda$io$MemoryOutputStream* $tmp792 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp792->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp792->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp792);
    outBuffer791 = $tmp792;
    panda$io$IndentedOutputStream* $tmp795 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp795->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp795->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp795, ((panda$io$OutputStream*) outBuffer791));
    out794 = $tmp795;
    panda$core$Object* $tmp799 = (($fn798) self->methodShims->$class->vtable[3])(self->methodShims, ((panda$core$Object*) p_raw));
    found797 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp799);
    if (((panda$core$Bit) { found797 != NULL }).value) {
    {
        return found797;
    }
    }
    oldVarCount800 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp803 = (($fn802) p_effective->subtypes->$class->vtable[3])(p_effective->subtypes);
    panda$core$Int64 $tmp804 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp803, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp806 = (($fn805) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, $tmp804);
    effectiveReturnType801 = ((org$pandalanguage$pandac$Type*) $tmp806);
    panda$core$String* $tmp809 = (($fn808) self->$class->vtable[30])(self, p_raw);
    panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp809, &$s810);
    resultName807 = $tmp811;
    panda$core$MutableString* $tmp813 = (panda$core$MutableString*) malloc(40);
    $tmp813->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp813->refCount.value = 1;
    panda$core$String* $tmp816 = (($fn815) self->$class->vtable[15])(self, effectiveReturnType801);
    panda$core$MutableString$init$panda$core$String($tmp813, $tmp816);
    resultType812 = $tmp813;
    (($fn818) ((panda$io$OutputStream*) out794)->$class->vtable[16])(((panda$io$OutputStream*) out794), &$s817);
    panda$core$Bit $tmp820 = (($fn819) p_raw->owner->$class->vtable[5])(p_raw->owner);
    if ($tmp820.value) {
    {
        (($fn822) ((panda$io$OutputStream*) out794)->$class->vtable[16])(((panda$io$OutputStream*) out794), &$s821);
    }
    }
    panda$core$String* $tmp824 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s823, ((panda$core$Object*) resultType812));
    panda$core$String* $tmp826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp824, &$s825);
    panda$core$String* $tmp827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp826, resultName807);
    panda$core$String* $tmp829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp827, &$s828);
    (($fn830) ((panda$io$OutputStream*) out794)->$class->vtable[16])(((panda$io$OutputStream*) out794), $tmp829);
    panda$core$String* $tmp833 = (($fn832) self->$class->vtable[86])(self, p_raw);
    self_t831 = $tmp833;
    panda$core$String* $tmp835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s834, self_t831);
    panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp835, &$s836);
    (($fn838) ((panda$io$OutputStream*) out794)->$class->vtable[16])(((panda$io$OutputStream*) out794), $tmp837);
    (($fn840) resultType812->$class->vtable[3])(resultType812, &$s839);
    (($fn841) resultType812->$class->vtable[3])(resultType812, self_t831);
    panda$core$Int64 $tmp843 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp842, ((panda$core$Int64) { 0 }), $tmp843, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp845 = $tmp842.start.value;
    panda$core$Int64 i844 = { $tmp845 };
    int64_t $tmp847 = $tmp842.end.value;
    int64_t $tmp848 = $tmp842.step.value;
    bool $tmp849 = $tmp842.inclusive.value;
    bool $tmp856 = $tmp848 > 0;
    if ($tmp856) goto $l854; else goto $l855;
    $l854:;
    if ($tmp849) goto $l857; else goto $l858;
    $l857:;
    if ($tmp845 <= $tmp847) goto $l850; else goto $l852;
    $l858:;
    if ($tmp845 < $tmp847) goto $l850; else goto $l852;
    $l855:;
    if ($tmp849) goto $l859; else goto $l860;
    $l859:;
    if ($tmp845 >= $tmp847) goto $l850; else goto $l852;
    $l860:;
    if ($tmp845 > $tmp847) goto $l850; else goto $l852;
    $l850:;
    {
        panda$core$Object* $tmp864 = (($fn863) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i844);
        panda$core$String* $tmp866 = (($fn865) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp864));
        pType862 = $tmp866;
        (($fn868) resultType812->$class->vtable[3])(resultType812, &$s867);
        (($fn869) resultType812->$class->vtable[3])(resultType812, pType862);
        panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s870, pType862);
        panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp871, &$s872);
        panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp873, ((panda$core$Object*) wrap_panda$core$Int64(i844)));
        panda$core$String* $tmp876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp874, &$s875);
        (($fn877) ((panda$io$OutputStream*) out794)->$class->vtable[16])(((panda$io$OutputStream*) out794), $tmp876);
    }
    $l853:;
    if ($tmp856) goto $l879; else goto $l880;
    $l879:;
    int64_t $tmp881 = $tmp847 - i844.value;
    if ($tmp849) goto $l882; else goto $l883;
    $l882:;
    if ($tmp881 >= $tmp848) goto $l878; else goto $l852;
    $l883:;
    if ($tmp881 > $tmp848) goto $l878; else goto $l852;
    $l880:;
    int64_t $tmp885 = i844.value - $tmp847;
    if ($tmp849) goto $l886; else goto $l887;
    $l886:;
    if ($tmp885 >= -$tmp848) goto $l878; else goto $l852;
    $l887:;
    if ($tmp885 > -$tmp848) goto $l878; else goto $l852;
    $l878:;
    i844.value += $tmp848;
    goto $l850;
    $l852:;
    (($fn890) ((panda$io$OutputStream*) out794)->$class->vtable[19])(((panda$io$OutputStream*) out794), &$s889);
    (($fn892) resultType812->$class->vtable[3])(resultType812, &$s891);
    panda$collections$Array* $tmp894 = (panda$collections$Array*) malloc(40);
    $tmp894->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp894->refCount.value = 1;
    panda$collections$Array$init($tmp894);
    casts893 = $tmp894;
    panda$core$Int64 $tmp897 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp896, ((panda$core$Int64) { 0 }), $tmp897, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp899 = $tmp896.start.value;
    panda$core$Int64 i898 = { $tmp899 };
    int64_t $tmp901 = $tmp896.end.value;
    int64_t $tmp902 = $tmp896.step.value;
    bool $tmp903 = $tmp896.inclusive.value;
    bool $tmp910 = $tmp902 > 0;
    if ($tmp910) goto $l908; else goto $l909;
    $l908:;
    if ($tmp903) goto $l911; else goto $l912;
    $l911:;
    if ($tmp899 <= $tmp901) goto $l904; else goto $l906;
    $l912:;
    if ($tmp899 < $tmp901) goto $l904; else goto $l906;
    $l909:;
    if ($tmp903) goto $l913; else goto $l914;
    $l913:;
    if ($tmp899 >= $tmp901) goto $l904; else goto $l906;
    $l914:;
    if ($tmp899 > $tmp901) goto $l904; else goto $l906;
    $l904:;
    {
        panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s917, ((panda$core$Object*) wrap_panda$core$Int64(i898)));
        panda$core$String* $tmp920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp918, &$s919);
        p916 = $tmp920;
        panda$core$Object* $tmp921 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i898);
        panda$core$Object* $tmp923 = (($fn922) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i898);
        panda$core$Bit $tmp925 = (($fn924) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp921)->type->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp921)->type, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp923)));
        if ($tmp925.value) {
        {
            panda$core$Object* $tmp927 = (($fn926) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i898);
            panda$core$Object* $tmp928 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i898);
            panda$core$String* $tmp930 = (($fn929) self->$class->vtable[52])(self, p916, ((org$pandalanguage$pandac$Type*) $tmp927), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp928)->type, out794);
            panda$collections$Array$add$panda$collections$Array$T(casts893, ((panda$core$Object*) $tmp930));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts893, ((panda$core$Object*) p916));
        }
        }
    }
    $l907:;
    if ($tmp910) goto $l932; else goto $l933;
    $l932:;
    int64_t $tmp934 = $tmp901 - i898.value;
    if ($tmp903) goto $l935; else goto $l936;
    $l935:;
    if ($tmp934 >= $tmp902) goto $l931; else goto $l906;
    $l936:;
    if ($tmp934 > $tmp902) goto $l931; else goto $l906;
    $l933:;
    int64_t $tmp938 = i898.value - $tmp901;
    if ($tmp903) goto $l939; else goto $l940;
    $l939:;
    if ($tmp938 >= -$tmp902) goto $l931; else goto $l906;
    $l940:;
    if ($tmp938 > -$tmp902) goto $l931; else goto $l906;
    $l931:;
    i898.value += $tmp902;
    goto $l904;
    $l906:;
    org$pandalanguage$pandac$Type* $tmp943 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp945 = (($fn944) p_raw->returnType->$class->vtable[5])(p_raw->returnType, ((panda$core$Object*) $tmp943));
    if ($tmp945.value) {
    {
        panda$core$String* $tmp947 = (($fn946) self->$class->vtable[4])(self);
        returnValue942 = $tmp947;
        panda$core$String* $tmp949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s948, returnValue942);
        panda$core$String* $tmp951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp949, &$s950);
        (($fn952) ((panda$io$OutputStream*) out794)->$class->vtable[16])(((panda$io$OutputStream*) out794), $tmp951);
    }
    }
    else {
    {
        returnValue942 = &$s953;
    }
    }
    panda$core$String* $tmp956 = (($fn955) self->$class->vtable[40])(self, p_raw);
    panda$core$String* $tmp957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s954, $tmp956);
    panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp957, &$s958);
    panda$core$String* $tmp961 = (($fn960) self->$class->vtable[15])(self, p_raw->returnType);
    panda$core$String* $tmp962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp959, $tmp961);
    panda$core$String* $tmp964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, &$s963);
    panda$core$String* $tmp966 = (($fn965) self->$class->vtable[30])(self, p_raw);
    panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, $tmp966);
    panda$core$String* $tmp969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp967, &$s968);
    panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s970, self_t831);
    panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp971, &$s972);
    panda$core$String* $tmp974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, $tmp973);
    (($fn975) ((panda$io$OutputStream*) out794)->$class->vtable[16])(((panda$io$OutputStream*) out794), $tmp974);
    panda$core$Int64 $tmp977 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp976, ((panda$core$Int64) { 0 }), $tmp977, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp979 = $tmp976.start.value;
    panda$core$Int64 i978 = { $tmp979 };
    int64_t $tmp981 = $tmp976.end.value;
    int64_t $tmp982 = $tmp976.step.value;
    bool $tmp983 = $tmp976.inclusive.value;
    bool $tmp990 = $tmp982 > 0;
    if ($tmp990) goto $l988; else goto $l989;
    $l988:;
    if ($tmp983) goto $l991; else goto $l992;
    $l991:;
    if ($tmp979 <= $tmp981) goto $l984; else goto $l986;
    $l992:;
    if ($tmp979 < $tmp981) goto $l984; else goto $l986;
    $l989:;
    if ($tmp983) goto $l993; else goto $l994;
    $l993:;
    if ($tmp979 >= $tmp981) goto $l984; else goto $l986;
    $l994:;
    if ($tmp979 > $tmp981) goto $l984; else goto $l986;
    $l984:;
    {
        panda$core$Object* $tmp997 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i978);
        panda$core$String* $tmp999 = (($fn998) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp997)->type);
        panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s996, $tmp999);
        panda$core$String* $tmp1002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1000, &$s1001);
        panda$core$Object* $tmp1003 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts893, i978);
        panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1002, ((panda$core$String*) $tmp1003));
        panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1004, &$s1005);
        (($fn1007) ((panda$io$OutputStream*) out794)->$class->vtable[16])(((panda$io$OutputStream*) out794), $tmp1006);
    }
    $l987:;
    if ($tmp990) goto $l1009; else goto $l1010;
    $l1009:;
    int64_t $tmp1011 = $tmp981 - i978.value;
    if ($tmp983) goto $l1012; else goto $l1013;
    $l1012:;
    if ($tmp1011 >= $tmp982) goto $l1008; else goto $l986;
    $l1013:;
    if ($tmp1011 > $tmp982) goto $l1008; else goto $l986;
    $l1010:;
    int64_t $tmp1015 = i978.value - $tmp981;
    if ($tmp983) goto $l1016; else goto $l1017;
    $l1016:;
    if ($tmp1015 >= -$tmp982) goto $l1008; else goto $l986;
    $l1017:;
    if ($tmp1015 > -$tmp982) goto $l1008; else goto $l986;
    $l1008:;
    i978.value += $tmp982;
    goto $l984;
    $l986:;
    (($fn1020) ((panda$io$OutputStream*) out794)->$class->vtable[19])(((panda$io$OutputStream*) out794), &$s1019);
    org$pandalanguage$pandac$Type* $tmp1021 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1023 = (($fn1022) p_raw->returnType->$class->vtable[5])(p_raw->returnType, ((panda$core$Object*) $tmp1021));
    if ($tmp1023.value) {
    {
        panda$core$String* $tmp1025 = (($fn1024) self->$class->vtable[15])(self, effectiveReturnType801);
        panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1025, &$s1026);
        panda$core$String* $tmp1029 = (($fn1028) self->$class->vtable[52])(self, returnValue942, p_raw->returnType, effectiveReturnType801, out794);
        panda$core$String* $tmp1030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1027, $tmp1029);
        returnValue942 = $tmp1030;
    }
    }
    panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1031, returnValue942);
    panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1032, &$s1033);
    (($fn1035) ((panda$io$OutputStream*) out794)->$class->vtable[19])(((panda$io$OutputStream*) out794), $tmp1034);
    (($fn1037) ((panda$io$OutputStream*) out794)->$class->vtable[19])(((panda$io$OutputStream*) out794), &$s1036);
    self->varCount = oldVarCount800;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1039 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp1039->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp1039->refCount.value = 1;
    panda$core$String* $tmp1042 = (($fn1041) resultType812->$class->vtable[0])(resultType812);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp1039, resultName807, $tmp1042);
    result1038 = $tmp1039;
    (($fn1043) self->methodShims->$class->vtable[5])(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result1038));
    (($fn1044) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer791));
    return result1038;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 oldVarCount1045;
    panda$core$String* result1046;
    panda$core$String* selfType1053;
    org$pandalanguage$pandac$Type* actualMethodType1079;
    org$pandalanguage$pandac$Type* inheritedMethodType1082;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1085;
    panda$collections$Array* parameters1137;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1140;
    panda$collections$Array* children1180;
    panda$core$String* unwrapped1186;
    panda$core$String* returnValue1193;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1234;
    oldVarCount1045 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp1049 = (($fn1048) self->$class->vtable[30])(self, p_m);
    panda$core$String* $tmp1050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1047, $tmp1049);
    panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1050, &$s1051);
    result1046 = $tmp1052;
    panda$core$String* $tmp1056 = (($fn1055) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp1057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1054, $tmp1056);
    panda$core$String* $tmp1059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1057, &$s1058);
    selfType1053 = $tmp1059;
    (($fn1061) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1060);
    panda$core$Bit $tmp1063 = (($fn1062) p_m->owner->$class->vtable[5])(p_m->owner);
    if ($tmp1063.value) {
    {
        (($fn1065) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s1064);
    }
    }
    panda$core$String* $tmp1068 = (($fn1067) self->$class->vtable[15])(self, p_m->returnType);
    panda$core$String* $tmp1069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1066, $tmp1068);
    panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1069, &$s1070);
    panda$core$String* $tmp1072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1071, result1046);
    panda$core$String* $tmp1074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1072, &$s1073);
    panda$core$String* $tmp1075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1074, selfType1053);
    panda$core$String* $tmp1077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1075, &$s1076);
    (($fn1078) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1077);
    org$pandalanguage$pandac$Type* $tmp1081 = (($fn1080) self->compiler->$class->vtable[44])(self->compiler, p_m);
    actualMethodType1079 = $tmp1081;
    org$pandalanguage$pandac$Type* $tmp1084 = (($fn1083) self->compiler->$class->vtable[46])(self->compiler, p_m);
    inheritedMethodType1082 = $tmp1084;
    panda$core$Int64 $tmp1086 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1085, ((panda$core$Int64) { 0 }), $tmp1086, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1088 = $tmp1085.start.value;
    panda$core$Int64 i1087 = { $tmp1088 };
    int64_t $tmp1090 = $tmp1085.end.value;
    int64_t $tmp1091 = $tmp1085.step.value;
    bool $tmp1092 = $tmp1085.inclusive.value;
    bool $tmp1099 = $tmp1091 > 0;
    if ($tmp1099) goto $l1097; else goto $l1098;
    $l1097:;
    if ($tmp1092) goto $l1100; else goto $l1101;
    $l1100:;
    if ($tmp1088 <= $tmp1090) goto $l1093; else goto $l1095;
    $l1101:;
    if ($tmp1088 < $tmp1090) goto $l1093; else goto $l1095;
    $l1098:;
    if ($tmp1092) goto $l1102; else goto $l1103;
    $l1102:;
    if ($tmp1088 >= $tmp1090) goto $l1093; else goto $l1095;
    $l1103:;
    if ($tmp1088 > $tmp1090) goto $l1093; else goto $l1095;
    $l1093:;
    {
        panda$core$Object* $tmp1107 = (($fn1106) inheritedMethodType1082->subtypes->$class->vtable[2])(inheritedMethodType1082->subtypes, i1087);
        panda$core$String* $tmp1109 = (($fn1108) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp1107));
        panda$core$String* $tmp1110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1105, $tmp1109);
        panda$core$String* $tmp1112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1110, &$s1111);
        panda$core$Object* $tmp1113 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i1087);
        panda$core$String* $tmp1114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1112, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1113)->name);
        panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1114, &$s1115);
        (($fn1117) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1116);
    }
    $l1096:;
    if ($tmp1099) goto $l1119; else goto $l1120;
    $l1119:;
    int64_t $tmp1121 = $tmp1090 - i1087.value;
    if ($tmp1092) goto $l1122; else goto $l1123;
    $l1122:;
    if ($tmp1121 >= $tmp1091) goto $l1118; else goto $l1095;
    $l1123:;
    if ($tmp1121 > $tmp1091) goto $l1118; else goto $l1095;
    $l1120:;
    int64_t $tmp1125 = i1087.value - $tmp1090;
    if ($tmp1092) goto $l1126; else goto $l1127;
    $l1126:;
    if ($tmp1125 >= -$tmp1091) goto $l1118; else goto $l1095;
    $l1127:;
    if ($tmp1125 > -$tmp1091) goto $l1118; else goto $l1095;
    $l1118:;
    i1087.value += $tmp1091;
    goto $l1093;
    $l1095:;
    (($fn1130) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1129);
    panda$core$Int64 $tmp1131 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1131;
    panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1132, selfType1053);
    panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1133, &$s1134);
    (($fn1136) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1135);
    panda$collections$Array* $tmp1138 = (panda$collections$Array*) malloc(40);
    $tmp1138->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1138->refCount.value = 1;
    panda$collections$Array$init($tmp1138);
    parameters1137 = $tmp1138;
    panda$core$Int64 $tmp1141 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1140, ((panda$core$Int64) { 0 }), $tmp1141, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1143 = $tmp1140.start.value;
    panda$core$Int64 i1142 = { $tmp1143 };
    int64_t $tmp1145 = $tmp1140.end.value;
    int64_t $tmp1146 = $tmp1140.step.value;
    bool $tmp1147 = $tmp1140.inclusive.value;
    bool $tmp1154 = $tmp1146 > 0;
    if ($tmp1154) goto $l1152; else goto $l1153;
    $l1152:;
    if ($tmp1147) goto $l1155; else goto $l1156;
    $l1155:;
    if ($tmp1143 <= $tmp1145) goto $l1148; else goto $l1150;
    $l1156:;
    if ($tmp1143 < $tmp1145) goto $l1148; else goto $l1150;
    $l1153:;
    if ($tmp1147) goto $l1157; else goto $l1158;
    $l1157:;
    if ($tmp1143 >= $tmp1145) goto $l1148; else goto $l1150;
    $l1158:;
    if ($tmp1143 > $tmp1145) goto $l1148; else goto $l1150;
    $l1148:;
    {
        panda$core$Object* $tmp1161 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i1142);
        panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1160, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1161)->name);
        panda$core$Object* $tmp1164 = (($fn1163) inheritedMethodType1082->subtypes->$class->vtable[2])(inheritedMethodType1082->subtypes, i1142);
        panda$core$Object* $tmp1166 = (($fn1165) actualMethodType1079->subtypes->$class->vtable[2])(actualMethodType1079->subtypes, i1142);
        panda$core$String* $tmp1168 = (($fn1167) self->$class->vtable[52])(self, $tmp1162, ((org$pandalanguage$pandac$Type*) $tmp1164), ((org$pandalanguage$pandac$Type*) $tmp1166), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters1137, ((panda$core$Object*) $tmp1168));
    }
    $l1151:;
    if ($tmp1154) goto $l1170; else goto $l1171;
    $l1170:;
    int64_t $tmp1172 = $tmp1145 - i1142.value;
    if ($tmp1147) goto $l1173; else goto $l1174;
    $l1173:;
    if ($tmp1172 >= $tmp1146) goto $l1169; else goto $l1150;
    $l1174:;
    if ($tmp1172 > $tmp1146) goto $l1169; else goto $l1150;
    $l1171:;
    int64_t $tmp1176 = i1142.value - $tmp1145;
    if ($tmp1147) goto $l1177; else goto $l1178;
    $l1177:;
    if ($tmp1176 >= -$tmp1146) goto $l1169; else goto $l1150;
    $l1178:;
    if ($tmp1176 > -$tmp1146) goto $l1169; else goto $l1150;
    $l1169:;
    i1142.value += $tmp1146;
    goto $l1148;
    $l1150:;
    panda$collections$Array* $tmp1181 = (panda$collections$Array*) malloc(40);
    $tmp1181->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1181->refCount.value = 1;
    panda$collections$Array$init($tmp1181);
    children1180 = $tmp1181;
    org$pandalanguage$pandac$IRNode* $tmp1183 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1183->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1183->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp1185 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1183, ((panda$core$Int64) { 1025 }), ((panda$core$Int64) { -1 }), $tmp1185);
    panda$collections$Array$add$panda$collections$Array$T(children1180, ((panda$core$Object*) $tmp1183));
    org$pandalanguage$pandac$IRNode* $tmp1187 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1187->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1187->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp1190 = (($fn1189) p_m->owner->$class->vtable[3])(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1187, ((panda$core$Int64) { 1009 }), ((panda$core$Int64) { -1 }), $tmp1190, ((panda$collections$ListView*) children1180));
    panda$core$String* $tmp1192 = (($fn1191) self->$class->vtable[67])(self, $tmp1187, p_out);
    unwrapped1186 = $tmp1192;
    org$pandalanguage$pandac$Type* $tmp1194 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1196 = (($fn1195) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp1194));
    if ($tmp1196.value) {
    {
        panda$core$String* $tmp1198 = (($fn1197) self->$class->vtable[4])(self);
        returnValue1193 = $tmp1198;
        panda$core$String* $tmp1200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1199, returnValue1193);
        panda$core$String* $tmp1202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1200, &$s1201);
        (($fn1203) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1202);
        panda$core$String* $tmp1206 = (($fn1205) self->$class->vtable[15])(self, p_m->returnType);
        panda$core$String* $tmp1207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1204, $tmp1206);
        panda$core$String* $tmp1209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1207, &$s1208);
        panda$core$String* $tmp1210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1209, returnValue1193);
        panda$core$String* $tmp1212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1210, &$s1211);
        returnValue1193 = $tmp1212;
    }
    }
    else {
    {
        returnValue1193 = &$s1213;
    }
    }
    panda$core$String* $tmp1216 = (($fn1215) self->$class->vtable[40])(self, p_m);
    panda$core$String* $tmp1217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1214, $tmp1216);
    panda$core$String* $tmp1219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1217, &$s1218);
    panda$core$String* $tmp1221 = (($fn1220) self->$class->vtable[15])(self, p_m->returnType);
    panda$core$String* $tmp1222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1219, $tmp1221);
    panda$core$String* $tmp1224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1222, &$s1223);
    panda$core$String* $tmp1226 = (($fn1225) self->$class->vtable[30])(self, p_m);
    panda$core$String* $tmp1227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1224, $tmp1226);
    panda$core$String* $tmp1229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1227, &$s1228);
    panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1229, unwrapped1186);
    panda$core$String* $tmp1232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1230, &$s1231);
    (($fn1233) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1232);
    panda$core$Int64 $tmp1235 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1234, ((panda$core$Int64) { 0 }), $tmp1235, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1237 = $tmp1234.start.value;
    panda$core$Int64 i1236 = { $tmp1237 };
    int64_t $tmp1239 = $tmp1234.end.value;
    int64_t $tmp1240 = $tmp1234.step.value;
    bool $tmp1241 = $tmp1234.inclusive.value;
    bool $tmp1248 = $tmp1240 > 0;
    if ($tmp1248) goto $l1246; else goto $l1247;
    $l1246:;
    if ($tmp1241) goto $l1249; else goto $l1250;
    $l1249:;
    if ($tmp1237 <= $tmp1239) goto $l1242; else goto $l1244;
    $l1250:;
    if ($tmp1237 < $tmp1239) goto $l1242; else goto $l1244;
    $l1247:;
    if ($tmp1241) goto $l1251; else goto $l1252;
    $l1251:;
    if ($tmp1237 >= $tmp1239) goto $l1242; else goto $l1244;
    $l1252:;
    if ($tmp1237 > $tmp1239) goto $l1242; else goto $l1244;
    $l1242:;
    {
        panda$core$Object* $tmp1256 = (($fn1255) actualMethodType1079->subtypes->$class->vtable[2])(actualMethodType1079->subtypes, i1236);
        panda$core$String* $tmp1258 = (($fn1257) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp1256));
        panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1254, $tmp1258);
        panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1259, &$s1260);
        panda$core$Object* $tmp1262 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters1137, i1236);
        panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, ((panda$core$String*) $tmp1262));
        panda$core$String* $tmp1265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1263, &$s1264);
        (($fn1266) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1265);
    }
    $l1245:;
    if ($tmp1248) goto $l1268; else goto $l1269;
    $l1268:;
    int64_t $tmp1270 = $tmp1239 - i1236.value;
    if ($tmp1241) goto $l1271; else goto $l1272;
    $l1271:;
    if ($tmp1270 >= $tmp1240) goto $l1267; else goto $l1244;
    $l1272:;
    if ($tmp1270 > $tmp1240) goto $l1267; else goto $l1244;
    $l1269:;
    int64_t $tmp1274 = i1236.value - $tmp1239;
    if ($tmp1241) goto $l1275; else goto $l1276;
    $l1275:;
    if ($tmp1274 >= -$tmp1240) goto $l1267; else goto $l1244;
    $l1276:;
    if ($tmp1274 > -$tmp1240) goto $l1267; else goto $l1244;
    $l1267:;
    i1236.value += $tmp1240;
    goto $l1242;
    $l1244:;
    (($fn1279) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1278);
    panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1280, returnValue1193);
    panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1281, &$s1282);
    (($fn1284) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1283);
    panda$core$Int64 $tmp1285 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1285;
    (($fn1287) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1286);
    self->varCount = oldVarCount1045;
    return result1046;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1288;
    panda$core$String* previous1293;
    panda$collections$Iterator* intfType$Iter1295;
    org$pandalanguage$pandac$Type* intfType1307;
    org$pandalanguage$pandac$ClassDecl* intf1312;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1315;
    panda$collections$ListView* methods1318;
    panda$core$String* name1321;
    panda$core$String* t1333;
    panda$core$MutableString* result1348;
    panda$core$String* separator1390;
    panda$collections$Iterator* m$Iter1392;
    org$pandalanguage$pandac$MethodDecl* m1404;
    panda$core$String* shim1415;
    org$pandalanguage$pandac$Type* $tmp1290 = (($fn1289) p_cl->$class->vtable[3])(p_cl);
    panda$collections$Set* $tmp1292 = (($fn1291) self->compiler->$class->vtable[15])(self->compiler, $tmp1290);
    interfaces1288 = $tmp1292;
    previous1293 = &$s1294;
    {
        ITable* $tmp1296 = ((panda$collections$Iterable*) interfaces1288)->$class->itable;
        while ($tmp1296->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1296 = $tmp1296->next;
        }
        $fn1298 $tmp1297 = $tmp1296->methods[0];
        panda$collections$Iterator* $tmp1299 = $tmp1297(((panda$collections$Iterable*) interfaces1288));
        intfType$Iter1295 = $tmp1299;
        $l1300:;
        ITable* $tmp1302 = intfType$Iter1295->$class->itable;
        while ($tmp1302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1302 = $tmp1302->next;
        }
        $fn1304 $tmp1303 = $tmp1302->methods[0];
        panda$core$Bit $tmp1305 = $tmp1303(intfType$Iter1295);
        panda$core$Bit $tmp1306 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1305);
        if (!$tmp1306.value) goto $l1301;
        {
            ITable* $tmp1308 = intfType$Iter1295->$class->itable;
            while ($tmp1308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1308 = $tmp1308->next;
            }
            $fn1310 $tmp1309 = $tmp1308->methods[1];
            panda$core$Object* $tmp1311 = $tmp1309(intfType$Iter1295);
            intfType1307 = ((org$pandalanguage$pandac$Type*) $tmp1311);
            org$pandalanguage$pandac$ClassDecl* $tmp1314 = (($fn1313) self->compiler->$class->vtable[14])(self->compiler, intfType1307);
            intf1312 = $tmp1314;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1317 = (($fn1316) self->$class->vtable[26])(self, intf1312);
            intfCC1315 = $tmp1317;
            panda$collections$ListView* $tmp1320 = (($fn1319) self->compiler->$class->vtable[19])(self->compiler, p_cl, intfType1307);
            methods1318 = $tmp1320;
            panda$core$String* $tmp1324 = (($fn1323) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1322, $tmp1324);
            panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1325, &$s1326);
            panda$core$String* $tmp1329 = (($fn1328) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) intf1312)->name);
            panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1327, $tmp1329);
            panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1330, &$s1331);
            name1321 = $tmp1332;
            org$pandalanguage$pandac$Type* $tmp1335 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1337 = (($fn1336) self->$class->vtable[15])(self, $tmp1335);
            panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1334, $tmp1337);
            panda$core$String* $tmp1340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1338, &$s1339);
            ITable* $tmp1341 = ((panda$collections$CollectionView*) methods1318)->$class->itable;
            while ($tmp1341->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1341 = $tmp1341->next;
            }
            $fn1343 $tmp1342 = $tmp1341->methods[0];
            panda$core$Int64 $tmp1344 = $tmp1342(((panda$collections$CollectionView*) methods1318));
            panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1340, ((panda$core$Object*) wrap_panda$core$Int64($tmp1344)));
            panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1345, &$s1346);
            t1333 = $tmp1347;
            panda$core$MutableString* $tmp1349 = (panda$core$MutableString*) malloc(40);
            $tmp1349->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1349->refCount.value = 1;
            panda$core$String* $tmp1352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1351, name1321);
            panda$core$String* $tmp1354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1352, &$s1353);
            panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1354, t1333);
            panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1355, &$s1356);
            org$pandalanguage$pandac$Type* $tmp1358 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1360 = (($fn1359) self->$class->vtable[15])(self, $tmp1358);
            panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1357, $tmp1360);
            panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1361, &$s1362);
            panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1364, intfCC1315->type);
            panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, &$s1366);
            panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, intfCC1315->name);
            panda$core$String* $tmp1370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1368, &$s1369);
            org$pandalanguage$pandac$Type* $tmp1371 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1373 = (($fn1372) self->$class->vtable[15])(self, $tmp1371);
            panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1370, $tmp1373);
            panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1374, &$s1375);
            panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1363, $tmp1376);
            panda$core$String* $tmp1379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1378, previous1293);
            panda$core$String* $tmp1381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1379, &$s1380);
            ITable* $tmp1382 = ((panda$collections$CollectionView*) methods1318)->$class->itable;
            while ($tmp1382->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1382 = $tmp1382->next;
            }
            $fn1384 $tmp1383 = $tmp1382->methods[0];
            panda$core$Int64 $tmp1385 = $tmp1383(((panda$collections$CollectionView*) methods1318));
            panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1381, ((panda$core$Object*) wrap_panda$core$Int64($tmp1385)));
            panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1386, &$s1387);
            panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1377, $tmp1388);
            panda$core$MutableString$init$panda$core$String($tmp1349, $tmp1389);
            result1348 = $tmp1349;
            separator1390 = &$s1391;
            {
                ITable* $tmp1393 = ((panda$collections$Iterable*) methods1318)->$class->itable;
                while ($tmp1393->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1393 = $tmp1393->next;
                }
                $fn1395 $tmp1394 = $tmp1393->methods[0];
                panda$collections$Iterator* $tmp1396 = $tmp1394(((panda$collections$Iterable*) methods1318));
                m$Iter1392 = $tmp1396;
                $l1397:;
                ITable* $tmp1399 = m$Iter1392->$class->itable;
                while ($tmp1399->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1399 = $tmp1399->next;
                }
                $fn1401 $tmp1400 = $tmp1399->methods[0];
                panda$core$Bit $tmp1402 = $tmp1400(m$Iter1392);
                panda$core$Bit $tmp1403 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1402);
                if (!$tmp1403.value) goto $l1398;
                {
                    ITable* $tmp1405 = m$Iter1392->$class->itable;
                    while ($tmp1405->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1405 = $tmp1405->next;
                    }
                    $fn1407 $tmp1406 = $tmp1405->methods[1];
                    panda$core$Object* $tmp1408 = $tmp1406(m$Iter1392);
                    m1404 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1408);
                    (($fn1409) result1348->$class->vtable[3])(result1348, separator1390);
                    separator1390 = &$s1410;
                    panda$core$Bit $tmp1412 = (($fn1411) m1404->annotations->$class->vtable[10])(m1404->annotations);
                    if ($tmp1412.value) {
                    {
                        (($fn1414) result1348->$class->vtable[3])(result1348, &$s1413);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1417 = (($fn1416) self->$class->vtable[22])(self, m1404, self->wrapperShims);
                        shim1415 = $tmp1417;
                        panda$core$String* $tmp1420 = (($fn1419) self->$class->vtable[18])(self, m1404);
                        panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1418, $tmp1420);
                        panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1422);
                        panda$core$String* $tmp1424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1423, shim1415);
                        panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1424, &$s1425);
                        (($fn1427) result1348->$class->vtable[3])(result1348, $tmp1426);
                    }
                    }
                }
                goto $l1397;
                $l1398:;
            }
            (($fn1429) result1348->$class->vtable[3])(result1348, &$s1428);
            (($fn1430) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result1348));
            panda$core$String* $tmp1432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1431, t1333);
            panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1433);
            panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, name1321);
            panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, &$s1436);
            previous1293 = $tmp1437;
        }
        goto $l1300;
        $l1301:;
    }
    return previous1293;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1441;
    panda$core$Bit $tmp1439 = (($fn1438) p_m->returnType->$class->vtable[8])(p_m->returnType);
    panda$core$Bit $tmp1440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1439);
    if ($tmp1440.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1445 = (($fn1444) p_m->annotations->$class->vtable[7])(p_m->annotations);
    bool $tmp1443 = $tmp1445.value;
    if (!$tmp1443) goto $l1446;
    panda$core$Bit $tmp1448 = (($fn1447) p_m->returnType->$class->vtable[8])(p_m->returnType);
    $tmp1443 = $tmp1448.value;
    $l1446:;
    panda$core$Bit $tmp1449 = { $tmp1443 };
    bool $tmp1442 = $tmp1449.value;
    if (!$tmp1442) goto $l1450;
    org$pandalanguage$pandac$ClassDecl* $tmp1452 = (($fn1451) self->compiler->$class->vtable[14])(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1454 = (($fn1453) self->compiler->$class->vtable[9])(self->compiler, $tmp1452);
    $tmp1442 = $tmp1454.value;
    $l1450:;
    panda$core$Bit $tmp1455 = { $tmp1442 };
    result1441 = $tmp1455;
    return result1441;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1458;
    org$pandalanguage$pandac$Type* declared1459;
    org$pandalanguage$pandac$Type* inherited1464;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1469;
    panda$core$MutableString* resultType1478;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1492;
    (($fn1456) self->compiler->$class->vtable[6])(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        (($fn1457) self->$class->vtable[87])(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1461 = (($fn1460) p_m->owner->$class->vtable[3])(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1463 = (($fn1462) self->compiler->$class->vtable[45])(self->compiler, p_m, $tmp1461);
    declared1459 = $tmp1463;
    org$pandalanguage$pandac$Type* $tmp1466 = (($fn1465) self->compiler->$class->vtable[47])(self->compiler, p_m);
    inherited1464 = $tmp1466;
    panda$core$Bit $tmp1468 = (($fn1467) declared1459->$class->vtable[5])(declared1459, ((panda$core$Object*) inherited1464));
    if ($tmp1468.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1471 = (($fn1470) self->compiler->$class->vtable[46])(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1473 = (($fn1472) self->$class->vtable[21])(self, p_m, $tmp1471, ((panda$io$OutputStream*) self->shims));
        shim1469 = $tmp1473;
        resultName1458 = shim1469->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1475 = (($fn1474) self->$class->vtable[30])(self, p_m);
        resultName1458 = $tmp1475;
    }
    }
    panda$core$Bit $tmp1477 = (($fn1476) self->$class->vtable[24])(self, p_m);
    if ($tmp1477.value) {
    {
        panda$core$MutableString* $tmp1479 = (panda$core$MutableString*) malloc(40);
        $tmp1479->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1479->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1479, &$s1481);
        resultType1478 = $tmp1479;
        panda$core$Int64 $tmp1483 = (($fn1482) inherited1464->subtypes->$class->vtable[3])(inherited1464->subtypes);
        panda$core$Int64 $tmp1484 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1483, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1486 = (($fn1485) inherited1464->subtypes->$class->vtable[2])(inherited1464->subtypes, $tmp1484);
        panda$core$String* $tmp1488 = (($fn1487) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp1486));
        (($fn1489) resultType1478->$class->vtable[3])(resultType1478, $tmp1488);
        (($fn1491) resultType1478->$class->vtable[3])(resultType1478, &$s1490);
        panda$core$Int64 $tmp1494 = (($fn1493) inherited1464->subtypes->$class->vtable[3])(inherited1464->subtypes);
        panda$core$Int64 $tmp1495 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1494, ((panda$core$Int64) { 1 }));
        panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1492, ((panda$core$Int64) { 0 }), $tmp1495, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp1497 = $tmp1492.start.value;
        panda$core$Int64 i1496 = { $tmp1497 };
        int64_t $tmp1499 = $tmp1492.end.value;
        int64_t $tmp1500 = $tmp1492.step.value;
        bool $tmp1501 = $tmp1492.inclusive.value;
        bool $tmp1508 = $tmp1500 > 0;
        if ($tmp1508) goto $l1506; else goto $l1507;
        $l1506:;
        if ($tmp1501) goto $l1509; else goto $l1510;
        $l1509:;
        if ($tmp1497 <= $tmp1499) goto $l1502; else goto $l1504;
        $l1510:;
        if ($tmp1497 < $tmp1499) goto $l1502; else goto $l1504;
        $l1507:;
        if ($tmp1501) goto $l1511; else goto $l1512;
        $l1511:;
        if ($tmp1497 >= $tmp1499) goto $l1502; else goto $l1504;
        $l1512:;
        if ($tmp1497 > $tmp1499) goto $l1502; else goto $l1504;
        $l1502:;
        {
            (($fn1515) resultType1478->$class->vtable[3])(resultType1478, &$s1514);
            panda$core$Object* $tmp1517 = (($fn1516) inherited1464->subtypes->$class->vtable[2])(inherited1464->subtypes, i1496);
            panda$core$String* $tmp1519 = (($fn1518) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp1517));
            (($fn1520) resultType1478->$class->vtable[3])(resultType1478, $tmp1519);
        }
        $l1505:;
        if ($tmp1508) goto $l1522; else goto $l1523;
        $l1522:;
        int64_t $tmp1524 = $tmp1499 - i1496.value;
        if ($tmp1501) goto $l1525; else goto $l1526;
        $l1525:;
        if ($tmp1524 >= $tmp1500) goto $l1521; else goto $l1504;
        $l1526:;
        if ($tmp1524 > $tmp1500) goto $l1521; else goto $l1504;
        $l1523:;
        int64_t $tmp1528 = i1496.value - $tmp1499;
        if ($tmp1501) goto $l1529; else goto $l1530;
        $l1529:;
        if ($tmp1528 >= -$tmp1500) goto $l1521; else goto $l1504;
        $l1530:;
        if ($tmp1528 > -$tmp1500) goto $l1521; else goto $l1504;
        $l1521:;
        i1496.value += $tmp1500;
        goto $l1502;
        $l1504:;
        (($fn1533) resultType1478->$class->vtable[3])(resultType1478, &$s1532);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1534 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1534->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1534->refCount.value = 1;
        panda$core$String* $tmp1537 = (($fn1536) resultType1478->$class->vtable[0])(resultType1478);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1534, ((panda$core$Object*) resultName1458), ((panda$core$Object*) $tmp1537));
        return $tmp1534;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1538 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1538->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1538->refCount.value = 1;
    panda$core$String* $tmp1541 = (($fn1540) self->$class->vtable[15])(self, inherited1464);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1538, ((panda$core$Object*) resultName1458), ((panda$core$Object*) $tmp1541));
    return $tmp1538;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1542;
    panda$core$String* type1546;
    panda$collections$ListView* vtable1569;
    panda$core$String* superPtr1597;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1598;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1611;
    panda$core$MutableString* code1617;
    panda$core$String* separator1664;
    panda$collections$Iterator* m$Iter1666;
    org$pandalanguage$pandac$MethodDecl* m1678;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1688;
    panda$core$Object* $tmp1544 = (($fn1543) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)));
    result1542 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1544);
    if (((panda$core$Bit) { result1542 == NULL }).value) {
    {
        (($fn1545) self->compiler->$class->vtable[5])(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1547 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1547->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1547->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1551 = (($fn1550) p_cl->$class->vtable[3])(p_cl);
            panda$core$String* $tmp1553 = (($fn1552) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) $tmp1551)->name);
            panda$core$String* $tmp1554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1549, $tmp1553);
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1554, &$s1555);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1547, $tmp1556, &$s1557);
            result1542 = $tmp1547;
            (($fn1558) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)), ((panda$core$Object*) result1542));
            panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1559, result1542->name);
            panda$core$String* $tmp1562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1560, &$s1561);
            panda$core$String* $tmp1563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1562, result1542->type);
            panda$core$String* $tmp1565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1563, &$s1564);
            (($fn1566) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1565);
            panda$core$Object* $tmp1568 = (($fn1567) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1568);
        }
        }
        panda$collections$ListView* $tmp1571 = (($fn1570) self->compiler->$class->vtable[21])(self->compiler, p_cl);
        vtable1569 = $tmp1571;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1572 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1572->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1572->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1576 = (($fn1575) p_cl->$class->vtable[3])(p_cl);
        panda$core$String* $tmp1578 = (($fn1577) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) $tmp1576)->name);
        panda$core$String* $tmp1579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1574, $tmp1578);
        panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1579, &$s1580);
        panda$core$String* $tmp1584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1582, &$s1583);
        panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1584, &$s1585);
        ITable* $tmp1588 = ((panda$collections$CollectionView*) vtable1569)->$class->itable;
        while ($tmp1588->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1588 = $tmp1588->next;
        }
        $fn1590 $tmp1589 = $tmp1588->methods[0];
        panda$core$Int64 $tmp1591 = $tmp1589(((panda$collections$CollectionView*) vtable1569));
        panda$core$String* $tmp1592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1587, ((panda$core$Object*) wrap_panda$core$Int64($tmp1591)));
        panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1592, &$s1593);
        panda$core$String* $tmp1595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1586, $tmp1594);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1572, $tmp1581, $tmp1595);
        result1542 = $tmp1572;
        (($fn1596) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)), ((panda$core$Object*) result1542));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1600 = (($fn1599) self->compiler->$class->vtable[14])(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1602 = (($fn1601) self->$class->vtable[26])(self, $tmp1600);
            superCC1598 = $tmp1602;
            panda$core$String* $tmp1604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1603, superCC1598->type);
            panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1604, &$s1605);
            panda$core$String* $tmp1607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1606, superCC1598->name);
            panda$core$String* $tmp1609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1607, &$s1608);
            superPtr1597 = $tmp1609;
        }
        }
        else {
        {
            superPtr1597 = &$s1610;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1612 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1614 = (($fn1613) self->compiler->$class->vtable[14])(self->compiler, $tmp1612);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1616 = (($fn1615) self->$class->vtable[26])(self, $tmp1614);
        clConstant1611 = $tmp1616;
        panda$core$MutableString* $tmp1618 = (panda$core$MutableString*) malloc(40);
        $tmp1618->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1618->refCount.value = 1;
        panda$core$String* $tmp1621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1620, result1542->name);
        panda$core$String* $tmp1623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1621, &$s1622);
        panda$core$MutableString$init$panda$core$String($tmp1618, $tmp1623);
        code1617 = $tmp1618;
        panda$core$Bit $tmp1625 = (($fn1624) p_cl->$class->vtable[5])(p_cl);
        if ($tmp1625.value) {
        {
            (($fn1627) code1617->$class->vtable[3])(code1617, &$s1626);
        }
        }
        panda$core$String* $tmp1629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1628, result1542->type);
        panda$core$String* $tmp1631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1629, &$s1630);
        panda$core$String* $tmp1633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1632, clConstant1611->type);
        panda$core$String* $tmp1635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1633, &$s1634);
        panda$core$String* $tmp1636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1635, clConstant1611->name);
        panda$core$String* $tmp1638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1636, &$s1637);
        panda$core$String* $tmp1639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1631, $tmp1638);
        panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1640, &$s1641);
        panda$core$String* $tmp1644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1642, &$s1643);
        panda$core$String* $tmp1645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1644, superPtr1597);
        panda$core$String* $tmp1647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1645, &$s1646);
        panda$core$String* $tmp1648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1639, $tmp1647);
        panda$core$String* $tmp1651 = (($fn1650) self->$class->vtable[20])(self, p_cl);
        panda$core$String* $tmp1652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1649, $tmp1651);
        panda$core$String* $tmp1654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1652, &$s1653);
        ITable* $tmp1655 = ((panda$collections$CollectionView*) vtable1569)->$class->itable;
        while ($tmp1655->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1655 = $tmp1655->next;
        }
        $fn1657 $tmp1656 = $tmp1655->methods[0];
        panda$core$Int64 $tmp1658 = $tmp1656(((panda$collections$CollectionView*) vtable1569));
        panda$core$String* $tmp1659 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1654, ((panda$core$Object*) wrap_panda$core$Int64($tmp1658)));
        panda$core$String* $tmp1661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1659, &$s1660);
        panda$core$String* $tmp1662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1648, $tmp1661);
        (($fn1663) code1617->$class->vtable[3])(code1617, $tmp1662);
        separator1664 = &$s1665;
        {
            ITable* $tmp1667 = ((panda$collections$Iterable*) vtable1569)->$class->itable;
            while ($tmp1667->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1667 = $tmp1667->next;
            }
            $fn1669 $tmp1668 = $tmp1667->methods[0];
            panda$collections$Iterator* $tmp1670 = $tmp1668(((panda$collections$Iterable*) vtable1569));
            m$Iter1666 = $tmp1670;
            $l1671:;
            ITable* $tmp1673 = m$Iter1666->$class->itable;
            while ($tmp1673->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1673 = $tmp1673->next;
            }
            $fn1675 $tmp1674 = $tmp1673->methods[0];
            panda$core$Bit $tmp1676 = $tmp1674(m$Iter1666);
            panda$core$Bit $tmp1677 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1676);
            if (!$tmp1677.value) goto $l1672;
            {
                ITable* $tmp1679 = m$Iter1666->$class->itable;
                while ($tmp1679->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1679 = $tmp1679->next;
                }
                $fn1681 $tmp1680 = $tmp1679->methods[1];
                panda$core$Object* $tmp1682 = $tmp1680(m$Iter1666);
                m1678 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1682);
                (($fn1683) code1617->$class->vtable[3])(code1617, separator1664);
                panda$core$Bit $tmp1685 = (($fn1684) m1678->annotations->$class->vtable[10])(m1678->annotations);
                if ($tmp1685.value) {
                {
                    (($fn1687) code1617->$class->vtable[3])(code1617, &$s1686);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1690 = (($fn1689) self->$class->vtable[25])(self, m1678);
                    entry1688 = $tmp1690;
                    panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1691, ((panda$core$String*) entry1688->second));
                    panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1692, &$s1693);
                    panda$core$String* $tmp1695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1694, ((panda$core$String*) entry1688->first));
                    panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1695, &$s1696);
                    (($fn1698) code1617->$class->vtable[3])(code1617, $tmp1697);
                }
                }
                separator1664 = &$s1699;
            }
            goto $l1671;
            $l1672:;
        }
        (($fn1701) code1617->$class->vtable[3])(code1617, &$s1700);
        (($fn1702) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1617));
    }
    }
    return result1542;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1703;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1710;
    panda$core$String* type1715;
    org$pandalanguage$pandac$ClassDecl* value1727;
    panda$collections$ListView* valueVTable1731;
    panda$collections$ListView* vtable1756;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1759;
    panda$core$String* superCast1764;
    panda$core$String* itable1772;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1775;
    panda$core$MutableString* code1781;
    panda$core$String* separator1832;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1834;
    org$pandalanguage$pandac$MethodDecl* m1857;
    panda$core$String* methodName1862;
    panda$core$String* $tmp1706 = (($fn1705) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1704, $tmp1706);
    panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1707, &$s1708);
    name1703 = $tmp1709;
    panda$core$Object* $tmp1712 = (($fn1711) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) name1703)));
    result1710 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1712);
    if (((panda$core$Bit) { result1710 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1713 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            (($fn1714) self->$class->vtable[15])(self, $tmp1713);
            type1715 = &$s1716;
            panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1717, name1703);
            panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1718, &$s1719);
            panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, type1715);
            panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1721, &$s1722);
            (($fn1724) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1723);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1725 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1725->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1725->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1725, name1703, type1715);
            result1710 = $tmp1725;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1728 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1730 = (($fn1729) self->compiler->$class->vtable[14])(self->compiler, $tmp1728);
            value1727 = $tmp1730;
            panda$collections$ListView* $tmp1733 = (($fn1732) self->compiler->$class->vtable[21])(self->compiler, value1727);
            valueVTable1731 = $tmp1733;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1734 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1734->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1734->refCount.value = 1;
            panda$core$String* $tmp1738 = (($fn1737) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1736, $tmp1738);
            panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, &$s1740);
            panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1742, &$s1743);
            panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1744, &$s1745);
            ITable* $tmp1748 = ((panda$collections$CollectionView*) valueVTable1731)->$class->itable;
            while ($tmp1748->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1748 = $tmp1748->next;
            }
            $fn1750 $tmp1749 = $tmp1748->methods[0];
            panda$core$Int64 $tmp1751 = $tmp1749(((panda$collections$CollectionView*) valueVTable1731));
            panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1747, ((panda$core$Object*) wrap_panda$core$Int64($tmp1751)));
            panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, &$s1753);
            panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1746, $tmp1754);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1734, $tmp1741, $tmp1755);
            result1710 = $tmp1734;
            panda$collections$ListView* $tmp1758 = (($fn1757) self->compiler->$class->vtable[21])(self->compiler, p_cl);
            vtable1756 = $tmp1758;
            org$pandalanguage$pandac$ClassDecl* $tmp1761 = (($fn1760) self->compiler->$class->vtable[14])(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1763 = (($fn1762) self->$class->vtable[26])(self, $tmp1761);
            superCC1759 = $tmp1763;
            panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1765, superCC1759->type);
            panda$core$String* $tmp1768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1766, &$s1767);
            panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1768, superCC1759->name);
            panda$core$String* $tmp1771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, &$s1770);
            superCast1764 = $tmp1771;
            panda$core$String* $tmp1774 = (($fn1773) self->$class->vtable[23])(self, p_cl);
            itable1772 = $tmp1774;
            org$pandalanguage$pandac$Type* $tmp1776 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1778 = (($fn1777) self->compiler->$class->vtable[14])(self->compiler, $tmp1776);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1780 = (($fn1779) self->$class->vtable[26])(self, $tmp1778);
            clConstant1775 = $tmp1780;
            panda$core$MutableString* $tmp1782 = (panda$core$MutableString*) malloc(40);
            $tmp1782->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1782->refCount.value = 1;
            panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1784, result1710->name);
            panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1785, &$s1786);
            panda$core$MutableString$init$panda$core$String($tmp1782, $tmp1787);
            code1781 = $tmp1782;
            panda$core$Bit $tmp1789 = (($fn1788) p_cl->$class->vtable[5])(p_cl);
            if ($tmp1789.value) {
            {
                (($fn1791) code1781->$class->vtable[3])(code1781, &$s1790);
            }
            }
            panda$core$String* $tmp1793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1792, result1710->type);
            panda$core$String* $tmp1795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1793, &$s1794);
            panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1796, clConstant1775->type);
            panda$core$String* $tmp1799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1797, &$s1798);
            panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1799, clConstant1775->name);
            panda$core$String* $tmp1802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1800, &$s1801);
            panda$core$String* $tmp1803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1795, $tmp1802);
            panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1804, &$s1805);
            panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1806, &$s1807);
            org$pandalanguage$pandac$Type* $tmp1809 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1811 = (($fn1810) self->$class->vtable[15])(self, $tmp1809);
            panda$core$String* $tmp1812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1808, $tmp1811);
            panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1812, &$s1813);
            panda$core$String* $tmp1815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1814, superCast1764);
            panda$core$String* $tmp1817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1815, &$s1816);
            panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1803, $tmp1817);
            panda$core$String* $tmp1820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1819, itable1772);
            panda$core$String* $tmp1822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, &$s1821);
            ITable* $tmp1823 = ((panda$collections$CollectionView*) valueVTable1731)->$class->itable;
            while ($tmp1823->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1823 = $tmp1823->next;
            }
            $fn1825 $tmp1824 = $tmp1823->methods[0];
            panda$core$Int64 $tmp1826 = $tmp1824(((panda$collections$CollectionView*) valueVTable1731));
            panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1822, ((panda$core$Object*) wrap_panda$core$Int64($tmp1826)));
            panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1827, &$s1828);
            panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1818, $tmp1829);
            (($fn1831) code1781->$class->vtable[3])(code1781, $tmp1830);
            separator1832 = &$s1833;
            ITable* $tmp1835 = ((panda$collections$CollectionView*) valueVTable1731)->$class->itable;
            while ($tmp1835->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1835 = $tmp1835->next;
            }
            $fn1837 $tmp1836 = $tmp1835->methods[0];
            panda$core$Int64 $tmp1838 = $tmp1836(((panda$collections$CollectionView*) valueVTable1731));
            panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1834, ((panda$core$Int64) { 0 }), $tmp1838, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1840 = $tmp1834.start.value;
            panda$core$Int64 i1839 = { $tmp1840 };
            int64_t $tmp1842 = $tmp1834.end.value;
            int64_t $tmp1843 = $tmp1834.step.value;
            bool $tmp1844 = $tmp1834.inclusive.value;
            bool $tmp1851 = $tmp1843 > 0;
            if ($tmp1851) goto $l1849; else goto $l1850;
            $l1849:;
            if ($tmp1844) goto $l1852; else goto $l1853;
            $l1852:;
            if ($tmp1840 <= $tmp1842) goto $l1845; else goto $l1847;
            $l1853:;
            if ($tmp1840 < $tmp1842) goto $l1845; else goto $l1847;
            $l1850:;
            if ($tmp1844) goto $l1854; else goto $l1855;
            $l1854:;
            if ($tmp1840 >= $tmp1842) goto $l1845; else goto $l1847;
            $l1855:;
            if ($tmp1840 > $tmp1842) goto $l1845; else goto $l1847;
            $l1845:;
            {
                ITable* $tmp1858 = vtable1756->$class->itable;
                while ($tmp1858->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1858 = $tmp1858->next;
                }
                $fn1860 $tmp1859 = $tmp1858->methods[0];
                panda$core$Object* $tmp1861 = $tmp1859(vtable1756, i1839);
                m1857 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1861);
                if (((panda$core$Bit) { ((panda$core$Object*) m1857->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1864 = (($fn1863) self->$class->vtable[22])(self, m1857, self->wrapperShims);
                    methodName1862 = $tmp1864;
                }
                }
                else {
                {
                    panda$core$String* $tmp1866 = (($fn1865) self->$class->vtable[30])(self, m1857);
                    methodName1862 = $tmp1866;
                    if (m1857->owner->external.value) {
                    {
                        (($fn1867) self->$class->vtable[87])(self, m1857);
                    }
                    }
                }
                }
                panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1868, separator1832);
                panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1869, &$s1870);
                panda$core$String* $tmp1873 = (($fn1872) self->$class->vtable[18])(self, m1857);
                panda$core$String* $tmp1874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, $tmp1873);
                panda$core$String* $tmp1876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1874, &$s1875);
                panda$core$String* $tmp1877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1876, methodName1862);
                panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1877, &$s1878);
                (($fn1880) code1781->$class->vtable[3])(code1781, $tmp1879);
                separator1832 = &$s1881;
            }
            $l1848:;
            if ($tmp1851) goto $l1883; else goto $l1884;
            $l1883:;
            int64_t $tmp1885 = $tmp1842 - i1839.value;
            if ($tmp1844) goto $l1886; else goto $l1887;
            $l1886:;
            if ($tmp1885 >= $tmp1843) goto $l1882; else goto $l1847;
            $l1887:;
            if ($tmp1885 > $tmp1843) goto $l1882; else goto $l1847;
            $l1884:;
            int64_t $tmp1889 = i1839.value - $tmp1842;
            if ($tmp1844) goto $l1890; else goto $l1891;
            $l1890:;
            if ($tmp1889 >= -$tmp1843) goto $l1882; else goto $l1847;
            $l1891:;
            if ($tmp1889 > -$tmp1843) goto $l1882; else goto $l1847;
            $l1882:;
            i1839.value += $tmp1843;
            goto $l1845;
            $l1847:;
            (($fn1894) code1781->$class->vtable[3])(code1781, &$s1893);
            (($fn1895) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1781));
        }
        }
        (($fn1896) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) name1703)), ((panda$core$Object*) result1710));
    }
    }
    return result1710;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1899 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1897, &$s1898);
    panda$core$String* $tmp1902 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1899, &$s1900, &$s1901);
    panda$core$String* $tmp1905 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1902, &$s1903, &$s1904);
    panda$core$String* $tmp1908 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1905, &$s1906, &$s1907);
    panda$core$String* $tmp1911 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1908, &$s1909, &$s1910);
    panda$core$String* $tmp1914 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1911, &$s1912, &$s1913);
    return $tmp1914;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp1919;
    panda$core$String* result1959;
    panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1915.value) {
    {
        panda$core$Int64 $tmp1917 = (($fn1916) self->inlineContext->$class->vtable[7])(self->inlineContext);
        panda$core$Bit $tmp1918 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1917, ((panda$core$Int64) { 0 }));
        if ($tmp1918.value) {
        {
            panda$core$Int64 $tmp1920 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp1919, ((panda$core$Int64) { 0 }), $tmp1920, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1922 = $tmp1919.start.value;
            panda$core$Int64 i1921 = { $tmp1922 };
            int64_t $tmp1924 = $tmp1919.end.value;
            int64_t $tmp1925 = $tmp1919.step.value;
            bool $tmp1926 = $tmp1919.inclusive.value;
            bool $tmp1933 = $tmp1925 > 0;
            if ($tmp1933) goto $l1931; else goto $l1932;
            $l1931:;
            if ($tmp1926) goto $l1934; else goto $l1935;
            $l1934:;
            if ($tmp1922 <= $tmp1924) goto $l1927; else goto $l1929;
            $l1935:;
            if ($tmp1922 < $tmp1924) goto $l1927; else goto $l1929;
            $l1932:;
            if ($tmp1926) goto $l1936; else goto $l1937;
            $l1936:;
            if ($tmp1922 >= $tmp1924) goto $l1927; else goto $l1929;
            $l1937:;
            if ($tmp1922 > $tmp1924) goto $l1927; else goto $l1929;
            $l1927:;
            {
                panda$core$Object* $tmp1939 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1921);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1939)->name) }).value) {
                {
                    panda$core$Object* $tmp1941 = (($fn1940) self->inlineContext->$class->vtable[4])(self->inlineContext);
                    panda$core$Object* $tmp1943 = (($fn1942) ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1941)->argRefs->$class->vtable[2])(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1941)->argRefs, i1921);
                    return ((panda$core$String*) $tmp1943);
                }
                }
            }
            $l1930:;
            if ($tmp1933) goto $l1945; else goto $l1946;
            $l1945:;
            int64_t $tmp1947 = $tmp1924 - i1921.value;
            if ($tmp1926) goto $l1948; else goto $l1949;
            $l1948:;
            if ($tmp1947 >= $tmp1925) goto $l1944; else goto $l1929;
            $l1949:;
            if ($tmp1947 > $tmp1925) goto $l1944; else goto $l1929;
            $l1946:;
            int64_t $tmp1951 = i1921.value - $tmp1924;
            if ($tmp1926) goto $l1952; else goto $l1953;
            $l1952:;
            if ($tmp1951 >= -$tmp1925) goto $l1944; else goto $l1929;
            $l1953:;
            if ($tmp1951 > -$tmp1925) goto $l1944; else goto $l1929;
            $l1944:;
            i1921.value += $tmp1925;
            goto $l1927;
            $l1929:;
        }
        }
        panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1955, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1957);
        return $tmp1958;
    }
    }
    panda$core$Object* $tmp1961 = (($fn1960) self->variableNames->$class->vtable[3])(self->variableNames, ((panda$core$Object*) p_v));
    result1959 = ((panda$core$String*) $tmp1961);
    if (((panda$core$Bit) { result1959 == NULL }).value) {
    {
        panda$core$Int64 $tmp1962 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1962;
        panda$core$String* $tmp1964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1963, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1964, &$s1965);
        panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1966, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1967, &$s1968);
        result1959 = $tmp1969;
        (($fn1970) self->variableNames->$class->vtable[5])(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1959));
    }
    }
    panda$core$Int64 $tmp1972 = (($fn1971) self->inlineContext->$class->vtable[7])(self->inlineContext);
    panda$core$Bit $tmp1973 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1972, ((panda$core$Int64) { 0 }));
    if ($tmp1973.value) {
    {
        panda$core$Object* $tmp1975 = (($fn1974) self->inlineContext->$class->vtable[4])(self->inlineContext);
        panda$core$String* $tmp1976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1959, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1975)->varSuffix);
        result1959 = $tmp1976;
    }
    }
    return result1959;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1980;
    panda$core$String* $match$315441989;
    panda$collections$Iterator* p$Iter2093;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2105;
    panda$core$Bit $tmp1978 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1977);
    if ($tmp1978.value) {
    {
        return &$s1979;
    }
    }
    panda$core$MutableString* $tmp1981 = (panda$core$MutableString*) malloc(40);
    $tmp1981->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1981->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1981, &$s1983);
    result1980 = $tmp1981;
    panda$core$String* $tmp1985 = (($fn1984) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    (($fn1986) result1980->$class->vtable[3])(result1980, $tmp1985);
    (($fn1988) result1980->$class->vtable[3])(result1980, &$s1987);
    {
        $match$315441989 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1991 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s1990);
        if ($tmp1991.value) {
        {
            (($fn1993) result1980->$class->vtable[3])(result1980, &$s1992);
        }
        }
        else {
        panda$core$Bit $tmp1995 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s1994);
        if ($tmp1995.value) {
        {
            (($fn1997) result1980->$class->vtable[3])(result1980, &$s1996);
        }
        }
        else {
        panda$core$Bit $tmp1999 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s1998);
        if ($tmp1999.value) {
        {
            (($fn2001) result1980->$class->vtable[3])(result1980, &$s2000);
        }
        }
        else {
        panda$core$Bit $tmp2003 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2002);
        if ($tmp2003.value) {
        {
            (($fn2005) result1980->$class->vtable[3])(result1980, &$s2004);
        }
        }
        else {
        panda$core$Bit $tmp2007 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2006);
        if ($tmp2007.value) {
        {
            (($fn2009) result1980->$class->vtable[3])(result1980, &$s2008);
        }
        }
        else {
        panda$core$Bit $tmp2011 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2010);
        if ($tmp2011.value) {
        {
            (($fn2013) result1980->$class->vtable[3])(result1980, &$s2012);
        }
        }
        else {
        panda$core$Bit $tmp2015 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2014);
        if ($tmp2015.value) {
        {
            (($fn2017) result1980->$class->vtable[3])(result1980, &$s2016);
        }
        }
        else {
        panda$core$Bit $tmp2019 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2018);
        if ($tmp2019.value) {
        {
            (($fn2021) result1980->$class->vtable[3])(result1980, &$s2020);
        }
        }
        else {
        panda$core$Bit $tmp2023 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2022);
        if ($tmp2023.value) {
        {
            (($fn2025) result1980->$class->vtable[3])(result1980, &$s2024);
        }
        }
        else {
        panda$core$Bit $tmp2027 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2026);
        if ($tmp2027.value) {
        {
            (($fn2029) result1980->$class->vtable[3])(result1980, &$s2028);
        }
        }
        else {
        panda$core$Bit $tmp2031 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2030);
        if ($tmp2031.value) {
        {
            (($fn2033) result1980->$class->vtable[3])(result1980, &$s2032);
        }
        }
        else {
        panda$core$Bit $tmp2035 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2034);
        if ($tmp2035.value) {
        {
            (($fn2037) result1980->$class->vtable[3])(result1980, &$s2036);
        }
        }
        else {
        panda$core$Bit $tmp2039 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2038);
        if ($tmp2039.value) {
        {
            (($fn2041) result1980->$class->vtable[3])(result1980, &$s2040);
        }
        }
        else {
        panda$core$Bit $tmp2043 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2042);
        if ($tmp2043.value) {
        {
            (($fn2045) result1980->$class->vtable[3])(result1980, &$s2044);
        }
        }
        else {
        panda$core$Bit $tmp2047 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2046);
        if ($tmp2047.value) {
        {
            (($fn2049) result1980->$class->vtable[3])(result1980, &$s2048);
        }
        }
        else {
        panda$core$Bit $tmp2051 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2050);
        if ($tmp2051.value) {
        {
            (($fn2053) result1980->$class->vtable[3])(result1980, &$s2052);
        }
        }
        else {
        panda$core$Bit $tmp2055 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2054);
        if ($tmp2055.value) {
        {
            (($fn2057) result1980->$class->vtable[3])(result1980, &$s2056);
        }
        }
        else {
        panda$core$Bit $tmp2059 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2058);
        if ($tmp2059.value) {
        {
            (($fn2061) result1980->$class->vtable[3])(result1980, &$s2060);
        }
        }
        else {
        panda$core$Bit $tmp2063 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2062);
        if ($tmp2063.value) {
        {
            (($fn2065) result1980->$class->vtable[3])(result1980, &$s2064);
        }
        }
        else {
        panda$core$Bit $tmp2067 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2066);
        if ($tmp2067.value) {
        {
            (($fn2069) result1980->$class->vtable[3])(result1980, &$s2068);
        }
        }
        else {
        panda$core$Bit $tmp2071 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2070);
        if ($tmp2071.value) {
        {
            (($fn2073) result1980->$class->vtable[3])(result1980, &$s2072);
        }
        }
        else {
        panda$core$Bit $tmp2075 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2074);
        if ($tmp2075.value) {
        {
            (($fn2077) result1980->$class->vtable[3])(result1980, &$s2076);
        }
        }
        else {
        panda$core$Bit $tmp2079 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2078);
        if ($tmp2079.value) {
        {
            (($fn2081) result1980->$class->vtable[3])(result1980, &$s2080);
        }
        }
        else {
        panda$core$Bit $tmp2083 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2082);
        if ($tmp2083.value) {
        {
            (($fn2085) result1980->$class->vtable[3])(result1980, &$s2084);
        }
        }
        else {
        panda$core$Bit $tmp2087 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$315441989, &$s2086);
        if ($tmp2087.value) {
        {
            (($fn2089) result1980->$class->vtable[3])(result1980, &$s2088);
        }
        }
        else {
        {
            panda$core$String* $tmp2091 = (($fn2090) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            (($fn2092) result1980->$class->vtable[3])(result1980, $tmp2091);
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
        ITable* $tmp2094 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2094->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2094 = $tmp2094->next;
        }
        $fn2096 $tmp2095 = $tmp2094->methods[0];
        panda$collections$Iterator* $tmp2097 = $tmp2095(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2093 = $tmp2097;
        $l2098:;
        ITable* $tmp2100 = p$Iter2093->$class->itable;
        while ($tmp2100->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2100 = $tmp2100->next;
        }
        $fn2102 $tmp2101 = $tmp2100->methods[0];
        panda$core$Bit $tmp2103 = $tmp2101(p$Iter2093);
        panda$core$Bit $tmp2104 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2103);
        if (!$tmp2104.value) goto $l2099;
        {
            ITable* $tmp2106 = p$Iter2093->$class->itable;
            while ($tmp2106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2106 = $tmp2106->next;
            }
            $fn2108 $tmp2107 = $tmp2106->methods[1];
            panda$core$Object* $tmp2109 = $tmp2107(p$Iter2093);
            p2105 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2109);
            panda$core$String* $tmp2112 = (($fn2111) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p2105->type)->name);
            panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2110, $tmp2112);
            panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2113, &$s2114);
            (($fn2116) result1980->$class->vtable[3])(result1980, $tmp2115);
        }
        goto $l2098;
        $l2099:;
    }
    org$pandalanguage$pandac$Type* $tmp2117 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2119 = (($fn2118) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp2117));
    if ($tmp2119.value) {
    {
        (($fn2121) result1980->$class->vtable[3])(result1980, &$s2120);
        panda$core$String* $tmp2123 = (($fn2122) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        (($fn2124) result1980->$class->vtable[3])(result1980, $tmp2123);
    }
    }
    panda$core$String* $tmp2126 = (($fn2125) result1980->$class->vtable[0])(result1980);
    return $tmp2126;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $tmp2129 = (($fn2128) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2127, $tmp2129);
    panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2131);
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp2135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2134);
    return $tmp2135;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$334042136;
    {
        $match$334042136 = p_t->typeKind;
        panda$core$Bit $tmp2137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$334042136, ((panda$core$Int64) { 12 }));
        if ($tmp2137.value) {
        {
            return ((panda$core$Int64) { 10121 });
        }
        }
        else {
        panda$core$Bit $tmp2139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$334042136, ((panda$core$Int64) { 13 }));
        bool $tmp2138 = $tmp2139.value;
        if ($tmp2138) goto $l2140;
        panda$core$Bit $tmp2141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$334042136, ((panda$core$Int64) { 19 }));
        $tmp2138 = $tmp2141.value;
        $l2140:;
        panda$core$Bit $tmp2142 = { $tmp2138 };
        if ($tmp2142.value) {
        {
            return ((panda$core$Int64) { 10122 });
        }
        }
        else {
        panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$334042136, ((panda$core$Int64) { 20 }));
        if ($tmp2143.value) {
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
    panda$core$String* leftRef2144;
    panda$core$String* leftField2150;
    panda$core$String* start2161;
    panda$core$String* ifTrue2162;
    panda$core$String* ifFalse2165;
    panda$core$String* rightRef2180;
    panda$core$String* rightField2186;
    panda$core$String* truePred2197;
    panda$core$String* result2204;
    panda$core$String* $tmp2146 = (($fn2145) self->$class->vtable[66])(self, p_left, p_out);
    leftRef2144 = $tmp2146;
    org$pandalanguage$pandac$Type* $tmp2147 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2149 = (($fn2148) p_left->type->$class->vtable[4])(p_left->type, ((panda$core$Object*) $tmp2147));
    if ($tmp2149.value) {
    {
        panda$core$String* $tmp2152 = (($fn2151) self->$class->vtable[4])(self);
        leftField2150 = $tmp2152;
        panda$core$String* $tmp2154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2153, leftField2150);
        panda$core$String* $tmp2156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2154, &$s2155);
        panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, leftRef2144);
        panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2157, &$s2158);
        (($fn2160) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2159);
        leftRef2144 = leftField2150;
    }
    }
    start2161 = self->currentBlock;
    panda$core$String* $tmp2164 = (($fn2163) self->$class->vtable[5])(self);
    ifTrue2162 = $tmp2164;
    panda$core$String* $tmp2167 = (($fn2166) self->$class->vtable[5])(self);
    ifFalse2165 = $tmp2167;
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2168, leftRef2144);
    panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, &$s2170);
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2171, ifTrue2162);
    panda$core$String* $tmp2174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, &$s2173);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2174, ifFalse2165);
    panda$core$String* $tmp2177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2175, &$s2176);
    (($fn2178) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2177);
    (($fn2179) self->$class->vtable[6])(self, ifTrue2162, p_out);
    panda$core$String* $tmp2182 = (($fn2181) self->$class->vtable[66])(self, p_right, p_out);
    rightRef2180 = $tmp2182;
    org$pandalanguage$pandac$Type* $tmp2183 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2185 = (($fn2184) p_right->type->$class->vtable[4])(p_right->type, ((panda$core$Object*) $tmp2183));
    if ($tmp2185.value) {
    {
        panda$core$String* $tmp2188 = (($fn2187) self->$class->vtable[4])(self);
        rightField2186 = $tmp2188;
        panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2189, rightField2186);
        panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
        panda$core$String* $tmp2193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2192, rightRef2180);
        panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2193, &$s2194);
        (($fn2196) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2195);
        rightRef2180 = rightField2186;
    }
    }
    truePred2197 = self->currentBlock;
    panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2198, ifFalse2165);
    panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2199, &$s2200);
    (($fn2202) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2201);
    (($fn2203) self->$class->vtable[6])(self, ifFalse2165, p_out);
    panda$core$String* $tmp2206 = (($fn2205) self->$class->vtable[4])(self);
    result2204 = $tmp2206;
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2207, result2204);
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2208, &$s2209);
    panda$core$String* $tmp2211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2210, start2161);
    panda$core$String* $tmp2213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, &$s2212);
    panda$core$String* $tmp2214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, rightRef2180);
    panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2214, &$s2215);
    panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, truePred2197);
    panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2217, &$s2218);
    (($fn2220) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2219);
    return result2204;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2221;
    panda$core$String* leftField2227;
    panda$core$String* start2238;
    panda$core$String* ifTrue2239;
    panda$core$String* ifFalse2242;
    panda$core$String* rightRef2257;
    panda$core$String* rightField2263;
    panda$core$String* falsePred2274;
    panda$core$String* result2281;
    panda$core$String* $tmp2223 = (($fn2222) self->$class->vtable[66])(self, p_left, p_out);
    leftRef2221 = $tmp2223;
    org$pandalanguage$pandac$Type* $tmp2224 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2226 = (($fn2225) p_left->type->$class->vtable[4])(p_left->type, ((panda$core$Object*) $tmp2224));
    if ($tmp2226.value) {
    {
        panda$core$String* $tmp2229 = (($fn2228) self->$class->vtable[4])(self);
        leftField2227 = $tmp2229;
        panda$core$String* $tmp2231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2230, leftField2227);
        panda$core$String* $tmp2233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2231, &$s2232);
        panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2233, leftRef2221);
        panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2234, &$s2235);
        (($fn2237) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2236);
        leftRef2221 = leftField2227;
    }
    }
    start2238 = self->currentBlock;
    panda$core$String* $tmp2241 = (($fn2240) self->$class->vtable[5])(self);
    ifTrue2239 = $tmp2241;
    panda$core$String* $tmp2244 = (($fn2243) self->$class->vtable[5])(self);
    ifFalse2242 = $tmp2244;
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2245, leftRef2221);
    panda$core$String* $tmp2248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, &$s2247);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2248, ifTrue2239);
    panda$core$String* $tmp2251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, &$s2250);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2251, ifFalse2242);
    panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2253);
    (($fn2255) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2254);
    (($fn2256) self->$class->vtable[6])(self, ifFalse2242, p_out);
    panda$core$String* $tmp2259 = (($fn2258) self->$class->vtable[66])(self, p_right, p_out);
    rightRef2257 = $tmp2259;
    org$pandalanguage$pandac$Type* $tmp2260 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2262 = (($fn2261) p_right->type->$class->vtable[4])(p_right->type, ((panda$core$Object*) $tmp2260));
    if ($tmp2262.value) {
    {
        panda$core$String* $tmp2265 = (($fn2264) self->$class->vtable[4])(self);
        rightField2263 = $tmp2265;
        panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2266, rightField2263);
        panda$core$String* $tmp2269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2267, &$s2268);
        panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2269, rightRef2257);
        panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2270, &$s2271);
        (($fn2273) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2272);
        rightRef2257 = rightField2263;
    }
    }
    falsePred2274 = self->currentBlock;
    panda$core$String* $tmp2276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2275, ifTrue2239);
    panda$core$String* $tmp2278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2276, &$s2277);
    (($fn2279) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2278);
    (($fn2280) self->$class->vtable[6])(self, ifTrue2239, p_out);
    panda$core$String* $tmp2283 = (($fn2282) self->$class->vtable[4])(self);
    result2281 = $tmp2283;
    panda$core$String* $tmp2285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2284, result2281);
    panda$core$String* $tmp2287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2285, &$s2286);
    panda$core$String* $tmp2288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2287, start2238);
    panda$core$String* $tmp2290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2289);
    panda$core$String* $tmp2291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, rightRef2257);
    panda$core$String* $tmp2293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2291, &$s2292);
    panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2293, falsePred2274);
    panda$core$String* $tmp2296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2294, &$s2295);
    (($fn2297) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2296);
    return result2281;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp2298;
    panda$core$Int64 $match$360772299;
    panda$core$Int64 $match$361372301;
    panda$core$Int64 $match$374042339;
    panda$core$Int64 $match$386682377;
    panda$core$String* result2398;
    {
        $match$360772299 = p_cl;
        panda$core$Bit $tmp2300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$360772299, ((panda$core$Int64) { 10121 }));
        if ($tmp2300.value) {
        {
            {
                $match$361372301 = p_op;
                panda$core$Bit $tmp2302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 51 }));
                if ($tmp2302.value) {
                {
                    llvmOp2298 = &$s2303;
                }
                }
                else {
                panda$core$Bit $tmp2304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 52 }));
                if ($tmp2304.value) {
                {
                    llvmOp2298 = &$s2305;
                }
                }
                else {
                panda$core$Bit $tmp2306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 53 }));
                if ($tmp2306.value) {
                {
                    llvmOp2298 = &$s2307;
                }
                }
                else {
                panda$core$Bit $tmp2308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 55 }));
                if ($tmp2308.value) {
                {
                    llvmOp2298 = &$s2309;
                }
                }
                else {
                panda$core$Bit $tmp2310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 56 }));
                if ($tmp2310.value) {
                {
                    llvmOp2298 = &$s2311;
                }
                }
                else {
                panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 72 }));
                if ($tmp2312.value) {
                {
                    llvmOp2298 = &$s2313;
                }
                }
                else {
                panda$core$Bit $tmp2314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 1 }));
                if ($tmp2314.value) {
                {
                    llvmOp2298 = &$s2315;
                }
                }
                else {
                panda$core$Bit $tmp2316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 67 }));
                if ($tmp2316.value) {
                {
                    llvmOp2298 = &$s2317;
                }
                }
                else {
                panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 69 }));
                if ($tmp2318.value) {
                {
                    llvmOp2298 = &$s2319;
                }
                }
                else {
                panda$core$Bit $tmp2321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 70 }));
                bool $tmp2320 = $tmp2321.value;
                if ($tmp2320) goto $l2322;
                panda$core$Bit $tmp2323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 71 }));
                $tmp2320 = $tmp2323.value;
                $l2322:;
                panda$core$Bit $tmp2324 = { $tmp2320 };
                if ($tmp2324.value) {
                {
                    llvmOp2298 = &$s2325;
                }
                }
                else {
                panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 58 }));
                if ($tmp2326.value) {
                {
                    llvmOp2298 = &$s2327;
                }
                }
                else {
                panda$core$Bit $tmp2328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 59 }));
                if ($tmp2328.value) {
                {
                    llvmOp2298 = &$s2329;
                }
                }
                else {
                panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 63 }));
                if ($tmp2330.value) {
                {
                    llvmOp2298 = &$s2331;
                }
                }
                else {
                panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 62 }));
                if ($tmp2332.value) {
                {
                    llvmOp2298 = &$s2333;
                }
                }
                else {
                panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 65 }));
                if ($tmp2334.value) {
                {
                    llvmOp2298 = &$s2335;
                }
                }
                else {
                panda$core$Bit $tmp2336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$361372301, ((panda$core$Int64) { 64 }));
                if ($tmp2336.value) {
                {
                    llvmOp2298 = &$s2337;
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
        panda$core$Bit $tmp2338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$360772299, ((panda$core$Int64) { 10122 }));
        if ($tmp2338.value) {
        {
            {
                $match$374042339 = p_op;
                panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 51 }));
                if ($tmp2340.value) {
                {
                    llvmOp2298 = &$s2341;
                }
                }
                else {
                panda$core$Bit $tmp2342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 52 }));
                if ($tmp2342.value) {
                {
                    llvmOp2298 = &$s2343;
                }
                }
                else {
                panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 53 }));
                if ($tmp2344.value) {
                {
                    llvmOp2298 = &$s2345;
                }
                }
                else {
                panda$core$Bit $tmp2346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 55 }));
                if ($tmp2346.value) {
                {
                    llvmOp2298 = &$s2347;
                }
                }
                else {
                panda$core$Bit $tmp2348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 56 }));
                if ($tmp2348.value) {
                {
                    llvmOp2298 = &$s2349;
                }
                }
                else {
                panda$core$Bit $tmp2350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 72 }));
                if ($tmp2350.value) {
                {
                    llvmOp2298 = &$s2351;
                }
                }
                else {
                panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 1 }));
                if ($tmp2352.value) {
                {
                    llvmOp2298 = &$s2353;
                }
                }
                else {
                panda$core$Bit $tmp2354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 67 }));
                if ($tmp2354.value) {
                {
                    llvmOp2298 = &$s2355;
                }
                }
                else {
                panda$core$Bit $tmp2356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 69 }));
                if ($tmp2356.value) {
                {
                    llvmOp2298 = &$s2357;
                }
                }
                else {
                panda$core$Bit $tmp2359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 70 }));
                bool $tmp2358 = $tmp2359.value;
                if ($tmp2358) goto $l2360;
                panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 71 }));
                $tmp2358 = $tmp2361.value;
                $l2360:;
                panda$core$Bit $tmp2362 = { $tmp2358 };
                if ($tmp2362.value) {
                {
                    llvmOp2298 = &$s2363;
                }
                }
                else {
                panda$core$Bit $tmp2364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 58 }));
                if ($tmp2364.value) {
                {
                    llvmOp2298 = &$s2365;
                }
                }
                else {
                panda$core$Bit $tmp2366 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 59 }));
                if ($tmp2366.value) {
                {
                    llvmOp2298 = &$s2367;
                }
                }
                else {
                panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 63 }));
                if ($tmp2368.value) {
                {
                    llvmOp2298 = &$s2369;
                }
                }
                else {
                panda$core$Bit $tmp2370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 62 }));
                if ($tmp2370.value) {
                {
                    llvmOp2298 = &$s2371;
                }
                }
                else {
                panda$core$Bit $tmp2372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 65 }));
                if ($tmp2372.value) {
                {
                    llvmOp2298 = &$s2373;
                }
                }
                else {
                panda$core$Bit $tmp2374 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$374042339, ((panda$core$Int64) { 64 }));
                if ($tmp2374.value) {
                {
                    llvmOp2298 = &$s2375;
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
        panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$360772299, ((panda$core$Int64) { 10123 }));
        if ($tmp2376.value) {
        {
            {
                $match$386682377 = p_op;
                panda$core$Bit $tmp2378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386682377, ((panda$core$Int64) { 51 }));
                if ($tmp2378.value) {
                {
                    llvmOp2298 = &$s2379;
                }
                }
                else {
                panda$core$Bit $tmp2380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386682377, ((panda$core$Int64) { 52 }));
                if ($tmp2380.value) {
                {
                    llvmOp2298 = &$s2381;
                }
                }
                else {
                panda$core$Bit $tmp2382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386682377, ((panda$core$Int64) { 53 }));
                if ($tmp2382.value) {
                {
                    llvmOp2298 = &$s2383;
                }
                }
                else {
                panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386682377, ((panda$core$Int64) { 55 }));
                if ($tmp2384.value) {
                {
                    llvmOp2298 = &$s2385;
                }
                }
                else {
                panda$core$Bit $tmp2386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386682377, ((panda$core$Int64) { 58 }));
                if ($tmp2386.value) {
                {
                    llvmOp2298 = &$s2387;
                }
                }
                else {
                panda$core$Bit $tmp2388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386682377, ((panda$core$Int64) { 59 }));
                if ($tmp2388.value) {
                {
                    llvmOp2298 = &$s2389;
                }
                }
                else {
                panda$core$Bit $tmp2390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386682377, ((panda$core$Int64) { 63 }));
                if ($tmp2390.value) {
                {
                    llvmOp2298 = &$s2391;
                }
                }
                else {
                panda$core$Bit $tmp2392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386682377, ((panda$core$Int64) { 62 }));
                if ($tmp2392.value) {
                {
                    llvmOp2298 = &$s2393;
                }
                }
                else {
                panda$core$Bit $tmp2394 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386682377, ((panda$core$Int64) { 65 }));
                if ($tmp2394.value) {
                {
                    llvmOp2298 = &$s2395;
                }
                }
                else {
                panda$core$Bit $tmp2396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$386682377, ((panda$core$Int64) { 64 }));
                if ($tmp2396.value) {
                {
                    llvmOp2298 = &$s2397;
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
    panda$core$String* $tmp2400 = (($fn2399) self->$class->vtable[4])(self);
    result2398 = $tmp2400;
    panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2401, result2398);
    panda$core$String* $tmp2404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2402, &$s2403);
    panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2404, llvmOp2298);
    panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2405, &$s2406);
    panda$core$String* $tmp2408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, p_leftRef);
    panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2408, &$s2409);
    panda$core$String* $tmp2411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2410, p_rightRef);
    panda$core$String* $tmp2413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2411, &$s2412);
    (($fn2414) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2413);
    return result2398;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2415;
    panda$core$String* rightRef2418;
    panda$core$String* raw2421;
    panda$core$String* result2435;
    panda$core$String* $tmp2417 = (($fn2416) self->$class->vtable[67])(self, p_left, p_out);
    leftRef2415 = $tmp2417;
    panda$core$String* $tmp2420 = (($fn2419) self->$class->vtable[66])(self, p_right, p_out);
    rightRef2418 = $tmp2420;
    panda$core$String* $tmp2423 = (($fn2422) self->$class->vtable[4])(self);
    raw2421 = $tmp2423;
    panda$core$String* $tmp2425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2424, raw2421);
    panda$core$String* $tmp2427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2425, &$s2426);
    panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, leftRef2415);
    panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, &$s2429);
    panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2430, rightRef2418);
    panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2431, &$s2432);
    (($fn2434) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2433);
    panda$core$String* $tmp2437 = (($fn2436) self->$class->vtable[4])(self);
    result2435 = $tmp2437;
    panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2438, result2435);
    panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2439, &$s2440);
    panda$core$String* $tmp2442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2441, raw2421);
    panda$core$String* $tmp2444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2442, &$s2443);
    (($fn2445) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2444);
    return result2435;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2446;
    panda$core$String* rightRef2449;
    panda$core$String* raw2452;
    panda$core$String* result2466;
    panda$core$String* $tmp2448 = (($fn2447) self->$class->vtable[67])(self, p_left, p_out);
    leftRef2446 = $tmp2448;
    panda$core$String* $tmp2451 = (($fn2450) self->$class->vtable[66])(self, p_right, p_out);
    rightRef2449 = $tmp2451;
    panda$core$String* $tmp2454 = (($fn2453) self->$class->vtable[4])(self);
    raw2452 = $tmp2454;
    panda$core$String* $tmp2456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2455, raw2452);
    panda$core$String* $tmp2458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2456, &$s2457);
    panda$core$String* $tmp2459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2458, leftRef2446);
    panda$core$String* $tmp2461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2459, &$s2460);
    panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2461, rightRef2449);
    panda$core$String* $tmp2464 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2462, &$s2463);
    (($fn2465) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2464);
    panda$core$String* $tmp2468 = (($fn2467) self->$class->vtable[4])(self);
    result2466 = $tmp2468;
    panda$core$String* $tmp2470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2469, result2466);
    panda$core$String* $tmp2472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2470, &$s2471);
    panda$core$String* $tmp2473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2472, raw2452);
    panda$core$String* $tmp2475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2473, &$s2474);
    (($fn2476) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2475);
    return result2466;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$406142477;
    panda$core$String* leftRef2490;
    panda$core$String* rightRef2493;
    {
        $match$406142477 = p_op;
        panda$core$Bit $tmp2478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406142477, ((panda$core$Int64) { 66 }));
        if ($tmp2478.value) {
        {
            panda$core$String* $tmp2480 = (($fn2479) self->$class->vtable[33])(self, p_left, p_right, p_out);
            return $tmp2480;
        }
        }
        else {
        panda$core$Bit $tmp2481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406142477, ((panda$core$Int64) { 68 }));
        if ($tmp2481.value) {
        {
            panda$core$String* $tmp2483 = (($fn2482) self->$class->vtable[34])(self, p_left, p_right, p_out);
            return $tmp2483;
        }
        }
        else {
        panda$core$Bit $tmp2484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406142477, ((panda$core$Int64) { 60 }));
        if ($tmp2484.value) {
        {
            panda$core$String* $tmp2486 = (($fn2485) self->$class->vtable[36])(self, p_left, p_right, p_out);
            return $tmp2486;
        }
        }
        else {
        panda$core$Bit $tmp2487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$406142477, ((panda$core$Int64) { 61 }));
        if ($tmp2487.value) {
        {
            panda$core$String* $tmp2489 = (($fn2488) self->$class->vtable[37])(self, p_left, p_right, p_out);
            return $tmp2489;
        }
        }
        else {
        {
            panda$core$String* $tmp2492 = (($fn2491) self->$class->vtable[67])(self, p_left, p_out);
            leftRef2490 = $tmp2492;
            panda$core$String* $tmp2495 = (($fn2494) self->$class->vtable[66])(self, p_right, p_out);
            rightRef2493 = $tmp2495;
            panda$core$Int64 $tmp2497 = (($fn2496) self->$class->vtable[32])(self, p_left->type);
            panda$core$String* $tmp2499 = (($fn2498) self->$class->vtable[35])(self, $tmp2497, leftRef2490, p_op, rightRef2493, p_out);
            return $tmp2499;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp2500 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2501 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2503 = (($fn2502) self->$class->vtable[38])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2500), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp2501), p_out);
    return $tmp2503;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s2504;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2505;
    panda$core$Int64 index2508;
    panda$collections$ListView* vtable2509;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp2512;
    panda$core$String* classPtrPtr2550;
    panda$core$String* classPtr2570;
    panda$core$String* cast2581;
    panda$core$String* ptr2595;
    panda$core$String* load2620;
    panda$core$String* result2631;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2507 = (($fn2506) self->$class->vtable[26])(self, p_m->owner);
    cc2505 = $tmp2507;
    index2508 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2511 = (($fn2510) self->compiler->$class->vtable[21])(self->compiler, p_m->owner);
    vtable2509 = $tmp2511;
    ITable* $tmp2513 = ((panda$collections$CollectionView*) vtable2509)->$class->itable;
    while ($tmp2513->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2513 = $tmp2513->next;
    }
    $fn2515 $tmp2514 = $tmp2513->methods[0];
    panda$core$Int64 $tmp2516 = $tmp2514(((panda$collections$CollectionView*) vtable2509));
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2512, ((panda$core$Int64) { 0 }), $tmp2516, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2518 = $tmp2512.start.value;
    panda$core$Int64 i2517 = { $tmp2518 };
    int64_t $tmp2520 = $tmp2512.end.value;
    int64_t $tmp2521 = $tmp2512.step.value;
    bool $tmp2522 = $tmp2512.inclusive.value;
    bool $tmp2529 = $tmp2521 > 0;
    if ($tmp2529) goto $l2527; else goto $l2528;
    $l2527:;
    if ($tmp2522) goto $l2530; else goto $l2531;
    $l2530:;
    if ($tmp2518 <= $tmp2520) goto $l2523; else goto $l2525;
    $l2531:;
    if ($tmp2518 < $tmp2520) goto $l2523; else goto $l2525;
    $l2528:;
    if ($tmp2522) goto $l2532; else goto $l2533;
    $l2532:;
    if ($tmp2518 >= $tmp2520) goto $l2523; else goto $l2525;
    $l2533:;
    if ($tmp2518 > $tmp2520) goto $l2523; else goto $l2525;
    $l2523:;
    {
        ITable* $tmp2535 = vtable2509->$class->itable;
        while ($tmp2535->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2535 = $tmp2535->next;
        }
        $fn2537 $tmp2536 = $tmp2535->methods[0];
        panda$core$Object* $tmp2538 = $tmp2536(vtable2509, i2517);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2538)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2508 = i2517;
            goto $l2525;
        }
        }
    }
    $l2526:;
    if ($tmp2529) goto $l2540; else goto $l2541;
    $l2540:;
    int64_t $tmp2542 = $tmp2520 - i2517.value;
    if ($tmp2522) goto $l2543; else goto $l2544;
    $l2543:;
    if ($tmp2542 >= $tmp2521) goto $l2539; else goto $l2525;
    $l2544:;
    if ($tmp2542 > $tmp2521) goto $l2539; else goto $l2525;
    $l2541:;
    int64_t $tmp2546 = i2517.value - $tmp2520;
    if ($tmp2522) goto $l2547; else goto $l2548;
    $l2547:;
    if ($tmp2546 >= -$tmp2521) goto $l2539; else goto $l2525;
    $l2548:;
    if ($tmp2546 > -$tmp2521) goto $l2539; else goto $l2525;
    $l2539:;
    i2517.value += $tmp2521;
    goto $l2523;
    $l2525:;
    panda$core$String* $tmp2552 = (($fn2551) self->$class->vtable[4])(self);
    classPtrPtr2550 = $tmp2552;
    panda$core$String* $tmp2554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2553, classPtrPtr2550);
    panda$core$String* $tmp2556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2554, &$s2555);
    org$pandalanguage$pandac$Type* $tmp2558 = (($fn2557) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp2560 = (($fn2559) self->$class->vtable[14])(self, $tmp2558);
    panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2556, $tmp2560);
    panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, &$s2562);
    panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2564, p_target);
    panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, &$s2566);
    panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, $tmp2567);
    (($fn2569) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2568);
    panda$core$String* $tmp2572 = (($fn2571) self->$class->vtable[4])(self);
    classPtr2570 = $tmp2572;
    panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2573, classPtr2570);
    panda$core$String* $tmp2576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2574, &$s2575);
    panda$core$String* $tmp2577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2576, classPtrPtr2550);
    panda$core$String* $tmp2579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2577, &$s2578);
    (($fn2580) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2579);
    panda$core$String* $tmp2583 = (($fn2582) self->$class->vtable[4])(self);
    cast2581 = $tmp2583;
    panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2584, cast2581);
    panda$core$String* $tmp2587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2585, &$s2586);
    panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2587, classPtr2570);
    panda$core$String* $tmp2590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2589);
    panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2590, cc2505->type);
    panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
    (($fn2594) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2593);
    panda$core$String* $tmp2597 = (($fn2596) self->$class->vtable[4])(self);
    ptr2595 = $tmp2597;
    panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2598, ptr2595);
    panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2599, &$s2600);
    panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2601, cc2505->type);
    panda$core$String* $tmp2604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2603);
    panda$core$String* $tmp2605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, cc2505->type);
    panda$core$String* $tmp2607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2605, &$s2606);
    panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2607, cast2581);
    panda$core$String* $tmp2610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2608, &$s2609);
    panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2611, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, &$s2613);
    panda$core$String* $tmp2615 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2614, ((panda$core$Object*) wrap_panda$core$Int64(index2508)));
    panda$core$String* $tmp2617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2615, &$s2616);
    panda$core$String* $tmp2618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2610, $tmp2617);
    (($fn2619) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2618);
    panda$core$String* $tmp2622 = (($fn2621) self->$class->vtable[4])(self);
    load2620 = $tmp2622;
    panda$core$String* $tmp2624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2623, load2620);
    panda$core$String* $tmp2626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2624, &$s2625);
    panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2626, ptr2595);
    panda$core$String* $tmp2629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2628);
    (($fn2630) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2629);
    panda$core$String* $tmp2633 = (($fn2632) self->$class->vtable[4])(self);
    result2631 = $tmp2633;
    panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2634, result2631);
    panda$core$String* $tmp2637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2635, &$s2636);
    panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2637, load2620);
    panda$core$String* $tmp2640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2638, &$s2639);
    org$pandalanguage$pandac$Type* $tmp2642 = (($fn2641) self->compiler->$class->vtable[47])(self->compiler, p_m);
    panda$core$String* $tmp2644 = (($fn2643) self->$class->vtable[15])(self, $tmp2642);
    panda$core$String* $tmp2645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2640, $tmp2644);
    (($fn2646) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2645);
    return result2631;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2647;
    panda$core$String* entry2652;
    panda$core$String* classPointer2661;
    panda$core$String* loadedClass2688;
    panda$core$String* classType2691;
    panda$core$String* itableFirst2709;
    panda$core$String* next2735;
    panda$core$String* leavingEntryLabel2743;
    panda$core$String* itableNext2746;
    panda$core$String* itablePtrPtr2751;
    panda$core$String* fail2754;
    panda$core$String* itablePtr2776;
    panda$core$String* itableClassPtr2787;
    panda$core$String* itableClass2804;
    panda$core$String* test2821;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2824;
    panda$core$String* success2849;
    panda$core$Int64 index2884;
    panda$collections$ListView* vtable2885;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp2888;
    panda$core$String* methodPtrPtr2936;
    panda$core$String* cast2956;
    panda$core$String* methodPtr2970;
    org$pandalanguage$pandac$Type* $tmp2649 = (($fn2648) self->compiler->$class->vtable[47])(self->compiler, p_m);
    panda$core$String* $tmp2651 = (($fn2650) self->$class->vtable[15])(self, $tmp2649);
    methodType2647 = $tmp2651;
    panda$core$String* $tmp2654 = (($fn2653) self->$class->vtable[5])(self);
    entry2652 = $tmp2654;
    panda$core$String* $tmp2656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2655, entry2652);
    panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, &$s2657);
    (($fn2659) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2658);
    (($fn2660) self->$class->vtable[6])(self, entry2652, p_out);
    panda$core$String* $tmp2663 = (($fn2662) self->$class->vtable[4])(self);
    classPointer2661 = $tmp2663;
    panda$core$String* $tmp2665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2664, classPointer2661);
    panda$core$String* $tmp2667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2665, &$s2666);
    org$pandalanguage$pandac$Type* $tmp2669 = (($fn2668) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp2671 = (($fn2670) self->$class->vtable[14])(self, $tmp2669);
    panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2667, $tmp2671);
    panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2673);
    panda$core$String* $tmp2676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2675, p_target);
    panda$core$String* $tmp2678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2676, &$s2677);
    panda$core$String* $tmp2680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2678, &$s2679);
    panda$core$String* $tmp2682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2681);
    panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2682, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, &$s2684);
    panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, $tmp2685);
    (($fn2687) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2686);
    panda$core$String* $tmp2690 = (($fn2689) self->$class->vtable[4])(self);
    loadedClass2688 = $tmp2690;
    org$pandalanguage$pandac$Type* $tmp2692 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2694 = (($fn2693) self->$class->vtable[14])(self, $tmp2692);
    classType2691 = $tmp2694;
    panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2695, loadedClass2688);
    panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2696, &$s2697);
    panda$core$String* $tmp2699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2698, classType2691);
    panda$core$String* $tmp2701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2699, &$s2700);
    panda$core$String* $tmp2702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, classType2691);
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, &$s2703);
    panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, classPointer2661);
    panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2705, &$s2706);
    (($fn2708) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2707);
    panda$core$String* $tmp2711 = (($fn2710) self->$class->vtable[4])(self);
    itableFirst2709 = $tmp2711;
    panda$core$String* $tmp2713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2712, itableFirst2709);
    panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2713, &$s2714);
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2715, classType2691);
    panda$core$String* $tmp2718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, &$s2717);
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2718, classType2691);
    panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, &$s2720);
    panda$core$String* $tmp2723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2722, loadedClass2688);
    panda$core$String* $tmp2725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2723, &$s2724);
    panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2725, &$s2726);
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, &$s2728);
    panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2729, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2731);
    panda$core$String* $tmp2733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2721, $tmp2732);
    (($fn2734) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2733);
    panda$core$String* $tmp2737 = (($fn2736) self->$class->vtable[5])(self);
    next2735 = $tmp2737;
    panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2738, next2735);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
    (($fn2742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2741);
    leavingEntryLabel2743 = self->currentBlock;
    (($fn2744) self->$class->vtable[6])(self, next2735, p_out);
    panda$core$Int64 $tmp2745 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2745;
    panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2747, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2748, &$s2749);
    itableNext2746 = $tmp2750;
    panda$core$String* $tmp2753 = (($fn2752) self->$class->vtable[4])(self);
    itablePtrPtr2751 = $tmp2753;
    panda$core$String* $tmp2756 = (($fn2755) self->$class->vtable[5])(self);
    fail2754 = $tmp2756;
    panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2757, itablePtrPtr2751);
    panda$core$String* $tmp2760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2758, &$s2759);
    panda$core$String* $tmp2761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2760, itableFirst2709);
    panda$core$String* $tmp2763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2761, &$s2762);
    panda$core$String* $tmp2764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2763, leavingEntryLabel2743);
    panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2764, &$s2765);
    panda$core$String* $tmp2768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2767, itableNext2746);
    panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2768, &$s2769);
    panda$core$String* $tmp2771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, fail2754);
    panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2771, &$s2772);
    panda$core$String* $tmp2774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, $tmp2773);
    (($fn2775) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2774);
    panda$core$String* $tmp2778 = (($fn2777) self->$class->vtable[4])(self);
    itablePtr2776 = $tmp2778;
    panda$core$String* $tmp2780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2779, itablePtr2776);
    panda$core$String* $tmp2782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2780, &$s2781);
    panda$core$String* $tmp2783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, itablePtrPtr2751);
    panda$core$String* $tmp2785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, &$s2784);
    (($fn2786) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2785);
    panda$core$String* $tmp2789 = (($fn2788) self->$class->vtable[4])(self);
    itableClassPtr2787 = $tmp2789;
    panda$core$String* $tmp2791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2790, itableClassPtr2787);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2791, &$s2792);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2794, itablePtr2776);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, &$s2796);
    panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, &$s2798);
    panda$core$String* $tmp2801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, &$s2800);
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, $tmp2801);
    (($fn2803) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2802);
    panda$core$String* $tmp2806 = (($fn2805) self->$class->vtable[4])(self);
    itableClass2804 = $tmp2806;
    panda$core$String* $tmp2808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2807, itableClass2804);
    panda$core$String* $tmp2810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, &$s2809);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2810, classType2691);
    panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, &$s2812);
    panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2813, classType2691);
    panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, &$s2815);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2816, itableClassPtr2787);
    panda$core$String* $tmp2819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2817, &$s2818);
    (($fn2820) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2819);
    panda$core$String* $tmp2823 = (($fn2822) self->$class->vtable[4])(self);
    test2821 = $tmp2823;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2826 = (($fn2825) self->$class->vtable[26])(self, p_m->owner);
    intfCC2824 = $tmp2826;
    panda$core$String* $tmp2828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2827, test2821);
    panda$core$String* $tmp2830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2828, &$s2829);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2830, classType2691);
    panda$core$String* $tmp2833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2831, &$s2832);
    panda$core$String* $tmp2834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2833, intfCC2824->type);
    panda$core$String* $tmp2836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, &$s2835);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, intfCC2824->name);
    panda$core$String* $tmp2839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2837, &$s2838);
    panda$core$String* $tmp2841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2840, classType2691);
    panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2842);
    panda$core$String* $tmp2844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2843, itableClass2804);
    panda$core$String* $tmp2846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2844, &$s2845);
    panda$core$String* $tmp2847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, $tmp2846);
    (($fn2848) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2847);
    panda$core$String* $tmp2851 = (($fn2850) self->$class->vtable[5])(self);
    success2849 = $tmp2851;
    panda$core$String* $tmp2853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2852, test2821);
    panda$core$String* $tmp2855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2853, &$s2854);
    panda$core$String* $tmp2856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2855, success2849);
    panda$core$String* $tmp2858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2856, &$s2857);
    panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2858, fail2754);
    panda$core$String* $tmp2861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2859, &$s2860);
    (($fn2862) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2861);
    (($fn2863) self->$class->vtable[6])(self, fail2754, p_out);
    panda$core$String* $tmp2865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2864, itableNext2746);
    panda$core$String* $tmp2867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2865, &$s2866);
    panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, itablePtr2776);
    panda$core$String* $tmp2870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2868, &$s2869);
    panda$core$String* $tmp2873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2871, &$s2872);
    panda$core$String* $tmp2875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2873, &$s2874);
    panda$core$String* $tmp2876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2870, $tmp2875);
    (($fn2877) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2876);
    panda$core$String* $tmp2879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2878, next2735);
    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2879, &$s2880);
    (($fn2882) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2881);
    (($fn2883) self->$class->vtable[6])(self, success2849, p_out);
    index2884 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2887 = (($fn2886) self->compiler->$class->vtable[21])(self->compiler, p_m->owner);
    vtable2885 = $tmp2887;
    ITable* $tmp2889 = ((panda$collections$CollectionView*) vtable2885)->$class->itable;
    while ($tmp2889->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2889 = $tmp2889->next;
    }
    $fn2891 $tmp2890 = $tmp2889->methods[0];
    panda$core$Int64 $tmp2892 = $tmp2890(((panda$collections$CollectionView*) vtable2885));
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp2888, ((panda$core$Int64) { 0 }), $tmp2892, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2894 = $tmp2888.start.value;
    panda$core$Int64 i2893 = { $tmp2894 };
    int64_t $tmp2896 = $tmp2888.end.value;
    int64_t $tmp2897 = $tmp2888.step.value;
    bool $tmp2898 = $tmp2888.inclusive.value;
    bool $tmp2905 = $tmp2897 > 0;
    if ($tmp2905) goto $l2903; else goto $l2904;
    $l2903:;
    if ($tmp2898) goto $l2906; else goto $l2907;
    $l2906:;
    if ($tmp2894 <= $tmp2896) goto $l2899; else goto $l2901;
    $l2907:;
    if ($tmp2894 < $tmp2896) goto $l2899; else goto $l2901;
    $l2904:;
    if ($tmp2898) goto $l2908; else goto $l2909;
    $l2908:;
    if ($tmp2894 >= $tmp2896) goto $l2899; else goto $l2901;
    $l2909:;
    if ($tmp2894 > $tmp2896) goto $l2899; else goto $l2901;
    $l2899:;
    {
        ITable* $tmp2911 = vtable2885->$class->itable;
        while ($tmp2911->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2911 = $tmp2911->next;
        }
        $fn2913 $tmp2912 = $tmp2911->methods[0];
        panda$core$Object* $tmp2914 = $tmp2912(vtable2885, i2893);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2914)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2884 = i2893;
            goto $l2901;
        }
        }
    }
    $l2902:;
    if ($tmp2905) goto $l2916; else goto $l2917;
    $l2916:;
    int64_t $tmp2918 = $tmp2896 - i2893.value;
    if ($tmp2898) goto $l2919; else goto $l2920;
    $l2919:;
    if ($tmp2918 >= $tmp2897) goto $l2915; else goto $l2901;
    $l2920:;
    if ($tmp2918 > $tmp2897) goto $l2915; else goto $l2901;
    $l2917:;
    int64_t $tmp2922 = i2893.value - $tmp2896;
    if ($tmp2898) goto $l2923; else goto $l2924;
    $l2923:;
    if ($tmp2922 >= -$tmp2897) goto $l2915; else goto $l2901;
    $l2924:;
    if ($tmp2922 > -$tmp2897) goto $l2915; else goto $l2901;
    $l2915:;
    i2893.value += $tmp2897;
    goto $l2899;
    $l2901:;
    org$pandalanguage$pandac$Type* $tmp2926 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2928 = (($fn2927) self->compiler->$class->vtable[14])(self->compiler, $tmp2926);
    panda$collections$ListView* $tmp2930 = (($fn2929) self->compiler->$class->vtable[21])(self->compiler, $tmp2928);
    ITable* $tmp2931 = ((panda$collections$CollectionView*) $tmp2930)->$class->itable;
    while ($tmp2931->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2931 = $tmp2931->next;
    }
    $fn2933 $tmp2932 = $tmp2931->methods[0];
    panda$core$Int64 $tmp2934 = $tmp2932(((panda$collections$CollectionView*) $tmp2930));
    panda$core$Int64 $tmp2935 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2884, $tmp2934);
    index2884 = $tmp2935;
    panda$core$String* $tmp2938 = (($fn2937) self->$class->vtable[4])(self);
    methodPtrPtr2936 = $tmp2938;
    panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2939, methodPtrPtr2936);
    panda$core$String* $tmp2942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2940, &$s2941);
    panda$core$String* $tmp2944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2943, itablePtr2776);
    panda$core$String* $tmp2946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2944, &$s2945);
    panda$core$String* $tmp2948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2946, &$s2947);
    panda$core$String* $tmp2950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2948, &$s2949);
    panda$core$String* $tmp2951 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2950, ((panda$core$Object*) wrap_panda$core$Int64(index2884)));
    panda$core$String* $tmp2953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2951, &$s2952);
    panda$core$String* $tmp2954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2942, $tmp2953);
    (($fn2955) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2954);
    panda$core$String* $tmp2958 = (($fn2957) self->$class->vtable[4])(self);
    cast2956 = $tmp2958;
    panda$core$String* $tmp2960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2959, cast2956);
    panda$core$String* $tmp2962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2960, &$s2961);
    panda$core$String* $tmp2963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2962, methodPtrPtr2936);
    panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2964);
    panda$core$String* $tmp2966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2965, methodType2647);
    panda$core$String* $tmp2968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2966, &$s2967);
    (($fn2969) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2968);
    panda$core$String* $tmp2972 = (($fn2971) self->$class->vtable[4])(self);
    methodPtr2970 = $tmp2972;
    panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2973, methodPtr2970);
    panda$core$String* $tmp2976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2974, &$s2975);
    panda$core$String* $tmp2977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2976, methodType2647);
    panda$core$String* $tmp2979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2977, &$s2978);
    panda$core$String* $tmp2980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2979, methodType2647);
    panda$core$String* $tmp2982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2980, &$s2981);
    panda$core$String* $tmp2983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2982, cast2956);
    panda$core$String* $tmp2985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2983, &$s2984);
    (($fn2986) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2985);
    return methodPtr2970;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2988 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2987 = $tmp2988.value;
    if (!$tmp2987) goto $l2989;
    panda$core$Bit $tmp2991 = (($fn2990) p_m->$class->vtable[3])(p_m);
    $tmp2987 = $tmp2991.value;
    $l2989:;
    panda$core$Bit $tmp2992 = { $tmp2987 };
    if ($tmp2992.value) {
    {
        panda$core$Bit $tmp2993 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2993.value) {
        {
            panda$core$String* $tmp2995 = (($fn2994) self->$class->vtable[42])(self, p_target, p_m, p_out);
            return $tmp2995;
        }
        }
        else {
        {
            panda$core$String* $tmp2997 = (($fn2996) self->$class->vtable[41])(self, p_target, p_m, p_out);
            return $tmp2997;
        }
        }
    }
    }
    else {
    {
        if (p_m->owner->external.value) {
        {
            (($fn2998) self->$class->vtable[87])(self, p_m);
        }
        }
        panda$core$String* $tmp3000 = (($fn2999) self->$class->vtable[30])(self, p_m);
        return $tmp3000;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m3001;
    panda$core$String* $match$468273002;
    panda$core$String* countStruct3005;
    panda$core$String* count3009;
    panda$core$String* size3020;
    panda$core$Int64 elementSize3023;
    panda$core$String* malloc3045;
    panda$core$String* result3060;
    panda$core$String* ptr3080;
    panda$core$String* baseType3084;
    panda$core$String* ptrType3089;
    panda$core$String* cast3092;
    panda$core$String* load3106;
    panda$core$String* ptr3125;
    panda$core$String* baseType3129;
    panda$core$String* ptrType3134;
    panda$core$String* cast3137;
    panda$core$String* indexStruct3151;
    panda$core$String* index3155;
    panda$core$String* offsetPtr3166;
    panda$core$String* load3188;
    panda$core$String* ptr3207;
    panda$core$String* ptrCast3211;
    panda$core$String* countStruct3222;
    panda$core$String* count3226;
    panda$core$String* size3237;
    panda$core$String* realloc3259;
    panda$core$String* result3279;
    panda$core$String* ptr3299;
    panda$core$String* baseType3303;
    panda$core$String* offsetStruct3309;
    panda$core$String* offset3313;
    panda$core$String* result3324;
    m3001 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$468273002 = ((org$pandalanguage$pandac$Symbol*) m3001->value)->name;
        panda$core$Bit $tmp3004 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$468273002, &$s3003);
        if ($tmp3004.value) {
        {
            panda$core$Object* $tmp3006 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3008 = (($fn3007) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3006), p_out);
            countStruct3005 = $tmp3008;
            panda$core$String* $tmp3011 = (($fn3010) self->$class->vtable[4])(self);
            count3009 = $tmp3011;
            panda$core$String* $tmp3013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3012, count3009);
            panda$core$String* $tmp3015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3013, &$s3014);
            panda$core$String* $tmp3016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3015, countStruct3005);
            panda$core$String* $tmp3018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3016, &$s3017);
            (($fn3019) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3018);
            panda$core$String* $tmp3022 = (($fn3021) self->$class->vtable[4])(self);
            size3020 = $tmp3022;
            org$pandalanguage$pandac$Type* $tmp3025 = (($fn3024) m3001->$class->vtable[5])(m3001);
            panda$core$Object* $tmp3027 = (($fn3026) $tmp3025->subtypes->$class->vtable[2])($tmp3025->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp3029 = (($fn3028) self->$class->vtable[10])(self, ((org$pandalanguage$pandac$Type*) $tmp3027));
            elementSize3023 = $tmp3029;
            panda$core$String* $tmp3031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3030, size3020);
            panda$core$String* $tmp3033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3031, &$s3032);
            panda$core$String* $tmp3035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3033, &$s3034);
            panda$core$String* $tmp3037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3035, &$s3036);
            panda$core$String* $tmp3038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3037, count3009);
            panda$core$String* $tmp3040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3038, &$s3039);
            panda$core$String* $tmp3041 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3040, ((panda$core$Object*) wrap_panda$core$Int64(elementSize3023)));
            panda$core$String* $tmp3043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3041, &$s3042);
            (($fn3044) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3043);
            panda$core$String* $tmp3047 = (($fn3046) self->$class->vtable[4])(self);
            malloc3045 = $tmp3047;
            panda$core$String* $tmp3049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3048, malloc3045);
            panda$core$String* $tmp3051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3049, &$s3050);
            panda$core$String* $tmp3053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3051, &$s3052);
            panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3053, &$s3054);
            panda$core$String* $tmp3056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, size3020);
            panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3056, &$s3057);
            (($fn3059) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3058);
            panda$core$String* $tmp3062 = (($fn3061) self->$class->vtable[4])(self);
            result3060 = $tmp3062;
            panda$core$String* $tmp3064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3063, result3060);
            panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3064, &$s3065);
            panda$core$String* $tmp3067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, malloc3045);
            panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3067, &$s3068);
            org$pandalanguage$pandac$Type* $tmp3071 = (($fn3070) m3001->$class->vtable[5])(m3001);
            panda$core$String* $tmp3073 = (($fn3072) self->$class->vtable[15])(self, $tmp3071);
            panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, $tmp3073);
            panda$core$String* $tmp3076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3074, &$s3075);
            (($fn3077) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3076);
            return result3060;
        }
        }
        else {
        panda$core$Bit $tmp3079 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$468273002, &$s3078);
        if ($tmp3079.value) {
        {
            panda$core$Object* $tmp3081 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3083 = (($fn3082) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3081), p_out);
            ptr3080 = $tmp3083;
            org$pandalanguage$pandac$Type* $tmp3086 = (($fn3085) m3001->$class->vtable[5])(m3001);
            panda$core$String* $tmp3088 = (($fn3087) self->$class->vtable[15])(self, $tmp3086);
            baseType3084 = $tmp3088;
            panda$core$String* $tmp3091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType3084, &$s3090);
            ptrType3089 = $tmp3091;
            panda$core$String* $tmp3094 = (($fn3093) self->$class->vtable[4])(self);
            cast3092 = $tmp3094;
            panda$core$String* $tmp3096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3095, cast3092);
            panda$core$String* $tmp3098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3096, &$s3097);
            panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3098, ptr3080);
            panda$core$String* $tmp3101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, &$s3100);
            panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3101, ptrType3089);
            panda$core$String* $tmp3104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3102, &$s3103);
            (($fn3105) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3104);
            panda$core$String* $tmp3108 = (($fn3107) self->$class->vtable[4])(self);
            load3106 = $tmp3108;
            panda$core$String* $tmp3110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3109, load3106);
            panda$core$String* $tmp3112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3110, &$s3111);
            panda$core$String* $tmp3113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3112, baseType3084);
            panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3113, &$s3114);
            panda$core$String* $tmp3116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, ptrType3089);
            panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3116, &$s3117);
            panda$core$String* $tmp3119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, cast3092);
            panda$core$String* $tmp3121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3119, &$s3120);
            (($fn3122) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3121);
            return load3106;
        }
        }
        else {
        panda$core$Bit $tmp3124 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$468273002, &$s3123);
        if ($tmp3124.value) {
        {
            panda$core$Object* $tmp3126 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3128 = (($fn3127) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3126), p_out);
            ptr3125 = $tmp3128;
            org$pandalanguage$pandac$Type* $tmp3131 = (($fn3130) m3001->$class->vtable[5])(m3001);
            panda$core$String* $tmp3133 = (($fn3132) self->$class->vtable[15])(self, $tmp3131);
            baseType3129 = $tmp3133;
            panda$core$String* $tmp3136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType3129, &$s3135);
            ptrType3134 = $tmp3136;
            panda$core$String* $tmp3139 = (($fn3138) self->$class->vtable[4])(self);
            cast3137 = $tmp3139;
            panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3140, cast3137);
            panda$core$String* $tmp3143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3141, &$s3142);
            panda$core$String* $tmp3144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3143, ptr3125);
            panda$core$String* $tmp3146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3144, &$s3145);
            panda$core$String* $tmp3147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3146, ptrType3134);
            panda$core$String* $tmp3149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3147, &$s3148);
            (($fn3150) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3149);
            panda$core$Object* $tmp3152 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3154 = (($fn3153) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3152), p_out);
            indexStruct3151 = $tmp3154;
            panda$core$String* $tmp3157 = (($fn3156) self->$class->vtable[4])(self);
            index3155 = $tmp3157;
            panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3158, index3155);
            panda$core$String* $tmp3161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3159, &$s3160);
            panda$core$String* $tmp3162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3161, indexStruct3151);
            panda$core$String* $tmp3164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3162, &$s3163);
            (($fn3165) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3164);
            panda$core$String* $tmp3168 = (($fn3167) self->$class->vtable[4])(self);
            offsetPtr3166 = $tmp3168;
            panda$core$String* $tmp3170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3169, offsetPtr3166);
            panda$core$String* $tmp3172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3170, &$s3171);
            panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3172, baseType3129);
            panda$core$String* $tmp3175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, &$s3174);
            panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3175, ptrType3134);
            panda$core$String* $tmp3178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3176, &$s3177);
            panda$core$String* $tmp3179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3178, cast3137);
            panda$core$String* $tmp3181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3179, &$s3180);
            panda$core$String* $tmp3183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3182, index3155);
            panda$core$String* $tmp3185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3183, &$s3184);
            panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3181, $tmp3185);
            (($fn3187) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3186);
            panda$core$String* $tmp3190 = (($fn3189) self->$class->vtable[4])(self);
            load3188 = $tmp3190;
            panda$core$String* $tmp3192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3191, load3188);
            panda$core$String* $tmp3194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3192, &$s3193);
            panda$core$String* $tmp3195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3194, baseType3129);
            panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3195, &$s3196);
            panda$core$String* $tmp3198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, ptrType3134);
            panda$core$String* $tmp3200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3198, &$s3199);
            panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3200, offsetPtr3166);
            panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
            (($fn3204) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3203);
            return load3188;
        }
        }
        else {
        panda$core$Bit $tmp3206 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$468273002, &$s3205);
        if ($tmp3206.value) {
        {
            panda$core$Object* $tmp3208 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3210 = (($fn3209) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3208), p_out);
            ptr3207 = $tmp3210;
            panda$core$String* $tmp3213 = (($fn3212) self->$class->vtable[4])(self);
            ptrCast3211 = $tmp3213;
            panda$core$String* $tmp3215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3214, ptrCast3211);
            panda$core$String* $tmp3217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3215, &$s3216);
            panda$core$String* $tmp3218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3217, ptr3207);
            panda$core$String* $tmp3220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3218, &$s3219);
            (($fn3221) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3220);
            panda$core$Object* $tmp3223 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3225 = (($fn3224) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3223), p_out);
            countStruct3222 = $tmp3225;
            panda$core$String* $tmp3228 = (($fn3227) self->$class->vtable[4])(self);
            count3226 = $tmp3228;
            panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3229, count3226);
            panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, &$s3231);
            panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3232, countStruct3222);
            panda$core$String* $tmp3235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3233, &$s3234);
            (($fn3236) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3235);
            panda$core$String* $tmp3239 = (($fn3238) self->$class->vtable[4])(self);
            size3237 = $tmp3239;
            panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3240, size3237);
            panda$core$String* $tmp3243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, &$s3242);
            panda$core$String* $tmp3245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3243, &$s3244);
            panda$core$String* $tmp3247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3245, &$s3246);
            panda$core$String* $tmp3248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3247, count3226);
            panda$core$String* $tmp3250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3248, &$s3249);
            org$pandalanguage$pandac$Type* $tmp3252 = (($fn3251) m3001->$class->vtable[5])(m3001);
            panda$core$Object* $tmp3254 = (($fn3253) $tmp3252->subtypes->$class->vtable[2])($tmp3252->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp3256 = (($fn3255) self->$class->vtable[10])(self, ((org$pandalanguage$pandac$Type*) $tmp3254));
            panda$core$String* $tmp3257 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3250, ((panda$core$Object*) wrap_panda$core$Int64($tmp3256)));
            (($fn3258) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3257);
            panda$core$String* $tmp3261 = (($fn3260) self->$class->vtable[4])(self);
            realloc3259 = $tmp3261;
            panda$core$String* $tmp3263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3262, realloc3259);
            panda$core$String* $tmp3265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3263, &$s3264);
            panda$core$String* $tmp3266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3265, ptrCast3211);
            panda$core$String* $tmp3268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3266, &$s3267);
            panda$core$String* $tmp3270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3268, &$s3269);
            panda$core$String* $tmp3272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3270, &$s3271);
            panda$core$String* $tmp3274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3273, size3237);
            panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3274, &$s3275);
            panda$core$String* $tmp3277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3272, $tmp3276);
            (($fn3278) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3277);
            panda$core$String* $tmp3281 = (($fn3280) self->$class->vtable[4])(self);
            result3279 = $tmp3281;
            panda$core$String* $tmp3283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3282, result3279);
            panda$core$String* $tmp3285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3283, &$s3284);
            panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3285, realloc3259);
            panda$core$String* $tmp3288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, &$s3287);
            org$pandalanguage$pandac$Type* $tmp3290 = (($fn3289) m3001->$class->vtable[5])(m3001);
            panda$core$String* $tmp3292 = (($fn3291) self->$class->vtable[15])(self, $tmp3290);
            panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3288, $tmp3292);
            panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3293, &$s3294);
            (($fn3296) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3295);
            return result3279;
        }
        }
        else {
        panda$core$Bit $tmp3298 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$468273002, &$s3297);
        if ($tmp3298.value) {
        {
            panda$core$Object* $tmp3300 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3302 = (($fn3301) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3300), p_out);
            ptr3299 = $tmp3302;
            panda$core$Object* $tmp3304 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3306 = (($fn3305) ((org$pandalanguage$pandac$IRNode*) $tmp3304)->type->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp3304)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3308 = (($fn3307) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp3306));
            baseType3303 = $tmp3308;
            panda$core$Object* $tmp3310 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3312 = (($fn3311) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3310), p_out);
            offsetStruct3309 = $tmp3312;
            panda$core$String* $tmp3315 = (($fn3314) self->$class->vtable[4])(self);
            offset3313 = $tmp3315;
            panda$core$String* $tmp3317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3316, offset3313);
            panda$core$String* $tmp3319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3317, &$s3318);
            panda$core$String* $tmp3320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3319, offsetStruct3309);
            panda$core$String* $tmp3322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3320, &$s3321);
            (($fn3323) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3322);
            panda$core$String* $tmp3326 = (($fn3325) self->$class->vtable[4])(self);
            result3324 = $tmp3326;
            panda$core$String* $tmp3328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3327, result3324);
            panda$core$String* $tmp3330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3328, &$s3329);
            panda$core$String* $tmp3331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3330, baseType3303);
            panda$core$String* $tmp3333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3331, &$s3332);
            panda$core$String* $tmp3334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3333, ptr3299);
            panda$core$String* $tmp3336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3334, &$s3335);
            panda$core$String* $tmp3337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3336, offset3313);
            panda$core$String* $tmp3339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3337, &$s3338);
            (($fn3340) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3339);
            return result3324;
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
    org$pandalanguage$pandac$MethodDecl* m3341;
    panda$core$String* selfRef3344;
    panda$core$Int64 argStart3346;
    panda$collections$Array* args3352;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp3355;
    panda$core$String* end3389;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline3392;
    org$pandalanguage$pandac$MethodDecl* old3400;
    panda$core$String* phi3414;
    panda$core$String* separator3427;
    panda$collections$Iterator* ret$Iter3429;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret3441;
    m3341 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    (($fn3342) self->compiler->currentFile->$class->vtable[2])(self->compiler->currentFile, ((panda$core$Object*) m3341->owner->source));
    (($fn3343) self->currentlyInlining->$class->vtable[5])(self->currentlyInlining, ((panda$core$Object*) m3341), ((panda$core$Object*) m3341));
    selfRef3344 = &$s3345;
    panda$core$Bit $tmp3348 = (($fn3347) m3341->$class->vtable[4])(m3341);
    if ($tmp3348.value) {
    {
        argStart3346 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp3349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3351 = (($fn3350) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3349), p_out);
        selfRef3344 = $tmp3351;
    }
    }
    else {
    {
        argStart3346 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp3353 = (panda$collections$Array*) malloc(40);
    $tmp3353->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3353->refCount.value = 1;
    panda$collections$Array$init($tmp3353);
    args3352 = $tmp3353;
    panda$core$Int64 $tmp3356 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3355, argStart3346, $tmp3356, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3358 = $tmp3355.start.value;
    panda$core$Int64 i3357 = { $tmp3358 };
    int64_t $tmp3360 = $tmp3355.end.value;
    int64_t $tmp3361 = $tmp3355.step.value;
    bool $tmp3362 = $tmp3355.inclusive.value;
    bool $tmp3369 = $tmp3361 > 0;
    if ($tmp3369) goto $l3367; else goto $l3368;
    $l3367:;
    if ($tmp3362) goto $l3370; else goto $l3371;
    $l3370:;
    if ($tmp3358 <= $tmp3360) goto $l3363; else goto $l3365;
    $l3371:;
    if ($tmp3358 < $tmp3360) goto $l3363; else goto $l3365;
    $l3368:;
    if ($tmp3362) goto $l3372; else goto $l3373;
    $l3372:;
    if ($tmp3358 >= $tmp3360) goto $l3363; else goto $l3365;
    $l3373:;
    if ($tmp3358 > $tmp3360) goto $l3363; else goto $l3365;
    $l3363:;
    {
        panda$core$Object* $tmp3375 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3357);
        panda$core$String* $tmp3377 = (($fn3376) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3375), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args3352, ((panda$core$Object*) $tmp3377));
    }
    $l3366:;
    if ($tmp3369) goto $l3379; else goto $l3380;
    $l3379:;
    int64_t $tmp3381 = $tmp3360 - i3357.value;
    if ($tmp3362) goto $l3382; else goto $l3383;
    $l3382:;
    if ($tmp3381 >= $tmp3361) goto $l3378; else goto $l3365;
    $l3383:;
    if ($tmp3381 > $tmp3361) goto $l3378; else goto $l3365;
    $l3380:;
    int64_t $tmp3385 = i3357.value - $tmp3360;
    if ($tmp3362) goto $l3386; else goto $l3387;
    $l3386:;
    if ($tmp3385 >= -$tmp3361) goto $l3378; else goto $l3365;
    $l3387:;
    if ($tmp3385 > -$tmp3361) goto $l3378; else goto $l3365;
    $l3378:;
    i3357.value += $tmp3361;
    goto $l3363;
    $l3365:;
    panda$core$String* $tmp3391 = (($fn3390) self->$class->vtable[5])(self);
    end3389 = $tmp3391;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp3393 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp3393->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp3393->refCount.value = 1;
    panda$core$String* $tmp3396 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3395, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp3398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3396, &$s3397);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp3393, $tmp3398, selfRef3344, ((panda$collections$ListView*) args3352), end3389);
    inline3392 = $tmp3393;
    (($fn3399) self->inlineContext->$class->vtable[2])(self->inlineContext, ((panda$core$Object*) inline3392));
    old3400 = self->currentMethod;
    self->currentMethod = m3341;
    (($fn3401) self->$class->vtable[68])(self, p_body, p_out);
    self->currentMethod = old3400;
    (($fn3402) self->inlineContext->$class->vtable[3])(self->inlineContext);
    panda$core$Bit $tmp3404 = (($fn3403) self->$class->vtable[7])(self, p_body);
    panda$core$Bit $tmp3405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3404);
    if ($tmp3405.value) {
    {
        (($fn3407) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3406);
    }
    }
    (($fn3408) self->$class->vtable[6])(self, end3389, p_out);
    (($fn3409) self->currentlyInlining->$class->vtable[6])(self->currentlyInlining, ((panda$core$Object*) m3341));
    (($fn3410) self->compiler->currentFile->$class->vtable[3])(self->compiler->currentFile);
    panda$core$Int64 $tmp3411 = panda$collections$Array$get_count$R$panda$core$Int64(inline3392->returns);
    panda$core$Bit $tmp3412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3411, ((panda$core$Int64) { 1 }));
    if ($tmp3412.value) {
    {
        panda$core$Object* $tmp3413 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline3392->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp3413)->second);
    }
    }
    panda$core$String* $tmp3416 = (($fn3415) self->$class->vtable[4])(self);
    phi3414 = $tmp3416;
    panda$core$String* $tmp3418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3417, phi3414);
    panda$core$String* $tmp3420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3418, &$s3419);
    panda$core$String* $tmp3422 = (($fn3421) self->$class->vtable[15])(self, m3341->returnType);
    panda$core$String* $tmp3423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3420, $tmp3422);
    panda$core$String* $tmp3425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3423, &$s3424);
    (($fn3426) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3425);
    separator3427 = &$s3428;
    {
        ITable* $tmp3430 = ((panda$collections$Iterable*) inline3392->returns)->$class->itable;
        while ($tmp3430->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3430 = $tmp3430->next;
        }
        $fn3432 $tmp3431 = $tmp3430->methods[0];
        panda$collections$Iterator* $tmp3433 = $tmp3431(((panda$collections$Iterable*) inline3392->returns));
        ret$Iter3429 = $tmp3433;
        $l3434:;
        ITable* $tmp3436 = ret$Iter3429->$class->itable;
        while ($tmp3436->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3436 = $tmp3436->next;
        }
        $fn3438 $tmp3437 = $tmp3436->methods[0];
        panda$core$Bit $tmp3439 = $tmp3437(ret$Iter3429);
        panda$core$Bit $tmp3440 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3439);
        if (!$tmp3440.value) goto $l3435;
        {
            ITable* $tmp3442 = ret$Iter3429->$class->itable;
            while ($tmp3442->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3442 = $tmp3442->next;
            }
            $fn3444 $tmp3443 = $tmp3442->methods[1];
            panda$core$Object* $tmp3445 = $tmp3443(ret$Iter3429);
            ret3441 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp3445);
            panda$core$String* $tmp3447 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3446, separator3427);
            panda$core$String* $tmp3449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3447, &$s3448);
            panda$core$String* $tmp3450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3449, ((panda$core$String*) ret3441->second));
            panda$core$String* $tmp3452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3450, &$s3451);
            panda$core$String* $tmp3453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3452, ((panda$core$String*) ret3441->first));
            panda$core$String* $tmp3455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3453, &$s3454);
            (($fn3456) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3455);
            separator3427 = &$s3457;
        }
        goto $l3434;
        $l3435:;
    }
    (($fn3458) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi3414;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m3459;
    panda$core$String* bit3469;
    panda$core$String* result3474;
    panda$core$String* bit3489;
    panda$core$String* result3494;
    org$pandalanguage$pandac$IRNode* block3514;
    panda$collections$Array* args3520;
    org$pandalanguage$pandac$Type* actualMethodType3524;
    panda$core$String* actualResultType3525;
    panda$core$Bit isSuper3526;
    panda$core$Int64 offset3553;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp3559;
    panda$core$String* arg3579;
    panda$core$String* target3624;
    panda$core$String* methodRef3628;
    panda$core$String* result3631;
    panda$core$Bit indirect3632;
    panda$core$String* separator3662;
    panda$core$String* indirectVar3664;
    panda$collections$Iterator* arg$Iter3685;
    panda$core$String* arg3697;
    m3459 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp3461 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3459->owner)->name, &$s3460);
    if ($tmp3461.value) {
    {
        panda$core$String* $tmp3463 = (($fn3462) self->$class->vtable[44])(self, p_call, p_out);
        return $tmp3463;
    }
    }
    if (m3459->owner->external.value) {
    {
        (($fn3464) self->$class->vtable[87])(self, m3459);
    }
    }
    panda$core$Bit $tmp3466 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3459->owner)->name, &$s3465);
    if ($tmp3466.value) {
    {
        panda$core$Bit $tmp3468 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3459)->name, &$s3467);
        if ($tmp3468.value) {
        {
            panda$core$Object* $tmp3470 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3473 = (($fn3472) self->$class->vtable[33])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3470), ((org$pandalanguage$pandac$IRNode*) $tmp3471), p_out);
            bit3469 = $tmp3473;
            panda$core$String* $tmp3476 = (($fn3475) self->$class->vtable[4])(self);
            result3474 = $tmp3476;
            panda$core$String* $tmp3478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3477, result3474);
            panda$core$String* $tmp3480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3478, &$s3479);
            panda$core$String* $tmp3482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3481, bit3469);
            panda$core$String* $tmp3484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3482, &$s3483);
            panda$core$String* $tmp3485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3480, $tmp3484);
            (($fn3486) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3485);
            return result3474;
        }
        }
        panda$core$Bit $tmp3488 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3459)->name, &$s3487);
        if ($tmp3488.value) {
        {
            panda$core$Object* $tmp3490 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3491 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3493 = (($fn3492) self->$class->vtable[34])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3490), ((org$pandalanguage$pandac$IRNode*) $tmp3491), p_out);
            bit3489 = $tmp3493;
            panda$core$String* $tmp3496 = (($fn3495) self->$class->vtable[4])(self);
            result3494 = $tmp3496;
            panda$core$String* $tmp3498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3497, result3494);
            panda$core$String* $tmp3500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3498, &$s3499);
            panda$core$String* $tmp3502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3501, bit3489);
            panda$core$String* $tmp3504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3502, &$s3503);
            panda$core$String* $tmp3505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3500, $tmp3504);
            (($fn3506) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3505);
            return result3494;
        }
        }
    }
    }
    panda$core$Bit $tmp3509 = (($fn3508) m3459->annotations->$class->vtable[11])(m3459->annotations);
    bool $tmp3507 = $tmp3509.value;
    if (!$tmp3507) goto $l3510;
    panda$core$Object* $tmp3512 = (($fn3511) self->currentlyInlining->$class->vtable[3])(self->currentlyInlining, ((panda$core$Object*) m3459));
    $tmp3507 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp3512) == NULL }).value;
    $l3510:;
    panda$core$Bit $tmp3513 = { $tmp3507 };
    if ($tmp3513.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3516 = (($fn3515) self->compiler->$class->vtable[89])(self->compiler, m3459);
        block3514 = $tmp3516;
        if (((panda$core$Bit) { block3514 != NULL }).value) {
        {
            panda$core$String* $tmp3518 = (($fn3517) self->$class->vtable[45])(self, p_call, block3514, p_out);
            return $tmp3518;
        }
        }
        return &$s3519;
    }
    }
    panda$collections$Array* $tmp3521 = (panda$collections$Array*) malloc(40);
    $tmp3521->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3521->refCount.value = 1;
    panda$core$Int64 $tmp3523 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp3521, $tmp3523);
    args3520 = $tmp3521;
    panda$core$Int64 $tmp3528 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp3529 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3528, ((panda$core$Int64) { 1 }));
    bool $tmp3527 = $tmp3529.value;
    if (!$tmp3527) goto $l3530;
    panda$core$Object* $tmp3531 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3532 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3531)->kind, ((panda$core$Int64) { 1024 }));
    $tmp3527 = $tmp3532.value;
    $l3530:;
    panda$core$Bit $tmp3533 = { $tmp3527 };
    isSuper3526 = $tmp3533;
    panda$core$Bit $tmp3535 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper3526);
    bool $tmp3534 = $tmp3535.value;
    if (!$tmp3534) goto $l3536;
    panda$core$Bit $tmp3538 = (($fn3537) m3459->$class->vtable[3])(m3459);
    $tmp3534 = $tmp3538.value;
    $l3536:;
    panda$core$Bit $tmp3539 = { $tmp3534 };
    if ($tmp3539.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3541 = (($fn3540) self->compiler->$class->vtable[46])(self->compiler, m3459);
        actualMethodType3524 = $tmp3541;
        panda$core$Int64 $tmp3543 = (($fn3542) actualMethodType3524->subtypes->$class->vtable[3])(actualMethodType3524->subtypes);
        panda$core$Int64 $tmp3544 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3543, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3546 = (($fn3545) actualMethodType3524->subtypes->$class->vtable[2])(actualMethodType3524->subtypes, $tmp3544);
        panda$core$String* $tmp3548 = (($fn3547) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp3546));
        actualResultType3525 = $tmp3548;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3550 = (($fn3549) self->compiler->$class->vtable[44])(self->compiler, m3459);
        actualMethodType3524 = $tmp3550;
        panda$core$String* $tmp3552 = (($fn3551) self->$class->vtable[15])(self, p_call->type);
        actualResultType3525 = $tmp3552;
    }
    }
    panda$core$Int64 $tmp3554 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3556 = (($fn3555) actualMethodType3524->subtypes->$class->vtable[3])(actualMethodType3524->subtypes);
    panda$core$Int64 $tmp3557 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3554, $tmp3556);
    panda$core$Int64 $tmp3558 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3557, ((panda$core$Int64) { 1 }));
    offset3553 = $tmp3558;
    panda$core$Int64 $tmp3560 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3559, ((panda$core$Int64) { 0 }), $tmp3560, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3562 = $tmp3559.start.value;
    panda$core$Int64 i3561 = { $tmp3562 };
    int64_t $tmp3564 = $tmp3559.end.value;
    int64_t $tmp3565 = $tmp3559.step.value;
    bool $tmp3566 = $tmp3559.inclusive.value;
    bool $tmp3573 = $tmp3565 > 0;
    if ($tmp3573) goto $l3571; else goto $l3572;
    $l3571:;
    if ($tmp3566) goto $l3574; else goto $l3575;
    $l3574:;
    if ($tmp3562 <= $tmp3564) goto $l3567; else goto $l3569;
    $l3575:;
    if ($tmp3562 < $tmp3564) goto $l3567; else goto $l3569;
    $l3572:;
    if ($tmp3566) goto $l3576; else goto $l3577;
    $l3576:;
    if ($tmp3562 >= $tmp3564) goto $l3567; else goto $l3569;
    $l3577:;
    if ($tmp3562 > $tmp3564) goto $l3567; else goto $l3569;
    $l3567:;
    {
        panda$core$Object* $tmp3580 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3561);
        panda$core$String* $tmp3582 = (($fn3581) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3580), p_out);
        arg3579 = $tmp3582;
        panda$core$Bit $tmp3584 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3561, offset3553);
        bool $tmp3583 = $tmp3584.value;
        if (!$tmp3583) goto $l3585;
        panda$core$Int64 $tmp3586 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3561, offset3553);
        panda$core$Object* $tmp3588 = (($fn3587) actualMethodType3524->subtypes->$class->vtable[2])(actualMethodType3524->subtypes, $tmp3586);
        panda$core$Object* $tmp3589 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3561);
        panda$core$Bit $tmp3591 = (($fn3590) ((org$pandalanguage$pandac$Type*) $tmp3588)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp3588), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3589)->type));
        $tmp3583 = $tmp3591.value;
        $l3585:;
        panda$core$Bit $tmp3592 = { $tmp3583 };
        if ($tmp3592.value) {
        {
            panda$core$Int64 $tmp3593 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3561, offset3553);
            panda$core$Object* $tmp3595 = (($fn3594) actualMethodType3524->subtypes->$class->vtable[2])(actualMethodType3524->subtypes, $tmp3593);
            panda$core$String* $tmp3597 = (($fn3596) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp3595));
            panda$core$String* $tmp3599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3597, &$s3598);
            panda$core$Object* $tmp3600 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3561);
            panda$core$Int64 $tmp3601 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3561, offset3553);
            panda$core$Object* $tmp3603 = (($fn3602) actualMethodType3524->subtypes->$class->vtable[2])(actualMethodType3524->subtypes, $tmp3601);
            panda$core$String* $tmp3605 = (($fn3604) self->$class->vtable[52])(self, arg3579, ((org$pandalanguage$pandac$IRNode*) $tmp3600)->type, ((org$pandalanguage$pandac$Type*) $tmp3603), p_out);
            panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3599, $tmp3605);
            arg3579 = $tmp3606;
        }
        }
        else {
        {
            panda$core$Object* $tmp3607 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3561);
            panda$core$String* $tmp3609 = (($fn3608) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3607)->type);
            panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, &$s3610);
            panda$core$String* $tmp3612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3611, arg3579);
            arg3579 = $tmp3612;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args3520, ((panda$core$Object*) arg3579));
    }
    $l3570:;
    if ($tmp3573) goto $l3614; else goto $l3615;
    $l3614:;
    int64_t $tmp3616 = $tmp3564 - i3561.value;
    if ($tmp3566) goto $l3617; else goto $l3618;
    $l3617:;
    if ($tmp3616 >= $tmp3565) goto $l3613; else goto $l3569;
    $l3618:;
    if ($tmp3616 > $tmp3565) goto $l3613; else goto $l3569;
    $l3615:;
    int64_t $tmp3620 = i3561.value - $tmp3564;
    if ($tmp3566) goto $l3621; else goto $l3622;
    $l3621:;
    if ($tmp3620 >= -$tmp3565) goto $l3613; else goto $l3569;
    $l3622:;
    if ($tmp3620 > -$tmp3565) goto $l3613; else goto $l3569;
    $l3613:;
    i3561.value += $tmp3565;
    goto $l3567;
    $l3569:;
    panda$core$Int64 $tmp3625 = panda$collections$Array$get_count$R$panda$core$Int64(args3520);
    panda$core$Bit $tmp3626 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3625, ((panda$core$Int64) { 0 }));
    if ($tmp3626.value) {
    {
        panda$core$Object* $tmp3627 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args3520, ((panda$core$Int64) { 0 }));
        target3624 = ((panda$core$String*) $tmp3627);
    }
    }
    else {
    {
        target3624 = NULL;
    }
    }
    panda$core$String* $tmp3630 = (($fn3629) self->$class->vtable[43])(self, target3624, m3459, isSuper3526, p_out);
    methodRef3628 = $tmp3630;
    panda$core$Bit $tmp3634 = (($fn3633) self->$class->vtable[24])(self, m3459);
    indirect3632 = $tmp3634;
    if (indirect3632.value) {
    {
        panda$core$String* $tmp3637 = (($fn3636) self->$class->vtable[40])(self, m3459);
        panda$core$String* $tmp3638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3635, $tmp3637);
        panda$core$String* $tmp3640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3638, &$s3639);
        (($fn3641) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3640);
    }
    }
    else {
    {
        panda$core$String* $tmp3643 = (($fn3642) self->$class->vtable[4])(self);
        result3631 = $tmp3643;
        panda$core$String* $tmp3645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3644, result3631);
        panda$core$String* $tmp3647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3645, &$s3646);
        panda$core$String* $tmp3649 = (($fn3648) self->$class->vtable[40])(self, m3459);
        panda$core$String* $tmp3650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3647, $tmp3649);
        panda$core$String* $tmp3652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3650, &$s3651);
        panda$core$String* $tmp3653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3652, actualResultType3525);
        panda$core$String* $tmp3655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3653, &$s3654);
        (($fn3656) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3655);
    }
    }
    panda$core$String* $tmp3658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3657, methodRef3628);
    panda$core$String* $tmp3660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3658, &$s3659);
    (($fn3661) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3660);
    separator3662 = &$s3663;
    if (indirect3632.value) {
    {
        panda$core$Int64 $tmp3665 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3665;
        panda$core$String* $tmp3667 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3666, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3664 = $tmp3667;
        panda$core$String* $tmp3669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3668, indirectVar3664);
        panda$core$String* $tmp3671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3669, &$s3670);
        panda$core$String* $tmp3672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3671, actualResultType3525);
        panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3672, &$s3673);
        (($fn3675) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3674);
        panda$core$String* $tmp3677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3676, actualResultType3525);
        panda$core$String* $tmp3679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3677, &$s3678);
        panda$core$String* $tmp3680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3679, indirectVar3664);
        panda$core$String* $tmp3682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3680, &$s3681);
        (($fn3683) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3682);
        separator3662 = &$s3684;
    }
    }
    {
        ITable* $tmp3686 = ((panda$collections$Iterable*) args3520)->$class->itable;
        while ($tmp3686->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3686 = $tmp3686->next;
        }
        $fn3688 $tmp3687 = $tmp3686->methods[0];
        panda$collections$Iterator* $tmp3689 = $tmp3687(((panda$collections$Iterable*) args3520));
        arg$Iter3685 = $tmp3689;
        $l3690:;
        ITable* $tmp3692 = arg$Iter3685->$class->itable;
        while ($tmp3692->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3692 = $tmp3692->next;
        }
        $fn3694 $tmp3693 = $tmp3692->methods[0];
        panda$core$Bit $tmp3695 = $tmp3693(arg$Iter3685);
        panda$core$Bit $tmp3696 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3695);
        if (!$tmp3696.value) goto $l3691;
        {
            ITable* $tmp3698 = arg$Iter3685->$class->itable;
            while ($tmp3698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3698 = $tmp3698->next;
            }
            $fn3700 $tmp3699 = $tmp3698->methods[1];
            panda$core$Object* $tmp3701 = $tmp3699(arg$Iter3685);
            arg3697 = ((panda$core$String*) $tmp3701);
            panda$core$String* $tmp3703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3702, separator3662);
            panda$core$String* $tmp3705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3703, &$s3704);
            panda$core$String* $tmp3706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3705, arg3697);
            panda$core$String* $tmp3708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3706, &$s3707);
            (($fn3709) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3708);
            separator3662 = &$s3710;
        }
        goto $l3690;
        $l3691:;
    }
    (($fn3712) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3711);
    if (indirect3632.value) {
    {
        panda$core$String* $tmp3714 = (($fn3713) self->$class->vtable[4])(self);
        result3631 = $tmp3714;
        panda$core$String* $tmp3716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3715, result3631);
        panda$core$String* $tmp3718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3716, &$s3717);
        panda$core$String* $tmp3719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3718, actualResultType3525);
        panda$core$String* $tmp3721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3719, &$s3720);
        panda$core$String* $tmp3722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3721, actualResultType3525);
        panda$core$String* $tmp3724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3722, &$s3723);
        panda$core$String* $tmp3725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3724, indirectVar3664);
        (($fn3726) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3725);
    }
    }
    panda$core$String* $tmp3728 = (($fn3727) self->$class->vtable[15])(self, p_call->type);
    panda$core$Bit $tmp3729 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3728, actualResultType3525);
    if ($tmp3729.value) {
    {
        panda$core$Int64 $tmp3731 = (($fn3730) actualMethodType3524->subtypes->$class->vtable[3])(actualMethodType3524->subtypes);
        panda$core$Int64 $tmp3732 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3731, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3734 = (($fn3733) actualMethodType3524->subtypes->$class->vtable[2])(actualMethodType3524->subtypes, $tmp3732);
        panda$core$String* $tmp3736 = (($fn3735) self->$class->vtable[52])(self, result3631, ((org$pandalanguage$pandac$Type*) $tmp3734), p_call->type, p_out);
        return $tmp3736;
    }
    }
    return result3631;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3737;
    panda$core$String* testStart3741;
    panda$core$String* isNonNull3742;
    panda$core$String* nonNullLabel3758;
    panda$core$String* endLabel3761;
    panda$core$String* unwrapped3776;
    panda$core$String* nonNullValue3781;
    panda$core$String* result3792;
    panda$core$String* mallocRef3816;
    panda$core$String* wrapperTypeName3831;
    panda$core$String* wrapperType3836;
    panda$core$String* wrapperCast3841;
    panda$core$String* classPtr3855;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3874;
    panda$core$String* refCount3890;
    panda$core$String* target3914;
    panda$core$String* result3954;
    org$pandalanguage$pandac$ClassDecl* $tmp3739 = (($fn3738) self->compiler->$class->vtable[14])(self->compiler, p_srcType);
    src3737 = $tmp3739;
    panda$core$Bit $tmp3740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3740.value) {
    {
        testStart3741 = self->currentBlock;
        panda$core$String* $tmp3744 = (($fn3743) self->$class->vtable[4])(self);
        isNonNull3742 = $tmp3744;
        panda$core$String* $tmp3746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3745, isNonNull3742);
        panda$core$String* $tmp3748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3746, &$s3747);
        panda$core$String* $tmp3750 = (($fn3749) self->$class->vtable[19])(self, p_srcType);
        panda$core$String* $tmp3751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3748, $tmp3750);
        panda$core$String* $tmp3753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3751, &$s3752);
        panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3753, p_value);
        panda$core$String* $tmp3756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3754, &$s3755);
        (($fn3757) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3756);
        panda$core$String* $tmp3760 = (($fn3759) self->$class->vtable[5])(self);
        nonNullLabel3758 = $tmp3760;
        panda$core$String* $tmp3763 = (($fn3762) self->$class->vtable[5])(self);
        endLabel3761 = $tmp3763;
        panda$core$String* $tmp3765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3764, isNonNull3742);
        panda$core$String* $tmp3767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3765, &$s3766);
        panda$core$String* $tmp3768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3767, nonNullLabel3758);
        panda$core$String* $tmp3770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3768, &$s3769);
        panda$core$String* $tmp3771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3770, endLabel3761);
        panda$core$String* $tmp3773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3771, &$s3772);
        (($fn3774) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3773);
        (($fn3775) self->$class->vtable[6])(self, nonNullLabel3758, p_out);
        panda$core$Object* $tmp3778 = (($fn3777) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3780 = (($fn3779) self->$class->vtable[51])(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3778), p_out);
        unwrapped3776 = $tmp3780;
        panda$core$Object* $tmp3783 = (($fn3782) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3785 = (($fn3784) self->$class->vtable[47])(self, unwrapped3776, ((org$pandalanguage$pandac$Type*) $tmp3783), p_dstType, p_out);
        nonNullValue3781 = $tmp3785;
        panda$core$String* $tmp3787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3786, endLabel3761);
        panda$core$String* $tmp3789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3787, &$s3788);
        (($fn3790) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3789);
        (($fn3791) self->$class->vtable[6])(self, endLabel3761, p_out);
        panda$core$String* $tmp3794 = (($fn3793) self->$class->vtable[4])(self);
        result3792 = $tmp3794;
        panda$core$String* $tmp3796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3795, result3792);
        panda$core$String* $tmp3798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3796, &$s3797);
        panda$core$String* $tmp3800 = (($fn3799) self->$class->vtable[15])(self, p_dstType);
        panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3798, $tmp3800);
        panda$core$String* $tmp3803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3801, &$s3802);
        panda$core$String* $tmp3804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3803, testStart3741);
        panda$core$String* $tmp3806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3804, &$s3805);
        panda$core$String* $tmp3808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3807, nonNullValue3781);
        panda$core$String* $tmp3810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3808, &$s3809);
        panda$core$String* $tmp3811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3810, nonNullLabel3758);
        panda$core$String* $tmp3813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3811, &$s3812);
        panda$core$String* $tmp3814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3806, $tmp3813);
        (($fn3815) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3814);
        return result3792;
    }
    }
    panda$core$String* $tmp3818 = (($fn3817) self->$class->vtable[4])(self);
    mallocRef3816 = $tmp3818;
    panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3819, mallocRef3816);
    panda$core$String* $tmp3822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3820, &$s3821);
    org$pandalanguage$pandac$Type* $tmp3824 = (($fn3823) src3737->$class->vtable[3])(src3737);
    panda$core$Int64 $tmp3826 = (($fn3825) self->$class->vtable[11])(self, $tmp3824);
    panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3822, ((panda$core$Object*) wrap_panda$core$Int64($tmp3826)));
    panda$core$String* $tmp3829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3827, &$s3828);
    (($fn3830) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3829);
    org$pandalanguage$pandac$Type* $tmp3833 = (($fn3832) src3737->$class->vtable[3])(src3737);
    panda$core$String* $tmp3835 = (($fn3834) self->$class->vtable[16])(self, $tmp3833);
    wrapperTypeName3831 = $tmp3835;
    org$pandalanguage$pandac$Type* $tmp3838 = (($fn3837) src3737->$class->vtable[3])(src3737);
    panda$core$String* $tmp3840 = (($fn3839) self->$class->vtable[17])(self, $tmp3838);
    wrapperType3836 = $tmp3840;
    panda$core$String* $tmp3843 = (($fn3842) self->$class->vtable[4])(self);
    wrapperCast3841 = $tmp3843;
    panda$core$String* $tmp3845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3844, wrapperCast3841);
    panda$core$String* $tmp3847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3845, &$s3846);
    panda$core$String* $tmp3848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3847, mallocRef3816);
    panda$core$String* $tmp3850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3848, &$s3849);
    panda$core$String* $tmp3851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3850, wrapperType3836);
    panda$core$String* $tmp3853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3851, &$s3852);
    (($fn3854) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3853);
    panda$core$String* $tmp3857 = (($fn3856) self->$class->vtable[4])(self);
    classPtr3855 = $tmp3857;
    panda$core$String* $tmp3859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3858, classPtr3855);
    panda$core$String* $tmp3861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3859, &$s3860);
    panda$core$String* $tmp3862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3861, wrapperTypeName3831);
    panda$core$String* $tmp3864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3862, &$s3863);
    panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3865, wrapperType3836);
    panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, &$s3867);
    panda$core$String* $tmp3869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3868, wrapperCast3841);
    panda$core$String* $tmp3871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3869, &$s3870);
    panda$core$String* $tmp3872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3864, $tmp3871);
    (($fn3873) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3872);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3876 = (($fn3875) self->$class->vtable[27])(self, src3737);
    cc3874 = $tmp3876;
    panda$core$String* $tmp3878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3877, cc3874->type);
    panda$core$String* $tmp3880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3878, &$s3879);
    panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3880, cc3874->name);
    panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, &$s3882);
    panda$core$String* $tmp3885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3884, classPtr3855);
    panda$core$String* $tmp3887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3885, &$s3886);
    panda$core$String* $tmp3888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3883, $tmp3887);
    (($fn3889) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3888);
    panda$core$String* $tmp3892 = (($fn3891) self->$class->vtable[4])(self);
    refCount3890 = $tmp3892;
    panda$core$String* $tmp3894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3893, refCount3890);
    panda$core$String* $tmp3896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3894, &$s3895);
    panda$core$String* $tmp3897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3896, wrapperTypeName3831);
    panda$core$String* $tmp3899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3897, &$s3898);
    panda$core$String* $tmp3901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3900, wrapperType3836);
    panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3901, &$s3902);
    panda$core$String* $tmp3904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3903, wrapperCast3841);
    panda$core$String* $tmp3906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3904, &$s3905);
    panda$core$String* $tmp3907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3899, $tmp3906);
    (($fn3908) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3907);
    panda$core$String* $tmp3910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3909, refCount3890);
    panda$core$String* $tmp3912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3910, &$s3911);
    (($fn3913) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3912);
    panda$core$String* $tmp3916 = (($fn3915) self->$class->vtable[4])(self);
    target3914 = $tmp3916;
    panda$core$String* $tmp3918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3917, target3914);
    panda$core$String* $tmp3920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3918, &$s3919);
    panda$core$String* $tmp3921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3920, wrapperTypeName3831);
    panda$core$String* $tmp3923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3921, &$s3922);
    panda$core$String* $tmp3925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3924, wrapperType3836);
    panda$core$String* $tmp3927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3925, &$s3926);
    panda$core$String* $tmp3928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3927, wrapperCast3841);
    panda$core$String* $tmp3930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3928, &$s3929);
    panda$core$String* $tmp3931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3923, $tmp3930);
    (($fn3932) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3931);
    panda$core$String* $tmp3935 = (($fn3934) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp3936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3933, $tmp3935);
    panda$core$String* $tmp3938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3936, &$s3937);
    panda$core$String* $tmp3939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3938, p_value);
    panda$core$String* $tmp3941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3939, &$s3940);
    panda$core$String* $tmp3943 = (($fn3942) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp3944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3941, $tmp3943);
    panda$core$String* $tmp3946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3944, &$s3945);
    panda$core$String* $tmp3947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3946, target3914);
    panda$core$String* $tmp3949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3947, &$s3948);
    (($fn3950) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3949);
    panda$core$String* $tmp3952 = (($fn3951) self->$class->vtable[15])(self, p_dstType);
    panda$core$Bit $tmp3953 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3836, $tmp3952);
    if ($tmp3953.value) {
    {
        panda$core$String* $tmp3956 = (($fn3955) self->$class->vtable[4])(self);
        result3954 = $tmp3956;
        panda$core$String* $tmp3958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3957, result3954);
        panda$core$String* $tmp3960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3958, &$s3959);
        panda$core$String* $tmp3961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3960, wrapperType3836);
        panda$core$String* $tmp3963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3961, &$s3962);
        panda$core$String* $tmp3964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3963, wrapperCast3841);
        panda$core$String* $tmp3966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3964, &$s3965);
        panda$core$String* $tmp3968 = (($fn3967) self->$class->vtable[15])(self, p_dstType);
        panda$core$String* $tmp3969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3966, $tmp3968);
        panda$core$String* $tmp3971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3969, &$s3970);
        (($fn3972) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3971);
        return result3954;
    }
    }
    return wrapperCast3841;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3973;
    panda$core$String* t3974;
    org$pandalanguage$pandac$ClassDecl* cl3981;
    panda$core$String* base3987;
    panda$collections$ListView* fields3991;
    panda$core$Int64$nullable index3994;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp3995;
    panda$core$String* result4033;
    panda$core$String* ptr4055;
    panda$core$String* result4065;
    field3973 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3976 = (($fn3975) self->$class->vtable[15])(self, field3973->type);
    t3974 = $tmp3976;
    panda$core$Bit $tmp3978 = (($fn3977) field3973->annotations->$class->vtable[5])(field3973->annotations);
    if ($tmp3978.value) {
    {
        panda$core$String* $tmp3980 = (($fn3979) self->$class->vtable[66])(self, field3973->value, p_out);
        return $tmp3980;
    }
    }
    panda$core$Object* $tmp3982 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3984 = (($fn3983) self->compiler->$class->vtable[14])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3982)->type);
    cl3981 = $tmp3984;
    panda$core$Bit $tmp3986 = (($fn3985) self->compiler->$class->vtable[9])(self->compiler, cl3981);
    if ($tmp3986.value) {
    {
        panda$core$Object* $tmp3988 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3990 = (($fn3989) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3988), p_out);
        base3987 = $tmp3990;
        panda$collections$ListView* $tmp3993 = (($fn3992) self->compiler->$class->vtable[10])(self->compiler, cl3981);
        fields3991 = $tmp3993;
        index3994 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3996 = ((panda$collections$CollectionView*) fields3991)->$class->itable;
        while ($tmp3996->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3996 = $tmp3996->next;
        }
        $fn3998 $tmp3997 = $tmp3996->methods[0];
        panda$core$Int64 $tmp3999 = $tmp3997(((panda$collections$CollectionView*) fields3991));
        panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp3995, ((panda$core$Int64) { 0 }), $tmp3999, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp4001 = $tmp3995.start.value;
        panda$core$Int64 i4000 = { $tmp4001 };
        int64_t $tmp4003 = $tmp3995.end.value;
        int64_t $tmp4004 = $tmp3995.step.value;
        bool $tmp4005 = $tmp3995.inclusive.value;
        bool $tmp4012 = $tmp4004 > 0;
        if ($tmp4012) goto $l4010; else goto $l4011;
        $l4010:;
        if ($tmp4005) goto $l4013; else goto $l4014;
        $l4013:;
        if ($tmp4001 <= $tmp4003) goto $l4006; else goto $l4008;
        $l4014:;
        if ($tmp4001 < $tmp4003) goto $l4006; else goto $l4008;
        $l4011:;
        if ($tmp4005) goto $l4015; else goto $l4016;
        $l4015:;
        if ($tmp4001 >= $tmp4003) goto $l4006; else goto $l4008;
        $l4016:;
        if ($tmp4001 > $tmp4003) goto $l4006; else goto $l4008;
        $l4006:;
        {
            ITable* $tmp4018 = fields3991->$class->itable;
            while ($tmp4018->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp4018 = $tmp4018->next;
            }
            $fn4020 $tmp4019 = $tmp4018->methods[0];
            panda$core$Object* $tmp4021 = $tmp4019(fields3991, i4000);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp4021)) == ((panda$core$Object*) field3973) }).value) {
            {
                index3994 = ((panda$core$Int64$nullable) { i4000, true });
                goto $l4008;
            }
            }
        }
        $l4009:;
        if ($tmp4012) goto $l4023; else goto $l4024;
        $l4023:;
        int64_t $tmp4025 = $tmp4003 - i4000.value;
        if ($tmp4005) goto $l4026; else goto $l4027;
        $l4026:;
        if ($tmp4025 >= $tmp4004) goto $l4022; else goto $l4008;
        $l4027:;
        if ($tmp4025 > $tmp4004) goto $l4022; else goto $l4008;
        $l4024:;
        int64_t $tmp4029 = i4000.value - $tmp4003;
        if ($tmp4005) goto $l4030; else goto $l4031;
        $l4030:;
        if ($tmp4029 >= -$tmp4004) goto $l4022; else goto $l4008;
        $l4031:;
        if ($tmp4029 > -$tmp4004) goto $l4022; else goto $l4008;
        $l4022:;
        i4000.value += $tmp4004;
        goto $l4006;
        $l4008:;
        panda$core$String* $tmp4035 = (($fn4034) self->$class->vtable[4])(self);
        result4033 = $tmp4035;
        panda$core$String* $tmp4037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4036, result4033);
        panda$core$String* $tmp4039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4037, &$s4038);
        panda$core$Object* $tmp4040 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4042 = (($fn4041) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4040)->type);
        panda$core$String* $tmp4043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4039, $tmp4042);
        panda$core$String* $tmp4045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4043, &$s4044);
        panda$core$String* $tmp4046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4045, base3987);
        panda$core$String* $tmp4048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4046, &$s4047);
        panda$core$String* $tmp4050 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4049, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3994.value))));
        panda$core$String* $tmp4052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4050, &$s4051);
        panda$core$String* $tmp4053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4048, $tmp4052);
        (($fn4054) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4053);
        return result4033;
    }
    }
    panda$core$String* $tmp4057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4056, t3974);
    panda$core$String* $tmp4059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4057, &$s4058);
    panda$core$String* $tmp4061 = (($fn4060) self->$class->vtable[78])(self, p_fieldRef, p_out);
    panda$core$String* $tmp4062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4059, $tmp4061);
    panda$core$String* $tmp4064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4062, &$s4063);
    ptr4055 = $tmp4064;
    panda$core$String* $tmp4067 = (($fn4066) self->$class->vtable[4])(self);
    result4065 = $tmp4067;
    panda$core$String* $tmp4069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4068, result4065);
    panda$core$String* $tmp4071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4069, &$s4070);
    panda$core$String* $tmp4072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4071, t3974);
    panda$core$String* $tmp4074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4072, &$s4073);
    panda$core$String* $tmp4075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4074, ptr4055);
    panda$core$String* $tmp4077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4075, &$s4076);
    (($fn4078) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4077);
    return result4065;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target4079;
    panda$core$String* testStart4083;
    panda$core$String* isNonNull4084;
    panda$core$String* nonNullLabel4100;
    panda$core$String* endLabel4103;
    panda$core$String* wrapped4118;
    panda$core$String* nonNullValue4123;
    panda$core$String* result4134;
    panda$core$String* targetType4167;
    panda$core$String* wrapperTypeName4170;
    panda$core$String* wrapperType4173;
    panda$core$String* srcCast4176;
    panda$core$String* load4195;
    panda$core$String* result4212;
    org$pandalanguage$pandac$ClassDecl* $tmp4081 = (($fn4080) self->compiler->$class->vtable[14])(self->compiler, p_dstType);
    target4079 = $tmp4081;
    panda$core$Bit $tmp4082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4082.value) {
    {
        testStart4083 = self->currentBlock;
        panda$core$String* $tmp4086 = (($fn4085) self->$class->vtable[4])(self);
        isNonNull4084 = $tmp4086;
        panda$core$String* $tmp4088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4087, isNonNull4084);
        panda$core$String* $tmp4090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4088, &$s4089);
        panda$core$String* $tmp4092 = (($fn4091) self->$class->vtable[15])(self, p_srcType);
        panda$core$String* $tmp4093 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4090, $tmp4092);
        panda$core$String* $tmp4095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4093, &$s4094);
        panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4095, p_value);
        panda$core$String* $tmp4098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, &$s4097);
        (($fn4099) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4098);
        panda$core$String* $tmp4102 = (($fn4101) self->$class->vtable[5])(self);
        nonNullLabel4100 = $tmp4102;
        panda$core$String* $tmp4105 = (($fn4104) self->$class->vtable[5])(self);
        endLabel4103 = $tmp4105;
        panda$core$String* $tmp4107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4106, isNonNull4084);
        panda$core$String* $tmp4109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4107, &$s4108);
        panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4109, nonNullLabel4100);
        panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, &$s4111);
        panda$core$String* $tmp4113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, endLabel4103);
        panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4113, &$s4114);
        (($fn4116) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4115);
        (($fn4117) self->$class->vtable[6])(self, nonNullLabel4100, p_out);
        panda$core$Object* $tmp4120 = (($fn4119) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4122 = (($fn4121) self->$class->vtable[49])(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp4120), p_out);
        wrapped4118 = $tmp4122;
        panda$core$Object* $tmp4125 = (($fn4124) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4127 = (($fn4126) self->$class->vtable[50])(self, wrapped4118, ((org$pandalanguage$pandac$Type*) $tmp4125), p_dstType, p_out);
        nonNullValue4123 = $tmp4127;
        panda$core$String* $tmp4129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4128, endLabel4103);
        panda$core$String* $tmp4131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4129, &$s4130);
        (($fn4132) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4131);
        (($fn4133) self->$class->vtable[6])(self, endLabel4103, p_out);
        panda$core$String* $tmp4136 = (($fn4135) self->$class->vtable[4])(self);
        result4134 = $tmp4136;
        panda$core$String* $tmp4138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4137, result4134);
        panda$core$String* $tmp4140 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4138, &$s4139);
        panda$core$String* $tmp4142 = (($fn4141) self->$class->vtable[15])(self, p_dstType);
        panda$core$String* $tmp4143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4140, $tmp4142);
        panda$core$String* $tmp4145 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4143, &$s4144);
        panda$core$Object* $tmp4148 = (($fn4147) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4150 = (($fn4149) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp4148));
        panda$core$String* $tmp4151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4146, $tmp4150);
        panda$core$String* $tmp4153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4151, &$s4152);
        panda$core$String* $tmp4154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4145, $tmp4153);
        panda$core$String* $tmp4156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4155, testStart4083);
        panda$core$String* $tmp4158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4156, &$s4157);
        panda$core$String* $tmp4159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4158, nonNullValue4123);
        panda$core$String* $tmp4161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4159, &$s4160);
        panda$core$String* $tmp4162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4161, nonNullLabel4100);
        panda$core$String* $tmp4164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4162, &$s4163);
        panda$core$String* $tmp4165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4154, $tmp4164);
        (($fn4166) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4165);
        return result4134;
    }
    }
    panda$core$String* $tmp4169 = (($fn4168) self->$class->vtable[15])(self, p_dstType);
    targetType4167 = $tmp4169;
    panda$core$String* $tmp4172 = (($fn4171) self->$class->vtable[16])(self, p_dstType);
    wrapperTypeName4170 = $tmp4172;
    panda$core$String* $tmp4175 = (($fn4174) self->$class->vtable[17])(self, p_dstType);
    wrapperType4173 = $tmp4175;
    panda$core$String* $tmp4178 = (($fn4177) self->$class->vtable[4])(self);
    srcCast4176 = $tmp4178;
    panda$core$String* $tmp4180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4179, srcCast4176);
    panda$core$String* $tmp4182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4180, &$s4181);
    panda$core$String* $tmp4184 = (($fn4183) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4182, $tmp4184);
    panda$core$String* $tmp4187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4185, &$s4186);
    panda$core$String* $tmp4188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4187, p_value);
    panda$core$String* $tmp4190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4188, &$s4189);
    panda$core$String* $tmp4191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4190, wrapperType4173);
    panda$core$String* $tmp4193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4191, &$s4192);
    (($fn4194) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4193);
    panda$core$String* $tmp4197 = (($fn4196) self->$class->vtable[4])(self);
    load4195 = $tmp4197;
    panda$core$String* $tmp4199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4198, load4195);
    panda$core$String* $tmp4201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4199, &$s4200);
    panda$core$String* $tmp4202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4201, wrapperTypeName4170);
    panda$core$String* $tmp4204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4202, &$s4203);
    panda$core$String* $tmp4205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4204, wrapperType4173);
    panda$core$String* $tmp4207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4205, &$s4206);
    panda$core$String* $tmp4208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4207, srcCast4176);
    panda$core$String* $tmp4210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4208, &$s4209);
    (($fn4211) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4210);
    panda$core$String* $tmp4214 = (($fn4213) self->$class->vtable[4])(self);
    result4212 = $tmp4214;
    panda$core$String* $tmp4216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4215, result4212);
    panda$core$String* $tmp4218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4216, &$s4217);
    panda$core$String* $tmp4219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4218, wrapperTypeName4170);
    panda$core$String* $tmp4221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4219, &$s4220);
    panda$core$String* $tmp4222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4221, load4195);
    panda$core$String* $tmp4224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4222, &$s4223);
    panda$core$String* $tmp4225 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4224, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp4227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4225, &$s4226);
    (($fn4228) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4227);
    return result4212;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType4229;
    panda$core$String* result4232;
    panda$core$String* $tmp4231 = (($fn4230) self->$class->vtable[19])(self, p_dstType);
    nullableType4229 = $tmp4231;
    panda$core$String* $tmp4234 = (($fn4233) self->$class->vtable[4])(self);
    result4232 = $tmp4234;
    panda$core$String* $tmp4236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4235, result4232);
    panda$core$String* $tmp4238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4236, &$s4237);
    panda$core$String* $tmp4239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4238, nullableType4229);
    panda$core$String* $tmp4241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4239, &$s4240);
    panda$core$String* $tmp4244 = (($fn4243) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4242, $tmp4244);
    panda$core$String* $tmp4247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4245, &$s4246);
    panda$core$String* $tmp4249 = (($fn4248) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4247, $tmp4249);
    panda$core$String* $tmp4252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4250, &$s4251);
    panda$core$String* $tmp4253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4252, p_value);
    panda$core$String* $tmp4255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4253, &$s4254);
    panda$core$String* $tmp4256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4241, $tmp4255);
    (($fn4257) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4256);
    return result4232;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4258;
    panda$core$String* $tmp4260 = (($fn4259) self->$class->vtable[4])(self);
    result4258 = $tmp4260;
    panda$core$String* $tmp4262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4261, result4258);
    panda$core$String* $tmp4264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4262, &$s4263);
    panda$core$String* $tmp4266 = (($fn4265) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4264, $tmp4266);
    panda$core$String* $tmp4269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4267, &$s4268);
    panda$core$String* $tmp4270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4269, p_value);
    panda$core$String* $tmp4272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4270, &$s4271);
    (($fn4273) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4272);
    return result4258;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op4274;
    panda$core$Int64 size14277;
    panda$core$Int64 size24280;
    org$pandalanguage$pandac$ClassDecl* srcClass4289;
    org$pandalanguage$pandac$ClassDecl* targetClass4292;
    panda$core$String* srcType4346;
    panda$core$String* dstType4349;
    panda$core$String* result4353;
    panda$core$Bit $tmp4276 = (($fn4275) p_target->$class->vtable[7])(p_target);
    if ($tmp4276.value) {
    {
        panda$core$Int64 $tmp4279 = (($fn4278) self->$class->vtable[10])(self, p_src);
        size14277 = $tmp4279;
        panda$core$Int64 $tmp4282 = (($fn4281) self->$class->vtable[10])(self, p_target);
        size24280 = $tmp4282;
        panda$core$Bit $tmp4283 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size14277, size24280);
        if ($tmp4283.value) {
        {
            op4274 = &$s4284;
        }
        }
        else {
        panda$core$Bit $tmp4285 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size14277, size24280);
        if ($tmp4285.value) {
        {
            panda$core$Bit $tmp4286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp4286.value) {
            {
                op4274 = &$s4287;
            }
            }
            else {
            {
                op4274 = &$s4288;
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
        org$pandalanguage$pandac$ClassDecl* $tmp4291 = (($fn4290) self->compiler->$class->vtable[14])(self->compiler, p_src);
        srcClass4289 = $tmp4291;
        org$pandalanguage$pandac$ClassDecl* $tmp4294 = (($fn4293) self->compiler->$class->vtable[14])(self->compiler, p_target);
        targetClass4292 = $tmp4294;
        panda$core$Bit $tmp4297 = (($fn4296) self->compiler->$class->vtable[9])(self->compiler, srcClass4289);
        bool $tmp4295 = $tmp4297.value;
        if (!$tmp4295) goto $l4298;
        panda$core$Bit $tmp4300 = (($fn4299) self->compiler->$class->vtable[9])(self->compiler, targetClass4292);
        panda$core$Bit $tmp4301 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4300);
        $tmp4295 = $tmp4301.value;
        $l4298:;
        panda$core$Bit $tmp4302 = { $tmp4295 };
        if ($tmp4302.value) {
        {
            panda$core$String* $tmp4304 = (($fn4303) self->$class->vtable[47])(self, p_value, p_src, p_target, p_out);
            return $tmp4304;
        }
        }
        else {
        panda$core$Bit $tmp4307 = (($fn4306) self->compiler->$class->vtable[9])(self->compiler, srcClass4289);
        panda$core$Bit $tmp4308 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4307);
        bool $tmp4305 = $tmp4308.value;
        if (!$tmp4305) goto $l4309;
        panda$core$Bit $tmp4311 = (($fn4310) self->compiler->$class->vtable[9])(self->compiler, targetClass4292);
        $tmp4305 = $tmp4311.value;
        $l4309:;
        panda$core$Bit $tmp4312 = { $tmp4305 };
        if ($tmp4312.value) {
        {
            panda$core$String* $tmp4314 = (($fn4313) self->$class->vtable[49])(self, p_value, p_src, p_target, p_out);
            return $tmp4314;
        }
        }
        else {
        panda$core$Bit $tmp4318 = (($fn4317) self->compiler->$class->vtable[9])(self->compiler, srcClass4289);
        bool $tmp4316 = $tmp4318.value;
        if (!$tmp4316) goto $l4319;
        panda$core$Bit $tmp4320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp4316 = $tmp4320.value;
        $l4319:;
        panda$core$Bit $tmp4321 = { $tmp4316 };
        bool $tmp4315 = $tmp4321.value;
        if (!$tmp4315) goto $l4322;
        panda$core$Object* $tmp4324 = (($fn4323) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4326 = (($fn4325) ((org$pandalanguage$pandac$Type*) $tmp4324)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp4324), ((panda$core$Object*) p_src));
        $tmp4315 = $tmp4326.value;
        $l4322:;
        panda$core$Bit $tmp4327 = { $tmp4315 };
        if ($tmp4327.value) {
        {
            panda$core$String* $tmp4329 = (($fn4328) self->$class->vtable[50])(self, p_value, p_src, p_target, p_out);
            return $tmp4329;
        }
        }
        else {
        panda$core$Bit $tmp4333 = (($fn4332) self->compiler->$class->vtable[9])(self->compiler, targetClass4292);
        bool $tmp4331 = $tmp4333.value;
        if (!$tmp4331) goto $l4334;
        panda$core$Bit $tmp4335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp4331 = $tmp4335.value;
        $l4334:;
        panda$core$Bit $tmp4336 = { $tmp4331 };
        bool $tmp4330 = $tmp4336.value;
        if (!$tmp4330) goto $l4337;
        panda$core$Object* $tmp4339 = (($fn4338) p_src->subtypes->$class->vtable[2])(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4341 = (($fn4340) ((org$pandalanguage$pandac$Type*) $tmp4339)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp4339), ((panda$core$Object*) p_target));
        $tmp4330 = $tmp4341.value;
        $l4337:;
        panda$core$Bit $tmp4342 = { $tmp4330 };
        if ($tmp4342.value) {
        {
            panda$core$String* $tmp4344 = (($fn4343) self->$class->vtable[51])(self, p_value, p_src, p_target, p_out);
            return $tmp4344;
        }
        }
        }
        }
        }
        op4274 = &$s4345;
    }
    }
    panda$core$String* $tmp4348 = (($fn4347) self->$class->vtable[15])(self, p_src);
    srcType4346 = $tmp4348;
    panda$core$String* $tmp4351 = (($fn4350) self->$class->vtable[15])(self, p_target);
    dstType4349 = $tmp4351;
    panda$core$Bit $tmp4352 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType4346, dstType4349);
    if ($tmp4352.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp4355 = (($fn4354) self->$class->vtable[4])(self);
    result4353 = $tmp4355;
    panda$core$String* $tmp4357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4356, result4353);
    panda$core$String* $tmp4359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4357, &$s4358);
    panda$core$String* $tmp4360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4359, op4274);
    panda$core$String* $tmp4362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4360, &$s4361);
    panda$core$String* $tmp4363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4362, srcType4346);
    panda$core$String* $tmp4365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4363, &$s4364);
    panda$core$String* $tmp4366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4365, p_value);
    panda$core$String* $tmp4368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4366, &$s4367);
    panda$core$String* $tmp4369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4368, dstType4349);
    panda$core$String* $tmp4371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4369, &$s4370);
    (($fn4372) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4371);
    return result4353;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4373;
    panda$core$Object* $tmp4374 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4376 = (($fn4375) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4374), p_out);
    base4373 = $tmp4376;
    panda$core$Object* $tmp4377 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4379 = (($fn4378) self->$class->vtable[52])(self, base4373, ((org$pandalanguage$pandac$IRNode*) $tmp4377)->type, p_cast->type, p_out);
    return $tmp4379;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4380;
    panda$core$String* t4383;
    panda$core$String* value4388;
    panda$core$String* result4400;
    org$pandalanguage$pandac$FieldDecl* lastField4403;
    panda$core$String* value4428;
    panda$core$String* result4440;
    org$pandalanguage$pandac$FieldDecl* lastField4443;
    panda$core$String* alloca4468;
    panda$core$String* result4490;
    panda$core$String* callRef4507;
    panda$core$String* result4520;
    panda$core$String* classPtr4536;
    panda$core$String* className4539;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4569;
    org$pandalanguage$pandac$ClassDecl* $tmp4382 = (($fn4381) self->compiler->$class->vtable[14])(self->compiler, p_construct->type);
    cl4380 = $tmp4382;
    panda$core$String* $tmp4385 = (($fn4384) self->$class->vtable[15])(self, p_construct->type);
    t4383 = $tmp4385;
    panda$core$Bit $tmp4387 = (($fn4386) p_construct->type->$class->vtable[6])(p_construct->type);
    if ($tmp4387.value) {
    {
        panda$core$Object* $tmp4389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4390 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4389)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4392 = (($fn4391) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4390), p_out);
        value4388 = $tmp4392;
        panda$core$Object* $tmp4393 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4394 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4393)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4394)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp4395.value) {
        {
            panda$core$String* $tmp4397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4396, value4388);
            panda$core$String* $tmp4399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4397, &$s4398);
            return $tmp4399;
        }
        }
        panda$core$String* $tmp4402 = (($fn4401) self->$class->vtable[4])(self);
        result4400 = $tmp4402;
        panda$core$Int64 $tmp4404 = panda$collections$Array$get_count$R$panda$core$Int64(cl4380->fields);
        panda$core$Int64 $tmp4405 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4404, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4406 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl4380->fields, $tmp4405);
        lastField4403 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4406);
        panda$core$String* $tmp4408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4407, result4400);
        panda$core$String* $tmp4410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4408, &$s4409);
        panda$core$String* $tmp4411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4410, t4383);
        panda$core$String* $tmp4413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4411, &$s4412);
        panda$core$String* $tmp4415 = (($fn4414) self->$class->vtable[15])(self, lastField4403->type);
        panda$core$String* $tmp4416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4413, $tmp4415);
        panda$core$String* $tmp4418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4416, &$s4417);
        panda$core$String* $tmp4420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4419, value4388);
        panda$core$String* $tmp4422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4420, &$s4421);
        panda$core$String* $tmp4423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4418, $tmp4422);
        (($fn4424) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4423);
        return result4400;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4425 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4427 = (($fn4426) p_construct->type->$class->vtable[4])(p_construct->type, ((panda$core$Object*) $tmp4425));
    if ($tmp4427.value) {
    {
        panda$core$Object* $tmp4429 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4430 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4429)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4432 = (($fn4431) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4430), p_out);
        value4428 = $tmp4432;
        panda$core$Object* $tmp4433 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4434 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4433)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4434)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp4435.value) {
        {
            panda$core$String* $tmp4437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4436, value4428);
            panda$core$String* $tmp4439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4437, &$s4438);
            return $tmp4439;
        }
        }
        panda$core$String* $tmp4442 = (($fn4441) self->$class->vtable[4])(self);
        result4440 = $tmp4442;
        panda$core$Int64 $tmp4444 = panda$collections$Array$get_count$R$panda$core$Int64(cl4380->fields);
        panda$core$Int64 $tmp4445 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4444, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4446 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl4380->fields, $tmp4445);
        lastField4443 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4446);
        panda$core$String* $tmp4448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4447, result4440);
        panda$core$String* $tmp4450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4448, &$s4449);
        panda$core$String* $tmp4451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4450, t4383);
        panda$core$String* $tmp4453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4451, &$s4452);
        panda$core$String* $tmp4455 = (($fn4454) self->$class->vtable[15])(self, lastField4443->type);
        panda$core$String* $tmp4456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4453, $tmp4455);
        panda$core$String* $tmp4458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4456, &$s4457);
        panda$core$String* $tmp4460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4459, value4428);
        panda$core$String* $tmp4462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4460, &$s4461);
        panda$core$String* $tmp4463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4458, $tmp4462);
        (($fn4464) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4463);
        return result4440;
    }
    }
    panda$core$Bit $tmp4466 = (($fn4465) self->compiler->$class->vtable[9])(self->compiler, cl4380);
    if ($tmp4466.value) {
    {
        panda$core$Int64 $tmp4467 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4467;
        panda$core$String* $tmp4470 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4469, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp4472 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4470, &$s4471);
        alloca4468 = $tmp4472;
        panda$core$String* $tmp4474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4473, alloca4468);
        panda$core$String* $tmp4476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4474, &$s4475);
        panda$core$String* $tmp4477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4476, t4383);
        panda$core$String* $tmp4479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4477, &$s4478);
        (($fn4480) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4479);
        panda$core$Object* $tmp4481 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4482, t4383);
        panda$core$String* $tmp4485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4483, &$s4484);
        panda$core$String* $tmp4486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4485, alloca4468);
        panda$core$String* $tmp4488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4486, &$s4487);
        (($fn4489) self->$class->vtable[70])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4481), $tmp4488, p_out);
        panda$core$String* $tmp4492 = (($fn4491) self->$class->vtable[4])(self);
        result4490 = $tmp4492;
        panda$core$String* $tmp4494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4493, result4490);
        panda$core$String* $tmp4496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4494, &$s4495);
        panda$core$String* $tmp4497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4496, t4383);
        panda$core$String* $tmp4499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4497, &$s4498);
        panda$core$String* $tmp4500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4499, t4383);
        panda$core$String* $tmp4502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4500, &$s4501);
        panda$core$String* $tmp4503 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4502, alloca4468);
        panda$core$String* $tmp4505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4503, &$s4504);
        (($fn4506) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4505);
        return result4490;
    }
    }
    panda$core$String* $tmp4509 = (($fn4508) self->$class->vtable[4])(self);
    callRef4507 = $tmp4509;
    panda$core$String* $tmp4511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4510, callRef4507);
    panda$core$String* $tmp4513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4511, &$s4512);
    panda$core$Int64 $tmp4515 = (($fn4514) self->$class->vtable[10])(self, p_construct->type);
    panda$core$String* $tmp4516 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4513, ((panda$core$Object*) wrap_panda$core$Int64($tmp4515)));
    panda$core$String* $tmp4518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4516, &$s4517);
    (($fn4519) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4518);
    panda$core$String* $tmp4522 = (($fn4521) self->$class->vtable[4])(self);
    result4520 = $tmp4522;
    panda$core$String* $tmp4524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4523, result4520);
    panda$core$String* $tmp4526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4524, &$s4525);
    panda$core$String* $tmp4527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4526, callRef4507);
    panda$core$String* $tmp4529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4527, &$s4528);
    panda$core$String* $tmp4531 = (($fn4530) self->$class->vtable[15])(self, p_construct->type);
    panda$core$String* $tmp4532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4529, $tmp4531);
    panda$core$String* $tmp4534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4532, &$s4533);
    (($fn4535) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4534);
    panda$core$String* $tmp4538 = (($fn4537) self->$class->vtable[4])(self);
    classPtr4536 = $tmp4538;
    panda$core$Bit $tmp4541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    bool $tmp4540 = $tmp4541.value;
    if (!$tmp4540) goto $l4542;
    panda$core$Bit $tmp4544 = (($fn4543) cl4380->$class->vtable[5])(cl4380);
    panda$core$Bit $tmp4545 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4544);
    $tmp4540 = $tmp4545.value;
    $l4542:;
    panda$core$Bit $tmp4546 = { $tmp4540 };
    if ($tmp4546.value) {
    {
        panda$core$Object* $tmp4548 = (($fn4547) p_construct->type->subtypes->$class->vtable[2])(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4550 = (($fn4549) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$Type*) $tmp4548));
        className4539 = $tmp4550;
    }
    }
    else {
    {
        panda$core$String* $tmp4552 = (($fn4551) self->$class->vtable[14])(self, p_construct->type);
        className4539 = $tmp4552;
    }
    }
    panda$core$String* $tmp4554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4553, classPtr4536);
    panda$core$String* $tmp4556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4554, &$s4555);
    panda$core$String* $tmp4557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4556, className4539);
    panda$core$String* $tmp4559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4557, &$s4558);
    panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4559, t4383);
    panda$core$String* $tmp4562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4560, &$s4561);
    panda$core$String* $tmp4563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4562, result4520);
    panda$core$String* $tmp4565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4563, &$s4564);
    panda$core$String* $tmp4567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4565, &$s4566);
    (($fn4568) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4567);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4571 = (($fn4570) self->$class->vtable[26])(self, cl4380);
    cc4569 = $tmp4571;
    panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4572, cc4569->type);
    panda$core$String* $tmp4575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4573, &$s4574);
    panda$core$String* $tmp4576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4575, cc4569->name);
    panda$core$String* $tmp4578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4576, &$s4577);
    panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4579, classPtr4536);
    panda$core$String* $tmp4582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4580, &$s4581);
    panda$core$String* $tmp4583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4578, $tmp4582);
    (($fn4584) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4583);
    panda$core$Object* $tmp4585 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4586, t4383);
    panda$core$String* $tmp4589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4587, &$s4588);
    panda$core$String* $tmp4590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4589, result4520);
    panda$core$String* $tmp4592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4590, &$s4591);
    (($fn4593) self->$class->vtable[70])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4585), $tmp4592, p_out);
    return result4520;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4594 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp4594;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4596 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp4597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4595, $tmp4596);
    return $tmp4597;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s4598;
    }
    }
    return &$s4599;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4603;
    panda$core$String* t4606;
    panda$core$Bit $tmp4600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp4600.value) {
    {
        panda$core$String* $tmp4602 = (($fn4601) self->$class->vtable[29])(self, p_v);
        return $tmp4602;
    }
    }
    panda$core$String* $tmp4605 = (($fn4604) self->$class->vtable[4])(self);
    result4603 = $tmp4605;
    panda$core$String* $tmp4608 = (($fn4607) self->$class->vtable[15])(self, p_v->type);
    t4606 = $tmp4608;
    panda$core$String* $tmp4610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4609, result4603);
    panda$core$String* $tmp4612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4610, &$s4611);
    panda$core$String* $tmp4613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4612, t4606);
    panda$core$String* $tmp4615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4613, &$s4614);
    panda$core$String* $tmp4616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4615, t4606);
    panda$core$String* $tmp4618 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4616, &$s4617);
    panda$core$String* $tmp4620 = (($fn4619) self->$class->vtable[29])(self, p_v);
    panda$core$String* $tmp4621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4618, $tmp4620);
    panda$core$String* $tmp4623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4621, &$s4622);
    (($fn4624) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4623);
    return result4603;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars4626;
    panda$core$String* charsType4631;
    panda$core$String* separator4649;
    panda$collections$Iterator* c$Iter4651;
    panda$core$Char8 c4664;
    panda$core$String* result4682;
    org$pandalanguage$pandac$ClassDecl* string4687;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4691;
    panda$core$Int64 $tmp4625 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4625;
    panda$core$String* $tmp4628 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4627, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4628, &$s4629);
    chars4626 = $tmp4630;
    panda$collections$ListView* $tmp4633 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4634 = ((panda$collections$CollectionView*) $tmp4633)->$class->itable;
    while ($tmp4634->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4634 = $tmp4634->next;
    }
    $fn4636 $tmp4635 = $tmp4634->methods[0];
    panda$core$Int64 $tmp4637 = $tmp4635(((panda$collections$CollectionView*) $tmp4633));
    panda$core$String* $tmp4638 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4632, ((panda$core$Object*) wrap_panda$core$Int64($tmp4637)));
    panda$core$String* $tmp4640 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4638, &$s4639);
    charsType4631 = $tmp4640;
    panda$core$String* $tmp4642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4641, chars4626);
    panda$core$String* $tmp4644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4642, &$s4643);
    panda$core$String* $tmp4645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4644, charsType4631);
    panda$core$String* $tmp4647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4645, &$s4646);
    (($fn4648) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4647);
    separator4649 = &$s4650;
    {
        panda$collections$ListView* $tmp4652 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp4653 = ((panda$collections$Iterable*) $tmp4652)->$class->itable;
        while ($tmp4653->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4653 = $tmp4653->next;
        }
        $fn4655 $tmp4654 = $tmp4653->methods[0];
        panda$collections$Iterator* $tmp4656 = $tmp4654(((panda$collections$Iterable*) $tmp4652));
        c$Iter4651 = $tmp4656;
        $l4657:;
        ITable* $tmp4659 = c$Iter4651->$class->itable;
        while ($tmp4659->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4659 = $tmp4659->next;
        }
        $fn4661 $tmp4660 = $tmp4659->methods[0];
        panda$core$Bit $tmp4662 = $tmp4660(c$Iter4651);
        panda$core$Bit $tmp4663 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4662);
        if (!$tmp4663.value) goto $l4658;
        {
            ITable* $tmp4665 = c$Iter4651->$class->itable;
            while ($tmp4665->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4665 = $tmp4665->next;
            }
            $fn4667 $tmp4666 = $tmp4665->methods[1];
            panda$core$Object* $tmp4668 = $tmp4666(c$Iter4651);
            c4664 = ((panda$core$Char8$wrapper*) $tmp4668)->value;
            panda$core$String* $tmp4670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4669, separator4649);
            panda$core$String* $tmp4672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4670, &$s4671);
            panda$core$Int8 $tmp4673 = panda$core$Char8$convert$R$panda$core$Int8(c4664);
            panda$core$String* $tmp4674 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4672, ((panda$core$Object*) wrap_panda$core$Int8($tmp4673)));
            panda$core$String* $tmp4676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4674, &$s4675);
            (($fn4677) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4676);
            separator4649 = &$s4678;
        }
        goto $l4657;
        $l4658:;
    }
    (($fn4680) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s4679);
    panda$core$Int64 $tmp4681 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4681;
    panda$core$String* $tmp4684 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4683, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4684, &$s4685);
    result4682 = $tmp4686;
    org$pandalanguage$pandac$Type* $tmp4688 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4690 = (($fn4689) self->compiler->$class->vtable[14])(self->compiler, $tmp4688);
    string4687 = $tmp4690;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4693 = (($fn4692) self->$class->vtable[26])(self, string4687);
    cc4691 = $tmp4693;
    panda$core$String* $tmp4695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4694, result4682);
    panda$core$String* $tmp4697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4695, &$s4696);
    panda$core$String* $tmp4699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4698, cc4691->type);
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4699, &$s4700);
    panda$core$String* $tmp4702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4701, cc4691->name);
    panda$core$String* $tmp4704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4702, &$s4703);
    panda$core$String* $tmp4705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4697, $tmp4704);
    panda$core$String* $tmp4707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4705, &$s4706);
    panda$core$String* $tmp4709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4708, charsType4631);
    panda$core$String* $tmp4711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4709, &$s4710);
    panda$core$String* $tmp4712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4711, chars4626);
    panda$core$String* $tmp4714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4712, &$s4713);
    panda$core$String* $tmp4715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4707, $tmp4714);
    panda$collections$ListView* $tmp4717 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4718 = ((panda$collections$CollectionView*) $tmp4717)->$class->itable;
    while ($tmp4718->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4718 = $tmp4718->next;
    }
    $fn4720 $tmp4719 = $tmp4718->methods[0];
    panda$core$Int64 $tmp4721 = $tmp4719(((panda$collections$CollectionView*) $tmp4717));
    panda$core$String* $tmp4722 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4716, ((panda$core$Object*) wrap_panda$core$Int64($tmp4721)));
    panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4722, &$s4723);
    panda$core$String* $tmp4725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4715, $tmp4724);
    panda$core$String* $tmp4727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4725, &$s4726);
    (($fn4728) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4727);
    return result4682;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp4730 = (($fn4729) self->inlineContext->$class->vtable[7])(self->inlineContext);
    panda$core$Bit $tmp4731 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4730, ((panda$core$Int64) { 0 }));
    if ($tmp4731.value) {
    {
        panda$core$Object* $tmp4733 = (($fn4732) self->inlineContext->$class->vtable[4])(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4733)->selfRef;
    }
    }
    return &$s4734;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4735;
    panda$core$String* $tmp4737 = (($fn4736) self->$class->vtable[4])(self);
    result4735 = $tmp4737;
    panda$core$String* $tmp4739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4738, result4735);
    panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4739, &$s4740);
    org$pandalanguage$pandac$Type* $tmp4743 = (($fn4742) self->currentMethod->owner->$class->vtable[3])(self->currentMethod->owner);
    panda$core$String* $tmp4745 = (($fn4744) self->$class->vtable[15])(self, $tmp4743);
    panda$core$String* $tmp4746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, $tmp4745);
    panda$core$String* $tmp4748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4746, &$s4747);
    panda$core$String* $tmp4750 = (($fn4749) self->$class->vtable[15])(self, p_s->type);
    panda$core$String* $tmp4751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4748, $tmp4750);
    (($fn4752) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4751);
    return result4735;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4753;
    org$pandalanguage$pandac$ClassDecl* cl4757;
    panda$core$String* resultValue4761;
    panda$core$String* field4767;
    panda$core$String* result4798;
    panda$core$Object* $tmp4754 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4756 = (($fn4755) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4754), p_out);
    value4753 = $tmp4756;
    panda$core$Object* $tmp4758 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4760 = (($fn4759) self->compiler->$class->vtable[14])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4758)->type);
    cl4757 = $tmp4760;
    panda$core$Bit $tmp4763 = (($fn4762) self->compiler->$class->vtable[9])(self->compiler, cl4757);
    if ($tmp4763.value) {
    {
        panda$core$Object* $tmp4764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4765 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4764)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4765.value) {
        {
            return &$s4766;
        }
        }
        panda$core$String* $tmp4769 = (($fn4768) self->$class->vtable[4])(self);
        field4767 = $tmp4769;
        panda$core$String* $tmp4771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4770, field4767);
        panda$core$String* $tmp4773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4771, &$s4772);
        panda$core$String* $tmp4774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4773, value4753);
        panda$core$String* $tmp4776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4774, &$s4775);
        (($fn4777) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4776);
        panda$core$String* $tmp4779 = (($fn4778) self->$class->vtable[4])(self);
        resultValue4761 = $tmp4779;
        panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4780, resultValue4761);
        panda$core$String* $tmp4783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4781, &$s4782);
        panda$core$String* $tmp4784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4783, field4767);
        panda$core$String* $tmp4786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4784, &$s4785);
        (($fn4787) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4786);
    }
    }
    else {
    {
        panda$core$String* $tmp4789 = (($fn4788) self->$class->vtable[4])(self);
        resultValue4761 = $tmp4789;
        panda$core$String* $tmp4791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4790, resultValue4761);
        panda$core$String* $tmp4793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4791, &$s4792);
        panda$core$String* $tmp4794 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4793, value4753);
        panda$core$String* $tmp4796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4794, &$s4795);
        (($fn4797) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4796);
    }
    }
    panda$core$String* $tmp4800 = (($fn4799) self->$class->vtable[4])(self);
    result4798 = $tmp4800;
    panda$core$String* $tmp4802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4801, result4798);
    panda$core$String* $tmp4804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4802, &$s4803);
    panda$core$String* $tmp4805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4804, resultValue4761);
    panda$core$String* $tmp4807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4805, &$s4806);
    (($fn4808) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4807);
    return result4798;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4809;
    org$pandalanguage$pandac$ClassDecl* cl4813;
    panda$core$String* resultValue4817;
    panda$core$String* result4843;
    panda$core$Object* $tmp4810 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4812 = (($fn4811) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4810), p_out);
    value4809 = $tmp4812;
    panda$core$Object* $tmp4814 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4816 = (($fn4815) self->compiler->$class->vtable[14])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4814)->type);
    cl4813 = $tmp4816;
    panda$core$Bit $tmp4819 = (($fn4818) self->compiler->$class->vtable[9])(self->compiler, cl4813);
    if ($tmp4819.value) {
    {
        panda$core$Object* $tmp4820 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4821 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4820)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4821.value) {
        {
            return &$s4822;
        }
        }
        panda$core$String* $tmp4824 = (($fn4823) self->$class->vtable[4])(self);
        resultValue4817 = $tmp4824;
        panda$core$String* $tmp4826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4825, resultValue4817);
        panda$core$String* $tmp4828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4826, &$s4827);
        panda$core$String* $tmp4829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4828, value4809);
        panda$core$String* $tmp4831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4829, &$s4830);
        (($fn4832) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4831);
    }
    }
    else {
    {
        panda$core$String* $tmp4834 = (($fn4833) self->$class->vtable[4])(self);
        resultValue4817 = $tmp4834;
        panda$core$String* $tmp4836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4835, resultValue4817);
        panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4836, &$s4837);
        panda$core$String* $tmp4839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, value4809);
        panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, &$s4840);
        (($fn4842) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4841);
    }
    }
    panda$core$String* $tmp4845 = (($fn4844) self->$class->vtable[4])(self);
    result4843 = $tmp4845;
    panda$core$String* $tmp4847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4846, result4843);
    panda$core$String* $tmp4849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4847, &$s4848);
    panda$core$String* $tmp4850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4849, resultValue4817);
    panda$core$String* $tmp4852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4850, &$s4851);
    (($fn4853) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4852);
    return result4843;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4854;
    panda$core$Object* $tmp4856 = (($fn4855) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4858 = (($fn4857) self->compiler->$class->vtable[14])(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4856));
    cl4854 = $tmp4858;
    panda$core$Bit $tmp4860 = (($fn4859) self->compiler->$class->vtable[9])(self->compiler, cl4854);
    if ($tmp4860.value) {
    {
        panda$core$Object* $tmp4863 = (($fn4862) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4865 = (($fn4864) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp4863));
        panda$core$String* $tmp4866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4861, $tmp4865);
        panda$core$String* $tmp4868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4866, &$s4867);
        return $tmp4868;
    }
    }
    else {
    {
        return &$s4869;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4870;
    panda$core$String* result4874;
    panda$core$Int64 $match$732704877;
    panda$core$Object* $tmp4871 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4873 = (($fn4872) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4871), p_out);
    base4870 = $tmp4873;
    panda$core$String* $tmp4876 = (($fn4875) self->$class->vtable[4])(self);
    result4874 = $tmp4876;
    {
        panda$core$Int64 $tmp4878 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
        $match$732704877 = $tmp4878;
        panda$core$Bit $tmp4879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$732704877, ((panda$core$Int64) { 52 }));
        if ($tmp4879.value) {
        {
            panda$core$String* $tmp4881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4880, result4874);
            panda$core$String* $tmp4883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4881, &$s4882);
            panda$core$String* $tmp4885 = (($fn4884) self->$class->vtable[15])(self, p_expr->type);
            panda$core$String* $tmp4886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4883, $tmp4885);
            panda$core$String* $tmp4888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4886, &$s4887);
            panda$core$String* $tmp4889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4888, base4870);
            panda$core$String* $tmp4891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4889, &$s4890);
            (($fn4892) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4891);
            return result4874;
        }
        }
        else {
        panda$core$Bit $tmp4894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$732704877, ((panda$core$Int64) { 49 }));
        bool $tmp4893 = $tmp4894.value;
        if ($tmp4893) goto $l4895;
        panda$core$Bit $tmp4896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$732704877, ((panda$core$Int64) { 50 }));
        $tmp4893 = $tmp4896.value;
        $l4895:;
        panda$core$Bit $tmp4897 = { $tmp4893 };
        if ($tmp4897.value) {
        {
            panda$core$String* $tmp4899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4898, result4874);
            panda$core$String* $tmp4901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4899, &$s4900);
            panda$core$String* $tmp4903 = (($fn4902) self->$class->vtable[15])(self, p_expr->type);
            panda$core$String* $tmp4904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4901, $tmp4903);
            panda$core$String* $tmp4906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4904, &$s4905);
            panda$core$String* $tmp4907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4906, base4870);
            panda$core$String* $tmp4909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4907, &$s4908);
            (($fn4910) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4909);
            return result4874;
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
    panda$core$Int64 $match$737914911;
    panda$core$String* value4949;
    panda$core$String* result4955;
    {
        $match$737914911 = p_expr->kind;
        panda$core$Bit $tmp4912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1023 }));
        if ($tmp4912.value) {
        {
            panda$core$String* $tmp4914 = (($fn4913) self->$class->vtable[39])(self, p_expr, p_out);
            return $tmp4914;
        }
        }
        else {
        panda$core$Bit $tmp4915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1005 }));
        if ($tmp4915.value) {
        {
            panda$core$String* $tmp4917 = (($fn4916) self->$class->vtable[46])(self, p_expr, p_out);
            return $tmp4917;
        }
        }
        else {
        panda$core$Bit $tmp4918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1009 }));
        if ($tmp4918.value) {
        {
            panda$core$String* $tmp4920 = (($fn4919) self->$class->vtable[53])(self, p_expr, p_out);
            return $tmp4920;
        }
        }
        else {
        panda$core$Bit $tmp4921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1004 }));
        if ($tmp4921.value) {
        {
            panda$core$String* $tmp4923 = (($fn4922) self->$class->vtable[55])(self, p_expr, p_out);
            return $tmp4923;
        }
        }
        else {
        panda$core$Bit $tmp4924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1032 }));
        if ($tmp4924.value) {
        {
            panda$core$String* $tmp4926 = (($fn4925) self->$class->vtable[56])(self, p_expr, p_out);
            return $tmp4926;
        }
        }
        else {
        panda$core$Bit $tmp4927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1011 }));
        if ($tmp4927.value) {
        {
            panda$core$String* $tmp4929 = (($fn4928) self->$class->vtable[57])(self, p_expr, p_out);
            return $tmp4929;
        }
        }
        else {
        panda$core$Bit $tmp4930 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1010 }));
        if ($tmp4930.value) {
        {
            panda$core$String* $tmp4932 = (($fn4931) self->$class->vtable[54])(self, p_expr, p_out);
            return $tmp4932;
        }
        }
        else {
        panda$core$Bit $tmp4933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1016 }));
        if ($tmp4933.value) {
        {
            panda$core$String* $tmp4935 = (($fn4934) self->$class->vtable[58])(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4935;
        }
        }
        else {
        panda$core$Bit $tmp4936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1026 }));
        if ($tmp4936.value) {
        {
            panda$core$String* $tmp4938 = (($fn4937) self->$class->vtable[48])(self, p_expr, p_out);
            return $tmp4938;
        }
        }
        else {
        panda$core$Bit $tmp4939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1033 }));
        if ($tmp4939.value) {
        {
            panda$core$String* $tmp4941 = (($fn4940) self->$class->vtable[59])(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4941;
        }
        }
        else {
        panda$core$Bit $tmp4942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1025 }));
        if ($tmp4942.value) {
        {
            panda$core$String* $tmp4944 = (($fn4943) self->$class->vtable[60])(self, p_expr, p_out);
            return $tmp4944;
        }
        }
        else {
        panda$core$Bit $tmp4945 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1024 }));
        if ($tmp4945.value) {
        {
            panda$core$String* $tmp4947 = (($fn4946) self->$class->vtable[61])(self, p_expr, p_out);
            return $tmp4947;
        }
        }
        else {
        panda$core$Bit $tmp4948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1027 }));
        if ($tmp4948.value) {
        {
            panda$core$Object* $tmp4950 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4952 = (($fn4951) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4950), p_out);
            value4949 = $tmp4952;
            (($fn4953) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))), ((panda$core$Object*) value4949));
            return value4949;
        }
        }
        else {
        panda$core$Bit $tmp4954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1028 }));
        if ($tmp4954.value) {
        {
            panda$core$Object* $tmp4957 = (($fn4956) self->reusedValues->$class->vtable[3])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))));
            result4955 = ((panda$core$String*) $tmp4957);
            return result4955;
        }
        }
        else {
        panda$core$Bit $tmp4958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1030 }));
        if ($tmp4958.value) {
        {
            panda$core$String* $tmp4960 = (($fn4959) self->$class->vtable[64])(self, p_expr, p_out);
            return $tmp4960;
        }
        }
        else {
        panda$core$Bit $tmp4961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1035 }));
        if ($tmp4961.value) {
        {
            panda$core$String* $tmp4963 = (($fn4962) self->$class->vtable[62])(self, p_expr, p_out);
            return $tmp4963;
        }
        }
        else {
        panda$core$Bit $tmp4964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1036 }));
        if ($tmp4964.value) {
        {
            panda$core$String* $tmp4966 = (($fn4965) self->$class->vtable[63])(self, p_expr, p_out);
            return $tmp4966;
        }
        }
        else {
        panda$core$Bit $tmp4967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$737914911, ((panda$core$Int64) { 1041 }));
        if ($tmp4967.value) {
        {
            panda$core$String* $tmp4969 = (($fn4968) self->$class->vtable[65])(self, p_expr, p_out);
            return $tmp4969;
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
    panda$core$String* $tmp4972 = (($fn4971) self->$class->vtable[15])(self, p_expr->type);
    panda$core$String* $tmp4973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4970, $tmp4972);
    panda$core$String* $tmp4975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4973, &$s4974);
    panda$core$String* $tmp4977 = (($fn4976) self->$class->vtable[66])(self, p_expr, p_out);
    panda$core$String* $tmp4978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4975, $tmp4977);
    panda$core$String* $tmp4980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4978, &$s4979);
    return $tmp4980;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4982;
    org$pandalanguage$pandac$IRNode* s4994;
    panda$core$Int64 $tmp4981 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4981;
    {
        ITable* $tmp4983 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4983->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4983 = $tmp4983->next;
        }
        $fn4985 $tmp4984 = $tmp4983->methods[0];
        panda$collections$Iterator* $tmp4986 = $tmp4984(((panda$collections$Iterable*) p_block->children));
        s$Iter4982 = $tmp4986;
        $l4987:;
        ITable* $tmp4989 = s$Iter4982->$class->itable;
        while ($tmp4989->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4989 = $tmp4989->next;
        }
        $fn4991 $tmp4990 = $tmp4989->methods[0];
        panda$core$Bit $tmp4992 = $tmp4990(s$Iter4982);
        panda$core$Bit $tmp4993 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4992);
        if (!$tmp4993.value) goto $l4988;
        {
            ITable* $tmp4995 = s$Iter4982->$class->itable;
            while ($tmp4995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4995 = $tmp4995->next;
            }
            $fn4997 $tmp4996 = $tmp4995->methods[1];
            panda$core$Object* $tmp4998 = $tmp4996(s$Iter4982);
            s4994 = ((org$pandalanguage$pandac$IRNode*) $tmp4998);
            (($fn4999) self->$class->vtable[85])(self, s4994, p_out);
        }
        goto $l4987;
        $l4988:;
    }
    panda$core$Int64 $tmp5000 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp5000;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m5001;
    panda$core$String* $match$763265002;
    panda$core$String* ptr5005;
    panda$core$String* arg5009;
    org$pandalanguage$pandac$Type* baseType5025;
    panda$core$String* base5031;
    panda$core$String* indexStruct5035;
    panda$core$String* index5039;
    panda$core$String* value5050;
    panda$core$String* ptr5056;
    panda$core$String* ptr5096;
    panda$core$String* cast5100;
    m5001 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$763265002 = ((org$pandalanguage$pandac$Symbol*) m5001->value)->name;
        panda$core$Bit $tmp5004 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$763265002, &$s5003);
        if ($tmp5004.value) {
        {
            panda$core$Object* $tmp5006 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5008 = (($fn5007) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5006), p_out);
            ptr5005 = $tmp5008;
            panda$core$Object* $tmp5010 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp5012 = (($fn5011) self->compiler->$class->vtable[51])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5010));
            panda$core$String* $tmp5014 = (($fn5013) self->$class->vtable[67])(self, $tmp5012, p_out);
            arg5009 = $tmp5014;
            panda$core$String* $tmp5016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5015, arg5009);
            panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5016, &$s5017);
            panda$core$String* $tmp5019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5018, ptr5005);
            panda$core$String* $tmp5021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5019, &$s5020);
            (($fn5022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5021);
        }
        }
        else {
        panda$core$Bit $tmp5024 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$763265002, &$s5023);
        if ($tmp5024.value) {
        {
            panda$core$Object* $tmp5026 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp5028 = (($fn5027) self->compiler->$class->vtable[51])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5026));
            panda$core$Object* $tmp5030 = (($fn5029) $tmp5028->type->subtypes->$class->vtable[2])($tmp5028->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType5025 = ((org$pandalanguage$pandac$Type*) $tmp5030);
            panda$core$Object* $tmp5032 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5034 = (($fn5033) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5032), p_out);
            base5031 = $tmp5034;
            panda$core$Object* $tmp5036 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp5038 = (($fn5037) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5036), p_out);
            indexStruct5035 = $tmp5038;
            panda$core$String* $tmp5041 = (($fn5040) self->$class->vtable[4])(self);
            index5039 = $tmp5041;
            panda$core$String* $tmp5043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5042, index5039);
            panda$core$String* $tmp5045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5043, &$s5044);
            panda$core$String* $tmp5046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5045, indexStruct5035);
            panda$core$String* $tmp5048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5046, &$s5047);
            (($fn5049) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5048);
            panda$core$Object* $tmp5051 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp5053 = (($fn5052) self->compiler->$class->vtable[51])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5051));
            panda$core$String* $tmp5055 = (($fn5054) self->$class->vtable[67])(self, $tmp5053, p_out);
            value5050 = $tmp5055;
            panda$core$String* $tmp5058 = (($fn5057) self->$class->vtable[4])(self);
            ptr5056 = $tmp5058;
            panda$core$String* $tmp5060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5059, ptr5056);
            panda$core$String* $tmp5062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5060, &$s5061);
            panda$core$String* $tmp5064 = (($fn5063) self->$class->vtable[15])(self, baseType5025);
            panda$core$String* $tmp5065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5062, $tmp5064);
            panda$core$String* $tmp5067 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5065, &$s5066);
            panda$core$String* $tmp5068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5067, base5031);
            panda$core$String* $tmp5070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5068, &$s5069);
            panda$core$String* $tmp5073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5071, &$s5072);
            panda$core$String* $tmp5075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5073, &$s5074);
            panda$core$String* $tmp5076 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5075, index5039);
            panda$core$String* $tmp5078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5076, &$s5077);
            panda$core$String* $tmp5079 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5070, $tmp5078);
            (($fn5080) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5079);
            panda$core$String* $tmp5082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5081, value5050);
            panda$core$String* $tmp5084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5082, &$s5083);
            panda$core$String* $tmp5086 = (($fn5085) self->$class->vtable[15])(self, baseType5025);
            panda$core$String* $tmp5087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5084, $tmp5086);
            panda$core$String* $tmp5089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5087, &$s5088);
            panda$core$String* $tmp5090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5089, ptr5056);
            panda$core$String* $tmp5092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5090, &$s5091);
            (($fn5093) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5092);
        }
        }
        else {
        panda$core$Bit $tmp5095 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$763265002, &$s5094);
        if ($tmp5095.value) {
        {
            panda$core$Object* $tmp5097 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5099 = (($fn5098) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5097), p_out);
            ptr5096 = $tmp5099;
            panda$core$String* $tmp5102 = (($fn5101) self->$class->vtable[4])(self);
            cast5100 = $tmp5102;
            panda$core$String* $tmp5104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5103, cast5100);
            panda$core$String* $tmp5106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5104, &$s5105);
            panda$core$String* $tmp5107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5106, ptr5096);
            panda$core$String* $tmp5109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5107, &$s5108);
            (($fn5110) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5109);
            panda$core$String* $tmp5112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5111, cast5100);
            panda$core$String* $tmp5114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5112, &$s5113);
            (($fn5115) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5114);
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
    org$pandalanguage$pandac$MethodDecl* m5116;
    org$pandalanguage$pandac$Type* actualMethodType5121;
    panda$core$String* actualResultType5122;
    panda$core$Bit isSuper5123;
    panda$collections$Array* args5150;
    panda$core$Int64 offset5153;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp5159;
    panda$core$String* arg5179;
    panda$core$String* refTarget5224;
    panda$core$String* methodRef5228;
    panda$core$String* separator5231;
    panda$core$String* indirectVar5236;
    panda$core$String* resultType5239;
    panda$collections$Iterator* a$Iter5290;
    panda$core$String* a5302;
    m5116 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp5118 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5116->owner)->name, &$s5117);
    if ($tmp5118.value) {
    {
        (($fn5119) self->$class->vtable[69])(self, p_call, p_out);
        return;
    }
    }
    if (m5116->owner->external.value) {
    {
        (($fn5120) self->$class->vtable[87])(self, m5116);
    }
    }
    panda$core$Int64 $tmp5125 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp5126 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5125, ((panda$core$Int64) { 1 }));
    bool $tmp5124 = $tmp5126.value;
    if (!$tmp5124) goto $l5127;
    panda$core$Object* $tmp5128 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5128)->kind, ((panda$core$Int64) { 1024 }));
    $tmp5124 = $tmp5129.value;
    $l5127:;
    panda$core$Bit $tmp5130 = { $tmp5124 };
    isSuper5123 = $tmp5130;
    panda$core$Bit $tmp5132 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper5123);
    bool $tmp5131 = $tmp5132.value;
    if (!$tmp5131) goto $l5133;
    panda$core$Bit $tmp5135 = (($fn5134) m5116->$class->vtable[3])(m5116);
    $tmp5131 = $tmp5135.value;
    $l5133:;
    panda$core$Bit $tmp5136 = { $tmp5131 };
    if ($tmp5136.value) {
    {
        org$pandalanguage$pandac$Type* $tmp5138 = (($fn5137) self->compiler->$class->vtable[46])(self->compiler, m5116);
        actualMethodType5121 = $tmp5138;
        panda$core$Int64 $tmp5140 = (($fn5139) actualMethodType5121->subtypes->$class->vtable[3])(actualMethodType5121->subtypes);
        panda$core$Int64 $tmp5141 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5140, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp5143 = (($fn5142) actualMethodType5121->subtypes->$class->vtable[2])(actualMethodType5121->subtypes, $tmp5141);
        panda$core$String* $tmp5145 = (($fn5144) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp5143));
        actualResultType5122 = $tmp5145;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp5147 = (($fn5146) self->compiler->$class->vtable[44])(self->compiler, m5116);
        actualMethodType5121 = $tmp5147;
        panda$core$String* $tmp5149 = (($fn5148) self->$class->vtable[15])(self, p_call->type);
        actualResultType5122 = $tmp5149;
    }
    }
    panda$collections$Array* $tmp5151 = (panda$collections$Array*) malloc(40);
    $tmp5151->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5151->refCount.value = 1;
    panda$collections$Array$init($tmp5151);
    args5150 = $tmp5151;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args5150, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp5154 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp5156 = (($fn5155) actualMethodType5121->subtypes->$class->vtable[3])(actualMethodType5121->subtypes);
    panda$core$Int64 $tmp5157 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5154, $tmp5156);
    panda$core$Int64 $tmp5158 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp5157, ((panda$core$Int64) { 1 }));
    offset5153 = $tmp5158;
    panda$core$Int64 $tmp5160 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp5159, ((panda$core$Int64) { 0 }), $tmp5160, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5162 = $tmp5159.start.value;
    panda$core$Int64 i5161 = { $tmp5162 };
    int64_t $tmp5164 = $tmp5159.end.value;
    int64_t $tmp5165 = $tmp5159.step.value;
    bool $tmp5166 = $tmp5159.inclusive.value;
    bool $tmp5173 = $tmp5165 > 0;
    if ($tmp5173) goto $l5171; else goto $l5172;
    $l5171:;
    if ($tmp5166) goto $l5174; else goto $l5175;
    $l5174:;
    if ($tmp5162 <= $tmp5164) goto $l5167; else goto $l5169;
    $l5175:;
    if ($tmp5162 < $tmp5164) goto $l5167; else goto $l5169;
    $l5172:;
    if ($tmp5166) goto $l5176; else goto $l5177;
    $l5176:;
    if ($tmp5162 >= $tmp5164) goto $l5167; else goto $l5169;
    $l5177:;
    if ($tmp5162 > $tmp5164) goto $l5167; else goto $l5169;
    $l5167:;
    {
        panda$core$Object* $tmp5180 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5161);
        panda$core$String* $tmp5182 = (($fn5181) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5180), p_out);
        arg5179 = $tmp5182;
        panda$core$Bit $tmp5184 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i5161, offset5153);
        bool $tmp5183 = $tmp5184.value;
        if (!$tmp5183) goto $l5185;
        panda$core$Int64 $tmp5186 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5161, offset5153);
        panda$core$Object* $tmp5188 = (($fn5187) actualMethodType5121->subtypes->$class->vtable[2])(actualMethodType5121->subtypes, $tmp5186);
        panda$core$Object* $tmp5189 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5161);
        panda$core$Bit $tmp5191 = (($fn5190) ((org$pandalanguage$pandac$Type*) $tmp5188)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp5188), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp5189)->type));
        $tmp5183 = $tmp5191.value;
        $l5185:;
        panda$core$Bit $tmp5192 = { $tmp5183 };
        if ($tmp5192.value) {
        {
            panda$core$Int64 $tmp5193 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5161, offset5153);
            panda$core$Object* $tmp5195 = (($fn5194) actualMethodType5121->subtypes->$class->vtable[2])(actualMethodType5121->subtypes, $tmp5193);
            panda$core$String* $tmp5197 = (($fn5196) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp5195));
            panda$core$String* $tmp5199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5197, &$s5198);
            panda$core$Object* $tmp5200 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5161);
            panda$core$Int64 $tmp5201 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5161, offset5153);
            panda$core$Object* $tmp5203 = (($fn5202) actualMethodType5121->subtypes->$class->vtable[2])(actualMethodType5121->subtypes, $tmp5201);
            panda$core$String* $tmp5205 = (($fn5204) self->$class->vtable[52])(self, arg5179, ((org$pandalanguage$pandac$IRNode*) $tmp5200)->type, ((org$pandalanguage$pandac$Type*) $tmp5203), p_out);
            panda$core$String* $tmp5206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5199, $tmp5205);
            arg5179 = $tmp5206;
        }
        }
        else {
        {
            panda$core$Object* $tmp5207 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5161);
            panda$core$String* $tmp5209 = (($fn5208) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5207)->type);
            panda$core$String* $tmp5211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5209, &$s5210);
            panda$core$String* $tmp5212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5211, arg5179);
            arg5179 = $tmp5212;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args5150, ((panda$core$Object*) arg5179));
    }
    $l5170:;
    if ($tmp5173) goto $l5214; else goto $l5215;
    $l5214:;
    int64_t $tmp5216 = $tmp5164 - i5161.value;
    if ($tmp5166) goto $l5217; else goto $l5218;
    $l5217:;
    if ($tmp5216 >= $tmp5165) goto $l5213; else goto $l5169;
    $l5218:;
    if ($tmp5216 > $tmp5165) goto $l5213; else goto $l5169;
    $l5215:;
    int64_t $tmp5220 = i5161.value - $tmp5164;
    if ($tmp5166) goto $l5221; else goto $l5222;
    $l5221:;
    if ($tmp5220 >= -$tmp5165) goto $l5213; else goto $l5169;
    $l5222:;
    if ($tmp5220 > -$tmp5165) goto $l5213; else goto $l5169;
    $l5213:;
    i5161.value += $tmp5165;
    goto $l5167;
    $l5169:;
    panda$core$Int64 $tmp5225 = panda$collections$Array$get_count$R$panda$core$Int64(args5150);
    panda$core$Bit $tmp5226 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5225, ((panda$core$Int64) { 0 }));
    if ($tmp5226.value) {
    {
        panda$core$Object* $tmp5227 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args5150, ((panda$core$Int64) { 0 }));
        refTarget5224 = ((panda$core$String*) $tmp5227);
    }
    }
    else {
    {
        refTarget5224 = NULL;
    }
    }
    panda$core$String* $tmp5230 = (($fn5229) self->$class->vtable[43])(self, refTarget5224, m5116, isSuper5123, p_out);
    methodRef5228 = $tmp5230;
    separator5231 = &$s5232;
    panda$core$Bit $tmp5234 = (($fn5233) self->$class->vtable[24])(self, m5116);
    if ($tmp5234.value) {
    {
        panda$core$Int64 $tmp5235 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp5235;
        panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5237, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar5236 = $tmp5238;
        panda$core$String* $tmp5241 = (($fn5240) self->$class->vtable[15])(self, p_call->type);
        resultType5239 = $tmp5241;
        panda$core$String* $tmp5243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5242, indirectVar5236);
        panda$core$String* $tmp5245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5243, &$s5244);
        panda$core$String* $tmp5246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5245, resultType5239);
        panda$core$String* $tmp5248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5246, &$s5247);
        (($fn5249) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5248);
        panda$core$String* $tmp5252 = (($fn5251) self->$class->vtable[40])(self, m5116);
        panda$core$String* $tmp5253 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5250, $tmp5252);
        panda$core$String* $tmp5255 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5253, &$s5254);
        panda$core$String* $tmp5257 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5256, methodRef5228);
        panda$core$String* $tmp5259 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5257, &$s5258);
        panda$core$String* $tmp5260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5259, resultType5239);
        panda$core$String* $tmp5262 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5260, &$s5261);
        panda$core$String* $tmp5263 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5262, indirectVar5236);
        panda$core$String* $tmp5265 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5263, &$s5264);
        panda$core$String* $tmp5266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5255, $tmp5265);
        (($fn5267) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5266);
        separator5231 = &$s5268;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp5269 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp5271 = (($fn5270) p_call->type->$class->vtable[5])(p_call->type, ((panda$core$Object*) $tmp5269));
        if ($tmp5271.value) {
        {
            (($fn5272) self->$class->vtable[4])(self);
        }
        }
        panda$core$String* $tmp5275 = (($fn5274) self->$class->vtable[40])(self, m5116);
        panda$core$String* $tmp5276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5273, $tmp5275);
        panda$core$String* $tmp5278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5276, &$s5277);
        panda$core$String* $tmp5280 = (($fn5279) self->$class->vtable[15])(self, p_call->type);
        panda$core$String* $tmp5281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5278, $tmp5280);
        panda$core$String* $tmp5283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5281, &$s5282);
        panda$core$String* $tmp5285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5284, methodRef5228);
        panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5285, &$s5286);
        panda$core$String* $tmp5288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5283, $tmp5287);
        (($fn5289) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5288);
    }
    }
    {
        ITable* $tmp5291 = ((panda$collections$Iterable*) args5150)->$class->itable;
        while ($tmp5291->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5291 = $tmp5291->next;
        }
        $fn5293 $tmp5292 = $tmp5291->methods[0];
        panda$collections$Iterator* $tmp5294 = $tmp5292(((panda$collections$Iterable*) args5150));
        a$Iter5290 = $tmp5294;
        $l5295:;
        ITable* $tmp5297 = a$Iter5290->$class->itable;
        while ($tmp5297->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5297 = $tmp5297->next;
        }
        $fn5299 $tmp5298 = $tmp5297->methods[0];
        panda$core$Bit $tmp5300 = $tmp5298(a$Iter5290);
        panda$core$Bit $tmp5301 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5300);
        if (!$tmp5301.value) goto $l5296;
        {
            ITable* $tmp5303 = a$Iter5290->$class->itable;
            while ($tmp5303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5303 = $tmp5303->next;
            }
            $fn5305 $tmp5304 = $tmp5303->methods[1];
            panda$core$Object* $tmp5306 = $tmp5304(a$Iter5290);
            a5302 = ((panda$core$String*) $tmp5306);
            (($fn5307) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator5231);
            (($fn5308) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a5302);
            separator5231 = &$s5309;
        }
        goto $l5295;
        $l5296:;
    }
    (($fn5311) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5310);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5312;
    panda$core$String* testBit5316;
    panda$core$String* ifTrue5327;
    panda$core$String* ifFalse5330;
    panda$core$String* end5347;
    panda$core$Object* $tmp5313 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5315 = (($fn5314) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5313), p_out);
    test5312 = $tmp5315;
    panda$core$String* $tmp5318 = (($fn5317) self->$class->vtable[4])(self);
    testBit5316 = $tmp5318;
    panda$core$String* $tmp5320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5319, testBit5316);
    panda$core$String* $tmp5322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5320, &$s5321);
    panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5322, test5312);
    panda$core$String* $tmp5325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5323, &$s5324);
    (($fn5326) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5325);
    panda$core$String* $tmp5329 = (($fn5328) self->$class->vtable[5])(self);
    ifTrue5327 = $tmp5329;
    panda$core$String* $tmp5332 = (($fn5331) self->$class->vtable[5])(self);
    ifFalse5330 = $tmp5332;
    panda$core$String* $tmp5334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5333, testBit5316);
    panda$core$String* $tmp5336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5334, &$s5335);
    panda$core$String* $tmp5337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5336, ifTrue5327);
    panda$core$String* $tmp5339 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5337, &$s5338);
    panda$core$String* $tmp5340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5339, ifFalse5330);
    panda$core$String* $tmp5342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5340, &$s5341);
    (($fn5343) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5342);
    (($fn5344) self->$class->vtable[6])(self, ifTrue5327, p_out);
    panda$core$Object* $tmp5345 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    (($fn5346) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5345), p_out);
    panda$core$Int64 $tmp5348 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp5349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5348, ((panda$core$Int64) { 3 }));
    if ($tmp5349.value) {
    {
        panda$core$String* $tmp5351 = (($fn5350) self->$class->vtable[5])(self);
        end5347 = $tmp5351;
    }
    }
    else {
    {
        end5347 = ifFalse5330;
    }
    }
    panda$core$Object* $tmp5352 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5354 = (($fn5353) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5352));
    panda$core$Bit $tmp5355 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5354);
    if ($tmp5355.value) {
    {
        panda$core$String* $tmp5357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5356, end5347);
        panda$core$String* $tmp5359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5357, &$s5358);
        (($fn5360) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5359);
    }
    }
    panda$core$Int64 $tmp5361 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp5362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5361, ((panda$core$Int64) { 3 }));
    if ($tmp5362.value) {
    {
        (($fn5363) self->$class->vtable[6])(self, ifFalse5330, p_out);
        panda$core$Object* $tmp5364 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        (($fn5365) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5364), p_out);
        panda$core$Object* $tmp5366 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp5368 = (($fn5367) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5366));
        panda$core$Bit $tmp5369 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5368);
        if ($tmp5369.value) {
        {
            panda$core$String* $tmp5371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5370, end5347);
            panda$core$String* $tmp5373 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5371, &$s5372);
            (($fn5374) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5373);
        }
        }
    }
    }
    (($fn5375) self->$class->vtable[6])(self, end5347, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target5376;
    panda$core$String* range5378;
    org$pandalanguage$pandac$IRNode* block5382;
    org$pandalanguage$pandac$Type* t5384;
    panda$core$String* llt5388;
    panda$core$String* indexType5391;
    org$pandalanguage$pandac$ClassDecl* cl5397;
    panda$core$String* numberType5400;
    panda$core$String* index5409;
    panda$core$String* start5420;
    panda$core$String* indexValuePtr5431;
    panda$core$String* end5464;
    panda$core$String* rawStep5475;
    panda$core$String* step5486;
    panda$core$String* inclusive5502;
    panda$core$String* loopStart5513;
    panda$core$String* loopBody5516;
    panda$core$String* loopEnd5519;
    panda$core$String* loopTest5522;
    panda$core$String* forwardEntry5528;
    panda$core$String* backwardEntry5531;
    panda$core$String* signPrefix5534;
    panda$core$String* direction5539;
    panda$core$String* forwardEntryInclusive5568;
    panda$core$String* forwardEntryExclusive5571;
    panda$core$String* forwardEntryInclusiveTest5588;
    panda$core$String* forwardEntryExclusiveTest5622;
    panda$core$String* backwardEntryInclusive5656;
    panda$core$String* backwardEntryExclusive5659;
    panda$core$String* backwardEntryInclusiveTest5676;
    panda$core$String* backwardEntryExclusiveTest5710;
    panda$core$String* indexValue5744;
    panda$core$String* loopInc5771;
    panda$core$String* forwardLabel5774;
    panda$core$String* backwardLabel5777;
    panda$core$String* forwardDelta5792;
    panda$core$String* forwardInclusiveLabel5809;
    panda$core$String* forwardExclusiveLabel5812;
    panda$core$String* forwardInclusiveTest5825;
    panda$core$String* forwardExclusiveTest5854;
    panda$core$String* backwardDelta5883;
    panda$core$String* negStep5900;
    panda$core$String* backwardInclusiveLabel5914;
    panda$core$String* backwardExclusiveLabel5917;
    panda$core$String* backwardInclusiveTest5930;
    panda$core$String* backwardExclusiveTest5957;
    panda$core$String* inc5984;
    panda$core$String* incStruct6001;
    panda$core$Object* $tmp5377 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target5376 = ((org$pandalanguage$pandac$IRNode*) $tmp5377);
    panda$core$Object* $tmp5379 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5381 = (($fn5380) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5379), p_out);
    range5378 = $tmp5381;
    panda$core$Object* $tmp5383 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block5382 = ((org$pandalanguage$pandac$IRNode*) $tmp5383);
    panda$core$Object* $tmp5385 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5387 = (($fn5386) ((org$pandalanguage$pandac$IRNode*) $tmp5385)->type->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp5385)->type->subtypes, ((panda$core$Int64) { 1 }));
    t5384 = ((org$pandalanguage$pandac$Type*) $tmp5387);
    panda$core$String* $tmp5390 = (($fn5389) self->$class->vtable[15])(self, t5384);
    llt5388 = $tmp5390;
    panda$core$Bit $tmp5392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t5384->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp5392.value) {
    {
        panda$core$Object* $tmp5394 = (($fn5393) t5384->subtypes->$class->vtable[2])(t5384->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp5396 = (($fn5395) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp5394));
        indexType5391 = $tmp5396;
    }
    }
    else {
    {
        indexType5391 = llt5388;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp5399 = (($fn5398) self->compiler->$class->vtable[14])(self->compiler, t5384);
    cl5397 = $tmp5399;
    panda$collections$ListView* $tmp5402 = (($fn5401) self->compiler->$class->vtable[10])(self->compiler, cl5397);
    ITable* $tmp5403 = $tmp5402->$class->itable;
    while ($tmp5403->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp5403 = $tmp5403->next;
    }
    $fn5405 $tmp5404 = $tmp5403->methods[0];
    panda$core$Object* $tmp5406 = $tmp5404($tmp5402, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5408 = (($fn5407) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp5406)->type);
    numberType5400 = $tmp5408;
    panda$core$String* $tmp5411 = (($fn5410) self->$class->vtable[29])(self, ((org$pandalanguage$pandac$Variable*) target5376->payload));
    index5409 = $tmp5411;
    panda$core$String* $tmp5413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5412, index5409);
    panda$core$String* $tmp5415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5413, &$s5414);
    panda$core$String* $tmp5416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5415, indexType5391);
    panda$core$String* $tmp5418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5416, &$s5417);
    (($fn5419) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5418);
    panda$core$String* $tmp5422 = (($fn5421) self->$class->vtable[4])(self);
    start5420 = $tmp5422;
    panda$core$String* $tmp5424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5423, start5420);
    panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5424, &$s5425);
    panda$core$String* $tmp5427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5426, range5378);
    panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5427, &$s5428);
    (($fn5430) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5429);
    panda$core$String* $tmp5433 = (($fn5432) self->$class->vtable[4])(self);
    indexValuePtr5431 = $tmp5433;
    panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5434, indexValuePtr5431);
    panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5435, &$s5436);
    panda$core$String* $tmp5438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5437, indexType5391);
    panda$core$String* $tmp5440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5438, &$s5439);
    panda$core$String* $tmp5441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5440, indexType5391);
    panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5441, &$s5442);
    panda$core$String* $tmp5444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, index5409);
    panda$core$String* $tmp5446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5444, &$s5445);
    panda$core$String* $tmp5448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5446, &$s5447);
    (($fn5449) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5448);
    panda$core$String* $tmp5451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5450, numberType5400);
    panda$core$String* $tmp5453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5451, &$s5452);
    panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5453, start5420);
    panda$core$String* $tmp5456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5454, &$s5455);
    panda$core$String* $tmp5457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5456, numberType5400);
    panda$core$String* $tmp5459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5457, &$s5458);
    panda$core$String* $tmp5460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5459, indexValuePtr5431);
    panda$core$String* $tmp5462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5460, &$s5461);
    (($fn5463) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5462);
    panda$core$String* $tmp5466 = (($fn5465) self->$class->vtable[4])(self);
    end5464 = $tmp5466;
    panda$core$String* $tmp5468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5467, end5464);
    panda$core$String* $tmp5470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5468, &$s5469);
    panda$core$String* $tmp5471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5470, range5378);
    panda$core$String* $tmp5473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5471, &$s5472);
    (($fn5474) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5473);
    panda$core$String* $tmp5477 = (($fn5476) self->$class->vtable[4])(self);
    rawStep5475 = $tmp5477;
    panda$core$String* $tmp5479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5478, rawStep5475);
    panda$core$String* $tmp5481 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5479, &$s5480);
    panda$core$String* $tmp5482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5481, range5378);
    panda$core$String* $tmp5484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5482, &$s5483);
    (($fn5485) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5484);
    panda$core$Bit $tmp5488 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType5400, &$s5487);
    if ($tmp5488.value) {
    {
        panda$core$String* $tmp5490 = (($fn5489) self->$class->vtable[4])(self);
        step5486 = $tmp5490;
        panda$core$String* $tmp5492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5491, step5486);
        panda$core$String* $tmp5494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5492, &$s5493);
        panda$core$String* $tmp5495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5494, rawStep5475);
        panda$core$String* $tmp5497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5495, &$s5496);
        panda$core$String* $tmp5498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5497, numberType5400);
        panda$core$String* $tmp5500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5498, &$s5499);
        (($fn5501) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5500);
    }
    }
    else {
    {
        step5486 = rawStep5475;
    }
    }
    panda$core$String* $tmp5504 = (($fn5503) self->$class->vtable[4])(self);
    inclusive5502 = $tmp5504;
    panda$core$String* $tmp5506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5505, inclusive5502);
    panda$core$String* $tmp5508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5506, &$s5507);
    panda$core$String* $tmp5509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5508, range5378);
    panda$core$String* $tmp5511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5509, &$s5510);
    (($fn5512) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5511);
    panda$core$String* $tmp5515 = (($fn5514) self->$class->vtable[5])(self);
    loopStart5513 = $tmp5515;
    panda$core$String* $tmp5518 = (($fn5517) self->$class->vtable[5])(self);
    loopBody5516 = $tmp5518;
    panda$core$String* $tmp5521 = (($fn5520) self->$class->vtable[5])(self);
    loopEnd5519 = $tmp5521;
    panda$core$String* $tmp5524 = (($fn5523) self->$class->vtable[5])(self);
    loopTest5522 = $tmp5524;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5525 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5525->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5525->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5525, ((panda$core$String*) p_f->payload), loopEnd5519, loopTest5522);
    (($fn5527) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp5525));
    panda$core$String* $tmp5530 = (($fn5529) self->$class->vtable[5])(self);
    forwardEntry5528 = $tmp5530;
    panda$core$String* $tmp5533 = (($fn5532) self->$class->vtable[5])(self);
    backwardEntry5531 = $tmp5533;
    panda$core$Bit $tmp5536 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5384)->name, &$s5535);
    if ($tmp5536.value) {
    {
        signPrefix5534 = &$s5537;
    }
    }
    else {
    {
        signPrefix5534 = &$s5538;
    }
    }
    panda$core$Bit $tmp5541 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5534, &$s5540);
    if ($tmp5541.value) {
    {
        panda$core$String* $tmp5543 = (($fn5542) self->$class->vtable[4])(self);
        direction5539 = $tmp5543;
        panda$core$String* $tmp5545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5544, direction5539);
        panda$core$String* $tmp5547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5545, &$s5546);
        panda$core$String* $tmp5548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5547, numberType5400);
        panda$core$String* $tmp5550 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5548, &$s5549);
        panda$core$String* $tmp5551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5550, step5486);
        panda$core$String* $tmp5553 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5551, &$s5552);
        (($fn5554) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5553);
    }
    }
    else {
    {
        direction5539 = &$s5555;
    }
    }
    panda$core$String* $tmp5557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5556, direction5539);
    panda$core$String* $tmp5559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5557, &$s5558);
    panda$core$String* $tmp5560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5559, forwardEntry5528);
    panda$core$String* $tmp5562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5560, &$s5561);
    panda$core$String* $tmp5563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5562, backwardEntry5531);
    panda$core$String* $tmp5565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5563, &$s5564);
    (($fn5566) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5565);
    (($fn5567) self->$class->vtable[6])(self, forwardEntry5528, p_out);
    panda$core$String* $tmp5570 = (($fn5569) self->$class->vtable[5])(self);
    forwardEntryInclusive5568 = $tmp5570;
    panda$core$String* $tmp5573 = (($fn5572) self->$class->vtable[5])(self);
    forwardEntryExclusive5571 = $tmp5573;
    panda$core$String* $tmp5575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5574, inclusive5502);
    panda$core$String* $tmp5577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5575, &$s5576);
    panda$core$String* $tmp5578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5577, forwardEntryInclusive5568);
    panda$core$String* $tmp5580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5578, &$s5579);
    panda$core$String* $tmp5582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5581, forwardEntryExclusive5571);
    panda$core$String* $tmp5584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5582, &$s5583);
    panda$core$String* $tmp5585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5580, $tmp5584);
    (($fn5586) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5585);
    (($fn5587) self->$class->vtable[6])(self, forwardEntryInclusive5568, p_out);
    panda$core$String* $tmp5590 = (($fn5589) self->$class->vtable[4])(self);
    forwardEntryInclusiveTest5588 = $tmp5590;
    panda$core$String* $tmp5592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5591, forwardEntryInclusiveTest5588);
    panda$core$String* $tmp5594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5592, &$s5593);
    panda$core$String* $tmp5595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5594, signPrefix5534);
    panda$core$String* $tmp5597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5595, &$s5596);
    panda$core$String* $tmp5598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5597, numberType5400);
    panda$core$String* $tmp5600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5598, &$s5599);
    panda$core$String* $tmp5602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5601, start5420);
    panda$core$String* $tmp5604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5602, &$s5603);
    panda$core$String* $tmp5605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5604, end5464);
    panda$core$String* $tmp5607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5605, &$s5606);
    panda$core$String* $tmp5608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5600, $tmp5607);
    (($fn5609) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5608);
    panda$core$String* $tmp5611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5610, forwardEntryInclusiveTest5588);
    panda$core$String* $tmp5613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5611, &$s5612);
    panda$core$String* $tmp5614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5613, loopStart5513);
    panda$core$String* $tmp5616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5614, &$s5615);
    panda$core$String* $tmp5617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5616, loopEnd5519);
    panda$core$String* $tmp5619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5617, &$s5618);
    (($fn5620) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5619);
    (($fn5621) self->$class->vtable[6])(self, forwardEntryExclusive5571, p_out);
    panda$core$String* $tmp5624 = (($fn5623) self->$class->vtable[4])(self);
    forwardEntryExclusiveTest5622 = $tmp5624;
    panda$core$String* $tmp5626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5625, forwardEntryExclusiveTest5622);
    panda$core$String* $tmp5628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5626, &$s5627);
    panda$core$String* $tmp5629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5628, signPrefix5534);
    panda$core$String* $tmp5631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5629, &$s5630);
    panda$core$String* $tmp5632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5631, numberType5400);
    panda$core$String* $tmp5634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5632, &$s5633);
    panda$core$String* $tmp5636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5635, start5420);
    panda$core$String* $tmp5638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5636, &$s5637);
    panda$core$String* $tmp5639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5638, end5464);
    panda$core$String* $tmp5641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5639, &$s5640);
    panda$core$String* $tmp5642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5634, $tmp5641);
    (($fn5643) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5642);
    panda$core$String* $tmp5645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5644, forwardEntryExclusiveTest5622);
    panda$core$String* $tmp5647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5645, &$s5646);
    panda$core$String* $tmp5648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5647, loopStart5513);
    panda$core$String* $tmp5650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5648, &$s5649);
    panda$core$String* $tmp5651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5650, loopEnd5519);
    panda$core$String* $tmp5653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5651, &$s5652);
    (($fn5654) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5653);
    (($fn5655) self->$class->vtable[6])(self, backwardEntry5531, p_out);
    panda$core$String* $tmp5658 = (($fn5657) self->$class->vtable[5])(self);
    backwardEntryInclusive5656 = $tmp5658;
    panda$core$String* $tmp5661 = (($fn5660) self->$class->vtable[5])(self);
    backwardEntryExclusive5659 = $tmp5661;
    panda$core$String* $tmp5663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5662, inclusive5502);
    panda$core$String* $tmp5665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5663, &$s5664);
    panda$core$String* $tmp5666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5665, backwardEntryInclusive5656);
    panda$core$String* $tmp5668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5666, &$s5667);
    panda$core$String* $tmp5670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5669, backwardEntryExclusive5659);
    panda$core$String* $tmp5672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5670, &$s5671);
    panda$core$String* $tmp5673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5668, $tmp5672);
    (($fn5674) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5673);
    (($fn5675) self->$class->vtable[6])(self, backwardEntryInclusive5656, p_out);
    panda$core$String* $tmp5678 = (($fn5677) self->$class->vtable[4])(self);
    backwardEntryInclusiveTest5676 = $tmp5678;
    panda$core$String* $tmp5680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5679, backwardEntryInclusiveTest5676);
    panda$core$String* $tmp5682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5680, &$s5681);
    panda$core$String* $tmp5683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5682, signPrefix5534);
    panda$core$String* $tmp5685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5683, &$s5684);
    panda$core$String* $tmp5686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5685, numberType5400);
    panda$core$String* $tmp5688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5686, &$s5687);
    panda$core$String* $tmp5690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5689, start5420);
    panda$core$String* $tmp5692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5690, &$s5691);
    panda$core$String* $tmp5693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5692, end5464);
    panda$core$String* $tmp5695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5693, &$s5694);
    panda$core$String* $tmp5696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5688, $tmp5695);
    (($fn5697) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5696);
    panda$core$String* $tmp5699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5698, backwardEntryInclusiveTest5676);
    panda$core$String* $tmp5701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5699, &$s5700);
    panda$core$String* $tmp5702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5701, loopStart5513);
    panda$core$String* $tmp5704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5702, &$s5703);
    panda$core$String* $tmp5705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5704, loopEnd5519);
    panda$core$String* $tmp5707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5705, &$s5706);
    (($fn5708) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5707);
    (($fn5709) self->$class->vtable[6])(self, backwardEntryExclusive5659, p_out);
    panda$core$String* $tmp5712 = (($fn5711) self->$class->vtable[4])(self);
    backwardEntryExclusiveTest5710 = $tmp5712;
    panda$core$String* $tmp5714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5713, backwardEntryExclusiveTest5710);
    panda$core$String* $tmp5716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5714, &$s5715);
    panda$core$String* $tmp5717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5716, signPrefix5534);
    panda$core$String* $tmp5719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5717, &$s5718);
    panda$core$String* $tmp5720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5719, numberType5400);
    panda$core$String* $tmp5722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5720, &$s5721);
    panda$core$String* $tmp5724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5723, start5420);
    panda$core$String* $tmp5726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5724, &$s5725);
    panda$core$String* $tmp5727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5726, end5464);
    panda$core$String* $tmp5729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5727, &$s5728);
    panda$core$String* $tmp5730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5722, $tmp5729);
    (($fn5731) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5730);
    panda$core$String* $tmp5733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5732, backwardEntryExclusiveTest5710);
    panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5733, &$s5734);
    panda$core$String* $tmp5736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5735, loopStart5513);
    panda$core$String* $tmp5738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5736, &$s5737);
    panda$core$String* $tmp5739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5738, loopEnd5519);
    panda$core$String* $tmp5741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5739, &$s5740);
    (($fn5742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5741);
    (($fn5743) self->$class->vtable[6])(self, loopStart5513, p_out);
    panda$core$String* $tmp5746 = (($fn5745) self->$class->vtable[4])(self);
    indexValue5744 = $tmp5746;
    panda$core$String* $tmp5748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5747, indexValue5744);
    panda$core$String* $tmp5750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5748, &$s5749);
    panda$core$String* $tmp5751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5750, numberType5400);
    panda$core$String* $tmp5753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5751, &$s5752);
    panda$core$String* $tmp5754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5753, numberType5400);
    panda$core$String* $tmp5756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5754, &$s5755);
    panda$core$String* $tmp5757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5756, indexValuePtr5431);
    panda$core$String* $tmp5759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5757, &$s5758);
    (($fn5760) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5759);
    (($fn5761) self->$class->vtable[85])(self, block5382, p_out);
    panda$core$Bit $tmp5763 = (($fn5762) self->$class->vtable[7])(self, block5382);
    panda$core$Bit $tmp5764 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5763);
    if ($tmp5764.value) {
    {
        panda$core$String* $tmp5766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5765, loopTest5522);
        panda$core$String* $tmp5768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5766, &$s5767);
        (($fn5769) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5768);
    }
    }
    (($fn5770) self->$class->vtable[6])(self, loopTest5522, p_out);
    panda$core$String* $tmp5773 = (($fn5772) self->$class->vtable[5])(self);
    loopInc5771 = $tmp5773;
    panda$core$String* $tmp5776 = (($fn5775) self->$class->vtable[5])(self);
    forwardLabel5774 = $tmp5776;
    panda$core$String* $tmp5779 = (($fn5778) self->$class->vtable[5])(self);
    backwardLabel5777 = $tmp5779;
    panda$core$String* $tmp5781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5780, direction5539);
    panda$core$String* $tmp5783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5781, &$s5782);
    panda$core$String* $tmp5784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5783, forwardLabel5774);
    panda$core$String* $tmp5786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5784, &$s5785);
    panda$core$String* $tmp5787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5786, backwardLabel5777);
    panda$core$String* $tmp5789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5787, &$s5788);
    (($fn5790) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5789);
    (($fn5791) self->$class->vtable[6])(self, forwardLabel5774, p_out);
    panda$core$String* $tmp5794 = (($fn5793) self->$class->vtable[4])(self);
    forwardDelta5792 = $tmp5794;
    panda$core$String* $tmp5796 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5795, forwardDelta5792);
    panda$core$String* $tmp5798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5796, &$s5797);
    panda$core$String* $tmp5799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5798, numberType5400);
    panda$core$String* $tmp5801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5799, &$s5800);
    panda$core$String* $tmp5802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5801, end5464);
    panda$core$String* $tmp5804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5802, &$s5803);
    panda$core$String* $tmp5805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5804, indexValue5744);
    panda$core$String* $tmp5807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5805, &$s5806);
    (($fn5808) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5807);
    panda$core$String* $tmp5811 = (($fn5810) self->$class->vtable[5])(self);
    forwardInclusiveLabel5809 = $tmp5811;
    panda$core$String* $tmp5814 = (($fn5813) self->$class->vtable[5])(self);
    forwardExclusiveLabel5812 = $tmp5814;
    panda$core$String* $tmp5816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5815, inclusive5502);
    panda$core$String* $tmp5818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5816, &$s5817);
    panda$core$String* $tmp5819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5818, forwardInclusiveLabel5809);
    panda$core$String* $tmp5821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5819, &$s5820);
    panda$core$String* $tmp5822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5821, forwardExclusiveLabel5812);
    (($fn5823) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5822);
    (($fn5824) self->$class->vtable[6])(self, forwardInclusiveLabel5809, p_out);
    panda$core$String* $tmp5827 = (($fn5826) self->$class->vtable[4])(self);
    forwardInclusiveTest5825 = $tmp5827;
    panda$core$String* $tmp5829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5828, forwardInclusiveTest5825);
    panda$core$String* $tmp5831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5829, &$s5830);
    panda$core$String* $tmp5832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5831, numberType5400);
    panda$core$String* $tmp5834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5832, &$s5833);
    panda$core$String* $tmp5835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5834, forwardDelta5792);
    panda$core$String* $tmp5837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5835, &$s5836);
    panda$core$String* $tmp5838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5837, step5486);
    panda$core$String* $tmp5840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5838, &$s5839);
    (($fn5841) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5840);
    panda$core$String* $tmp5843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5842, forwardInclusiveTest5825);
    panda$core$String* $tmp5845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5843, &$s5844);
    panda$core$String* $tmp5846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5845, loopInc5771);
    panda$core$String* $tmp5848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5846, &$s5847);
    panda$core$String* $tmp5849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5848, loopEnd5519);
    panda$core$String* $tmp5851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5849, &$s5850);
    (($fn5852) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5851);
    (($fn5853) self->$class->vtable[6])(self, forwardExclusiveLabel5812, p_out);
    panda$core$String* $tmp5856 = (($fn5855) self->$class->vtable[4])(self);
    forwardExclusiveTest5854 = $tmp5856;
    panda$core$String* $tmp5858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5857, forwardExclusiveTest5854);
    panda$core$String* $tmp5860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5858, &$s5859);
    panda$core$String* $tmp5861 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5860, numberType5400);
    panda$core$String* $tmp5863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5861, &$s5862);
    panda$core$String* $tmp5864 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5863, forwardDelta5792);
    panda$core$String* $tmp5866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5864, &$s5865);
    panda$core$String* $tmp5867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5866, step5486);
    panda$core$String* $tmp5869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5867, &$s5868);
    (($fn5870) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5869);
    panda$core$String* $tmp5872 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5871, forwardExclusiveTest5854);
    panda$core$String* $tmp5874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5872, &$s5873);
    panda$core$String* $tmp5875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5874, loopInc5771);
    panda$core$String* $tmp5877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5875, &$s5876);
    panda$core$String* $tmp5878 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5877, loopEnd5519);
    panda$core$String* $tmp5880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5878, &$s5879);
    (($fn5881) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5880);
    (($fn5882) self->$class->vtable[6])(self, backwardLabel5777, p_out);
    panda$core$String* $tmp5885 = (($fn5884) self->$class->vtable[4])(self);
    backwardDelta5883 = $tmp5885;
    panda$core$String* $tmp5887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5886, backwardDelta5883);
    panda$core$String* $tmp5889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5887, &$s5888);
    panda$core$String* $tmp5890 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5889, numberType5400);
    panda$core$String* $tmp5892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5890, &$s5891);
    panda$core$String* $tmp5893 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5892, indexValue5744);
    panda$core$String* $tmp5895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5893, &$s5894);
    panda$core$String* $tmp5896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5895, end5464);
    panda$core$String* $tmp5898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5896, &$s5897);
    (($fn5899) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5898);
    panda$core$String* $tmp5902 = (($fn5901) self->$class->vtable[4])(self);
    negStep5900 = $tmp5902;
    panda$core$String* $tmp5904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5903, negStep5900);
    panda$core$String* $tmp5906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5904, &$s5905);
    panda$core$String* $tmp5907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5906, numberType5400);
    panda$core$String* $tmp5909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5907, &$s5908);
    panda$core$String* $tmp5910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5909, step5486);
    panda$core$String* $tmp5912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5910, &$s5911);
    (($fn5913) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5912);
    panda$core$String* $tmp5916 = (($fn5915) self->$class->vtable[5])(self);
    backwardInclusiveLabel5914 = $tmp5916;
    panda$core$String* $tmp5919 = (($fn5918) self->$class->vtable[5])(self);
    backwardExclusiveLabel5917 = $tmp5919;
    panda$core$String* $tmp5921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5920, inclusive5502);
    panda$core$String* $tmp5923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5921, &$s5922);
    panda$core$String* $tmp5924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5923, backwardInclusiveLabel5914);
    panda$core$String* $tmp5926 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5924, &$s5925);
    panda$core$String* $tmp5927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5926, backwardExclusiveLabel5917);
    (($fn5928) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5927);
    (($fn5929) self->$class->vtable[6])(self, backwardInclusiveLabel5914, p_out);
    panda$core$String* $tmp5932 = (($fn5931) self->$class->vtable[4])(self);
    backwardInclusiveTest5930 = $tmp5932;
    panda$core$String* $tmp5934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5933, backwardInclusiveTest5930);
    panda$core$String* $tmp5936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5934, &$s5935);
    panda$core$String* $tmp5937 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5936, numberType5400);
    panda$core$String* $tmp5939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5937, &$s5938);
    panda$core$String* $tmp5940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5939, backwardDelta5883);
    panda$core$String* $tmp5942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5940, &$s5941);
    panda$core$String* $tmp5943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5942, negStep5900);
    (($fn5944) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5943);
    panda$core$String* $tmp5946 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5945, backwardInclusiveTest5930);
    panda$core$String* $tmp5948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5946, &$s5947);
    panda$core$String* $tmp5949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5948, loopInc5771);
    panda$core$String* $tmp5951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5949, &$s5950);
    panda$core$String* $tmp5952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5951, loopEnd5519);
    panda$core$String* $tmp5954 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5952, &$s5953);
    (($fn5955) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5954);
    (($fn5956) self->$class->vtable[6])(self, backwardExclusiveLabel5917, p_out);
    panda$core$String* $tmp5959 = (($fn5958) self->$class->vtable[4])(self);
    backwardExclusiveTest5957 = $tmp5959;
    panda$core$String* $tmp5961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5960, backwardExclusiveTest5957);
    panda$core$String* $tmp5963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5961, &$s5962);
    panda$core$String* $tmp5964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5963, numberType5400);
    panda$core$String* $tmp5966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5964, &$s5965);
    panda$core$String* $tmp5967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5966, backwardDelta5883);
    panda$core$String* $tmp5969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5967, &$s5968);
    panda$core$String* $tmp5970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5969, negStep5900);
    (($fn5971) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5970);
    panda$core$String* $tmp5973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5972, backwardExclusiveTest5957);
    panda$core$String* $tmp5975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5973, &$s5974);
    panda$core$String* $tmp5976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5975, loopInc5771);
    panda$core$String* $tmp5978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5976, &$s5977);
    panda$core$String* $tmp5979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5978, loopEnd5519);
    panda$core$String* $tmp5981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5979, &$s5980);
    (($fn5982) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5981);
    (($fn5983) self->$class->vtable[6])(self, loopInc5771, p_out);
    panda$core$String* $tmp5986 = (($fn5985) self->$class->vtable[4])(self);
    inc5984 = $tmp5986;
    panda$core$String* $tmp5988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5987, inc5984);
    panda$core$String* $tmp5990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5988, &$s5989);
    panda$core$String* $tmp5991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5990, numberType5400);
    panda$core$String* $tmp5993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5991, &$s5992);
    panda$core$String* $tmp5994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5993, indexValue5744);
    panda$core$String* $tmp5996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5994, &$s5995);
    panda$core$String* $tmp5997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5996, step5486);
    panda$core$String* $tmp5999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5997, &$s5998);
    (($fn6000) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5999);
    panda$core$String* $tmp6003 = (($fn6002) self->$class->vtable[4])(self);
    incStruct6001 = $tmp6003;
    panda$core$String* $tmp6005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6004, incStruct6001);
    panda$core$String* $tmp6007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6005, &$s6006);
    panda$core$String* $tmp6008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6007, indexType5391);
    panda$core$String* $tmp6010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6008, &$s6009);
    panda$core$String* $tmp6011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6010, numberType5400);
    panda$core$String* $tmp6013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6011, &$s6012);
    (($fn6014) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6013);
    panda$core$String* $tmp6016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6015, numberType5400);
    panda$core$String* $tmp6018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6016, &$s6017);
    panda$core$String* $tmp6019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6018, inc5984);
    panda$core$String* $tmp6021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6019, &$s6020);
    (($fn6022) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6021);
    panda$core$String* $tmp6024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6023, indexType5391);
    panda$core$String* $tmp6026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6024, &$s6025);
    panda$core$String* $tmp6027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6026, incStruct6001);
    panda$core$String* $tmp6029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6027, &$s6028);
    panda$core$String* $tmp6030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6029, indexType5391);
    panda$core$String* $tmp6032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6030, &$s6031);
    panda$core$String* $tmp6033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6032, index5409);
    panda$core$String* $tmp6035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6033, &$s6034);
    (($fn6036) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6035);
    panda$core$String* $tmp6038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6037, loopStart5513);
    panda$core$String* $tmp6040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6038, &$s6039);
    (($fn6041) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6040);
    (($fn6042) self->$class->vtable[6])(self, loopEnd5519, p_out);
    (($fn6043) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart6044;
    panda$core$String* loopBody6047;
    panda$core$String* loopEnd6050;
    panda$core$String* test6062;
    panda$core$String* testBit6066;
    panda$core$String* $tmp6046 = (($fn6045) self->$class->vtable[5])(self);
    loopStart6044 = $tmp6046;
    panda$core$String* $tmp6049 = (($fn6048) self->$class->vtable[5])(self);
    loopBody6047 = $tmp6049;
    panda$core$String* $tmp6052 = (($fn6051) self->$class->vtable[5])(self);
    loopEnd6050 = $tmp6052;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6053 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp6053->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp6053->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp6053, ((panda$core$String*) p_w->payload), loopEnd6050, loopStart6044);
    (($fn6055) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp6053));
    panda$core$String* $tmp6057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6056, loopStart6044);
    panda$core$String* $tmp6059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6057, &$s6058);
    (($fn6060) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6059);
    (($fn6061) self->$class->vtable[6])(self, loopStart6044, p_out);
    panda$core$Object* $tmp6063 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6065 = (($fn6064) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6063), p_out);
    test6062 = $tmp6065;
    panda$core$String* $tmp6068 = (($fn6067) self->$class->vtable[4])(self);
    testBit6066 = $tmp6068;
    panda$core$String* $tmp6070 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6069, testBit6066);
    panda$core$String* $tmp6072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6070, &$s6071);
    panda$core$String* $tmp6073 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6072, test6062);
    panda$core$String* $tmp6075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6073, &$s6074);
    (($fn6076) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6075);
    panda$core$String* $tmp6078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6077, testBit6066);
    panda$core$String* $tmp6080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6078, &$s6079);
    panda$core$String* $tmp6081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6080, loopBody6047);
    panda$core$String* $tmp6083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6081, &$s6082);
    panda$core$String* $tmp6084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6083, loopEnd6050);
    panda$core$String* $tmp6086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6084, &$s6085);
    (($fn6087) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6086);
    (($fn6088) self->$class->vtable[6])(self, loopBody6047, p_out);
    panda$core$Object* $tmp6089 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    (($fn6090) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6089), p_out);
    panda$core$Object* $tmp6091 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp6093 = (($fn6092) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6091));
    panda$core$Bit $tmp6094 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6093);
    if ($tmp6094.value) {
    {
        panda$core$String* $tmp6096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6095, loopStart6044);
        panda$core$String* $tmp6098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6096, &$s6097);
        (($fn6099) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6098);
    }
    }
    (($fn6100) self->$class->vtable[6])(self, loopEnd6050, p_out);
    (($fn6101) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart6102;
    panda$core$String* loopBody6105;
    panda$core$String* loopEnd6108;
    panda$core$String* test6120;
    panda$core$String* testBit6124;
    panda$core$String* $tmp6104 = (($fn6103) self->$class->vtable[5])(self);
    loopStart6102 = $tmp6104;
    panda$core$String* $tmp6107 = (($fn6106) self->$class->vtable[5])(self);
    loopBody6105 = $tmp6107;
    panda$core$String* $tmp6110 = (($fn6109) self->$class->vtable[5])(self);
    loopEnd6108 = $tmp6110;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6111 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp6111->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp6111->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp6111, ((panda$core$String*) p_d->payload), loopEnd6108, loopStart6102);
    (($fn6113) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp6111));
    panda$core$String* $tmp6115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6114, loopBody6105);
    panda$core$String* $tmp6117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6115, &$s6116);
    (($fn6118) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6117);
    (($fn6119) self->$class->vtable[6])(self, loopStart6102, p_out);
    panda$core$Object* $tmp6121 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp6123 = (($fn6122) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6121), p_out);
    test6120 = $tmp6123;
    panda$core$String* $tmp6126 = (($fn6125) self->$class->vtable[4])(self);
    testBit6124 = $tmp6126;
    panda$core$String* $tmp6128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6127, testBit6124);
    panda$core$String* $tmp6130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6128, &$s6129);
    panda$core$String* $tmp6131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6130, test6120);
    panda$core$String* $tmp6133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6131, &$s6132);
    (($fn6134) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6133);
    panda$core$String* $tmp6136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6135, testBit6124);
    panda$core$String* $tmp6138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6136, &$s6137);
    panda$core$String* $tmp6139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6138, loopBody6105);
    panda$core$String* $tmp6141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6139, &$s6140);
    panda$core$String* $tmp6142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6141, loopEnd6108);
    panda$core$String* $tmp6144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6142, &$s6143);
    (($fn6145) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6144);
    (($fn6146) self->$class->vtable[6])(self, loopBody6105, p_out);
    panda$core$Object* $tmp6147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    (($fn6148) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6147), p_out);
    panda$core$Object* $tmp6149 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp6151 = (($fn6150) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6149));
    panda$core$Bit $tmp6152 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6151);
    if ($tmp6152.value) {
    {
        panda$core$String* $tmp6154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6153, loopStart6102);
        panda$core$String* $tmp6156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6154, &$s6155);
        (($fn6157) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6156);
    }
    }
    (($fn6158) self->$class->vtable[6])(self, loopEnd6108, p_out);
    (($fn6159) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart6160;
    panda$core$String* loopEnd6163;
    panda$core$String* $tmp6162 = (($fn6161) self->$class->vtable[5])(self);
    loopStart6160 = $tmp6162;
    panda$core$String* $tmp6165 = (($fn6164) self->$class->vtable[5])(self);
    loopEnd6163 = $tmp6165;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6166 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp6166->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp6166->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp6166, ((panda$core$String*) p_l->payload), loopEnd6163, loopStart6160);
    (($fn6168) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp6166));
    panda$core$String* $tmp6170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6169, loopStart6160);
    panda$core$String* $tmp6172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6170, &$s6171);
    (($fn6173) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6172);
    (($fn6174) self->$class->vtable[6])(self, loopStart6160, p_out);
    panda$core$Object* $tmp6175 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    (($fn6176) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6175), p_out);
    panda$core$Object* $tmp6177 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp6179 = (($fn6178) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6177));
    panda$core$Bit $tmp6180 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6179);
    if ($tmp6180.value) {
    {
        panda$core$String* $tmp6182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6181, loopStart6160);
        panda$core$String* $tmp6184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6182, &$s6183);
        (($fn6185) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6184);
    }
    }
    (($fn6186) self->$class->vtable[6])(self, loopEnd6163, p_out);
    (($fn6187) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$950936188;
    org$pandalanguage$pandac$Variable* v6190;
    panda$core$String* ref6203;
    {
        $match$950936188 = p_target->kind;
        panda$core$Bit $tmp6189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950936188, ((panda$core$Int64) { 1016 }));
        if ($tmp6189.value) {
        {
            v6190 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp6193 = (($fn6192) self->$class->vtable[29])(self, v6190);
            panda$core$String* $tmp6194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6191, $tmp6193);
            panda$core$String* $tmp6196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6194, &$s6195);
            panda$core$String* $tmp6198 = (($fn6197) self->$class->vtable[15])(self, v6190->type);
            panda$core$String* $tmp6199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6196, $tmp6198);
            panda$core$String* $tmp6201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6199, &$s6200);
            (($fn6202) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp6201);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp6205 = (($fn6204) self->$class->vtable[67])(self, p_value, p_out);
                ref6203 = $tmp6205;
                panda$core$String* $tmp6207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6206, ref6203);
                panda$core$String* $tmp6209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6207, &$s6208);
                panda$core$String* $tmp6211 = (($fn6210) self->$class->vtable[15])(self, v6190->type);
                panda$core$String* $tmp6212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6209, $tmp6211);
                panda$core$String* $tmp6214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6212, &$s6213);
                panda$core$String* $tmp6216 = (($fn6215) self->$class->vtable[29])(self, v6190);
                panda$core$String* $tmp6217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6214, $tmp6216);
                panda$core$String* $tmp6219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6217, &$s6218);
                (($fn6220) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6219);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp6221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950936188, ((panda$core$Int64) { 1022 }));
        if ($tmp6221.value) {
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
    panda$collections$Iterator* decl$Iter6222;
    org$pandalanguage$pandac$IRNode* decl6234;
    {
        ITable* $tmp6223 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp6223->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6223 = $tmp6223->next;
        }
        $fn6225 $tmp6224 = $tmp6223->methods[0];
        panda$collections$Iterator* $tmp6226 = $tmp6224(((panda$collections$Iterable*) p_v->children));
        decl$Iter6222 = $tmp6226;
        $l6227:;
        ITable* $tmp6229 = decl$Iter6222->$class->itable;
        while ($tmp6229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6229 = $tmp6229->next;
        }
        $fn6231 $tmp6230 = $tmp6229->methods[0];
        panda$core$Bit $tmp6232 = $tmp6230(decl$Iter6222);
        panda$core$Bit $tmp6233 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6232);
        if (!$tmp6233.value) goto $l6228;
        {
            ITable* $tmp6235 = decl$Iter6222->$class->itable;
            while ($tmp6235->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6235 = $tmp6235->next;
            }
            $fn6237 $tmp6236 = $tmp6235->methods[1];
            panda$core$Object* $tmp6238 = $tmp6236(decl$Iter6222);
            decl6234 = ((org$pandalanguage$pandac$IRNode*) $tmp6238);
            panda$core$Int64 $tmp6239 = panda$collections$Array$get_count$R$panda$core$Int64(decl6234->children);
            panda$core$Bit $tmp6240 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6239, ((panda$core$Int64) { 1 }));
            if ($tmp6240.value) {
            {
                panda$core$Object* $tmp6241 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6234->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp6242 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6234->children, ((panda$core$Int64) { 1 }));
                (($fn6243) self->$class->vtable[76])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6241), ((org$pandalanguage$pandac$IRNode*) $tmp6242), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp6244 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6234->children, ((panda$core$Int64) { 0 }));
                (($fn6245) self->$class->vtable[76])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6244), NULL, p_out);
            }
            }
        }
        goto $l6227;
        $l6228:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$962776246;
    panda$core$String* base6256;
    panda$core$String* ptr6260;
    org$pandalanguage$pandac$ClassDecl* cl6263;
    panda$collections$ListView* fields6267;
    panda$core$Int64 index6270;
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp6271;
    panda$core$String* result6337;
    panda$core$String* reused6341;
    {
        $match$962776246 = p_lvalue->kind;
        panda$core$Bit $tmp6247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962776246, ((panda$core$Int64) { 1009 }));
        if ($tmp6247.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp6249 = (($fn6248) self->compiler->$class->vtable[51])(self->compiler, p_lvalue);
            panda$core$String* $tmp6251 = (($fn6250) self->$class->vtable[78])(self, $tmp6249, p_out);
            return $tmp6251;
        }
        }
        else {
        panda$core$Bit $tmp6252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962776246, ((panda$core$Int64) { 1016 }));
        if ($tmp6252.value) {
        {
            panda$core$String* $tmp6254 = (($fn6253) self->$class->vtable[29])(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp6254;
        }
        }
        else {
        panda$core$Bit $tmp6255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962776246, ((panda$core$Int64) { 1026 }));
        if ($tmp6255.value) {
        {
            panda$core$Object* $tmp6257 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6259 = (($fn6258) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6257), p_out);
            base6256 = $tmp6259;
            panda$core$String* $tmp6262 = (($fn6261) self->$class->vtable[4])(self);
            ptr6260 = $tmp6262;
            panda$core$Object* $tmp6264 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp6266 = (($fn6265) self->compiler->$class->vtable[14])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6264)->type);
            cl6263 = $tmp6266;
            panda$collections$ListView* $tmp6269 = (($fn6268) self->compiler->$class->vtable[10])(self->compiler, cl6263);
            fields6267 = $tmp6269;
            index6270 = ((panda$core$Int64) { -1 });
            ITable* $tmp6272 = ((panda$collections$CollectionView*) fields6267)->$class->itable;
            while ($tmp6272->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp6272 = $tmp6272->next;
            }
            $fn6274 $tmp6273 = $tmp6272->methods[0];
            panda$core$Int64 $tmp6275 = $tmp6273(((panda$collections$CollectionView*) fields6267));
            panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp6271, ((panda$core$Int64) { 0 }), $tmp6275, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp6277 = $tmp6271.start.value;
            panda$core$Int64 i6276 = { $tmp6277 };
            int64_t $tmp6279 = $tmp6271.end.value;
            int64_t $tmp6280 = $tmp6271.step.value;
            bool $tmp6281 = $tmp6271.inclusive.value;
            bool $tmp6288 = $tmp6280 > 0;
            if ($tmp6288) goto $l6286; else goto $l6287;
            $l6286:;
            if ($tmp6281) goto $l6289; else goto $l6290;
            $l6289:;
            if ($tmp6277 <= $tmp6279) goto $l6282; else goto $l6284;
            $l6290:;
            if ($tmp6277 < $tmp6279) goto $l6282; else goto $l6284;
            $l6287:;
            if ($tmp6281) goto $l6291; else goto $l6292;
            $l6291:;
            if ($tmp6277 >= $tmp6279) goto $l6282; else goto $l6284;
            $l6292:;
            if ($tmp6277 > $tmp6279) goto $l6282; else goto $l6284;
            $l6282:;
            {
                ITable* $tmp6294 = fields6267->$class->itable;
                while ($tmp6294->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp6294 = $tmp6294->next;
                }
                $fn6296 $tmp6295 = $tmp6294->methods[0];
                panda$core$Object* $tmp6297 = $tmp6295(fields6267, i6276);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp6297))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name) }).value) {
                {
                    index6270 = i6276;
                    goto $l6284;
                }
                }
            }
            $l6285:;
            if ($tmp6288) goto $l6299; else goto $l6300;
            $l6299:;
            int64_t $tmp6301 = $tmp6279 - i6276.value;
            if ($tmp6281) goto $l6302; else goto $l6303;
            $l6302:;
            if ($tmp6301 >= $tmp6280) goto $l6298; else goto $l6284;
            $l6303:;
            if ($tmp6301 > $tmp6280) goto $l6298; else goto $l6284;
            $l6300:;
            int64_t $tmp6305 = i6276.value - $tmp6279;
            if ($tmp6281) goto $l6306; else goto $l6307;
            $l6306:;
            if ($tmp6305 >= -$tmp6280) goto $l6298; else goto $l6284;
            $l6307:;
            if ($tmp6305 > -$tmp6280) goto $l6298; else goto $l6284;
            $l6298:;
            i6276.value += $tmp6280;
            goto $l6282;
            $l6284:;
            panda$core$String* $tmp6310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6309, ptr6260);
            panda$core$String* $tmp6312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6310, &$s6311);
            org$pandalanguage$pandac$Type* $tmp6314 = (($fn6313) cl6263->$class->vtable[3])(cl6263);
            panda$core$String* $tmp6316 = (($fn6315) self->$class->vtable[14])(self, $tmp6314);
            panda$core$String* $tmp6317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6312, $tmp6316);
            panda$core$String* $tmp6319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6317, &$s6318);
            org$pandalanguage$pandac$Type* $tmp6322 = (($fn6321) cl6263->$class->vtable[3])(cl6263);
            panda$core$String* $tmp6324 = (($fn6323) self->$class->vtable[14])(self, $tmp6322);
            panda$core$String* $tmp6325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6320, $tmp6324);
            panda$core$String* $tmp6327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6325, &$s6326);
            panda$core$String* $tmp6328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6327, base6256);
            panda$core$String* $tmp6330 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6328, &$s6329);
            panda$core$String* $tmp6331 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6330, ((panda$core$Object*) wrap_panda$core$Int64(index6270)));
            panda$core$String* $tmp6333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6331, &$s6332);
            panda$core$String* $tmp6334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6319, $tmp6333);
            (($fn6335) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6334);
            return ptr6260;
        }
        }
        else {
        panda$core$Bit $tmp6336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962776246, ((panda$core$Int64) { 1027 }));
        if ($tmp6336.value) {
        {
            panda$core$Object* $tmp6338 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6340 = (($fn6339) self->$class->vtable[78])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6338), p_out);
            result6337 = $tmp6340;
            panda$core$String* $tmp6343 = (($fn6342) self->$class->vtable[4])(self);
            reused6341 = $tmp6343;
            panda$core$String* $tmp6345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6344, reused6341);
            panda$core$String* $tmp6347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6345, &$s6346);
            panda$core$String* $tmp6349 = (($fn6348) self->$class->vtable[15])(self, p_lvalue->type);
            panda$core$String* $tmp6350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6347, $tmp6349);
            panda$core$String* $tmp6352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6350, &$s6351);
            panda$core$String* $tmp6355 = (($fn6354) self->$class->vtable[15])(self, p_lvalue->type);
            panda$core$String* $tmp6356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6353, $tmp6355);
            panda$core$String* $tmp6358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6356, &$s6357);
            panda$core$String* $tmp6359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6358, result6337);
            panda$core$String* $tmp6361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6359, &$s6360);
            panda$core$String* $tmp6362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6352, $tmp6361);
            (($fn6363) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6362);
            (($fn6364) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value))), ((panda$core$Object*) reused6341));
            return result6337;
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
    panda$core$String* lvalue6365;
    panda$core$String* value6379;
    panda$core$String* t6380;
    panda$core$Int64 op6384;
    panda$core$String* right6386;
    panda$core$Object* $tmp6367 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6369 = (($fn6368) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6367)->type);
    panda$core$String* $tmp6370 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6366, $tmp6369);
    panda$core$String* $tmp6372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6370, &$s6371);
    panda$core$Object* $tmp6373 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6375 = (($fn6374) self->$class->vtable[78])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6373), p_out);
    panda$core$String* $tmp6376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6372, $tmp6375);
    panda$core$String* $tmp6378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6376, &$s6377);
    lvalue6365 = $tmp6378;
    panda$core$Object* $tmp6381 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6383 = (($fn6382) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6381)->type);
    t6380 = $tmp6383;
    op6384 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp6385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op6384, ((panda$core$Int64) { 73 }));
    if ($tmp6385.value) {
    {
        panda$core$Object* $tmp6387 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6389 = (($fn6388) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6387), p_out);
        right6386 = $tmp6389;
        panda$core$String* $tmp6391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6390, t6380);
        panda$core$String* $tmp6393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6391, &$s6392);
        panda$core$String* $tmp6394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6393, right6386);
        panda$core$String* $tmp6396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6394, &$s6395);
        value6379 = $tmp6396;
    }
    }
    else {
    {
    }
    }
    panda$core$String* $tmp6398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6397, value6379);
    panda$core$String* $tmp6400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6398, &$s6399);
    panda$core$String* $tmp6401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6400, lvalue6365);
    panda$core$String* $tmp6403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6401, &$s6402);
    (($fn6404) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6403);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline6410;
    panda$core$String* result6413;
    panda$core$Int64 $tmp6405 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp6406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6405, ((panda$core$Int64) { 1 }));
    if ($tmp6406.value) {
    {
        panda$core$Int64 $tmp6408 = (($fn6407) self->inlineContext->$class->vtable[7])(self->inlineContext);
        panda$core$Bit $tmp6409 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6408, ((panda$core$Int64) { 0 }));
        if ($tmp6409.value) {
        {
            panda$core$Object* $tmp6412 = (($fn6411) self->inlineContext->$class->vtable[4])(self->inlineContext);
            inline6410 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp6412);
            panda$core$Object* $tmp6414 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6416 = (($fn6415) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6414), p_out);
            result6413 = $tmp6416;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp6417 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp6417->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp6417->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp6417, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result6413));
            panda$collections$Array$add$panda$collections$Array$T(inline6410->returns, ((panda$core$Object*) $tmp6417));
            panda$core$String* $tmp6420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6419, inline6410->exitLabel);
            panda$core$String* $tmp6422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6420, &$s6421);
            org$pandalanguage$pandac$Position* $tmp6424 = (($fn6423) self->compiler->$class->vtable[95])(self->compiler, p_r->offset);
            panda$core$String* $tmp6425 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6422, ((panda$core$Object*) $tmp6424));
            panda$core$String* $tmp6427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6425, &$s6426);
            (($fn6428) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6427);
        }
        }
        else {
        {
            panda$core$Object* $tmp6430 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6432 = (($fn6431) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6430), p_out);
            panda$core$String* $tmp6433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6429, $tmp6432);
            panda$core$String* $tmp6435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6433, &$s6434);
            (($fn6436) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6435);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp6438 = (($fn6437) self->inlineContext->$class->vtable[7])(self->inlineContext);
        panda$core$Bit $tmp6439 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6438, ((panda$core$Int64) { 0 }));
        if ($tmp6439.value) {
        {
            panda$core$Object* $tmp6442 = (($fn6441) self->inlineContext->$class->vtable[4])(self->inlineContext);
            panda$core$String* $tmp6443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6440, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp6442)->exitLabel);
            panda$core$String* $tmp6445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6443, &$s6444);
            (($fn6446) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6445);
        }
        }
        else {
        {
            (($fn6448) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6447);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$SpecializedRange$LTpanda$core$Int64$GT $tmp6451;
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp6450 = (($fn6449) self->loopDescriptors->$class->vtable[4])(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6450);
    }
    }
    panda$core$Int64 $tmp6453 = (($fn6452) self->loopDescriptors->$class->vtable[7])(self->loopDescriptors);
    panda$core$SpecializedRange$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Int64$Q$panda$core$Bit(&$tmp6451, ((panda$core$Int64) { 0 }), $tmp6453, ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp6455 = $tmp6451.start.value;
    panda$core$Int64 i6454 = { $tmp6455 };
    int64_t $tmp6457 = $tmp6451.end.value;
    int64_t $tmp6458 = $tmp6451.step.value;
    bool $tmp6459 = $tmp6451.inclusive.value;
    bool $tmp6466 = $tmp6458 > 0;
    if ($tmp6466) goto $l6464; else goto $l6465;
    $l6464:;
    if ($tmp6459) goto $l6467; else goto $l6468;
    $l6467:;
    if ($tmp6455 <= $tmp6457) goto $l6460; else goto $l6462;
    $l6468:;
    if ($tmp6455 < $tmp6457) goto $l6460; else goto $l6462;
    $l6465:;
    if ($tmp6459) goto $l6469; else goto $l6470;
    $l6469:;
    if ($tmp6455 >= $tmp6457) goto $l6460; else goto $l6462;
    $l6470:;
    if ($tmp6455 > $tmp6457) goto $l6460; else goto $l6462;
    $l6460:;
    {
        panda$core$Object* $tmp6474 = (($fn6473) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i6454);
        bool $tmp6472 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6474)->loopLabel != NULL }).value;
        if (!$tmp6472) goto $l6475;
        panda$core$Object* $tmp6477 = (($fn6476) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i6454);
        panda$core$Bit $tmp6478 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6477)->loopLabel, p_name);
        $tmp6472 = $tmp6478.value;
        $l6475:;
        panda$core$Bit $tmp6479 = { $tmp6472 };
        if ($tmp6479.value) {
        {
            panda$core$Object* $tmp6481 = (($fn6480) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i6454);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6481);
        }
        }
    }
    $l6463:;
    if ($tmp6466) goto $l6483; else goto $l6484;
    $l6483:;
    int64_t $tmp6485 = $tmp6457 - i6454.value;
    if ($tmp6459) goto $l6486; else goto $l6487;
    $l6486:;
    if ($tmp6485 >= $tmp6458) goto $l6482; else goto $l6462;
    $l6487:;
    if ($tmp6485 > $tmp6458) goto $l6482; else goto $l6462;
    $l6484:;
    int64_t $tmp6489 = i6454.value - $tmp6457;
    if ($tmp6459) goto $l6490; else goto $l6491;
    $l6490:;
    if ($tmp6489 >= -$tmp6458) goto $l6482; else goto $l6462;
    $l6491:;
    if ($tmp6489 > -$tmp6458) goto $l6482; else goto $l6462;
    $l6482:;
    i6454.value += $tmp6458;
    goto $l6460;
    $l6462:;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6493;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6495 = (($fn6494) self->$class->vtable[81])(self, ((panda$core$String*) p_b->payload));
    desc6493 = $tmp6495;
    panda$core$String* $tmp6497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6496, desc6493->breakLabel);
    panda$core$String* $tmp6499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6497, &$s6498);
    (($fn6500) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6499);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6501;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6503 = (($fn6502) self->$class->vtable[81])(self, ((panda$core$String*) p_c->payload));
    desc6501 = $tmp6503;
    panda$core$String* $tmp6505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6504, desc6501->continueLabel);
    panda$core$String* $tmp6507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6505, &$s6506);
    (($fn6508) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6507);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test6510;
    panda$core$String* ifTrue6514;
    panda$core$String* ifFalse6517;
    org$pandalanguage$pandac$Position* p6532;
    panda$core$String* name6535;
    panda$core$String$Index$nullable index6536;
    panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT $tmp6539;
    panda$core$String* nameRef6541;
    panda$core$String* line6544;
    panda$core$String* msg6549;
    panda$collections$Iterator* m$Iter6557;
    org$pandalanguage$pandac$MethodDecl* m6572;
    panda$core$Bit $tmp6509 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp6509.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp6511 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6513 = (($fn6512) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6511), p_out);
    test6510 = $tmp6513;
    panda$core$String* $tmp6516 = (($fn6515) self->$class->vtable[5])(self);
    ifTrue6514 = $tmp6516;
    panda$core$String* $tmp6519 = (($fn6518) self->$class->vtable[5])(self);
    ifFalse6517 = $tmp6519;
    panda$core$String* $tmp6521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6520, test6510);
    panda$core$String* $tmp6523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6521, &$s6522);
    panda$core$String* $tmp6524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6523, ifTrue6514);
    panda$core$String* $tmp6526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6524, &$s6525);
    panda$core$String* $tmp6527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6526, ifFalse6517);
    panda$core$String* $tmp6529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6527, &$s6528);
    (($fn6530) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6529);
    (($fn6531) self->$class->vtable[6])(self, ifFalse6517, p_out);
    org$pandalanguage$pandac$Position* $tmp6534 = (($fn6533) self->compiler->$class->vtable[95])(self->compiler, p_a->offset);
    p6532 = $tmp6534;
    panda$core$String$Index$nullable $tmp6538 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p6532->file, &$s6537);
    index6536 = $tmp6538;
    if (((panda$core$Bit) { !index6536.nonnull }).value) {
    {
        name6535 = p6532->file;
    }
    }
    else {
    {
        panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$init$panda$core$String$Index$Q$panda$core$String$Index$Q$panda$core$Int64$Q$panda$core$Bit(&$tmp6539, index6536, ((panda$core$String$Index$nullable) { .nonnull = false }), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp6540 = panda$core$String$$IDX$panda$core$SpecializedRange$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p6532->file, $tmp6539);
        name6535 = $tmp6540;
    }
    }
    panda$core$String* $tmp6543 = (($fn6542) self->$class->vtable[59])(self, name6535, p_out);
    nameRef6541 = $tmp6543;
    panda$core$String* $tmp6546 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s6545, ((panda$core$Object*) wrap_panda$core$Int64(p6532->line)));
    panda$core$String* $tmp6548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6546, &$s6547);
    line6544 = $tmp6548;
    panda$core$Int64 $tmp6550 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6550, ((panda$core$Int64) { 2 }));
    if ($tmp6551.value) {
    {
        panda$core$Object* $tmp6552 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6554 = (($fn6553) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6552), p_out);
        msg6549 = $tmp6554;
    }
    }
    else {
    {
        msg6549 = NULL;
    }
    }
    (($fn6556) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s6555);
    {
        org$pandalanguage$pandac$Type* $tmp6558 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp6560 = (($fn6559) self->compiler->$class->vtable[14])(self->compiler, $tmp6558);
        ITable* $tmp6561 = ((panda$collections$Iterable*) $tmp6560->methods)->$class->itable;
        while ($tmp6561->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6561 = $tmp6561->next;
        }
        $fn6563 $tmp6562 = $tmp6561->methods[0];
        panda$collections$Iterator* $tmp6564 = $tmp6562(((panda$collections$Iterable*) $tmp6560->methods));
        m$Iter6557 = $tmp6564;
        $l6565:;
        ITable* $tmp6567 = m$Iter6557->$class->itable;
        while ($tmp6567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6567 = $tmp6567->next;
        }
        $fn6569 $tmp6568 = $tmp6567->methods[0];
        panda$core$Bit $tmp6570 = $tmp6568(m$Iter6557);
        panda$core$Bit $tmp6571 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6570);
        if (!$tmp6571.value) goto $l6566;
        {
            ITable* $tmp6573 = m$Iter6557->$class->itable;
            while ($tmp6573->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6573 = $tmp6573->next;
            }
            $fn6575 $tmp6574 = $tmp6573->methods[1];
            panda$core$Object* $tmp6576 = $tmp6574(m$Iter6557);
            m6572 = ((org$pandalanguage$pandac$MethodDecl*) $tmp6576);
            panda$core$Bit $tmp6578 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m6572)->name, &$s6577);
            if ($tmp6578.value) {
            {
                (($fn6579) self->compiler->$class->vtable[6])(self->compiler, m6572);
                (($fn6580) self->$class->vtable[87])(self, m6572);
            }
            }
        }
        goto $l6565;
        $l6566:;
    }
    if (((panda$core$Bit) { msg6549 != NULL }).value) {
    {
        panda$core$String* $tmp6583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6581, &$s6582);
        (($fn6584) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6583);
    }
    }
    else {
    {
        (($fn6586) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s6585);
    }
    }
    panda$core$String* $tmp6588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6587, nameRef6541);
    panda$core$String* $tmp6590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6588, &$s6589);
    panda$core$String* $tmp6591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6590, line6544);
    panda$core$String* $tmp6593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6591, &$s6592);
    (($fn6594) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6593);
    if (((panda$core$Bit) { msg6549 != NULL }).value) {
    {
        panda$core$String* $tmp6596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6595, msg6549);
        panda$core$String* $tmp6598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6596, &$s6597);
        (($fn6599) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6598);
    }
    }
    (($fn6601) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6600);
    (($fn6603) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6602);
    (($fn6604) self->$class->vtable[6])(self, ifTrue6514, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$1039496605;
    {
        $match$1039496605 = p_stmt->kind;
        panda$core$Bit $tmp6606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1023 }));
        if ($tmp6606.value) {
        {
            (($fn6607) self->$class->vtable[79])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1000 }));
        if ($tmp6608.value) {
        {
            (($fn6609) self->$class->vtable[68])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1005 }));
        if ($tmp6610.value) {
        {
            (($fn6611) self->$class->vtable[70])(self, p_stmt, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1012 }));
        if ($tmp6612.value) {
        {
            (($fn6613) self->$class->vtable[71])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1029 }));
        if ($tmp6614.value) {
        {
            (($fn6615) self->$class->vtable[72])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1013 }));
        if ($tmp6616.value) {
        {
            (($fn6617) self->$class->vtable[73])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1014 }));
        if ($tmp6618.value) {
        {
            (($fn6619) self->$class->vtable[74])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1015 }));
        if ($tmp6620.value) {
        {
            (($fn6621) self->$class->vtable[75])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1017 }));
        bool $tmp6624 = $tmp6625.value;
        if ($tmp6624) goto $l6626;
        panda$core$Bit $tmp6627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1018 }));
        $tmp6624 = $tmp6627.value;
        $l6626:;
        panda$core$Bit $tmp6628 = { $tmp6624 };
        bool $tmp6623 = $tmp6628.value;
        if ($tmp6623) goto $l6629;
        panda$core$Bit $tmp6630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1019 }));
        $tmp6623 = $tmp6630.value;
        $l6629:;
        panda$core$Bit $tmp6631 = { $tmp6623 };
        bool $tmp6622 = $tmp6631.value;
        if ($tmp6622) goto $l6632;
        panda$core$Bit $tmp6633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1020 }));
        $tmp6622 = $tmp6633.value;
        $l6632:;
        panda$core$Bit $tmp6634 = { $tmp6622 };
        if ($tmp6634.value) {
        {
            (($fn6635) self->$class->vtable[77])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1008 }));
        if ($tmp6636.value) {
        {
            (($fn6637) self->$class->vtable[80])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6638 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1006 }));
        if ($tmp6638.value) {
        {
            (($fn6639) self->$class->vtable[82])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1007 }));
        if ($tmp6640.value) {
        {
            (($fn6641) self->$class->vtable[83])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039496605, ((panda$core$Int64) { 1034 }));
        if ($tmp6642.value) {
        {
            (($fn6643) self->$class->vtable[84])(self, p_stmt, p_out);
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
    panda$core$String* result6644;
    org$pandalanguage$pandac$Type* $tmp6646 = (($fn6645) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp6648 = (($fn6647) self->$class->vtable[15])(self, $tmp6646);
    result6644 = $tmp6648;
    panda$core$Bit $tmp6650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6649 = $tmp6650.value;
    if (!$tmp6649) goto $l6651;
    panda$core$Bit $tmp6653 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6644, &$s6652);
    panda$core$Bit $tmp6654 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6653);
    $tmp6649 = $tmp6654.value;
    $l6651:;
    panda$core$Bit $tmp6655 = { $tmp6649 };
    if ($tmp6655.value) {
    {
        panda$core$String* $tmp6657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6644, &$s6656);
        return $tmp6657;
    }
    }
    return result6644;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6658;
    panda$core$Bit needsIndirection6671;
    panda$core$String* separator6686;
    panda$collections$Iterator* p$Iter6710;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6722;
    panda$core$String* $tmp6660 = (($fn6659) self->$class->vtable[30])(self, p_m);
    name6658 = $tmp6660;
    panda$core$Bit $tmp6662 = (($fn6661) self->declared->$class->vtable[7])(self->declared, ((panda$collections$Key*) name6658));
    if ($tmp6662.value) {
    {
        return;
    }
    }
    (($fn6663) self->declared->$class->vtable[2])(self->declared, ((panda$core$Object*) ((panda$collections$Key*) name6658)));
    panda$core$String* $tmp6666 = (($fn6665) self->$class->vtable[40])(self, p_m);
    panda$core$String* $tmp6667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6664, $tmp6666);
    panda$core$String* $tmp6669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6667, &$s6668);
    (($fn6670) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6669);
    panda$core$Bit $tmp6673 = (($fn6672) self->$class->vtable[24])(self, p_m);
    needsIndirection6671 = $tmp6673;
    if (needsIndirection6671.value) {
    {
        (($fn6675) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6674);
    }
    }
    else {
    {
        panda$core$String* $tmp6677 = (($fn6676) self->$class->vtable[15])(self, p_m->returnType);
        (($fn6678) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6677);
    }
    }
    panda$core$String* $tmp6681 = (($fn6680) self->$class->vtable[30])(self, p_m);
    panda$core$String* $tmp6682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6679, $tmp6681);
    panda$core$String* $tmp6684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6682, &$s6683);
    (($fn6685) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6684);
    separator6686 = &$s6687;
    if (needsIndirection6671.value) {
    {
        panda$core$String* $tmp6690 = (($fn6689) self->$class->vtable[15])(self, p_m->returnType);
        panda$core$String* $tmp6691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6688, $tmp6690);
        panda$core$String* $tmp6693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6691, &$s6692);
        (($fn6694) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6693);
        separator6686 = &$s6695;
    }
    }
    panda$core$Bit $tmp6697 = (($fn6696) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp6698 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6697);
    if ($tmp6698.value) {
    {
        panda$core$String* $tmp6700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6699, separator6686);
        panda$core$String* $tmp6702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6700, &$s6701);
        panda$core$String* $tmp6704 = (($fn6703) self->$class->vtable[86])(self, p_m);
        panda$core$String* $tmp6705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6702, $tmp6704);
        panda$core$String* $tmp6707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6705, &$s6706);
        (($fn6708) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6707);
        separator6686 = &$s6709;
    }
    }
    {
        ITable* $tmp6711 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6711->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6711 = $tmp6711->next;
        }
        $fn6713 $tmp6712 = $tmp6711->methods[0];
        panda$collections$Iterator* $tmp6714 = $tmp6712(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6710 = $tmp6714;
        $l6715:;
        ITable* $tmp6717 = p$Iter6710->$class->itable;
        while ($tmp6717->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6717 = $tmp6717->next;
        }
        $fn6719 $tmp6718 = $tmp6717->methods[0];
        panda$core$Bit $tmp6720 = $tmp6718(p$Iter6710);
        panda$core$Bit $tmp6721 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6720);
        if (!$tmp6721.value) goto $l6716;
        {
            ITable* $tmp6723 = p$Iter6710->$class->itable;
            while ($tmp6723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6723 = $tmp6723->next;
            }
            $fn6725 $tmp6724 = $tmp6723->methods[1];
            panda$core$Object* $tmp6726 = $tmp6724(p$Iter6710);
            p6722 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6726);
            panda$core$String* $tmp6728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6727, separator6686);
            panda$core$String* $tmp6730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6728, &$s6729);
            panda$core$String* $tmp6732 = (($fn6731) self->$class->vtable[15])(self, p6722->type);
            panda$core$String* $tmp6733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6730, $tmp6732);
            panda$core$String* $tmp6735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6733, &$s6734);
            panda$core$String* $tmp6737 = (($fn6736) self->$class->vtable[28])(self, p6722->name);
            panda$core$String* $tmp6738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6735, $tmp6737);
            panda$core$String* $tmp6740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6738, &$s6739);
            (($fn6741) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6740);
            separator6686 = &$s6742;
        }
        goto $l6715;
        $l6716:;
    }
    (($fn6744) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6743);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6770;
    panda$collections$Iterator* p$Iter6783;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6795;
    panda$io$MemoryOutputStream* bodyBuffer6819;
    panda$io$IndentedOutputStream* indentedBody6822;
    panda$collections$Iterator* s$Iter6825;
    org$pandalanguage$pandac$IRNode* s6837;
    self->currentMethod = p_m;
    self->currentBlock = &$s6745;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn6746) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    (($fn6748) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6747);
    panda$core$Bit $tmp6750 = (($fn6749) p_m->owner->$class->vtable[5])(p_m->owner);
    if ($tmp6750.value) {
    {
        (($fn6752) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), &$s6751);
    }
    }
    panda$core$String* $tmp6755 = (($fn6754) self->$class->vtable[40])(self, p_m);
    panda$core$String* $tmp6756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6753, $tmp6755);
    panda$core$String* $tmp6758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6756, &$s6757);
    panda$core$String* $tmp6760 = (($fn6759) self->$class->vtable[15])(self, p_m->returnType);
    panda$core$String* $tmp6761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6758, $tmp6760);
    panda$core$String* $tmp6763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6761, &$s6762);
    panda$core$String* $tmp6765 = (($fn6764) self->$class->vtable[30])(self, p_m);
    panda$core$String* $tmp6766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6763, $tmp6765);
    panda$core$String* $tmp6768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6766, &$s6767);
    (($fn6769) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6768);
    separator6770 = &$s6771;
    panda$core$Bit $tmp6773 = (($fn6772) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp6774 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6773);
    if ($tmp6774.value) {
    {
        panda$core$String* $tmp6777 = (($fn6776) self->$class->vtable[86])(self, p_m);
        panda$core$String* $tmp6778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6775, $tmp6777);
        panda$core$String* $tmp6780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6778, &$s6779);
        (($fn6781) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6780);
        separator6770 = &$s6782;
    }
    }
    {
        ITable* $tmp6784 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6784->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6784 = $tmp6784->next;
        }
        $fn6786 $tmp6785 = $tmp6784->methods[0];
        panda$collections$Iterator* $tmp6787 = $tmp6785(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6783 = $tmp6787;
        $l6788:;
        ITable* $tmp6790 = p$Iter6783->$class->itable;
        while ($tmp6790->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6790 = $tmp6790->next;
        }
        $fn6792 $tmp6791 = $tmp6790->methods[0];
        panda$core$Bit $tmp6793 = $tmp6791(p$Iter6783);
        panda$core$Bit $tmp6794 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6793);
        if (!$tmp6794.value) goto $l6789;
        {
            ITable* $tmp6796 = p$Iter6783->$class->itable;
            while ($tmp6796->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6796 = $tmp6796->next;
            }
            $fn6798 $tmp6797 = $tmp6796->methods[1];
            panda$core$Object* $tmp6799 = $tmp6797(p$Iter6783);
            p6795 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6799);
            panda$core$String* $tmp6801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6800, separator6770);
            panda$core$String* $tmp6803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6801, &$s6802);
            panda$core$String* $tmp6805 = (($fn6804) self->$class->vtable[15])(self, p6795->type);
            panda$core$String* $tmp6806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6803, $tmp6805);
            panda$core$String* $tmp6808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6806, &$s6807);
            panda$core$String* $tmp6810 = (($fn6809) self->$class->vtable[28])(self, p6795->name);
            panda$core$String* $tmp6811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6808, $tmp6810);
            panda$core$String* $tmp6813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6811, &$s6812);
            (($fn6814) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6813);
            separator6770 = &$s6815;
        }
        goto $l6788;
        $l6789:;
    }
    (($fn6817) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6816);
    panda$core$Int64 $tmp6818 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6818;
    panda$io$MemoryOutputStream* $tmp6820 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6820->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6820->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6820);
    bodyBuffer6819 = $tmp6820;
    panda$io$IndentedOutputStream* $tmp6823 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp6823->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6823->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6823, ((panda$io$OutputStream*) bodyBuffer6819));
    indentedBody6822 = $tmp6823;
    {
        ITable* $tmp6826 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6826->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6826 = $tmp6826->next;
        }
        $fn6828 $tmp6827 = $tmp6826->methods[0];
        panda$collections$Iterator* $tmp6829 = $tmp6827(((panda$collections$Iterable*) p_body->children));
        s$Iter6825 = $tmp6829;
        $l6830:;
        ITable* $tmp6832 = s$Iter6825->$class->itable;
        while ($tmp6832->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6832 = $tmp6832->next;
        }
        $fn6834 $tmp6833 = $tmp6832->methods[0];
        panda$core$Bit $tmp6835 = $tmp6833(s$Iter6825);
        panda$core$Bit $tmp6836 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6835);
        if (!$tmp6836.value) goto $l6831;
        {
            ITable* $tmp6838 = s$Iter6825->$class->itable;
            while ($tmp6838->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6838 = $tmp6838->next;
            }
            $fn6840 $tmp6839 = $tmp6838->methods[1];
            panda$core$Object* $tmp6841 = $tmp6839(s$Iter6825);
            s6837 = ((org$pandalanguage$pandac$IRNode*) $tmp6841);
            (($fn6842) self->$class->vtable[85])(self, s6837, indentedBody6822);
        }
        goto $l6830;
        $l6831:;
    }
    panda$core$String* $tmp6844 = (($fn6843) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn6845) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6844);
    panda$core$String* $tmp6847 = (($fn6846) bodyBuffer6819->$class->vtable[0])(bodyBuffer6819);
    (($fn6848) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6847);
    panda$core$Bit $tmp6850 = (($fn6849) self->$class->vtable[7])(self, p_body);
    panda$core$Bit $tmp6851 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6850);
    if ($tmp6851.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6852 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6854 = (($fn6853) p_m->returnType->$class->vtable[4])(p_m->returnType, ((panda$core$Object*) $tmp6852));
        if ($tmp6854.value) {
        {
            (($fn6856) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6855);
        }
        }
        else {
        {
            (($fn6858) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6857);
        }
        }
    }
    }
    panda$core$Int64 $tmp6859 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6859;
    (($fn6861) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6860);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$start$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$Bit $tmp6863 = (($fn6862) p_cl->annotations->$class->vtable[12])(p_cl->annotations);
    if ($tmp6863.value) {
    {
        return;
    }
    }
    org$pandalanguage$pandac$Type* $tmp6865 = (($fn6864) p_cl->$class->vtable[3])(p_cl);
    (($fn6866) self->$class->vtable[12])(self, $tmp6865);
    (($fn6867) self->$class->vtable[26])(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$end$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
}

