#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
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
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
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
#include "panda/collections/ImmutableArray.h"
#include "panda/core/Range.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/io/File.h"
#include "panda/core/Char8.h"
#include "panda/core/Int8.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Immutable.h"


typedef void (*$fn50)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn52)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn54)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn56)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn58)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn60)(panda$io$OutputStream*, panda$core$String*);
struct { panda$core$Class* cl; ITable* next; void* methods[5]; } org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator = { (panda$core$Class*) &org$pandalanguage$pandac$CodeGenerator$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$ClassDecl, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$finish} };

org$pandalanguage$pandac$LLVMCodeGenerator$class_type org$pandalanguage$pandac$LLVMCodeGenerator$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, (ITable*) &org$pandalanguage$pandac$LLVMCodeGenerator$_org$pandalanguage$pandac$CodeGenerator, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup, org$pandalanguage$pandac$LLVMCodeGenerator$setCompiler$org$pandalanguage$pandac$Compiler, org$pandalanguage$pandac$LLVMCodeGenerator$finish, org$pandalanguage$pandac$LLVMCodeGenerator$nextVar$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nextLabel$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createBlock$panda$core$String$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$endsWithBranch$org$pandalanguage$pandac$IRNode$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$fieldSize$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$alignment$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOf$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$sizeOfWrapper$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$writeType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$writeWrapperType$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$LLVMCodeGenerator$typeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$type$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperTypeName$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim, org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT, org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant, org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64, org$pandalanguage$pandac$LLVMCodeGenerator$getAndReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getInlineCallReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$getTypedReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeCall$org$pandalanguage$pandac$IRNode$panda$core$String$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeVar$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssignment$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor, org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream, org$pandalanguage$pandac$LLVMCodeGenerator$selfType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String, org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode, org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$ClassDecl} };

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
typedef panda$core$String* (*$fn266)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn272)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
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
typedef panda$core$Object* (*$fn452)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn454)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn457)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn459)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn469)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn472)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn474)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn477)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn479)(panda$collections$ImmutableArray*);
typedef void (*$fn502)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn503)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn505)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn507)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn520)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn521)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn524)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn526)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn528)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn530)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn535)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn540)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn545)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn548)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn550)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn552)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn554)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn556)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn561)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn562)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn565)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn567)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn569)(panda$collections$ImmutableArray*);
typedef void (*$fn591)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn592)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn594)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn596)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn609)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn610)(panda$core$MutableString*);
typedef panda$core$Object* (*$fn612)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef void (*$fn614)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn616)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn618)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn624)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Set* (*$fn626)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn633)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn639)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn645)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn648)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn651)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn654)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn658)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn663)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn671)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn678)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn694)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn707)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn719)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn730)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn736)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn742)(panda$collections$Iterator*);
typedef void (*$fn744)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn746)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn749)(panda$core$MutableString*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$Pair* (*$fn751)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn760)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn762)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn763)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Object* (*$fn778)(panda$collections$IdentityMap*, panda$core$Object*);
typedef panda$core$Int64 (*$fn782)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn785)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn788)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn795)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn804)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn806)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn812)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn814)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn815)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn837)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn839)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn842)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn843)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn851)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn864)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn866)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn896)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn898)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn900)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn903)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn918)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn920)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn926)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn929)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn934)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn939)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn949)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn972)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn981)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn994)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn996)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn998)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1002)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef void (*$fn1009)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1011)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn1015)(panda$core$MutableString*);
typedef void (*$fn1017)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn1018)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$String* (*$fn1022)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn1029)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn1035)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1046)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1048)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1051)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Object* (*$fn1074)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn1076)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1085)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1098)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1104)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1131)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1133)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn1135)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Type* (*$fn1157)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1159)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn1163)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn1165)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn1171)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn1173)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1183)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn1188)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1193)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1201)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1223)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn1225)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1234)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1247)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1252)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn1255)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn1257)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$Set* (*$fn1259)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn1266)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1272)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1278)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1281)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn1284)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn1287)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1291)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn1296)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn1304)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1311)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1327)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn1340)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1352)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1363)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1369)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1375)(panda$collections$Iterator*);
typedef void (*$fn1377)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn1379)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1382)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1384)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn1387)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1395)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1397)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1398)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$Bit (*$fn1406)(org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1412)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Bit (*$fn1415)(org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1419)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn1421)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn1424)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1425)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1428)(org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1430)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn1433)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn1435)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef org$pandalanguage$pandac$Type* (*$fn1438)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* (*$fn1440)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*, org$pandalanguage$pandac$Type*, panda$io$OutputStream*);
typedef panda$core$String* (*$fn1442)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn1444)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn1450)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn1453)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn1455)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1457)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1459)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Int64 (*$fn1461)(panda$collections$ImmutableArray*);
typedef void (*$fn1483)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Object* (*$fn1484)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn1486)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1488)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1501)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn1504)(panda$core$MutableString*);
typedef panda$core$String* (*$fn1508)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn1511)(panda$collections$HashMap*, panda$core$Object*);
typedef void (*$fn1513)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1518)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1520)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn1526)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef void (*$fn1534)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn1535)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$collections$ListView* (*$fn1538)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn1543)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1545)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$Int64 (*$fn1558)(panda$collections$CollectionView*);
typedef void (*$fn1564)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1567)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn1569)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1581)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn1583)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1613)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn1620)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1631)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1637)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1643)(panda$collections$Iterator*);
typedef void (*$fn1645)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn1646)(org$pandalanguage$pandac$Annotations*);
typedef void (*$fn1649)(panda$core$MutableString*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$Pair* (*$fn1651)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1660)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1663)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1664)(panda$io$OutputStream*, panda$core$Object*);
typedef panda$core$String* (*$fn1667)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$Object* (*$fn1673)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$core$String* (*$fn1676)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn1686)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1691)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn1694)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1699)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$Int64 (*$fn1712)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn1719)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1722)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn1724)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1735)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn1739)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn1741)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn1767)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn1782)(panda$collections$CollectionView*);
typedef panda$core$Int64 (*$fn1793)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn1816)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn1819)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn1821)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1823)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn1828)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn1836)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1850)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1851)(panda$io$OutputStream*, panda$core$Object*);
typedef void (*$fn1852)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Int64 (*$fn1872)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1896)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1898)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Object* (*$fn1916)(panda$collections$IdentityMap*, panda$core$Object*);
typedef void (*$fn1926)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Int64 (*$fn1927)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn1930)(panda$collections$Stack*);
typedef panda$core$String* (*$fn1940)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn1942)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1944)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1949)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1953)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1957)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1961)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1965)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1969)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1973)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1977)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1981)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1985)(panda$core$MutableString*, panda$core$String*);
typedef void (*$fn1989)(panda$core$MutableString*, panda$core$String*);
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
typedef panda$core$String* (*$fn2046)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn2048)(panda$core$MutableString*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2052)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2058)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2064)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2067)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn2072)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$Bit (*$fn2074)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn2077)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2078)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn2080)(panda$core$MutableString*, panda$core$String*);
typedef panda$core$String* (*$fn2081)(panda$core$MutableString*);
typedef panda$core$String* (*$fn2084)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef panda$core$String* (*$fn2101)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn2104)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn2107)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2116)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2119)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn2122)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2134)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2135)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2137)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn2140)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn2143)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2152)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2158)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2159)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2161)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2176)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2178)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn2181)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn2184)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2193)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2196)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn2199)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2211)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2212)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2214)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn2217)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn2220)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2229)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2235)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2236)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2238)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2253)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2355)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2370)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2372)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2375)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2378)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2390)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2392)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2401)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2403)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2406)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2409)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2421)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2423)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2432)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2435)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2438)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2441)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2444)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2447)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2450)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Int64 (*$fn2452)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn2454)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$Int64, panda$core$String*, panda$core$Int64, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2458)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$Int64, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn2462)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$collections$ListView* (*$fn2466)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn2471)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2493)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn2507)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn2513)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn2515)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn2525)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2527)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2536)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2538)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2550)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2552)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2575)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2577)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2586)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2588)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn2597)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2599)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn2602)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn2604)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2606)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn2609)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2615)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2616)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2618)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn2624)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn2626)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn2643)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2645)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn2649)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn2664)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2666)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2690)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2692)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2698)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2700)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2708)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn2711)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2731)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2733)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2742)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2744)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2759)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2761)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2776)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2778)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn2781)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn2804)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2806)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2818)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2819)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn2833)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2838)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn2839)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$collections$ListView* (*$fn2842)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn2847)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn2869)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn2883)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn2885)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn2889)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2893)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2911)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2913)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2925)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2927)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2942)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn2946)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2950)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$MethodDecl*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2952)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$MethodDecl*, panda$io$IndentedOutputStream*);
typedef void (*$fn2954)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2955)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn2963)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn2966)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn2975)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn2977)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn2980)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn2982)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn2984)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3000)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3002)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3015)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3017)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn3026)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$String* (*$fn3028)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3033)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3038)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Type* (*$fn3041)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$String* (*$fn3043)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3049)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3061)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3063)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3078)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3083)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Type* (*$fn3086)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$String* (*$fn3088)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3094)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3106)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3109)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3112)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3121)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3123)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3143)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3145)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3160)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3165)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3168)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3177)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3180)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3183)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3192)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3194)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn3207)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$Object* (*$fn3209)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Int64 (*$fn3211)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3214)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3216)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3234)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3236)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn3245)(org$pandalanguage$pandac$MethodRef*);
typedef panda$core$String* (*$fn3247)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3252)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3257)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3261)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3263)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3267)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3270)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3279)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3281)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3296)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3298)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3299)(panda$collections$IdentityMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Bit (*$fn3303)(org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3306)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3332)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3346)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3355)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn3357)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3358)(panda$collections$Stack*);
typedef panda$core$Bit (*$fn3359)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn3363)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3364)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn3365)(panda$collections$IdentityMap*, panda$core$Object*);
typedef panda$core$Object* (*$fn3366)(panda$collections$Stack*);
typedef panda$core$String* (*$fn3371)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3377)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3382)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3388)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3394)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3400)(panda$collections$Iterator*);
typedef void (*$fn3412)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3414)(panda$io$OutputStream*);
typedef panda$core$String* (*$fn3418)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn3420)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3428)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3431)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3442)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3448)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3451)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3462)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn3464)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$Object* (*$fn3467)(panda$collections$IdentityMap*, panda$core$Object*);
typedef org$pandalanguage$pandac$IRNode* (*$fn3471)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3473)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn3493)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn3496)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn3498)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3501)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3503)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn3505)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3507)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn3511)(panda$collections$ImmutableArray*);
typedef panda$core$String* (*$fn3537)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3543)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn3546)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn3550)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3552)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn3558)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3560)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3564)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3585)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$MethodDecl*, panda$core$Bit, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn3589)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn3592)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn3597)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3598)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3604)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn3612)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3617)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3631)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3639)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn3644)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn3650)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn3656)(panda$collections$Iterator*);
typedef void (*$fn3665)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3668)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3669)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3682)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3683)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn3686)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn3689)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3691)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3694)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3699)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3705)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3713)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3715)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3718)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3730)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3731)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3733)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3735)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn3738)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn3740)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef void (*$fn3746)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3747)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn3749)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3755)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3771)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3773)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn3779)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn3781)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3786)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn3788)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn3790)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn3793)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn3795)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3798)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3810)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3812)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3829)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn3831)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn3845)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3847)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3864)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn3869)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3871)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn3888)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3890)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3898)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3906)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3907)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn3911)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3923)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn3928)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn3931)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3933)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$String* (*$fn3935)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn3939)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn3941)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn3945)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$collections$ListView* (*$fn3948)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn3954)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn3976)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn3990)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn3997)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4010)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4016)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4022)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4034)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4036)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4041)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4047)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4055)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4057)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4060)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4072)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4073)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn4075)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4077)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn4080)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4082)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef void (*$fn4088)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4089)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4091)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4097)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn4103)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4105)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4122)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4124)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4127)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4130)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4133)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4139)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4150)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4152)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4167)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4169)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4184)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4186)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4189)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4199)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4204)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4213)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4215)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4221)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4229)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4231)(org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn4234)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn4237)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4246)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4249)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4252)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn4255)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4259)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn4262)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Bit (*$fn4266)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4269)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn4273)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4279)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn4281)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn4284)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn4288)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4294)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn4296)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn4299)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4303)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4306)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4310)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4328)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4331)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4334)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4337)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4340)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4342)(org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4347)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4357)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4370)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4380)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4382)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn4387)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4397)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4410)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4420)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn4421)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4436)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4445)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4447)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4462)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4464)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$Int64 (*$fn4470)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4475)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4477)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4486)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4491)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4493)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$Object* (*$fn4497)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4499)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4501)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4518)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn4520)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn4534)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4543)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4551)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef panda$core$String* (*$fn4554)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4557)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4569)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef void (*$fn4574)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4586)(panda$collections$CollectionView*);
typedef void (*$fn4598)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn4605)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4611)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4617)(panda$collections$Iterator*);
typedef void (*$fn4627)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn4630)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4639)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn4642)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn4670)(panda$collections$CollectionView*);
typedef void (*$fn4678)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn4679)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn4682)(panda$collections$Stack*);
typedef panda$core$String* (*$fn4686)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$Type* (*$fn4692)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4694)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4699)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4702)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4705)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4709)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4712)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4718)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4727)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4728)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4737)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4738)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4747)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4749)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4758)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4761)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4765)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4768)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn4773)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4782)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4783)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4792)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4794)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4803)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn4805)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn4807)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$core$Bit (*$fn4809)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn4812)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4814)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4822)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4825)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn4834)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4842)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4852)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn4860)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn4863)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4866)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4869)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4872)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4875)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4878)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4881)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4884)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4887)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4890)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4893)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4896)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4901)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn4903)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$Object* (*$fn4906)(panda$collections$HashMap*, panda$core$Object*);
typedef panda$core$String* (*$fn4909)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4912)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4915)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4918)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4921)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn4926)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$collections$Iterator* (*$fn4935)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn4941)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn4947)(panda$collections$Iterator*);
typedef void (*$fn4949)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4957)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4961)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn4963)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn4972)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn4977)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Object* (*$fn4979)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn4983)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4987)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn4990)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn4999)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$IRNode* (*$fn5002)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn5004)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5007)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5013)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5030)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5035)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5043)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5048)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5051)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5060)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5065)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5069)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn5070)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn5084)(org$pandalanguage$pandac$MethodDecl*);
typedef org$pandalanguage$pandac$Type* (*$fn5087)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Int64 (*$fn5089)(panda$collections$ImmutableArray*);
typedef panda$core$Object* (*$fn5092)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5094)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn5096)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn5098)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Int64 (*$fn5105)(panda$collections$ImmutableArray*);
typedef panda$core$String* (*$fn5131)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn5137)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$Bit (*$fn5140)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$Object* (*$fn5144)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5146)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn5152)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5154)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$Type*, org$pandalanguage$pandac$Type*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5158)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5179)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, org$pandalanguage$pandac$MethodDecl*, panda$core$Bit, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn5183)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn5190)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5199)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5201)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn5217)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn5220)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef panda$core$String* (*$fn5222)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5224)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn5229)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5239)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn5243)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn5249)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn5255)(panda$collections$Iterator*);
typedef void (*$fn5257)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5258)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5261)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5264)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5267)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5276)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5278)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5281)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5293)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5294)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn5296)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5300)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$Bit (*$fn5303)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5310)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5313)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn5315)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn5317)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5324)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5325)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5330)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn5336)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5339)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$Object* (*$fn5343)(panda$collections$ImmutableArray*, panda$core$Int64);
typedef panda$core$String* (*$fn5345)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn5348)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn5351)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Object* (*$fn5355)(panda$collections$ListView*, panda$core$Int64);
typedef panda$core$String* (*$fn5357)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5360)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef void (*$fn5369)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5371)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5380)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5382)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5389)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5398)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5404)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5406)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5412)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5418)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5430)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5432)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5447)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5449)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5466)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5480)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5482)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5491)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5493)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5500)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5509)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5515)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5517)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5523)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn5528)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn5541)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5543)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5558)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5560)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5569)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5573)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5585)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5587)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5596)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5598)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5601)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5604)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5607)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5611)(panda$collections$Stack*, panda$core$Object*);
typedef panda$core$String* (*$fn5613)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5616)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5626)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5638)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5650)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5651)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5653)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5656)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5670)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5671)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5673)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5693)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5704)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5705)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5707)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5727)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5738)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5739)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5741)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5744)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5758)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5759)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5761)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5781)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5792)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5793)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5795)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5815)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5826)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5827)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5829)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5844)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5845)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn5846)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn5853)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5854)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5856)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5859)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5862)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5874)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5875)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5877)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5892)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5894)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn5897)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5907)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5908)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5910)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5925)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5936)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5937)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5939)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5954)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5965)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn5966)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn5968)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5983)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5985)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn5997)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn5999)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6002)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6012)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6013)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6015)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6028)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6039)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6040)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6042)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6055)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6066)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6067)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6069)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6084)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6086)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6098)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6106)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6120)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6125)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6126)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6127)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6129)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6132)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6135)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6139)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn6144)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6145)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6148)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6151)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6160)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6171)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6172)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6174)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn6176)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn6183)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6184)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6185)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6187)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6190)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6193)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6197)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn6202)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6203)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6206)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6209)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6218)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6229)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6230)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6232)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn6234)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn6241)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6242)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6243)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6245)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6248)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6252)(panda$collections$Stack*, panda$core$Object*);
typedef void (*$fn6257)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6258)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6260)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$Bit (*$fn6262)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef void (*$fn6269)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6270)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$Object* (*$fn6271)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6276)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef panda$core$String* (*$fn6281)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6286)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6288)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6294)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6299)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef void (*$fn6304)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6309)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6315)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6321)(panda$collections$Iterator*);
typedef void (*$fn6327)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6329)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$IRNode* (*$fn6332)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn6334)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6337)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Variable*);
typedef panda$core$String* (*$fn6342)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6345)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn6349)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$ListView* (*$fn6352)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$Int64 (*$fn6358)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn6380)(panda$collections$ListView*, panda$core$Int64);
typedef org$pandalanguage$pandac$Type* (*$fn6397)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn6399)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$Type* (*$fn6405)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn6407)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6419)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6423)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6426)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6432)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6438)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6447)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6448)(panda$collections$HashMap*, panda$core$Object*, panda$core$Object*);
typedef panda$core$String* (*$fn6452)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6458)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6466)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6472)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6488)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn6491)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn6495)(panda$collections$Stack*);
typedef panda$core$String* (*$fn6499)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Position* (*$fn6507)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef void (*$fn6512)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6515)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6520)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn6521)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn6525)(panda$collections$Stack*);
typedef void (*$fn6530)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6532)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Object* (*$fn6533)(panda$collections$Stack*);
typedef panda$core$Int64 (*$fn6536)(panda$collections$Stack*);
typedef panda$core$Object* (*$fn6557)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn6560)(panda$collections$Stack*, panda$core$Int64);
typedef panda$core$Object* (*$fn6564)(panda$collections$Stack*, panda$core$Int64);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* (*$fn6578)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6584)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* (*$fn6586)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6592)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6596)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6599)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef panda$core$String* (*$fn6602)(org$pandalanguage$pandac$LLVMCodeGenerator*);
typedef void (*$fn6614)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6615)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Position* (*$fn6617)(org$pandalanguage$pandac$Compiler*, panda$core$Int64);
typedef panda$core$String* (*$fn6626)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6637)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6640)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$ClassDecl* (*$fn6643)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$Type*);
typedef panda$collections$Iterator* (*$fn6647)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6653)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6659)(panda$collections$Iterator*);
typedef void (*$fn6663)(org$pandalanguage$pandac$Compiler*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6664)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6668)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6670)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6678)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6683)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6685)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6687)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6688)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6691)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6693)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6695)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$core$String*, panda$io$IndentedOutputStream*);
typedef void (*$fn6697)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6699)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6701)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6703)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6705)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6719)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6721)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6723)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6725)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef void (*$fn6727)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef org$pandalanguage$pandac$Type* (*$fn6729)(org$pandalanguage$pandac$ClassDecl*);
typedef panda$core$String* (*$fn6731)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6743)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$Bit (*$fn6745)(panda$collections$Set*, panda$collections$Key*);
typedef void (*$fn6747)(panda$collections$Set*, panda$core$Object*);
typedef panda$core$String* (*$fn6749)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6754)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6756)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6759)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6760)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6762)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6764)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6769)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6773)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef void (*$fn6778)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6780)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$String* (*$fn6787)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6792)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6797)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6803)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6809)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6815)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6820)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6825)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6828)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6830)(panda$io$MemoryOutputStream*);
typedef panda$core$String* (*$fn6832)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef panda$core$String* (*$fn6837)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6842)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6847)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6850)(org$pandalanguage$pandac$Annotations*);
typedef panda$core$String* (*$fn6854)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$MethodDecl*);
typedef void (*$fn6859)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6864)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6870)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6876)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn6882)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef panda$core$String* (*$fn6887)(org$pandalanguage$pandac$LLVMCodeGenerator*, panda$core$String*);
typedef void (*$fn6892)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6895)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn6906)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn6912)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn6918)(panda$collections$Iterator*);
typedef void (*$fn6920)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*, panda$io$IndentedOutputStream*);
typedef panda$core$String* (*$fn6921)(panda$io$MemoryOutputStream*);
typedef void (*$fn6923)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn6924)(panda$io$MemoryOutputStream*);
typedef void (*$fn6926)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn6927)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn6931)(org$pandalanguage$pandac$Type*, panda$core$Object*);
typedef void (*$fn6934)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6936)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn6939)(panda$io$OutputStream*, panda$core$String*);
typedef org$pandalanguage$pandac$Type* (*$fn6940)(org$pandalanguage$pandac$ClassDecl*);
typedef void (*$fn6942)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$Type*);
typedef org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* (*$fn6943)(org$pandalanguage$pandac$LLVMCodeGenerator*, org$pandalanguage$pandac$ClassDecl*);
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class_type org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class_type org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class_type org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Immutable$class, NULL, { org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class_type org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class_type org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };

org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$class_type org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$class = { (panda$core$Class*) &panda$core$Class$class, 1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, panda$core$Object$cleanup} };


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
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x79\x70\x65\x20\x7B\x20", 10, 1 };
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
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x28", 2, 1 };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s537 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72", 8, 1 };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x6E\x75\x6C\x6C\x61\x62\x6C\x65", 9, 1 };
static panda$core$String $s629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x2E", 2, 1 };
static panda$core$String $s666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s766 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s769 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x73\x68\x69\x6D", 5, 1 };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s841 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s844 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x70", 3, 1 };
static panda$core$String $s849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70", 2, 1 };
static panda$core$String $s893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s927 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s942 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x73\x68\x69\x6D", 12, 1 };
static panda$core$String $s1028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2A", 9, 1 };
static panda$core$String $s1034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20\x63\x63\x63\x20", 11, 1 };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66", 12, 1 };
static panda$core$String $s1073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1097 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 16, 1 };
static panda$core$String $s1102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x61\x63\x74\x75\x61\x6C\x53\x65\x6C\x66\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x4F\x62\x6A\x65\x63\x74\x2A", 35, 1 };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1167 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s1172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s1182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1228 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1246 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s1248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1254 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x6E\x75\x6C\x6C", 14, 1 };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x2E", 9, 1 };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B", 1, 1 };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x5B", 14, 1 };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1332 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2C\x20", 3, 1 };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x5B", 8, 1 };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 18, 1 };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x29", 14, 1 };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20\x28", 6, 1 };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1500 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x2A", 2, 1 };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1523 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x63\x6C\x61\x73\x73", 6, 1 };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1573 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1576 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 23, 1 };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x6E\x75\x6C\x6C", 8, 1 };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1655 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D\x0A", 4, 1 };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73", 17, 1 };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x65\x72\x6E\x61\x6C\x20\x67\x6C\x6F\x62\x61\x6C\x20", 19, 1 };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x77\x72\x61\x70\x70\x65\x72\x63\x6C\x61\x73\x73", 13, 1 };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20", 22, 1 };
static panda$core$String $s1705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20", 33, 1 };
static panda$core$String $s1709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x7D", 9, 1 };
static panda$core$String $s1727 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74\x28", 8, 1 };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29", 23, 1 };
static panda$core$String $s1746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 12, 1 };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s1761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20", 21, 1 };
static panda$core$String $s1762 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x31\x2C\x20", 4, 1 };
static panda$core$String $s1770 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x5B", 3, 1 };
static panda$core$String $s1785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x2A\x5D\x20\x5B", 9, 1 };
static panda$core$String $s1789 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 12, 1 };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A\x29", 8, 1 };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x20\x7D", 3, 1 };
static panda$core$String $s1853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2E", 1, 1 };
static panda$core$String $s1854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3F", 1, 1 };
static panda$core$String $s1857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x51", 2, 1 };
static panda$core$String $s1859 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C", 1, 1 };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x43", 2, 1 };
static panda$core$String $s1911 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x61\x69\x6E", 4, 1 };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x4D\x61\x69\x6E", 10, 1 };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s1943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2B", 1, 1 };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x44\x44", 4, 1 };
static panda$core$String $s1950 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x55\x42", 4, 1 };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s1956 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4D\x55\x4C", 4, 1 };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s1960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x44\x49\x56", 4, 1 };
static panda$core$String $s1962 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F\x2F", 2, 1 };
static panda$core$String $s1964 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x4E\x54\x44\x49\x56", 7, 1 };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x45\x4D", 4, 1 };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5E", 1, 1 };
static panda$core$String $s1972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x50\x4F\x57", 4, 1 };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s1976 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58", 4, 1 };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x49\x44\x58\x45\x51", 6, 1 };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3D", 1, 1 };
static panda$core$String $s1984 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x45\x51", 3, 1 };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x3D", 2, 1 };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x45\x51", 4, 1 };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x54", 3, 1 };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C", 1, 1 };
static panda$core$String $s1996 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x54", 3, 1 };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3D", 2, 1 };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x47\x45", 3, 1 };
static panda$core$String $s2002 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3D", 2, 1 };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4C\x45", 3, 1 };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4F\x52", 3, 1 };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C\x7C", 2, 1 };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4F\x52", 4, 1 };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x41\x4E\x44", 4, 1 };
static panda$core$String $s2018 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26\x26", 2, 1 };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x41\x4E\x44", 5, 1 };
static panda$core$String $s2022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E", 1, 1 };
static panda$core$String $s2024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x58\x4F\x52", 4, 1 };
static panda$core$String $s2026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7E\x7E", 2, 1 };
static panda$core$String $s2028 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x58\x4F\x52", 5, 1 };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21", 1, 1 };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x4E\x4F\x54", 4, 1 };
static panda$core$String $s2034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x21\x21", 2, 1 };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x42\x4E\x4F\x54", 5, 1 };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x3C", 2, 1 };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x4C", 4, 1 };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E\x3E", 2, 1 };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x53\x48\x52", 4, 1 };
static panda$core$String $s2066 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s2070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x52\x24", 3, 1 };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40", 1, 1 };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24", 1, 1 };
static panda$core$String $s2090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s2126 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2129 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2132 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x30\x2C\x20\x25", 15, 1 };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2188 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s2191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2201 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2209 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2222 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20", 32, 1 };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x69\x31\x20\x5B\x31\x2C\x20\x25", 15, 1 };
static panda$core$String $s2245 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2251 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s2259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s2261 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x64\x69\x76", 4, 1 };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x72\x65\x6D", 4, 1 };
static panda$core$String $s2269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x68\x72", 4, 1 };
static panda$core$String $s2273 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s2275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s2281 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s2285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s2287 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x74", 8, 1 };
static panda$core$String $s2289 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x74", 8, 1 };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x67\x65", 8, 1 };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x73\x6C\x65", 8, 1 };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x64\x64", 3, 1 };
static panda$core$String $s2299 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x75\x62", 3, 1 };
static panda$core$String $s2301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6D\x75\x6C", 3, 1 };
static panda$core$String $s2303 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x64\x69\x76", 4, 1 };
static panda$core$String $s2305 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x72\x65\x6D", 4, 1 };
static panda$core$String $s2307 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x68\x6C", 3, 1 };
static panda$core$String $s2309 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x73\x68\x72", 4, 1 };
static panda$core$String $s2311 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6E\x64", 3, 1 };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x72", 2, 1 };
static panda$core$String $s2319 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x78\x6F\x72", 3, 1 };
static panda$core$String $s2321 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x65\x71", 7, 1 };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x6E\x65", 7, 1 };
static panda$core$String $s2325 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x74", 8, 1 };
static panda$core$String $s2327 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x74", 8, 1 };
static panda$core$String $s2329 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x67\x65", 8, 1 };
static panda$core$String $s2331 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x63\x6D\x70\x20\x75\x6C\x65", 8, 1 };
static panda$core$String $s2335 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x64\x64", 4, 1 };
static panda$core$String $s2337 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x73\x75\x62", 4, 1 };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x6D\x75\x6C", 4, 1 };
static panda$core$String $s2341 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x64\x69\x76", 4, 1 };
static panda$core$String $s2343 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x65\x71", 8, 1 };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6E\x65", 8, 1 };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x74", 8, 1 };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x74", 8, 1 };
static panda$core$String $s2351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x67\x65", 8, 1 };
static panda$core$String $s2353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x63\x6D\x70\x20\x6F\x6C\x65", 8, 1 };
static panda$core$String $s2357 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2359 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s2362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2388 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2396 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2399 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2411 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s2416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2419 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x63\x63\x20", 4, 1 };
static panda$core$String $s2509 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 48, 1 };
static panda$core$String $s2534 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2540 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2542 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20", 30, 1 };
static panda$core$String $s2545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2565 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20", 4, 1 };
static panda$core$String $s2569 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s2572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2581 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x69\x38\x2A\x2C\x20\x69\x38\x2A\x2A\x20", 18, 1 };
static panda$core$String $s2584 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2592 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s2595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2611 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2620 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2651 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2662 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2668 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2670 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s2673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2682 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20", 8, 1 };
static panda$core$String $s2687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x69\x74\x61\x62\x6C\x65", 8, 1 };
static panda$core$String $s2705 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2713 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2715 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20\x5B\x20", 20, 1 };
static panda$core$String $s2718 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C", 2, 1 };
static panda$core$String $s2723 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s2725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s2728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s2735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2737 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x2A\x20", 30, 1 };
static panda$core$String $s2740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2754 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 9, 1 };
static panda$core$String $s2763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2C\x20", 3, 1 };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x2A\x20", 3, 1 };
static panda$core$String $s2774 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s2788 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 10, 1 };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2794 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x29\x2C\x20", 4, 1 };
static panda$core$String $s2801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s2810 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s2816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2820 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2825 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2828 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x31", 9, 1 };
static panda$core$String $s2834 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s2836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2895 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2897 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2C\x20\x25\x24\x69\x74\x61\x62\x6C\x65\x2A\x20", 46, 1 };
static panda$core$String $s2899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2903 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2905 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20\x69\x33\x32\x20\x32\x2C\x20\x69\x33\x32\x20", 15, 1 };
static panda$core$String $s2908 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x2A\x20", 16, 1 };
static panda$core$String $s2920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s2923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s2934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2937 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s2940 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2959 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x6C\x6C\x6F\x63", 5, 1 };
static panda$core$String $s2968 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s2973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s2986 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s2988 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s2990 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s2992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s2995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s2998 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28", 20, 1 };
static panda$core$String $s3008 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s3010 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3013 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x74", 3, 1 };
static panda$core$String $s3046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3051 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3059 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3065 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D", 2, 1 };
static panda$core$String $s3091 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s3096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3098 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3114 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3125 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3127 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3130 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3133 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3136 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3138 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20", 4, 1 };
static panda$core$String $s3140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3147 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3149 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3152 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x61\x6C\x6C\x6F\x63", 7, 1 };
static panda$core$String $s3170 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3172 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3175 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s3185 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3190 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6D\x75\x6C\x20", 7, 1 };
static panda$core$String $s3200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s3202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3205 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3220 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x72\x65\x61\x6C\x6C\x6F\x63\x28\x69\x38\x2A\x20", 25, 1 };
static panda$core$String $s3223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3225 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s3227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3229 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3231 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3238 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3250 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6F\x66\x66\x73\x65\x74", 6, 1 };
static panda$core$String $s3272 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3277 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20", 6, 1 };
static panda$core$String $s3294 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x69\x6E\x6C\x69\x6E\x65\x20\x63\x61\x6C\x6C\x20\x73\x65\x6C\x66\x20\x65\x72\x72\x6F\x72\x3E", 24, 1 };
static panda$core$String $s3351 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x24\x69\x6E\x6C\x69\x6E\x65", 7, 1 };
static panda$core$String $s3353 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s3373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3380 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s3407 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s3421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x42\x69\x74", 14, 1 };
static panda$core$String $s3423 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x26", 1, 1 };
static panda$core$String $s3433 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s3437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7C", 1, 1 };
static panda$core$String $s3453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s3457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s3475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3C\x65\x72\x72\x6F\x72\x3E", 7, 1 };
static panda$core$String $s3554 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3566 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s3595 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s3600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3602 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20", 8, 1 };
static panda$core$String $s3607 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3610 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3613 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3615 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s3619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s3624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3626 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s3629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3632 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3634 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3637 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s3676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3701 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3703 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s3708 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s3720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s3722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s3728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s3744 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s3758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x6E\x75\x6C\x6C\x2C\x20\x25", 9, 1 };
static panda$core$String $s3761 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20", 3, 1 };
static panda$core$String $s3763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s3765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s3768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s3775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s3784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s3800 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s3805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3808 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3814 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 14, 1 };
static panda$core$String $s3833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s3835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3838 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s3842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3854 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3856 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3861 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x69\x33\x32\x20\x30", 21, 1 };
static panda$core$String $s3865 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x69\x33\x32\x20\x30\x2C\x20\x69\x33\x32\x2A\x20", 18, 1 };
static panda$core$String $s3867 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3873 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3875 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s3878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3882 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x32", 14, 1 };
static panda$core$String $s3889 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s3893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3896 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s3901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s3904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3913 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3915 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s3918 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s3921 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s3926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s3994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4000 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4003 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4005 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4007 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4012 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4014 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4026 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4032 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4043 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4045 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s4050 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4062 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s4064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s4070 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4084 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s4086 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4095 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x68\x69\x20", 7, 1 };
static panda$core$String $s4100 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4102 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x7B\x20", 3, 1 };
static panda$core$String $s4108 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D\x2C\x20", 16, 1 };
static panda$core$String $s4111 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25", 1, 1 };
static panda$core$String $s4113 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D\x2C\x20\x5B", 4, 1 };
static panda$core$String $s4116 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25", 3, 1 };
static panda$core$String $s4119 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5D", 1, 1 };
static panda$core$String $s4135 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4137 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4145 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4154 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4156 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4159 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4162 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4165 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4171 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4173 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4176 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4191 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4193 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s4196 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4202 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x74\x72\x75\x65\x20\x7D\x2C\x20", 19, 1 };
static panda$core$String $s4207 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4210 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4217 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4240 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x6E\x63", 5, 1 };
static panda$core$String $s4243 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x78\x74", 4, 1 };
static panda$core$String $s4244 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7A\x65\x78\x74", 4, 1 };
static panda$core$String $s4301 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x69\x74\x63\x61\x73\x74", 7, 1 };
static panda$core$String $s4312 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4314 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20", 3, 1 };
static panda$core$String $s4317 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4323 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4326 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4352 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4354 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s4363 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4365 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s4368 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s4373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s4375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4377 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s4392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4394 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s4403 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4405 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s4408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s4413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20", 10, 1 };
static panda$core$String $s4415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30\x0A", 4, 1 };
static panda$core$String $s4425 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s4427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4429 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4431 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s4434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4438 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4440 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4443 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4449 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4454 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4457 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4460 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4466 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4468 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x63\x61\x6C\x6C\x20\x69\x38\x2A\x20\x40\x6D\x61\x6C\x6C\x6F\x63\x28\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s4473 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s4479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20\x69\x38\x2A\x20", 15, 1 };
static panda$core$String $s4484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s4508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4511 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4514 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20", 9, 1 };
static panda$core$String $s4516 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x33\x32\x20\x30", 5, 1 };
static panda$core$String $s4522 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 33, 1 };
static panda$core$String $s4524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4527 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4529 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x2A\x20", 41, 1 };
static panda$core$String $s4531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4536 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4541 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2D", 1, 1 };
static panda$core$String $s4548 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x74\x72\x75\x65", 4, 1 };
static panda$core$String $s4549 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x66\x61\x6C\x73\x65", 5, 1 };
static panda$core$String $s4559 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4561 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s4564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4572 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x63\x68\x61\x72\x73", 7, 1 };
static panda$core$String $s4579 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B", 1, 1 };
static panda$core$String $s4589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x78\x20\x69\x38\x5D", 6, 1 };
static panda$core$String $s4591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4593 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20", 33, 1 };
static panda$core$String $s4596 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5B\x20", 3, 1 };
static panda$core$String $s4600 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x38\x20", 3, 1 };
static panda$core$String $s4625 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x5D", 2, 1 };
static panda$core$String $s4633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x24\x73\x74\x72", 5, 1 };
static panda$core$String $s4635 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4644 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4646 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x70\x72\x69\x76\x61\x74\x65\x20\x75\x6E\x6E\x61\x6D\x65\x64\x5F\x61\x64\x64\x72\x20\x63\x6F\x6E\x73\x74\x61\x6E\x74\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x20\x7B\x20", 54, 1 };
static panda$core$String $s4648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 27, 1 };
static panda$core$String $s4650 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4653 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s4656 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x6C\x61\x73\x73\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x33\x32\x20", 69, 1 };
static panda$core$String $s4658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x33\x32\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x33\x32\x20\x31\x2C\x20\x30\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x20\x62\x69\x74\x63\x61\x73\x74\x28", 53, 1 };
static panda$core$String $s4660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s4663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x43\x68\x61\x72\x38\x2A\x29\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 49, 1 };
static panda$core$String $s4673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s4676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x31\x20\x7D\x20\x7D", 26, 1 };
static panda$core$String $s4684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x73\x65\x6C\x66", 5, 1 };
static panda$core$String $s4688 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s4697 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66\x20\x74\x6F\x20", 10, 1 };
static panda$core$String $s4716 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x30\x20\x7D", 8, 1 };
static panda$core$String $s4720 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4722 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4725 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4732 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20\x69\x31\x20", 10, 1 };
static panda$core$String $s4735 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x2D\x31", 4, 1 };
static panda$core$String $s4740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4742 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x65\x71\x20", 11, 1 };
static panda$core$String $s4745 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4756 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20\x69\x31\x20\x31\x20\x7D", 8, 1 };
static panda$core$String $s4775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4777 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4780 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s4785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x6E\x65\x20", 11, 1 };
static panda$core$String $s4790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6E\x75\x6C\x6C", 6, 1 };
static panda$core$String $s4796 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4798 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x42\x69\x74\x20\x7B\x20\x69\x31\x20\x75\x6E\x64\x65\x66\x20\x7D\x2C\x20\x69\x31\x20", 48, 1 };
static panda$core$String $s4801 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s4811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7B\x20", 2, 1 };
static panda$core$String $s4817 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66\x2C\x20\x69\x31\x20\x30\x20\x7D", 14, 1 };
static panda$core$String $s4819 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6E\x75\x6C\x6C", 4, 1 };
static panda$core$String $s4830 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4832 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s4837 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s4840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4848 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4850 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x78\x6F\x72\x20", 7, 1 };
static panda$core$String $s4855 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x2D\x31\x2C\x20", 5, 1 };
static panda$core$String $s4858 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4924 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s4929 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4953 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x65\x74", 3, 1 };
static panda$core$String $s4965 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s4967 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s4970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4973 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x5B\x5D\x3A\x3D", 4, 1 };
static panda$core$String $s4992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s4994 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s4997 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5011 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s5016 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5021 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s5024 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5027 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5033 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5038 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5041 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x73\x74\x72\x6F\x79", 7, 1 };
static panda$core$String $s5053 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5055 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s5058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20\x69\x38\x2A", 7, 1 };
static panda$core$String $s5061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x76\x6F\x69\x64\x20\x40\x66\x72\x65\x65\x28\x69\x38\x2A\x20", 20, 1 };
static panda$core$String $s5063 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5067 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x75\x6E\x73\x61\x66\x65\x2E\x50\x6F\x69\x6E\x74\x65\x72", 20, 1 };
static panda$core$String $s5148 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5160 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5182 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5187 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x24\x74\x6D\x70", 5, 1 };
static panda$core$String $s5192 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5194 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s5197 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s5204 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64\x20", 5, 1 };
static panda$core$String $s5206 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5208 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s5211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5214 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5218 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5223 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20", 5, 1 };
static panda$core$String $s5227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5232 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5234 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5236 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s5259 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5260 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s5269 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5271 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5274 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5283 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5285 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5288 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5291 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5306 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5308 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5320 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5322 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5362 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5364 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s5367 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5373 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5375 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5378 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5384 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5386 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s5392 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s5397 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5401 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5408 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s5415 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5417 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5421 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5424 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 1 };
static panda$core$String $s5427 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x33\x32\x20\x30", 7, 1 };
static panda$core$String $s5434 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5436 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5439 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5442 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5445 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5451 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5453 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s5456 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5459 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5462 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5464 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20\x30", 12, 1 };
static panda$core$String $s5467 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s5469 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5472 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5475 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5478 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5484 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5489 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x31", 3, 1 };
static panda$core$String $s5495 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5497 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x62\x69\x74\x63\x61\x73\x74\x20", 11, 1 };
static panda$core$String $s5503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5506 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s5508 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5512 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5519 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5521 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20", 17, 1 };
static panda$core$String $s5526 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5533 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5535 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 1 };
static panda$core$String $s5538 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x33\x32\x20\x30", 7, 1 };
static panda$core$String $s5545 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5547 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5550 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5553 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5556 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5562 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5564 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5567 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x32\x2C\x20\x30", 6, 1 };
static panda$core$String $s5571 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x69\x36\x34", 3, 1 };
static panda$core$String $s5575 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5577 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x74\x72\x75\x6E\x63\x20\x69\x36\x34\x20", 13, 1 };
static panda$core$String $s5580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x74\x6F\x20", 4, 1 };
static panda$core$String $s5583 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5589 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5591 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s5594 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x33\x2C\x20\x30", 6, 1 };
static panda$core$String $s5619 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x2E\x63\x6F\x72\x65\x2E\x49\x6E\x74", 14, 1 };
static panda$core$String $s5621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s5622 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75", 1, 1 };
static panda$core$String $s5624 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73", 1, 1 };
static panda$core$String $s5628 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5630 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x73\x67\x65\x20", 12, 1 };
static panda$core$String $s5633 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5636 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s5639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x31", 1, 1 };
static panda$core$String $s5640 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5642 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5645 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5648 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5658 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5660 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5663 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s5667 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5675 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5677 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s5680 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x65\x20", 3, 1 };
static panda$core$String $s5683 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5685 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5687 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5690 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5694 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5696 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5699 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5702 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5709 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5711 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s5714 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x74\x20", 3, 1 };
static panda$core$String $s5717 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5719 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5721 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5724 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5728 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5730 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5733 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5746 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5751 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5753 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x6C\x61\x62\x65\x6C\x20\x25", 7, 1 };
static panda$core$String $s5755 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5765 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s5768 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x65\x20", 3, 1 };
static panda$core$String $s5771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5773 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5775 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5778 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5782 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5784 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5787 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5797 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5799 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20", 8, 1 };
static panda$core$String $s5802 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x67\x74\x20", 3, 1 };
static panda$core$String $s5805 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5807 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5809 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5812 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5816 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5821 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5824 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5833 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s5836 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5839 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s5842 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s5851 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5864 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5866 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5869 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5872 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5879 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5881 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5884 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5887 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5899 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5901 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5904 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5912 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5914 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s5917 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5920 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5923 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5926 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5928 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5931 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5934 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5941 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5943 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s5946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5949 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5952 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5955 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s5957 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5960 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s5963 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5970 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5972 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5975 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s5978 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s5981 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5987 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s5989 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x73\x75\x62\x20", 7, 1 };
static panda$core$String $s5992 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x30\x2C\x20", 4, 1 };
static panda$core$String $s5995 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6004 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s6006 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6009 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6017 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6019 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x65\x20", 12, 1 };
static panda$core$String $s6022 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6025 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6029 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s6031 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6034 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6037 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6044 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6046 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x63\x6D\x70\x20\x75\x67\x74\x20", 12, 1 };
static panda$core$String $s6049 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6052 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6056 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s6058 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6061 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6064 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6071 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6073 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x64\x64\x20", 7, 1 };
static panda$core$String $s6076 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6079 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6082 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6088 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6090 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x69\x6E\x73\x65\x72\x74\x76\x61\x6C\x75\x65\x20", 15, 1 };
static panda$core$String $s6093 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7B\x20", 3, 1 };
static panda$core$String $s6096 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x75\x6E\x64\x65\x66", 6, 1 };
static panda$core$String $s6099 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D\x2C\x20", 4, 1 };
static panda$core$String $s6101 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6104 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s6107 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s6109 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6112 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6115 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s6118 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6121 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6123 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6140 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6142 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6153 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6155 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s6158 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s6161 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s6163 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6166 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6169 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6179 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6181 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6198 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6200 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6211 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6213 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x65\x78\x74\x72\x61\x63\x74\x76\x61\x6C\x75\x65\x20", 16, 1 };
static panda$core$String $s6216 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x30", 3, 1 };
static panda$core$String $s6219 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s6221 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6224 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6227 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6237 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6239 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6253 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6255 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6265 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6267 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6275 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6279 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x61\x6C\x6C\x6F\x63\x61\x20", 10, 1 };
static panda$core$String $s6284 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6290 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s6292 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6297 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s6302 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6393 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6395 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x67\x65\x74\x65\x6C\x65\x6D\x65\x6E\x74\x70\x74\x72\x20\x69\x6E\x62\x6F\x75\x6E\x64\x73\x20", 26, 1 };
static panda$core$String $s6402 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6404 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6410 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s6413 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x69\x36\x34\x20\x30\x2C\x20\x69\x33\x32\x20", 13, 1 };
static panda$core$String $s6416 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6428 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6430 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3D\x20\x6C\x6F\x61\x64\x20", 8, 1 };
static panda$core$String $s6435 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6437 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6441 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s6444 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6450 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6455 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A\x20", 2, 1 };
static panda$core$String $s6461 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6474 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6476 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6479 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6481 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x73\x74\x6F\x72\x65\x20", 6, 1 };
static panda$core$String $s6483 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6486 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6503 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6505 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x3B\x20\x69\x6E\x6C\x69\x6E\x65\x20\x72\x65\x74\x75\x72\x6E\x20\x28", 18, 1 };
static panda$core$String $s6510 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s6513 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20", 4, 1 };
static panda$core$String $s6518 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6524 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6528 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6531 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s6580 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6582 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6588 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x6C\x61\x62\x65\x6C\x20\x25", 10, 1 };
static panda$core$String $s6590 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6604 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x62\x72\x20\x69\x31\x20", 6, 1 };
static panda$core$String $s6606 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6609 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x6C\x61\x62\x65\x6C\x20\x25", 9, 1 };
static panda$core$String $s6612 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6621 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2F", 1, 1 };
static panda$core$String $s6629 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x20\x7B\x20\x69\x36\x34\x20", 24, 1 };
static panda$core$String $s6631 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x7D", 2, 1 };
static panda$core$String $s6639 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x63\x61\x6C\x6C\x20\x63\x63\x63\x20\x76\x6F\x69\x64\x20", 14, 1 };
static panda$core$String $s6661 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65", 16, 1 };
static panda$core$String $s6665 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24", 35, 1 };
static panda$core$String $s6666 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67", 52, 1 };
static panda$core$String $s6669 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x40\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x50\x61\x6E\x64\x61\x24\x61\x73\x73\x65\x72\x74\x69\x6F\x6E\x46\x61\x69\x6C\x75\x72\x65\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x24\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x49\x6E\x74\x36\x34", 69, 1 };
static panda$core$String $s6671 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 21, 1 };
static panda$core$String $s6673 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6676 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6679 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20\x25\x70\x61\x6E\x64\x61\x24\x63\x6F\x72\x65\x24\x53\x74\x72\x69\x6E\x67\x2A\x20", 22, 1 };
static panda$core$String $s6681 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6684 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s6686 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s6736 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6740 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6748 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x63\x6C\x61\x72\x65\x20", 8, 1 };
static panda$core$String $s6752 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6758 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x76\x6F\x69\x64", 4, 1 };
static panda$core$String $s6763 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6767 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s6771 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6772 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6776 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2A", 1, 1 };
static panda$core$String $s6779 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6783 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6785 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6790 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s6793 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6811 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6813 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6818 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s6823 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6826 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6827 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29", 1, 1 };
static panda$core$String $s6829 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x30", 1, 1 };
static panda$core$String $s6831 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x64\x65\x66\x69\x6E\x65\x20", 7, 1 };
static panda$core$String $s6835 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6840 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20", 1, 1 };
static panda$core$String $s6845 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x28", 1, 1 };
static panda$core$String $s6849 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6853 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6857 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25\x73\x65\x6C\x66", 6, 1 };
static panda$core$String $s6860 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6878 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6880 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6885 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x20\x25", 2, 1 };
static panda$core$String $s6890 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "", 0, 1 };
static panda$core$String $s6893 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x2C\x20", 2, 1 };
static panda$core$String $s6894 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x29\x20\x7B", 3, 1 };
static panda$core$String $s6933 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x72\x65\x74\x20\x76\x6F\x69\x64", 8, 1 };
static panda$core$String $s6935 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x75\x6E\x72\x65\x61\x63\x68\x61\x62\x6C\x65", 11, 1 };
static panda$core$String $s6938 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x7D", 1, 1 };
static panda$core$String $s6944 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4C\x6F\x6F\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6F\x72\x3C", 15, 1 };
static panda$core$String $s6946 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x3E", 1, 1 };
static panda$core$String $s6948 = { (panda$core$Class*) &panda$core$String$class, 2, (panda$core$Char8*) "\x4C\x6F\x6F\x70\x44\x65\x73\x63\x72\x69\x70\x74\x6F\x72\x3C\x3E", 16, 1 };

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
    org$pandalanguage$pandac$ClassDecl* $tmp128 = (($fn127) self->compiler->$class->vtable[13])(self->compiler, p_t);
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
    org$pandalanguage$pandac$ClassDecl* $tmp181 = (($fn180) self->compiler->$class->vtable[13])(self->compiler, p_t);
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
    org$pandalanguage$pandac$ClassDecl* $tmp223 = (($fn222) self->compiler->$class->vtable[13])(self->compiler, p_t);
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
    panda$core$MutableString* code262;
    org$pandalanguage$pandac$ClassDecl* cl271;
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
    panda$core$MutableString* $tmp263 = (panda$core$MutableString*) malloc(40);
    $tmp263->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp263->refCount.value = 1;
    panda$core$String* $tmp267 = (($fn266) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s265, $tmp267);
    panda$core$String* $tmp270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp268, &$s269);
    panda$core$MutableString$init$panda$core$String($tmp263, $tmp270);
    code262 = $tmp263;
    org$pandalanguage$pandac$ClassDecl* $tmp273 = (($fn272) self->compiler->$class->vtable[13])(self->compiler, p_t);
    cl271 = $tmp273;
    (($fn274) self->compiler->currentClass->$class->vtable[2])(self->compiler->currentClass, ((panda$core$Object*) cl271));
    separator275 = &$s276;
    {
        panda$collections$ListView* $tmp279 = (($fn278) self->compiler->$class->vtable[10])(self->compiler, cl271);
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
            (($fn306) code262->$class->vtable[3])(code262, $tmp305);
            separator275 = &$s307;
        }
        goto $l284;
        $l285:;
    }
    org$pandalanguage$pandac$Type* $tmp308 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp310 = (($fn309) p_t->$class->vtable[4])(p_t, ((panda$core$Object*) $tmp308));
    if ($tmp310.value) {
    {
        (($fn312) code262->$class->vtable[3])(code262, &$s311);
    }
    }
    (($fn314) code262->$class->vtable[3])(code262, &$s313);
    (($fn315) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code262));
    panda$core$Bit $tmp317 = (($fn316) self->compiler->$class->vtable[9])(self->compiler, cl271);
    if ($tmp317.value) {
    {
        (($fn318) self->$class->vtable[27])(self, cl271);
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
    org$pandalanguage$pandac$ClassDecl* $tmp335 = (($fn334) self->compiler->$class->vtable[13])(self->compiler, $tmp333);
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
    panda$core$Int64 $match$11021395;
    panda$core$String* name414;
    org$pandalanguage$pandac$ClassDecl* cl421;
    org$pandalanguage$pandac$ClassDecl* cl430;
    panda$core$MutableString* result466;
    panda$core$Range $tmp478;
    {
        $match$11021395 = p_t->typeKind;
        panda$core$Bit $tmp396 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11021395, ((panda$core$Int64) { 14 }));
        if ($tmp396.value) {
        {
            return &$s397;
        }
        }
        else {
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11021395, ((panda$core$Int64) { 12 }));
        bool $tmp398 = $tmp399.value;
        if ($tmp398) goto $l400;
        panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11021395, ((panda$core$Int64) { 13 }));
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
        panda$core$Bit $tmp410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11021395, ((panda$core$Int64) { 19 }));
        if ($tmp410.value) {
        {
            return &$s411;
        }
        }
        else {
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11021395, ((panda$core$Int64) { 10 }));
        if ($tmp412.value) {
        {
            (($fn413) self->$class->vtable[12])(self, p_t);
            panda$core$String* $tmp417 = (($fn416) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
            panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s415, $tmp417);
            panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp418, &$s419);
            name414 = $tmp420;
            org$pandalanguage$pandac$ClassDecl* $tmp423 = (($fn422) self->compiler->$class->vtable[13])(self->compiler, p_t);
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
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11021395, ((panda$core$Int64) { 11 }));
        if ($tmp429.value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp432 = (($fn431) self->compiler->$class->vtable[13])(self->compiler, p_t);
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
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11021395, ((panda$core$Int64) { 21 }));
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
            panda$core$Object* $tmp453 = (($fn452) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp455 = (($fn454) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp453));
            return $tmp455;
        }
        }
        else {
        panda$core$Bit $tmp456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11021395, ((panda$core$Int64) { 22 }));
        if ($tmp456.value) {
        {
            panda$core$Object* $tmp458 = (($fn457) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp460 = (($fn459) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp458));
            return $tmp460;
        }
        }
        else {
        panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11021395, ((panda$core$Int64) { 24 }));
        bool $tmp461 = $tmp462.value;
        if ($tmp461) goto $l463;
        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$11021395, ((panda$core$Int64) { 25 }));
        $tmp461 = $tmp464.value;
        $l463:;
        panda$core$Bit $tmp465 = { $tmp461 };
        if ($tmp465.value) {
        {
            panda$core$MutableString* $tmp467 = (panda$core$MutableString*) malloc(40);
            $tmp467->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp467->refCount.value = 1;
            panda$core$Int64 $tmp470 = (($fn469) p_t->subtypes->$class->vtable[3])(p_t->subtypes);
            panda$core$Int64 $tmp471 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp470, ((panda$core$Int64) { 1 }));
            panda$core$Object* $tmp473 = (($fn472) p_t->subtypes->$class->vtable[2])(p_t->subtypes, $tmp471);
            panda$core$String* $tmp475 = (($fn474) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp473));
            panda$core$MutableString$init$panda$core$String($tmp467, $tmp475);
            result466 = $tmp467;
            (($fn477) result466->$class->vtable[3])(result466, &$s476);
            panda$core$Int64 $tmp480 = (($fn479) p_t->subtypes->$class->vtable[3])(p_t->subtypes);
            panda$core$Int64 $tmp481 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp480, ((panda$core$Int64) { 1 }));
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp478, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp481)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp483 = ((panda$core$Int64$wrapper*) $tmp478.start)->value.value;
            panda$core$Int64 i482 = { $tmp483 };
            int64_t $tmp485 = ((panda$core$Int64$wrapper*) $tmp478.end)->value.value;
            int64_t $tmp486 = $tmp478.step.value;
            bool $tmp487 = $tmp478.inclusive.value;
            bool $tmp494 = $tmp486 > 0;
            if ($tmp494) goto $l492; else goto $l493;
            $l492:;
            if ($tmp487) goto $l495; else goto $l496;
            $l495:;
            if ($tmp483 <= $tmp485) goto $l488; else goto $l490;
            $l496:;
            if ($tmp483 < $tmp485) goto $l488; else goto $l490;
            $l493:;
            if ($tmp487) goto $l497; else goto $l498;
            $l497:;
            if ($tmp483 >= $tmp485) goto $l488; else goto $l490;
            $l498:;
            if ($tmp483 > $tmp485) goto $l488; else goto $l490;
            $l488:;
            {
                panda$core$Bit $tmp500 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(i482, ((panda$core$Int64) { 0 }));
                if ($tmp500.value) {
                {
                    (($fn502) result466->$class->vtable[3])(result466, &$s501);
                }
                }
                panda$core$Object* $tmp504 = (($fn503) p_t->subtypes->$class->vtable[2])(p_t->subtypes, i482);
                panda$core$String* $tmp506 = (($fn505) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp504));
                (($fn507) result466->$class->vtable[3])(result466, $tmp506);
            }
            $l491:;
            if ($tmp494) goto $l509; else goto $l510;
            $l509:;
            int64_t $tmp511 = $tmp485 - i482.value;
            if ($tmp487) goto $l512; else goto $l513;
            $l512:;
            if ($tmp511 >= $tmp486) goto $l508; else goto $l490;
            $l513:;
            if ($tmp511 > $tmp486) goto $l508; else goto $l490;
            $l510:;
            int64_t $tmp515 = i482.value - $tmp485;
            if ($tmp487) goto $l516; else goto $l517;
            $l516:;
            if ($tmp515 >= -$tmp486) goto $l508; else goto $l490;
            $l517:;
            if ($tmp515 > -$tmp486) goto $l508; else goto $l490;
            $l508:;
            i482.value += $tmp486;
            goto $l488;
            $l490:;
            (($fn520) result466->$class->vtable[3])(result466, &$s519);
            panda$core$String* $tmp522 = (($fn521) result466->$class->vtable[0])(result466);
            return $tmp522;
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
    panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_t->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp523.value) {
    {
        panda$core$Object* $tmp525 = (($fn524) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp527 = (($fn526) self->$class->vtable[16])(self, ((org$pandalanguage$pandac$Type*) $tmp525));
        return $tmp527;
    }
    }
    (($fn528) self->$class->vtable[13])(self, p_t);
    panda$core$String* $tmp531 = (($fn530) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_t)->name);
    panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s529, $tmp531);
    panda$core$String* $tmp534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp532, &$s533);
    return $tmp534;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$String* $tmp536 = (($fn535) self->$class->vtable[16])(self, p_t);
    panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp536, &$s537);
    return $tmp538;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapperType$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    org$pandalanguage$pandac$Type* inheritedType539;
    panda$core$MutableString* result542;
    panda$core$Range $tmp568;
    org$pandalanguage$pandac$Type* $tmp541 = (($fn540) self->compiler->$class->vtable[45])(self->compiler, p_m);
    inheritedType539 = $tmp541;
    panda$core$MutableString* $tmp543 = (panda$core$MutableString*) malloc(40);
    $tmp543->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp543->refCount.value = 1;
    panda$core$MutableString$init($tmp543);
    result542 = $tmp543;
    panda$core$Int64 $tmp546 = (($fn545) inheritedType539->subtypes->$class->vtable[3])(inheritedType539->subtypes);
    panda$core$Int64 $tmp547 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp546, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp549 = (($fn548) inheritedType539->subtypes->$class->vtable[2])(inheritedType539->subtypes, $tmp547);
    panda$core$String* $tmp551 = (($fn550) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp549));
    (($fn552) result542->$class->vtable[3])(result542, $tmp551);
    (($fn554) result542->$class->vtable[3])(result542, &$s553);
    panda$core$String* $tmp557 = (($fn556) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s555, $tmp557);
    panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp558, &$s559);
    (($fn561) result542->$class->vtable[3])(result542, $tmp560);
    panda$core$Bit $tmp563 = (($fn562) self->compiler->$class->vtable[9])(self->compiler, p_m->owner);
    if ($tmp563.value) {
    {
        (($fn565) result542->$class->vtable[3])(result542, &$s564);
    }
    }
    (($fn567) result542->$class->vtable[3])(result542, &$s566);
    panda$core$Int64 $tmp570 = (($fn569) inheritedType539->subtypes->$class->vtable[3])(inheritedType539->subtypes);
    panda$core$Int64 $tmp571 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp570, ((panda$core$Int64) { 1 }));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp568, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp571)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp573 = ((panda$core$Int64$wrapper*) $tmp568.start)->value.value;
    panda$core$Int64 i572 = { $tmp573 };
    int64_t $tmp575 = ((panda$core$Int64$wrapper*) $tmp568.end)->value.value;
    int64_t $tmp576 = $tmp568.step.value;
    bool $tmp577 = $tmp568.inclusive.value;
    bool $tmp584 = $tmp576 > 0;
    if ($tmp584) goto $l582; else goto $l583;
    $l582:;
    if ($tmp577) goto $l585; else goto $l586;
    $l585:;
    if ($tmp573 <= $tmp575) goto $l578; else goto $l580;
    $l586:;
    if ($tmp573 < $tmp575) goto $l578; else goto $l580;
    $l583:;
    if ($tmp577) goto $l587; else goto $l588;
    $l587:;
    if ($tmp573 >= $tmp575) goto $l578; else goto $l580;
    $l588:;
    if ($tmp573 > $tmp575) goto $l578; else goto $l580;
    $l578:;
    {
        (($fn591) result542->$class->vtable[3])(result542, &$s590);
        panda$core$Object* $tmp593 = (($fn592) inheritedType539->subtypes->$class->vtable[2])(inheritedType539->subtypes, i572);
        panda$core$String* $tmp595 = (($fn594) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp593));
        (($fn596) result542->$class->vtable[3])(result542, $tmp595);
    }
    $l581:;
    if ($tmp584) goto $l598; else goto $l599;
    $l598:;
    int64_t $tmp600 = $tmp575 - i572.value;
    if ($tmp577) goto $l601; else goto $l602;
    $l601:;
    if ($tmp600 >= $tmp576) goto $l597; else goto $l580;
    $l602:;
    if ($tmp600 > $tmp576) goto $l597; else goto $l580;
    $l599:;
    int64_t $tmp604 = i572.value - $tmp575;
    if ($tmp577) goto $l605; else goto $l606;
    $l605:;
    if ($tmp604 >= -$tmp576) goto $l597; else goto $l580;
    $l606:;
    if ($tmp604 > -$tmp576) goto $l597; else goto $l580;
    $l597:;
    i572.value += $tmp576;
    goto $l578;
    $l580:;
    (($fn609) result542->$class->vtable[3])(result542, &$s608);
    panda$core$String* $tmp611 = (($fn610) result542->$class->vtable[0])(result542);
    return $tmp611;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$nullableType$org$pandalanguage$pandac$Type$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Object* $tmp613 = (($fn612) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
    (($fn614) self->$class->vtable[13])(self, ((org$pandalanguage$pandac$Type*) $tmp613));
    panda$core$Object* $tmp617 = (($fn616) p_t->subtypes->$class->vtable[2])(p_t->subtypes, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp619 = (($fn618) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp617));
    panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s615, $tmp619);
    panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s621);
    return $tmp622;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces623;
    panda$core$String* previous628;
    panda$collections$Iterator* intfType$Iter630;
    org$pandalanguage$pandac$Type* intfType642;
    org$pandalanguage$pandac$ClassDecl* intf647;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC650;
    panda$collections$ListView* methods653;
    panda$core$String* name656;
    panda$core$String* t668;
    panda$core$MutableString* result683;
    panda$core$String* separator725;
    panda$collections$Iterator* m$Iter727;
    org$pandalanguage$pandac$MethodDecl* m739;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry750;
    org$pandalanguage$pandac$Type* $tmp625 = (($fn624) p_cl->$class->vtable[3])(p_cl);
    panda$collections$Set* $tmp627 = (($fn626) self->compiler->$class->vtable[14])(self->compiler, $tmp625);
    interfaces623 = $tmp627;
    previous628 = &$s629;
    {
        ITable* $tmp631 = ((panda$collections$Iterable*) interfaces623)->$class->itable;
        while ($tmp631->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp631 = $tmp631->next;
        }
        $fn633 $tmp632 = $tmp631->methods[0];
        panda$collections$Iterator* $tmp634 = $tmp632(((panda$collections$Iterable*) interfaces623));
        intfType$Iter630 = $tmp634;
        $l635:;
        ITable* $tmp637 = intfType$Iter630->$class->itable;
        while ($tmp637->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp637 = $tmp637->next;
        }
        $fn639 $tmp638 = $tmp637->methods[0];
        panda$core$Bit $tmp640 = $tmp638(intfType$Iter630);
        panda$core$Bit $tmp641 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp640);
        if (!$tmp641.value) goto $l636;
        {
            ITable* $tmp643 = intfType$Iter630->$class->itable;
            while ($tmp643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp643 = $tmp643->next;
            }
            $fn645 $tmp644 = $tmp643->methods[1];
            panda$core$Object* $tmp646 = $tmp644(intfType$Iter630);
            intfType642 = ((org$pandalanguage$pandac$Type*) $tmp646);
            org$pandalanguage$pandac$ClassDecl* $tmp649 = (($fn648) self->compiler->$class->vtable[13])(self->compiler, intfType642);
            intf647 = $tmp649;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp652 = (($fn651) self->$class->vtable[26])(self, intf647);
            intfCC650 = $tmp652;
            panda$collections$ListView* $tmp655 = (($fn654) self->compiler->$class->vtable[18])(self->compiler, p_cl, intfType642);
            methods653 = $tmp655;
            panda$core$String* $tmp659 = (($fn658) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s657, $tmp659);
            panda$core$String* $tmp662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp660, &$s661);
            panda$core$String* $tmp664 = (($fn663) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) intf647)->name);
            panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp662, $tmp664);
            panda$core$String* $tmp667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp665, &$s666);
            name656 = $tmp667;
            org$pandalanguage$pandac$Type* $tmp670 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp672 = (($fn671) self->$class->vtable[15])(self, $tmp670);
            panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s669, $tmp672);
            panda$core$String* $tmp675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp673, &$s674);
            ITable* $tmp676 = ((panda$collections$CollectionView*) methods653)->$class->itable;
            while ($tmp676->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp676 = $tmp676->next;
            }
            $fn678 $tmp677 = $tmp676->methods[0];
            panda$core$Int64 $tmp679 = $tmp677(((panda$collections$CollectionView*) methods653));
            panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp675, ((panda$core$Object*) wrap_panda$core$Int64($tmp679)));
            panda$core$String* $tmp682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, &$s681);
            t668 = $tmp682;
            panda$core$MutableString* $tmp684 = (panda$core$MutableString*) malloc(40);
            $tmp684->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp684->refCount.value = 1;
            panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s686, name656);
            panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp687, &$s688);
            panda$core$String* $tmp690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp689, t668);
            panda$core$String* $tmp692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp690, &$s691);
            org$pandalanguage$pandac$Type* $tmp693 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp695 = (($fn694) self->$class->vtable[15])(self, $tmp693);
            panda$core$String* $tmp696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp692, $tmp695);
            panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp696, &$s697);
            panda$core$String* $tmp700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s699, intfCC650->type);
            panda$core$String* $tmp702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s701);
            panda$core$String* $tmp703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp702, intfCC650->name);
            panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp703, &$s704);
            org$pandalanguage$pandac$Type* $tmp706 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp708 = (($fn707) self->$class->vtable[15])(self, $tmp706);
            panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp705, $tmp708);
            panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp709, &$s710);
            panda$core$String* $tmp712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp698, $tmp711);
            panda$core$String* $tmp714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s713, previous628);
            panda$core$String* $tmp716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp714, &$s715);
            ITable* $tmp717 = ((panda$collections$CollectionView*) methods653)->$class->itable;
            while ($tmp717->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp717 = $tmp717->next;
            }
            $fn719 $tmp718 = $tmp717->methods[0];
            panda$core$Int64 $tmp720 = $tmp718(((panda$collections$CollectionView*) methods653));
            panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp716, ((panda$core$Object*) wrap_panda$core$Int64($tmp720)));
            panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp721, &$s722);
            panda$core$String* $tmp724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, $tmp723);
            panda$core$MutableString$init$panda$core$String($tmp684, $tmp724);
            result683 = $tmp684;
            separator725 = &$s726;
            {
                ITable* $tmp728 = ((panda$collections$Iterable*) methods653)->$class->itable;
                while ($tmp728->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp728 = $tmp728->next;
                }
                $fn730 $tmp729 = $tmp728->methods[0];
                panda$collections$Iterator* $tmp731 = $tmp729(((panda$collections$Iterable*) methods653));
                m$Iter727 = $tmp731;
                $l732:;
                ITable* $tmp734 = m$Iter727->$class->itable;
                while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp734 = $tmp734->next;
                }
                $fn736 $tmp735 = $tmp734->methods[0];
                panda$core$Bit $tmp737 = $tmp735(m$Iter727);
                panda$core$Bit $tmp738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp737);
                if (!$tmp738.value) goto $l733;
                {
                    ITable* $tmp740 = m$Iter727->$class->itable;
                    while ($tmp740->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp740 = $tmp740->next;
                    }
                    $fn742 $tmp741 = $tmp740->methods[1];
                    panda$core$Object* $tmp743 = $tmp741(m$Iter727);
                    m739 = ((org$pandalanguage$pandac$MethodDecl*) $tmp743);
                    (($fn744) result683->$class->vtable[3])(result683, separator725);
                    separator725 = &$s745;
                    panda$core$Bit $tmp747 = (($fn746) m739->annotations->$class->vtable[10])(m739->annotations);
                    if ($tmp747.value) {
                    {
                        (($fn749) result683->$class->vtable[3])(result683, &$s748);
                    }
                    }
                    else {
                    {
                        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp752 = (($fn751) self->$class->vtable[25])(self, m739);
                        entry750 = $tmp752;
                        panda$core$String* $tmp754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s753, ((panda$core$String*) entry750->second));
                        panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, &$s755);
                        panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, ((panda$core$String*) entry750->first));
                        panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp757, &$s758);
                        (($fn760) result683->$class->vtable[3])(result683, $tmp759);
                    }
                    }
                }
                goto $l732;
                $l733:;
            }
            (($fn762) result683->$class->vtable[3])(result683, &$s761);
            (($fn763) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result683));
            panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s764, t668);
            panda$core$String* $tmp767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, &$s766);
            panda$core$String* $tmp768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp767, name656);
            panda$core$String* $tmp770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp768, &$s769);
            previous628 = $tmp770;
        }
        goto $l635;
        $l636:;
    }
    return previous628;
}
org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* org$pandalanguage$pandac$LLVMCodeGenerator$createMethodShim$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$Type$panda$io$OutputStream$R$org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_raw, org$pandalanguage$pandac$Type* p_effective, panda$io$OutputStream* p_rawOut) {
    panda$io$MemoryOutputStream* outBuffer771;
    panda$io$IndentedOutputStream* out774;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* found777;
    panda$core$Int64 oldVarCount780;
    org$pandalanguage$pandac$Type* effectiveReturnType781;
    panda$core$String* resultName787;
    panda$core$MutableString* resultType792;
    panda$core$String* self_t805;
    panda$core$Range $tmp816;
    panda$core$String* pType836;
    panda$collections$Array* casts867;
    panda$core$Range $tmp870;
    panda$core$String* p890;
    panda$core$String* returnValue916;
    panda$core$Range $tmp950;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* result1012;
    panda$io$MemoryOutputStream* $tmp772 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp772->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp772->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp772);
    outBuffer771 = $tmp772;
    panda$io$IndentedOutputStream* $tmp775 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp775->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp775->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp775, ((panda$io$OutputStream*) outBuffer771));
    out774 = $tmp775;
    panda$core$Object* $tmp779 = (($fn778) self->methodShims->$class->vtable[3])(self->methodShims, ((panda$core$Object*) p_raw));
    found777 = ((org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) $tmp779);
    if (((panda$core$Bit) { found777 != NULL }).value) {
    {
        return found777;
    }
    }
    oldVarCount780 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$Int64 $tmp783 = (($fn782) p_effective->subtypes->$class->vtable[3])(p_effective->subtypes);
    panda$core$Int64 $tmp784 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp783, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp786 = (($fn785) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, $tmp784);
    effectiveReturnType781 = ((org$pandalanguage$pandac$Type*) $tmp786);
    panda$core$String* $tmp789 = (($fn788) self->$class->vtable[30])(self, p_raw);
    panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp789, &$s790);
    resultName787 = $tmp791;
    panda$core$MutableString* $tmp793 = (panda$core$MutableString*) malloc(40);
    $tmp793->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp793->refCount.value = 1;
    panda$core$String* $tmp796 = (($fn795) self->$class->vtable[15])(self, effectiveReturnType781);
    panda$core$MutableString$init$panda$core$String($tmp793, $tmp796);
    resultType792 = $tmp793;
    panda$core$String* $tmp798 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s797, ((panda$core$Object*) resultType792));
    panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp798, &$s799);
    panda$core$String* $tmp801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp800, resultName787);
    panda$core$String* $tmp803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp801, &$s802);
    (($fn804) ((panda$io$OutputStream*) out774)->$class->vtable[16])(((panda$io$OutputStream*) out774), $tmp803);
    panda$core$String* $tmp807 = (($fn806) self->$class->vtable[86])(self, p_raw);
    self_t805 = $tmp807;
    panda$core$String* $tmp809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s808, self_t805);
    panda$core$String* $tmp811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp809, &$s810);
    (($fn812) ((panda$io$OutputStream*) out774)->$class->vtable[16])(((panda$io$OutputStream*) out774), $tmp811);
    (($fn814) resultType792->$class->vtable[3])(resultType792, &$s813);
    (($fn815) resultType792->$class->vtable[3])(resultType792, self_t805);
    panda$core$Int64 $tmp817 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp816, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp817)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp819 = ((panda$core$Int64$wrapper*) $tmp816.start)->value.value;
    panda$core$Int64 i818 = { $tmp819 };
    int64_t $tmp821 = ((panda$core$Int64$wrapper*) $tmp816.end)->value.value;
    int64_t $tmp822 = $tmp816.step.value;
    bool $tmp823 = $tmp816.inclusive.value;
    bool $tmp830 = $tmp822 > 0;
    if ($tmp830) goto $l828; else goto $l829;
    $l828:;
    if ($tmp823) goto $l831; else goto $l832;
    $l831:;
    if ($tmp819 <= $tmp821) goto $l824; else goto $l826;
    $l832:;
    if ($tmp819 < $tmp821) goto $l824; else goto $l826;
    $l829:;
    if ($tmp823) goto $l833; else goto $l834;
    $l833:;
    if ($tmp819 >= $tmp821) goto $l824; else goto $l826;
    $l834:;
    if ($tmp819 > $tmp821) goto $l824; else goto $l826;
    $l824:;
    {
        panda$core$Object* $tmp838 = (($fn837) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i818);
        panda$core$String* $tmp840 = (($fn839) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp838));
        pType836 = $tmp840;
        (($fn842) resultType792->$class->vtable[3])(resultType792, &$s841);
        (($fn843) resultType792->$class->vtable[3])(resultType792, pType836);
        panda$core$String* $tmp845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s844, pType836);
        panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp845, &$s846);
        panda$core$String* $tmp848 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp847, ((panda$core$Object*) wrap_panda$core$Int64(i818)));
        panda$core$String* $tmp850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp848, &$s849);
        (($fn851) ((panda$io$OutputStream*) out774)->$class->vtable[16])(((panda$io$OutputStream*) out774), $tmp850);
    }
    $l827:;
    if ($tmp830) goto $l853; else goto $l854;
    $l853:;
    int64_t $tmp855 = $tmp821 - i818.value;
    if ($tmp823) goto $l856; else goto $l857;
    $l856:;
    if ($tmp855 >= $tmp822) goto $l852; else goto $l826;
    $l857:;
    if ($tmp855 > $tmp822) goto $l852; else goto $l826;
    $l854:;
    int64_t $tmp859 = i818.value - $tmp821;
    if ($tmp823) goto $l860; else goto $l861;
    $l860:;
    if ($tmp859 >= -$tmp822) goto $l852; else goto $l826;
    $l861:;
    if ($tmp859 > -$tmp822) goto $l852; else goto $l826;
    $l852:;
    i818.value += $tmp822;
    goto $l824;
    $l826:;
    (($fn864) ((panda$io$OutputStream*) out774)->$class->vtable[19])(((panda$io$OutputStream*) out774), &$s863);
    (($fn866) resultType792->$class->vtable[3])(resultType792, &$s865);
    panda$collections$Array* $tmp868 = (panda$collections$Array*) malloc(40);
    $tmp868->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp868->refCount.value = 1;
    panda$collections$Array$init($tmp868);
    casts867 = $tmp868;
    panda$core$Int64 $tmp871 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp870, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp871)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp873 = ((panda$core$Int64$wrapper*) $tmp870.start)->value.value;
    panda$core$Int64 i872 = { $tmp873 };
    int64_t $tmp875 = ((panda$core$Int64$wrapper*) $tmp870.end)->value.value;
    int64_t $tmp876 = $tmp870.step.value;
    bool $tmp877 = $tmp870.inclusive.value;
    bool $tmp884 = $tmp876 > 0;
    if ($tmp884) goto $l882; else goto $l883;
    $l882:;
    if ($tmp877) goto $l885; else goto $l886;
    $l885:;
    if ($tmp873 <= $tmp875) goto $l878; else goto $l880;
    $l886:;
    if ($tmp873 < $tmp875) goto $l878; else goto $l880;
    $l883:;
    if ($tmp877) goto $l887; else goto $l888;
    $l887:;
    if ($tmp873 >= $tmp875) goto $l878; else goto $l880;
    $l888:;
    if ($tmp873 > $tmp875) goto $l878; else goto $l880;
    $l878:;
    {
        panda$core$String* $tmp892 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s891, ((panda$core$Object*) wrap_panda$core$Int64(i872)));
        panda$core$String* $tmp894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp892, &$s893);
        p890 = $tmp894;
        panda$core$Object* $tmp895 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i872);
        panda$core$Object* $tmp897 = (($fn896) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i872);
        panda$core$Bit $tmp899 = (($fn898) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp895)->type->$class->vtable[5])(((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp895)->type, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp897)));
        if ($tmp899.value) {
        {
            panda$core$Object* $tmp901 = (($fn900) p_effective->subtypes->$class->vtable[2])(p_effective->subtypes, i872);
            panda$core$Object* $tmp902 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i872);
            panda$core$String* $tmp904 = (($fn903) self->$class->vtable[52])(self, p890, ((org$pandalanguage$pandac$Type*) $tmp901), ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp902)->type, out774);
            panda$collections$Array$add$panda$collections$Array$T(casts867, ((panda$core$Object*) $tmp904));
        }
        }
        else {
        {
            panda$collections$Array$add$panda$collections$Array$T(casts867, ((panda$core$Object*) p890));
        }
        }
    }
    $l881:;
    if ($tmp884) goto $l906; else goto $l907;
    $l906:;
    int64_t $tmp908 = $tmp875 - i872.value;
    if ($tmp877) goto $l909; else goto $l910;
    $l909:;
    if ($tmp908 >= $tmp876) goto $l905; else goto $l880;
    $l910:;
    if ($tmp908 > $tmp876) goto $l905; else goto $l880;
    $l907:;
    int64_t $tmp912 = i872.value - $tmp875;
    if ($tmp877) goto $l913; else goto $l914;
    $l913:;
    if ($tmp912 >= -$tmp876) goto $l905; else goto $l880;
    $l914:;
    if ($tmp912 > -$tmp876) goto $l905; else goto $l880;
    $l905:;
    i872.value += $tmp876;
    goto $l878;
    $l880:;
    org$pandalanguage$pandac$Type* $tmp917 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp919 = (($fn918) p_raw->returnType->$class->vtable[5])(p_raw->returnType, ((panda$core$Object*) $tmp917));
    if ($tmp919.value) {
    {
        panda$core$String* $tmp921 = (($fn920) self->$class->vtable[4])(self);
        returnValue916 = $tmp921;
        panda$core$String* $tmp923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s922, returnValue916);
        panda$core$String* $tmp925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp923, &$s924);
        (($fn926) ((panda$io$OutputStream*) out774)->$class->vtable[16])(((panda$io$OutputStream*) out774), $tmp925);
    }
    }
    else {
    {
        returnValue916 = &$s927;
    }
    }
    panda$core$String* $tmp930 = (($fn929) self->$class->vtable[40])(self, p_raw);
    panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s928, $tmp930);
    panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp931, &$s932);
    panda$core$String* $tmp935 = (($fn934) self->$class->vtable[15])(self, p_raw->returnType);
    panda$core$String* $tmp936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp933, $tmp935);
    panda$core$String* $tmp938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp936, &$s937);
    panda$core$String* $tmp940 = (($fn939) self->$class->vtable[30])(self, p_raw);
    panda$core$String* $tmp941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp938, $tmp940);
    panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp941, &$s942);
    panda$core$String* $tmp945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s944, self_t805);
    panda$core$String* $tmp947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp945, &$s946);
    panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp943, $tmp947);
    (($fn949) ((panda$io$OutputStream*) out774)->$class->vtable[16])(((panda$io$OutputStream*) out774), $tmp948);
    panda$core$Int64 $tmp951 = panda$collections$Array$get_count$R$panda$core$Int64(p_raw->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp950, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp951)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp953 = ((panda$core$Int64$wrapper*) $tmp950.start)->value.value;
    panda$core$Int64 i952 = { $tmp953 };
    int64_t $tmp955 = ((panda$core$Int64$wrapper*) $tmp950.end)->value.value;
    int64_t $tmp956 = $tmp950.step.value;
    bool $tmp957 = $tmp950.inclusive.value;
    bool $tmp964 = $tmp956 > 0;
    if ($tmp964) goto $l962; else goto $l963;
    $l962:;
    if ($tmp957) goto $l965; else goto $l966;
    $l965:;
    if ($tmp953 <= $tmp955) goto $l958; else goto $l960;
    $l966:;
    if ($tmp953 < $tmp955) goto $l958; else goto $l960;
    $l963:;
    if ($tmp957) goto $l967; else goto $l968;
    $l967:;
    if ($tmp953 >= $tmp955) goto $l958; else goto $l960;
    $l968:;
    if ($tmp953 > $tmp955) goto $l958; else goto $l960;
    $l958:;
    {
        panda$core$Object* $tmp971 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_raw->parameters, i952);
        panda$core$String* $tmp973 = (($fn972) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp971)->type);
        panda$core$String* $tmp974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s970, $tmp973);
        panda$core$String* $tmp976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp974, &$s975);
        panda$core$Object* $tmp977 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(casts867, i952);
        panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp976, ((panda$core$String*) $tmp977));
        panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp978, &$s979);
        (($fn981) ((panda$io$OutputStream*) out774)->$class->vtable[16])(((panda$io$OutputStream*) out774), $tmp980);
    }
    $l961:;
    if ($tmp964) goto $l983; else goto $l984;
    $l983:;
    int64_t $tmp985 = $tmp955 - i952.value;
    if ($tmp957) goto $l986; else goto $l987;
    $l986:;
    if ($tmp985 >= $tmp956) goto $l982; else goto $l960;
    $l987:;
    if ($tmp985 > $tmp956) goto $l982; else goto $l960;
    $l984:;
    int64_t $tmp989 = i952.value - $tmp955;
    if ($tmp957) goto $l990; else goto $l991;
    $l990:;
    if ($tmp989 >= -$tmp956) goto $l982; else goto $l960;
    $l991:;
    if ($tmp989 > -$tmp956) goto $l982; else goto $l960;
    $l982:;
    i952.value += $tmp956;
    goto $l958;
    $l960:;
    (($fn994) ((panda$io$OutputStream*) out774)->$class->vtable[19])(((panda$io$OutputStream*) out774), &$s993);
    org$pandalanguage$pandac$Type* $tmp995 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp997 = (($fn996) p_raw->returnType->$class->vtable[5])(p_raw->returnType, ((panda$core$Object*) $tmp995));
    if ($tmp997.value) {
    {
        panda$core$String* $tmp999 = (($fn998) self->$class->vtable[15])(self, effectiveReturnType781);
        panda$core$String* $tmp1001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp999, &$s1000);
        panda$core$String* $tmp1003 = (($fn1002) self->$class->vtable[52])(self, returnValue916, p_raw->returnType, effectiveReturnType781, out774);
        panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1001, $tmp1003);
        returnValue916 = $tmp1004;
    }
    }
    panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1005, returnValue916);
    panda$core$String* $tmp1008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1006, &$s1007);
    (($fn1009) ((panda$io$OutputStream*) out774)->$class->vtable[19])(((panda$io$OutputStream*) out774), $tmp1008);
    (($fn1011) ((panda$io$OutputStream*) out774)->$class->vtable[19])(((panda$io$OutputStream*) out774), &$s1010);
    self->varCount = oldVarCount780;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1013 = (org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim*) malloc(32);
    $tmp1013->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$class;
    $tmp1013->refCount.value = 1;
    panda$core$String* $tmp1016 = (($fn1015) resultType792->$class->vtable[0])(resultType792);
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String($tmp1013, resultName787, $tmp1016);
    result1012 = $tmp1013;
    (($fn1017) self->methodShims->$class->vtable[5])(self->methodShims, ((panda$core$Object*) p_raw), ((panda$core$Object*) result1012));
    (($fn1018) p_rawOut->$class->vtable[15])(p_rawOut, ((panda$core$Object*) outBuffer771));
    return result1012;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$createWrapperShim$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 oldVarCount1019;
    panda$core$String* result1020;
    panda$core$String* selfType1027;
    org$pandalanguage$pandac$Type* actualMethodType1047;
    org$pandalanguage$pandac$Type* inheritedMethodType1050;
    panda$core$Range $tmp1053;
    panda$collections$Array* parameters1105;
    panda$core$Range $tmp1108;
    panda$collections$Array* children1148;
    panda$core$String* unwrapped1154;
    panda$core$String* returnValue1161;
    panda$core$Range $tmp1202;
    oldVarCount1019 = self->varCount;
    self->varCount = ((panda$core$Int64) { 0 });
    panda$core$String* $tmp1023 = (($fn1022) self->$class->vtable[30])(self, p_m);
    panda$core$String* $tmp1024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1021, $tmp1023);
    panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1024, &$s1025);
    result1020 = $tmp1026;
    panda$core$String* $tmp1030 = (($fn1029) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1028, $tmp1030);
    panda$core$String* $tmp1033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1031, &$s1032);
    selfType1027 = $tmp1033;
    panda$core$String* $tmp1036 = (($fn1035) self->$class->vtable[15])(self, p_m->returnType);
    panda$core$String* $tmp1037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1034, $tmp1036);
    panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1037, &$s1038);
    panda$core$String* $tmp1040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1039, result1020);
    panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1040, &$s1041);
    panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, selfType1027);
    panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1043, &$s1044);
    (($fn1046) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1045);
    org$pandalanguage$pandac$Type* $tmp1049 = (($fn1048) self->compiler->$class->vtable[43])(self->compiler, p_m);
    actualMethodType1047 = $tmp1049;
    org$pandalanguage$pandac$Type* $tmp1052 = (($fn1051) self->compiler->$class->vtable[45])(self->compiler, p_m);
    inheritedMethodType1050 = $tmp1052;
    panda$core$Int64 $tmp1054 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1053, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1054)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1056 = ((panda$core$Int64$wrapper*) $tmp1053.start)->value.value;
    panda$core$Int64 i1055 = { $tmp1056 };
    int64_t $tmp1058 = ((panda$core$Int64$wrapper*) $tmp1053.end)->value.value;
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
        panda$core$Object* $tmp1075 = (($fn1074) inheritedMethodType1050->subtypes->$class->vtable[2])(inheritedMethodType1050->subtypes, i1055);
        panda$core$String* $tmp1077 = (($fn1076) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp1075));
        panda$core$String* $tmp1078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1073, $tmp1077);
        panda$core$String* $tmp1080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1078, &$s1079);
        panda$core$Object* $tmp1081 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i1055);
        panda$core$String* $tmp1082 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1080, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1081)->name);
        panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, &$s1083);
        (($fn1085) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1084);
    }
    $l1064:;
    if ($tmp1067) goto $l1087; else goto $l1088;
    $l1087:;
    int64_t $tmp1089 = $tmp1058 - i1055.value;
    if ($tmp1060) goto $l1090; else goto $l1091;
    $l1090:;
    if ($tmp1089 >= $tmp1059) goto $l1086; else goto $l1063;
    $l1091:;
    if ($tmp1089 > $tmp1059) goto $l1086; else goto $l1063;
    $l1088:;
    int64_t $tmp1093 = i1055.value - $tmp1058;
    if ($tmp1060) goto $l1094; else goto $l1095;
    $l1094:;
    if ($tmp1093 >= -$tmp1059) goto $l1086; else goto $l1063;
    $l1095:;
    if ($tmp1093 > -$tmp1059) goto $l1086; else goto $l1063;
    $l1086:;
    i1055.value += $tmp1059;
    goto $l1061;
    $l1063:;
    (($fn1098) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1097);
    panda$core$Int64 $tmp1099 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1099;
    panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1100, selfType1027);
    panda$core$String* $tmp1103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1101, &$s1102);
    (($fn1104) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1103);
    panda$collections$Array* $tmp1106 = (panda$collections$Array*) malloc(40);
    $tmp1106->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1106->refCount.value = 1;
    panda$collections$Array$init($tmp1106);
    parameters1105 = $tmp1106;
    panda$core$Int64 $tmp1109 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1108, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1109)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1111 = ((panda$core$Int64$wrapper*) $tmp1108.start)->value.value;
    panda$core$Int64 i1110 = { $tmp1111 };
    int64_t $tmp1113 = ((panda$core$Int64$wrapper*) $tmp1108.end)->value.value;
    int64_t $tmp1114 = $tmp1108.step.value;
    bool $tmp1115 = $tmp1108.inclusive.value;
    bool $tmp1122 = $tmp1114 > 0;
    if ($tmp1122) goto $l1120; else goto $l1121;
    $l1120:;
    if ($tmp1115) goto $l1123; else goto $l1124;
    $l1123:;
    if ($tmp1111 <= $tmp1113) goto $l1116; else goto $l1118;
    $l1124:;
    if ($tmp1111 < $tmp1113) goto $l1116; else goto $l1118;
    $l1121:;
    if ($tmp1115) goto $l1125; else goto $l1126;
    $l1125:;
    if ($tmp1111 >= $tmp1113) goto $l1116; else goto $l1118;
    $l1126:;
    if ($tmp1111 > $tmp1113) goto $l1116; else goto $l1118;
    $l1116:;
    {
        panda$core$Object* $tmp1129 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_m->parameters, i1110);
        panda$core$String* $tmp1130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1128, ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1129)->name);
        panda$core$Object* $tmp1132 = (($fn1131) inheritedMethodType1050->subtypes->$class->vtable[2])(inheritedMethodType1050->subtypes, i1110);
        panda$core$Object* $tmp1134 = (($fn1133) actualMethodType1047->subtypes->$class->vtable[2])(actualMethodType1047->subtypes, i1110);
        panda$core$String* $tmp1136 = (($fn1135) self->$class->vtable[52])(self, $tmp1130, ((org$pandalanguage$pandac$Type*) $tmp1132), ((org$pandalanguage$pandac$Type*) $tmp1134), p_out);
        panda$collections$Array$add$panda$collections$Array$T(parameters1105, ((panda$core$Object*) $tmp1136));
    }
    $l1119:;
    if ($tmp1122) goto $l1138; else goto $l1139;
    $l1138:;
    int64_t $tmp1140 = $tmp1113 - i1110.value;
    if ($tmp1115) goto $l1141; else goto $l1142;
    $l1141:;
    if ($tmp1140 >= $tmp1114) goto $l1137; else goto $l1118;
    $l1142:;
    if ($tmp1140 > $tmp1114) goto $l1137; else goto $l1118;
    $l1139:;
    int64_t $tmp1144 = i1110.value - $tmp1113;
    if ($tmp1115) goto $l1145; else goto $l1146;
    $l1145:;
    if ($tmp1144 >= -$tmp1114) goto $l1137; else goto $l1118;
    $l1146:;
    if ($tmp1144 > -$tmp1114) goto $l1137; else goto $l1118;
    $l1137:;
    i1110.value += $tmp1114;
    goto $l1116;
    $l1118:;
    panda$collections$Array* $tmp1149 = (panda$collections$Array*) malloc(40);
    $tmp1149->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp1149->refCount.value = 1;
    panda$collections$Array$init($tmp1149);
    children1148 = $tmp1149;
    org$pandalanguage$pandac$IRNode* $tmp1151 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1151->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1151->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp1153 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type($tmp1151, ((panda$core$Int64) { 1025 }), ((panda$core$Int64) { -1 }), $tmp1153);
    panda$collections$Array$add$panda$collections$Array$T(children1148, ((panda$core$Object*) $tmp1151));
    org$pandalanguage$pandac$IRNode* $tmp1155 = (org$pandalanguage$pandac$IRNode*) malloc(56);
    $tmp1155->$class = (panda$core$Class*) &org$pandalanguage$pandac$IRNode$class;
    $tmp1155->refCount.value = 1;
    org$pandalanguage$pandac$Type* $tmp1158 = (($fn1157) p_m->owner->$class->vtable[3])(p_m->owner);
    org$pandalanguage$pandac$IRNode$init$panda$core$Int64$panda$core$Int64$org$pandalanguage$pandac$Type$panda$collections$ListView$LTorg$pandalanguage$pandac$IRNode$GT($tmp1155, ((panda$core$Int64) { 1009 }), ((panda$core$Int64) { -1 }), $tmp1158, ((panda$collections$ListView*) children1148));
    panda$core$String* $tmp1160 = (($fn1159) self->$class->vtable[67])(self, $tmp1155, p_out);
    unwrapped1154 = $tmp1160;
    org$pandalanguage$pandac$Type* $tmp1162 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp1164 = (($fn1163) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp1162));
    if ($tmp1164.value) {
    {
        panda$core$String* $tmp1166 = (($fn1165) self->$class->vtable[4])(self);
        returnValue1161 = $tmp1166;
        panda$core$String* $tmp1168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1167, returnValue1161);
        panda$core$String* $tmp1170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1168, &$s1169);
        (($fn1171) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1170);
        panda$core$String* $tmp1174 = (($fn1173) self->$class->vtable[15])(self, p_m->returnType);
        panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1172, $tmp1174);
        panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1176);
        panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1177, returnValue1161);
        panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1178, &$s1179);
        returnValue1161 = $tmp1180;
    }
    }
    else {
    {
        returnValue1161 = &$s1181;
    }
    }
    panda$core$String* $tmp1184 = (($fn1183) self->$class->vtable[40])(self, p_m);
    panda$core$String* $tmp1185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1182, $tmp1184);
    panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1185, &$s1186);
    panda$core$String* $tmp1189 = (($fn1188) self->$class->vtable[15])(self, p_m->returnType);
    panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1187, $tmp1189);
    panda$core$String* $tmp1192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1190, &$s1191);
    panda$core$String* $tmp1194 = (($fn1193) self->$class->vtable[30])(self, p_m);
    panda$core$String* $tmp1195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1192, $tmp1194);
    panda$core$String* $tmp1197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1195, &$s1196);
    panda$core$String* $tmp1198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1197, unwrapped1154);
    panda$core$String* $tmp1200 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1198, &$s1199);
    (($fn1201) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1200);
    panda$core$Int64 $tmp1203 = panda$collections$Array$get_count$R$panda$core$Int64(p_m->parameters);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1202, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1203)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp1205 = ((panda$core$Int64$wrapper*) $tmp1202.start)->value.value;
    panda$core$Int64 i1204 = { $tmp1205 };
    int64_t $tmp1207 = ((panda$core$Int64$wrapper*) $tmp1202.end)->value.value;
    int64_t $tmp1208 = $tmp1202.step.value;
    bool $tmp1209 = $tmp1202.inclusive.value;
    bool $tmp1216 = $tmp1208 > 0;
    if ($tmp1216) goto $l1214; else goto $l1215;
    $l1214:;
    if ($tmp1209) goto $l1217; else goto $l1218;
    $l1217:;
    if ($tmp1205 <= $tmp1207) goto $l1210; else goto $l1212;
    $l1218:;
    if ($tmp1205 < $tmp1207) goto $l1210; else goto $l1212;
    $l1215:;
    if ($tmp1209) goto $l1219; else goto $l1220;
    $l1219:;
    if ($tmp1205 >= $tmp1207) goto $l1210; else goto $l1212;
    $l1220:;
    if ($tmp1205 > $tmp1207) goto $l1210; else goto $l1212;
    $l1210:;
    {
        panda$core$Object* $tmp1224 = (($fn1223) actualMethodType1047->subtypes->$class->vtable[2])(actualMethodType1047->subtypes, i1204);
        panda$core$String* $tmp1226 = (($fn1225) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp1224));
        panda$core$String* $tmp1227 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1222, $tmp1226);
        panda$core$String* $tmp1229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1227, &$s1228);
        panda$core$Object* $tmp1230 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(parameters1105, i1204);
        panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1229, ((panda$core$String*) $tmp1230));
        panda$core$String* $tmp1233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1231, &$s1232);
        (($fn1234) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp1233);
    }
    $l1213:;
    if ($tmp1216) goto $l1236; else goto $l1237;
    $l1236:;
    int64_t $tmp1238 = $tmp1207 - i1204.value;
    if ($tmp1209) goto $l1239; else goto $l1240;
    $l1239:;
    if ($tmp1238 >= $tmp1208) goto $l1235; else goto $l1212;
    $l1240:;
    if ($tmp1238 > $tmp1208) goto $l1235; else goto $l1212;
    $l1237:;
    int64_t $tmp1242 = i1204.value - $tmp1207;
    if ($tmp1209) goto $l1243; else goto $l1244;
    $l1243:;
    if ($tmp1242 >= -$tmp1208) goto $l1235; else goto $l1212;
    $l1244:;
    if ($tmp1242 > -$tmp1208) goto $l1235; else goto $l1212;
    $l1235:;
    i1204.value += $tmp1208;
    goto $l1210;
    $l1212:;
    (($fn1247) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1246);
    panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1248, returnValue1161);
    panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1249, &$s1250);
    (($fn1252) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp1251);
    panda$core$Int64 $tmp1253 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp1253;
    (($fn1255) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s1254);
    self->varCount = oldVarCount1019;
    return result1020;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperITable$org$pandalanguage$pandac$ClassDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$collections$Set* interfaces1256;
    panda$core$String* previous1261;
    panda$collections$Iterator* intfType$Iter1263;
    org$pandalanguage$pandac$Type* intfType1275;
    org$pandalanguage$pandac$ClassDecl* intf1280;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC1283;
    panda$collections$ListView* methods1286;
    panda$core$String* name1289;
    panda$core$String* t1301;
    panda$core$MutableString* result1316;
    panda$core$String* separator1358;
    panda$collections$Iterator* m$Iter1360;
    org$pandalanguage$pandac$MethodDecl* m1372;
    panda$core$String* shim1383;
    org$pandalanguage$pandac$Type* $tmp1258 = (($fn1257) p_cl->$class->vtable[3])(p_cl);
    panda$collections$Set* $tmp1260 = (($fn1259) self->compiler->$class->vtable[14])(self->compiler, $tmp1258);
    interfaces1256 = $tmp1260;
    previous1261 = &$s1262;
    {
        ITable* $tmp1264 = ((panda$collections$Iterable*) interfaces1256)->$class->itable;
        while ($tmp1264->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp1264 = $tmp1264->next;
        }
        $fn1266 $tmp1265 = $tmp1264->methods[0];
        panda$collections$Iterator* $tmp1267 = $tmp1265(((panda$collections$Iterable*) interfaces1256));
        intfType$Iter1263 = $tmp1267;
        $l1268:;
        ITable* $tmp1270 = intfType$Iter1263->$class->itable;
        while ($tmp1270->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp1270 = $tmp1270->next;
        }
        $fn1272 $tmp1271 = $tmp1270->methods[0];
        panda$core$Bit $tmp1273 = $tmp1271(intfType$Iter1263);
        panda$core$Bit $tmp1274 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1273);
        if (!$tmp1274.value) goto $l1269;
        {
            ITable* $tmp1276 = intfType$Iter1263->$class->itable;
            while ($tmp1276->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1276 = $tmp1276->next;
            }
            $fn1278 $tmp1277 = $tmp1276->methods[1];
            panda$core$Object* $tmp1279 = $tmp1277(intfType$Iter1263);
            intfType1275 = ((org$pandalanguage$pandac$Type*) $tmp1279);
            org$pandalanguage$pandac$ClassDecl* $tmp1282 = (($fn1281) self->compiler->$class->vtable[13])(self->compiler, intfType1275);
            intf1280 = $tmp1282;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1285 = (($fn1284) self->$class->vtable[26])(self, intf1280);
            intfCC1283 = $tmp1285;
            panda$collections$ListView* $tmp1288 = (($fn1287) self->compiler->$class->vtable[18])(self->compiler, p_cl, intfType1275);
            methods1286 = $tmp1288;
            panda$core$String* $tmp1292 = (($fn1291) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1290, $tmp1292);
            panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1293, &$s1294);
            panda$core$String* $tmp1297 = (($fn1296) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) intf1280)->name);
            panda$core$String* $tmp1298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1295, $tmp1297);
            panda$core$String* $tmp1300 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1298, &$s1299);
            name1289 = $tmp1300;
            org$pandalanguage$pandac$Type* $tmp1303 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1305 = (($fn1304) self->$class->vtable[15])(self, $tmp1303);
            panda$core$String* $tmp1306 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1302, $tmp1305);
            panda$core$String* $tmp1308 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1306, &$s1307);
            ITable* $tmp1309 = ((panda$collections$CollectionView*) methods1286)->$class->itable;
            while ($tmp1309->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1309 = $tmp1309->next;
            }
            $fn1311 $tmp1310 = $tmp1309->methods[0];
            panda$core$Int64 $tmp1312 = $tmp1310(((panda$collections$CollectionView*) methods1286));
            panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1308, ((panda$core$Object*) wrap_panda$core$Int64($tmp1312)));
            panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1313, &$s1314);
            t1301 = $tmp1315;
            panda$core$MutableString* $tmp1317 = (panda$core$MutableString*) malloc(40);
            $tmp1317->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1317->refCount.value = 1;
            panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1319, name1289);
            panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, &$s1321);
            panda$core$String* $tmp1323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1322, t1301);
            panda$core$String* $tmp1325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1324);
            org$pandalanguage$pandac$Type* $tmp1326 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1328 = (($fn1327) self->$class->vtable[15])(self, $tmp1326);
            panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1325, $tmp1328);
            panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1329, &$s1330);
            panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1332, intfCC1283->type);
            panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1333, &$s1334);
            panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, intfCC1283->name);
            panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1336, &$s1337);
            org$pandalanguage$pandac$Type* $tmp1339 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1341 = (($fn1340) self->$class->vtable[15])(self, $tmp1339);
            panda$core$String* $tmp1342 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1338, $tmp1341);
            panda$core$String* $tmp1344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1342, &$s1343);
            panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, $tmp1344);
            panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1346, previous1261);
            panda$core$String* $tmp1349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1347, &$s1348);
            ITable* $tmp1350 = ((panda$collections$CollectionView*) methods1286)->$class->itable;
            while ($tmp1350->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1350 = $tmp1350->next;
            }
            $fn1352 $tmp1351 = $tmp1350->methods[0];
            panda$core$Int64 $tmp1353 = $tmp1351(((panda$collections$CollectionView*) methods1286));
            panda$core$String* $tmp1354 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1349, ((panda$core$Object*) wrap_panda$core$Int64($tmp1353)));
            panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1354, &$s1355);
            panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1345, $tmp1356);
            panda$core$MutableString$init$panda$core$String($tmp1317, $tmp1357);
            result1316 = $tmp1317;
            separator1358 = &$s1359;
            {
                ITable* $tmp1361 = ((panda$collections$Iterable*) methods1286)->$class->itable;
                while ($tmp1361->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1361 = $tmp1361->next;
                }
                $fn1363 $tmp1362 = $tmp1361->methods[0];
                panda$collections$Iterator* $tmp1364 = $tmp1362(((panda$collections$Iterable*) methods1286));
                m$Iter1360 = $tmp1364;
                $l1365:;
                ITable* $tmp1367 = m$Iter1360->$class->itable;
                while ($tmp1367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1367 = $tmp1367->next;
                }
                $fn1369 $tmp1368 = $tmp1367->methods[0];
                panda$core$Bit $tmp1370 = $tmp1368(m$Iter1360);
                panda$core$Bit $tmp1371 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1370);
                if (!$tmp1371.value) goto $l1366;
                {
                    ITable* $tmp1373 = m$Iter1360->$class->itable;
                    while ($tmp1373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1373 = $tmp1373->next;
                    }
                    $fn1375 $tmp1374 = $tmp1373->methods[1];
                    panda$core$Object* $tmp1376 = $tmp1374(m$Iter1360);
                    m1372 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1376);
                    (($fn1377) result1316->$class->vtable[3])(result1316, separator1358);
                    separator1358 = &$s1378;
                    panda$core$Bit $tmp1380 = (($fn1379) m1372->annotations->$class->vtable[10])(m1372->annotations);
                    if ($tmp1380.value) {
                    {
                        (($fn1382) result1316->$class->vtable[3])(result1316, &$s1381);
                    }
                    }
                    else {
                    {
                        panda$core$String* $tmp1385 = (($fn1384) self->$class->vtable[22])(self, m1372, self->wrapperShims);
                        shim1383 = $tmp1385;
                        panda$core$String* $tmp1388 = (($fn1387) self->$class->vtable[18])(self, m1372);
                        panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1386, $tmp1388);
                        panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1389, &$s1390);
                        panda$core$String* $tmp1392 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1391, shim1383);
                        panda$core$String* $tmp1394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1392, &$s1393);
                        (($fn1395) result1316->$class->vtable[3])(result1316, $tmp1394);
                    }
                    }
                }
                goto $l1365;
                $l1366:;
            }
            (($fn1397) result1316->$class->vtable[3])(result1316, &$s1396);
            (($fn1398) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) result1316));
            panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1399, t1301);
            panda$core$String* $tmp1402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1400, &$s1401);
            panda$core$String* $tmp1403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, name1289);
            panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1403, &$s1404);
            previous1261 = $tmp1405;
        }
        goto $l1268;
        $l1269:;
    }
    return previous1261;
}
panda$core$Bit org$pandalanguage$pandac$LLVMCodeGenerator$needsStructIndirection$org$pandalanguage$pandac$MethodDecl$R$panda$core$Bit(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$Bit result1409;
    panda$core$Bit $tmp1407 = (($fn1406) p_m->returnType->$class->vtable[8])(p_m->returnType);
    panda$core$Bit $tmp1408 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1407);
    if ($tmp1408.value) {
    {
        return ((panda$core$Bit) { false });
    }
    }
    panda$core$Bit $tmp1413 = (($fn1412) p_m->annotations->$class->vtable[7])(p_m->annotations);
    bool $tmp1411 = $tmp1413.value;
    if (!$tmp1411) goto $l1414;
    panda$core$Bit $tmp1416 = (($fn1415) p_m->returnType->$class->vtable[8])(p_m->returnType);
    $tmp1411 = $tmp1416.value;
    $l1414:;
    panda$core$Bit $tmp1417 = { $tmp1411 };
    bool $tmp1410 = $tmp1417.value;
    if (!$tmp1410) goto $l1418;
    org$pandalanguage$pandac$ClassDecl* $tmp1420 = (($fn1419) self->compiler->$class->vtable[13])(self->compiler, p_m->returnType);
    panda$core$Bit $tmp1422 = (($fn1421) self->compiler->$class->vtable[9])(self->compiler, $tmp1420);
    $tmp1410 = $tmp1422.value;
    $l1418:;
    panda$core$Bit $tmp1423 = { $tmp1410 };
    result1409 = $tmp1423;
    return result1409;
}
org$pandalanguage$pandac$LLVMCodeGenerator$Pair* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodTableEntry$org$pandalanguage$pandac$MethodDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$LTpanda$core$String$Cpanda$core$String$GT(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* resultName1426;
    org$pandalanguage$pandac$Type* declared1427;
    org$pandalanguage$pandac$Type* inherited1432;
    org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* shim1437;
    panda$core$MutableString* resultType1446;
    panda$core$Range $tmp1460;
    (($fn1424) self->compiler->$class->vtable[6])(self->compiler, p_m);
    if (p_m->owner->external.value) {
    {
        (($fn1425) self->$class->vtable[87])(self, p_m);
    }
    }
    org$pandalanguage$pandac$Type* $tmp1429 = (($fn1428) p_m->owner->$class->vtable[3])(p_m->owner);
    org$pandalanguage$pandac$Type* $tmp1431 = (($fn1430) self->compiler->$class->vtable[44])(self->compiler, p_m, $tmp1429);
    declared1427 = $tmp1431;
    org$pandalanguage$pandac$Type* $tmp1434 = (($fn1433) self->compiler->$class->vtable[46])(self->compiler, p_m);
    inherited1432 = $tmp1434;
    panda$core$Bit $tmp1436 = (($fn1435) declared1427->$class->vtable[5])(declared1427, ((panda$core$Object*) inherited1432));
    if ($tmp1436.value) {
    {
        org$pandalanguage$pandac$Type* $tmp1439 = (($fn1438) self->compiler->$class->vtable[45])(self->compiler, p_m);
        org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* $tmp1441 = (($fn1440) self->$class->vtable[21])(self, p_m, $tmp1439, ((panda$io$OutputStream*) self->shims));
        shim1437 = $tmp1441;
        resultName1426 = shim1437->name;
    }
    }
    else {
    {
        panda$core$String* $tmp1443 = (($fn1442) self->$class->vtable[30])(self, p_m);
        resultName1426 = $tmp1443;
    }
    }
    panda$core$Bit $tmp1445 = (($fn1444) self->$class->vtable[24])(self, p_m);
    if ($tmp1445.value) {
    {
        panda$core$MutableString* $tmp1447 = (panda$core$MutableString*) malloc(40);
        $tmp1447->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1447->refCount.value = 1;
        panda$core$MutableString$init$panda$core$String($tmp1447, &$s1449);
        resultType1446 = $tmp1447;
        panda$core$Int64 $tmp1451 = (($fn1450) inherited1432->subtypes->$class->vtable[3])(inherited1432->subtypes);
        panda$core$Int64 $tmp1452 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1451, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp1454 = (($fn1453) inherited1432->subtypes->$class->vtable[2])(inherited1432->subtypes, $tmp1452);
        panda$core$String* $tmp1456 = (($fn1455) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp1454));
        (($fn1457) resultType1446->$class->vtable[3])(resultType1446, $tmp1456);
        (($fn1459) resultType1446->$class->vtable[3])(resultType1446, &$s1458);
        panda$core$Int64 $tmp1462 = (($fn1461) inherited1432->subtypes->$class->vtable[3])(inherited1432->subtypes);
        panda$core$Int64 $tmp1463 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp1462, ((panda$core$Int64) { 1 }));
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1460, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1463)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp1465 = ((panda$core$Int64$wrapper*) $tmp1460.start)->value.value;
        panda$core$Int64 i1464 = { $tmp1465 };
        int64_t $tmp1467 = ((panda$core$Int64$wrapper*) $tmp1460.end)->value.value;
        int64_t $tmp1468 = $tmp1460.step.value;
        bool $tmp1469 = $tmp1460.inclusive.value;
        bool $tmp1476 = $tmp1468 > 0;
        if ($tmp1476) goto $l1474; else goto $l1475;
        $l1474:;
        if ($tmp1469) goto $l1477; else goto $l1478;
        $l1477:;
        if ($tmp1465 <= $tmp1467) goto $l1470; else goto $l1472;
        $l1478:;
        if ($tmp1465 < $tmp1467) goto $l1470; else goto $l1472;
        $l1475:;
        if ($tmp1469) goto $l1479; else goto $l1480;
        $l1479:;
        if ($tmp1465 >= $tmp1467) goto $l1470; else goto $l1472;
        $l1480:;
        if ($tmp1465 > $tmp1467) goto $l1470; else goto $l1472;
        $l1470:;
        {
            (($fn1483) resultType1446->$class->vtable[3])(resultType1446, &$s1482);
            panda$core$Object* $tmp1485 = (($fn1484) inherited1432->subtypes->$class->vtable[2])(inherited1432->subtypes, i1464);
            panda$core$String* $tmp1487 = (($fn1486) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp1485));
            (($fn1488) resultType1446->$class->vtable[3])(resultType1446, $tmp1487);
        }
        $l1473:;
        if ($tmp1476) goto $l1490; else goto $l1491;
        $l1490:;
        int64_t $tmp1492 = $tmp1467 - i1464.value;
        if ($tmp1469) goto $l1493; else goto $l1494;
        $l1493:;
        if ($tmp1492 >= $tmp1468) goto $l1489; else goto $l1472;
        $l1494:;
        if ($tmp1492 > $tmp1468) goto $l1489; else goto $l1472;
        $l1491:;
        int64_t $tmp1496 = i1464.value - $tmp1467;
        if ($tmp1469) goto $l1497; else goto $l1498;
        $l1497:;
        if ($tmp1496 >= -$tmp1468) goto $l1489; else goto $l1472;
        $l1498:;
        if ($tmp1496 > -$tmp1468) goto $l1489; else goto $l1472;
        $l1489:;
        i1464.value += $tmp1468;
        goto $l1470;
        $l1472:;
        (($fn1501) resultType1446->$class->vtable[3])(resultType1446, &$s1500);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1502 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
        $tmp1502->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
        $tmp1502->refCount.value = 1;
        panda$core$String* $tmp1505 = (($fn1504) resultType1446->$class->vtable[0])(resultType1446);
        org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1502, ((panda$core$Object*) resultName1426), ((panda$core$Object*) $tmp1505));
        return $tmp1502;
    }
    }
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1506 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
    $tmp1506->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
    $tmp1506->refCount.value = 1;
    panda$core$String* $tmp1509 = (($fn1508) self->$class->vtable[15])(self, inherited1432);
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp1506, ((panda$core$Object*) resultName1426), ((panda$core$Object*) $tmp1509));
    return $tmp1506;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1510;
    panda$core$String* type1514;
    panda$collections$ListView* vtable1537;
    panda$core$String* superPtr1565;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1566;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1579;
    panda$core$MutableString* code1585;
    panda$core$String* separator1626;
    panda$collections$Iterator* m$Iter1628;
    org$pandalanguage$pandac$MethodDecl* m1640;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* entry1650;
    panda$core$Object* $tmp1512 = (($fn1511) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)));
    result1510 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1512);
    if (((panda$core$Bit) { result1510 == NULL }).value) {
    {
        (($fn1513) self->compiler->$class->vtable[5])(self->compiler, p_cl);
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1515 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1515->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1515->refCount.value = 1;
            org$pandalanguage$pandac$Type* $tmp1519 = (($fn1518) p_cl->$class->vtable[3])(p_cl);
            panda$core$String* $tmp1521 = (($fn1520) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) $tmp1519)->name);
            panda$core$String* $tmp1522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1517, $tmp1521);
            panda$core$String* $tmp1524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1522, &$s1523);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1515, $tmp1524, &$s1525);
            result1510 = $tmp1515;
            (($fn1526) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)), ((panda$core$Object*) result1510));
            panda$core$String* $tmp1528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1527, result1510->name);
            panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1528, &$s1529);
            panda$core$String* $tmp1531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, result1510->type);
            panda$core$String* $tmp1533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1531, &$s1532);
            (($fn1534) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1533);
            panda$core$Object* $tmp1536 = (($fn1535) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)));
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1536);
        }
        }
        panda$collections$ListView* $tmp1539 = (($fn1538) self->compiler->$class->vtable[20])(self->compiler, p_cl);
        vtable1537 = $tmp1539;
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1540 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
        $tmp1540->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
        $tmp1540->refCount.value = 1;
        org$pandalanguage$pandac$Type* $tmp1544 = (($fn1543) p_cl->$class->vtable[3])(p_cl);
        panda$core$String* $tmp1546 = (($fn1545) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) $tmp1544)->name);
        panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1542, $tmp1546);
        panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1547, &$s1548);
        panda$core$String* $tmp1552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1550, &$s1551);
        panda$core$String* $tmp1554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1552, &$s1553);
        ITable* $tmp1556 = ((panda$collections$CollectionView*) vtable1537)->$class->itable;
        while ($tmp1556->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1556 = $tmp1556->next;
        }
        $fn1558 $tmp1557 = $tmp1556->methods[0];
        panda$core$Int64 $tmp1559 = $tmp1557(((panda$collections$CollectionView*) vtable1537));
        panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1555, ((panda$core$Object*) wrap_panda$core$Int64($tmp1559)));
        panda$core$String* $tmp1562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1560, &$s1561);
        panda$core$String* $tmp1563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1554, $tmp1562);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1540, $tmp1549, $tmp1563);
        result1510 = $tmp1540;
        (($fn1564) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) ((org$pandalanguage$pandac$Symbol*) p_cl)->name)), ((panda$core$Object*) result1510));
        if (((panda$core$Bit) { p_cl->rawSuper != NULL }).value) {
        {
            org$pandalanguage$pandac$ClassDecl* $tmp1568 = (($fn1567) self->compiler->$class->vtable[13])(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1570 = (($fn1569) self->$class->vtable[26])(self, $tmp1568);
            superCC1566 = $tmp1570;
            panda$core$String* $tmp1572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1571, superCC1566->type);
            panda$core$String* $tmp1574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, &$s1573);
            panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1574, superCC1566->name);
            panda$core$String* $tmp1577 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1575, &$s1576);
            superPtr1565 = $tmp1577;
        }
        }
        else {
        {
            superPtr1565 = &$s1578;
        }
        }
        org$pandalanguage$pandac$Type* $tmp1580 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp1582 = (($fn1581) self->compiler->$class->vtable[13])(self->compiler, $tmp1580);
        org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1584 = (($fn1583) self->$class->vtable[26])(self, $tmp1582);
        clConstant1579 = $tmp1584;
        panda$core$MutableString* $tmp1586 = (panda$core$MutableString*) malloc(40);
        $tmp1586->$class = (panda$core$Class*) &panda$core$MutableString$class;
        $tmp1586->refCount.value = 1;
        panda$core$String* $tmp1589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1588, result1510->name);
        panda$core$String* $tmp1591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1589, &$s1590);
        panda$core$String* $tmp1592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1591, result1510->type);
        panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1592, &$s1593);
        panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1595, clConstant1579->type);
        panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1596, &$s1597);
        panda$core$String* $tmp1599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1598, clConstant1579->name);
        panda$core$String* $tmp1601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1599, &$s1600);
        panda$core$String* $tmp1602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1594, $tmp1601);
        panda$core$String* $tmp1605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1603, &$s1604);
        panda$core$String* $tmp1607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1605, &$s1606);
        panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1607, superPtr1565);
        panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1608, &$s1609);
        panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1602, $tmp1610);
        panda$core$String* $tmp1614 = (($fn1613) self->$class->vtable[20])(self, p_cl);
        panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1612, $tmp1614);
        panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1615, &$s1616);
        ITable* $tmp1618 = ((panda$collections$CollectionView*) vtable1537)->$class->itable;
        while ($tmp1618->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp1618 = $tmp1618->next;
        }
        $fn1620 $tmp1619 = $tmp1618->methods[0];
        panda$core$Int64 $tmp1621 = $tmp1619(((panda$collections$CollectionView*) vtable1537));
        panda$core$String* $tmp1622 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1617, ((panda$core$Object*) wrap_panda$core$Int64($tmp1621)));
        panda$core$String* $tmp1624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1622, &$s1623);
        panda$core$String* $tmp1625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1611, $tmp1624);
        panda$core$MutableString$init$panda$core$String($tmp1586, $tmp1625);
        code1585 = $tmp1586;
        separator1626 = &$s1627;
        {
            ITable* $tmp1629 = ((panda$collections$Iterable*) vtable1537)->$class->itable;
            while ($tmp1629->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                $tmp1629 = $tmp1629->next;
            }
            $fn1631 $tmp1630 = $tmp1629->methods[0];
            panda$collections$Iterator* $tmp1632 = $tmp1630(((panda$collections$Iterable*) vtable1537));
            m$Iter1628 = $tmp1632;
            $l1633:;
            ITable* $tmp1635 = m$Iter1628->$class->itable;
            while ($tmp1635->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp1635 = $tmp1635->next;
            }
            $fn1637 $tmp1636 = $tmp1635->methods[0];
            panda$core$Bit $tmp1638 = $tmp1636(m$Iter1628);
            panda$core$Bit $tmp1639 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1638);
            if (!$tmp1639.value) goto $l1634;
            {
                ITable* $tmp1641 = m$Iter1628->$class->itable;
                while ($tmp1641->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1641 = $tmp1641->next;
                }
                $fn1643 $tmp1642 = $tmp1641->methods[1];
                panda$core$Object* $tmp1644 = $tmp1642(m$Iter1628);
                m1640 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1644);
                (($fn1645) code1585->$class->vtable[3])(code1585, separator1626);
                panda$core$Bit $tmp1647 = (($fn1646) m1640->annotations->$class->vtable[10])(m1640->annotations);
                if ($tmp1647.value) {
                {
                    (($fn1649) code1585->$class->vtable[3])(code1585, &$s1648);
                }
                }
                else {
                {
                    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp1652 = (($fn1651) self->$class->vtable[25])(self, m1640);
                    entry1650 = $tmp1652;
                    panda$core$String* $tmp1654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1653, ((panda$core$String*) entry1650->second));
                    panda$core$String* $tmp1656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1654, &$s1655);
                    panda$core$String* $tmp1657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1656, ((panda$core$String*) entry1650->first));
                    panda$core$String* $tmp1659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1657, &$s1658);
                    (($fn1660) code1585->$class->vtable[3])(code1585, $tmp1659);
                }
                }
                separator1626 = &$s1661;
            }
            goto $l1633;
            $l1634:;
        }
        (($fn1663) code1585->$class->vtable[3])(code1585, &$s1662);
        (($fn1664) ((panda$io$OutputStream*) self->types)->$class->vtable[18])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1585));
    }
    }
    return result1510;
}
org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* org$pandalanguage$pandac$LLVMCodeGenerator$getWrapperClassConstant$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    panda$core$String* name1665;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* result1672;
    panda$core$String* type1677;
    org$pandalanguage$pandac$ClassDecl* value1689;
    panda$collections$ListView* valueVTable1693;
    panda$collections$ListView* vtable1718;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* superCC1721;
    panda$core$String* superCast1726;
    panda$core$String* itable1734;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* clConstant1737;
    panda$core$MutableString* code1743;
    panda$core$String* separator1788;
    panda$core$Range $tmp1790;
    org$pandalanguage$pandac$MethodDecl* m1813;
    panda$core$String* methodName1818;
    panda$core$String* $tmp1668 = (($fn1667) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
    panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1666, $tmp1668);
    panda$core$String* $tmp1671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1669, &$s1670);
    name1665 = $tmp1671;
    panda$core$Object* $tmp1674 = (($fn1673) self->classConstants->$class->vtable[3])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) name1665)));
    result1672 = ((org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) $tmp1674);
    if (((panda$core$Bit) { result1672 == NULL }).value) {
    {
        if (p_cl->external.value) {
        {
            org$pandalanguage$pandac$Type* $tmp1675 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            (($fn1676) self->$class->vtable[15])(self, $tmp1675);
            type1677 = &$s1678;
            panda$core$String* $tmp1680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1679, name1665);
            panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1680, &$s1681);
            panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1682, type1677);
            panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, &$s1684);
            (($fn1686) ((panda$io$OutputStream*) self->types)->$class->vtable[19])(((panda$io$OutputStream*) self->types), $tmp1685);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1687 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1687->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1687->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1687, name1665, type1677);
            result1672 = $tmp1687;
        }
        }
        else {
        {
            org$pandalanguage$pandac$Type* $tmp1690 = org$pandalanguage$pandac$Type$Value$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1692 = (($fn1691) self->compiler->$class->vtable[13])(self->compiler, $tmp1690);
            value1689 = $tmp1692;
            panda$collections$ListView* $tmp1695 = (($fn1694) self->compiler->$class->vtable[20])(self->compiler, value1689);
            valueVTable1693 = $tmp1695;
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1696 = (org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant*) malloc(32);
            $tmp1696->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$class;
            $tmp1696->refCount.value = 1;
            panda$core$String* $tmp1700 = (($fn1699) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_cl)->name);
            panda$core$String* $tmp1701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1698, $tmp1700);
            panda$core$String* $tmp1703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1701, &$s1702);
            panda$core$String* $tmp1706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1704, &$s1705);
            panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1707);
            ITable* $tmp1710 = ((panda$collections$CollectionView*) valueVTable1693)->$class->itable;
            while ($tmp1710->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1710 = $tmp1710->next;
            }
            $fn1712 $tmp1711 = $tmp1710->methods[0];
            panda$core$Int64 $tmp1713 = $tmp1711(((panda$collections$CollectionView*) valueVTable1693));
            panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1709, ((panda$core$Object*) wrap_panda$core$Int64($tmp1713)));
            panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1714, &$s1715);
            panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, $tmp1716);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String($tmp1696, $tmp1703, $tmp1717);
            result1672 = $tmp1696;
            panda$collections$ListView* $tmp1720 = (($fn1719) self->compiler->$class->vtable[20])(self->compiler, p_cl);
            vtable1718 = $tmp1720;
            org$pandalanguage$pandac$ClassDecl* $tmp1723 = (($fn1722) self->compiler->$class->vtable[13])(self->compiler, p_cl->rawSuper);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1725 = (($fn1724) self->$class->vtable[26])(self, $tmp1723);
            superCC1721 = $tmp1725;
            panda$core$String* $tmp1728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1727, superCC1721->type);
            panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, &$s1729);
            panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, superCC1721->name);
            panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, &$s1732);
            superCast1726 = $tmp1733;
            panda$core$String* $tmp1736 = (($fn1735) self->$class->vtable[23])(self, p_cl);
            itable1734 = $tmp1736;
            org$pandalanguage$pandac$Type* $tmp1738 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            org$pandalanguage$pandac$ClassDecl* $tmp1740 = (($fn1739) self->compiler->$class->vtable[13])(self->compiler, $tmp1738);
            org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp1742 = (($fn1741) self->$class->vtable[26])(self, $tmp1740);
            clConstant1737 = $tmp1742;
            panda$core$MutableString* $tmp1744 = (panda$core$MutableString*) malloc(40);
            $tmp1744->$class = (panda$core$Class*) &panda$core$MutableString$class;
            $tmp1744->refCount.value = 1;
            panda$core$String* $tmp1747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1746, result1672->name);
            panda$core$String* $tmp1749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1747, &$s1748);
            panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1749, result1672->type);
            panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1750, &$s1751);
            panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1753, clConstant1737->type);
            panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1755);
            panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, clConstant1737->name);
            panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1757, &$s1758);
            panda$core$String* $tmp1760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, $tmp1759);
            panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1761, &$s1762);
            panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1763, &$s1764);
            org$pandalanguage$pandac$Type* $tmp1766 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            panda$core$String* $tmp1768 = (($fn1767) self->$class->vtable[15])(self, $tmp1766);
            panda$core$String* $tmp1769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1765, $tmp1768);
            panda$core$String* $tmp1771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, &$s1770);
            panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1771, superCast1726);
            panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1772, &$s1773);
            panda$core$String* $tmp1775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1760, $tmp1774);
            panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1776, itable1734);
            panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1777, &$s1778);
            ITable* $tmp1780 = ((panda$collections$CollectionView*) valueVTable1693)->$class->itable;
            while ($tmp1780->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1780 = $tmp1780->next;
            }
            $fn1782 $tmp1781 = $tmp1780->methods[0];
            panda$core$Int64 $tmp1783 = $tmp1781(((panda$collections$CollectionView*) valueVTable1693));
            panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1779, ((panda$core$Object*) wrap_panda$core$Int64($tmp1783)));
            panda$core$String* $tmp1786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1785);
            panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1775, $tmp1786);
            panda$core$MutableString$init$panda$core$String($tmp1744, $tmp1787);
            code1743 = $tmp1744;
            separator1788 = &$s1789;
            ITable* $tmp1791 = ((panda$collections$CollectionView*) valueVTable1693)->$class->itable;
            while ($tmp1791->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1791 = $tmp1791->next;
            }
            $fn1793 $tmp1792 = $tmp1791->methods[0];
            panda$core$Int64 $tmp1794 = $tmp1792(((panda$collections$CollectionView*) valueVTable1693));
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1790, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1794)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1796 = ((panda$core$Int64$wrapper*) $tmp1790.start)->value.value;
            panda$core$Int64 i1795 = { $tmp1796 };
            int64_t $tmp1798 = ((panda$core$Int64$wrapper*) $tmp1790.end)->value.value;
            int64_t $tmp1799 = $tmp1790.step.value;
            bool $tmp1800 = $tmp1790.inclusive.value;
            bool $tmp1807 = $tmp1799 > 0;
            if ($tmp1807) goto $l1805; else goto $l1806;
            $l1805:;
            if ($tmp1800) goto $l1808; else goto $l1809;
            $l1808:;
            if ($tmp1796 <= $tmp1798) goto $l1801; else goto $l1803;
            $l1809:;
            if ($tmp1796 < $tmp1798) goto $l1801; else goto $l1803;
            $l1806:;
            if ($tmp1800) goto $l1810; else goto $l1811;
            $l1810:;
            if ($tmp1796 >= $tmp1798) goto $l1801; else goto $l1803;
            $l1811:;
            if ($tmp1796 > $tmp1798) goto $l1801; else goto $l1803;
            $l1801:;
            {
                ITable* $tmp1814 = vtable1718->$class->itable;
                while ($tmp1814->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1814 = $tmp1814->next;
                }
                $fn1816 $tmp1815 = $tmp1814->methods[0];
                panda$core$Object* $tmp1817 = $tmp1815(vtable1718, i1795);
                m1813 = ((org$pandalanguage$pandac$MethodDecl*) $tmp1817);
                if (((panda$core$Bit) { ((panda$core$Object*) m1813->owner) == ((panda$core$Object*) p_cl) }).value) {
                {
                    panda$core$String* $tmp1820 = (($fn1819) self->$class->vtable[22])(self, m1813, self->wrapperShims);
                    methodName1818 = $tmp1820;
                }
                }
                else {
                {
                    panda$core$String* $tmp1822 = (($fn1821) self->$class->vtable[30])(self, m1813);
                    methodName1818 = $tmp1822;
                    if (m1813->owner->external.value) {
                    {
                        (($fn1823) self->$class->vtable[87])(self, m1813);
                    }
                    }
                }
                }
                panda$core$String* $tmp1825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1824, separator1788);
                panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1825, &$s1826);
                panda$core$String* $tmp1829 = (($fn1828) self->$class->vtable[18])(self, m1813);
                panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1827, $tmp1829);
                panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1831);
                panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1832, methodName1818);
                panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1833, &$s1834);
                (($fn1836) code1743->$class->vtable[3])(code1743, $tmp1835);
                separator1788 = &$s1837;
            }
            $l1804:;
            if ($tmp1807) goto $l1839; else goto $l1840;
            $l1839:;
            int64_t $tmp1841 = $tmp1798 - i1795.value;
            if ($tmp1800) goto $l1842; else goto $l1843;
            $l1842:;
            if ($tmp1841 >= $tmp1799) goto $l1838; else goto $l1803;
            $l1843:;
            if ($tmp1841 > $tmp1799) goto $l1838; else goto $l1803;
            $l1840:;
            int64_t $tmp1845 = i1795.value - $tmp1798;
            if ($tmp1800) goto $l1846; else goto $l1847;
            $l1846:;
            if ($tmp1845 >= -$tmp1799) goto $l1838; else goto $l1803;
            $l1847:;
            if ($tmp1845 > -$tmp1799) goto $l1838; else goto $l1803;
            $l1838:;
            i1795.value += $tmp1799;
            goto $l1801;
            $l1803:;
            (($fn1850) code1743->$class->vtable[3])(code1743, &$s1849);
            (($fn1851) ((panda$io$OutputStream*) self->types)->$class->vtable[15])(((panda$io$OutputStream*) self->types), ((panda$core$Object*) code1743));
        }
        }
        (($fn1852) self->classConstants->$class->vtable[5])(self->classConstants, ((panda$core$Object*) ((panda$collections$Key*) name1665)), ((panda$core$Object*) result1672));
    }
    }
    return result1672;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$escapeName$panda$core$String$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s) {
    panda$core$String* $tmp1855 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(p_s, &$s1853, &$s1854);
    panda$core$String* $tmp1858 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1855, &$s1856, &$s1857);
    panda$core$String* $tmp1861 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1858, &$s1859, &$s1860);
    panda$core$String* $tmp1864 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1861, &$s1862, &$s1863);
    panda$core$String* $tmp1867 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1864, &$s1865, &$s1866);
    panda$core$String* $tmp1870 = panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String($tmp1867, &$s1868, &$s1869);
    return $tmp1870;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$Variable$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v) {
    panda$core$Range $tmp1875;
    panda$core$String* result1915;
    panda$core$Bit $tmp1871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp1871.value) {
    {
        panda$core$Int64 $tmp1873 = (($fn1872) self->inlineContext->$class->vtable[7])(self->inlineContext);
        panda$core$Bit $tmp1874 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1873, ((panda$core$Int64) { 0 }));
        if ($tmp1874.value) {
        {
            panda$core$Int64 $tmp1876 = panda$collections$Array$get_count$R$panda$core$Int64(self->currentMethod->parameters);
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp1875, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp1876)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp1878 = ((panda$core$Int64$wrapper*) $tmp1875.start)->value.value;
            panda$core$Int64 i1877 = { $tmp1878 };
            int64_t $tmp1880 = ((panda$core$Int64$wrapper*) $tmp1875.end)->value.value;
            int64_t $tmp1881 = $tmp1875.step.value;
            bool $tmp1882 = $tmp1875.inclusive.value;
            bool $tmp1889 = $tmp1881 > 0;
            if ($tmp1889) goto $l1887; else goto $l1888;
            $l1887:;
            if ($tmp1882) goto $l1890; else goto $l1891;
            $l1890:;
            if ($tmp1878 <= $tmp1880) goto $l1883; else goto $l1885;
            $l1891:;
            if ($tmp1878 < $tmp1880) goto $l1883; else goto $l1885;
            $l1888:;
            if ($tmp1882) goto $l1892; else goto $l1893;
            $l1892:;
            if ($tmp1878 >= $tmp1880) goto $l1883; else goto $l1885;
            $l1893:;
            if ($tmp1878 > $tmp1880) goto $l1883; else goto $l1885;
            $l1883:;
            {
                panda$core$Object* $tmp1895 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(self->currentMethod->parameters, i1877);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) p_v)->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp1895)->name) }).value) {
                {
                    panda$core$Object* $tmp1897 = (($fn1896) self->inlineContext->$class->vtable[4])(self->inlineContext);
                    panda$core$Object* $tmp1899 = (($fn1898) ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1897)->argRefs->$class->vtable[2])(((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1897)->argRefs, i1877);
                    return ((panda$core$String*) $tmp1899);
                }
                }
            }
            $l1886:;
            if ($tmp1889) goto $l1901; else goto $l1902;
            $l1901:;
            int64_t $tmp1903 = $tmp1880 - i1877.value;
            if ($tmp1882) goto $l1904; else goto $l1905;
            $l1904:;
            if ($tmp1903 >= $tmp1881) goto $l1900; else goto $l1885;
            $l1905:;
            if ($tmp1903 > $tmp1881) goto $l1900; else goto $l1885;
            $l1902:;
            int64_t $tmp1907 = i1877.value - $tmp1880;
            if ($tmp1882) goto $l1908; else goto $l1909;
            $l1908:;
            if ($tmp1907 >= -$tmp1881) goto $l1900; else goto $l1885;
            $l1909:;
            if ($tmp1907 > -$tmp1881) goto $l1900; else goto $l1885;
            $l1900:;
            i1877.value += $tmp1881;
            goto $l1883;
            $l1885:;
        }
        }
        panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1911, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, &$s1913);
        return $tmp1914;
    }
    }
    panda$core$Object* $tmp1917 = (($fn1916) self->variableNames->$class->vtable[3])(self->variableNames, ((panda$core$Object*) p_v));
    result1915 = ((panda$core$String*) $tmp1917);
    if (((panda$core$Bit) { result1915 == NULL }).value) {
    {
        panda$core$Int64 $tmp1918 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp1918;
        panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1919, ((org$pandalanguage$pandac$Symbol*) p_v)->name);
        panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1920, &$s1921);
        panda$core$String* $tmp1923 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1922, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1923, &$s1924);
        result1915 = $tmp1925;
        (($fn1926) self->variableNames->$class->vtable[5])(self->variableNames, ((panda$core$Object*) p_v), ((panda$core$Object*) result1915));
    }
    }
    panda$core$Int64 $tmp1928 = (($fn1927) self->inlineContext->$class->vtable[7])(self->inlineContext);
    panda$core$Bit $tmp1929 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp1928, ((panda$core$Int64) { 0 }));
    if ($tmp1929.value) {
    {
        panda$core$Object* $tmp1931 = (($fn1930) self->inlineContext->$class->vtable[4])(self->inlineContext);
        panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result1915, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp1931)->varSuffix);
        result1915 = $tmp1932;
    }
    }
    return result1915;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$MutableString* result1936;
    panda$core$String* $match$305671945;
    panda$collections$Iterator* p$Iter2049;
    org$pandalanguage$pandac$MethodDecl$Parameter* p2061;
    panda$core$Bit $tmp1934 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) p_m)->name, &$s1933);
    if ($tmp1934.value) {
    {
        return &$s1935;
    }
    }
    panda$core$MutableString* $tmp1937 = (panda$core$MutableString*) malloc(40);
    $tmp1937->$class = (panda$core$Class*) &panda$core$MutableString$class;
    $tmp1937->refCount.value = 1;
    panda$core$MutableString$init$panda$core$String($tmp1937, &$s1939);
    result1936 = $tmp1937;
    panda$core$String* $tmp1941 = (($fn1940) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_m->owner)->name);
    (($fn1942) result1936->$class->vtable[3])(result1936, $tmp1941);
    (($fn1944) result1936->$class->vtable[3])(result1936, &$s1943);
    {
        $match$305671945 = ((org$pandalanguage$pandac$Symbol*) p_m)->name;
        panda$core$Bit $tmp1947 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1946);
        if ($tmp1947.value) {
        {
            (($fn1949) result1936->$class->vtable[3])(result1936, &$s1948);
        }
        }
        else {
        panda$core$Bit $tmp1951 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1950);
        if ($tmp1951.value) {
        {
            (($fn1953) result1936->$class->vtable[3])(result1936, &$s1952);
        }
        }
        else {
        panda$core$Bit $tmp1955 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1954);
        if ($tmp1955.value) {
        {
            (($fn1957) result1936->$class->vtable[3])(result1936, &$s1956);
        }
        }
        else {
        panda$core$Bit $tmp1959 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1958);
        if ($tmp1959.value) {
        {
            (($fn1961) result1936->$class->vtable[3])(result1936, &$s1960);
        }
        }
        else {
        panda$core$Bit $tmp1963 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1962);
        if ($tmp1963.value) {
        {
            (($fn1965) result1936->$class->vtable[3])(result1936, &$s1964);
        }
        }
        else {
        panda$core$Bit $tmp1967 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1966);
        if ($tmp1967.value) {
        {
            (($fn1969) result1936->$class->vtable[3])(result1936, &$s1968);
        }
        }
        else {
        panda$core$Bit $tmp1971 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1970);
        if ($tmp1971.value) {
        {
            (($fn1973) result1936->$class->vtable[3])(result1936, &$s1972);
        }
        }
        else {
        panda$core$Bit $tmp1975 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1974);
        if ($tmp1975.value) {
        {
            (($fn1977) result1936->$class->vtable[3])(result1936, &$s1976);
        }
        }
        else {
        panda$core$Bit $tmp1979 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1978);
        if ($tmp1979.value) {
        {
            (($fn1981) result1936->$class->vtable[3])(result1936, &$s1980);
        }
        }
        else {
        panda$core$Bit $tmp1983 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1982);
        if ($tmp1983.value) {
        {
            (($fn1985) result1936->$class->vtable[3])(result1936, &$s1984);
        }
        }
        else {
        panda$core$Bit $tmp1987 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1986);
        if ($tmp1987.value) {
        {
            (($fn1989) result1936->$class->vtable[3])(result1936, &$s1988);
        }
        }
        else {
        panda$core$Bit $tmp1991 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1990);
        if ($tmp1991.value) {
        {
            (($fn1993) result1936->$class->vtable[3])(result1936, &$s1992);
        }
        }
        else {
        panda$core$Bit $tmp1995 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1994);
        if ($tmp1995.value) {
        {
            (($fn1997) result1936->$class->vtable[3])(result1936, &$s1996);
        }
        }
        else {
        panda$core$Bit $tmp1999 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s1998);
        if ($tmp1999.value) {
        {
            (($fn2001) result1936->$class->vtable[3])(result1936, &$s2000);
        }
        }
        else {
        panda$core$Bit $tmp2003 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2002);
        if ($tmp2003.value) {
        {
            (($fn2005) result1936->$class->vtable[3])(result1936, &$s2004);
        }
        }
        else {
        panda$core$Bit $tmp2007 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2006);
        if ($tmp2007.value) {
        {
            (($fn2009) result1936->$class->vtable[3])(result1936, &$s2008);
        }
        }
        else {
        panda$core$Bit $tmp2011 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2010);
        if ($tmp2011.value) {
        {
            (($fn2013) result1936->$class->vtable[3])(result1936, &$s2012);
        }
        }
        else {
        panda$core$Bit $tmp2015 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2014);
        if ($tmp2015.value) {
        {
            (($fn2017) result1936->$class->vtable[3])(result1936, &$s2016);
        }
        }
        else {
        panda$core$Bit $tmp2019 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2018);
        if ($tmp2019.value) {
        {
            (($fn2021) result1936->$class->vtable[3])(result1936, &$s2020);
        }
        }
        else {
        panda$core$Bit $tmp2023 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2022);
        if ($tmp2023.value) {
        {
            (($fn2025) result1936->$class->vtable[3])(result1936, &$s2024);
        }
        }
        else {
        panda$core$Bit $tmp2027 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2026);
        if ($tmp2027.value) {
        {
            (($fn2029) result1936->$class->vtable[3])(result1936, &$s2028);
        }
        }
        else {
        panda$core$Bit $tmp2031 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2030);
        if ($tmp2031.value) {
        {
            (($fn2033) result1936->$class->vtable[3])(result1936, &$s2032);
        }
        }
        else {
        panda$core$Bit $tmp2035 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2034);
        if ($tmp2035.value) {
        {
            (($fn2037) result1936->$class->vtable[3])(result1936, &$s2036);
        }
        }
        else {
        panda$core$Bit $tmp2039 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2038);
        if ($tmp2039.value) {
        {
            (($fn2041) result1936->$class->vtable[3])(result1936, &$s2040);
        }
        }
        else {
        panda$core$Bit $tmp2043 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$305671945, &$s2042);
        if ($tmp2043.value) {
        {
            (($fn2045) result1936->$class->vtable[3])(result1936, &$s2044);
        }
        }
        else {
        {
            panda$core$String* $tmp2047 = (($fn2046) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_m)->name);
            (($fn2048) result1936->$class->vtable[3])(result1936, $tmp2047);
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
        ITable* $tmp2050 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp2050->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp2050 = $tmp2050->next;
        }
        $fn2052 $tmp2051 = $tmp2050->methods[0];
        panda$collections$Iterator* $tmp2053 = $tmp2051(((panda$collections$Iterable*) p_m->parameters));
        p$Iter2049 = $tmp2053;
        $l2054:;
        ITable* $tmp2056 = p$Iter2049->$class->itable;
        while ($tmp2056->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp2056 = $tmp2056->next;
        }
        $fn2058 $tmp2057 = $tmp2056->methods[0];
        panda$core$Bit $tmp2059 = $tmp2057(p$Iter2049);
        panda$core$Bit $tmp2060 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2059);
        if (!$tmp2060.value) goto $l2055;
        {
            ITable* $tmp2062 = p$Iter2049->$class->itable;
            while ($tmp2062->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp2062 = $tmp2062->next;
            }
            $fn2064 $tmp2063 = $tmp2062->methods[1];
            panda$core$Object* $tmp2065 = $tmp2063(p$Iter2049);
            p2061 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp2065);
            panda$core$String* $tmp2068 = (($fn2067) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p2061->type)->name);
            panda$core$String* $tmp2069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2066, $tmp2068);
            panda$core$String* $tmp2071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2069, &$s2070);
            (($fn2072) result1936->$class->vtable[3])(result1936, $tmp2071);
        }
        goto $l2054;
        $l2055:;
    }
    org$pandalanguage$pandac$Type* $tmp2073 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2075 = (($fn2074) p_m->returnType->$class->vtable[5])(p_m->returnType, ((panda$core$Object*) $tmp2073));
    if ($tmp2075.value) {
    {
        (($fn2077) result1936->$class->vtable[3])(result1936, &$s2076);
        panda$core$String* $tmp2079 = (($fn2078) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_m->returnType)->name);
        (($fn2080) result1936->$class->vtable[3])(result1936, $tmp2079);
    }
    }
    panda$core$String* $tmp2082 = (($fn2081) result1936->$class->vtable[0])(result1936);
    return $tmp2082;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getName$org$pandalanguage$pandac$FieldDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$FieldDecl* p_f) {
    panda$core$String* $tmp2085 = (($fn2084) self->$class->vtable[28])(self, ((org$pandalanguage$pandac$Symbol*) p_f->owner)->name);
    panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2083, $tmp2085);
    panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2086, &$s2087);
    panda$core$String* $tmp2089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2088, ((org$pandalanguage$pandac$Symbol*) p_f)->name);
    panda$core$String* $tmp2091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2089, &$s2090);
    return $tmp2091;
}
panda$core$Int64 org$pandalanguage$pandac$LLVMCodeGenerator$opClass$org$pandalanguage$pandac$Type$R$panda$core$Int64(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Type* p_t) {
    panda$core$Int64 $match$324272092;
    {
        $match$324272092 = p_t->typeKind;
        panda$core$Bit $tmp2093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$324272092, ((panda$core$Int64) { 12 }));
        if ($tmp2093.value) {
        {
            return ((panda$core$Int64) { 10121 });
        }
        }
        else {
        panda$core$Bit $tmp2095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$324272092, ((panda$core$Int64) { 13 }));
        bool $tmp2094 = $tmp2095.value;
        if ($tmp2094) goto $l2096;
        panda$core$Bit $tmp2097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$324272092, ((panda$core$Int64) { 19 }));
        $tmp2094 = $tmp2097.value;
        $l2096:;
        panda$core$Bit $tmp2098 = { $tmp2094 };
        if ($tmp2098.value) {
        {
            return ((panda$core$Int64) { 10122 });
        }
        }
        else {
        panda$core$Bit $tmp2099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$324272092, ((panda$core$Int64) { 20 }));
        if ($tmp2099.value) {
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
    panda$core$String* leftRef2100;
    panda$core$String* leftField2106;
    panda$core$String* start2117;
    panda$core$String* ifTrue2118;
    panda$core$String* ifFalse2121;
    panda$core$String* rightRef2136;
    panda$core$String* rightField2142;
    panda$core$String* truePred2153;
    panda$core$String* result2160;
    panda$core$String* $tmp2102 = (($fn2101) self->$class->vtable[66])(self, p_left, p_out);
    leftRef2100 = $tmp2102;
    org$pandalanguage$pandac$Type* $tmp2103 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2105 = (($fn2104) p_left->type->$class->vtable[4])(p_left->type, ((panda$core$Object*) $tmp2103));
    if ($tmp2105.value) {
    {
        panda$core$String* $tmp2108 = (($fn2107) self->$class->vtable[4])(self);
        leftField2106 = $tmp2108;
        panda$core$String* $tmp2110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2109, leftField2106);
        panda$core$String* $tmp2112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2110, &$s2111);
        panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2112, leftRef2100);
        panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2113, &$s2114);
        (($fn2116) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2115);
        leftRef2100 = leftField2106;
    }
    }
    start2117 = self->currentBlock;
    panda$core$String* $tmp2120 = (($fn2119) self->$class->vtable[5])(self);
    ifTrue2118 = $tmp2120;
    panda$core$String* $tmp2123 = (($fn2122) self->$class->vtable[5])(self);
    ifFalse2121 = $tmp2123;
    panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2124, leftRef2100);
    panda$core$String* $tmp2127 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2125, &$s2126);
    panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2127, ifTrue2118);
    panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2128, &$s2129);
    panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, ifFalse2121);
    panda$core$String* $tmp2133 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2131, &$s2132);
    (($fn2134) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2133);
    (($fn2135) self->$class->vtable[6])(self, ifTrue2118, p_out);
    panda$core$String* $tmp2138 = (($fn2137) self->$class->vtable[66])(self, p_right, p_out);
    rightRef2136 = $tmp2138;
    org$pandalanguage$pandac$Type* $tmp2139 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2141 = (($fn2140) p_right->type->$class->vtable[4])(p_right->type, ((panda$core$Object*) $tmp2139));
    if ($tmp2141.value) {
    {
        panda$core$String* $tmp2144 = (($fn2143) self->$class->vtable[4])(self);
        rightField2142 = $tmp2144;
        panda$core$String* $tmp2146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2145, rightField2142);
        panda$core$String* $tmp2148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2146, &$s2147);
        panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2148, rightRef2136);
        panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, &$s2150);
        (($fn2152) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2151);
        rightRef2136 = rightField2142;
    }
    }
    truePred2153 = self->currentBlock;
    panda$core$String* $tmp2155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2154, ifFalse2121);
    panda$core$String* $tmp2157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2155, &$s2156);
    (($fn2158) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2157);
    (($fn2159) self->$class->vtable[6])(self, ifFalse2121, p_out);
    panda$core$String* $tmp2162 = (($fn2161) self->$class->vtable[4])(self);
    result2160 = $tmp2162;
    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2163, result2160);
    panda$core$String* $tmp2166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2164, &$s2165);
    panda$core$String* $tmp2167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, start2117);
    panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, &$s2168);
    panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2169, rightRef2136);
    panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2170, &$s2171);
    panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2172, truePred2153);
    panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2173, &$s2174);
    (($fn2176) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2175);
    return result2160;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getOrReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2177;
    panda$core$String* leftField2183;
    panda$core$String* start2194;
    panda$core$String* ifTrue2195;
    panda$core$String* ifFalse2198;
    panda$core$String* rightRef2213;
    panda$core$String* rightField2219;
    panda$core$String* falsePred2230;
    panda$core$String* result2237;
    panda$core$String* $tmp2179 = (($fn2178) self->$class->vtable[66])(self, p_left, p_out);
    leftRef2177 = $tmp2179;
    org$pandalanguage$pandac$Type* $tmp2180 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2182 = (($fn2181) p_left->type->$class->vtable[4])(p_left->type, ((panda$core$Object*) $tmp2180));
    if ($tmp2182.value) {
    {
        panda$core$String* $tmp2185 = (($fn2184) self->$class->vtable[4])(self);
        leftField2183 = $tmp2185;
        panda$core$String* $tmp2187 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2186, leftField2183);
        panda$core$String* $tmp2189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2187, &$s2188);
        panda$core$String* $tmp2190 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2189, leftRef2177);
        panda$core$String* $tmp2192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2191);
        (($fn2193) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2192);
        leftRef2177 = leftField2183;
    }
    }
    start2194 = self->currentBlock;
    panda$core$String* $tmp2197 = (($fn2196) self->$class->vtable[5])(self);
    ifTrue2195 = $tmp2197;
    panda$core$String* $tmp2200 = (($fn2199) self->$class->vtable[5])(self);
    ifFalse2198 = $tmp2200;
    panda$core$String* $tmp2202 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2201, leftRef2177);
    panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2202, &$s2203);
    panda$core$String* $tmp2205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2204, ifTrue2195);
    panda$core$String* $tmp2207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2205, &$s2206);
    panda$core$String* $tmp2208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2207, ifFalse2198);
    panda$core$String* $tmp2210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2208, &$s2209);
    (($fn2211) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2210);
    (($fn2212) self->$class->vtable[6])(self, ifFalse2198, p_out);
    panda$core$String* $tmp2215 = (($fn2214) self->$class->vtable[66])(self, p_right, p_out);
    rightRef2213 = $tmp2215;
    org$pandalanguage$pandac$Type* $tmp2216 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp2218 = (($fn2217) p_right->type->$class->vtable[4])(p_right->type, ((panda$core$Object*) $tmp2216));
    if ($tmp2218.value) {
    {
        panda$core$String* $tmp2221 = (($fn2220) self->$class->vtable[4])(self);
        rightField2219 = $tmp2221;
        panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2222, rightField2219);
        panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2223, &$s2224);
        panda$core$String* $tmp2226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2225, rightRef2213);
        panda$core$String* $tmp2228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2226, &$s2227);
        (($fn2229) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2228);
        rightRef2213 = rightField2219;
    }
    }
    falsePred2230 = self->currentBlock;
    panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2231, ifTrue2195);
    panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2232, &$s2233);
    (($fn2235) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2234);
    (($fn2236) self->$class->vtable[6])(self, ifTrue2195, p_out);
    panda$core$String* $tmp2239 = (($fn2238) self->$class->vtable[4])(self);
    result2237 = $tmp2239;
    panda$core$String* $tmp2241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2240, result2237);
    panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2241, &$s2242);
    panda$core$String* $tmp2244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2243, start2194);
    panda$core$String* $tmp2246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2244, &$s2245);
    panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2246, rightRef2213);
    panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2247, &$s2248);
    panda$core$String* $tmp2250 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2249, falsePred2230);
    panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, &$s2251);
    (($fn2253) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2252);
    return result2237;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$panda$core$Int64$panda$core$String$panda$core$Int64$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$Int64 p_cl, panda$core$String* p_leftRef, panda$core$Int64 p_op, panda$core$String* p_rightRef, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* llvmOp2254;
    panda$core$Int64 $match$351002255;
    panda$core$Int64 $match$351602257;
    panda$core$Int64 $match$364272295;
    panda$core$Int64 $match$376912333;
    panda$core$String* result2354;
    {
        $match$351002255 = p_cl;
        panda$core$Bit $tmp2256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351002255, ((panda$core$Int64) { 10121 }));
        if ($tmp2256.value) {
        {
            {
                $match$351602257 = p_op;
                panda$core$Bit $tmp2258 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 51 }));
                if ($tmp2258.value) {
                {
                    llvmOp2254 = &$s2259;
                }
                }
                else {
                panda$core$Bit $tmp2260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 52 }));
                if ($tmp2260.value) {
                {
                    llvmOp2254 = &$s2261;
                }
                }
                else {
                panda$core$Bit $tmp2262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 53 }));
                if ($tmp2262.value) {
                {
                    llvmOp2254 = &$s2263;
                }
                }
                else {
                panda$core$Bit $tmp2264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 55 }));
                if ($tmp2264.value) {
                {
                    llvmOp2254 = &$s2265;
                }
                }
                else {
                panda$core$Bit $tmp2266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 56 }));
                if ($tmp2266.value) {
                {
                    llvmOp2254 = &$s2267;
                }
                }
                else {
                panda$core$Bit $tmp2268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 72 }));
                if ($tmp2268.value) {
                {
                    llvmOp2254 = &$s2269;
                }
                }
                else {
                panda$core$Bit $tmp2270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 1 }));
                if ($tmp2270.value) {
                {
                    llvmOp2254 = &$s2271;
                }
                }
                else {
                panda$core$Bit $tmp2272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 67 }));
                if ($tmp2272.value) {
                {
                    llvmOp2254 = &$s2273;
                }
                }
                else {
                panda$core$Bit $tmp2274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 69 }));
                if ($tmp2274.value) {
                {
                    llvmOp2254 = &$s2275;
                }
                }
                else {
                panda$core$Bit $tmp2277 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 70 }));
                bool $tmp2276 = $tmp2277.value;
                if ($tmp2276) goto $l2278;
                panda$core$Bit $tmp2279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 71 }));
                $tmp2276 = $tmp2279.value;
                $l2278:;
                panda$core$Bit $tmp2280 = { $tmp2276 };
                if ($tmp2280.value) {
                {
                    llvmOp2254 = &$s2281;
                }
                }
                else {
                panda$core$Bit $tmp2282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 58 }));
                if ($tmp2282.value) {
                {
                    llvmOp2254 = &$s2283;
                }
                }
                else {
                panda$core$Bit $tmp2284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 59 }));
                if ($tmp2284.value) {
                {
                    llvmOp2254 = &$s2285;
                }
                }
                else {
                panda$core$Bit $tmp2286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 63 }));
                if ($tmp2286.value) {
                {
                    llvmOp2254 = &$s2287;
                }
                }
                else {
                panda$core$Bit $tmp2288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 62 }));
                if ($tmp2288.value) {
                {
                    llvmOp2254 = &$s2289;
                }
                }
                else {
                panda$core$Bit $tmp2290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 65 }));
                if ($tmp2290.value) {
                {
                    llvmOp2254 = &$s2291;
                }
                }
                else {
                panda$core$Bit $tmp2292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351602257, ((panda$core$Int64) { 64 }));
                if ($tmp2292.value) {
                {
                    llvmOp2254 = &$s2293;
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
        panda$core$Bit $tmp2294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351002255, ((panda$core$Int64) { 10122 }));
        if ($tmp2294.value) {
        {
            {
                $match$364272295 = p_op;
                panda$core$Bit $tmp2296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 51 }));
                if ($tmp2296.value) {
                {
                    llvmOp2254 = &$s2297;
                }
                }
                else {
                panda$core$Bit $tmp2298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 52 }));
                if ($tmp2298.value) {
                {
                    llvmOp2254 = &$s2299;
                }
                }
                else {
                panda$core$Bit $tmp2300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 53 }));
                if ($tmp2300.value) {
                {
                    llvmOp2254 = &$s2301;
                }
                }
                else {
                panda$core$Bit $tmp2302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 55 }));
                if ($tmp2302.value) {
                {
                    llvmOp2254 = &$s2303;
                }
                }
                else {
                panda$core$Bit $tmp2304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 56 }));
                if ($tmp2304.value) {
                {
                    llvmOp2254 = &$s2305;
                }
                }
                else {
                panda$core$Bit $tmp2306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 72 }));
                if ($tmp2306.value) {
                {
                    llvmOp2254 = &$s2307;
                }
                }
                else {
                panda$core$Bit $tmp2308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 1 }));
                if ($tmp2308.value) {
                {
                    llvmOp2254 = &$s2309;
                }
                }
                else {
                panda$core$Bit $tmp2310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 67 }));
                if ($tmp2310.value) {
                {
                    llvmOp2254 = &$s2311;
                }
                }
                else {
                panda$core$Bit $tmp2312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 69 }));
                if ($tmp2312.value) {
                {
                    llvmOp2254 = &$s2313;
                }
                }
                else {
                panda$core$Bit $tmp2315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 70 }));
                bool $tmp2314 = $tmp2315.value;
                if ($tmp2314) goto $l2316;
                panda$core$Bit $tmp2317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 71 }));
                $tmp2314 = $tmp2317.value;
                $l2316:;
                panda$core$Bit $tmp2318 = { $tmp2314 };
                if ($tmp2318.value) {
                {
                    llvmOp2254 = &$s2319;
                }
                }
                else {
                panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 58 }));
                if ($tmp2320.value) {
                {
                    llvmOp2254 = &$s2321;
                }
                }
                else {
                panda$core$Bit $tmp2322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 59 }));
                if ($tmp2322.value) {
                {
                    llvmOp2254 = &$s2323;
                }
                }
                else {
                panda$core$Bit $tmp2324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 63 }));
                if ($tmp2324.value) {
                {
                    llvmOp2254 = &$s2325;
                }
                }
                else {
                panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 62 }));
                if ($tmp2326.value) {
                {
                    llvmOp2254 = &$s2327;
                }
                }
                else {
                panda$core$Bit $tmp2328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 65 }));
                if ($tmp2328.value) {
                {
                    llvmOp2254 = &$s2329;
                }
                }
                else {
                panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364272295, ((panda$core$Int64) { 64 }));
                if ($tmp2330.value) {
                {
                    llvmOp2254 = &$s2331;
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
        panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$351002255, ((panda$core$Int64) { 10123 }));
        if ($tmp2332.value) {
        {
            {
                $match$376912333 = p_op;
                panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376912333, ((panda$core$Int64) { 51 }));
                if ($tmp2334.value) {
                {
                    llvmOp2254 = &$s2335;
                }
                }
                else {
                panda$core$Bit $tmp2336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376912333, ((panda$core$Int64) { 52 }));
                if ($tmp2336.value) {
                {
                    llvmOp2254 = &$s2337;
                }
                }
                else {
                panda$core$Bit $tmp2338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376912333, ((panda$core$Int64) { 53 }));
                if ($tmp2338.value) {
                {
                    llvmOp2254 = &$s2339;
                }
                }
                else {
                panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376912333, ((panda$core$Int64) { 55 }));
                if ($tmp2340.value) {
                {
                    llvmOp2254 = &$s2341;
                }
                }
                else {
                panda$core$Bit $tmp2342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376912333, ((panda$core$Int64) { 58 }));
                if ($tmp2342.value) {
                {
                    llvmOp2254 = &$s2343;
                }
                }
                else {
                panda$core$Bit $tmp2344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376912333, ((panda$core$Int64) { 59 }));
                if ($tmp2344.value) {
                {
                    llvmOp2254 = &$s2345;
                }
                }
                else {
                panda$core$Bit $tmp2346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376912333, ((panda$core$Int64) { 63 }));
                if ($tmp2346.value) {
                {
                    llvmOp2254 = &$s2347;
                }
                }
                else {
                panda$core$Bit $tmp2348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376912333, ((panda$core$Int64) { 62 }));
                if ($tmp2348.value) {
                {
                    llvmOp2254 = &$s2349;
                }
                }
                else {
                panda$core$Bit $tmp2350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376912333, ((panda$core$Int64) { 65 }));
                if ($tmp2350.value) {
                {
                    llvmOp2254 = &$s2351;
                }
                }
                else {
                panda$core$Bit $tmp2352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376912333, ((panda$core$Int64) { 64 }));
                if ($tmp2352.value) {
                {
                    llvmOp2254 = &$s2353;
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
    panda$core$String* $tmp2356 = (($fn2355) self->$class->vtable[4])(self);
    result2354 = $tmp2356;
    panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2357, result2354);
    panda$core$String* $tmp2360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2358, &$s2359);
    panda$core$String* $tmp2361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2360, llvmOp2254);
    panda$core$String* $tmp2363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2361, &$s2362);
    panda$core$String* $tmp2364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2363, p_leftRef);
    panda$core$String* $tmp2366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, &$s2365);
    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2366, p_rightRef);
    panda$core$String* $tmp2369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2368);
    (($fn2370) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2369);
    return result2354;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2371;
    panda$core$String* rightRef2374;
    panda$core$String* raw2377;
    panda$core$String* result2391;
    panda$core$String* $tmp2373 = (($fn2372) self->$class->vtable[67])(self, p_left, p_out);
    leftRef2371 = $tmp2373;
    panda$core$String* $tmp2376 = (($fn2375) self->$class->vtable[66])(self, p_right, p_out);
    rightRef2374 = $tmp2376;
    panda$core$String* $tmp2379 = (($fn2378) self->$class->vtable[4])(self);
    raw2377 = $tmp2379;
    panda$core$String* $tmp2381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2380, raw2377);
    panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2381, &$s2382);
    panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2383, leftRef2371);
    panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2384, &$s2385);
    panda$core$String* $tmp2387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2386, rightRef2374);
    panda$core$String* $tmp2389 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2387, &$s2388);
    (($fn2390) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2389);
    panda$core$String* $tmp2393 = (($fn2392) self->$class->vtable[4])(self);
    result2391 = $tmp2393;
    panda$core$String* $tmp2395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2394, result2391);
    panda$core$String* $tmp2397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2395, &$s2396);
    panda$core$String* $tmp2398 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2397, raw2377);
    panda$core$String* $tmp2400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, &$s2399);
    (($fn2401) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2400);
    return result2391;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNIdentityReference$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* leftRef2402;
    panda$core$String* rightRef2405;
    panda$core$String* raw2408;
    panda$core$String* result2422;
    panda$core$String* $tmp2404 = (($fn2403) self->$class->vtable[67])(self, p_left, p_out);
    leftRef2402 = $tmp2404;
    panda$core$String* $tmp2407 = (($fn2406) self->$class->vtable[66])(self, p_right, p_out);
    rightRef2405 = $tmp2407;
    panda$core$String* $tmp2410 = (($fn2409) self->$class->vtable[4])(self);
    raw2408 = $tmp2410;
    panda$core$String* $tmp2412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2411, raw2408);
    panda$core$String* $tmp2414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2412, &$s2413);
    panda$core$String* $tmp2415 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2414, leftRef2402);
    panda$core$String* $tmp2417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2415, &$s2416);
    panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2417, rightRef2405);
    panda$core$String* $tmp2420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2418, &$s2419);
    (($fn2421) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2420);
    panda$core$String* $tmp2424 = (($fn2423) self->$class->vtable[4])(self);
    result2422 = $tmp2424;
    panda$core$String* $tmp2426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2425, result2422);
    panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, &$s2427);
    panda$core$String* $tmp2429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, raw2408);
    panda$core$String* $tmp2431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2429, &$s2430);
    (($fn2432) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2431);
    return result2422;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_left, panda$core$Int64 p_op, org$pandalanguage$pandac$IRNode* p_right, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$396372433;
    panda$core$String* leftRef2446;
    panda$core$String* rightRef2449;
    {
        $match$396372433 = p_op;
        panda$core$Bit $tmp2434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396372433, ((panda$core$Int64) { 66 }));
        if ($tmp2434.value) {
        {
            panda$core$String* $tmp2436 = (($fn2435) self->$class->vtable[33])(self, p_left, p_right, p_out);
            return $tmp2436;
        }
        }
        else {
        panda$core$Bit $tmp2437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396372433, ((panda$core$Int64) { 68 }));
        if ($tmp2437.value) {
        {
            panda$core$String* $tmp2439 = (($fn2438) self->$class->vtable[34])(self, p_left, p_right, p_out);
            return $tmp2439;
        }
        }
        else {
        panda$core$Bit $tmp2440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396372433, ((panda$core$Int64) { 60 }));
        if ($tmp2440.value) {
        {
            panda$core$String* $tmp2442 = (($fn2441) self->$class->vtable[36])(self, p_left, p_right, p_out);
            return $tmp2442;
        }
        }
        else {
        panda$core$Bit $tmp2443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$396372433, ((panda$core$Int64) { 61 }));
        if ($tmp2443.value) {
        {
            panda$core$String* $tmp2445 = (($fn2444) self->$class->vtable[37])(self, p_left, p_right, p_out);
            return $tmp2445;
        }
        }
        else {
        {
            panda$core$String* $tmp2448 = (($fn2447) self->$class->vtable[67])(self, p_left, p_out);
            leftRef2446 = $tmp2448;
            panda$core$String* $tmp2451 = (($fn2450) self->$class->vtable[66])(self, p_right, p_out);
            rightRef2449 = $tmp2451;
            panda$core$Int64 $tmp2453 = (($fn2452) self->$class->vtable[32])(self, p_left->type);
            panda$core$String* $tmp2455 = (($fn2454) self->$class->vtable[35])(self, $tmp2453, leftRef2446, p_op, rightRef2449, p_out);
            return $tmp2455;
        }
        }
        }
        }
        }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBinaryReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    panda$core$Object* $tmp2456 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 0 }));
    panda$core$Object* $tmp2457 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_b->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp2459 = (($fn2458) self->$class->vtable[38])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2456), ((panda$core$Int64$wrapper*) p_b->payload)->value, ((org$pandalanguage$pandac$IRNode*) $tmp2457), p_out);
    return $tmp2459;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$callingConvention$org$pandalanguage$pandac$MethodDecl$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    return &$s2460;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVirtualMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc2461;
    panda$core$Int64 index2464;
    panda$collections$ListView* vtable2465;
    panda$core$Range $tmp2468;
    panda$core$String* classPtrPtr2506;
    panda$core$String* classPtr2526;
    panda$core$String* cast2537;
    panda$core$String* ptr2551;
    panda$core$String* load2576;
    panda$core$String* result2587;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2463 = (($fn2462) self->$class->vtable[26])(self, p_m->owner);
    cc2461 = $tmp2463;
    index2464 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2467 = (($fn2466) self->compiler->$class->vtable[20])(self->compiler, p_m->owner);
    vtable2465 = $tmp2467;
    ITable* $tmp2469 = ((panda$collections$CollectionView*) vtable2465)->$class->itable;
    while ($tmp2469->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2469 = $tmp2469->next;
    }
    $fn2471 $tmp2470 = $tmp2469->methods[0];
    panda$core$Int64 $tmp2472 = $tmp2470(((panda$collections$CollectionView*) vtable2465));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp2468, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp2472)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2474 = ((panda$core$Int64$wrapper*) $tmp2468.start)->value.value;
    panda$core$Int64 i2473 = { $tmp2474 };
    int64_t $tmp2476 = ((panda$core$Int64$wrapper*) $tmp2468.end)->value.value;
    int64_t $tmp2477 = $tmp2468.step.value;
    bool $tmp2478 = $tmp2468.inclusive.value;
    bool $tmp2485 = $tmp2477 > 0;
    if ($tmp2485) goto $l2483; else goto $l2484;
    $l2483:;
    if ($tmp2478) goto $l2486; else goto $l2487;
    $l2486:;
    if ($tmp2474 <= $tmp2476) goto $l2479; else goto $l2481;
    $l2487:;
    if ($tmp2474 < $tmp2476) goto $l2479; else goto $l2481;
    $l2484:;
    if ($tmp2478) goto $l2488; else goto $l2489;
    $l2488:;
    if ($tmp2474 >= $tmp2476) goto $l2479; else goto $l2481;
    $l2489:;
    if ($tmp2474 > $tmp2476) goto $l2479; else goto $l2481;
    $l2479:;
    {
        ITable* $tmp2491 = vtable2465->$class->itable;
        while ($tmp2491->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2491 = $tmp2491->next;
        }
        $fn2493 $tmp2492 = $tmp2491->methods[0];
        panda$core$Object* $tmp2494 = $tmp2492(vtable2465, i2473);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2494)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2464 = i2473;
            goto $l2481;
        }
        }
    }
    $l2482:;
    if ($tmp2485) goto $l2496; else goto $l2497;
    $l2496:;
    int64_t $tmp2498 = $tmp2476 - i2473.value;
    if ($tmp2478) goto $l2499; else goto $l2500;
    $l2499:;
    if ($tmp2498 >= $tmp2477) goto $l2495; else goto $l2481;
    $l2500:;
    if ($tmp2498 > $tmp2477) goto $l2495; else goto $l2481;
    $l2497:;
    int64_t $tmp2502 = i2473.value - $tmp2476;
    if ($tmp2478) goto $l2503; else goto $l2504;
    $l2503:;
    if ($tmp2502 >= -$tmp2477) goto $l2495; else goto $l2481;
    $l2504:;
    if ($tmp2502 > -$tmp2477) goto $l2495; else goto $l2481;
    $l2495:;
    i2473.value += $tmp2477;
    goto $l2479;
    $l2481:;
    panda$core$String* $tmp2508 = (($fn2507) self->$class->vtable[4])(self);
    classPtrPtr2506 = $tmp2508;
    panda$core$String* $tmp2510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2509, classPtrPtr2506);
    panda$core$String* $tmp2512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2510, &$s2511);
    org$pandalanguage$pandac$Type* $tmp2514 = (($fn2513) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp2516 = (($fn2515) self->$class->vtable[14])(self, $tmp2514);
    panda$core$String* $tmp2517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2512, $tmp2516);
    panda$core$String* $tmp2519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, &$s2518);
    panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2520, p_target);
    panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2521, &$s2522);
    panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2519, $tmp2523);
    (($fn2525) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2524);
    panda$core$String* $tmp2528 = (($fn2527) self->$class->vtable[4])(self);
    classPtr2526 = $tmp2528;
    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2529, classPtr2526);
    panda$core$String* $tmp2532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2530, &$s2531);
    panda$core$String* $tmp2533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2532, classPtrPtr2506);
    panda$core$String* $tmp2535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2533, &$s2534);
    (($fn2536) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2535);
    panda$core$String* $tmp2539 = (($fn2538) self->$class->vtable[4])(self);
    cast2537 = $tmp2539;
    panda$core$String* $tmp2541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2540, cast2537);
    panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2541, &$s2542);
    panda$core$String* $tmp2544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2543, classPtr2526);
    panda$core$String* $tmp2546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2544, &$s2545);
    panda$core$String* $tmp2547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2546, cc2461->type);
    panda$core$String* $tmp2549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2547, &$s2548);
    (($fn2550) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2549);
    panda$core$String* $tmp2553 = (($fn2552) self->$class->vtable[4])(self);
    ptr2551 = $tmp2553;
    panda$core$String* $tmp2555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2554, ptr2551);
    panda$core$String* $tmp2557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2555, &$s2556);
    panda$core$String* $tmp2558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, cc2461->type);
    panda$core$String* $tmp2560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2558, &$s2559);
    panda$core$String* $tmp2561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2560, cc2461->type);
    panda$core$String* $tmp2563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, &$s2562);
    panda$core$String* $tmp2564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, cast2537);
    panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2564, &$s2565);
    panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2567, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 4 }))));
    panda$core$String* $tmp2570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2568, &$s2569);
    panda$core$String* $tmp2571 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2570, ((panda$core$Object*) wrap_panda$core$Int64(index2464)));
    panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2571, &$s2572);
    panda$core$String* $tmp2574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2566, $tmp2573);
    (($fn2575) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2574);
    panda$core$String* $tmp2578 = (($fn2577) self->$class->vtable[4])(self);
    load2576 = $tmp2578;
    panda$core$String* $tmp2580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2579, load2576);
    panda$core$String* $tmp2582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2581);
    panda$core$String* $tmp2583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, ptr2551);
    panda$core$String* $tmp2585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2583, &$s2584);
    (($fn2586) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2585);
    panda$core$String* $tmp2589 = (($fn2588) self->$class->vtable[4])(self);
    result2587 = $tmp2589;
    panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2590, result2587);
    panda$core$String* $tmp2593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2591, &$s2592);
    panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, load2576);
    panda$core$String* $tmp2596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2594, &$s2595);
    org$pandalanguage$pandac$Type* $tmp2598 = (($fn2597) self->compiler->$class->vtable[46])(self->compiler, p_m);
    panda$core$String* $tmp2600 = (($fn2599) self->$class->vtable[15])(self, $tmp2598);
    panda$core$String* $tmp2601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2596, $tmp2600);
    (($fn2602) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2601);
    return result2587;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getInterfaceMethodReference$panda$core$String$org$pandalanguage$pandac$MethodDecl$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* methodType2603;
    panda$core$String* entry2608;
    panda$core$String* classPointer2617;
    panda$core$String* loadedClass2644;
    panda$core$String* classType2647;
    panda$core$String* itableFirst2665;
    panda$core$String* next2691;
    panda$core$String* leavingEntryLabel2699;
    panda$core$String* itableNext2702;
    panda$core$String* itablePtrPtr2707;
    panda$core$String* fail2710;
    panda$core$String* itablePtr2732;
    panda$core$String* itableClassPtr2743;
    panda$core$String* itableClass2760;
    panda$core$String* test2777;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* intfCC2780;
    panda$core$String* success2805;
    panda$core$Int64 index2840;
    panda$collections$ListView* vtable2841;
    panda$core$Range $tmp2844;
    panda$core$String* methodPtrPtr2892;
    panda$core$String* cast2912;
    panda$core$String* methodPtr2926;
    org$pandalanguage$pandac$Type* $tmp2605 = (($fn2604) self->compiler->$class->vtable[46])(self->compiler, p_m);
    panda$core$String* $tmp2607 = (($fn2606) self->$class->vtable[15])(self, $tmp2605);
    methodType2603 = $tmp2607;
    panda$core$String* $tmp2610 = (($fn2609) self->$class->vtable[5])(self);
    entry2608 = $tmp2610;
    panda$core$String* $tmp2612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2611, entry2608);
    panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2612, &$s2613);
    (($fn2615) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2614);
    (($fn2616) self->$class->vtable[6])(self, entry2608, p_out);
    panda$core$String* $tmp2619 = (($fn2618) self->$class->vtable[4])(self);
    classPointer2617 = $tmp2619;
    panda$core$String* $tmp2621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2620, classPointer2617);
    panda$core$String* $tmp2623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, &$s2622);
    org$pandalanguage$pandac$Type* $tmp2625 = (($fn2624) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp2627 = (($fn2626) self->$class->vtable[14])(self, $tmp2625);
    panda$core$String* $tmp2628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2623, $tmp2627);
    panda$core$String* $tmp2630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2628, &$s2629);
    panda$core$String* $tmp2632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2631, p_target);
    panda$core$String* $tmp2634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2632, &$s2633);
    panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2634, &$s2635);
    panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2636, &$s2637);
    panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2638, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))));
    panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2639, &$s2640);
    panda$core$String* $tmp2642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2630, $tmp2641);
    (($fn2643) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2642);
    panda$core$String* $tmp2646 = (($fn2645) self->$class->vtable[4])(self);
    loadedClass2644 = $tmp2646;
    org$pandalanguage$pandac$Type* $tmp2648 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp2650 = (($fn2649) self->$class->vtable[14])(self, $tmp2648);
    classType2647 = $tmp2650;
    panda$core$String* $tmp2652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2651, loadedClass2644);
    panda$core$String* $tmp2654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2652, &$s2653);
    panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, classType2647);
    panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, &$s2656);
    panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, classType2647);
    panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2658, &$s2659);
    panda$core$String* $tmp2661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, classPointer2617);
    panda$core$String* $tmp2663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2661, &$s2662);
    (($fn2664) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2663);
    panda$core$String* $tmp2667 = (($fn2666) self->$class->vtable[4])(self);
    itableFirst2665 = $tmp2667;
    panda$core$String* $tmp2669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2668, itableFirst2665);
    panda$core$String* $tmp2671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2669, &$s2670);
    panda$core$String* $tmp2672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2671, classType2647);
    panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2672, &$s2673);
    panda$core$String* $tmp2675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, classType2647);
    panda$core$String* $tmp2677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2675, &$s2676);
    panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2678, loadedClass2644);
    panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2679, &$s2680);
    panda$core$String* $tmp2683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2681, &$s2682);
    panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, &$s2684);
    panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2685, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 3 }))));
    panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2686, &$s2687);
    panda$core$String* $tmp2689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, $tmp2688);
    (($fn2690) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2689);
    panda$core$String* $tmp2693 = (($fn2692) self->$class->vtable[5])(self);
    next2691 = $tmp2693;
    panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2694, next2691);
    panda$core$String* $tmp2697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2695, &$s2696);
    (($fn2698) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2697);
    leavingEntryLabel2699 = self->currentBlock;
    (($fn2700) self->$class->vtable[6])(self, next2691, p_out);
    panda$core$Int64 $tmp2701 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp2701;
    panda$core$String* $tmp2704 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2703, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2704, &$s2705);
    itableNext2702 = $tmp2706;
    panda$core$String* $tmp2709 = (($fn2708) self->$class->vtable[4])(self);
    itablePtrPtr2707 = $tmp2709;
    panda$core$String* $tmp2712 = (($fn2711) self->$class->vtable[5])(self);
    fail2710 = $tmp2712;
    panda$core$String* $tmp2714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2713, itablePtrPtr2707);
    panda$core$String* $tmp2716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2714, &$s2715);
    panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2716, itableFirst2665);
    panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2717, &$s2718);
    panda$core$String* $tmp2720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2719, leavingEntryLabel2699);
    panda$core$String* $tmp2722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2720, &$s2721);
    panda$core$String* $tmp2724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2723, itableNext2702);
    panda$core$String* $tmp2726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2724, &$s2725);
    panda$core$String* $tmp2727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, fail2710);
    panda$core$String* $tmp2729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2727, &$s2728);
    panda$core$String* $tmp2730 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2722, $tmp2729);
    (($fn2731) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2730);
    panda$core$String* $tmp2734 = (($fn2733) self->$class->vtable[4])(self);
    itablePtr2732 = $tmp2734;
    panda$core$String* $tmp2736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2735, itablePtr2732);
    panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2736, &$s2737);
    panda$core$String* $tmp2739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2738, itablePtrPtr2707);
    panda$core$String* $tmp2741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2739, &$s2740);
    (($fn2742) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2741);
    panda$core$String* $tmp2745 = (($fn2744) self->$class->vtable[4])(self);
    itableClassPtr2743 = $tmp2745;
    panda$core$String* $tmp2747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2746, itableClassPtr2743);
    panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2747, &$s2748);
    panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2750, itablePtr2732);
    panda$core$String* $tmp2753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2751, &$s2752);
    panda$core$String* $tmp2755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2753, &$s2754);
    panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2755, &$s2756);
    panda$core$String* $tmp2758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2749, $tmp2757);
    (($fn2759) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2758);
    panda$core$String* $tmp2762 = (($fn2761) self->$class->vtable[4])(self);
    itableClass2760 = $tmp2762;
    panda$core$String* $tmp2764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2763, itableClass2760);
    panda$core$String* $tmp2766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2764, &$s2765);
    panda$core$String* $tmp2767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2766, classType2647);
    panda$core$String* $tmp2769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2767, &$s2768);
    panda$core$String* $tmp2770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2769, classType2647);
    panda$core$String* $tmp2772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2770, &$s2771);
    panda$core$String* $tmp2773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2772, itableClassPtr2743);
    panda$core$String* $tmp2775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2773, &$s2774);
    (($fn2776) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2775);
    panda$core$String* $tmp2779 = (($fn2778) self->$class->vtable[4])(self);
    test2777 = $tmp2779;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp2782 = (($fn2781) self->$class->vtable[26])(self, p_m->owner);
    intfCC2780 = $tmp2782;
    panda$core$String* $tmp2784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2783, test2777);
    panda$core$String* $tmp2786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2784, &$s2785);
    panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2786, classType2647);
    panda$core$String* $tmp2789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2787, &$s2788);
    panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2789, intfCC2780->type);
    panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2790, &$s2791);
    panda$core$String* $tmp2793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2792, intfCC2780->name);
    panda$core$String* $tmp2795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2793, &$s2794);
    panda$core$String* $tmp2797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2796, classType2647);
    panda$core$String* $tmp2799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2797, &$s2798);
    panda$core$String* $tmp2800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2799, itableClass2760);
    panda$core$String* $tmp2802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2800, &$s2801);
    panda$core$String* $tmp2803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2795, $tmp2802);
    (($fn2804) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2803);
    panda$core$String* $tmp2807 = (($fn2806) self->$class->vtable[5])(self);
    success2805 = $tmp2807;
    panda$core$String* $tmp2809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2808, test2777);
    panda$core$String* $tmp2811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, &$s2810);
    panda$core$String* $tmp2812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2811, success2805);
    panda$core$String* $tmp2814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2812, &$s2813);
    panda$core$String* $tmp2815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2814, fail2710);
    panda$core$String* $tmp2817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2815, &$s2816);
    (($fn2818) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2817);
    (($fn2819) self->$class->vtable[6])(self, fail2710, p_out);
    panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2820, itableNext2702);
    panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, &$s2822);
    panda$core$String* $tmp2824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2823, itablePtr2732);
    panda$core$String* $tmp2826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2824, &$s2825);
    panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2827, &$s2828);
    panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2829, &$s2830);
    panda$core$String* $tmp2832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2826, $tmp2831);
    (($fn2833) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2832);
    panda$core$String* $tmp2835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2834, next2691);
    panda$core$String* $tmp2837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, &$s2836);
    (($fn2838) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2837);
    (($fn2839) self->$class->vtable[6])(self, success2805, p_out);
    index2840 = ((panda$core$Int64) { -1 });
    panda$collections$ListView* $tmp2843 = (($fn2842) self->compiler->$class->vtable[20])(self->compiler, p_m->owner);
    vtable2841 = $tmp2843;
    ITable* $tmp2845 = ((panda$collections$CollectionView*) vtable2841)->$class->itable;
    while ($tmp2845->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2845 = $tmp2845->next;
    }
    $fn2847 $tmp2846 = $tmp2845->methods[0];
    panda$core$Int64 $tmp2848 = $tmp2846(((panda$collections$CollectionView*) vtable2841));
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp2844, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp2848)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp2850 = ((panda$core$Int64$wrapper*) $tmp2844.start)->value.value;
    panda$core$Int64 i2849 = { $tmp2850 };
    int64_t $tmp2852 = ((panda$core$Int64$wrapper*) $tmp2844.end)->value.value;
    int64_t $tmp2853 = $tmp2844.step.value;
    bool $tmp2854 = $tmp2844.inclusive.value;
    bool $tmp2861 = $tmp2853 > 0;
    if ($tmp2861) goto $l2859; else goto $l2860;
    $l2859:;
    if ($tmp2854) goto $l2862; else goto $l2863;
    $l2862:;
    if ($tmp2850 <= $tmp2852) goto $l2855; else goto $l2857;
    $l2863:;
    if ($tmp2850 < $tmp2852) goto $l2855; else goto $l2857;
    $l2860:;
    if ($tmp2854) goto $l2864; else goto $l2865;
    $l2864:;
    if ($tmp2850 >= $tmp2852) goto $l2855; else goto $l2857;
    $l2865:;
    if ($tmp2850 > $tmp2852) goto $l2855; else goto $l2857;
    $l2855:;
    {
        ITable* $tmp2867 = vtable2841->$class->itable;
        while ($tmp2867->$class != (panda$core$Class*) &panda$collections$ListView$class) {
            $tmp2867 = $tmp2867->next;
        }
        $fn2869 $tmp2868 = $tmp2867->methods[0];
        panda$core$Object* $tmp2870 = $tmp2868(vtable2841, i2849);
        if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$MethodDecl*) $tmp2870)) == ((panda$core$Object*) p_m) }).value) {
        {
            index2840 = i2849;
            goto $l2857;
        }
        }
    }
    $l2858:;
    if ($tmp2861) goto $l2872; else goto $l2873;
    $l2872:;
    int64_t $tmp2874 = $tmp2852 - i2849.value;
    if ($tmp2854) goto $l2875; else goto $l2876;
    $l2875:;
    if ($tmp2874 >= $tmp2853) goto $l2871; else goto $l2857;
    $l2876:;
    if ($tmp2874 > $tmp2853) goto $l2871; else goto $l2857;
    $l2873:;
    int64_t $tmp2878 = i2849.value - $tmp2852;
    if ($tmp2854) goto $l2879; else goto $l2880;
    $l2879:;
    if ($tmp2878 >= -$tmp2853) goto $l2871; else goto $l2857;
    $l2880:;
    if ($tmp2878 > -$tmp2853) goto $l2871; else goto $l2857;
    $l2871:;
    i2849.value += $tmp2853;
    goto $l2855;
    $l2857:;
    org$pandalanguage$pandac$Type* $tmp2882 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp2884 = (($fn2883) self->compiler->$class->vtable[13])(self->compiler, $tmp2882);
    panda$collections$ListView* $tmp2886 = (($fn2885) self->compiler->$class->vtable[20])(self->compiler, $tmp2884);
    ITable* $tmp2887 = ((panda$collections$CollectionView*) $tmp2886)->$class->itable;
    while ($tmp2887->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp2887 = $tmp2887->next;
    }
    $fn2889 $tmp2888 = $tmp2887->methods[0];
    panda$core$Int64 $tmp2890 = $tmp2888(((panda$collections$CollectionView*) $tmp2886));
    panda$core$Int64 $tmp2891 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(index2840, $tmp2890);
    index2840 = $tmp2891;
    panda$core$String* $tmp2894 = (($fn2893) self->$class->vtable[4])(self);
    methodPtrPtr2892 = $tmp2894;
    panda$core$String* $tmp2896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2895, methodPtrPtr2892);
    panda$core$String* $tmp2898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2896, &$s2897);
    panda$core$String* $tmp2900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2899, itablePtr2732);
    panda$core$String* $tmp2902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2900, &$s2901);
    panda$core$String* $tmp2904 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2902, &$s2903);
    panda$core$String* $tmp2906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2904, &$s2905);
    panda$core$String* $tmp2907 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2906, ((panda$core$Object*) wrap_panda$core$Int64(index2840)));
    panda$core$String* $tmp2909 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2907, &$s2908);
    panda$core$String* $tmp2910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2898, $tmp2909);
    (($fn2911) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2910);
    panda$core$String* $tmp2914 = (($fn2913) self->$class->vtable[4])(self);
    cast2912 = $tmp2914;
    panda$core$String* $tmp2916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2915, cast2912);
    panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2916, &$s2917);
    panda$core$String* $tmp2919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2918, methodPtrPtr2892);
    panda$core$String* $tmp2921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2919, &$s2920);
    panda$core$String* $tmp2922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2921, methodType2603);
    panda$core$String* $tmp2924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2922, &$s2923);
    (($fn2925) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2924);
    panda$core$String* $tmp2928 = (($fn2927) self->$class->vtable[4])(self);
    methodPtr2926 = $tmp2928;
    panda$core$String* $tmp2930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2929, methodPtr2926);
    panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2930, &$s2931);
    panda$core$String* $tmp2933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2932, methodType2603);
    panda$core$String* $tmp2935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2933, &$s2934);
    panda$core$String* $tmp2936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2935, methodType2603);
    panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2936, &$s2937);
    panda$core$String* $tmp2939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2938, cast2912);
    panda$core$String* $tmp2941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2939, &$s2940);
    (($fn2942) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2941);
    return methodPtr2926;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getMethodReference$panda$core$String$Q$org$pandalanguage$pandac$MethodDecl$panda$core$Bit$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_target, org$pandalanguage$pandac$MethodDecl* p_m, panda$core$Bit p_isSuper, panda$io$IndentedOutputStream* p_out) {
    panda$core$Bit $tmp2944 = panda$core$Bit$$NOT$R$panda$core$Bit(p_isSuper);
    bool $tmp2943 = $tmp2944.value;
    if (!$tmp2943) goto $l2945;
    panda$core$Bit $tmp2947 = (($fn2946) p_m->$class->vtable[3])(p_m);
    $tmp2943 = $tmp2947.value;
    $l2945:;
    panda$core$Bit $tmp2948 = { $tmp2943 };
    if ($tmp2948.value) {
    {
        panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->owner->classKind, ((panda$core$Int64) { 5012 }));
        if ($tmp2949.value) {
        {
            panda$core$String* $tmp2951 = (($fn2950) self->$class->vtable[42])(self, p_target, p_m, p_out);
            return $tmp2951;
        }
        }
        else {
        {
            panda$core$String* $tmp2953 = (($fn2952) self->$class->vtable[41])(self, p_target, p_m, p_out);
            return $tmp2953;
        }
        }
    }
    }
    else {
    {
        if (p_m->owner->external.value) {
        {
            (($fn2954) self->$class->vtable[87])(self, p_m);
        }
        }
        panda$core$String* $tmp2956 = (($fn2955) self->$class->vtable[30])(self, p_m);
        return $tmp2956;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPointerCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m2957;
    panda$core$String* $match$458542958;
    panda$core$String* countStruct2961;
    panda$core$String* count2965;
    panda$core$String* size2976;
    panda$core$Int64 elementSize2979;
    panda$core$String* malloc3001;
    panda$core$String* result3016;
    panda$core$String* ptr3036;
    panda$core$String* baseType3040;
    panda$core$String* ptrType3045;
    panda$core$String* cast3048;
    panda$core$String* load3062;
    panda$core$String* ptr3081;
    panda$core$String* baseType3085;
    panda$core$String* ptrType3090;
    panda$core$String* cast3093;
    panda$core$String* indexStruct3107;
    panda$core$String* index3111;
    panda$core$String* offsetPtr3122;
    panda$core$String* load3144;
    panda$core$String* ptr3163;
    panda$core$String* ptrCast3167;
    panda$core$String* countStruct3178;
    panda$core$String* count3182;
    panda$core$String* size3193;
    panda$core$String* realloc3215;
    panda$core$String* result3235;
    panda$core$String* ptr3255;
    panda$core$String* baseType3259;
    panda$core$String* offsetStruct3265;
    panda$core$String* offset3269;
    panda$core$String* result3280;
    m2957 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload);
    {
        $match$458542958 = ((org$pandalanguage$pandac$Symbol*) m2957->value)->name;
        panda$core$Bit $tmp2960 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$458542958, &$s2959);
        if ($tmp2960.value) {
        {
            panda$core$Object* $tmp2962 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp2964 = (($fn2963) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp2962), p_out);
            countStruct2961 = $tmp2964;
            panda$core$String* $tmp2967 = (($fn2966) self->$class->vtable[4])(self);
            count2965 = $tmp2967;
            panda$core$String* $tmp2969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2968, count2965);
            panda$core$String* $tmp2971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2969, &$s2970);
            panda$core$String* $tmp2972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2971, countStruct2961);
            panda$core$String* $tmp2974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2972, &$s2973);
            (($fn2975) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2974);
            panda$core$String* $tmp2978 = (($fn2977) self->$class->vtable[4])(self);
            size2976 = $tmp2978;
            org$pandalanguage$pandac$Type* $tmp2981 = (($fn2980) m2957->$class->vtable[5])(m2957);
            panda$core$Object* $tmp2983 = (($fn2982) $tmp2981->subtypes->$class->vtable[2])($tmp2981->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp2985 = (($fn2984) self->$class->vtable[10])(self, ((org$pandalanguage$pandac$Type*) $tmp2983));
            elementSize2979 = $tmp2985;
            panda$core$String* $tmp2987 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2986, size2976);
            panda$core$String* $tmp2989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2987, &$s2988);
            panda$core$String* $tmp2991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2989, &$s2990);
            panda$core$String* $tmp2993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2991, &$s2992);
            panda$core$String* $tmp2994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2993, count2965);
            panda$core$String* $tmp2996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2994, &$s2995);
            panda$core$String* $tmp2997 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2996, ((panda$core$Object*) wrap_panda$core$Int64(elementSize2979)));
            panda$core$String* $tmp2999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2997, &$s2998);
            (($fn3000) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp2999);
            panda$core$String* $tmp3003 = (($fn3002) self->$class->vtable[4])(self);
            malloc3001 = $tmp3003;
            panda$core$String* $tmp3005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3004, malloc3001);
            panda$core$String* $tmp3007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3005, &$s3006);
            panda$core$String* $tmp3009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3007, &$s3008);
            panda$core$String* $tmp3011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3009, &$s3010);
            panda$core$String* $tmp3012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3011, size2976);
            panda$core$String* $tmp3014 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3012, &$s3013);
            (($fn3015) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3014);
            panda$core$String* $tmp3018 = (($fn3017) self->$class->vtable[4])(self);
            result3016 = $tmp3018;
            panda$core$String* $tmp3020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3019, result3016);
            panda$core$String* $tmp3022 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3020, &$s3021);
            panda$core$String* $tmp3023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3022, malloc3001);
            panda$core$String* $tmp3025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3023, &$s3024);
            org$pandalanguage$pandac$Type* $tmp3027 = (($fn3026) m2957->$class->vtable[5])(m2957);
            panda$core$String* $tmp3029 = (($fn3028) self->$class->vtable[15])(self, $tmp3027);
            panda$core$String* $tmp3030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3025, $tmp3029);
            panda$core$String* $tmp3032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3030, &$s3031);
            (($fn3033) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3032);
            return result3016;
        }
        }
        else {
        panda$core$Bit $tmp3035 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$458542958, &$s3034);
        if ($tmp3035.value) {
        {
            panda$core$Object* $tmp3037 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3039 = (($fn3038) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3037), p_out);
            ptr3036 = $tmp3039;
            org$pandalanguage$pandac$Type* $tmp3042 = (($fn3041) m2957->$class->vtable[5])(m2957);
            panda$core$String* $tmp3044 = (($fn3043) self->$class->vtable[15])(self, $tmp3042);
            baseType3040 = $tmp3044;
            panda$core$String* $tmp3047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType3040, &$s3046);
            ptrType3045 = $tmp3047;
            panda$core$String* $tmp3050 = (($fn3049) self->$class->vtable[4])(self);
            cast3048 = $tmp3050;
            panda$core$String* $tmp3052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3051, cast3048);
            panda$core$String* $tmp3054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3052, &$s3053);
            panda$core$String* $tmp3055 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3054, ptr3036);
            panda$core$String* $tmp3057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3055, &$s3056);
            panda$core$String* $tmp3058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3057, ptrType3045);
            panda$core$String* $tmp3060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3058, &$s3059);
            (($fn3061) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3060);
            panda$core$String* $tmp3064 = (($fn3063) self->$class->vtable[4])(self);
            load3062 = $tmp3064;
            panda$core$String* $tmp3066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3065, load3062);
            panda$core$String* $tmp3068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3066, &$s3067);
            panda$core$String* $tmp3069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3068, baseType3040);
            panda$core$String* $tmp3071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3069, &$s3070);
            panda$core$String* $tmp3072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3071, ptrType3045);
            panda$core$String* $tmp3074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3072, &$s3073);
            panda$core$String* $tmp3075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3074, cast3048);
            panda$core$String* $tmp3077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3075, &$s3076);
            (($fn3078) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3077);
            return load3062;
        }
        }
        else {
        panda$core$Bit $tmp3080 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$458542958, &$s3079);
        if ($tmp3080.value) {
        {
            panda$core$Object* $tmp3082 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3084 = (($fn3083) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3082), p_out);
            ptr3081 = $tmp3084;
            org$pandalanguage$pandac$Type* $tmp3087 = (($fn3086) m2957->$class->vtable[5])(m2957);
            panda$core$String* $tmp3089 = (($fn3088) self->$class->vtable[15])(self, $tmp3087);
            baseType3085 = $tmp3089;
            panda$core$String* $tmp3092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(baseType3085, &$s3091);
            ptrType3090 = $tmp3092;
            panda$core$String* $tmp3095 = (($fn3094) self->$class->vtable[4])(self);
            cast3093 = $tmp3095;
            panda$core$String* $tmp3097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3096, cast3093);
            panda$core$String* $tmp3099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3097, &$s3098);
            panda$core$String* $tmp3100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3099, ptr3081);
            panda$core$String* $tmp3102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3100, &$s3101);
            panda$core$String* $tmp3103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3102, ptrType3090);
            panda$core$String* $tmp3105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3103, &$s3104);
            (($fn3106) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3105);
            panda$core$Object* $tmp3108 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3110 = (($fn3109) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3108), p_out);
            indexStruct3107 = $tmp3110;
            panda$core$String* $tmp3113 = (($fn3112) self->$class->vtable[4])(self);
            index3111 = $tmp3113;
            panda$core$String* $tmp3115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3114, index3111);
            panda$core$String* $tmp3117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3115, &$s3116);
            panda$core$String* $tmp3118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3117, indexStruct3107);
            panda$core$String* $tmp3120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3118, &$s3119);
            (($fn3121) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3120);
            panda$core$String* $tmp3124 = (($fn3123) self->$class->vtable[4])(self);
            offsetPtr3122 = $tmp3124;
            panda$core$String* $tmp3126 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3125, offsetPtr3122);
            panda$core$String* $tmp3128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3126, &$s3127);
            panda$core$String* $tmp3129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3128, baseType3085);
            panda$core$String* $tmp3131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3129, &$s3130);
            panda$core$String* $tmp3132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3131, ptrType3090);
            panda$core$String* $tmp3134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3132, &$s3133);
            panda$core$String* $tmp3135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3134, cast3093);
            panda$core$String* $tmp3137 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3135, &$s3136);
            panda$core$String* $tmp3139 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3138, index3111);
            panda$core$String* $tmp3141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3139, &$s3140);
            panda$core$String* $tmp3142 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3137, $tmp3141);
            (($fn3143) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3142);
            panda$core$String* $tmp3146 = (($fn3145) self->$class->vtable[4])(self);
            load3144 = $tmp3146;
            panda$core$String* $tmp3148 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3147, load3144);
            panda$core$String* $tmp3150 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3148, &$s3149);
            panda$core$String* $tmp3151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3150, baseType3085);
            panda$core$String* $tmp3153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3151, &$s3152);
            panda$core$String* $tmp3154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3153, ptrType3090);
            panda$core$String* $tmp3156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3154, &$s3155);
            panda$core$String* $tmp3157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3156, offsetPtr3122);
            panda$core$String* $tmp3159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3157, &$s3158);
            (($fn3160) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3159);
            return load3144;
        }
        }
        else {
        panda$core$Bit $tmp3162 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$458542958, &$s3161);
        if ($tmp3162.value) {
        {
            panda$core$Object* $tmp3164 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3166 = (($fn3165) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3164), p_out);
            ptr3163 = $tmp3166;
            panda$core$String* $tmp3169 = (($fn3168) self->$class->vtable[4])(self);
            ptrCast3167 = $tmp3169;
            panda$core$String* $tmp3171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3170, ptrCast3167);
            panda$core$String* $tmp3173 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3171, &$s3172);
            panda$core$String* $tmp3174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3173, ptr3163);
            panda$core$String* $tmp3176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3174, &$s3175);
            (($fn3177) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3176);
            panda$core$Object* $tmp3179 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3181 = (($fn3180) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3179), p_out);
            countStruct3178 = $tmp3181;
            panda$core$String* $tmp3184 = (($fn3183) self->$class->vtable[4])(self);
            count3182 = $tmp3184;
            panda$core$String* $tmp3186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3185, count3182);
            panda$core$String* $tmp3188 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3186, &$s3187);
            panda$core$String* $tmp3189 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3188, countStruct3178);
            panda$core$String* $tmp3191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3189, &$s3190);
            (($fn3192) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3191);
            panda$core$String* $tmp3195 = (($fn3194) self->$class->vtable[4])(self);
            size3193 = $tmp3195;
            panda$core$String* $tmp3197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3196, size3193);
            panda$core$String* $tmp3199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3197, &$s3198);
            panda$core$String* $tmp3201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3199, &$s3200);
            panda$core$String* $tmp3203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3201, &$s3202);
            panda$core$String* $tmp3204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3203, count3182);
            panda$core$String* $tmp3206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3204, &$s3205);
            org$pandalanguage$pandac$Type* $tmp3208 = (($fn3207) m2957->$class->vtable[5])(m2957);
            panda$core$Object* $tmp3210 = (($fn3209) $tmp3208->subtypes->$class->vtable[2])($tmp3208->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$Int64 $tmp3212 = (($fn3211) self->$class->vtable[10])(self, ((org$pandalanguage$pandac$Type*) $tmp3210));
            panda$core$String* $tmp3213 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3206, ((panda$core$Object*) wrap_panda$core$Int64($tmp3212)));
            (($fn3214) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3213);
            panda$core$String* $tmp3217 = (($fn3216) self->$class->vtable[4])(self);
            realloc3215 = $tmp3217;
            panda$core$String* $tmp3219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3218, realloc3215);
            panda$core$String* $tmp3221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3219, &$s3220);
            panda$core$String* $tmp3222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3221, ptrCast3167);
            panda$core$String* $tmp3224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3222, &$s3223);
            panda$core$String* $tmp3226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3224, &$s3225);
            panda$core$String* $tmp3228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3226, &$s3227);
            panda$core$String* $tmp3230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3229, size3193);
            panda$core$String* $tmp3232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3230, &$s3231);
            panda$core$String* $tmp3233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3228, $tmp3232);
            (($fn3234) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3233);
            panda$core$String* $tmp3237 = (($fn3236) self->$class->vtable[4])(self);
            result3235 = $tmp3237;
            panda$core$String* $tmp3239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3238, result3235);
            panda$core$String* $tmp3241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3239, &$s3240);
            panda$core$String* $tmp3242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3241, realloc3215);
            panda$core$String* $tmp3244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3242, &$s3243);
            org$pandalanguage$pandac$Type* $tmp3246 = (($fn3245) m2957->$class->vtable[5])(m2957);
            panda$core$String* $tmp3248 = (($fn3247) self->$class->vtable[15])(self, $tmp3246);
            panda$core$String* $tmp3249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3244, $tmp3248);
            panda$core$String* $tmp3251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3249, &$s3250);
            (($fn3252) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3251);
            return result3235;
        }
        }
        else {
        panda$core$Bit $tmp3254 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$458542958, &$s3253);
        if ($tmp3254.value) {
        {
            panda$core$Object* $tmp3256 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp3258 = (($fn3257) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3256), p_out);
            ptr3255 = $tmp3258;
            panda$core$Object* $tmp3260 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3262 = (($fn3261) ((org$pandalanguage$pandac$IRNode*) $tmp3260)->type->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp3260)->type->subtypes, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3264 = (($fn3263) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp3262));
            baseType3259 = $tmp3264;
            panda$core$Object* $tmp3266 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3268 = (($fn3267) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3266), p_out);
            offsetStruct3265 = $tmp3268;
            panda$core$String* $tmp3271 = (($fn3270) self->$class->vtable[4])(self);
            offset3269 = $tmp3271;
            panda$core$String* $tmp3273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3272, offset3269);
            panda$core$String* $tmp3275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3273, &$s3274);
            panda$core$String* $tmp3276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3275, offsetStruct3265);
            panda$core$String* $tmp3278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3276, &$s3277);
            (($fn3279) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3278);
            panda$core$String* $tmp3282 = (($fn3281) self->$class->vtable[4])(self);
            result3280 = $tmp3282;
            panda$core$String* $tmp3284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3283, result3280);
            panda$core$String* $tmp3286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3284, &$s3285);
            panda$core$String* $tmp3287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3286, baseType3259);
            panda$core$String* $tmp3289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3287, &$s3288);
            panda$core$String* $tmp3290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3289, ptr3255);
            panda$core$String* $tmp3292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3290, &$s3291);
            panda$core$String* $tmp3293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3292, offset3269);
            panda$core$String* $tmp3295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3293, &$s3294);
            (($fn3296) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3295);
            return result3280;
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
    org$pandalanguage$pandac$MethodDecl* m3297;
    panda$core$String* selfRef3300;
    panda$core$Int64 argStart3302;
    panda$collections$Array* args3308;
    panda$core$Range $tmp3311;
    panda$core$String* end3345;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline3348;
    org$pandalanguage$pandac$MethodDecl* old3356;
    panda$core$String* phi3370;
    panda$core$String* separator3383;
    panda$collections$Iterator* ret$Iter3385;
    org$pandalanguage$pandac$LLVMCodeGenerator$Pair* ret3397;
    m3297 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    (($fn3298) self->compiler->currentFile->$class->vtable[2])(self->compiler->currentFile, ((panda$core$Object*) m3297->owner->source));
    (($fn3299) self->currentlyInlining->$class->vtable[5])(self->currentlyInlining, ((panda$core$Object*) m3297), ((panda$core$Object*) m3297));
    selfRef3300 = &$s3301;
    panda$core$Bit $tmp3304 = (($fn3303) m3297->$class->vtable[4])(m3297);
    if ($tmp3304.value) {
    {
        argStart3302 = ((panda$core$Int64) { 1 });
        panda$core$Object* $tmp3305 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3307 = (($fn3306) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3305), p_out);
        selfRef3300 = $tmp3307;
    }
    }
    else {
    {
        argStart3302 = ((panda$core$Int64) { 0 });
    }
    }
    panda$collections$Array* $tmp3309 = (panda$collections$Array*) malloc(40);
    $tmp3309->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3309->refCount.value = 1;
    panda$collections$Array$init($tmp3309);
    args3308 = $tmp3309;
    panda$core$Int64 $tmp3312 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3311, ((panda$core$Object*) wrap_panda$core$Int64(argStart3302)), ((panda$core$Object*) wrap_panda$core$Int64($tmp3312)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3314 = ((panda$core$Int64$wrapper*) $tmp3311.start)->value.value;
    panda$core$Int64 i3313 = { $tmp3314 };
    int64_t $tmp3316 = ((panda$core$Int64$wrapper*) $tmp3311.end)->value.value;
    int64_t $tmp3317 = $tmp3311.step.value;
    bool $tmp3318 = $tmp3311.inclusive.value;
    bool $tmp3325 = $tmp3317 > 0;
    if ($tmp3325) goto $l3323; else goto $l3324;
    $l3323:;
    if ($tmp3318) goto $l3326; else goto $l3327;
    $l3326:;
    if ($tmp3314 <= $tmp3316) goto $l3319; else goto $l3321;
    $l3327:;
    if ($tmp3314 < $tmp3316) goto $l3319; else goto $l3321;
    $l3324:;
    if ($tmp3318) goto $l3328; else goto $l3329;
    $l3328:;
    if ($tmp3314 >= $tmp3316) goto $l3319; else goto $l3321;
    $l3329:;
    if ($tmp3314 > $tmp3316) goto $l3319; else goto $l3321;
    $l3319:;
    {
        panda$core$Object* $tmp3331 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3313);
        panda$core$String* $tmp3333 = (($fn3332) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3331), p_out);
        panda$collections$Array$add$panda$collections$Array$T(args3308, ((panda$core$Object*) $tmp3333));
    }
    $l3322:;
    if ($tmp3325) goto $l3335; else goto $l3336;
    $l3335:;
    int64_t $tmp3337 = $tmp3316 - i3313.value;
    if ($tmp3318) goto $l3338; else goto $l3339;
    $l3338:;
    if ($tmp3337 >= $tmp3317) goto $l3334; else goto $l3321;
    $l3339:;
    if ($tmp3337 > $tmp3317) goto $l3334; else goto $l3321;
    $l3336:;
    int64_t $tmp3341 = i3313.value - $tmp3316;
    if ($tmp3318) goto $l3342; else goto $l3343;
    $l3342:;
    if ($tmp3341 >= -$tmp3317) goto $l3334; else goto $l3321;
    $l3343:;
    if ($tmp3341 > -$tmp3317) goto $l3334; else goto $l3321;
    $l3334:;
    i3313.value += $tmp3317;
    goto $l3319;
    $l3321:;
    panda$core$String* $tmp3347 = (($fn3346) self->$class->vtable[5])(self);
    end3345 = $tmp3347;
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* $tmp3349 = (org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) malloc(56);
    $tmp3349->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$class;
    $tmp3349->refCount.value = 1;
    panda$core$String* $tmp3352 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3351, ((panda$core$Object*) wrap_panda$core$Int64(self->varCount)));
    panda$core$String* $tmp3354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3352, &$s3353);
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String($tmp3349, $tmp3354, selfRef3300, ((panda$collections$ListView*) args3308), end3345);
    inline3348 = $tmp3349;
    (($fn3355) self->inlineContext->$class->vtable[2])(self->inlineContext, ((panda$core$Object*) inline3348));
    old3356 = self->currentMethod;
    self->currentMethod = m3297;
    (($fn3357) self->$class->vtable[68])(self, p_body, p_out);
    self->currentMethod = old3356;
    (($fn3358) self->inlineContext->$class->vtable[3])(self->inlineContext);
    panda$core$Bit $tmp3360 = (($fn3359) self->$class->vtable[7])(self, p_body);
    panda$core$Bit $tmp3361 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3360);
    if ($tmp3361.value) {
    {
        (($fn3363) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3362);
    }
    }
    (($fn3364) self->$class->vtable[6])(self, end3345, p_out);
    (($fn3365) self->currentlyInlining->$class->vtable[6])(self->currentlyInlining, ((panda$core$Object*) m3297));
    (($fn3366) self->compiler->currentFile->$class->vtable[3])(self->compiler->currentFile);
    panda$core$Int64 $tmp3367 = panda$collections$Array$get_count$R$panda$core$Int64(inline3348->returns);
    panda$core$Bit $tmp3368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3367, ((panda$core$Int64) { 1 }));
    if ($tmp3368.value) {
    {
        panda$core$Object* $tmp3369 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(inline3348->returns, ((panda$core$Int64) { 0 }));
        return ((panda$core$String*) ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp3369)->second);
    }
    }
    panda$core$String* $tmp3372 = (($fn3371) self->$class->vtable[4])(self);
    phi3370 = $tmp3372;
    panda$core$String* $tmp3374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3373, phi3370);
    panda$core$String* $tmp3376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3374, &$s3375);
    panda$core$String* $tmp3378 = (($fn3377) self->$class->vtable[15])(self, m3297->returnType);
    panda$core$String* $tmp3379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3376, $tmp3378);
    panda$core$String* $tmp3381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3379, &$s3380);
    (($fn3382) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3381);
    separator3383 = &$s3384;
    {
        ITable* $tmp3386 = ((panda$collections$Iterable*) inline3348->returns)->$class->itable;
        while ($tmp3386->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3386 = $tmp3386->next;
        }
        $fn3388 $tmp3387 = $tmp3386->methods[0];
        panda$collections$Iterator* $tmp3389 = $tmp3387(((panda$collections$Iterable*) inline3348->returns));
        ret$Iter3385 = $tmp3389;
        $l3390:;
        ITable* $tmp3392 = ret$Iter3385->$class->itable;
        while ($tmp3392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3392 = $tmp3392->next;
        }
        $fn3394 $tmp3393 = $tmp3392->methods[0];
        panda$core$Bit $tmp3395 = $tmp3393(ret$Iter3385);
        panda$core$Bit $tmp3396 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3395);
        if (!$tmp3396.value) goto $l3391;
        {
            ITable* $tmp3398 = ret$Iter3385->$class->itable;
            while ($tmp3398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3398 = $tmp3398->next;
            }
            $fn3400 $tmp3399 = $tmp3398->methods[1];
            panda$core$Object* $tmp3401 = $tmp3399(ret$Iter3385);
            ret3397 = ((org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) $tmp3401);
            panda$core$String* $tmp3403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3402, separator3383);
            panda$core$String* $tmp3405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3403, &$s3404);
            panda$core$String* $tmp3406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3405, ((panda$core$String*) ret3397->second));
            panda$core$String* $tmp3408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3406, &$s3407);
            panda$core$String* $tmp3409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3408, ((panda$core$String*) ret3397->first));
            panda$core$String* $tmp3411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3409, &$s3410);
            (($fn3412) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3411);
            separator3383 = &$s3413;
        }
        goto $l3390;
        $l3391:;
    }
    (($fn3414) ((panda$io$OutputStream*) p_out)->$class->vtable[17])(((panda$io$OutputStream*) p_out));
    return phi3370;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCallReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_call, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodDecl* m3415;
    panda$core$String* bit3425;
    panda$core$String* result3430;
    panda$core$String* bit3445;
    panda$core$String* result3450;
    org$pandalanguage$pandac$IRNode* block3470;
    panda$collections$Array* args3476;
    org$pandalanguage$pandac$Type* actualMethodType3480;
    panda$core$String* actualResultType3481;
    panda$core$Bit isSuper3482;
    panda$core$Int64 offset3509;
    panda$core$Range $tmp3515;
    panda$core$String* arg3535;
    panda$core$String* target3580;
    panda$core$String* methodRef3584;
    panda$core$String* result3587;
    panda$core$Bit indirect3588;
    panda$core$String* separator3618;
    panda$core$String* indirectVar3620;
    panda$collections$Iterator* arg$Iter3641;
    panda$core$String* arg3653;
    m3415 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp3417 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3415->owner)->name, &$s3416);
    if ($tmp3417.value) {
    {
        panda$core$String* $tmp3419 = (($fn3418) self->$class->vtable[44])(self, p_call, p_out);
        return $tmp3419;
    }
    }
    if (m3415->owner->external.value) {
    {
        (($fn3420) self->$class->vtable[87])(self, m3415);
    }
    }
    panda$core$Bit $tmp3422 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3415->owner)->name, &$s3421);
    if ($tmp3422.value) {
    {
        panda$core$Bit $tmp3424 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3415)->name, &$s3423);
        if ($tmp3424.value) {
        {
            panda$core$Object* $tmp3426 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3427 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3429 = (($fn3428) self->$class->vtable[33])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3426), ((org$pandalanguage$pandac$IRNode*) $tmp3427), p_out);
            bit3425 = $tmp3429;
            panda$core$String* $tmp3432 = (($fn3431) self->$class->vtable[4])(self);
            result3430 = $tmp3432;
            panda$core$String* $tmp3434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3433, result3430);
            panda$core$String* $tmp3436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3434, &$s3435);
            panda$core$String* $tmp3438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3437, bit3425);
            panda$core$String* $tmp3440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3438, &$s3439);
            panda$core$String* $tmp3441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3436, $tmp3440);
            (($fn3442) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3441);
            return result3430;
        }
        }
        panda$core$Bit $tmp3444 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m3415)->name, &$s3443);
        if ($tmp3444.value) {
        {
            panda$core$Object* $tmp3446 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
            panda$core$Object* $tmp3447 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp3449 = (($fn3448) self->$class->vtable[34])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3446), ((org$pandalanguage$pandac$IRNode*) $tmp3447), p_out);
            bit3445 = $tmp3449;
            panda$core$String* $tmp3452 = (($fn3451) self->$class->vtable[4])(self);
            result3450 = $tmp3452;
            panda$core$String* $tmp3454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3453, result3450);
            panda$core$String* $tmp3456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3454, &$s3455);
            panda$core$String* $tmp3458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3457, bit3445);
            panda$core$String* $tmp3460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3458, &$s3459);
            panda$core$String* $tmp3461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3456, $tmp3460);
            (($fn3462) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3461);
            return result3450;
        }
        }
    }
    }
    panda$core$Bit $tmp3465 = (($fn3464) m3415->annotations->$class->vtable[11])(m3415->annotations);
    bool $tmp3463 = $tmp3465.value;
    if (!$tmp3463) goto $l3466;
    panda$core$Object* $tmp3468 = (($fn3467) self->currentlyInlining->$class->vtable[3])(self->currentlyInlining, ((panda$core$Object*) m3415));
    $tmp3463 = ((panda$core$Bit) { ((org$pandalanguage$pandac$MethodDecl*) $tmp3468) == NULL }).value;
    $l3466:;
    panda$core$Bit $tmp3469 = { $tmp3463 };
    if ($tmp3469.value) {
    {
        org$pandalanguage$pandac$IRNode* $tmp3472 = (($fn3471) self->compiler->$class->vtable[88])(self->compiler, m3415);
        block3470 = $tmp3472;
        if (((panda$core$Bit) { block3470 != NULL }).value) {
        {
            panda$core$String* $tmp3474 = (($fn3473) self->$class->vtable[45])(self, p_call, block3470, p_out);
            return $tmp3474;
        }
        }
        return &$s3475;
    }
    }
    panda$collections$Array* $tmp3477 = (panda$collections$Array*) malloc(40);
    $tmp3477->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp3477->refCount.value = 1;
    panda$core$Int64 $tmp3479 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$collections$Array$init$panda$core$Int64($tmp3477, $tmp3479);
    args3476 = $tmp3477;
    panda$core$Int64 $tmp3484 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp3485 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp3484, ((panda$core$Int64) { 1 }));
    bool $tmp3483 = $tmp3485.value;
    if (!$tmp3483) goto $l3486;
    panda$core$Object* $tmp3487 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp3488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp3487)->kind, ((panda$core$Int64) { 1024 }));
    $tmp3483 = $tmp3488.value;
    $l3486:;
    panda$core$Bit $tmp3489 = { $tmp3483 };
    isSuper3482 = $tmp3489;
    panda$core$Bit $tmp3491 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper3482);
    bool $tmp3490 = $tmp3491.value;
    if (!$tmp3490) goto $l3492;
    panda$core$Bit $tmp3494 = (($fn3493) m3415->$class->vtable[3])(m3415);
    $tmp3490 = $tmp3494.value;
    $l3492:;
    panda$core$Bit $tmp3495 = { $tmp3490 };
    if ($tmp3495.value) {
    {
        org$pandalanguage$pandac$Type* $tmp3497 = (($fn3496) self->compiler->$class->vtable[45])(self->compiler, m3415);
        actualMethodType3480 = $tmp3497;
        panda$core$Int64 $tmp3499 = (($fn3498) actualMethodType3480->subtypes->$class->vtable[3])(actualMethodType3480->subtypes);
        panda$core$Int64 $tmp3500 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3499, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3502 = (($fn3501) actualMethodType3480->subtypes->$class->vtable[2])(actualMethodType3480->subtypes, $tmp3500);
        panda$core$String* $tmp3504 = (($fn3503) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp3502));
        actualResultType3481 = $tmp3504;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp3506 = (($fn3505) self->compiler->$class->vtable[43])(self->compiler, m3415);
        actualMethodType3480 = $tmp3506;
        panda$core$String* $tmp3508 = (($fn3507) self->$class->vtable[15])(self, p_call->type);
        actualResultType3481 = $tmp3508;
    }
    }
    panda$core$Int64 $tmp3510 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp3512 = (($fn3511) actualMethodType3480->subtypes->$class->vtable[3])(actualMethodType3480->subtypes);
    panda$core$Int64 $tmp3513 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3510, $tmp3512);
    panda$core$Int64 $tmp3514 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp3513, ((panda$core$Int64) { 1 }));
    offset3509 = $tmp3514;
    panda$core$Int64 $tmp3516 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3515, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp3516)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp3518 = ((panda$core$Int64$wrapper*) $tmp3515.start)->value.value;
    panda$core$Int64 i3517 = { $tmp3518 };
    int64_t $tmp3520 = ((panda$core$Int64$wrapper*) $tmp3515.end)->value.value;
    int64_t $tmp3521 = $tmp3515.step.value;
    bool $tmp3522 = $tmp3515.inclusive.value;
    bool $tmp3529 = $tmp3521 > 0;
    if ($tmp3529) goto $l3527; else goto $l3528;
    $l3527:;
    if ($tmp3522) goto $l3530; else goto $l3531;
    $l3530:;
    if ($tmp3518 <= $tmp3520) goto $l3523; else goto $l3525;
    $l3531:;
    if ($tmp3518 < $tmp3520) goto $l3523; else goto $l3525;
    $l3528:;
    if ($tmp3522) goto $l3532; else goto $l3533;
    $l3532:;
    if ($tmp3518 >= $tmp3520) goto $l3523; else goto $l3525;
    $l3533:;
    if ($tmp3518 > $tmp3520) goto $l3523; else goto $l3525;
    $l3523:;
    {
        panda$core$Object* $tmp3536 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3517);
        panda$core$String* $tmp3538 = (($fn3537) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3536), p_out);
        arg3535 = $tmp3538;
        panda$core$Bit $tmp3540 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i3517, offset3509);
        bool $tmp3539 = $tmp3540.value;
        if (!$tmp3539) goto $l3541;
        panda$core$Int64 $tmp3542 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3517, offset3509);
        panda$core$Object* $tmp3544 = (($fn3543) actualMethodType3480->subtypes->$class->vtable[2])(actualMethodType3480->subtypes, $tmp3542);
        panda$core$Object* $tmp3545 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3517);
        panda$core$Bit $tmp3547 = (($fn3546) ((org$pandalanguage$pandac$Type*) $tmp3544)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp3544), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp3545)->type));
        $tmp3539 = $tmp3547.value;
        $l3541:;
        panda$core$Bit $tmp3548 = { $tmp3539 };
        if ($tmp3548.value) {
        {
            panda$core$Int64 $tmp3549 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3517, offset3509);
            panda$core$Object* $tmp3551 = (($fn3550) actualMethodType3480->subtypes->$class->vtable[2])(actualMethodType3480->subtypes, $tmp3549);
            panda$core$String* $tmp3553 = (($fn3552) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp3551));
            panda$core$String* $tmp3555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3553, &$s3554);
            panda$core$Object* $tmp3556 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3517);
            panda$core$Int64 $tmp3557 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i3517, offset3509);
            panda$core$Object* $tmp3559 = (($fn3558) actualMethodType3480->subtypes->$class->vtable[2])(actualMethodType3480->subtypes, $tmp3557);
            panda$core$String* $tmp3561 = (($fn3560) self->$class->vtable[52])(self, arg3535, ((org$pandalanguage$pandac$IRNode*) $tmp3556)->type, ((org$pandalanguage$pandac$Type*) $tmp3559), p_out);
            panda$core$String* $tmp3562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3555, $tmp3561);
            arg3535 = $tmp3562;
        }
        }
        else {
        {
            panda$core$Object* $tmp3563 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i3517);
            panda$core$String* $tmp3565 = (($fn3564) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3563)->type);
            panda$core$String* $tmp3567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3565, &$s3566);
            panda$core$String* $tmp3568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3567, arg3535);
            arg3535 = $tmp3568;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args3476, ((panda$core$Object*) arg3535));
    }
    $l3526:;
    if ($tmp3529) goto $l3570; else goto $l3571;
    $l3570:;
    int64_t $tmp3572 = $tmp3520 - i3517.value;
    if ($tmp3522) goto $l3573; else goto $l3574;
    $l3573:;
    if ($tmp3572 >= $tmp3521) goto $l3569; else goto $l3525;
    $l3574:;
    if ($tmp3572 > $tmp3521) goto $l3569; else goto $l3525;
    $l3571:;
    int64_t $tmp3576 = i3517.value - $tmp3520;
    if ($tmp3522) goto $l3577; else goto $l3578;
    $l3577:;
    if ($tmp3576 >= -$tmp3521) goto $l3569; else goto $l3525;
    $l3578:;
    if ($tmp3576 > -$tmp3521) goto $l3569; else goto $l3525;
    $l3569:;
    i3517.value += $tmp3521;
    goto $l3523;
    $l3525:;
    panda$core$Int64 $tmp3581 = panda$collections$Array$get_count$R$panda$core$Int64(args3476);
    panda$core$Bit $tmp3582 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp3581, ((panda$core$Int64) { 0 }));
    if ($tmp3582.value) {
    {
        panda$core$Object* $tmp3583 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args3476, ((panda$core$Int64) { 0 }));
        target3580 = ((panda$core$String*) $tmp3583);
    }
    }
    else {
    {
        target3580 = NULL;
    }
    }
    panda$core$String* $tmp3586 = (($fn3585) self->$class->vtable[43])(self, target3580, m3415, isSuper3482, p_out);
    methodRef3584 = $tmp3586;
    panda$core$Bit $tmp3590 = (($fn3589) self->$class->vtable[24])(self, m3415);
    indirect3588 = $tmp3590;
    if (indirect3588.value) {
    {
        panda$core$String* $tmp3593 = (($fn3592) self->$class->vtable[40])(self, m3415);
        panda$core$String* $tmp3594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3591, $tmp3593);
        panda$core$String* $tmp3596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3594, &$s3595);
        (($fn3597) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3596);
    }
    }
    else {
    {
        panda$core$String* $tmp3599 = (($fn3598) self->$class->vtable[4])(self);
        result3587 = $tmp3599;
        panda$core$String* $tmp3601 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3600, result3587);
        panda$core$String* $tmp3603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3601, &$s3602);
        panda$core$String* $tmp3605 = (($fn3604) self->$class->vtable[40])(self, m3415);
        panda$core$String* $tmp3606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3603, $tmp3605);
        panda$core$String* $tmp3608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3606, &$s3607);
        panda$core$String* $tmp3609 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3608, actualResultType3481);
        panda$core$String* $tmp3611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3609, &$s3610);
        (($fn3612) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3611);
    }
    }
    panda$core$String* $tmp3614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3613, methodRef3584);
    panda$core$String* $tmp3616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3614, &$s3615);
    (($fn3617) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3616);
    separator3618 = &$s3619;
    if (indirect3588.value) {
    {
        panda$core$Int64 $tmp3621 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp3621;
        panda$core$String* $tmp3623 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s3622, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar3620 = $tmp3623;
        panda$core$String* $tmp3625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3624, indirectVar3620);
        panda$core$String* $tmp3627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3625, &$s3626);
        panda$core$String* $tmp3628 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3627, actualResultType3481);
        panda$core$String* $tmp3630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3628, &$s3629);
        (($fn3631) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp3630);
        panda$core$String* $tmp3633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3632, actualResultType3481);
        panda$core$String* $tmp3635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3633, &$s3634);
        panda$core$String* $tmp3636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3635, indirectVar3620);
        panda$core$String* $tmp3638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3636, &$s3637);
        (($fn3639) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3638);
        separator3618 = &$s3640;
    }
    }
    {
        ITable* $tmp3642 = ((panda$collections$Iterable*) args3476)->$class->itable;
        while ($tmp3642->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp3642 = $tmp3642->next;
        }
        $fn3644 $tmp3643 = $tmp3642->methods[0];
        panda$collections$Iterator* $tmp3645 = $tmp3643(((panda$collections$Iterable*) args3476));
        arg$Iter3641 = $tmp3645;
        $l3646:;
        ITable* $tmp3648 = arg$Iter3641->$class->itable;
        while ($tmp3648->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp3648 = $tmp3648->next;
        }
        $fn3650 $tmp3649 = $tmp3648->methods[0];
        panda$core$Bit $tmp3651 = $tmp3649(arg$Iter3641);
        panda$core$Bit $tmp3652 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp3651);
        if (!$tmp3652.value) goto $l3647;
        {
            ITable* $tmp3654 = arg$Iter3641->$class->itable;
            while ($tmp3654->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp3654 = $tmp3654->next;
            }
            $fn3656 $tmp3655 = $tmp3654->methods[1];
            panda$core$Object* $tmp3657 = $tmp3655(arg$Iter3641);
            arg3653 = ((panda$core$String*) $tmp3657);
            panda$core$String* $tmp3659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3658, separator3618);
            panda$core$String* $tmp3661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3659, &$s3660);
            panda$core$String* $tmp3662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3661, arg3653);
            panda$core$String* $tmp3664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3662, &$s3663);
            (($fn3665) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp3664);
            separator3618 = &$s3666;
        }
        goto $l3646;
        $l3647:;
    }
    (($fn3668) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s3667);
    if (indirect3588.value) {
    {
        panda$core$String* $tmp3670 = (($fn3669) self->$class->vtable[4])(self);
        result3587 = $tmp3670;
        panda$core$String* $tmp3672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3671, result3587);
        panda$core$String* $tmp3674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3672, &$s3673);
        panda$core$String* $tmp3675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3674, actualResultType3481);
        panda$core$String* $tmp3677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3675, &$s3676);
        panda$core$String* $tmp3678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3677, actualResultType3481);
        panda$core$String* $tmp3680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3678, &$s3679);
        panda$core$String* $tmp3681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3680, indirectVar3620);
        (($fn3682) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3681);
    }
    }
    panda$core$String* $tmp3684 = (($fn3683) self->$class->vtable[15])(self, p_call->type);
    panda$core$Bit $tmp3685 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit($tmp3684, actualResultType3481);
    if ($tmp3685.value) {
    {
        panda$core$Int64 $tmp3687 = (($fn3686) actualMethodType3480->subtypes->$class->vtable[3])(actualMethodType3480->subtypes);
        panda$core$Int64 $tmp3688 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp3687, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp3690 = (($fn3689) actualMethodType3480->subtypes->$class->vtable[2])(actualMethodType3480->subtypes, $tmp3688);
        panda$core$String* $tmp3692 = (($fn3691) self->$class->vtable[52])(self, result3587, ((org$pandalanguage$pandac$Type*) $tmp3690), p_call->type, p_out);
        return $tmp3692;
    }
    }
    return result3587;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$wrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* src3693;
    panda$core$String* testStart3697;
    panda$core$String* isNonNull3698;
    panda$core$String* nonNullLabel3714;
    panda$core$String* endLabel3717;
    panda$core$String* unwrapped3732;
    panda$core$String* nonNullValue3737;
    panda$core$String* result3748;
    panda$core$String* mallocRef3772;
    panda$core$String* wrapperTypeName3787;
    panda$core$String* wrapperType3792;
    panda$core$String* wrapperCast3797;
    panda$core$String* classPtr3811;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc3830;
    panda$core$String* refCount3846;
    panda$core$String* target3870;
    panda$core$String* result3910;
    org$pandalanguage$pandac$ClassDecl* $tmp3695 = (($fn3694) self->compiler->$class->vtable[13])(self->compiler, p_srcType);
    src3693 = $tmp3695;
    panda$core$Bit $tmp3696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_srcType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp3696.value) {
    {
        testStart3697 = self->currentBlock;
        panda$core$String* $tmp3700 = (($fn3699) self->$class->vtable[4])(self);
        isNonNull3698 = $tmp3700;
        panda$core$String* $tmp3702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3701, isNonNull3698);
        panda$core$String* $tmp3704 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3702, &$s3703);
        panda$core$String* $tmp3706 = (($fn3705) self->$class->vtable[19])(self, p_srcType);
        panda$core$String* $tmp3707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3704, $tmp3706);
        panda$core$String* $tmp3709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3707, &$s3708);
        panda$core$String* $tmp3710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3709, p_value);
        panda$core$String* $tmp3712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3710, &$s3711);
        (($fn3713) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3712);
        panda$core$String* $tmp3716 = (($fn3715) self->$class->vtable[5])(self);
        nonNullLabel3714 = $tmp3716;
        panda$core$String* $tmp3719 = (($fn3718) self->$class->vtable[5])(self);
        endLabel3717 = $tmp3719;
        panda$core$String* $tmp3721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3720, isNonNull3698);
        panda$core$String* $tmp3723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3721, &$s3722);
        panda$core$String* $tmp3724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3723, nonNullLabel3714);
        panda$core$String* $tmp3726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3724, &$s3725);
        panda$core$String* $tmp3727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3726, endLabel3717);
        panda$core$String* $tmp3729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3727, &$s3728);
        (($fn3730) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3729);
        (($fn3731) self->$class->vtable[6])(self, nonNullLabel3714, p_out);
        panda$core$Object* $tmp3734 = (($fn3733) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3736 = (($fn3735) self->$class->vtable[51])(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp3734), p_out);
        unwrapped3732 = $tmp3736;
        panda$core$Object* $tmp3739 = (($fn3738) p_srcType->subtypes->$class->vtable[2])(p_srcType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3741 = (($fn3740) self->$class->vtable[47])(self, unwrapped3732, ((org$pandalanguage$pandac$Type*) $tmp3739), p_dstType, p_out);
        nonNullValue3737 = $tmp3741;
        panda$core$String* $tmp3743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3742, endLabel3717);
        panda$core$String* $tmp3745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3743, &$s3744);
        (($fn3746) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3745);
        (($fn3747) self->$class->vtable[6])(self, endLabel3717, p_out);
        panda$core$String* $tmp3750 = (($fn3749) self->$class->vtable[4])(self);
        result3748 = $tmp3750;
        panda$core$String* $tmp3752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3751, result3748);
        panda$core$String* $tmp3754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3752, &$s3753);
        panda$core$String* $tmp3756 = (($fn3755) self->$class->vtable[15])(self, p_dstType);
        panda$core$String* $tmp3757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3754, $tmp3756);
        panda$core$String* $tmp3759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3757, &$s3758);
        panda$core$String* $tmp3760 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3759, testStart3697);
        panda$core$String* $tmp3762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3760, &$s3761);
        panda$core$String* $tmp3764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3763, nonNullValue3737);
        panda$core$String* $tmp3766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3764, &$s3765);
        panda$core$String* $tmp3767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3766, nonNullLabel3714);
        panda$core$String* $tmp3769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3767, &$s3768);
        panda$core$String* $tmp3770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3762, $tmp3769);
        (($fn3771) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3770);
        return result3748;
    }
    }
    panda$core$String* $tmp3774 = (($fn3773) self->$class->vtable[4])(self);
    mallocRef3772 = $tmp3774;
    panda$core$String* $tmp3776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3775, mallocRef3772);
    panda$core$String* $tmp3778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3776, &$s3777);
    org$pandalanguage$pandac$Type* $tmp3780 = (($fn3779) src3693->$class->vtable[3])(src3693);
    panda$core$Int64 $tmp3782 = (($fn3781) self->$class->vtable[11])(self, $tmp3780);
    panda$core$String* $tmp3783 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp3778, ((panda$core$Object*) wrap_panda$core$Int64($tmp3782)));
    panda$core$String* $tmp3785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3783, &$s3784);
    (($fn3786) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3785);
    org$pandalanguage$pandac$Type* $tmp3789 = (($fn3788) src3693->$class->vtable[3])(src3693);
    panda$core$String* $tmp3791 = (($fn3790) self->$class->vtable[16])(self, $tmp3789);
    wrapperTypeName3787 = $tmp3791;
    org$pandalanguage$pandac$Type* $tmp3794 = (($fn3793) src3693->$class->vtable[3])(src3693);
    panda$core$String* $tmp3796 = (($fn3795) self->$class->vtable[17])(self, $tmp3794);
    wrapperType3792 = $tmp3796;
    panda$core$String* $tmp3799 = (($fn3798) self->$class->vtable[4])(self);
    wrapperCast3797 = $tmp3799;
    panda$core$String* $tmp3801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3800, wrapperCast3797);
    panda$core$String* $tmp3803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3801, &$s3802);
    panda$core$String* $tmp3804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3803, mallocRef3772);
    panda$core$String* $tmp3806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3804, &$s3805);
    panda$core$String* $tmp3807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3806, wrapperType3792);
    panda$core$String* $tmp3809 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3807, &$s3808);
    (($fn3810) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3809);
    panda$core$String* $tmp3813 = (($fn3812) self->$class->vtable[4])(self);
    classPtr3811 = $tmp3813;
    panda$core$String* $tmp3815 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3814, classPtr3811);
    panda$core$String* $tmp3817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3815, &$s3816);
    panda$core$String* $tmp3818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3817, wrapperTypeName3787);
    panda$core$String* $tmp3820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3818, &$s3819);
    panda$core$String* $tmp3822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3821, wrapperType3792);
    panda$core$String* $tmp3824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3822, &$s3823);
    panda$core$String* $tmp3825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3824, wrapperCast3797);
    panda$core$String* $tmp3827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3825, &$s3826);
    panda$core$String* $tmp3828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3820, $tmp3827);
    (($fn3829) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3828);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp3832 = (($fn3831) self->$class->vtable[27])(self, src3693);
    cc3830 = $tmp3832;
    panda$core$String* $tmp3834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3833, cc3830->type);
    panda$core$String* $tmp3836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3834, &$s3835);
    panda$core$String* $tmp3837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3836, cc3830->name);
    panda$core$String* $tmp3839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3837, &$s3838);
    panda$core$String* $tmp3841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3840, classPtr3811);
    panda$core$String* $tmp3843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3841, &$s3842);
    panda$core$String* $tmp3844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3839, $tmp3843);
    (($fn3845) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3844);
    panda$core$String* $tmp3848 = (($fn3847) self->$class->vtable[4])(self);
    refCount3846 = $tmp3848;
    panda$core$String* $tmp3850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3849, refCount3846);
    panda$core$String* $tmp3852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3850, &$s3851);
    panda$core$String* $tmp3853 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3852, wrapperTypeName3787);
    panda$core$String* $tmp3855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3853, &$s3854);
    panda$core$String* $tmp3857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3856, wrapperType3792);
    panda$core$String* $tmp3859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3857, &$s3858);
    panda$core$String* $tmp3860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3859, wrapperCast3797);
    panda$core$String* $tmp3862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3860, &$s3861);
    panda$core$String* $tmp3863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3855, $tmp3862);
    (($fn3864) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3863);
    panda$core$String* $tmp3866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3865, refCount3846);
    panda$core$String* $tmp3868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3866, &$s3867);
    (($fn3869) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3868);
    panda$core$String* $tmp3872 = (($fn3871) self->$class->vtable[4])(self);
    target3870 = $tmp3872;
    panda$core$String* $tmp3874 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3873, target3870);
    panda$core$String* $tmp3876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3874, &$s3875);
    panda$core$String* $tmp3877 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3876, wrapperTypeName3787);
    panda$core$String* $tmp3879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3877, &$s3878);
    panda$core$String* $tmp3881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3880, wrapperType3792);
    panda$core$String* $tmp3883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3881, &$s3882);
    panda$core$String* $tmp3884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3883, wrapperCast3797);
    panda$core$String* $tmp3886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3884, &$s3885);
    panda$core$String* $tmp3887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3879, $tmp3886);
    (($fn3888) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3887);
    panda$core$String* $tmp3891 = (($fn3890) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp3892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3889, $tmp3891);
    panda$core$String* $tmp3894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3892, &$s3893);
    panda$core$String* $tmp3895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3894, p_value);
    panda$core$String* $tmp3897 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3895, &$s3896);
    panda$core$String* $tmp3899 = (($fn3898) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp3900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3897, $tmp3899);
    panda$core$String* $tmp3902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3900, &$s3901);
    panda$core$String* $tmp3903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3902, target3870);
    panda$core$String* $tmp3905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3903, &$s3904);
    (($fn3906) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3905);
    panda$core$String* $tmp3908 = (($fn3907) self->$class->vtable[15])(self, p_dstType);
    panda$core$Bit $tmp3909 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(wrapperType3792, $tmp3908);
    if ($tmp3909.value) {
    {
        panda$core$String* $tmp3912 = (($fn3911) self->$class->vtable[4])(self);
        result3910 = $tmp3912;
        panda$core$String* $tmp3914 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3913, result3910);
        panda$core$String* $tmp3916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3914, &$s3915);
        panda$core$String* $tmp3917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3916, wrapperType3792);
        panda$core$String* $tmp3919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3917, &$s3918);
        panda$core$String* $tmp3920 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3919, wrapperCast3797);
        panda$core$String* $tmp3922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3920, &$s3921);
        panda$core$String* $tmp3924 = (($fn3923) self->$class->vtable[15])(self, p_dstType);
        panda$core$String* $tmp3925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3922, $tmp3924);
        panda$core$String* $tmp3927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3925, &$s3926);
        (($fn3928) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp3927);
        return result3910;
    }
    }
    return wrapperCast3797;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getFieldReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_fieldRef, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$FieldDecl* field3929;
    panda$core$String* t3930;
    org$pandalanguage$pandac$ClassDecl* cl3937;
    panda$core$String* base3943;
    panda$collections$ListView* fields3947;
    panda$core$Int64$nullable index3950;
    panda$core$Range $tmp3951;
    panda$core$String* result3989;
    panda$core$String* ptr4011;
    panda$core$String* result4021;
    field3929 = ((org$pandalanguage$pandac$FieldDecl*) p_fieldRef->payload);
    panda$core$String* $tmp3932 = (($fn3931) self->$class->vtable[15])(self, field3929->type);
    t3930 = $tmp3932;
    panda$core$Bit $tmp3934 = (($fn3933) field3929->annotations->$class->vtable[5])(field3929->annotations);
    if ($tmp3934.value) {
    {
        panda$core$String* $tmp3936 = (($fn3935) self->$class->vtable[66])(self, field3929->value, p_out);
        return $tmp3936;
    }
    }
    panda$core$Object* $tmp3938 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp3940 = (($fn3939) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp3938)->type);
    cl3937 = $tmp3940;
    panda$core$Bit $tmp3942 = (($fn3941) self->compiler->$class->vtable[9])(self->compiler, cl3937);
    if ($tmp3942.value) {
    {
        panda$core$Object* $tmp3944 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3946 = (($fn3945) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3944), p_out);
        base3943 = $tmp3946;
        panda$collections$ListView* $tmp3949 = (($fn3948) self->compiler->$class->vtable[10])(self->compiler, cl3937);
        fields3947 = $tmp3949;
        index3950 = ((panda$core$Int64$nullable) { .nonnull = false });
        ITable* $tmp3952 = ((panda$collections$CollectionView*) fields3947)->$class->itable;
        while ($tmp3952->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
            $tmp3952 = $tmp3952->next;
        }
        $fn3954 $tmp3953 = $tmp3952->methods[0];
        panda$core$Int64 $tmp3955 = $tmp3953(((panda$collections$CollectionView*) fields3947));
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp3951, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp3955)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
        int64_t $tmp3957 = ((panda$core$Int64$wrapper*) $tmp3951.start)->value.value;
        panda$core$Int64 i3956 = { $tmp3957 };
        int64_t $tmp3959 = ((panda$core$Int64$wrapper*) $tmp3951.end)->value.value;
        int64_t $tmp3960 = $tmp3951.step.value;
        bool $tmp3961 = $tmp3951.inclusive.value;
        bool $tmp3968 = $tmp3960 > 0;
        if ($tmp3968) goto $l3966; else goto $l3967;
        $l3966:;
        if ($tmp3961) goto $l3969; else goto $l3970;
        $l3969:;
        if ($tmp3957 <= $tmp3959) goto $l3962; else goto $l3964;
        $l3970:;
        if ($tmp3957 < $tmp3959) goto $l3962; else goto $l3964;
        $l3967:;
        if ($tmp3961) goto $l3971; else goto $l3972;
        $l3971:;
        if ($tmp3957 >= $tmp3959) goto $l3962; else goto $l3964;
        $l3972:;
        if ($tmp3957 > $tmp3959) goto $l3962; else goto $l3964;
        $l3962:;
        {
            ITable* $tmp3974 = fields3947->$class->itable;
            while ($tmp3974->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp3974 = $tmp3974->next;
            }
            $fn3976 $tmp3975 = $tmp3974->methods[0];
            panda$core$Object* $tmp3977 = $tmp3975(fields3947, i3956);
            if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$FieldDecl*) $tmp3977)) == ((panda$core$Object*) field3929) }).value) {
            {
                index3950 = ((panda$core$Int64$nullable) { i3956, true });
                goto $l3964;
            }
            }
        }
        $l3965:;
        if ($tmp3968) goto $l3979; else goto $l3980;
        $l3979:;
        int64_t $tmp3981 = $tmp3959 - i3956.value;
        if ($tmp3961) goto $l3982; else goto $l3983;
        $l3982:;
        if ($tmp3981 >= $tmp3960) goto $l3978; else goto $l3964;
        $l3983:;
        if ($tmp3981 > $tmp3960) goto $l3978; else goto $l3964;
        $l3980:;
        int64_t $tmp3985 = i3956.value - $tmp3959;
        if ($tmp3961) goto $l3986; else goto $l3987;
        $l3986:;
        if ($tmp3985 >= -$tmp3960) goto $l3978; else goto $l3964;
        $l3987:;
        if ($tmp3985 > -$tmp3960) goto $l3978; else goto $l3964;
        $l3978:;
        i3956.value += $tmp3960;
        goto $l3962;
        $l3964:;
        panda$core$String* $tmp3991 = (($fn3990) self->$class->vtable[4])(self);
        result3989 = $tmp3991;
        panda$core$String* $tmp3993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s3992, result3989);
        panda$core$String* $tmp3995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3993, &$s3994);
        panda$core$Object* $tmp3996 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_fieldRef->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp3998 = (($fn3997) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp3996)->type);
        panda$core$String* $tmp3999 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3995, $tmp3998);
        panda$core$String* $tmp4001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp3999, &$s4000);
        panda$core$String* $tmp4002 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4001, base3943);
        panda$core$String* $tmp4004 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4002, &$s4003);
        panda$core$String* $tmp4006 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4005, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) index3950.value))));
        panda$core$String* $tmp4008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4006, &$s4007);
        panda$core$String* $tmp4009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4004, $tmp4008);
        (($fn4010) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4009);
        return result3989;
    }
    }
    panda$core$String* $tmp4013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4012, t3930);
    panda$core$String* $tmp4015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4013, &$s4014);
    panda$core$String* $tmp4017 = (($fn4016) self->$class->vtable[78])(self, p_fieldRef, p_out);
    panda$core$String* $tmp4018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4015, $tmp4017);
    panda$core$String* $tmp4020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4018, &$s4019);
    ptr4011 = $tmp4020;
    panda$core$String* $tmp4023 = (($fn4022) self->$class->vtable[4])(self);
    result4021 = $tmp4023;
    panda$core$String* $tmp4025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4024, result4021);
    panda$core$String* $tmp4027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4025, &$s4026);
    panda$core$String* $tmp4028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4027, t3930);
    panda$core$String* $tmp4030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4028, &$s4029);
    panda$core$String* $tmp4031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4030, ptr4011);
    panda$core$String* $tmp4033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4031, &$s4032);
    (($fn4034) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4033);
    return result4021;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$unwrapValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* target4035;
    panda$core$String* testStart4039;
    panda$core$String* isNonNull4040;
    panda$core$String* nonNullLabel4056;
    panda$core$String* endLabel4059;
    panda$core$String* wrapped4074;
    panda$core$String* nonNullValue4079;
    panda$core$String* result4090;
    panda$core$String* targetType4123;
    panda$core$String* wrapperTypeName4126;
    panda$core$String* wrapperType4129;
    panda$core$String* srcCast4132;
    panda$core$String* load4151;
    panda$core$String* result4168;
    org$pandalanguage$pandac$ClassDecl* $tmp4037 = (($fn4036) self->compiler->$class->vtable[13])(self->compiler, p_dstType);
    target4035 = $tmp4037;
    panda$core$Bit $tmp4038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_dstType->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp4038.value) {
    {
        testStart4039 = self->currentBlock;
        panda$core$String* $tmp4042 = (($fn4041) self->$class->vtable[4])(self);
        isNonNull4040 = $tmp4042;
        panda$core$String* $tmp4044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4043, isNonNull4040);
        panda$core$String* $tmp4046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4044, &$s4045);
        panda$core$String* $tmp4048 = (($fn4047) self->$class->vtable[15])(self, p_srcType);
        panda$core$String* $tmp4049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4046, $tmp4048);
        panda$core$String* $tmp4051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4049, &$s4050);
        panda$core$String* $tmp4052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4051, p_value);
        panda$core$String* $tmp4054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4052, &$s4053);
        (($fn4055) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4054);
        panda$core$String* $tmp4058 = (($fn4057) self->$class->vtable[5])(self);
        nonNullLabel4056 = $tmp4058;
        panda$core$String* $tmp4061 = (($fn4060) self->$class->vtable[5])(self);
        endLabel4059 = $tmp4061;
        panda$core$String* $tmp4063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4062, isNonNull4040);
        panda$core$String* $tmp4065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4063, &$s4064);
        panda$core$String* $tmp4066 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4065, nonNullLabel4056);
        panda$core$String* $tmp4068 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4066, &$s4067);
        panda$core$String* $tmp4069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4068, endLabel4059);
        panda$core$String* $tmp4071 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4069, &$s4070);
        (($fn4072) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4071);
        (($fn4073) self->$class->vtable[6])(self, nonNullLabel4056, p_out);
        panda$core$Object* $tmp4076 = (($fn4075) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4078 = (($fn4077) self->$class->vtable[49])(self, p_value, p_srcType, ((org$pandalanguage$pandac$Type*) $tmp4076), p_out);
        wrapped4074 = $tmp4078;
        panda$core$Object* $tmp4081 = (($fn4080) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4083 = (($fn4082) self->$class->vtable[50])(self, wrapped4074, ((org$pandalanguage$pandac$Type*) $tmp4081), p_dstType, p_out);
        nonNullValue4079 = $tmp4083;
        panda$core$String* $tmp4085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4084, endLabel4059);
        panda$core$String* $tmp4087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4085, &$s4086);
        (($fn4088) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4087);
        (($fn4089) self->$class->vtable[6])(self, endLabel4059, p_out);
        panda$core$String* $tmp4092 = (($fn4091) self->$class->vtable[4])(self);
        result4090 = $tmp4092;
        panda$core$String* $tmp4094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4093, result4090);
        panda$core$String* $tmp4096 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4094, &$s4095);
        panda$core$String* $tmp4098 = (($fn4097) self->$class->vtable[15])(self, p_dstType);
        panda$core$String* $tmp4099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4096, $tmp4098);
        panda$core$String* $tmp4101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4099, &$s4100);
        panda$core$Object* $tmp4104 = (($fn4103) p_dstType->subtypes->$class->vtable[2])(p_dstType->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4106 = (($fn4105) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp4104));
        panda$core$String* $tmp4107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4102, $tmp4106);
        panda$core$String* $tmp4109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4107, &$s4108);
        panda$core$String* $tmp4110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4101, $tmp4109);
        panda$core$String* $tmp4112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4111, testStart4039);
        panda$core$String* $tmp4114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4112, &$s4113);
        panda$core$String* $tmp4115 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4114, nonNullValue4079);
        panda$core$String* $tmp4117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4115, &$s4116);
        panda$core$String* $tmp4118 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4117, nonNullLabel4056);
        panda$core$String* $tmp4120 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4118, &$s4119);
        panda$core$String* $tmp4121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4110, $tmp4120);
        (($fn4122) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4121);
        return result4090;
    }
    }
    panda$core$String* $tmp4125 = (($fn4124) self->$class->vtable[15])(self, p_dstType);
    targetType4123 = $tmp4125;
    panda$core$String* $tmp4128 = (($fn4127) self->$class->vtable[16])(self, p_dstType);
    wrapperTypeName4126 = $tmp4128;
    panda$core$String* $tmp4131 = (($fn4130) self->$class->vtable[17])(self, p_dstType);
    wrapperType4129 = $tmp4131;
    panda$core$String* $tmp4134 = (($fn4133) self->$class->vtable[4])(self);
    srcCast4132 = $tmp4134;
    panda$core$String* $tmp4136 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4135, srcCast4132);
    panda$core$String* $tmp4138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4136, &$s4137);
    panda$core$String* $tmp4140 = (($fn4139) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4138, $tmp4140);
    panda$core$String* $tmp4143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4141, &$s4142);
    panda$core$String* $tmp4144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4143, p_value);
    panda$core$String* $tmp4146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4144, &$s4145);
    panda$core$String* $tmp4147 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4146, wrapperType4129);
    panda$core$String* $tmp4149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4147, &$s4148);
    (($fn4150) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4149);
    panda$core$String* $tmp4153 = (($fn4152) self->$class->vtable[4])(self);
    load4151 = $tmp4153;
    panda$core$String* $tmp4155 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4154, load4151);
    panda$core$String* $tmp4157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4155, &$s4156);
    panda$core$String* $tmp4158 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4157, wrapperTypeName4126);
    panda$core$String* $tmp4160 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4158, &$s4159);
    panda$core$String* $tmp4161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4160, wrapperType4129);
    panda$core$String* $tmp4163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4161, &$s4162);
    panda$core$String* $tmp4164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4163, srcCast4132);
    panda$core$String* $tmp4166 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4164, &$s4165);
    (($fn4167) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4166);
    panda$core$String* $tmp4170 = (($fn4169) self->$class->vtable[4])(self);
    result4168 = $tmp4170;
    panda$core$String* $tmp4172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4171, result4168);
    panda$core$String* $tmp4174 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4172, &$s4173);
    panda$core$String* $tmp4175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4174, wrapperTypeName4126);
    panda$core$String* $tmp4177 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4175, &$s4176);
    panda$core$String* $tmp4178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4177, load4151);
    panda$core$String* $tmp4180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4178, &$s4179);
    panda$core$String* $tmp4181 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4180, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp4183 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4181, &$s4182);
    (($fn4184) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4183);
    return result4168;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* nullableType4185;
    panda$core$String* result4188;
    panda$core$String* $tmp4187 = (($fn4186) self->$class->vtable[19])(self, p_dstType);
    nullableType4185 = $tmp4187;
    panda$core$String* $tmp4190 = (($fn4189) self->$class->vtable[4])(self);
    result4188 = $tmp4190;
    panda$core$String* $tmp4192 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4191, result4188);
    panda$core$String* $tmp4194 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4192, &$s4193);
    panda$core$String* $tmp4195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4194, nullableType4185);
    panda$core$String* $tmp4197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4195, &$s4196);
    panda$core$String* $tmp4200 = (($fn4199) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4198, $tmp4200);
    panda$core$String* $tmp4203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4201, &$s4202);
    panda$core$String* $tmp4205 = (($fn4204) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4206 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4203, $tmp4205);
    panda$core$String* $tmp4208 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4206, &$s4207);
    panda$core$String* $tmp4209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4208, p_value);
    panda$core$String* $tmp4211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4209, &$s4210);
    panda$core$String* $tmp4212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4197, $tmp4211);
    (($fn4213) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4212);
    return result4188;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$toNonNullableValue$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_srcType, org$pandalanguage$pandac$Type* p_dstType, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4214;
    panda$core$String* $tmp4216 = (($fn4215) self->$class->vtable[4])(self);
    result4214 = $tmp4216;
    panda$core$String* $tmp4218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4217, result4214);
    panda$core$String* $tmp4220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4218, &$s4219);
    panda$core$String* $tmp4222 = (($fn4221) self->$class->vtable[15])(self, p_srcType);
    panda$core$String* $tmp4223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4220, $tmp4222);
    panda$core$String* $tmp4225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4223, &$s4224);
    panda$core$String* $tmp4226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4225, p_value);
    panda$core$String* $tmp4228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4226, &$s4227);
    (($fn4229) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4228);
    return result4214;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$panda$core$String$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_value, org$pandalanguage$pandac$Type* p_src, org$pandalanguage$pandac$Type* p_target, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* op4230;
    panda$core$Int64 size14233;
    panda$core$Int64 size24236;
    org$pandalanguage$pandac$ClassDecl* srcClass4245;
    org$pandalanguage$pandac$ClassDecl* targetClass4248;
    panda$core$String* srcType4302;
    panda$core$String* dstType4305;
    panda$core$String* result4309;
    panda$core$Bit $tmp4232 = (($fn4231) p_target->$class->vtable[7])(p_target);
    if ($tmp4232.value) {
    {
        panda$core$Int64 $tmp4235 = (($fn4234) self->$class->vtable[10])(self, p_src);
        size14233 = $tmp4235;
        panda$core$Int64 $tmp4238 = (($fn4237) self->$class->vtable[10])(self, p_target);
        size24236 = $tmp4238;
        panda$core$Bit $tmp4239 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit(size14233, size24236);
        if ($tmp4239.value) {
        {
            op4230 = &$s4240;
        }
        }
        else {
        panda$core$Bit $tmp4241 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(size14233, size24236);
        if ($tmp4241.value) {
        {
            panda$core$Bit $tmp4242 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 12 }));
            if ($tmp4242.value) {
            {
                op4230 = &$s4243;
            }
            }
            else {
            {
                op4230 = &$s4244;
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
        org$pandalanguage$pandac$ClassDecl* $tmp4247 = (($fn4246) self->compiler->$class->vtable[13])(self->compiler, p_src);
        srcClass4245 = $tmp4247;
        org$pandalanguage$pandac$ClassDecl* $tmp4250 = (($fn4249) self->compiler->$class->vtable[13])(self->compiler, p_target);
        targetClass4248 = $tmp4250;
        panda$core$Bit $tmp4253 = (($fn4252) self->compiler->$class->vtable[9])(self->compiler, srcClass4245);
        bool $tmp4251 = $tmp4253.value;
        if (!$tmp4251) goto $l4254;
        panda$core$Bit $tmp4256 = (($fn4255) self->compiler->$class->vtable[9])(self->compiler, targetClass4248);
        panda$core$Bit $tmp4257 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4256);
        $tmp4251 = $tmp4257.value;
        $l4254:;
        panda$core$Bit $tmp4258 = { $tmp4251 };
        if ($tmp4258.value) {
        {
            panda$core$String* $tmp4260 = (($fn4259) self->$class->vtable[47])(self, p_value, p_src, p_target, p_out);
            return $tmp4260;
        }
        }
        else {
        panda$core$Bit $tmp4263 = (($fn4262) self->compiler->$class->vtable[9])(self->compiler, srcClass4245);
        panda$core$Bit $tmp4264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4263);
        bool $tmp4261 = $tmp4264.value;
        if (!$tmp4261) goto $l4265;
        panda$core$Bit $tmp4267 = (($fn4266) self->compiler->$class->vtable[9])(self->compiler, targetClass4248);
        $tmp4261 = $tmp4267.value;
        $l4265:;
        panda$core$Bit $tmp4268 = { $tmp4261 };
        if ($tmp4268.value) {
        {
            panda$core$String* $tmp4270 = (($fn4269) self->$class->vtable[49])(self, p_value, p_src, p_target, p_out);
            return $tmp4270;
        }
        }
        else {
        panda$core$Bit $tmp4274 = (($fn4273) self->compiler->$class->vtable[9])(self->compiler, srcClass4245);
        bool $tmp4272 = $tmp4274.value;
        if (!$tmp4272) goto $l4275;
        panda$core$Bit $tmp4276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_target->typeKind, ((panda$core$Int64) { 11 }));
        $tmp4272 = $tmp4276.value;
        $l4275:;
        panda$core$Bit $tmp4277 = { $tmp4272 };
        bool $tmp4271 = $tmp4277.value;
        if (!$tmp4271) goto $l4278;
        panda$core$Object* $tmp4280 = (($fn4279) p_target->subtypes->$class->vtable[2])(p_target->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4282 = (($fn4281) ((org$pandalanguage$pandac$Type*) $tmp4280)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp4280), ((panda$core$Object*) p_src));
        $tmp4271 = $tmp4282.value;
        $l4278:;
        panda$core$Bit $tmp4283 = { $tmp4271 };
        if ($tmp4283.value) {
        {
            panda$core$String* $tmp4285 = (($fn4284) self->$class->vtable[50])(self, p_value, p_src, p_target, p_out);
            return $tmp4285;
        }
        }
        else {
        panda$core$Bit $tmp4289 = (($fn4288) self->compiler->$class->vtable[9])(self->compiler, targetClass4248);
        bool $tmp4287 = $tmp4289.value;
        if (!$tmp4287) goto $l4290;
        panda$core$Bit $tmp4291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_src->typeKind, ((panda$core$Int64) { 11 }));
        $tmp4287 = $tmp4291.value;
        $l4290:;
        panda$core$Bit $tmp4292 = { $tmp4287 };
        bool $tmp4286 = $tmp4292.value;
        if (!$tmp4286) goto $l4293;
        panda$core$Object* $tmp4295 = (($fn4294) p_src->subtypes->$class->vtable[2])(p_src->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4297 = (($fn4296) ((org$pandalanguage$pandac$Type*) $tmp4295)->$class->vtable[4])(((org$pandalanguage$pandac$Type*) $tmp4295), ((panda$core$Object*) p_target));
        $tmp4286 = $tmp4297.value;
        $l4293:;
        panda$core$Bit $tmp4298 = { $tmp4286 };
        if ($tmp4298.value) {
        {
            panda$core$String* $tmp4300 = (($fn4299) self->$class->vtable[51])(self, p_value, p_src, p_target, p_out);
            return $tmp4300;
        }
        }
        }
        }
        }
        op4230 = &$s4301;
    }
    }
    panda$core$String* $tmp4304 = (($fn4303) self->$class->vtable[15])(self, p_src);
    srcType4302 = $tmp4304;
    panda$core$String* $tmp4307 = (($fn4306) self->$class->vtable[15])(self, p_target);
    dstType4305 = $tmp4307;
    panda$core$Bit $tmp4308 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(srcType4302, dstType4305);
    if ($tmp4308.value) {
    {
        return p_value;
    }
    }
    panda$core$String* $tmp4311 = (($fn4310) self->$class->vtable[4])(self);
    result4309 = $tmp4311;
    panda$core$String* $tmp4313 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4312, result4309);
    panda$core$String* $tmp4315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4313, &$s4314);
    panda$core$String* $tmp4316 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4315, op4230);
    panda$core$String* $tmp4318 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4316, &$s4317);
    panda$core$String* $tmp4319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4318, srcType4302);
    panda$core$String* $tmp4321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4319, &$s4320);
    panda$core$String* $tmp4322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4321, p_value);
    panda$core$String* $tmp4324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4322, &$s4323);
    panda$core$String* $tmp4325 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4324, dstType4305);
    panda$core$String* $tmp4327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4325, &$s4326);
    (($fn4328) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4327);
    return result4309;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getCastReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_cast, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4329;
    panda$core$Object* $tmp4330 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4332 = (($fn4331) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4330), p_out);
    base4329 = $tmp4332;
    panda$core$Object* $tmp4333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_cast->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4335 = (($fn4334) self->$class->vtable[52])(self, base4329, ((org$pandalanguage$pandac$IRNode*) $tmp4333)->type, p_cast->type, p_out);
    return $tmp4335;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getConstructReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_construct, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4336;
    panda$core$String* t4339;
    panda$core$String* value4344;
    panda$core$String* result4356;
    org$pandalanguage$pandac$FieldDecl* lastField4359;
    panda$core$String* value4384;
    panda$core$String* result4396;
    org$pandalanguage$pandac$FieldDecl* lastField4399;
    panda$core$String* alloca4424;
    panda$core$String* result4446;
    panda$core$String* callRef4463;
    panda$core$String* result4476;
    panda$core$String* classPtr4492;
    panda$core$String* className4495;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4519;
    org$pandalanguage$pandac$ClassDecl* $tmp4338 = (($fn4337) self->compiler->$class->vtable[13])(self->compiler, p_construct->type);
    cl4336 = $tmp4338;
    panda$core$String* $tmp4341 = (($fn4340) self->$class->vtable[15])(self, p_construct->type);
    t4339 = $tmp4341;
    panda$core$Bit $tmp4343 = (($fn4342) p_construct->type->$class->vtable[6])(p_construct->type);
    if ($tmp4343.value) {
    {
        panda$core$Object* $tmp4345 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4346 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4345)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4348 = (($fn4347) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4346), p_out);
        value4344 = $tmp4348;
        panda$core$Object* $tmp4349 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4350 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4349)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4350)->kind, ((panda$core$Int64) { 1004 }));
        if ($tmp4351.value) {
        {
            panda$core$String* $tmp4353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4352, value4344);
            panda$core$String* $tmp4355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4353, &$s4354);
            return $tmp4355;
        }
        }
        panda$core$String* $tmp4358 = (($fn4357) self->$class->vtable[4])(self);
        result4356 = $tmp4358;
        panda$core$Int64 $tmp4360 = panda$collections$Array$get_count$R$panda$core$Int64(cl4336->fields);
        panda$core$Int64 $tmp4361 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4360, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4362 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl4336->fields, $tmp4361);
        lastField4359 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4362);
        panda$core$String* $tmp4364 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4363, result4356);
        panda$core$String* $tmp4366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4364, &$s4365);
        panda$core$String* $tmp4367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4366, t4339);
        panda$core$String* $tmp4369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4367, &$s4368);
        panda$core$String* $tmp4371 = (($fn4370) self->$class->vtable[15])(self, lastField4359->type);
        panda$core$String* $tmp4372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4369, $tmp4371);
        panda$core$String* $tmp4374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4372, &$s4373);
        panda$core$String* $tmp4376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4375, value4344);
        panda$core$String* $tmp4378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4376, &$s4377);
        panda$core$String* $tmp4379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4374, $tmp4378);
        (($fn4380) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4379);
        return result4356;
    }
    }
    org$pandalanguage$pandac$Type* $tmp4381 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
    panda$core$Bit $tmp4383 = (($fn4382) p_construct->type->$class->vtable[4])(p_construct->type, ((panda$core$Object*) $tmp4381));
    if ($tmp4383.value) {
    {
        panda$core$Object* $tmp4385 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4386 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4385)->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4388 = (($fn4387) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4386), p_out);
        value4384 = $tmp4388;
        panda$core$Object* $tmp4389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$Object* $tmp4390 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(((org$pandalanguage$pandac$IRNode*) $tmp4389)->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4390)->kind, ((panda$core$Int64) { 1011 }));
        if ($tmp4391.value) {
        {
            panda$core$String* $tmp4393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4392, value4384);
            panda$core$String* $tmp4395 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4393, &$s4394);
            return $tmp4395;
        }
        }
        panda$core$String* $tmp4398 = (($fn4397) self->$class->vtable[4])(self);
        result4396 = $tmp4398;
        panda$core$Int64 $tmp4400 = panda$collections$Array$get_count$R$panda$core$Int64(cl4336->fields);
        panda$core$Int64 $tmp4401 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp4400, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp4402 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(cl4336->fields, $tmp4401);
        lastField4399 = ((org$pandalanguage$pandac$FieldDecl*) $tmp4402);
        panda$core$String* $tmp4404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4403, result4396);
        panda$core$String* $tmp4406 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4404, &$s4405);
        panda$core$String* $tmp4407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4406, t4339);
        panda$core$String* $tmp4409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4407, &$s4408);
        panda$core$String* $tmp4411 = (($fn4410) self->$class->vtable[15])(self, lastField4399->type);
        panda$core$String* $tmp4412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4409, $tmp4411);
        panda$core$String* $tmp4414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4412, &$s4413);
        panda$core$String* $tmp4416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4415, value4384);
        panda$core$String* $tmp4418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4416, &$s4417);
        panda$core$String* $tmp4419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4414, $tmp4418);
        (($fn4420) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4419);
        return result4396;
    }
    }
    panda$core$Bit $tmp4422 = (($fn4421) self->compiler->$class->vtable[9])(self->compiler, cl4336);
    if ($tmp4422.value) {
    {
        panda$core$Int64 $tmp4423 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp4423;
        panda$core$String* $tmp4426 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4425, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        panda$core$String* $tmp4428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4426, &$s4427);
        alloca4424 = $tmp4428;
        panda$core$String* $tmp4430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4429, alloca4424);
        panda$core$String* $tmp4432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4430, &$s4431);
        panda$core$String* $tmp4433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4432, t4339);
        panda$core$String* $tmp4435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4433, &$s4434);
        (($fn4436) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp4435);
        panda$core$Object* $tmp4437 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4438, t4339);
        panda$core$String* $tmp4441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4439, &$s4440);
        panda$core$String* $tmp4442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4441, alloca4424);
        panda$core$String* $tmp4444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4442, &$s4443);
        (($fn4445) self->$class->vtable[70])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4437), $tmp4444, p_out);
        panda$core$String* $tmp4448 = (($fn4447) self->$class->vtable[4])(self);
        result4446 = $tmp4448;
        panda$core$String* $tmp4450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4449, result4446);
        panda$core$String* $tmp4452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4450, &$s4451);
        panda$core$String* $tmp4453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4452, t4339);
        panda$core$String* $tmp4455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4453, &$s4454);
        panda$core$String* $tmp4456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4455, t4339);
        panda$core$String* $tmp4458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4456, &$s4457);
        panda$core$String* $tmp4459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4458, alloca4424);
        panda$core$String* $tmp4461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4459, &$s4460);
        (($fn4462) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4461);
        return result4446;
    }
    }
    panda$core$String* $tmp4465 = (($fn4464) self->$class->vtable[4])(self);
    callRef4463 = $tmp4465;
    panda$core$String* $tmp4467 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4466, callRef4463);
    panda$core$String* $tmp4469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4467, &$s4468);
    panda$core$Int64 $tmp4471 = (($fn4470) self->$class->vtable[10])(self, p_construct->type);
    panda$core$String* $tmp4472 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4469, ((panda$core$Object*) wrap_panda$core$Int64($tmp4471)));
    panda$core$String* $tmp4474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4472, &$s4473);
    (($fn4475) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4474);
    panda$core$String* $tmp4478 = (($fn4477) self->$class->vtable[4])(self);
    result4476 = $tmp4478;
    panda$core$String* $tmp4480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4479, result4476);
    panda$core$String* $tmp4482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4480, &$s4481);
    panda$core$String* $tmp4483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4482, callRef4463);
    panda$core$String* $tmp4485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4483, &$s4484);
    panda$core$String* $tmp4487 = (($fn4486) self->$class->vtable[15])(self, p_construct->type);
    panda$core$String* $tmp4488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4485, $tmp4487);
    panda$core$String* $tmp4490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4488, &$s4489);
    (($fn4491) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4490);
    panda$core$String* $tmp4494 = (($fn4493) self->$class->vtable[4])(self);
    classPtr4492 = $tmp4494;
    panda$core$Bit $tmp4496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_construct->type->typeKind, ((panda$core$Int64) { 21 }));
    if ($tmp4496.value) {
    {
        panda$core$Object* $tmp4498 = (($fn4497) p_construct->type->subtypes->$class->vtable[2])(p_construct->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4500 = (($fn4499) self->$class->vtable[14])(self, ((org$pandalanguage$pandac$Type*) $tmp4498));
        className4495 = $tmp4500;
    }
    }
    else {
    {
        panda$core$String* $tmp4502 = (($fn4501) self->$class->vtable[14])(self, p_construct->type);
        className4495 = $tmp4502;
    }
    }
    panda$core$String* $tmp4504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4503, classPtr4492);
    panda$core$String* $tmp4506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4504, &$s4505);
    panda$core$String* $tmp4507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4506, className4495);
    panda$core$String* $tmp4509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4507, &$s4508);
    panda$core$String* $tmp4510 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4509, t4339);
    panda$core$String* $tmp4512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4510, &$s4511);
    panda$core$String* $tmp4513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4512, result4476);
    panda$core$String* $tmp4515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4513, &$s4514);
    panda$core$String* $tmp4517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4515, &$s4516);
    (($fn4518) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4517);
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4521 = (($fn4520) self->$class->vtable[26])(self, cl4336);
    cc4519 = $tmp4521;
    panda$core$String* $tmp4523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4522, cc4519->type);
    panda$core$String* $tmp4525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4523, &$s4524);
    panda$core$String* $tmp4526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4525, cc4519->name);
    panda$core$String* $tmp4528 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4526, &$s4527);
    panda$core$String* $tmp4530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4529, classPtr4492);
    panda$core$String* $tmp4532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4530, &$s4531);
    panda$core$String* $tmp4533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4528, $tmp4532);
    (($fn4534) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4533);
    panda$core$Object* $tmp4535 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_construct->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4536, t4339);
    panda$core$String* $tmp4539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4537, &$s4538);
    panda$core$String* $tmp4540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4539, result4476);
    panda$core$String* $tmp4542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4540, &$s4541);
    (($fn4543) self->$class->vtable[70])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4535), $tmp4542, p_out);
    return result4476;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4544 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    return $tmp4544;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNegatedIntReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_int, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* $tmp4546 = panda$core$Int64$convert$R$panda$core$String(((panda$core$Int64$wrapper*) p_int->payload)->value);
    panda$core$String* $tmp4547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4545, $tmp4546);
    return $tmp4547;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getBitReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_bit, panda$io$IndentedOutputStream* p_out) {
    if (((panda$core$Bit$wrapper*) p_bit->payload)->value.value) {
    {
        return &$s4548;
    }
    }
    return &$s4549;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getVariableReference$org$pandalanguage$pandac$Variable$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$Variable* p_v, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4553;
    panda$core$String* t4556;
    panda$core$Bit $tmp4550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_v->storage, ((panda$core$Int64) { 1820 }));
    if ($tmp4550.value) {
    {
        panda$core$String* $tmp4552 = (($fn4551) self->$class->vtable[29])(self, p_v);
        return $tmp4552;
    }
    }
    panda$core$String* $tmp4555 = (($fn4554) self->$class->vtable[4])(self);
    result4553 = $tmp4555;
    panda$core$String* $tmp4558 = (($fn4557) self->$class->vtable[15])(self, p_v->type);
    t4556 = $tmp4558;
    panda$core$String* $tmp4560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4559, result4553);
    panda$core$String* $tmp4562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4560, &$s4561);
    panda$core$String* $tmp4563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4562, t4556);
    panda$core$String* $tmp4565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4563, &$s4564);
    panda$core$String* $tmp4566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4565, t4556);
    panda$core$String* $tmp4568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4566, &$s4567);
    panda$core$String* $tmp4570 = (($fn4569) self->$class->vtable[29])(self, p_v);
    panda$core$String* $tmp4571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4568, $tmp4570);
    panda$core$String* $tmp4573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4571, &$s4572);
    (($fn4574) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4573);
    return result4553;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getStringReference$panda$core$String$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* chars4576;
    panda$core$String* charsType4581;
    panda$core$String* separator4599;
    panda$collections$Iterator* c$Iter4601;
    panda$core$Char8 c4614;
    panda$core$String* result4632;
    org$pandalanguage$pandac$ClassDecl* string4637;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* cc4641;
    panda$core$Int64 $tmp4575 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4575;
    panda$core$String* $tmp4578 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4577, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4578, &$s4579);
    chars4576 = $tmp4580;
    panda$collections$ListView* $tmp4583 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4584 = ((panda$collections$CollectionView*) $tmp4583)->$class->itable;
    while ($tmp4584->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4584 = $tmp4584->next;
    }
    $fn4586 $tmp4585 = $tmp4584->methods[0];
    panda$core$Int64 $tmp4587 = $tmp4585(((panda$collections$CollectionView*) $tmp4583));
    panda$core$String* $tmp4588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4582, ((panda$core$Object*) wrap_panda$core$Int64($tmp4587)));
    panda$core$String* $tmp4590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4588, &$s4589);
    charsType4581 = $tmp4590;
    panda$core$String* $tmp4592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4591, chars4576);
    panda$core$String* $tmp4594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4592, &$s4593);
    panda$core$String* $tmp4595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4594, charsType4581);
    panda$core$String* $tmp4597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4595, &$s4596);
    (($fn4598) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4597);
    separator4599 = &$s4600;
    {
        panda$collections$ListView* $tmp4602 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
        ITable* $tmp4603 = ((panda$collections$Iterable*) $tmp4602)->$class->itable;
        while ($tmp4603->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4603 = $tmp4603->next;
        }
        $fn4605 $tmp4604 = $tmp4603->methods[0];
        panda$collections$Iterator* $tmp4606 = $tmp4604(((panda$collections$Iterable*) $tmp4602));
        c$Iter4601 = $tmp4606;
        $l4607:;
        ITable* $tmp4609 = c$Iter4601->$class->itable;
        while ($tmp4609->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4609 = $tmp4609->next;
        }
        $fn4611 $tmp4610 = $tmp4609->methods[0];
        panda$core$Bit $tmp4612 = $tmp4610(c$Iter4601);
        panda$core$Bit $tmp4613 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4612);
        if (!$tmp4613.value) goto $l4608;
        {
            ITable* $tmp4615 = c$Iter4601->$class->itable;
            while ($tmp4615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4615 = $tmp4615->next;
            }
            $fn4617 $tmp4616 = $tmp4615->methods[1];
            panda$core$Object* $tmp4618 = $tmp4616(c$Iter4601);
            c4614 = ((panda$core$Char8$wrapper*) $tmp4618)->value;
            panda$core$String* $tmp4620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4619, separator4599);
            panda$core$String* $tmp4622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4620, &$s4621);
            panda$core$Int8 $tmp4623 = panda$core$Char8$convert$R$panda$core$Int8(c4614);
            panda$core$String* $tmp4624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp4622, ((panda$core$Object*) wrap_panda$core$Int8($tmp4623)));
            panda$core$String* $tmp4626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4624, &$s4625);
            (($fn4627) ((panda$io$OutputStream*) self->strings)->$class->vtable[16])(((panda$io$OutputStream*) self->strings), $tmp4626);
            separator4599 = &$s4628;
        }
        goto $l4607;
        $l4608:;
    }
    (($fn4630) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), &$s4629);
    panda$core$Int64 $tmp4631 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
    self->labelCount = $tmp4631;
    panda$core$String* $tmp4634 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4633, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
    panda$core$String* $tmp4636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4634, &$s4635);
    result4632 = $tmp4636;
    org$pandalanguage$pandac$Type* $tmp4638 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
    org$pandalanguage$pandac$ClassDecl* $tmp4640 = (($fn4639) self->compiler->$class->vtable[13])(self->compiler, $tmp4638);
    string4637 = $tmp4640;
    org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* $tmp4643 = (($fn4642) self->$class->vtable[26])(self, string4637);
    cc4641 = $tmp4643;
    panda$core$String* $tmp4645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4644, result4632);
    panda$core$String* $tmp4647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4645, &$s4646);
    panda$core$String* $tmp4649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4648, cc4641->type);
    panda$core$String* $tmp4651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4649, &$s4650);
    panda$core$String* $tmp4652 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4651, cc4641->name);
    panda$core$String* $tmp4654 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4652, &$s4653);
    panda$core$String* $tmp4655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4647, $tmp4654);
    panda$core$String* $tmp4657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4655, &$s4656);
    panda$core$String* $tmp4659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4658, charsType4581);
    panda$core$String* $tmp4661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4659, &$s4660);
    panda$core$String* $tmp4662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4661, chars4576);
    panda$core$String* $tmp4664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4662, &$s4663);
    panda$core$String* $tmp4665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4657, $tmp4664);
    panda$collections$ListView* $tmp4667 = panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(p_s);
    ITable* $tmp4668 = ((panda$collections$CollectionView*) $tmp4667)->$class->itable;
    while ($tmp4668->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
        $tmp4668 = $tmp4668->next;
    }
    $fn4670 $tmp4669 = $tmp4668->methods[0];
    panda$core$Int64 $tmp4671 = $tmp4669(((panda$collections$CollectionView*) $tmp4667));
    panda$core$String* $tmp4672 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s4666, ((panda$core$Object*) wrap_panda$core$Int64($tmp4671)));
    panda$core$String* $tmp4674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4672, &$s4673);
    panda$core$String* $tmp4675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4665, $tmp4674);
    panda$core$String* $tmp4677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4675, &$s4676);
    (($fn4678) ((panda$io$OutputStream*) self->strings)->$class->vtable[19])(((panda$io$OutputStream*) self->strings), $tmp4677);
    return result4632;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSelfReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $tmp4680 = (($fn4679) self->inlineContext->$class->vtable[7])(self->inlineContext);
    panda$core$Bit $tmp4681 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp4680, ((panda$core$Int64) { 0 }));
    if ($tmp4681.value) {
    {
        panda$core$Object* $tmp4683 = (($fn4682) self->inlineContext->$class->vtable[4])(self->inlineContext);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp4683)->selfRef;
    }
    }
    return &$s4684;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getSuperReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* result4685;
    panda$core$String* $tmp4687 = (($fn4686) self->$class->vtable[4])(self);
    result4685 = $tmp4687;
    panda$core$String* $tmp4689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4688, result4685);
    panda$core$String* $tmp4691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4689, &$s4690);
    org$pandalanguage$pandac$Type* $tmp4693 = (($fn4692) self->currentMethod->owner->$class->vtable[3])(self->currentMethod->owner);
    panda$core$String* $tmp4695 = (($fn4694) self->$class->vtable[15])(self, $tmp4693);
    panda$core$String* $tmp4696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4691, $tmp4695);
    panda$core$String* $tmp4698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4696, &$s4697);
    panda$core$String* $tmp4700 = (($fn4699) self->$class->vtable[15])(self, p_s->type);
    panda$core$String* $tmp4701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4698, $tmp4700);
    (($fn4702) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4701);
    return result4685;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4703;
    org$pandalanguage$pandac$ClassDecl* cl4707;
    panda$core$String* resultValue4711;
    panda$core$String* field4717;
    panda$core$String* result4748;
    panda$core$Object* $tmp4704 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4706 = (($fn4705) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4704), p_out);
    value4703 = $tmp4706;
    panda$core$Object* $tmp4708 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4710 = (($fn4709) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4708)->type);
    cl4707 = $tmp4710;
    panda$core$Bit $tmp4713 = (($fn4712) self->compiler->$class->vtable[9])(self->compiler, cl4707);
    if ($tmp4713.value) {
    {
        panda$core$Object* $tmp4714 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4715 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4714)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4715.value) {
        {
            return &$s4716;
        }
        }
        panda$core$String* $tmp4719 = (($fn4718) self->$class->vtable[4])(self);
        field4717 = $tmp4719;
        panda$core$String* $tmp4721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4720, field4717);
        panda$core$String* $tmp4723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4721, &$s4722);
        panda$core$String* $tmp4724 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4723, value4703);
        panda$core$String* $tmp4726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4724, &$s4725);
        (($fn4727) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4726);
        panda$core$String* $tmp4729 = (($fn4728) self->$class->vtable[4])(self);
        resultValue4711 = $tmp4729;
        panda$core$String* $tmp4731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4730, resultValue4711);
        panda$core$String* $tmp4733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4731, &$s4732);
        panda$core$String* $tmp4734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4733, field4717);
        panda$core$String* $tmp4736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4734, &$s4735);
        (($fn4737) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4736);
    }
    }
    else {
    {
        panda$core$String* $tmp4739 = (($fn4738) self->$class->vtable[4])(self);
        resultValue4711 = $tmp4739;
        panda$core$String* $tmp4741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4740, resultValue4711);
        panda$core$String* $tmp4743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4741, &$s4742);
        panda$core$String* $tmp4744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4743, value4703);
        panda$core$String* $tmp4746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4744, &$s4745);
        (($fn4747) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4746);
    }
    }
    panda$core$String* $tmp4750 = (($fn4749) self->$class->vtable[4])(self);
    result4748 = $tmp4750;
    panda$core$String* $tmp4752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4751, result4748);
    panda$core$String* $tmp4754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4752, &$s4753);
    panda$core$String* $tmp4755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4754, resultValue4711);
    panda$core$String* $tmp4757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4755, &$s4756);
    (($fn4758) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4757);
    return result4748;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getIsNonNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_test, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* value4759;
    org$pandalanguage$pandac$ClassDecl* cl4763;
    panda$core$String* resultValue4767;
    panda$core$String* result4793;
    panda$core$Object* $tmp4760 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4762 = (($fn4761) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4760), p_out);
    value4759 = $tmp4762;
    panda$core$Object* $tmp4764 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4766 = (($fn4765) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4764)->type);
    cl4763 = $tmp4766;
    panda$core$Bit $tmp4769 = (($fn4768) self->compiler->$class->vtable[9])(self->compiler, cl4763);
    if ($tmp4769.value) {
    {
        panda$core$Object* $tmp4770 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_test->children, ((panda$core$Int64) { 0 }));
        panda$core$Bit $tmp4771 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp4770)->type->typeKind, ((panda$core$Int64) { 11 }));
        if ($tmp4771.value) {
        {
            return &$s4772;
        }
        }
        panda$core$String* $tmp4774 = (($fn4773) self->$class->vtable[4])(self);
        resultValue4767 = $tmp4774;
        panda$core$String* $tmp4776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4775, resultValue4767);
        panda$core$String* $tmp4778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4776, &$s4777);
        panda$core$String* $tmp4779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4778, value4759);
        panda$core$String* $tmp4781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4779, &$s4780);
        (($fn4782) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4781);
    }
    }
    else {
    {
        panda$core$String* $tmp4784 = (($fn4783) self->$class->vtable[4])(self);
        resultValue4767 = $tmp4784;
        panda$core$String* $tmp4786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4785, resultValue4767);
        panda$core$String* $tmp4788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4786, &$s4787);
        panda$core$String* $tmp4789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4788, value4759);
        panda$core$String* $tmp4791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4789, &$s4790);
        (($fn4792) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4791);
    }
    }
    panda$core$String* $tmp4795 = (($fn4794) self->$class->vtable[4])(self);
    result4793 = $tmp4795;
    panda$core$String* $tmp4797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4796, result4793);
    panda$core$String* $tmp4799 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4797, &$s4798);
    panda$core$String* $tmp4800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4799, resultValue4767);
    panda$core$String* $tmp4802 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4800, &$s4801);
    (($fn4803) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4802);
    return result4793;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getNullReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$ClassDecl* cl4804;
    panda$core$Object* $tmp4806 = (($fn4805) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
    org$pandalanguage$pandac$ClassDecl* $tmp4808 = (($fn4807) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$Type*) $tmp4806));
    cl4804 = $tmp4808;
    panda$core$Bit $tmp4810 = (($fn4809) self->compiler->$class->vtable[9])(self->compiler, cl4804);
    if ($tmp4810.value) {
    {
        panda$core$Object* $tmp4813 = (($fn4812) p_expr->type->subtypes->$class->vtable[2])(p_expr->type->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp4815 = (($fn4814) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp4813));
        panda$core$String* $tmp4816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4811, $tmp4815);
        panda$core$String* $tmp4818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4816, &$s4817);
        return $tmp4818;
    }
    }
    else {
    {
        return &$s4819;
    }
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getPrefixReference$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_expr, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* base4820;
    panda$core$String* result4824;
    panda$core$Int64 $match$722724827;
    panda$core$Object* $tmp4821 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp4823 = (($fn4822) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4821), p_out);
    base4820 = $tmp4823;
    panda$core$String* $tmp4826 = (($fn4825) self->$class->vtable[4])(self);
    result4824 = $tmp4826;
    {
        panda$core$Int64 $tmp4828 = panda$core$UInt64$convert$R$panda$core$Int64(((panda$core$UInt64$wrapper*) p_expr->payload)->value);
        $match$722724827 = $tmp4828;
        panda$core$Bit $tmp4829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722724827, ((panda$core$Int64) { 52 }));
        if ($tmp4829.value) {
        {
            panda$core$String* $tmp4831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4830, result4824);
            panda$core$String* $tmp4833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4831, &$s4832);
            panda$core$String* $tmp4835 = (($fn4834) self->$class->vtable[15])(self, p_expr->type);
            panda$core$String* $tmp4836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4833, $tmp4835);
            panda$core$String* $tmp4838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4836, &$s4837);
            panda$core$String* $tmp4839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4838, base4820);
            panda$core$String* $tmp4841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4839, &$s4840);
            (($fn4842) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4841);
            return result4824;
        }
        }
        else {
        panda$core$Bit $tmp4844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722724827, ((panda$core$Int64) { 49 }));
        bool $tmp4843 = $tmp4844.value;
        if ($tmp4843) goto $l4845;
        panda$core$Bit $tmp4846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$722724827, ((panda$core$Int64) { 50 }));
        $tmp4843 = $tmp4846.value;
        $l4845:;
        panda$core$Bit $tmp4847 = { $tmp4843 };
        if ($tmp4847.value) {
        {
            panda$core$String* $tmp4849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4848, result4824);
            panda$core$String* $tmp4851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4849, &$s4850);
            panda$core$String* $tmp4853 = (($fn4852) self->$class->vtable[15])(self, p_expr->type);
            panda$core$String* $tmp4854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4851, $tmp4853);
            panda$core$String* $tmp4856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4854, &$s4855);
            panda$core$String* $tmp4857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4856, base4820);
            panda$core$String* $tmp4859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4857, &$s4858);
            (($fn4860) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4859);
            return result4824;
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
    panda$core$Int64 $match$727934861;
    panda$core$String* value4899;
    panda$core$String* result4905;
    {
        $match$727934861 = p_expr->kind;
        panda$core$Bit $tmp4862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1023 }));
        if ($tmp4862.value) {
        {
            panda$core$String* $tmp4864 = (($fn4863) self->$class->vtable[39])(self, p_expr, p_out);
            return $tmp4864;
        }
        }
        else {
        panda$core$Bit $tmp4865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1005 }));
        if ($tmp4865.value) {
        {
            panda$core$String* $tmp4867 = (($fn4866) self->$class->vtable[46])(self, p_expr, p_out);
            return $tmp4867;
        }
        }
        else {
        panda$core$Bit $tmp4868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1009 }));
        if ($tmp4868.value) {
        {
            panda$core$String* $tmp4870 = (($fn4869) self->$class->vtable[53])(self, p_expr, p_out);
            return $tmp4870;
        }
        }
        else {
        panda$core$Bit $tmp4871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1004 }));
        if ($tmp4871.value) {
        {
            panda$core$String* $tmp4873 = (($fn4872) self->$class->vtable[55])(self, p_expr, p_out);
            return $tmp4873;
        }
        }
        else {
        panda$core$Bit $tmp4874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1032 }));
        if ($tmp4874.value) {
        {
            panda$core$String* $tmp4876 = (($fn4875) self->$class->vtable[56])(self, p_expr, p_out);
            return $tmp4876;
        }
        }
        else {
        panda$core$Bit $tmp4877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1011 }));
        if ($tmp4877.value) {
        {
            panda$core$String* $tmp4879 = (($fn4878) self->$class->vtable[57])(self, p_expr, p_out);
            return $tmp4879;
        }
        }
        else {
        panda$core$Bit $tmp4880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1010 }));
        if ($tmp4880.value) {
        {
            panda$core$String* $tmp4882 = (($fn4881) self->$class->vtable[54])(self, p_expr, p_out);
            return $tmp4882;
        }
        }
        else {
        panda$core$Bit $tmp4883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1016 }));
        if ($tmp4883.value) {
        {
            panda$core$String* $tmp4885 = (($fn4884) self->$class->vtable[58])(self, ((org$pandalanguage$pandac$Variable*) p_expr->payload), p_out);
            return $tmp4885;
        }
        }
        else {
        panda$core$Bit $tmp4886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1026 }));
        if ($tmp4886.value) {
        {
            panda$core$String* $tmp4888 = (($fn4887) self->$class->vtable[48])(self, p_expr, p_out);
            return $tmp4888;
        }
        }
        else {
        panda$core$Bit $tmp4889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1033 }));
        if ($tmp4889.value) {
        {
            panda$core$String* $tmp4891 = (($fn4890) self->$class->vtable[59])(self, ((panda$core$String*) p_expr->payload), p_out);
            return $tmp4891;
        }
        }
        else {
        panda$core$Bit $tmp4892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1025 }));
        if ($tmp4892.value) {
        {
            panda$core$String* $tmp4894 = (($fn4893) self->$class->vtable[60])(self, p_expr, p_out);
            return $tmp4894;
        }
        }
        else {
        panda$core$Bit $tmp4895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1024 }));
        if ($tmp4895.value) {
        {
            panda$core$String* $tmp4897 = (($fn4896) self->$class->vtable[61])(self, p_expr, p_out);
            return $tmp4897;
        }
        }
        else {
        panda$core$Bit $tmp4898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1027 }));
        if ($tmp4898.value) {
        {
            panda$core$Object* $tmp4900 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_expr->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4902 = (($fn4901) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4900), p_out);
            value4899 = $tmp4902;
            (($fn4903) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))), ((panda$core$Object*) value4899));
            return value4899;
        }
        }
        else {
        panda$core$Bit $tmp4904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1028 }));
        if ($tmp4904.value) {
        {
            panda$core$Object* $tmp4907 = (($fn4906) self->reusedValues->$class->vtable[3])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_expr->payload)->value))));
            result4905 = ((panda$core$String*) $tmp4907);
            return result4905;
        }
        }
        else {
        panda$core$Bit $tmp4908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1030 }));
        if ($tmp4908.value) {
        {
            panda$core$String* $tmp4910 = (($fn4909) self->$class->vtable[64])(self, p_expr, p_out);
            return $tmp4910;
        }
        }
        else {
        panda$core$Bit $tmp4911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1035 }));
        if ($tmp4911.value) {
        {
            panda$core$String* $tmp4913 = (($fn4912) self->$class->vtable[62])(self, p_expr, p_out);
            return $tmp4913;
        }
        }
        else {
        panda$core$Bit $tmp4914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1036 }));
        if ($tmp4914.value) {
        {
            panda$core$String* $tmp4916 = (($fn4915) self->$class->vtable[63])(self, p_expr, p_out);
            return $tmp4916;
        }
        }
        else {
        panda$core$Bit $tmp4917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$727934861, ((panda$core$Int64) { 1041 }));
        if ($tmp4917.value) {
        {
            panda$core$String* $tmp4919 = (($fn4918) self->$class->vtable[65])(self, p_expr, p_out);
            return $tmp4919;
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
    panda$core$String* $tmp4922 = (($fn4921) self->$class->vtable[15])(self, p_expr->type);
    panda$core$String* $tmp4923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4920, $tmp4922);
    panda$core$String* $tmp4925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4923, &$s4924);
    panda$core$String* $tmp4927 = (($fn4926) self->$class->vtable[66])(self, p_expr, p_out);
    panda$core$String* $tmp4928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4925, $tmp4927);
    panda$core$String* $tmp4930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4928, &$s4929);
    return $tmp4930;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBlock$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_block, panda$io$IndentedOutputStream* p_out) {
    panda$collections$Iterator* s$Iter4932;
    org$pandalanguage$pandac$IRNode* s4944;
    panda$core$Int64 $tmp4931 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4931;
    {
        ITable* $tmp4933 = ((panda$collections$Iterable*) p_block->children)->$class->itable;
        while ($tmp4933->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp4933 = $tmp4933->next;
        }
        $fn4935 $tmp4934 = $tmp4933->methods[0];
        panda$collections$Iterator* $tmp4936 = $tmp4934(((panda$collections$Iterable*) p_block->children));
        s$Iter4932 = $tmp4936;
        $l4937:;
        ITable* $tmp4939 = s$Iter4932->$class->itable;
        while ($tmp4939->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp4939 = $tmp4939->next;
        }
        $fn4941 $tmp4940 = $tmp4939->methods[0];
        panda$core$Bit $tmp4942 = $tmp4940(s$Iter4932);
        panda$core$Bit $tmp4943 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp4942);
        if (!$tmp4943.value) goto $l4938;
        {
            ITable* $tmp4945 = s$Iter4932->$class->itable;
            while ($tmp4945->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp4945 = $tmp4945->next;
            }
            $fn4947 $tmp4946 = $tmp4945->methods[1];
            panda$core$Object* $tmp4948 = $tmp4946(s$Iter4932);
            s4944 = ((org$pandalanguage$pandac$IRNode*) $tmp4948);
            (($fn4949) self->$class->vtable[85])(self, s4944, p_out);
        }
        goto $l4937;
        $l4938:;
    }
    panda$core$Int64 $tmp4950 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(p_out->level, ((panda$core$Int64) { 1 }));
    p_out->level = $tmp4950;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writePointerCall$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$MethodRef* m4951;
    panda$core$String* $match$753284952;
    panda$core$String* ptr4955;
    panda$core$String* arg4959;
    org$pandalanguage$pandac$Type* baseType4975;
    panda$core$String* base4981;
    panda$core$String* indexStruct4985;
    panda$core$String* index4989;
    panda$core$String* value5000;
    panda$core$String* ptr5006;
    panda$core$String* ptr5046;
    panda$core$String* cast5050;
    m4951 = ((org$pandalanguage$pandac$MethodRef*) p_stmt->payload);
    {
        $match$753284952 = ((org$pandalanguage$pandac$Symbol*) m4951->value)->name;
        panda$core$Bit $tmp4954 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$753284952, &$s4953);
        if ($tmp4954.value) {
        {
            panda$core$Object* $tmp4956 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4958 = (($fn4957) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4956), p_out);
            ptr4955 = $tmp4958;
            panda$core$Object* $tmp4960 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            org$pandalanguage$pandac$IRNode* $tmp4962 = (($fn4961) self->compiler->$class->vtable[50])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4960));
            panda$core$String* $tmp4964 = (($fn4963) self->$class->vtable[67])(self, $tmp4962, p_out);
            arg4959 = $tmp4964;
            panda$core$String* $tmp4966 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4965, arg4959);
            panda$core$String* $tmp4968 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4966, &$s4967);
            panda$core$String* $tmp4969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4968, ptr4955);
            panda$core$String* $tmp4971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4969, &$s4970);
            (($fn4972) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4971);
        }
        }
        else {
        panda$core$Bit $tmp4974 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$753284952, &$s4973);
        if ($tmp4974.value) {
        {
            panda$core$Object* $tmp4976 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$IRNode* $tmp4978 = (($fn4977) self->compiler->$class->vtable[50])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp4976));
            panda$core$Object* $tmp4980 = (($fn4979) $tmp4978->type->subtypes->$class->vtable[2])($tmp4978->type->subtypes, ((panda$core$Int64) { 1 }));
            baseType4975 = ((org$pandalanguage$pandac$Type*) $tmp4980);
            panda$core$Object* $tmp4982 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp4984 = (($fn4983) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4982), p_out);
            base4981 = $tmp4984;
            panda$core$Object* $tmp4986 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 1 }));
            panda$core$String* $tmp4988 = (($fn4987) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp4986), p_out);
            indexStruct4985 = $tmp4988;
            panda$core$String* $tmp4991 = (($fn4990) self->$class->vtable[4])(self);
            index4989 = $tmp4991;
            panda$core$String* $tmp4993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s4992, index4989);
            panda$core$String* $tmp4995 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4993, &$s4994);
            panda$core$String* $tmp4996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4995, indexStruct4985);
            panda$core$String* $tmp4998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp4996, &$s4997);
            (($fn4999) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp4998);
            panda$core$Object* $tmp5001 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 2 }));
            org$pandalanguage$pandac$IRNode* $tmp5003 = (($fn5002) self->compiler->$class->vtable[50])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp5001));
            panda$core$String* $tmp5005 = (($fn5004) self->$class->vtable[67])(self, $tmp5003, p_out);
            value5000 = $tmp5005;
            panda$core$String* $tmp5008 = (($fn5007) self->$class->vtable[4])(self);
            ptr5006 = $tmp5008;
            panda$core$String* $tmp5010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5009, ptr5006);
            panda$core$String* $tmp5012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5010, &$s5011);
            panda$core$String* $tmp5014 = (($fn5013) self->$class->vtable[15])(self, baseType4975);
            panda$core$String* $tmp5015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5012, $tmp5014);
            panda$core$String* $tmp5017 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5015, &$s5016);
            panda$core$String* $tmp5018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5017, base4981);
            panda$core$String* $tmp5020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5018, &$s5019);
            panda$core$String* $tmp5023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5021, &$s5022);
            panda$core$String* $tmp5025 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5023, &$s5024);
            panda$core$String* $tmp5026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5025, index4989);
            panda$core$String* $tmp5028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5026, &$s5027);
            panda$core$String* $tmp5029 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5020, $tmp5028);
            (($fn5030) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5029);
            panda$core$String* $tmp5032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5031, value5000);
            panda$core$String* $tmp5034 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5032, &$s5033);
            panda$core$String* $tmp5036 = (($fn5035) self->$class->vtable[15])(self, baseType4975);
            panda$core$String* $tmp5037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5034, $tmp5036);
            panda$core$String* $tmp5039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5037, &$s5038);
            panda$core$String* $tmp5040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5039, ptr5006);
            panda$core$String* $tmp5042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5040, &$s5041);
            (($fn5043) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5042);
        }
        }
        else {
        panda$core$Bit $tmp5045 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($match$753284952, &$s5044);
        if ($tmp5045.value) {
        {
            panda$core$Object* $tmp5047 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_stmt->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp5049 = (($fn5048) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5047), p_out);
            ptr5046 = $tmp5049;
            panda$core$String* $tmp5052 = (($fn5051) self->$class->vtable[4])(self);
            cast5050 = $tmp5052;
            panda$core$String* $tmp5054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5053, cast5050);
            panda$core$String* $tmp5056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5054, &$s5055);
            panda$core$String* $tmp5057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5056, ptr5046);
            panda$core$String* $tmp5059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5057, &$s5058);
            (($fn5060) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5059);
            panda$core$String* $tmp5062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5061, cast5050);
            panda$core$String* $tmp5064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5062, &$s5063);
            (($fn5065) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5064);
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
    org$pandalanguage$pandac$MethodDecl* m5066;
    org$pandalanguage$pandac$Type* actualMethodType5071;
    panda$core$String* actualResultType5072;
    panda$core$Bit isSuper5073;
    panda$collections$Array* args5100;
    panda$core$Int64 offset5103;
    panda$core$Range $tmp5109;
    panda$core$String* arg5129;
    panda$core$String* refTarget5174;
    panda$core$String* methodRef5178;
    panda$core$String* separator5181;
    panda$core$String* indirectVar5186;
    panda$core$String* resultType5189;
    panda$collections$Iterator* a$Iter5240;
    panda$core$String* a5252;
    m5066 = ((org$pandalanguage$pandac$MethodRef*) p_call->payload)->value;
    panda$core$Bit $tmp5068 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m5066->owner)->name, &$s5067);
    if ($tmp5068.value) {
    {
        (($fn5069) self->$class->vtable[69])(self, p_call, p_out);
        return;
    }
    }
    if (m5066->owner->external.value) {
    {
        (($fn5070) self->$class->vtable[87])(self, m5066);
    }
    }
    panda$core$Int64 $tmp5075 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Bit $tmp5076 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit($tmp5075, ((panda$core$Int64) { 1 }));
    bool $tmp5074 = $tmp5076.value;
    if (!$tmp5074) goto $l5077;
    panda$core$Object* $tmp5078 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp5079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(((org$pandalanguage$pandac$IRNode*) $tmp5078)->kind, ((panda$core$Int64) { 1024 }));
    $tmp5074 = $tmp5079.value;
    $l5077:;
    panda$core$Bit $tmp5080 = { $tmp5074 };
    isSuper5073 = $tmp5080;
    panda$core$Bit $tmp5082 = panda$core$Bit$$NOT$R$panda$core$Bit(isSuper5073);
    bool $tmp5081 = $tmp5082.value;
    if (!$tmp5081) goto $l5083;
    panda$core$Bit $tmp5085 = (($fn5084) m5066->$class->vtable[3])(m5066);
    $tmp5081 = $tmp5085.value;
    $l5083:;
    panda$core$Bit $tmp5086 = { $tmp5081 };
    if ($tmp5086.value) {
    {
        org$pandalanguage$pandac$Type* $tmp5088 = (($fn5087) self->compiler->$class->vtable[45])(self->compiler, m5066);
        actualMethodType5071 = $tmp5088;
        panda$core$Int64 $tmp5090 = (($fn5089) actualMethodType5071->subtypes->$class->vtable[3])(actualMethodType5071->subtypes);
        panda$core$Int64 $tmp5091 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5090, ((panda$core$Int64) { 1 }));
        panda$core$Object* $tmp5093 = (($fn5092) actualMethodType5071->subtypes->$class->vtable[2])(actualMethodType5071->subtypes, $tmp5091);
        panda$core$String* $tmp5095 = (($fn5094) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp5093));
        actualResultType5072 = $tmp5095;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp5097 = (($fn5096) self->compiler->$class->vtable[43])(self->compiler, m5066);
        actualMethodType5071 = $tmp5097;
        panda$core$String* $tmp5099 = (($fn5098) self->$class->vtable[15])(self, p_call->type);
        actualResultType5072 = $tmp5099;
    }
    }
    panda$collections$Array* $tmp5101 = (panda$collections$Array*) malloc(40);
    $tmp5101->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp5101->refCount.value = 1;
    panda$collections$Array$init($tmp5101);
    args5100 = $tmp5101;
    if (((panda$core$Bit) { p_target != NULL }).value) {
    {
        panda$collections$Array$add$panda$collections$Array$T(args5100, ((panda$core$Object*) p_target));
    }
    }
    panda$core$Int64 $tmp5104 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Int64 $tmp5106 = (($fn5105) actualMethodType5071->subtypes->$class->vtable[3])(actualMethodType5071->subtypes);
    panda$core$Int64 $tmp5107 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64($tmp5104, $tmp5106);
    panda$core$Int64 $tmp5108 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64($tmp5107, ((panda$core$Int64) { 1 }));
    offset5103 = $tmp5108;
    panda$core$Int64 $tmp5110 = panda$collections$Array$get_count$R$panda$core$Int64(p_call->children);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp5109, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp5110)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp5112 = ((panda$core$Int64$wrapper*) $tmp5109.start)->value.value;
    panda$core$Int64 i5111 = { $tmp5112 };
    int64_t $tmp5114 = ((panda$core$Int64$wrapper*) $tmp5109.end)->value.value;
    int64_t $tmp5115 = $tmp5109.step.value;
    bool $tmp5116 = $tmp5109.inclusive.value;
    bool $tmp5123 = $tmp5115 > 0;
    if ($tmp5123) goto $l5121; else goto $l5122;
    $l5121:;
    if ($tmp5116) goto $l5124; else goto $l5125;
    $l5124:;
    if ($tmp5112 <= $tmp5114) goto $l5117; else goto $l5119;
    $l5125:;
    if ($tmp5112 < $tmp5114) goto $l5117; else goto $l5119;
    $l5122:;
    if ($tmp5116) goto $l5126; else goto $l5127;
    $l5126:;
    if ($tmp5112 >= $tmp5114) goto $l5117; else goto $l5119;
    $l5127:;
    if ($tmp5112 > $tmp5114) goto $l5117; else goto $l5119;
    $l5117:;
    {
        panda$core$Object* $tmp5130 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5111);
        panda$core$String* $tmp5132 = (($fn5131) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5130), p_out);
        arg5129 = $tmp5132;
        panda$core$Bit $tmp5134 = panda$core$Int64$$GE$panda$core$Int64$R$panda$core$Bit(i5111, offset5103);
        bool $tmp5133 = $tmp5134.value;
        if (!$tmp5133) goto $l5135;
        panda$core$Int64 $tmp5136 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5111, offset5103);
        panda$core$Object* $tmp5138 = (($fn5137) actualMethodType5071->subtypes->$class->vtable[2])(actualMethodType5071->subtypes, $tmp5136);
        panda$core$Object* $tmp5139 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5111);
        panda$core$Bit $tmp5141 = (($fn5140) ((org$pandalanguage$pandac$Type*) $tmp5138)->$class->vtable[5])(((org$pandalanguage$pandac$Type*) $tmp5138), ((panda$core$Object*) ((org$pandalanguage$pandac$IRNode*) $tmp5139)->type));
        $tmp5133 = $tmp5141.value;
        $l5135:;
        panda$core$Bit $tmp5142 = { $tmp5133 };
        if ($tmp5142.value) {
        {
            panda$core$Int64 $tmp5143 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5111, offset5103);
            panda$core$Object* $tmp5145 = (($fn5144) actualMethodType5071->subtypes->$class->vtable[2])(actualMethodType5071->subtypes, $tmp5143);
            panda$core$String* $tmp5147 = (($fn5146) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp5145));
            panda$core$String* $tmp5149 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5147, &$s5148);
            panda$core$Object* $tmp5150 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5111);
            panda$core$Int64 $tmp5151 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(i5111, offset5103);
            panda$core$Object* $tmp5153 = (($fn5152) actualMethodType5071->subtypes->$class->vtable[2])(actualMethodType5071->subtypes, $tmp5151);
            panda$core$String* $tmp5155 = (($fn5154) self->$class->vtable[52])(self, arg5129, ((org$pandalanguage$pandac$IRNode*) $tmp5150)->type, ((org$pandalanguage$pandac$Type*) $tmp5153), p_out);
            panda$core$String* $tmp5156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5149, $tmp5155);
            arg5129 = $tmp5156;
        }
        }
        else {
        {
            panda$core$Object* $tmp5157 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_call->children, i5111);
            panda$core$String* $tmp5159 = (($fn5158) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5157)->type);
            panda$core$String* $tmp5161 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5159, &$s5160);
            panda$core$String* $tmp5162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5161, arg5129);
            arg5129 = $tmp5162;
        }
        }
        panda$collections$Array$add$panda$collections$Array$T(args5100, ((panda$core$Object*) arg5129));
    }
    $l5120:;
    if ($tmp5123) goto $l5164; else goto $l5165;
    $l5164:;
    int64_t $tmp5166 = $tmp5114 - i5111.value;
    if ($tmp5116) goto $l5167; else goto $l5168;
    $l5167:;
    if ($tmp5166 >= $tmp5115) goto $l5163; else goto $l5119;
    $l5168:;
    if ($tmp5166 > $tmp5115) goto $l5163; else goto $l5119;
    $l5165:;
    int64_t $tmp5170 = i5111.value - $tmp5114;
    if ($tmp5116) goto $l5171; else goto $l5172;
    $l5171:;
    if ($tmp5170 >= -$tmp5115) goto $l5163; else goto $l5119;
    $l5172:;
    if ($tmp5170 > -$tmp5115) goto $l5163; else goto $l5119;
    $l5163:;
    i5111.value += $tmp5115;
    goto $l5117;
    $l5119:;
    panda$core$Int64 $tmp5175 = panda$collections$Array$get_count$R$panda$core$Int64(args5100);
    panda$core$Bit $tmp5176 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp5175, ((panda$core$Int64) { 0 }));
    if ($tmp5176.value) {
    {
        panda$core$Object* $tmp5177 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(args5100, ((panda$core$Int64) { 0 }));
        refTarget5174 = ((panda$core$String*) $tmp5177);
    }
    }
    else {
    {
        refTarget5174 = NULL;
    }
    }
    panda$core$String* $tmp5180 = (($fn5179) self->$class->vtable[43])(self, refTarget5174, m5066, isSuper5073, p_out);
    methodRef5178 = $tmp5180;
    separator5181 = &$s5182;
    panda$core$Bit $tmp5184 = (($fn5183) self->$class->vtable[24])(self, m5066);
    if ($tmp5184.value) {
    {
        panda$core$Int64 $tmp5185 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->labelCount, ((panda$core$Int64) { 1 }));
        self->labelCount = $tmp5185;
        panda$core$String* $tmp5188 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s5187, ((panda$core$Object*) wrap_panda$core$Int64(self->labelCount)));
        indirectVar5186 = $tmp5188;
        panda$core$String* $tmp5191 = (($fn5190) self->$class->vtable[15])(self, p_call->type);
        resultType5189 = $tmp5191;
        panda$core$String* $tmp5193 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5192, indirectVar5186);
        panda$core$String* $tmp5195 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5193, &$s5194);
        panda$core$String* $tmp5196 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5195, resultType5189);
        panda$core$String* $tmp5198 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5196, &$s5197);
        (($fn5199) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5198);
        panda$core$String* $tmp5202 = (($fn5201) self->$class->vtable[40])(self, m5066);
        panda$core$String* $tmp5203 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5200, $tmp5202);
        panda$core$String* $tmp5205 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5203, &$s5204);
        panda$core$String* $tmp5207 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5206, methodRef5178);
        panda$core$String* $tmp5209 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5207, &$s5208);
        panda$core$String* $tmp5210 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5209, resultType5189);
        panda$core$String* $tmp5212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5210, &$s5211);
        panda$core$String* $tmp5213 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5212, indirectVar5186);
        panda$core$String* $tmp5215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5213, &$s5214);
        panda$core$String* $tmp5216 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5205, $tmp5215);
        (($fn5217) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5216);
        separator5181 = &$s5218;
    }
    }
    else {
    {
        org$pandalanguage$pandac$Type* $tmp5219 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp5221 = (($fn5220) p_call->type->$class->vtable[5])(p_call->type, ((panda$core$Object*) $tmp5219));
        if ($tmp5221.value) {
        {
            (($fn5222) self->$class->vtable[4])(self);
        }
        }
        panda$core$String* $tmp5225 = (($fn5224) self->$class->vtable[40])(self, m5066);
        panda$core$String* $tmp5226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5223, $tmp5225);
        panda$core$String* $tmp5228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5226, &$s5227);
        panda$core$String* $tmp5230 = (($fn5229) self->$class->vtable[15])(self, p_call->type);
        panda$core$String* $tmp5231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5228, $tmp5230);
        panda$core$String* $tmp5233 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5231, &$s5232);
        panda$core$String* $tmp5235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5234, methodRef5178);
        panda$core$String* $tmp5237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5235, &$s5236);
        panda$core$String* $tmp5238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5233, $tmp5237);
        (($fn5239) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp5238);
    }
    }
    {
        ITable* $tmp5241 = ((panda$collections$Iterable*) args5100)->$class->itable;
        while ($tmp5241->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp5241 = $tmp5241->next;
        }
        $fn5243 $tmp5242 = $tmp5241->methods[0];
        panda$collections$Iterator* $tmp5244 = $tmp5242(((panda$collections$Iterable*) args5100));
        a$Iter5240 = $tmp5244;
        $l5245:;
        ITable* $tmp5247 = a$Iter5240->$class->itable;
        while ($tmp5247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp5247 = $tmp5247->next;
        }
        $fn5249 $tmp5248 = $tmp5247->methods[0];
        panda$core$Bit $tmp5250 = $tmp5248(a$Iter5240);
        panda$core$Bit $tmp5251 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5250);
        if (!$tmp5251.value) goto $l5246;
        {
            ITable* $tmp5253 = a$Iter5240->$class->itable;
            while ($tmp5253->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp5253 = $tmp5253->next;
            }
            $fn5255 $tmp5254 = $tmp5253->methods[1];
            panda$core$Object* $tmp5256 = $tmp5254(a$Iter5240);
            a5252 = ((panda$core$String*) $tmp5256);
            (($fn5257) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), separator5181);
            (($fn5258) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), a5252);
            separator5181 = &$s5259;
        }
        goto $l5245;
        $l5246:;
    }
    (($fn5261) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s5260);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeIf$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_s, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test5262;
    panda$core$String* testBit5266;
    panda$core$String* ifTrue5277;
    panda$core$String* ifFalse5280;
    panda$core$String* end5297;
    panda$core$Object* $tmp5263 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5265 = (($fn5264) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5263), p_out);
    test5262 = $tmp5265;
    panda$core$String* $tmp5268 = (($fn5267) self->$class->vtable[4])(self);
    testBit5266 = $tmp5268;
    panda$core$String* $tmp5270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5269, testBit5266);
    panda$core$String* $tmp5272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5270, &$s5271);
    panda$core$String* $tmp5273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5272, test5262);
    panda$core$String* $tmp5275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5273, &$s5274);
    (($fn5276) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5275);
    panda$core$String* $tmp5279 = (($fn5278) self->$class->vtable[5])(self);
    ifTrue5277 = $tmp5279;
    panda$core$String* $tmp5282 = (($fn5281) self->$class->vtable[5])(self);
    ifFalse5280 = $tmp5282;
    panda$core$String* $tmp5284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5283, testBit5266);
    panda$core$String* $tmp5286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5284, &$s5285);
    panda$core$String* $tmp5287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5286, ifTrue5277);
    panda$core$String* $tmp5289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5287, &$s5288);
    panda$core$String* $tmp5290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5289, ifFalse5280);
    panda$core$String* $tmp5292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5290, &$s5291);
    (($fn5293) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5292);
    (($fn5294) self->$class->vtable[6])(self, ifTrue5277, p_out);
    panda$core$Object* $tmp5295 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    (($fn5296) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5295), p_out);
    panda$core$Int64 $tmp5298 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp5299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5298, ((panda$core$Int64) { 3 }));
    if ($tmp5299.value) {
    {
        panda$core$String* $tmp5301 = (($fn5300) self->$class->vtable[5])(self);
        end5297 = $tmp5301;
    }
    }
    else {
    {
        end5297 = ifFalse5280;
    }
    }
    panda$core$Object* $tmp5302 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp5304 = (($fn5303) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5302));
    panda$core$Bit $tmp5305 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5304);
    if ($tmp5305.value) {
    {
        panda$core$String* $tmp5307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5306, end5297);
        panda$core$String* $tmp5309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5307, &$s5308);
        (($fn5310) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5309);
    }
    }
    panda$core$Int64 $tmp5311 = panda$collections$Array$get_count$R$panda$core$Int64(p_s->children);
    panda$core$Bit $tmp5312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp5311, ((panda$core$Int64) { 3 }));
    if ($tmp5312.value) {
    {
        (($fn5313) self->$class->vtable[6])(self, ifFalse5280, p_out);
        panda$core$Object* $tmp5314 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        (($fn5315) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5314), p_out);
        panda$core$Object* $tmp5316 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_s->children, ((panda$core$Int64) { 2 }));
        panda$core$Bit $tmp5318 = (($fn5317) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5316));
        panda$core$Bit $tmp5319 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5318);
        if ($tmp5319.value) {
        {
            panda$core$String* $tmp5321 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5320, end5297);
            panda$core$String* $tmp5323 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5321, &$s5322);
            (($fn5324) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5323);
        }
        }
    }
    }
    (($fn5325) self->$class->vtable[6])(self, end5297, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeRangeFor$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_f, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$IRNode* target5326;
    panda$core$String* range5328;
    org$pandalanguage$pandac$IRNode* block5332;
    org$pandalanguage$pandac$Type* t5334;
    panda$core$String* llt5338;
    panda$core$String* indexType5341;
    org$pandalanguage$pandac$ClassDecl* cl5347;
    panda$core$String* numberType5350;
    panda$core$String* index5359;
    panda$core$String* startPtr5370;
    panda$core$String* startPtrCast5381;
    panda$core$String* startFieldPtr5405;
    panda$core$String* start5431;
    panda$core$String* indexValuePtr5448;
    panda$core$String* endPtr5481;
    panda$core$String* endPtrCast5492;
    panda$core$String* endFieldPtr5516;
    panda$core$String* end5542;
    panda$core$String* rawStep5559;
    panda$core$String* step5570;
    panda$core$String* inclusive5586;
    panda$core$String* loopStart5597;
    panda$core$String* loopBody5600;
    panda$core$String* loopEnd5603;
    panda$core$String* loopTest5606;
    panda$core$String* forwardEntry5612;
    panda$core$String* backwardEntry5615;
    panda$core$String* signPrefix5618;
    panda$core$String* direction5623;
    panda$core$String* forwardEntryInclusive5652;
    panda$core$String* forwardEntryExclusive5655;
    panda$core$String* forwardEntryInclusiveTest5672;
    panda$core$String* forwardEntryExclusiveTest5706;
    panda$core$String* backwardEntryInclusive5740;
    panda$core$String* backwardEntryExclusive5743;
    panda$core$String* backwardEntryInclusiveTest5760;
    panda$core$String* backwardEntryExclusiveTest5794;
    panda$core$String* indexValue5828;
    panda$core$String* loopInc5855;
    panda$core$String* forwardLabel5858;
    panda$core$String* backwardLabel5861;
    panda$core$String* forwardDelta5876;
    panda$core$String* forwardInclusiveLabel5893;
    panda$core$String* forwardExclusiveLabel5896;
    panda$core$String* forwardInclusiveTest5909;
    panda$core$String* forwardExclusiveTest5938;
    panda$core$String* backwardDelta5967;
    panda$core$String* negStep5984;
    panda$core$String* backwardInclusiveLabel5998;
    panda$core$String* backwardExclusiveLabel6001;
    panda$core$String* backwardInclusiveTest6014;
    panda$core$String* backwardExclusiveTest6041;
    panda$core$String* inc6068;
    panda$core$String* incStruct6085;
    panda$core$Object* $tmp5327 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 0 }));
    target5326 = ((org$pandalanguage$pandac$IRNode*) $tmp5327);
    panda$core$Object* $tmp5329 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp5331 = (($fn5330) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp5329), p_out);
    range5328 = $tmp5331;
    panda$core$Object* $tmp5333 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 2 }));
    block5332 = ((org$pandalanguage$pandac$IRNode*) $tmp5333);
    panda$core$Object* $tmp5335 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_f->children, ((panda$core$Int64) { 1 }));
    panda$core$Object* $tmp5337 = (($fn5336) ((org$pandalanguage$pandac$IRNode*) $tmp5335)->type->subtypes->$class->vtable[2])(((org$pandalanguage$pandac$IRNode*) $tmp5335)->type->subtypes, ((panda$core$Int64) { 1 }));
    t5334 = ((org$pandalanguage$pandac$Type*) $tmp5337);
    panda$core$String* $tmp5340 = (($fn5339) self->$class->vtable[15])(self, t5334);
    llt5338 = $tmp5340;
    panda$core$Bit $tmp5342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(t5334->typeKind, ((panda$core$Int64) { 11 }));
    if ($tmp5342.value) {
    {
        panda$core$Object* $tmp5344 = (($fn5343) t5334->subtypes->$class->vtable[2])(t5334->subtypes, ((panda$core$Int64) { 0 }));
        panda$core$String* $tmp5346 = (($fn5345) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$Type*) $tmp5344));
        indexType5341 = $tmp5346;
    }
    }
    else {
    {
        indexType5341 = llt5338;
    }
    }
    org$pandalanguage$pandac$ClassDecl* $tmp5349 = (($fn5348) self->compiler->$class->vtable[13])(self->compiler, t5334);
    cl5347 = $tmp5349;
    panda$collections$ListView* $tmp5352 = (($fn5351) self->compiler->$class->vtable[10])(self->compiler, cl5347);
    ITable* $tmp5353 = $tmp5352->$class->itable;
    while ($tmp5353->$class != (panda$core$Class*) &panda$collections$ListView$class) {
        $tmp5353 = $tmp5353->next;
    }
    $fn5355 $tmp5354 = $tmp5353->methods[0];
    panda$core$Object* $tmp5356 = $tmp5354($tmp5352, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp5358 = (($fn5357) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$FieldDecl*) $tmp5356)->type);
    numberType5350 = $tmp5358;
    panda$core$String* $tmp5361 = (($fn5360) self->$class->vtable[29])(self, ((org$pandalanguage$pandac$Variable*) target5326->payload));
    index5359 = $tmp5361;
    panda$core$String* $tmp5363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5362, index5359);
    panda$core$String* $tmp5365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5363, &$s5364);
    panda$core$String* $tmp5366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5365, indexType5341);
    panda$core$String* $tmp5368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5366, &$s5367);
    (($fn5369) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp5368);
    panda$core$String* $tmp5372 = (($fn5371) self->$class->vtable[4])(self);
    startPtr5370 = $tmp5372;
    panda$core$String* $tmp5374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5373, startPtr5370);
    panda$core$String* $tmp5376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5374, &$s5375);
    panda$core$String* $tmp5377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5376, range5328);
    panda$core$String* $tmp5379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5377, &$s5378);
    (($fn5380) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5379);
    panda$core$String* $tmp5383 = (($fn5382) self->$class->vtable[4])(self);
    startPtrCast5381 = $tmp5383;
    panda$core$String* $tmp5385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5384, startPtrCast5381);
    panda$core$String* $tmp5387 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5385, &$s5386);
    org$pandalanguage$pandac$Type* $tmp5388 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp5390 = (($fn5389) self->$class->vtable[15])(self, $tmp5388);
    panda$core$String* $tmp5391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5387, $tmp5390);
    panda$core$String* $tmp5393 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5391, &$s5392);
    panda$core$String* $tmp5394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5393, startPtr5370);
    panda$core$String* $tmp5396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5394, &$s5395);
    panda$core$String* $tmp5399 = (($fn5398) self->$class->vtable[17])(self, t5334);
    panda$core$String* $tmp5400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5397, $tmp5399);
    panda$core$String* $tmp5402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5400, &$s5401);
    panda$core$String* $tmp5403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5396, $tmp5402);
    (($fn5404) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5403);
    panda$core$String* $tmp5407 = (($fn5406) self->$class->vtable[4])(self);
    startFieldPtr5405 = $tmp5407;
    panda$core$String* $tmp5409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5408, startFieldPtr5405);
    panda$core$String* $tmp5411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5409, &$s5410);
    panda$core$String* $tmp5413 = (($fn5412) self->$class->vtable[16])(self, t5334);
    panda$core$String* $tmp5414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5411, $tmp5413);
    panda$core$String* $tmp5416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5414, &$s5415);
    panda$core$String* $tmp5419 = (($fn5418) self->$class->vtable[17])(self, t5334);
    panda$core$String* $tmp5420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5417, $tmp5419);
    panda$core$String* $tmp5422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5420, &$s5421);
    panda$core$String* $tmp5423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5422, startPtrCast5381);
    panda$core$String* $tmp5425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5423, &$s5424);
    panda$core$String* $tmp5426 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5425, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp5428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5426, &$s5427);
    panda$core$String* $tmp5429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5416, $tmp5428);
    (($fn5430) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5429);
    panda$core$String* $tmp5433 = (($fn5432) self->$class->vtable[4])(self);
    start5431 = $tmp5433;
    panda$core$String* $tmp5435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5434, start5431);
    panda$core$String* $tmp5437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5435, &$s5436);
    panda$core$String* $tmp5438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5437, numberType5350);
    panda$core$String* $tmp5440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5438, &$s5439);
    panda$core$String* $tmp5441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5440, numberType5350);
    panda$core$String* $tmp5443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5441, &$s5442);
    panda$core$String* $tmp5444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5443, startFieldPtr5405);
    panda$core$String* $tmp5446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5444, &$s5445);
    (($fn5447) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5446);
    panda$core$String* $tmp5450 = (($fn5449) self->$class->vtable[4])(self);
    indexValuePtr5448 = $tmp5450;
    panda$core$String* $tmp5452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5451, indexValuePtr5448);
    panda$core$String* $tmp5454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5452, &$s5453);
    panda$core$String* $tmp5455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5454, indexType5341);
    panda$core$String* $tmp5457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5455, &$s5456);
    panda$core$String* $tmp5458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5457, indexType5341);
    panda$core$String* $tmp5460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5458, &$s5459);
    panda$core$String* $tmp5461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5460, index5359);
    panda$core$String* $tmp5463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5461, &$s5462);
    panda$core$String* $tmp5465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5463, &$s5464);
    (($fn5466) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5465);
    panda$core$String* $tmp5468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5467, numberType5350);
    panda$core$String* $tmp5470 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5468, &$s5469);
    panda$core$String* $tmp5471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5470, start5431);
    panda$core$String* $tmp5473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5471, &$s5472);
    panda$core$String* $tmp5474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5473, numberType5350);
    panda$core$String* $tmp5476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5474, &$s5475);
    panda$core$String* $tmp5477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5476, indexValuePtr5448);
    panda$core$String* $tmp5479 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5477, &$s5478);
    (($fn5480) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5479);
    panda$core$String* $tmp5483 = (($fn5482) self->$class->vtable[4])(self);
    endPtr5481 = $tmp5483;
    panda$core$String* $tmp5485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5484, endPtr5481);
    panda$core$String* $tmp5487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5485, &$s5486);
    panda$core$String* $tmp5488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5487, range5328);
    panda$core$String* $tmp5490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5488, &$s5489);
    (($fn5491) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5490);
    panda$core$String* $tmp5494 = (($fn5493) self->$class->vtable[4])(self);
    endPtrCast5492 = $tmp5494;
    panda$core$String* $tmp5496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5495, endPtrCast5492);
    panda$core$String* $tmp5498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5496, &$s5497);
    org$pandalanguage$pandac$Type* $tmp5499 = org$pandalanguage$pandac$Type$Object$R$org$pandalanguage$pandac$Type();
    panda$core$String* $tmp5501 = (($fn5500) self->$class->vtable[15])(self, $tmp5499);
    panda$core$String* $tmp5502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5498, $tmp5501);
    panda$core$String* $tmp5504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5502, &$s5503);
    panda$core$String* $tmp5505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5504, endPtr5481);
    panda$core$String* $tmp5507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5505, &$s5506);
    panda$core$String* $tmp5510 = (($fn5509) self->$class->vtable[17])(self, t5334);
    panda$core$String* $tmp5511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5508, $tmp5510);
    panda$core$String* $tmp5513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5511, &$s5512);
    panda$core$String* $tmp5514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5507, $tmp5513);
    (($fn5515) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5514);
    panda$core$String* $tmp5518 = (($fn5517) self->$class->vtable[4])(self);
    endFieldPtr5516 = $tmp5518;
    panda$core$String* $tmp5520 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5519, endFieldPtr5516);
    panda$core$String* $tmp5522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5520, &$s5521);
    panda$core$String* $tmp5524 = (($fn5523) self->$class->vtable[16])(self, t5334);
    panda$core$String* $tmp5525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5522, $tmp5524);
    panda$core$String* $tmp5527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5525, &$s5526);
    panda$core$String* $tmp5529 = (($fn5528) self->$class->vtable[17])(self, t5334);
    panda$core$String* $tmp5530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5527, $tmp5529);
    panda$core$String* $tmp5532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5530, &$s5531);
    panda$core$String* $tmp5534 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5533, endPtrCast5492);
    panda$core$String* $tmp5536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5534, &$s5535);
    panda$core$String* $tmp5537 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp5536, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 2 }))));
    panda$core$String* $tmp5539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5537, &$s5538);
    panda$core$String* $tmp5540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5532, $tmp5539);
    (($fn5541) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5540);
    panda$core$String* $tmp5544 = (($fn5543) self->$class->vtable[4])(self);
    end5542 = $tmp5544;
    panda$core$String* $tmp5546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5545, end5542);
    panda$core$String* $tmp5548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5546, &$s5547);
    panda$core$String* $tmp5549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5548, numberType5350);
    panda$core$String* $tmp5551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5549, &$s5550);
    panda$core$String* $tmp5552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5551, numberType5350);
    panda$core$String* $tmp5554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5552, &$s5553);
    panda$core$String* $tmp5555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5554, endFieldPtr5516);
    panda$core$String* $tmp5557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5555, &$s5556);
    (($fn5558) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5557);
    panda$core$String* $tmp5561 = (($fn5560) self->$class->vtable[4])(self);
    rawStep5559 = $tmp5561;
    panda$core$String* $tmp5563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5562, rawStep5559);
    panda$core$String* $tmp5565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5563, &$s5564);
    panda$core$String* $tmp5566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5565, range5328);
    panda$core$String* $tmp5568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5566, &$s5567);
    (($fn5569) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5568);
    panda$core$Bit $tmp5572 = panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(numberType5350, &$s5571);
    if ($tmp5572.value) {
    {
        panda$core$String* $tmp5574 = (($fn5573) self->$class->vtable[4])(self);
        step5570 = $tmp5574;
        panda$core$String* $tmp5576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5575, step5570);
        panda$core$String* $tmp5578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5576, &$s5577);
        panda$core$String* $tmp5579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5578, rawStep5559);
        panda$core$String* $tmp5581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5579, &$s5580);
        panda$core$String* $tmp5582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5581, numberType5350);
        panda$core$String* $tmp5584 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5582, &$s5583);
        (($fn5585) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5584);
    }
    }
    else {
    {
        step5570 = rawStep5559;
    }
    }
    panda$core$String* $tmp5588 = (($fn5587) self->$class->vtable[4])(self);
    inclusive5586 = $tmp5588;
    panda$core$String* $tmp5590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5589, inclusive5586);
    panda$core$String* $tmp5592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5590, &$s5591);
    panda$core$String* $tmp5593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5592, range5328);
    panda$core$String* $tmp5595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5593, &$s5594);
    (($fn5596) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5595);
    panda$core$String* $tmp5599 = (($fn5598) self->$class->vtable[5])(self);
    loopStart5597 = $tmp5599;
    panda$core$String* $tmp5602 = (($fn5601) self->$class->vtable[5])(self);
    loopBody5600 = $tmp5602;
    panda$core$String* $tmp5605 = (($fn5604) self->$class->vtable[5])(self);
    loopEnd5603 = $tmp5605;
    panda$core$String* $tmp5608 = (($fn5607) self->$class->vtable[5])(self);
    loopTest5606 = $tmp5608;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp5609 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp5609->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp5609->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp5609, ((panda$core$String*) p_f->payload), loopEnd5603, loopTest5606);
    (($fn5611) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp5609));
    panda$core$String* $tmp5614 = (($fn5613) self->$class->vtable[5])(self);
    forwardEntry5612 = $tmp5614;
    panda$core$String* $tmp5617 = (($fn5616) self->$class->vtable[5])(self);
    backwardEntry5615 = $tmp5617;
    panda$core$Bit $tmp5620 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) t5334)->name, &$s5619);
    if ($tmp5620.value) {
    {
        signPrefix5618 = &$s5621;
    }
    }
    else {
    {
        signPrefix5618 = &$s5622;
    }
    }
    panda$core$Bit $tmp5625 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(signPrefix5618, &$s5624);
    if ($tmp5625.value) {
    {
        panda$core$String* $tmp5627 = (($fn5626) self->$class->vtable[4])(self);
        direction5623 = $tmp5627;
        panda$core$String* $tmp5629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5628, direction5623);
        panda$core$String* $tmp5631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5629, &$s5630);
        panda$core$String* $tmp5632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5631, numberType5350);
        panda$core$String* $tmp5634 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5632, &$s5633);
        panda$core$String* $tmp5635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5634, step5570);
        panda$core$String* $tmp5637 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5635, &$s5636);
        (($fn5638) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5637);
    }
    }
    else {
    {
        direction5623 = &$s5639;
    }
    }
    panda$core$String* $tmp5641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5640, direction5623);
    panda$core$String* $tmp5643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5641, &$s5642);
    panda$core$String* $tmp5644 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5643, forwardEntry5612);
    panda$core$String* $tmp5646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5644, &$s5645);
    panda$core$String* $tmp5647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5646, backwardEntry5615);
    panda$core$String* $tmp5649 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5647, &$s5648);
    (($fn5650) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5649);
    (($fn5651) self->$class->vtable[6])(self, forwardEntry5612, p_out);
    panda$core$String* $tmp5654 = (($fn5653) self->$class->vtable[5])(self);
    forwardEntryInclusive5652 = $tmp5654;
    panda$core$String* $tmp5657 = (($fn5656) self->$class->vtable[5])(self);
    forwardEntryExclusive5655 = $tmp5657;
    panda$core$String* $tmp5659 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5658, inclusive5586);
    panda$core$String* $tmp5661 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5659, &$s5660);
    panda$core$String* $tmp5662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5661, forwardEntryInclusive5652);
    panda$core$String* $tmp5664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5662, &$s5663);
    panda$core$String* $tmp5666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5665, forwardEntryExclusive5655);
    panda$core$String* $tmp5668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5666, &$s5667);
    panda$core$String* $tmp5669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5664, $tmp5668);
    (($fn5670) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5669);
    (($fn5671) self->$class->vtable[6])(self, forwardEntryInclusive5652, p_out);
    panda$core$String* $tmp5674 = (($fn5673) self->$class->vtable[4])(self);
    forwardEntryInclusiveTest5672 = $tmp5674;
    panda$core$String* $tmp5676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5675, forwardEntryInclusiveTest5672);
    panda$core$String* $tmp5678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5676, &$s5677);
    panda$core$String* $tmp5679 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5678, signPrefix5618);
    panda$core$String* $tmp5681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5679, &$s5680);
    panda$core$String* $tmp5682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5681, numberType5350);
    panda$core$String* $tmp5684 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5682, &$s5683);
    panda$core$String* $tmp5686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5685, start5431);
    panda$core$String* $tmp5688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5686, &$s5687);
    panda$core$String* $tmp5689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5688, end5542);
    panda$core$String* $tmp5691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5689, &$s5690);
    panda$core$String* $tmp5692 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5684, $tmp5691);
    (($fn5693) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5692);
    panda$core$String* $tmp5695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5694, forwardEntryInclusiveTest5672);
    panda$core$String* $tmp5697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5695, &$s5696);
    panda$core$String* $tmp5698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5697, loopStart5597);
    panda$core$String* $tmp5700 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5698, &$s5699);
    panda$core$String* $tmp5701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5700, loopEnd5603);
    panda$core$String* $tmp5703 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5701, &$s5702);
    (($fn5704) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5703);
    (($fn5705) self->$class->vtable[6])(self, forwardEntryExclusive5655, p_out);
    panda$core$String* $tmp5708 = (($fn5707) self->$class->vtable[4])(self);
    forwardEntryExclusiveTest5706 = $tmp5708;
    panda$core$String* $tmp5710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5709, forwardEntryExclusiveTest5706);
    panda$core$String* $tmp5712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5710, &$s5711);
    panda$core$String* $tmp5713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5712, signPrefix5618);
    panda$core$String* $tmp5715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5713, &$s5714);
    panda$core$String* $tmp5716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5715, numberType5350);
    panda$core$String* $tmp5718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5716, &$s5717);
    panda$core$String* $tmp5720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5719, start5431);
    panda$core$String* $tmp5722 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5720, &$s5721);
    panda$core$String* $tmp5723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5722, end5542);
    panda$core$String* $tmp5725 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5723, &$s5724);
    panda$core$String* $tmp5726 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5718, $tmp5725);
    (($fn5727) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5726);
    panda$core$String* $tmp5729 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5728, forwardEntryExclusiveTest5706);
    panda$core$String* $tmp5731 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5729, &$s5730);
    panda$core$String* $tmp5732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5731, loopStart5597);
    panda$core$String* $tmp5734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5732, &$s5733);
    panda$core$String* $tmp5735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5734, loopEnd5603);
    panda$core$String* $tmp5737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5735, &$s5736);
    (($fn5738) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5737);
    (($fn5739) self->$class->vtable[6])(self, backwardEntry5615, p_out);
    panda$core$String* $tmp5742 = (($fn5741) self->$class->vtable[5])(self);
    backwardEntryInclusive5740 = $tmp5742;
    panda$core$String* $tmp5745 = (($fn5744) self->$class->vtable[5])(self);
    backwardEntryExclusive5743 = $tmp5745;
    panda$core$String* $tmp5747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5746, inclusive5586);
    panda$core$String* $tmp5749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5747, &$s5748);
    panda$core$String* $tmp5750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5749, backwardEntryInclusive5740);
    panda$core$String* $tmp5752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5750, &$s5751);
    panda$core$String* $tmp5754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5753, backwardEntryExclusive5743);
    panda$core$String* $tmp5756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5754, &$s5755);
    panda$core$String* $tmp5757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5752, $tmp5756);
    (($fn5758) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5757);
    (($fn5759) self->$class->vtable[6])(self, backwardEntryInclusive5740, p_out);
    panda$core$String* $tmp5762 = (($fn5761) self->$class->vtable[4])(self);
    backwardEntryInclusiveTest5760 = $tmp5762;
    panda$core$String* $tmp5764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5763, backwardEntryInclusiveTest5760);
    panda$core$String* $tmp5766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5764, &$s5765);
    panda$core$String* $tmp5767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5766, signPrefix5618);
    panda$core$String* $tmp5769 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5767, &$s5768);
    panda$core$String* $tmp5770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5769, numberType5350);
    panda$core$String* $tmp5772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5770, &$s5771);
    panda$core$String* $tmp5774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5773, start5431);
    panda$core$String* $tmp5776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5774, &$s5775);
    panda$core$String* $tmp5777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5776, end5542);
    panda$core$String* $tmp5779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5777, &$s5778);
    panda$core$String* $tmp5780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5772, $tmp5779);
    (($fn5781) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5780);
    panda$core$String* $tmp5783 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5782, backwardEntryInclusiveTest5760);
    panda$core$String* $tmp5785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5783, &$s5784);
    panda$core$String* $tmp5786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5785, loopStart5597);
    panda$core$String* $tmp5788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5786, &$s5787);
    panda$core$String* $tmp5789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5788, loopEnd5603);
    panda$core$String* $tmp5791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5789, &$s5790);
    (($fn5792) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5791);
    (($fn5793) self->$class->vtable[6])(self, backwardEntryExclusive5743, p_out);
    panda$core$String* $tmp5796 = (($fn5795) self->$class->vtable[4])(self);
    backwardEntryExclusiveTest5794 = $tmp5796;
    panda$core$String* $tmp5798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5797, backwardEntryExclusiveTest5794);
    panda$core$String* $tmp5800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5798, &$s5799);
    panda$core$String* $tmp5801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5800, signPrefix5618);
    panda$core$String* $tmp5803 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5801, &$s5802);
    panda$core$String* $tmp5804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5803, numberType5350);
    panda$core$String* $tmp5806 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5804, &$s5805);
    panda$core$String* $tmp5808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5807, start5431);
    panda$core$String* $tmp5810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5808, &$s5809);
    panda$core$String* $tmp5811 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5810, end5542);
    panda$core$String* $tmp5813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5811, &$s5812);
    panda$core$String* $tmp5814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5806, $tmp5813);
    (($fn5815) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5814);
    panda$core$String* $tmp5817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5816, backwardEntryExclusiveTest5794);
    panda$core$String* $tmp5819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5817, &$s5818);
    panda$core$String* $tmp5820 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5819, loopStart5597);
    panda$core$String* $tmp5822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5820, &$s5821);
    panda$core$String* $tmp5823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5822, loopEnd5603);
    panda$core$String* $tmp5825 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5823, &$s5824);
    (($fn5826) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5825);
    (($fn5827) self->$class->vtable[6])(self, loopStart5597, p_out);
    panda$core$String* $tmp5830 = (($fn5829) self->$class->vtable[4])(self);
    indexValue5828 = $tmp5830;
    panda$core$String* $tmp5832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5831, indexValue5828);
    panda$core$String* $tmp5834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5832, &$s5833);
    panda$core$String* $tmp5835 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5834, numberType5350);
    panda$core$String* $tmp5837 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5835, &$s5836);
    panda$core$String* $tmp5838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5837, numberType5350);
    panda$core$String* $tmp5840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5838, &$s5839);
    panda$core$String* $tmp5841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5840, indexValuePtr5448);
    panda$core$String* $tmp5843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5841, &$s5842);
    (($fn5844) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5843);
    (($fn5845) self->$class->vtable[85])(self, block5332, p_out);
    panda$core$Bit $tmp5847 = (($fn5846) self->$class->vtable[7])(self, block5332);
    panda$core$Bit $tmp5848 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp5847);
    if ($tmp5848.value) {
    {
        panda$core$String* $tmp5850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5849, loopTest5606);
        panda$core$String* $tmp5852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5850, &$s5851);
        (($fn5853) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5852);
    }
    }
    (($fn5854) self->$class->vtable[6])(self, loopTest5606, p_out);
    panda$core$String* $tmp5857 = (($fn5856) self->$class->vtable[5])(self);
    loopInc5855 = $tmp5857;
    panda$core$String* $tmp5860 = (($fn5859) self->$class->vtable[5])(self);
    forwardLabel5858 = $tmp5860;
    panda$core$String* $tmp5863 = (($fn5862) self->$class->vtable[5])(self);
    backwardLabel5861 = $tmp5863;
    panda$core$String* $tmp5865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5864, direction5623);
    panda$core$String* $tmp5867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5865, &$s5866);
    panda$core$String* $tmp5868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5867, forwardLabel5858);
    panda$core$String* $tmp5870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5868, &$s5869);
    panda$core$String* $tmp5871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5870, backwardLabel5861);
    panda$core$String* $tmp5873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5871, &$s5872);
    (($fn5874) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5873);
    (($fn5875) self->$class->vtable[6])(self, forwardLabel5858, p_out);
    panda$core$String* $tmp5878 = (($fn5877) self->$class->vtable[4])(self);
    forwardDelta5876 = $tmp5878;
    panda$core$String* $tmp5880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5879, forwardDelta5876);
    panda$core$String* $tmp5882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5880, &$s5881);
    panda$core$String* $tmp5883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5882, numberType5350);
    panda$core$String* $tmp5885 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5883, &$s5884);
    panda$core$String* $tmp5886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5885, end5542);
    panda$core$String* $tmp5888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5886, &$s5887);
    panda$core$String* $tmp5889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5888, indexValue5828);
    panda$core$String* $tmp5891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5889, &$s5890);
    (($fn5892) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5891);
    panda$core$String* $tmp5895 = (($fn5894) self->$class->vtable[5])(self);
    forwardInclusiveLabel5893 = $tmp5895;
    panda$core$String* $tmp5898 = (($fn5897) self->$class->vtable[5])(self);
    forwardExclusiveLabel5896 = $tmp5898;
    panda$core$String* $tmp5900 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5899, inclusive5586);
    panda$core$String* $tmp5902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5900, &$s5901);
    panda$core$String* $tmp5903 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5902, forwardInclusiveLabel5893);
    panda$core$String* $tmp5905 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5903, &$s5904);
    panda$core$String* $tmp5906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5905, forwardExclusiveLabel5896);
    (($fn5907) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5906);
    (($fn5908) self->$class->vtable[6])(self, forwardInclusiveLabel5893, p_out);
    panda$core$String* $tmp5911 = (($fn5910) self->$class->vtable[4])(self);
    forwardInclusiveTest5909 = $tmp5911;
    panda$core$String* $tmp5913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5912, forwardInclusiveTest5909);
    panda$core$String* $tmp5915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5913, &$s5914);
    panda$core$String* $tmp5916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5915, numberType5350);
    panda$core$String* $tmp5918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5916, &$s5917);
    panda$core$String* $tmp5919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5918, forwardDelta5876);
    panda$core$String* $tmp5921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5919, &$s5920);
    panda$core$String* $tmp5922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5921, step5570);
    panda$core$String* $tmp5924 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5922, &$s5923);
    (($fn5925) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5924);
    panda$core$String* $tmp5927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5926, forwardInclusiveTest5909);
    panda$core$String* $tmp5929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5927, &$s5928);
    panda$core$String* $tmp5930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5929, loopInc5855);
    panda$core$String* $tmp5932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5930, &$s5931);
    panda$core$String* $tmp5933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5932, loopEnd5603);
    panda$core$String* $tmp5935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5933, &$s5934);
    (($fn5936) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5935);
    (($fn5937) self->$class->vtable[6])(self, forwardExclusiveLabel5896, p_out);
    panda$core$String* $tmp5940 = (($fn5939) self->$class->vtable[4])(self);
    forwardExclusiveTest5938 = $tmp5940;
    panda$core$String* $tmp5942 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5941, forwardExclusiveTest5938);
    panda$core$String* $tmp5944 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5942, &$s5943);
    panda$core$String* $tmp5945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5944, numberType5350);
    panda$core$String* $tmp5947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5945, &$s5946);
    panda$core$String* $tmp5948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5947, forwardDelta5876);
    panda$core$String* $tmp5950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5948, &$s5949);
    panda$core$String* $tmp5951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5950, step5570);
    panda$core$String* $tmp5953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5951, &$s5952);
    (($fn5954) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5953);
    panda$core$String* $tmp5956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5955, forwardExclusiveTest5938);
    panda$core$String* $tmp5958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5956, &$s5957);
    panda$core$String* $tmp5959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5958, loopInc5855);
    panda$core$String* $tmp5961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5959, &$s5960);
    panda$core$String* $tmp5962 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5961, loopEnd5603);
    panda$core$String* $tmp5964 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5962, &$s5963);
    (($fn5965) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5964);
    (($fn5966) self->$class->vtable[6])(self, backwardLabel5861, p_out);
    panda$core$String* $tmp5969 = (($fn5968) self->$class->vtable[4])(self);
    backwardDelta5967 = $tmp5969;
    panda$core$String* $tmp5971 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5970, backwardDelta5967);
    panda$core$String* $tmp5973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5971, &$s5972);
    panda$core$String* $tmp5974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5973, numberType5350);
    panda$core$String* $tmp5976 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5974, &$s5975);
    panda$core$String* $tmp5977 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5976, indexValue5828);
    panda$core$String* $tmp5979 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5977, &$s5978);
    panda$core$String* $tmp5980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5979, end5542);
    panda$core$String* $tmp5982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5980, &$s5981);
    (($fn5983) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5982);
    panda$core$String* $tmp5986 = (($fn5985) self->$class->vtable[4])(self);
    negStep5984 = $tmp5986;
    panda$core$String* $tmp5988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s5987, negStep5984);
    panda$core$String* $tmp5990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5988, &$s5989);
    panda$core$String* $tmp5991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5990, numberType5350);
    panda$core$String* $tmp5993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5991, &$s5992);
    panda$core$String* $tmp5994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5993, step5570);
    panda$core$String* $tmp5996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp5994, &$s5995);
    (($fn5997) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp5996);
    panda$core$String* $tmp6000 = (($fn5999) self->$class->vtable[5])(self);
    backwardInclusiveLabel5998 = $tmp6000;
    panda$core$String* $tmp6003 = (($fn6002) self->$class->vtable[5])(self);
    backwardExclusiveLabel6001 = $tmp6003;
    panda$core$String* $tmp6005 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6004, inclusive5586);
    panda$core$String* $tmp6007 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6005, &$s6006);
    panda$core$String* $tmp6008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6007, backwardInclusiveLabel5998);
    panda$core$String* $tmp6010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6008, &$s6009);
    panda$core$String* $tmp6011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6010, backwardExclusiveLabel6001);
    (($fn6012) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6011);
    (($fn6013) self->$class->vtable[6])(self, backwardInclusiveLabel5998, p_out);
    panda$core$String* $tmp6016 = (($fn6015) self->$class->vtable[4])(self);
    backwardInclusiveTest6014 = $tmp6016;
    panda$core$String* $tmp6018 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6017, backwardInclusiveTest6014);
    panda$core$String* $tmp6020 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6018, &$s6019);
    panda$core$String* $tmp6021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6020, numberType5350);
    panda$core$String* $tmp6023 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6021, &$s6022);
    panda$core$String* $tmp6024 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6023, backwardDelta5967);
    panda$core$String* $tmp6026 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6024, &$s6025);
    panda$core$String* $tmp6027 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6026, negStep5984);
    (($fn6028) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6027);
    panda$core$String* $tmp6030 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6029, backwardInclusiveTest6014);
    panda$core$String* $tmp6032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6030, &$s6031);
    panda$core$String* $tmp6033 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6032, loopInc5855);
    panda$core$String* $tmp6035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6033, &$s6034);
    panda$core$String* $tmp6036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6035, loopEnd5603);
    panda$core$String* $tmp6038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6036, &$s6037);
    (($fn6039) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6038);
    (($fn6040) self->$class->vtable[6])(self, backwardExclusiveLabel6001, p_out);
    panda$core$String* $tmp6043 = (($fn6042) self->$class->vtable[4])(self);
    backwardExclusiveTest6041 = $tmp6043;
    panda$core$String* $tmp6045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6044, backwardExclusiveTest6041);
    panda$core$String* $tmp6047 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6045, &$s6046);
    panda$core$String* $tmp6048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6047, numberType5350);
    panda$core$String* $tmp6050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6048, &$s6049);
    panda$core$String* $tmp6051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6050, backwardDelta5967);
    panda$core$String* $tmp6053 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6051, &$s6052);
    panda$core$String* $tmp6054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6053, negStep5984);
    (($fn6055) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6054);
    panda$core$String* $tmp6057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6056, backwardExclusiveTest6041);
    panda$core$String* $tmp6059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6057, &$s6058);
    panda$core$String* $tmp6060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6059, loopInc5855);
    panda$core$String* $tmp6062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6060, &$s6061);
    panda$core$String* $tmp6063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6062, loopEnd5603);
    panda$core$String* $tmp6065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6063, &$s6064);
    (($fn6066) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6065);
    (($fn6067) self->$class->vtable[6])(self, loopInc5855, p_out);
    panda$core$String* $tmp6070 = (($fn6069) self->$class->vtable[4])(self);
    inc6068 = $tmp6070;
    panda$core$String* $tmp6072 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6071, inc6068);
    panda$core$String* $tmp6074 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6072, &$s6073);
    panda$core$String* $tmp6075 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6074, numberType5350);
    panda$core$String* $tmp6077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6075, &$s6076);
    panda$core$String* $tmp6078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6077, indexValue5828);
    panda$core$String* $tmp6080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6078, &$s6079);
    panda$core$String* $tmp6081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6080, step5570);
    panda$core$String* $tmp6083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6081, &$s6082);
    (($fn6084) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6083);
    panda$core$String* $tmp6087 = (($fn6086) self->$class->vtable[4])(self);
    incStruct6085 = $tmp6087;
    panda$core$String* $tmp6089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6088, incStruct6085);
    panda$core$String* $tmp6091 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6089, &$s6090);
    panda$core$String* $tmp6092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6091, indexType5341);
    panda$core$String* $tmp6094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6092, &$s6093);
    panda$core$String* $tmp6095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6094, numberType5350);
    panda$core$String* $tmp6097 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6095, &$s6096);
    (($fn6098) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6097);
    panda$core$String* $tmp6100 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6099, numberType5350);
    panda$core$String* $tmp6102 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6100, &$s6101);
    panda$core$String* $tmp6103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6102, inc6068);
    panda$core$String* $tmp6105 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6103, &$s6104);
    (($fn6106) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6105);
    panda$core$String* $tmp6108 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6107, indexType5341);
    panda$core$String* $tmp6110 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6108, &$s6109);
    panda$core$String* $tmp6111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6110, incStruct6085);
    panda$core$String* $tmp6113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6111, &$s6112);
    panda$core$String* $tmp6114 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6113, indexType5341);
    panda$core$String* $tmp6116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6114, &$s6115);
    panda$core$String* $tmp6117 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6116, index5359);
    panda$core$String* $tmp6119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6117, &$s6118);
    (($fn6120) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6119);
    panda$core$String* $tmp6122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6121, loopStart5597);
    panda$core$String* $tmp6124 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6122, &$s6123);
    (($fn6125) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6124);
    (($fn6126) self->$class->vtable[6])(self, loopEnd5603, p_out);
    (($fn6127) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeWhile$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_w, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart6128;
    panda$core$String* loopBody6131;
    panda$core$String* loopEnd6134;
    panda$core$String* test6146;
    panda$core$String* testBit6150;
    panda$core$String* $tmp6130 = (($fn6129) self->$class->vtable[5])(self);
    loopStart6128 = $tmp6130;
    panda$core$String* $tmp6133 = (($fn6132) self->$class->vtable[5])(self);
    loopBody6131 = $tmp6133;
    panda$core$String* $tmp6136 = (($fn6135) self->$class->vtable[5])(self);
    loopEnd6134 = $tmp6136;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6137 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp6137->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp6137->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp6137, ((panda$core$String*) p_w->payload), loopEnd6134, loopStart6128);
    (($fn6139) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp6137));
    panda$core$String* $tmp6141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6140, loopStart6128);
    panda$core$String* $tmp6143 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6141, &$s6142);
    (($fn6144) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6143);
    (($fn6145) self->$class->vtable[6])(self, loopStart6128, p_out);
    panda$core$Object* $tmp6147 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6149 = (($fn6148) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6147), p_out);
    test6146 = $tmp6149;
    panda$core$String* $tmp6152 = (($fn6151) self->$class->vtable[4])(self);
    testBit6150 = $tmp6152;
    panda$core$String* $tmp6154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6153, testBit6150);
    panda$core$String* $tmp6156 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6154, &$s6155);
    panda$core$String* $tmp6157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6156, test6146);
    panda$core$String* $tmp6159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6157, &$s6158);
    (($fn6160) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6159);
    panda$core$String* $tmp6162 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6161, testBit6150);
    panda$core$String* $tmp6164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6162, &$s6163);
    panda$core$String* $tmp6165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6164, loopBody6131);
    panda$core$String* $tmp6167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6165, &$s6166);
    panda$core$String* $tmp6168 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6167, loopEnd6134);
    panda$core$String* $tmp6170 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6168, &$s6169);
    (($fn6171) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6170);
    (($fn6172) self->$class->vtable[6])(self, loopBody6131, p_out);
    panda$core$Object* $tmp6173 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    (($fn6174) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6173), p_out);
    panda$core$Object* $tmp6175 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_w->children, ((panda$core$Int64) { 1 }));
    panda$core$Bit $tmp6177 = (($fn6176) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6175));
    panda$core$Bit $tmp6178 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6177);
    if ($tmp6178.value) {
    {
        panda$core$String* $tmp6180 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6179, loopStart6128);
        panda$core$String* $tmp6182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6180, &$s6181);
        (($fn6183) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6182);
    }
    }
    (($fn6184) self->$class->vtable[6])(self, loopEnd6134, p_out);
    (($fn6185) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDo$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_d, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart6186;
    panda$core$String* loopBody6189;
    panda$core$String* loopEnd6192;
    panda$core$String* test6204;
    panda$core$String* testBit6208;
    panda$core$String* $tmp6188 = (($fn6187) self->$class->vtable[5])(self);
    loopStart6186 = $tmp6188;
    panda$core$String* $tmp6191 = (($fn6190) self->$class->vtable[5])(self);
    loopBody6189 = $tmp6191;
    panda$core$String* $tmp6194 = (($fn6193) self->$class->vtable[5])(self);
    loopEnd6192 = $tmp6194;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6195 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp6195->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp6195->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp6195, ((panda$core$String*) p_d->payload), loopEnd6192, loopStart6186);
    (($fn6197) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp6195));
    panda$core$String* $tmp6199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6198, loopBody6189);
    panda$core$String* $tmp6201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6199, &$s6200);
    (($fn6202) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6201);
    (($fn6203) self->$class->vtable[6])(self, loopStart6186, p_out);
    panda$core$Object* $tmp6205 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 1 }));
    panda$core$String* $tmp6207 = (($fn6206) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6205), p_out);
    test6204 = $tmp6207;
    panda$core$String* $tmp6210 = (($fn6209) self->$class->vtable[4])(self);
    testBit6208 = $tmp6210;
    panda$core$String* $tmp6212 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6211, testBit6208);
    panda$core$String* $tmp6214 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6212, &$s6213);
    panda$core$String* $tmp6215 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6214, test6204);
    panda$core$String* $tmp6217 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6215, &$s6216);
    (($fn6218) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6217);
    panda$core$String* $tmp6220 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6219, testBit6208);
    panda$core$String* $tmp6222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6220, &$s6221);
    panda$core$String* $tmp6223 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6222, loopBody6189);
    panda$core$String* $tmp6225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6223, &$s6224);
    panda$core$String* $tmp6226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6225, loopEnd6192);
    panda$core$String* $tmp6228 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6226, &$s6227);
    (($fn6229) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6228);
    (($fn6230) self->$class->vtable[6])(self, loopBody6189, p_out);
    panda$core$Object* $tmp6231 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    (($fn6232) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6231), p_out);
    panda$core$Object* $tmp6233 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_d->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp6235 = (($fn6234) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6233));
    panda$core$Bit $tmp6236 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6235);
    if ($tmp6236.value) {
    {
        panda$core$String* $tmp6238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6237, loopStart6186);
        panda$core$String* $tmp6240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6238, &$s6239);
        (($fn6241) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6240);
    }
    }
    (($fn6242) self->$class->vtable[6])(self, loopEnd6192, p_out);
    (($fn6243) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeLoop$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_l, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* loopStart6244;
    panda$core$String* loopEnd6247;
    panda$core$String* $tmp6246 = (($fn6245) self->$class->vtable[5])(self);
    loopStart6244 = $tmp6246;
    panda$core$String* $tmp6249 = (($fn6248) self->$class->vtable[5])(self);
    loopEnd6247 = $tmp6249;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6250 = (org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) malloc(40);
    $tmp6250->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$class;
    $tmp6250->refCount.value = 1;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String($tmp6250, ((panda$core$String*) p_l->payload), loopEnd6247, loopStart6244);
    (($fn6252) self->loopDescriptors->$class->vtable[2])(self->loopDescriptors, ((panda$core$Object*) $tmp6250));
    panda$core$String* $tmp6254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6253, loopStart6244);
    panda$core$String* $tmp6256 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6254, &$s6255);
    (($fn6257) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6256);
    (($fn6258) self->$class->vtable[6])(self, loopStart6244, p_out);
    panda$core$Object* $tmp6259 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    (($fn6260) self->$class->vtable[85])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6259), p_out);
    panda$core$Object* $tmp6261 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_l->children, ((panda$core$Int64) { 0 }));
    panda$core$Bit $tmp6263 = (($fn6262) self->$class->vtable[7])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6261));
    panda$core$Bit $tmp6264 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6263);
    if ($tmp6264.value) {
    {
        panda$core$String* $tmp6266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6265, loopStart6244);
        panda$core$String* $tmp6268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6266, &$s6267);
        (($fn6269) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6268);
    }
    }
    (($fn6270) self->$class->vtable[6])(self, loopEnd6247, p_out);
    (($fn6271) self->loopDescriptors->$class->vtable[3])(self->loopDescriptors);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeVarTarget$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_target, org$pandalanguage$pandac$IRNode* p_value, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$950846272;
    org$pandalanguage$pandac$Variable* v6274;
    panda$core$String* ref6287;
    {
        $match$950846272 = p_target->kind;
        panda$core$Bit $tmp6273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950846272, ((panda$core$Int64) { 1016 }));
        if ($tmp6273.value) {
        {
            v6274 = ((org$pandalanguage$pandac$Variable*) p_target->payload);
            panda$core$String* $tmp6277 = (($fn6276) self->$class->vtable[29])(self, v6274);
            panda$core$String* $tmp6278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6275, $tmp6277);
            panda$core$String* $tmp6280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6278, &$s6279);
            panda$core$String* $tmp6282 = (($fn6281) self->$class->vtable[15])(self, v6274->type);
            panda$core$String* $tmp6283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6280, $tmp6282);
            panda$core$String* $tmp6285 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6283, &$s6284);
            (($fn6286) ((panda$io$OutputStream*) self->methodHeader)->$class->vtable[19])(((panda$io$OutputStream*) self->methodHeader), $tmp6285);
            if (((panda$core$Bit) { p_value != NULL }).value) {
            {
                panda$core$String* $tmp6289 = (($fn6288) self->$class->vtable[67])(self, p_value, p_out);
                ref6287 = $tmp6289;
                panda$core$String* $tmp6291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6290, ref6287);
                panda$core$String* $tmp6293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6291, &$s6292);
                panda$core$String* $tmp6295 = (($fn6294) self->$class->vtable[15])(self, v6274->type);
                panda$core$String* $tmp6296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6293, $tmp6295);
                panda$core$String* $tmp6298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6296, &$s6297);
                panda$core$String* $tmp6300 = (($fn6299) self->$class->vtable[29])(self, v6274);
                panda$core$String* $tmp6301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6298, $tmp6300);
                panda$core$String* $tmp6303 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6301, &$s6302);
                (($fn6304) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6303);
            }
            }
        }
        }
        else {
        panda$core$Bit $tmp6305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$950846272, ((panda$core$Int64) { 1022 }));
        if ($tmp6305.value) {
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
    panda$collections$Iterator* decl$Iter6306;
    org$pandalanguage$pandac$IRNode* decl6318;
    {
        ITable* $tmp6307 = ((panda$collections$Iterable*) p_v->children)->$class->itable;
        while ($tmp6307->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6307 = $tmp6307->next;
        }
        $fn6309 $tmp6308 = $tmp6307->methods[0];
        panda$collections$Iterator* $tmp6310 = $tmp6308(((panda$collections$Iterable*) p_v->children));
        decl$Iter6306 = $tmp6310;
        $l6311:;
        ITable* $tmp6313 = decl$Iter6306->$class->itable;
        while ($tmp6313->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6313 = $tmp6313->next;
        }
        $fn6315 $tmp6314 = $tmp6313->methods[0];
        panda$core$Bit $tmp6316 = $tmp6314(decl$Iter6306);
        panda$core$Bit $tmp6317 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6316);
        if (!$tmp6317.value) goto $l6312;
        {
            ITable* $tmp6319 = decl$Iter6306->$class->itable;
            while ($tmp6319->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6319 = $tmp6319->next;
            }
            $fn6321 $tmp6320 = $tmp6319->methods[1];
            panda$core$Object* $tmp6322 = $tmp6320(decl$Iter6306);
            decl6318 = ((org$pandalanguage$pandac$IRNode*) $tmp6322);
            panda$core$Int64 $tmp6323 = panda$collections$Array$get_count$R$panda$core$Int64(decl6318->children);
            panda$core$Bit $tmp6324 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6323, ((panda$core$Int64) { 1 }));
            if ($tmp6324.value) {
            {
                panda$core$Object* $tmp6325 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6318->children, ((panda$core$Int64) { 0 }));
                panda$core$Object* $tmp6326 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6318->children, ((panda$core$Int64) { 1 }));
                (($fn6327) self->$class->vtable[76])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6325), ((org$pandalanguage$pandac$IRNode*) $tmp6326), p_out);
            }
            }
            else {
            {
                panda$core$Object* $tmp6328 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(decl6318->children, ((panda$core$Int64) { 0 }));
                (($fn6329) self->$class->vtable[76])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6328), NULL, p_out);
            }
            }
        }
        goto $l6311;
        $l6312:;
    }
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$getLValue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_lvalue, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$962686330;
    panda$core$String* base6340;
    panda$core$String* ptr6344;
    org$pandalanguage$pandac$ClassDecl* cl6347;
    panda$collections$ListView* fields6351;
    panda$core$Int64 index6354;
    panda$core$Range $tmp6355;
    panda$core$String* result6421;
    panda$core$String* reused6425;
    {
        $match$962686330 = p_lvalue->kind;
        panda$core$Bit $tmp6331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962686330, ((panda$core$Int64) { 1009 }));
        if ($tmp6331.value) {
        {
            org$pandalanguage$pandac$IRNode* $tmp6333 = (($fn6332) self->compiler->$class->vtable[50])(self->compiler, p_lvalue);
            panda$core$String* $tmp6335 = (($fn6334) self->$class->vtable[78])(self, $tmp6333, p_out);
            return $tmp6335;
        }
        }
        else {
        panda$core$Bit $tmp6336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962686330, ((panda$core$Int64) { 1016 }));
        if ($tmp6336.value) {
        {
            panda$core$String* $tmp6338 = (($fn6337) self->$class->vtable[29])(self, ((org$pandalanguage$pandac$Variable*) p_lvalue->payload));
            return $tmp6338;
        }
        }
        else {
        panda$core$Bit $tmp6339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962686330, ((panda$core$Int64) { 1026 }));
        if ($tmp6339.value) {
        {
            panda$core$Object* $tmp6341 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6343 = (($fn6342) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6341), p_out);
            base6340 = $tmp6343;
            panda$core$String* $tmp6346 = (($fn6345) self->$class->vtable[4])(self);
            ptr6344 = $tmp6346;
            panda$core$Object* $tmp6348 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            org$pandalanguage$pandac$ClassDecl* $tmp6350 = (($fn6349) self->compiler->$class->vtable[13])(self->compiler, ((org$pandalanguage$pandac$IRNode*) $tmp6348)->type);
            cl6347 = $tmp6350;
            panda$collections$ListView* $tmp6353 = (($fn6352) self->compiler->$class->vtable[10])(self->compiler, cl6347);
            fields6351 = $tmp6353;
            index6354 = ((panda$core$Int64) { -1 });
            ITable* $tmp6356 = ((panda$collections$CollectionView*) fields6351)->$class->itable;
            while ($tmp6356->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp6356 = $tmp6356->next;
            }
            $fn6358 $tmp6357 = $tmp6356->methods[0];
            panda$core$Int64 $tmp6359 = $tmp6357(((panda$collections$CollectionView*) fields6351));
            panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp6355, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp6359)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
            int64_t $tmp6361 = ((panda$core$Int64$wrapper*) $tmp6355.start)->value.value;
            panda$core$Int64 i6360 = { $tmp6361 };
            int64_t $tmp6363 = ((panda$core$Int64$wrapper*) $tmp6355.end)->value.value;
            int64_t $tmp6364 = $tmp6355.step.value;
            bool $tmp6365 = $tmp6355.inclusive.value;
            bool $tmp6372 = $tmp6364 > 0;
            if ($tmp6372) goto $l6370; else goto $l6371;
            $l6370:;
            if ($tmp6365) goto $l6373; else goto $l6374;
            $l6373:;
            if ($tmp6361 <= $tmp6363) goto $l6366; else goto $l6368;
            $l6374:;
            if ($tmp6361 < $tmp6363) goto $l6366; else goto $l6368;
            $l6371:;
            if ($tmp6365) goto $l6375; else goto $l6376;
            $l6375:;
            if ($tmp6361 >= $tmp6363) goto $l6366; else goto $l6368;
            $l6376:;
            if ($tmp6361 > $tmp6363) goto $l6366; else goto $l6368;
            $l6366:;
            {
                ITable* $tmp6378 = fields6351->$class->itable;
                while ($tmp6378->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp6378 = $tmp6378->next;
                }
                $fn6380 $tmp6379 = $tmp6378->methods[0];
                panda$core$Object* $tmp6381 = $tmp6379(fields6351, i6360);
                if (((panda$core$Bit) { ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) $tmp6381))->name) == ((panda$core$Object*) ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$FieldDecl*) p_lvalue->payload))->name) }).value) {
                {
                    index6354 = i6360;
                    goto $l6368;
                }
                }
            }
            $l6369:;
            if ($tmp6372) goto $l6383; else goto $l6384;
            $l6383:;
            int64_t $tmp6385 = $tmp6363 - i6360.value;
            if ($tmp6365) goto $l6386; else goto $l6387;
            $l6386:;
            if ($tmp6385 >= $tmp6364) goto $l6382; else goto $l6368;
            $l6387:;
            if ($tmp6385 > $tmp6364) goto $l6382; else goto $l6368;
            $l6384:;
            int64_t $tmp6389 = i6360.value - $tmp6363;
            if ($tmp6365) goto $l6390; else goto $l6391;
            $l6390:;
            if ($tmp6389 >= -$tmp6364) goto $l6382; else goto $l6368;
            $l6391:;
            if ($tmp6389 > -$tmp6364) goto $l6382; else goto $l6368;
            $l6382:;
            i6360.value += $tmp6364;
            goto $l6366;
            $l6368:;
            panda$core$String* $tmp6394 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6393, ptr6344);
            panda$core$String* $tmp6396 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6394, &$s6395);
            org$pandalanguage$pandac$Type* $tmp6398 = (($fn6397) cl6347->$class->vtable[3])(cl6347);
            panda$core$String* $tmp6400 = (($fn6399) self->$class->vtable[14])(self, $tmp6398);
            panda$core$String* $tmp6401 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6396, $tmp6400);
            panda$core$String* $tmp6403 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6401, &$s6402);
            org$pandalanguage$pandac$Type* $tmp6406 = (($fn6405) cl6347->$class->vtable[3])(cl6347);
            panda$core$String* $tmp6408 = (($fn6407) self->$class->vtable[14])(self, $tmp6406);
            panda$core$String* $tmp6409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6404, $tmp6408);
            panda$core$String* $tmp6411 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6409, &$s6410);
            panda$core$String* $tmp6412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6411, base6340);
            panda$core$String* $tmp6414 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6412, &$s6413);
            panda$core$String* $tmp6415 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6414, ((panda$core$Object*) wrap_panda$core$Int64(index6354)));
            panda$core$String* $tmp6417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6415, &$s6416);
            panda$core$String* $tmp6418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6403, $tmp6417);
            (($fn6419) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6418);
            return ptr6344;
        }
        }
        else {
        panda$core$Bit $tmp6420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$962686330, ((panda$core$Int64) { 1027 }));
        if ($tmp6420.value) {
        {
            panda$core$Object* $tmp6422 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_lvalue->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6424 = (($fn6423) self->$class->vtable[78])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6422), p_out);
            result6421 = $tmp6424;
            panda$core$String* $tmp6427 = (($fn6426) self->$class->vtable[4])(self);
            reused6425 = $tmp6427;
            panda$core$String* $tmp6429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6428, reused6425);
            panda$core$String* $tmp6431 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6429, &$s6430);
            panda$core$String* $tmp6433 = (($fn6432) self->$class->vtable[15])(self, p_lvalue->type);
            panda$core$String* $tmp6434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6431, $tmp6433);
            panda$core$String* $tmp6436 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6434, &$s6435);
            panda$core$String* $tmp6439 = (($fn6438) self->$class->vtable[15])(self, p_lvalue->type);
            panda$core$String* $tmp6440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6437, $tmp6439);
            panda$core$String* $tmp6442 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6440, &$s6441);
            panda$core$String* $tmp6443 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6442, result6421);
            panda$core$String* $tmp6445 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6443, &$s6444);
            panda$core$String* $tmp6446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6436, $tmp6445);
            (($fn6447) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6446);
            (($fn6448) self->reusedValues->$class->vtable[5])(self->reusedValues, ((panda$core$Object*) ((panda$collections$Key*) wrap_panda$core$UInt64(((panda$core$UInt64$wrapper*) p_lvalue->payload)->value))), ((panda$core$Object*) reused6425));
            return result6421;
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
    panda$core$String* lvalue6449;
    panda$core$String* value6463;
    panda$core$String* t6464;
    panda$core$Int64 op6468;
    panda$core$String* right6470;
    panda$core$Object* $tmp6451 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6453 = (($fn6452) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6451)->type);
    panda$core$String* $tmp6454 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6450, $tmp6453);
    panda$core$String* $tmp6456 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6454, &$s6455);
    panda$core$Object* $tmp6457 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6459 = (($fn6458) self->$class->vtable[78])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6457), p_out);
    panda$core$String* $tmp6460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6456, $tmp6459);
    panda$core$String* $tmp6462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6460, &$s6461);
    lvalue6449 = $tmp6462;
    panda$core$Object* $tmp6465 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6467 = (($fn6466) self->$class->vtable[15])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6465)->type);
    t6464 = $tmp6467;
    op6468 = ((panda$core$Int64$wrapper*) p_a->payload)->value;
    panda$core$Bit $tmp6469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(op6468, ((panda$core$Int64) { 73 }));
    if ($tmp6469.value) {
    {
        panda$core$Object* $tmp6471 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6473 = (($fn6472) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6471), p_out);
        right6470 = $tmp6473;
        panda$core$String* $tmp6475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6474, t6464);
        panda$core$String* $tmp6477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6475, &$s6476);
        panda$core$String* $tmp6478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6477, right6470);
        panda$core$String* $tmp6480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6478, &$s6479);
        value6463 = $tmp6480;
    }
    }
    else {
    {
    }
    }
    panda$core$String* $tmp6482 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6481, value6463);
    panda$core$String* $tmp6484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6482, &$s6483);
    panda$core$String* $tmp6485 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6484, lvalue6449);
    panda$core$String* $tmp6487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6485, &$s6486);
    (($fn6488) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6487);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeReturn$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_r, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* inline6494;
    panda$core$String* result6497;
    panda$core$Int64 $tmp6489 = panda$collections$Array$get_count$R$panda$core$Int64(p_r->children);
    panda$core$Bit $tmp6490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6489, ((panda$core$Int64) { 1 }));
    if ($tmp6490.value) {
    {
        panda$core$Int64 $tmp6492 = (($fn6491) self->inlineContext->$class->vtable[7])(self->inlineContext);
        panda$core$Bit $tmp6493 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6492, ((panda$core$Int64) { 0 }));
        if ($tmp6493.value) {
        {
            panda$core$Object* $tmp6496 = (($fn6495) self->inlineContext->$class->vtable[4])(self->inlineContext);
            inline6494 = ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp6496);
            panda$core$Object* $tmp6498 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6500 = (($fn6499) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6498), p_out);
            result6497 = $tmp6500;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair* $tmp6501 = (org$pandalanguage$pandac$LLVMCodeGenerator$Pair*) malloc(32);
            $tmp6501->$class = (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$Pair$class;
            $tmp6501->refCount.value = 1;
            org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B($tmp6501, ((panda$core$Object*) self->currentBlock), ((panda$core$Object*) result6497));
            panda$collections$Array$add$panda$collections$Array$T(inline6494->returns, ((panda$core$Object*) $tmp6501));
            panda$core$String* $tmp6504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6503, inline6494->exitLabel);
            panda$core$String* $tmp6506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6504, &$s6505);
            org$pandalanguage$pandac$Position* $tmp6508 = (($fn6507) self->compiler->$class->vtable[94])(self->compiler, p_r->offset);
            panda$core$String* $tmp6509 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp6506, ((panda$core$Object*) $tmp6508));
            panda$core$String* $tmp6511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6509, &$s6510);
            (($fn6512) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6511);
        }
        }
        else {
        {
            panda$core$Object* $tmp6514 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_r->children, ((panda$core$Int64) { 0 }));
            panda$core$String* $tmp6516 = (($fn6515) self->$class->vtable[67])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6514), p_out);
            panda$core$String* $tmp6517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6513, $tmp6516);
            panda$core$String* $tmp6519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6517, &$s6518);
            (($fn6520) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6519);
        }
        }
    }
    }
    else {
    {
        panda$core$Int64 $tmp6522 = (($fn6521) self->inlineContext->$class->vtable[7])(self->inlineContext);
        panda$core$Bit $tmp6523 = panda$core$Int64$$GT$panda$core$Int64$R$panda$core$Bit($tmp6522, ((panda$core$Int64) { 0 }));
        if ($tmp6523.value) {
        {
            panda$core$Object* $tmp6526 = (($fn6525) self->inlineContext->$class->vtable[4])(self->inlineContext);
            panda$core$String* $tmp6527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6524, ((org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext*) $tmp6526)->exitLabel);
            panda$core$String* $tmp6529 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6527, &$s6528);
            (($fn6530) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6529);
        }
        }
        else {
        {
            (($fn6532) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6531);
        }
        }
    }
    }
}
org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* org$pandalanguage$pandac$LLVMCodeGenerator$findLoop$panda$core$String$Q$R$org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor(org$pandalanguage$pandac$LLVMCodeGenerator* self, panda$core$String* p_name) {
    panda$core$Range $tmp6535;
    if (((panda$core$Bit) { p_name == NULL }).value) {
    {
        panda$core$Object* $tmp6534 = (($fn6533) self->loopDescriptors->$class->vtable[4])(self->loopDescriptors);
        return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6534);
    }
    }
    panda$core$Int64 $tmp6537 = (($fn6536) self->loopDescriptors->$class->vtable[7])(self->loopDescriptors);
    panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp6535, ((panda$core$Object*) wrap_panda$core$Int64(((panda$core$Int64) { 0 }))), ((panda$core$Object*) wrap_panda$core$Int64($tmp6537)), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { false }));
    int64_t $tmp6539 = ((panda$core$Int64$wrapper*) $tmp6535.start)->value.value;
    panda$core$Int64 i6538 = { $tmp6539 };
    int64_t $tmp6541 = ((panda$core$Int64$wrapper*) $tmp6535.end)->value.value;
    int64_t $tmp6542 = $tmp6535.step.value;
    bool $tmp6543 = $tmp6535.inclusive.value;
    bool $tmp6550 = $tmp6542 > 0;
    if ($tmp6550) goto $l6548; else goto $l6549;
    $l6548:;
    if ($tmp6543) goto $l6551; else goto $l6552;
    $l6551:;
    if ($tmp6539 <= $tmp6541) goto $l6544; else goto $l6546;
    $l6552:;
    if ($tmp6539 < $tmp6541) goto $l6544; else goto $l6546;
    $l6549:;
    if ($tmp6543) goto $l6553; else goto $l6554;
    $l6553:;
    if ($tmp6539 >= $tmp6541) goto $l6544; else goto $l6546;
    $l6554:;
    if ($tmp6539 > $tmp6541) goto $l6544; else goto $l6546;
    $l6544:;
    {
        panda$core$Object* $tmp6558 = (($fn6557) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i6538);
        bool $tmp6556 = ((panda$core$Bit) { ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6558)->loopLabel != NULL }).value;
        if (!$tmp6556) goto $l6559;
        panda$core$Object* $tmp6561 = (($fn6560) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i6538);
        panda$core$Bit $tmp6562 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6561)->loopLabel, p_name);
        $tmp6556 = $tmp6562.value;
        $l6559:;
        panda$core$Bit $tmp6563 = { $tmp6556 };
        if ($tmp6563.value) {
        {
            panda$core$Object* $tmp6565 = (($fn6564) self->loopDescriptors->$class->vtable[5])(self->loopDescriptors, i6538);
            return ((org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor*) $tmp6565);
        }
        }
    }
    $l6547:;
    if ($tmp6550) goto $l6567; else goto $l6568;
    $l6567:;
    int64_t $tmp6569 = $tmp6541 - i6538.value;
    if ($tmp6543) goto $l6570; else goto $l6571;
    $l6570:;
    if ($tmp6569 >= $tmp6542) goto $l6566; else goto $l6546;
    $l6571:;
    if ($tmp6569 > $tmp6542) goto $l6566; else goto $l6546;
    $l6568:;
    int64_t $tmp6573 = i6538.value - $tmp6541;
    if ($tmp6543) goto $l6574; else goto $l6575;
    $l6574:;
    if ($tmp6573 >= -$tmp6542) goto $l6566; else goto $l6546;
    $l6575:;
    if ($tmp6573 > -$tmp6542) goto $l6566; else goto $l6546;
    $l6566:;
    i6538.value += $tmp6542;
    goto $l6544;
    $l6546:;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeBreak$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_b, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6577;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6579 = (($fn6578) self->$class->vtable[81])(self, ((panda$core$String*) p_b->payload));
    desc6577 = $tmp6579;
    panda$core$String* $tmp6581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6580, desc6577->breakLabel);
    panda$core$String* $tmp6583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6581, &$s6582);
    (($fn6584) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6583);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeContinue$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_c, panda$io$IndentedOutputStream* p_out) {
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* desc6585;
    org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* $tmp6587 = (($fn6586) self->$class->vtable[81])(self, ((panda$core$String*) p_c->payload));
    desc6585 = $tmp6587;
    panda$core$String* $tmp6589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6588, desc6585->continueLabel);
    panda$core$String* $tmp6591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6589, &$s6590);
    (($fn6592) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6591);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeAssert$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_a, panda$io$IndentedOutputStream* p_out) {
    panda$core$String* test6594;
    panda$core$String* ifTrue6598;
    panda$core$String* ifFalse6601;
    org$pandalanguage$pandac$Position* p6616;
    panda$core$String* name6619;
    panda$core$String$Index$nullable index6620;
    panda$core$Range $tmp6623;
    panda$core$String* nameRef6625;
    panda$core$String* line6628;
    panda$core$String* msg6633;
    panda$collections$Iterator* m$Iter6641;
    org$pandalanguage$pandac$MethodDecl* m6656;
    panda$core$Bit $tmp6593 = panda$core$Int64$$LT$panda$core$Int64$R$panda$core$Bit(self->compiler->settings->safetyLevel, ((panda$core$Int64) { 2 }));
    if ($tmp6593.value) {
    {
        return;
    }
    }
    panda$core$Object* $tmp6595 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 0 }));
    panda$core$String* $tmp6597 = (($fn6596) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6595), p_out);
    test6594 = $tmp6597;
    panda$core$String* $tmp6600 = (($fn6599) self->$class->vtable[5])(self);
    ifTrue6598 = $tmp6600;
    panda$core$String* $tmp6603 = (($fn6602) self->$class->vtable[5])(self);
    ifFalse6601 = $tmp6603;
    panda$core$String* $tmp6605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6604, test6594);
    panda$core$String* $tmp6607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6605, &$s6606);
    panda$core$String* $tmp6608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6607, ifTrue6598);
    panda$core$String* $tmp6610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6608, &$s6609);
    panda$core$String* $tmp6611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6610, ifFalse6601);
    panda$core$String* $tmp6613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6611, &$s6612);
    (($fn6614) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), $tmp6613);
    (($fn6615) self->$class->vtable[6])(self, ifFalse6601, p_out);
    org$pandalanguage$pandac$Position* $tmp6618 = (($fn6617) self->compiler->$class->vtable[94])(self->compiler, p_a->offset);
    p6616 = $tmp6618;
    panda$core$String$Index$nullable $tmp6622 = panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(p6616->file, &$s6621);
    index6620 = $tmp6622;
    if (((panda$core$Bit) { !index6620.nonnull }).value) {
    {
        name6619 = p6616->file;
    }
    }
    else {
    {
        panda$core$Range$init$panda$core$Range$T$panda$core$Range$T$panda$core$Int64$Q$panda$core$Bit(&$tmp6623, (index6620.nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) index6620.value))) : NULL), (((panda$core$String$Index$nullable) { .nonnull = false }).nonnull ? ((panda$core$Object*) wrap_panda$core$String$Index(((panda$core$String$Index) ((panda$core$String$Index$nullable) { .nonnull = false }).value))) : NULL), ((panda$core$Int64$nullable) { ((panda$core$Int64) { 1 }), true }), ((panda$core$Bit) { true }));
        panda$core$String* $tmp6624 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(p6616->file, $tmp6623);
        name6619 = $tmp6624;
    }
    }
    panda$core$String* $tmp6627 = (($fn6626) self->$class->vtable[59])(self, name6619, p_out);
    nameRef6625 = $tmp6627;
    panda$core$String* $tmp6630 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s6629, ((panda$core$Object*) wrap_panda$core$Int64(p6616->line)));
    panda$core$String* $tmp6632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6630, &$s6631);
    line6628 = $tmp6632;
    panda$core$Int64 $tmp6634 = panda$collections$Array$get_count$R$panda$core$Int64(p_a->children);
    panda$core$Bit $tmp6635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp6634, ((panda$core$Int64) { 2 }));
    if ($tmp6635.value) {
    {
        panda$core$Object* $tmp6636 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(p_a->children, ((panda$core$Int64) { 1 }));
        panda$core$String* $tmp6638 = (($fn6637) self->$class->vtable[66])(self, ((org$pandalanguage$pandac$IRNode*) $tmp6636), p_out);
        msg6633 = $tmp6638;
    }
    }
    else {
    {
        msg6633 = NULL;
    }
    }
    (($fn6640) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s6639);
    {
        org$pandalanguage$pandac$Type* $tmp6642 = org$pandalanguage$pandac$Type$Panda$R$org$pandalanguage$pandac$Type();
        org$pandalanguage$pandac$ClassDecl* $tmp6644 = (($fn6643) self->compiler->$class->vtable[13])(self->compiler, $tmp6642);
        ITable* $tmp6645 = ((panda$collections$Iterable*) $tmp6644->methods)->$class->itable;
        while ($tmp6645->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6645 = $tmp6645->next;
        }
        $fn6647 $tmp6646 = $tmp6645->methods[0];
        panda$collections$Iterator* $tmp6648 = $tmp6646(((panda$collections$Iterable*) $tmp6644->methods));
        m$Iter6641 = $tmp6648;
        $l6649:;
        ITable* $tmp6651 = m$Iter6641->$class->itable;
        while ($tmp6651->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6651 = $tmp6651->next;
        }
        $fn6653 $tmp6652 = $tmp6651->methods[0];
        panda$core$Bit $tmp6654 = $tmp6652(m$Iter6641);
        panda$core$Bit $tmp6655 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6654);
        if (!$tmp6655.value) goto $l6650;
        {
            ITable* $tmp6657 = m$Iter6641->$class->itable;
            while ($tmp6657->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6657 = $tmp6657->next;
            }
            $fn6659 $tmp6658 = $tmp6657->methods[1];
            panda$core$Object* $tmp6660 = $tmp6658(m$Iter6641);
            m6656 = ((org$pandalanguage$pandac$MethodDecl*) $tmp6660);
            panda$core$Bit $tmp6662 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(((org$pandalanguage$pandac$Symbol*) m6656)->name, &$s6661);
            if ($tmp6662.value) {
            {
                (($fn6663) self->compiler->$class->vtable[6])(self->compiler, m6656);
                (($fn6664) self->$class->vtable[87])(self, m6656);
            }
            }
        }
        goto $l6649;
        $l6650:;
    }
    if (((panda$core$Bit) { msg6633 != NULL }).value) {
    {
        panda$core$String* $tmp6667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6665, &$s6666);
        (($fn6668) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6667);
    }
    }
    else {
    {
        (($fn6670) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), &$s6669);
    }
    }
    panda$core$String* $tmp6672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6671, nameRef6625);
    panda$core$String* $tmp6674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6672, &$s6673);
    panda$core$String* $tmp6675 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6674, line6628);
    panda$core$String* $tmp6677 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6675, &$s6676);
    (($fn6678) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6677);
    if (((panda$core$Bit) { msg6633 != NULL }).value) {
    {
        panda$core$String* $tmp6680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6679, msg6633);
        panda$core$String* $tmp6682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6680, &$s6681);
        (($fn6683) ((panda$io$OutputStream*) p_out)->$class->vtable[16])(((panda$io$OutputStream*) p_out), $tmp6682);
    }
    }
    (($fn6685) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6684);
    (($fn6687) ((panda$io$OutputStream*) p_out)->$class->vtable[19])(((panda$io$OutputStream*) p_out), &$s6686);
    (($fn6688) self->$class->vtable[6])(self, ifTrue6598, p_out);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeStatement$org$pandalanguage$pandac$IRNode$panda$io$IndentedOutputStream(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$IRNode* p_stmt, panda$io$IndentedOutputStream* p_out) {
    panda$core$Int64 $match$1039446689;
    {
        $match$1039446689 = p_stmt->kind;
        panda$core$Bit $tmp6690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1023 }));
        if ($tmp6690.value) {
        {
            (($fn6691) self->$class->vtable[79])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1000 }));
        if ($tmp6692.value) {
        {
            (($fn6693) self->$class->vtable[68])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1005 }));
        if ($tmp6694.value) {
        {
            (($fn6695) self->$class->vtable[70])(self, p_stmt, NULL, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1012 }));
        if ($tmp6696.value) {
        {
            (($fn6697) self->$class->vtable[71])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1029 }));
        if ($tmp6698.value) {
        {
            (($fn6699) self->$class->vtable[72])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1013 }));
        if ($tmp6700.value) {
        {
            (($fn6701) self->$class->vtable[73])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1014 }));
        if ($tmp6702.value) {
        {
            (($fn6703) self->$class->vtable[74])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1015 }));
        if ($tmp6704.value) {
        {
            (($fn6705) self->$class->vtable[75])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6709 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1017 }));
        bool $tmp6708 = $tmp6709.value;
        if ($tmp6708) goto $l6710;
        panda$core$Bit $tmp6711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1018 }));
        $tmp6708 = $tmp6711.value;
        $l6710:;
        panda$core$Bit $tmp6712 = { $tmp6708 };
        bool $tmp6707 = $tmp6712.value;
        if ($tmp6707) goto $l6713;
        panda$core$Bit $tmp6714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1019 }));
        $tmp6707 = $tmp6714.value;
        $l6713:;
        panda$core$Bit $tmp6715 = { $tmp6707 };
        bool $tmp6706 = $tmp6715.value;
        if ($tmp6706) goto $l6716;
        panda$core$Bit $tmp6717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1020 }));
        $tmp6706 = $tmp6717.value;
        $l6716:;
        panda$core$Bit $tmp6718 = { $tmp6706 };
        if ($tmp6718.value) {
        {
            (($fn6719) self->$class->vtable[77])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6720 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1008 }));
        if ($tmp6720.value) {
        {
            (($fn6721) self->$class->vtable[80])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1006 }));
        if ($tmp6722.value) {
        {
            (($fn6723) self->$class->vtable[82])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1007 }));
        if ($tmp6724.value) {
        {
            (($fn6725) self->$class->vtable[83])(self, p_stmt, p_out);
        }
        }
        else {
        panda$core$Bit $tmp6726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$1039446689, ((panda$core$Int64) { 1034 }));
        if ($tmp6726.value) {
        {
            (($fn6727) self->$class->vtable[84])(self, p_stmt, p_out);
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
    panda$core$String* result6728;
    org$pandalanguage$pandac$Type* $tmp6730 = (($fn6729) p_m->owner->$class->vtable[3])(p_m->owner);
    panda$core$String* $tmp6732 = (($fn6731) self->$class->vtable[15])(self, $tmp6730);
    result6728 = $tmp6732;
    panda$core$Bit $tmp6734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(p_m->methodKind, ((panda$core$Int64) { 59 }));
    bool $tmp6733 = $tmp6734.value;
    if (!$tmp6733) goto $l6735;
    panda$core$Bit $tmp6737 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(result6728, &$s6736);
    panda$core$Bit $tmp6738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6737);
    $tmp6733 = $tmp6738.value;
    $l6735:;
    panda$core$Bit $tmp6739 = { $tmp6733 };
    if ($tmp6739.value) {
    {
        panda$core$String* $tmp6741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(result6728, &$s6740);
        return $tmp6741;
    }
    }
    return result6728;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$writeDeclaration$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m) {
    panda$core$String* name6742;
    panda$core$Bit needsIndirection6755;
    panda$core$String* separator6770;
    panda$collections$Iterator* p$Iter6794;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6806;
    panda$core$String* $tmp6744 = (($fn6743) self->$class->vtable[30])(self, p_m);
    name6742 = $tmp6744;
    panda$core$Bit $tmp6746 = (($fn6745) self->declared->$class->vtable[7])(self->declared, ((panda$collections$Key*) name6742));
    if ($tmp6746.value) {
    {
        return;
    }
    }
    (($fn6747) self->declared->$class->vtable[2])(self->declared, ((panda$core$Object*) ((panda$collections$Key*) name6742)));
    panda$core$String* $tmp6750 = (($fn6749) self->$class->vtable[40])(self, p_m);
    panda$core$String* $tmp6751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6748, $tmp6750);
    panda$core$String* $tmp6753 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6751, &$s6752);
    (($fn6754) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6753);
    panda$core$Bit $tmp6757 = (($fn6756) self->$class->vtable[24])(self, p_m);
    needsIndirection6755 = $tmp6757;
    if (needsIndirection6755.value) {
    {
        (($fn6759) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), &$s6758);
    }
    }
    else {
    {
        panda$core$String* $tmp6761 = (($fn6760) self->$class->vtable[15])(self, p_m->returnType);
        (($fn6762) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6761);
    }
    }
    panda$core$String* $tmp6765 = (($fn6764) self->$class->vtable[30])(self, p_m);
    panda$core$String* $tmp6766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6763, $tmp6765);
    panda$core$String* $tmp6768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6766, &$s6767);
    (($fn6769) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6768);
    separator6770 = &$s6771;
    if (needsIndirection6755.value) {
    {
        panda$core$String* $tmp6774 = (($fn6773) self->$class->vtable[15])(self, p_m->returnType);
        panda$core$String* $tmp6775 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6772, $tmp6774);
        panda$core$String* $tmp6777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6775, &$s6776);
        (($fn6778) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6777);
        separator6770 = &$s6779;
    }
    }
    panda$core$Bit $tmp6781 = (($fn6780) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp6782 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6781);
    if ($tmp6782.value) {
    {
        panda$core$String* $tmp6784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6783, separator6770);
        panda$core$String* $tmp6786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6784, &$s6785);
        panda$core$String* $tmp6788 = (($fn6787) self->$class->vtable[86])(self, p_m);
        panda$core$String* $tmp6789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6786, $tmp6788);
        panda$core$String* $tmp6791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6789, &$s6790);
        (($fn6792) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6791);
        separator6770 = &$s6793;
    }
    }
    {
        ITable* $tmp6795 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6795->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6795 = $tmp6795->next;
        }
        $fn6797 $tmp6796 = $tmp6795->methods[0];
        panda$collections$Iterator* $tmp6798 = $tmp6796(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6794 = $tmp6798;
        $l6799:;
        ITable* $tmp6801 = p$Iter6794->$class->itable;
        while ($tmp6801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6801 = $tmp6801->next;
        }
        $fn6803 $tmp6802 = $tmp6801->methods[0];
        panda$core$Bit $tmp6804 = $tmp6802(p$Iter6794);
        panda$core$Bit $tmp6805 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6804);
        if (!$tmp6805.value) goto $l6800;
        {
            ITable* $tmp6807 = p$Iter6794->$class->itable;
            while ($tmp6807->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6807 = $tmp6807->next;
            }
            $fn6809 $tmp6808 = $tmp6807->methods[1];
            panda$core$Object* $tmp6810 = $tmp6808(p$Iter6794);
            p6806 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6810);
            panda$core$String* $tmp6812 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6811, separator6770);
            panda$core$String* $tmp6814 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6812, &$s6813);
            panda$core$String* $tmp6816 = (($fn6815) self->$class->vtable[15])(self, p6806->type);
            panda$core$String* $tmp6817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6814, $tmp6816);
            panda$core$String* $tmp6819 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6817, &$s6818);
            panda$core$String* $tmp6821 = (($fn6820) self->$class->vtable[28])(self, p6806->name);
            panda$core$String* $tmp6822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6819, $tmp6821);
            panda$core$String* $tmp6824 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6822, &$s6823);
            (($fn6825) ((panda$io$OutputStream*) self->declarations)->$class->vtable[16])(((panda$io$OutputStream*) self->declarations), $tmp6824);
            separator6770 = &$s6826;
        }
        goto $l6799;
        $l6800:;
    }
    (($fn6828) ((panda$io$OutputStream*) self->declarations)->$class->vtable[19])(((panda$io$OutputStream*) self->declarations), &$s6827);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$MethodDecl$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$MethodDecl* p_m, org$pandalanguage$pandac$IRNode* p_body) {
    panda$core$String* separator6848;
    panda$collections$Iterator* p$Iter6861;
    org$pandalanguage$pandac$MethodDecl$Parameter* p6873;
    panda$io$MemoryOutputStream* bodyBuffer6897;
    panda$io$IndentedOutputStream* indentedBody6900;
    panda$collections$Iterator* s$Iter6903;
    org$pandalanguage$pandac$IRNode* s6915;
    self->currentMethod = p_m;
    self->currentBlock = &$s6829;
    self->varCount = ((panda$core$Int64) { 0 });
    (($fn6830) self->methodHeaderBuffer->$class->vtable[20])(self->methodHeaderBuffer);
    panda$core$String* $tmp6833 = (($fn6832) self->$class->vtable[40])(self, p_m);
    panda$core$String* $tmp6834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6831, $tmp6833);
    panda$core$String* $tmp6836 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6834, &$s6835);
    panda$core$String* $tmp6838 = (($fn6837) self->$class->vtable[15])(self, p_m->returnType);
    panda$core$String* $tmp6839 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6836, $tmp6838);
    panda$core$String* $tmp6841 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6839, &$s6840);
    panda$core$String* $tmp6843 = (($fn6842) self->$class->vtable[30])(self, p_m);
    panda$core$String* $tmp6844 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6841, $tmp6843);
    panda$core$String* $tmp6846 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6844, &$s6845);
    (($fn6847) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6846);
    separator6848 = &$s6849;
    panda$core$Bit $tmp6851 = (($fn6850) p_m->annotations->$class->vtable[5])(p_m->annotations);
    panda$core$Bit $tmp6852 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6851);
    if ($tmp6852.value) {
    {
        panda$core$String* $tmp6855 = (($fn6854) self->$class->vtable[86])(self, p_m);
        panda$core$String* $tmp6856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6853, $tmp6855);
        panda$core$String* $tmp6858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6856, &$s6857);
        (($fn6859) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6858);
        separator6848 = &$s6860;
    }
    }
    {
        ITable* $tmp6862 = ((panda$collections$Iterable*) p_m->parameters)->$class->itable;
        while ($tmp6862->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6862 = $tmp6862->next;
        }
        $fn6864 $tmp6863 = $tmp6862->methods[0];
        panda$collections$Iterator* $tmp6865 = $tmp6863(((panda$collections$Iterable*) p_m->parameters));
        p$Iter6861 = $tmp6865;
        $l6866:;
        ITable* $tmp6868 = p$Iter6861->$class->itable;
        while ($tmp6868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6868 = $tmp6868->next;
        }
        $fn6870 $tmp6869 = $tmp6868->methods[0];
        panda$core$Bit $tmp6871 = $tmp6869(p$Iter6861);
        panda$core$Bit $tmp6872 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6871);
        if (!$tmp6872.value) goto $l6867;
        {
            ITable* $tmp6874 = p$Iter6861->$class->itable;
            while ($tmp6874->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6874 = $tmp6874->next;
            }
            $fn6876 $tmp6875 = $tmp6874->methods[1];
            panda$core$Object* $tmp6877 = $tmp6875(p$Iter6861);
            p6873 = ((org$pandalanguage$pandac$MethodDecl$Parameter*) $tmp6877);
            panda$core$String* $tmp6879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6878, separator6848);
            panda$core$String* $tmp6881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6879, &$s6880);
            panda$core$String* $tmp6883 = (($fn6882) self->$class->vtable[15])(self, p6873->type);
            panda$core$String* $tmp6884 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6881, $tmp6883);
            panda$core$String* $tmp6886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6884, &$s6885);
            panda$core$String* $tmp6888 = (($fn6887) self->$class->vtable[28])(self, p6873->name);
            panda$core$String* $tmp6889 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6886, $tmp6888);
            panda$core$String* $tmp6891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6889, &$s6890);
            (($fn6892) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6891);
            separator6848 = &$s6893;
        }
        goto $l6866;
        $l6867:;
    }
    (($fn6895) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6894);
    panda$core$Int64 $tmp6896 = panda$core$Int64$$ADD$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6896;
    panda$io$MemoryOutputStream* $tmp6898 = (panda$io$MemoryOutputStream*) malloc(24);
    $tmp6898->$class = (panda$core$Class*) &panda$io$MemoryOutputStream$class;
    $tmp6898->refCount.value = 1;
    panda$io$MemoryOutputStream$init($tmp6898);
    bodyBuffer6897 = $tmp6898;
    panda$io$IndentedOutputStream* $tmp6901 = (panda$io$IndentedOutputStream*) malloc(48);
    $tmp6901->$class = (panda$core$Class*) &panda$io$IndentedOutputStream$class;
    $tmp6901->refCount.value = 1;
    panda$io$IndentedOutputStream$init$panda$io$OutputStream($tmp6901, ((panda$io$OutputStream*) bodyBuffer6897));
    indentedBody6900 = $tmp6901;
    {
        ITable* $tmp6904 = ((panda$collections$Iterable*) p_body->children)->$class->itable;
        while ($tmp6904->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
            $tmp6904 = $tmp6904->next;
        }
        $fn6906 $tmp6905 = $tmp6904->methods[0];
        panda$collections$Iterator* $tmp6907 = $tmp6905(((panda$collections$Iterable*) p_body->children));
        s$Iter6903 = $tmp6907;
        $l6908:;
        ITable* $tmp6910 = s$Iter6903->$class->itable;
        while ($tmp6910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
            $tmp6910 = $tmp6910->next;
        }
        $fn6912 $tmp6911 = $tmp6910->methods[0];
        panda$core$Bit $tmp6913 = $tmp6911(s$Iter6903);
        panda$core$Bit $tmp6914 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6913);
        if (!$tmp6914.value) goto $l6909;
        {
            ITable* $tmp6916 = s$Iter6903->$class->itable;
            while ($tmp6916->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                $tmp6916 = $tmp6916->next;
            }
            $fn6918 $tmp6917 = $tmp6916->methods[1];
            panda$core$Object* $tmp6919 = $tmp6917(s$Iter6903);
            s6915 = ((org$pandalanguage$pandac$IRNode*) $tmp6919);
            (($fn6920) self->$class->vtable[85])(self, s6915, indentedBody6900);
        }
        goto $l6908;
        $l6909:;
    }
    panda$core$String* $tmp6922 = (($fn6921) self->methodHeaderBuffer->$class->vtable[0])(self->methodHeaderBuffer);
    (($fn6923) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6922);
    panda$core$String* $tmp6925 = (($fn6924) bodyBuffer6897->$class->vtable[0])(bodyBuffer6897);
    (($fn6926) ((panda$io$OutputStream*) self->methods)->$class->vtable[16])(((panda$io$OutputStream*) self->methods), $tmp6925);
    panda$core$Bit $tmp6928 = (($fn6927) self->$class->vtable[7])(self, p_body);
    panda$core$Bit $tmp6929 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp6928);
    if ($tmp6929.value) {
    {
        org$pandalanguage$pandac$Type* $tmp6930 = org$pandalanguage$pandac$Type$Void$R$org$pandalanguage$pandac$Type();
        panda$core$Bit $tmp6932 = (($fn6931) p_m->returnType->$class->vtable[4])(p_m->returnType, ((panda$core$Object*) $tmp6930));
        if ($tmp6932.value) {
        {
            (($fn6934) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6933);
        }
        }
        else {
        {
            (($fn6936) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6935);
        }
        }
    }
    }
    panda$core$Int64 $tmp6937 = panda$core$Int64$$SUB$panda$core$Int64$R$panda$core$Int64(self->methods->level, ((panda$core$Int64) { 1 }));
    self->methods->level = $tmp6937;
    (($fn6939) ((panda$io$OutputStream*) self->methods)->$class->vtable[19])(((panda$io$OutputStream*) self->methods), &$s6938);
    self->currentMethod = NULL;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$write$org$pandalanguage$pandac$ClassDecl(org$pandalanguage$pandac$LLVMCodeGenerator* self, org$pandalanguage$pandac$ClassDecl* p_cl) {
    org$pandalanguage$pandac$Type* $tmp6941 = (($fn6940) p_cl->$class->vtable[3])(p_cl);
    (($fn6942) self->$class->vtable[12])(self, $tmp6941);
    (($fn6943) self->$class->vtable[26])(self, p_cl);
}
void org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$ClassConstant* self, panda$core$String* p_name, panda$core$String* p_type) {
    self->name = p_name;
    self->type = p_type;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim$init$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$MethodShim* self, panda$core$String* p_name, panda$core$String* p_type) {
    self->name = p_name;
    self->type = p_type;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$init$panda$core$String$Q$panda$core$String$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* self, panda$core$String* p_loopLabel, panda$core$String* p_breakLabel, panda$core$String* p_continueLabel) {
    self->loopLabel = p_loopLabel;
    self->breakLabel = p_breakLabel;
    self->continueLabel = p_continueLabel;
}
panda$core$String* org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor$convert$R$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$LoopDescriptor* self) {
    if (((panda$core$Bit) { self->loopLabel != NULL }).value) {
    {
        panda$core$String* $tmp6945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s6944, self->loopLabel);
        panda$core$String* $tmp6947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp6945, &$s6946);
        return $tmp6947;
    }
    }
    else {
    {
        return &$s6948;
    }
    }
}
void org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext$init$panda$core$String$panda$core$String$panda$collections$ListView$LTpanda$core$String$GT$panda$core$String(org$pandalanguage$pandac$LLVMCodeGenerator$InlineContext* self, panda$core$String* p_varSuffix, panda$core$String* p_selfRef, panda$collections$ListView* p_argRefs, panda$core$String* p_exitLabel) {
    panda$collections$Array* $tmp6949 = (panda$collections$Array*) malloc(40);
    $tmp6949->$class = (panda$core$Class*) &panda$collections$Array$class;
    $tmp6949->refCount.value = 1;
    panda$collections$Array$init($tmp6949);
    self->returns = $tmp6949;
    self->varSuffix = p_varSuffix;
    self->selfRef = p_selfRef;
    panda$collections$ImmutableArray* $tmp6951 = (panda$collections$ImmutableArray*) malloc(32);
    $tmp6951->$class = (panda$core$Class*) &panda$collections$ImmutableArray$class;
    $tmp6951->refCount.value = 1;
    panda$collections$ImmutableArray$init$panda$collections$ListView$LTpanda$collections$ImmutableArray$T$GT($tmp6951, p_argRefs);
    self->argRefs = $tmp6951;
    self->exitLabel = p_exitLabel;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$Pair$init$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$A$org$pandalanguage$pandac$LLVMCodeGenerator$Pair$B(org$pandalanguage$pandac$LLVMCodeGenerator$Pair* self, panda$core$Object* p_first, panda$core$Object* p_second) {
    self->first = p_first;
    self->second = p_second;
}
void org$pandalanguage$pandac$LLVMCodeGenerator$OpClass$init(org$pandalanguage$pandac$LLVMCodeGenerator$OpClass* self) {
}

